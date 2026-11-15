#!/usr/bin/env python3
"""snapcases.py: equiv cases from real game state, for the game functions the cases cover worst. Run in the repo.

    python3 tools/6-agentic/snapcases.py [--max-cov 0.6] [--min-gap 40] [--per-snap 2] [--write] [snapshot ...] [-- name ...]

For each RAM snapshot of the ORIGINAL taken at the frame loop's scene call (tools/6-agentic/framesnap.py, work/dumps/frame/*.ram/.json),
the frame runs in sh4sim (as tools/6-agentic/frametest.py does, START=0C01B0CE). At the first entries of each target function the
whole state is kept; then, from that state:
  1. the function runs with every call real, and the answer (r0, fr0) of each of its own calls is recorded (the compiler's
     runtime helpers excepted: equiv runs those for real);
  2. it runs as equiv.py runs the original (calls mocked with those answers), and every RAM byte it reads before writing it is
     recorded;
  3. a case is made of the entry registers (r4-r7, fr4-fr11, r8-r14, gbr), the stack words at its entry (as frametest pokes
     them), those bytes as pokes and the answers as "calls";
  4. the case runs once more from 1ST_READ.BIN plus its pokes, as equiv will: it is kept only when the original takes exactly the
     same path (the same instructions, the same steps) as from the full state.
No snapshot byte is kept but what the function reads. Without --write the cases are only counted; with it they are appended to
tests/<file>/<function>.json as holdout cases ("about": "snapshot <label> #<n>"), to be proven with tools/equiv.py.
Targets: game functions (built from C) whose cases run less than --max-cov of their instructions with at least --min-gap
instructions not run (docs/equivalent.md), or the names after --.
"""
import collections, json, os, re, struct, sys, time
sys.path.insert(0, os.path.normpath(os.path.join(os.path.dirname(os.path.abspath(__file__)), '..')))
import toolpath  # noqa: F401
import sh4sim, layout

args = sys.argv[1:]
names = []
if '--' in args:
    names = args[args.index('--') + 1:]; args = args[:args.index('--')]
opt = {'--max-cov': 0.6, '--min-gap': 40, '--per-snap': 2, '--max-poke': 16384}
write = False
snaps = []
while args:
    a = args.pop(0)
    if a == '--write': write = True
    elif a in opt: opt[a] = type(opt[a])(args.pop(0))
    else: snaps.append(a)
if not snaps:
    snaps = sorted(os.path.splitext(f)[0] for f in os.listdir('work/dumps/frame') if f.endswith('.json'))
SCR = os.environ.get('SNAPTMP', 'build/snapcases')      # 16 MB state files, one at a time, removed after use
os.makedirs(SCR, exist_ok=True)

def say(m): print(m, flush=True)

FUN = {n: (a, s) for a, s, n in layout.functions()}
runtime = {a & 0x1FFFFFFF for a, s, n in layout.functions() if n.startswith('_')}
for l in open('symbols.txt'):                         # the compiler's helpers named there too (_quick_odd_mvn = FUN_0c07ff00): equiv runs them
    p_ = l.split()
    if len(p_) >= 2 and re.fullmatch(r'[0-9A-Fa-f]{8}', p_[0]) and p_[1].startswith('_'):
        runtime.add(int(p_[0], 16) & 0x1FFFFFFF)
# where each function's C and cases live
cfile = {}
for f in os.listdir('src'):
    if f.endswith('.c'):
        for m in re.finditer(r'(?m)^(?:unsigned\s+)?(?:int|void|float|short|char|Stk\d+)\s+\**(\w+)\s*\([^;{]*\)\s*\n\{', open('src/' + f, errors='replace').read()):
            cfile.setdefault(m.group(1), f[:-2])
# each function's result register, from its C definition (float: fr0; void: none; else r0); a function without C: r0
rtype = {}
for f in os.listdir('src'):
    if f.endswith('.c'):
        for m in re.finditer(r'(?m)^(unsigned\s+)?(int|void|float|short|char|Stk\d+)\s+(\**)(\w+)\s*\([^;{]*\)\s*\n\{', open('src/' + f, errors='replace').read()):
            rtype.setdefault(m.group(4), 'fr0' if m.group(2) == 'float' and not m.group(3) else None if m.group(2) == 'void' and not m.group(3) else 'r0')
name_at = {(a & 0x1FFFFFFF): n for a, s, n in layout.functions()}
cov = {}
cur = None
import subprocess
_doc = subprocess.run(['git', 'show', 'HEAD:docs/equivalent.md'], capture_output=True, text=True).stdout   # the committed coverage: targets
for l in _doc.splitlines(True):                                                                         # do not shift with the cases added
    m = re.match(r'^#+\s*`?([A-Za-z_]\w*)`?', l)
    if m: cur = m.group(1)
    m2 = re.search(r'the cases run (\d+) of (\d+) instructions', l)
    if m2 and cur: cov[cur] = (int(m2.group(1)), int(m2.group(2))); cur = None
if names:
    targets = set(names)
else:
    targets = {n for n, (r, t) in cov.items() if t and r / t < opt['--max-cov'] and t - r >= opt['--min-gap']
               and n in FUN and layout.moving(FUN[n][0]) and n in cfile and os.path.exists('tests/%s/%s.json' % (cfile[n], n))}
entry_of = {(FUN[n][0] & 0x1FFFFFFF): n for n in targets if n in FUN}
say('%d target functions' % len(targets))

def is_call(op):
    return (op & 0xF0FF) == 0x400B or (op & 0xF000) == 0xB000 or (op & 0xF0FF) == 0x0003
def is_jmp(op):
    return (op & 0xF0FF) == 0x402B or (op & 0xF0FF) == 0x0023 or (op & 0xF000) == 0xA000

def ram_image(mem):
    out = bytearray(0x1000000)
    for pn, page in mem.pages.items():
        a = pn << 12
        if 0x0C000000 <= a < 0x0D000000:
            out[a - 0x0C000000:a - 0x0C000000 + 4096] = page
    return out

def capture(label, j):
    """run the frame; at the first entries of each target keep (regs, stack words, RAM image path)"""
    g = struct.unpack('<%dI' % (len(bytes.fromhex(j['g'])) // 4), bytes.fromhex(j['g']))
    root_a, root_s = FUN['FUN_0c01b026']
    c0 = {'dump': 'work/dumps/frame/%s.ram' % label, 'entry': '0C01B0CE', 'end': '%08X' % ((root_a | 0x8C000000) + root_s),
          'steps': 3000000, 'hw_model': True, 'regs': {'r%d' % i: '%08X' % g[i] for i in range(16)}}
    c0['regs'].update({'fr%d' % i: '%08X' % g[25 + i] for i in range(16)})
    c0['regs'].update({'gbr': '%08X' % j['gbr'], 'vbr': '%08X' % j['vbr']})
    seen = collections.Counter(); caps = []
    Base = sh4sim.CPU
    class CPU(Base):
        def step(self, in_slot=False):
            n = entry_of.get(self.pc & 0x1FFFFFFF)
            if n and not in_slot and seen[n] < opt['--per-snap']:
                seen[n] += 1
                k = len(caps)
                path = '%s/%s_%d.ram' % (SCR, label, k)
                open(path, 'wb').write(ram_image(self.m))
                sw = [self.m.read((self.r[15] + 4 * i) & 0xFFFFFFFF, 4, True) & 0xFFFFFFFF for i in range(16)]
                caps.append((n, list(self.r[:15]), list(self.fr[:16]), self.gbr, sw, path, seen[n]))
            return Base.step(self, in_slot=in_slot)
    sh4sim.CPU = CPU
    try:
        sh4sim.run(c0, '.', deep=True)
    finally:
        sh4sim.CPU = Base
    return caps

def base_case(n, r, fr, gbr, sw):
    a, s = FUN[n]
    regs = {'r%d' % i: '%08X' % (r[i] & 0xFFFFFFFF) for i in list(range(4, 8)) + list(range(8, 15))}
    regs.update({'fr%d' % i: '%08X' % fr[i] for i in range(4, 12)})
    regs['gbr'] = '%08X' % gbr
    return {'entry': '%08X' % (a | 0x8C000000), 'end': '%08X' % ((a | 0x8C000000) + s), 'regs': regs,
            'poke': {'0DFFFF00': b''.join(w.to_bytes(4, 'little') for w in sw).hex()}}

def answers(n, case):
    """run with every call real: the answers of the function's own calls, in order"""
    a, s = FUN[n]; lo, hi = a & 0x1FFFFFFF, (a & 0x1FFFFFFF) + s
    out = []; pend = []
    Base = sh4sim.CPU
    class CPU(Base):
        def step(self, in_slot=False):
            p = self.pc & 0x1FFFFFFF
            if pend and p == pend[-1][0] and self.r[15] == pend[-1][1]:
                _, _, tg = pend.pop()
                rt = rtype.get(name_at.get(tg | 0x0C000000 if tg < 0x0C000000 else tg), 'r0')
                out.append({} if rt is None else {'fr0': '%08X' % self.fr[0]} if rt == 'fr0' else {'r0': '%08X' % (self.r[0] & 0xFFFFFFFF)})
            if lo <= p < hi and not in_slot:
                op = self.m.read(self.pc, 2, True)
                if is_call(op):
                    if (op & 0xF000) == 0xB000:
                        d = op & 0xFFF; d = d - 0x1000 if d & 0x800 else d; t = (p + 4 + 2 * d)
                    elif (op & 0xF0FF) == 0x400B: t = self.r[(op >> 8) & 15] & 0x1FFFFFFF
                    else: t = (p + 4 + self.r[(op >> 8) & 15]) & 0x1FFFFFFF
                    if (t | 0x0C000000) & 0x1FFFFFFF not in runtime and (t & 0x1FFFFFFF) not in runtime:
                        pend.append(((p + 4) & 0x1FFFFFFF, self.r[15], t & 0x1FFFFFFF))
                elif (op & 0xF0FF) == 0x402B:
                    t = self.r[(op >> 8) & 15] & 0x1FFFFFFF
                    if not lo <= t < hi and t not in runtime:
                        out.append(('TAIL', t))
            return Base.step(self, in_slot=in_slot)
    sh4sim.CPU = CPU
    try:
        r = sh4sim.run(dict(case, steps=3000000), '.', deep=True)
    finally:
        sh4sim.CPU = Base
    if out and isinstance(out[-1], tuple):
        rt = rtype.get(name_at.get(out[-1][1] | 0x0C000000 if out[-1][1] < 0x0C000000 else out[-1][1]), 'r0')
        out[-1] = {} if rt is None else {'fr0': r['out'].get('fr0', '00000000')} if rt == 'fr0' else {'r0': r['out'].get('r0', '00000000')}
    out = [x for x in out if not isinstance(x, tuple)]
    return out, r

def run_orig(case, track=False):
    """as equiv.py runs the original; with track, the RAM bytes read before written"""
    reads = {}
    if track:
        Mem = sh4sim.Memory
        class M(Mem):
            def __init__(self):
                super().__init__(); self._w = set()
            def read(self, addr, size, fetch=False):
                v = Mem.read(self, addr, size, fetch)
                if not fetch:
                    a = self.phys(addr)
                    if 0x0C000000 <= a < 0x0D000000 and not (0x0DFFE000 <= a < 0x0E000000):
                        for k in range(size):
                            if a + k not in self._w and a + k not in reads:
                                reads[a + k] = (v >> (8 * k)) & 0xFF
                return v
            def write(self, addr, size, value):
                a = self.phys(addr)
                for k in range(size): self._w.add(a + k)
                return Mem.write(self, addr, size, value)
        sh4sim.Memory = M
    try:
        r = sh4sim.run(case, '.', deep=lambda t: (t & 0x1FFFFFFF) in runtime)
    finally:
        if track: sh4sim.Memory = Mem
    return r, reads

def runs(reads):
    out = {}; ks = sorted(reads); i = 0
    while i < len(ks):
        j = i
        while j + 1 < len(ks) and ks[j + 1] == ks[j] + 1: j += 1
        out['%08X' % ks[i]] = bytes(reads[k] for k in ks[i:j + 1]).hex(); i = j + 1
    return out

base = int(open('BASE').read().strip(), 16)
EXE = open('1ST_READ.BIN', 'rb').read()
made = collections.defaultdict(list); stats = collections.Counter()
for label in snaps:
    label = os.path.basename(label)
    j = json.load(open('work/dumps/frame/%s.json' % label))
    t0 = time.time()
    caps = capture(label, j)
    say('%s: %d entries of %d targets  (%.0fs)' % (label, len(caps), len({c[0] for c in caps}), time.time() - t0))
    for n, r, fr, gbr, sw, path, k in caps:
        case = base_case(n, r, fr, gbr, sw)
        full = dict(case, dump=path)
        ans, rdeep = answers(n, full)
        full['calls'] = ans
        ro, reads = run_orig(full, track=True)
        os.remove(path)
        if ro['error']:
            stats['original stops'] += 1; continue
        reads = {a: v for a, v in reads.items()
                 if not (base & 0x1FFFFFFF) <= a < (base & 0x1FFFFFFF) + len(EXE) or EXE[a - (base & 0x1FFFFFFF)] != v}
        pk = runs(reads)
        size = sum(len(v) // 2 for v in pk.values())
        if size > opt['--max-poke']:
            stats['too many bytes'] += 1; continue
        final = dict(case); final['poke'] = dict(case['poke']); final['poke'].update(pk); final['calls'] = ans
        final['about'] = 'snapshot %s #%d: the state at its entry in that frame (%d bytes read, %d call answers)' % (label, k, size, len(ans))
        rv, _ = run_orig(dict(final, exe='1ST_READ.BIN', base='%08X' % base))
        if rv['error'] or rv['steps'] != ro['steps'] or set(rv.get('covered', [])) != set(ro.get('covered', [])):
            stats['path differs from pokes'] += 1; continue
        stats['kept'] += 1
        made[n].append((final, set(ro.get('covered', []))))

say('cases: %s' % dict(stats))
gain = 0
for n in sorted(made):
    r_, t_ = cov.get(n, (0, 0))
    cs = made[n]
    newcov = set().union(*[c[1] for c in cs])
    say('  %-30s %d case(s), the new cases run %d instructions (the old ones %d of %d)' % (n, len(cs), len(newcov), r_, t_))
    if write:
        p = 'tests/%s/%s.json' % (cfile[n], n)
        d = json.load(open(p))
        if isinstance(d, list): d = {'dev': d, 'holdout': []}
        d.setdefault('holdout', []).extend(c[0] for c in cs)
        json.dump(d, open(p, 'w'), indent=1)
if write:
    say('written into %d case files; prove with tools/equiv.py -q on: %s' % (len(made), ' '.join(sorted({'src/%s.c' % cfile[n] for n in made}))))
