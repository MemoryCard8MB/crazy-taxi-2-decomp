#!/usr/bin/env python3
"""mutcases.py: equiv cases by mutation, for the game functions the cases cover worst. Run in the repo. No emulator needed.

    python3 tools/6-agentic/mutcases.py [--max-cov 0.75] [--min-gap 40] [--top 0] [--time 90] [--keep 200] [--write] [--list] [-- name ...]
    (--list: print the targets, worst first, and stop; tools/6-agentic/mutpar.sh runs them in parallel)

For each target function the ORIGINAL runs (in sh4sim, as equiv.py runs it: calls mocked, the compiler's runtime helpers real) on its
existing cases, with a trace of every instruction and a log of every memory read and write by trace position. Then:
  1. frontier: every conditional branch (bt, bf, bt/s, bf/s) one of whose two successors no case has reached yet;
  2. slice: from the branch back to the instruction that set T (cmp/*, tst, dt, fcmp/*, a shift), and from its operands back
     through register moves and arithmetic, through stores into memory (a value the function stored and loaded back), and through
     the index of a load from a constant table (a switch), to what decides them: a RAM byte the case can poke, an entry register
     (r4-r14, fr4-fr11), or the answer of a mocked call (in the register the callee's C definition returns: none for void);
  3. mutate: such an input gets values derived from the comparison (its other operand, +-1, the tested bits), small numbers,
     single bits, or a pointer to a fresh zeroed block (an object the function then reads as all zeros); the mutant runs, and it
     is kept only when the original runs to its return without an error and reaches instructions no case reached before;
  4. kept mutants are parents too, until --time seconds per function are used or no frontier is left.
No byte of the executable's code (layout `code`) is ever poked. With --write the kept mutants (at most --keep per function, the ones
reaching most first) are appended to tests/<file>/<function>.json as holdout cases ("about": "mutant of <parent>: <changes>"), to be
proven with tools/equiv.py like any case: a mutant the C fails is a state the cases had not tried (a real difference, or an input
the game never makes: look at it with work/fix9/showcalls.py before dropping it).
Targets: game functions (built from C) whose committed coverage (git show HEAD:docs/equivalent.md) is below --max-cov with at least
--min-gap instructions not run, worst first (--top N: only the N with most instructions not run), or the names after --.
"""
import bisect, json, os, re, struct, subprocess, sys, time
sys.path.insert(0, os.path.normpath(os.path.join(os.path.dirname(os.path.abspath(__file__)), '..')))
import toolpath  # noqa: F401
import sh4sim, layout

args = sys.argv[1:]
names = []
if '--' in args:
    names = args[args.index('--') + 1:]; args = args[:args.index('--')]
    args += [a for a in names if a in ('--list', '--write')]          # flags given after the names (mutpar.sh appends them)
    names = [a for a in names if a not in ('--list', '--write')]
opt = {'--max-cov': 0.75, '--min-gap': 40, '--top': 0, '--time': 90.0, '--keep': 200}
write = False
listonly = False
while args:
    a = args.pop(0)
    if a == '--write': write = True
    elif a == '--list': listonly = True
    elif a in opt: opt[a] = type(opt[a])(args.pop(0))
    else: sys.exit(__doc__)

def say(m): print(m, flush=True)

M32 = 0xFFFFFFFF
BASE = int(open('BASE').read().split()[0], 16)
CODE_LO, CODE_HI = 0x0C010000, 0x0C0964C8
for l in open('layout.txt'):
    p = l.split()
    if len(p) >= 3 and p[0] == 'code':
        CODE_LO, CODE_HI = int(p[1], 16) & 0x1FFFFFFF, int(p[2], 16) & 0x1FFFFFFF
FUN = {n: (a, s) for a, s, n in layout.functions()}
runtime = {a & 0x1FFFFFFF for a, s, n in layout.functions() if n.startswith('_')}
for l in open('symbols.txt'):
    p_ = l.split()
    if len(p_) >= 2 and re.fullmatch(r'[0-9A-Fa-f]{8}', p_[0]) and p_[1].startswith('_'):
        runtime.add(int(p_[0], 16) & 0x1FFFFFFF)
cfile, rtype = {}, {}
for f in os.listdir('src'):
    if f.endswith('.c'):
        for m in re.finditer(r'(?m)^(unsigned\s+)?(int|void|float|short|char|Stk\d+)\s+(\**)(\w+)\s*\([^;{]*\)\s*\n\{', open('src/' + f, errors='replace').read()):
            cfile.setdefault(m.group(4), f[:-2])
            rtype.setdefault(m.group(4), 'fr0' if m.group(2) == 'float' and not m.group(3) else None if m.group(2) == 'void' and not m.group(3) else 'r0')
name_at = {(a & 0x1FFFFFFF): n for a, s, n in layout.functions()}
bb = sh4sim.body_before('.')

cov = {}
cur = None
for l in subprocess.run(['git', 'show', 'HEAD:docs/equivalent.md'], capture_output=True, text=True).stdout.splitlines():
    m = re.match(r'^#+\s*`?([A-Za-z_]\w*)`?', l)
    if m: cur = m.group(1)
    m2 = re.search(r'the cases run (\d+) of (\d+) instructions', l)
    if m2 and cur: cov[cur] = (int(m2.group(1)), int(m2.group(2))); cur = None
if names:
    targets = list(names)
else:
    targets = [n for n, (r, t) in cov.items() if t and r / t < opt['--max-cov'] and t - r >= opt['--min-gap']
               and n in FUN and layout.moving(FUN[n][0]) and n in cfile and os.path.exists('tests/%s/%s.json' % (cfile[n], n))]
    targets.sort(key=lambda n: -(cov[n][1] - cov[n][0]))
    if opt['--top']:
        targets = targets[:opt['--top']]
if listonly:
    print('\n'.join(targets)); sys.exit(0)
say("%d target functions" % len(targets)) if __name__ == "__main__" else None

# ---------------------------------------------------------------------------------------------------------------- running

BaseMem, BaseCPU = sh4sim.Memory, sh4sim.CPU

class Mem(BaseMem):
    """the simulator's memory, logging each data read and write with the trace position of the instruction doing it"""
    def __init__(self):
        super().__init__()
        self.tick = 0; self.rlog = []; self.wlog = {}
    def read(self, addr, size, fetch=False):
        v = BaseMem.read(self, addr, size, fetch)
        if not fetch:
            self.rlog.append((self.tick, self.phys(addr), size, v))
        return v
    def write(self, addr, size, value):
        a = self.phys(addr)
        for k in range(size):
            self.wlog.setdefault(a + k, []).append(self.tick)
        return BaseMem.write(self, addr, size, value)

class CPU(BaseCPU):
    def step(self, in_slot=False):
        if self.trace is not None:
            self.m.tick = len(self.trace)
            if not getattr(self, '_wrapped', False) and self.on_call:
                inner = self.on_call
                def oc(c, t, kind, at, inner=inner):
                    r = inner(c, t, kind, at)
                    if r:
                        self.mocks.append((len(self.trace), t & 0x1FFFFFFF))
                    return r
                self.on_call = oc; self._wrapped = True; self.mocks = []
        return BaseCPU.step(self, in_slot=in_slot)

LAST = {}
def run(fn, case, trace=False, steps=None):
    a, s = FUN[fn]
    c = dict(case, exe='1ST_READ.BIN', base='%08X' % BASE, entry='%08X' % a, end='%08X' % (a + s))
    if steps: c['steps'] = steps
    if trace: c['trace'] = True
    B1, B2 = sh4sim.Memory, sh4sim.CPU
    sh4sim.Memory, sh4sim.CPU = Mem, CPU
    holder = {}
    orig_init = CPU.__init__
    def init(self, mem, *a_, **k_):
        orig_init(self, mem, *a_, **k_); holder['cpu'] = self; holder['mem'] = mem
    CPU.__init__ = init
    try:
        r = sh4sim.run(c, '.', deep=lambda t: (t & 0x1FFFFFFF) in runtime)
    finally:
        sh4sim.Memory, sh4sim.CPU = B1, B2
        CPU.__init__ = orig_init
    if trace:
        cpu, mem = holder['cpu'], holder['mem']
        r['_mem'] = mem; r['_mocks'] = getattr(cpu, 'mocks', [])
    return r

# ---------------------------------------------------------------------------------------------------------------- decoding

def s8(x): return x - 0x100 if x & 0x80 else x

def cond_branch(op, pc):
    """(taken target, fall-through) of bt/bf/bt/s/bf/s, else None"""
    h = op >> 8
    if h in (0x89, 0x8B, 0x8D, 0x8F):
        return (pc + 4 + 2 * s8(op & 0xFF)) & M32, (pc + (4 if h in (0x8D, 0x8F) else 2)) & M32
    return None

def dests(op):
    n, m, hi, lo4 = (op >> 8) & 15, (op >> 4) & 15, op >> 12, op & 15
    d = set()
    if hi == 6:
        d.add(('r', n))
        if lo4 in (4, 5, 6): d.add(('r', m))
    elif hi in (7, 0xE, 0xD, 9, 5): d.add(('r', n))
    elif hi == 3 and lo4 in (0xC, 8, 0xE, 0xA, 0xF, 0xB, 4): d.add(('r', n))
    elif hi == 2 and lo4 in (9, 0xA, 0xB): d.add(('r', n))
    elif hi == 2 and lo4 in (4, 5, 6): d.add(('r', n))
    elif hi == 1: pass
    elif (op >> 8) in (0xC7, 0xC9, 0xCA, 0xCB, 0xC4, 0xC5, 0xC6, 0x84, 0x85): d.add(('r', 0))
    elif hi == 4 and (op & 0xFF) in (0x00, 0x01, 0x20, 0x21, 0x08, 0x09, 0x18, 0x19, 0x28, 0x29, 0x04, 0x05, 0x24, 0x25, 0x10): d.add(('r', n))
    elif hi == 4 and lo4 in (0xC, 0xD): d.add(('r', n))
    elif hi == 0 and lo4 in (0xC, 0xD, 0xE): d.add(('r', n))
    elif hi == 0 and (op & 0xFF) in (0x29, 0x0A, 0x1A, 0x5A, 0x6A, 0x02, 0x12, 0x22): d.add(('r', n))
    elif hi == 0xF:
        if lo4 in (0, 1, 2, 3, 6, 8, 9, 0xC, 0xE): d.add(('f', n))
        elif lo4 == 0xD and m in (2, 4, 5, 6, 8, 9): d.add(('f', n))
    return d

LOAD = 'LOAD'; CONST = 'CONST'; STOP = 'STOP'; FPUL = 'FPUL'

def srcs(op):
    """what instruction op's written value is made of: a list of registers, or LOAD (from memory: the read log tells), CONST, FPUL, STOP"""
    n, m, hi, lo4, lo8 = (op >> 8) & 15, (op >> 4) & 15, op >> 12, op & 15, op & 0xFF
    if hi == 6:
        if lo4 in (0, 1, 2, 4, 5, 6): return LOAD
        return [('r', m)]
    if hi == 7: return [('r', n)]
    if hi in (0xE, 0xD, 9): return CONST
    if hi == 5: return LOAD
    if hi == 3 and lo4 in (0xC, 8, 0xE, 0xA, 0xF, 0xB): return [('r', n), ('r', m)]
    if hi == 2 and lo4 in (9, 0xA, 0xB): return [('r', n), ('r', m)]
    if (op >> 8) in (0xC9, 0xCA, 0xCB): return [('r', 0)]
    if (op >> 8) in (0xC4, 0xC5, 0xC6, 0x84, 0x85): return LOAD
    if (op >> 8) == 0xC7: return CONST
    if hi == 4 and lo8 in (0x00, 0x01, 0x20, 0x21, 0x08, 0x09, 0x18, 0x19, 0x28, 0x29, 0x04, 0x05, 0x24, 0x25, 0x10): return [('r', n)]
    if hi == 4 and lo4 in (0xC, 0xD): return [('r', n), ('r', m)]
    if hi == 0 and lo4 in (0xC, 0xD, 0xE): return LOAD
    if hi == 0 and lo8 == 0x5A: return FPUL
    if hi == 0xF:
        if lo4 in (6, 8, 9): return LOAD
        if lo4 == 0xC: return [('f', m)]
        if lo4 in (0, 1, 2, 3): return [('f', n), ('f', m)]
        if lo4 == 0xE: return [('f', 0), ('f', m), ('f', n)]
        if lo4 == 0xD:
            if m in (8, 9): return CONST
            if m in (4, 5, 6): return [('f', n)]
            if m == 2: return FPUL
    return STOP

def load_addr_regs(op):
    """the registers a load's address comes from (for a load from a constant table: follow the index)"""
    n, m, hi, lo4 = (op >> 8) & 15, (op >> 4) & 15, op >> 12, op & 15
    if hi == 6 or hi == 5: return [('r', m)]
    if (op >> 8) in (0x84, 0x85): return [('r', m)]
    if hi == 0 and lo4 in (0xC, 0xD, 0xE): return [('r', 0), ('r', m)]
    if hi == 0xF and lo4 == 6: return [('r', 0), ('r', m)]
    if hi == 0xF and lo4 in (8, 9): return [('r', m)]
    if (op >> 8) in (0xC4, 0xC5, 0xC6): return [('r', 0)] if False else []
    return []

def store_src(op):
    """the register a store writes, or None when op is not a store"""
    n, m, hi, lo4 = (op >> 8) & 15, (op >> 4) & 15, op >> 12, op & 15
    if hi == 2 and lo4 in (0, 1, 2, 4, 5, 6): return ('r', m)
    if hi == 1: return ('r', m)
    if (op >> 8) in (0x80, 0x81, 0xC0, 0xC1, 0xC2): return ('r', 0)
    if hi == 0 and lo4 in (4, 5, 6): return ('r', m)
    if hi == 0xF and lo4 in (0xA, 0xB, 7): return ('f', m)
    return None

def tsetter(op):
    """(kind, sources, immediate) when op sets T; None when it does not touch T"""
    n, m, hi, lo4, lo8 = (op >> 8) & 15, (op >> 4) & 15, op >> 12, op & 15, op & 0xFF
    if hi == 3 and lo4 in (0, 2, 3, 6, 7): return ({0: 'eq', 2: 'hs', 3: 'ge', 6: 'hi', 7: 'gt'}[lo4], [('r', n), ('r', m)], None)
    if hi == 2 and lo4 == 8: return ('tst', [('r', n), ('r', m)], None)
    if hi == 2 and lo4 == 0xC: return ('str', [('r', n), ('r', m)], None)
    if hi == 4 and lo8 in (0x15, 0x11, 0x10): return ({0x15: 'pl', 0x11: 'pz', 0x10: 'dt'}[lo8], [('r', n)], None)
    if (op >> 8) == 0x88: return ('eqi', [('r', 0)], s8(lo8) & M32)
    if (op >> 8) == 0xC8: return ('tsti', [('r', 0)], lo8)
    if (op >> 8) == 0xCC: return ('tstb', LOAD, lo8)
    if hi == 0xF and lo4 in (4, 5): return ('feq' if lo4 == 4 else 'fgt', [('f', n), ('f', m)], None)
    if hi == 4 and lo8 in (0x00, 0x01, 0x04, 0x05, 0x24, 0x25, 0x20, 0x21): return ('shift', [('r', n)], None)
    if op in (0x0008, 0x0018, 0x0019): return ('const', CONST, None)
    if (hi == 3 and lo4 in (0xE, 0xA, 0xF, 0xB, 4)) or (hi == 6 and lo4 == 0xA) or (hi == 2 and lo4 == 7) or (hi == 4 and lo8 in (0x07, 0x27, 0x37)) or op in (0x002B,):
        return ('other', STOP, None)
    return None

# ---------------------------------------------------------------------------------------------------------------- slicing

def rv(T, i, reg):
    k, x = reg
    return (T[i][2][x] if k == 'r' else T[i][3][x]) & M32

class Ctx:
    def __init__(self, r, fn):
        self.T = r['trace']; self.mem = r['_mem']; self.mocks = dict(r['_mocks'])
        self.call_to = [x['to'] for x in r.get('calls', [])]
        self.rl = sorted(self.mem.rlog, key=lambda x: x[0]); self.rt = [x[0] for x in self.rl]
        a, s = FUN[fn]
        k = (a & 0x1FFFFFFF) | 0x0C000000
        self.lo = (a & 0xE0000000) | (bb[k] & 0x1FFFFFFF) if k in bb else a
        self.hi = a + s
        self.mock_index = {}
        for i, (t, tgt) in enumerate(sorted(r['_mocks'])):
            self.mock_index[t] = (i, tgt)
    def reads_at(self, i):
        j = bisect.bisect_left(self.rt, i); out = []
        while j < len(self.rt) and self.rt[j] == i:
            out.append(self.rl[j]); j += 1
        return out
    def writer(self, i, reg):
        """trace index of the instruction that last wrote reg before i, or -1 (it came in with the case)"""
        T = self.T
        for j in range(i - 1, -1, -1):
            if reg in dests(T[j][1]) or rv(T, j + 1, reg) != rv(T, j, reg):
                return j
            if reg in (('r', 0), ('f', 0)) and (j + 1) in self.mock_index:
                return j                               # a mocked call answers r0 and fr0 even with the value they had
        return -1

def leaves(ctx, i, reg, depth=0, out=None, seen=None, path=()):
    """the inputs the value of reg just before trace index i is made of: ('mem', phys, size, float?), ('reg', name, float?),
    ('call', k, 'r0'|'fr0', target)"""
    if out is None: out, seen = [], set()
    if depth > 24 or (i, reg) in seen or len(out) > 12:
        return out
    seen.add((i, reg))
    T = ctx.T
    j = ctx.writer(i, reg)
    if j < 0:
        k, x = reg
        if (k == 'r' and 4 <= x <= 7) or (k == 'f' and 4 <= x <= 11):      # the arguments only: a C function cannot read its caller's r8-r14
            out.append(('reg', '%s%d' % ('r' if k == 'r' else 'fr', x), k == 'f'))
        return out
    if (j + 1) in ctx.mock_index and reg in (('r', 0), ('f', 0)):
        kidx, tgt = ctx.mock_index[j + 1]
        nm = name_at.get(tgt | 0x0C000000 if tgt < 0x0C000000 else tgt)
        want = rtype.get(nm, 'r0')
        have = 'r0' if reg == ('r', 0) else 'fr0'
        if want == have:
            out.append(('call', kidx, have, tgt))
        return out
    pc, op = T[j][0], T[j][1]
    if not (ctx.lo <= pc < ctx.hi):
        return out                                  # written inside a runtime helper (a copy): not followed
    sc = srcs(op)
    if sc == LOAD:
        for (t, a, size, v) in ctx.reads_at(j):
            if not (CODE_LO <= a < CODE_HI) and (a < 0x0C000000 or a >= 0x0E000000):
                # a field of a null pointer (an object the case does not give): the pointer becomes a fresh zeroed block and the
                # field is set there, in one mutant
                for r2 in load_addr_regs(op):
                    base = rv(T, j, r2)
                    if (base & 0x1FFFFFFF) < 0x100000:
                        for bl in leaves(ctx, j, r2, depth + 1, [], set(seen)):
                            out.append(('pfield', bl, (a - (base & 0x1FFFFFFF)) & 0xFFFFF, size, (op >> 12) == 0xF))
                continue
            if CODE_LO <= a < CODE_HI:
                for r2 in load_addr_regs(op):          # a constant table: follow the index
                    leaves(ctx, j, r2, depth + 1, out, seen)
                continue
            ws = ctx.mem.wlog.get(a)
            wj = None
            if ws:
                p = bisect.bisect_left(ws, j) - 1
                if p >= 0: wj = ws[p]
            if wj is not None:
                if wj < len(T) and ctx.lo <= T[wj][0] < ctx.hi:
                    src = store_src(T[wj][1])
                    if src: leaves(ctx, wj, src, depth + 1, out, seen)
                continue
            if 0x0DFFE000 <= a < 0x0DFFFF00:
                # the function's own frame, not written by it: an output a mocked call filled through a pointer argument
                for tick in sorted((x for x in ctx.mock_index if x <= j), reverse=True):
                    if tick >= len(T): continue
                    hit = None
                    for rr in range(4, 8):
                        p_ = T[tick][2][rr] & M32
                        if (p_ & 0x1FFFFFFF) <= a < (p_ & 0x1FFFFFFF) + 64:
                            hit = (rr, a - (p_ & 0x1FFFFFFF)); break
                    if hit:
                        out.append(('fill', ctx.mock_index[tick][0], 'r%d' % hit[0], hit[1], size, (op >> 12) == 0xF))
                        break
                continue
            fl = (op >> 12) == 0xF
            out.append(('mem', a, size, fl))
        return out
    if sc == FPUL:
        for jj in range(j - 1, -1, -1):
            o = T[jj][1]
            if (o & 0xF0FF) == 0x405A: return leaves(ctx, jj, ('r', (o >> 8) & 15), depth + 1, out, seen)
            if (o & 0xF0FF) in (0xF03D, 0xF01D): return leaves(ctx, jj, ('f', (o >> 8) & 15), depth + 1, out, seen)
        return out
    if sc in (CONST, STOP):
        return out
    for r2 in sc:
        leaves(ctx, j, r2, depth + 1, out, seen)
    return out

# ---------------------------------------------------------------------------------------------------------------- mutating

def fbits(x):
    try: return struct.unpack('<I', struct.pack('<f', x))[0]
    except (OverflowError, struct.error): return 0x7F7FFFFF
def bitsf(b): return struct.unpack('<f', struct.pack('<I', b & M32))[0]

PTR = [0x0CC00000]
def fresh_ptr():
    PTR[0] += 0x4000
    if PTR[0] >= 0x0CD00000: PTR[0] = 0x0CC04000
    return PTR[0]

GENERIC = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 16, 0x20, 0x40, 0x80, 0xFF, 0x100, 0x8000, 0xFFFF, M32, 0xFFFFFFFE, 0x80000000, 0x7FFFFFFF]
FGEN = [0.0, 1.0, -1.0, 0.5, 2.0, 10.0, 100.0, 1000.0, -100.0, 1e6, -1e6, 0.001]

def candidates(kind, vals, imm, leaf_float, cur):
    ints, floats = [], []
    a = vals[0] if vals else 0
    b = vals[1] if len(vals) > 1 else (imm if imm is not None else 0)
    if kind in ('eq', 'hs', 'ge', 'hi', 'gt', 'eqi', 'str'):
        ints += [b, (b + 1) & M32, (b - 1) & M32, a, (a + 1) & M32, (a - 1) & M32]
    elif kind in ('tst', 'tsti', 'tstb'):
        mask = b if kind != 'tst' else (a | b)
        ints += [mask, 0] + [1 << k for k in range(32) if mask >> k & 1][:8] + [mask ^ a]
    elif kind in ('pl', 'pz', 'dt'):
        ints += [1, 0, M32, 2]
    elif kind == 'shift':
        ints += [0x80000000, 1, 0, M32, 0x40000000, 2]
    elif kind in ('feq', 'fgt'):
        fa, fb = bitsf(a), bitsf(b)
        for x in (fb, fa):
            if x == x and abs(x) < 1e30:
                floats += [x, x + 1.0, x - 1.0, x * 2.0, -x, x * 0.5, x + 1e-3, x - 1e-3]
    if leaf_float:
        out = [fbits(x) for x in floats] + [x for x in ints] + [fbits(x) for x in FGEN]
    else:
        out = ints + [fbits(x) for x in floats] + ['PTR'] + GENERIC + [1 << k for k in range(4, 31)]
    seen, res = set(), []
    for v in out:
        if v == 'PTR':
            res.append(v); continue
        v &= M32
        if v != cur and v not in seen:
            seen.add(v); res.append(v)
    return res

def leaf_value(case_run_mem, leaf):
    return None

def apply(case, leaf, v, size_hint=4):
    c = json.loads(json.dumps(case))
    if leaf[0] == 'reg':
        c.setdefault('regs', {})[leaf[1]] = '%08X' % v
        return c, '%s=%08X' % (leaf[1], v)
    if leaf[0] == 'call':
        k = leaf[1]
        calls = c.setdefault('calls', [])
        while len(calls) <= k: calls.append({})
        calls[k] = dict(calls[k]); calls[k][leaf[2]] = '%08X' % v
        return c, 'call %d (%s) %s=%08X' % (k + 1, name_at.get(leaf[3] | 0x0C000000 if leaf[3] < 0x0C000000 else leaf[3], '%08X' % leaf[3]), leaf[2], v)
    if leaf[0] == 'fill':
        _, k, reg, off, size, fl = leaf
        calls = c.setdefault('calls', [])
        while len(calls) <= k: calls.append({})
        ans = dict(calls[k]); pa = dict(ans.get('poke_arg', {}))
        b = bytearray.fromhex(pa.get(reg, ''))
        if len(b) < off + size: b += bytes(off + size - len(b))
        b[off:off + size] = (v & ((1 << (8 * size)) - 1)).to_bytes(size, 'little')
        pa[reg] = b.hex(); ans['poke_arg'] = pa; calls[k] = ans
        return c, 'call %d fills %s+%d.%d=%0*X' % (k + 1, reg, off, size, 2 * size, v & ((1 << (8 * size)) - 1))
    if leaf[0] == 'pfield':
        _, bl, off, size, fl = leaf
        P = fresh_ptr()
        c1, d1 = apply(c, bl, P)
        c2, d2 = apply(c1, ('mem', (P + off) & 0x1FFFFFFF, size, fl), v)
        return c2, d1 + ', ' + d2
    _, a, size, fl = leaf
    data = (v & ((1 << (8 * size)) - 1)).to_bytes(size, 'little')
    pk = c.setdefault('poke', {})
    # the case's pokes may overlap (a generated object over a wider block) and run in order: the bytes go into every poke that
    # covers them, or a later one puts the old value back
    covered = bytearray(size)
    for key, hx in list(pk.items()):
        k0 = int(key, 16) & 0x1FFFFFFF; ln = len(hx) // 2
        lo, hi = max(a, k0), min(a + size, k0 + ln)
        if lo < hi:
            b = bytearray.fromhex(hx); b[lo - k0:hi - k0] = data[lo - a:hi - a]; pk[key] = b.hex()
            for x in range(lo - a, hi - a): covered[x] = 1
    if not all(covered):
        pk['%08X' % a] = data.hex()             # last, so it wins over nothing it should not
    return c, '%08X.%d=%s' % (a, size, data[::-1].hex().upper())

# ---------------------------------------------------------------------------------------------------------------- the search

def frontiers(ctx, S):
    """[(trace index of the branch, the successor not reached)] for each branch in the function, first occurrence"""
    T = ctx.T; out = {}
    for i, (pc, op, _, _) in enumerate(T):
        if not (ctx.lo <= pc < ctx.hi): continue
        cb = cond_branch(op, pc)
        if not cb: continue
        for tgt in cb:
            if tgt not in S and (pc, tgt) not in out and ctx.lo <= tgt < ctx.hi:
                out[(pc, tgt)] = i
    return [(i, pc, tgt) for (pc, tgt), i in out.items()]

def tsource(ctx, i):
    """the T setter before branch index i: (index, kind, sources, imm)"""
    T = ctx.T
    for j in range(i - 1, max(-1, i - 64), -1):
        ts = tsetter(T[j][1])
        if ts:
            return (j,) + ts
    return None


def clean(case, r):
    """the original ran to its return, or (a case marked endless: a loop that never returns) to the step limit"""
    return not r['error'] or (case.get('endless') and str(r['error']).startswith('more than'))

def strip_fills(mc, mr, parent_to):
    """the answers' buffer fills (poke_arg, poke_stack) were written for the parent's callees: where the mutant calls another
    function at that position, the fill is dropped (a 32-byte fill meant for one callee overran a stack buffer of another)"""
    calls = mc.get('calls') or []
    changed = False
    for k, ans in enumerate(calls):
        if not isinstance(ans, dict) or not any(x in ans for x in ('poke_arg', 'poke_stack')): continue
        to_now = mr['calls'][k]['to'] if k < len(mr.get('calls', [])) else None
        to_was = parent_to[k] if k < len(parent_to) else None
        if to_now != to_was:
            calls[k] = {x: v for x, v in ans.items() if x not in ('poke_arg', 'poke_stack')}; changed = True
    return changed

def explore(fn):
    p = 'tests/%s/%s.json' % (cfile[fn], fn)
    d = json.load(open(p))
    sets = d if isinstance(d, dict) else {'dev': d}
    base_cases = [c for k in ('dev', 'holdout') for c in sets.get(k, [])]
    t0 = time.time()
    pool, S = [], set()
    for c in base_cases:
        r = run(fn, c, trace=True)
        if not clean(c, r):
            continue
        S.update(r['covered'])
        pool.append((c, r, c.get('about', 'case')))
    if not pool:
        say('%s: no case runs cleanly, skipped' % fn); return []
    start = len(S)
    kept = []
    tried = set()
    why = {}
    state = {'runs': 0}

    def inputs(ctx, i, bpc, tgt, note=True):
        """(kind, vals, imm, leaves) deciding the branch at trace index i, or None"""
        ts = tsource(ctx, i)
        if not ts:
            if note: why[(bpc, tgt)] = 'no T setter found'
            return None
        j, kind, sc, imm = ts
        if sc in (CONST, STOP):
            if note: why[(bpc, tgt)] = 'T from %s (%04X at %08X)' % (kind, ctx.T[j][1], ctx.T[j][0])
            return None
        if sc == LOAD:
            lv = [('mem', a, size, False) for (_, a, size, v) in ctx.reads_at(j) if not (CODE_LO <= a < CODE_HI)]
            vals = [v for (_, a, size, v) in ctx.reads_at(j)][:1]
        else:
            vals = [rv(ctx.T, j, s_) for s_ in sc]
            lv, seen_l = [], set()
            for s_ in sc:
                for lf in leaves(ctx, j, s_):
                    if lf[:3] not in seen_l:
                        seen_l.add(lf[:3]); lv.append(lf)
        if note:
            why[(bpc, tgt)] = ('no input found for %s at %08X' % (kind, ctx.T[j][0]) if not lv else
                               'no value worked for %s at %08X on %s' % (kind, ctx.T[j][0], ', '.join(str(l[:2]) for l in lv[:6])))
        return kind, vals, imm, lv

    def values(kind, vals, imm, lf, limit=None):
        fl = lf[-1] if lf[0] in ('mem', 'reg', 'pfield', 'fill') and isinstance(lf[-1], bool) else (lf[0] == 'call' and lf[2] == 'fr0')
        out = []
        for v in candidates(kind, vals, imm, fl, None):
            if v == 'PTR':
                if fl or (lf[0] == 'mem' and lf[2] != 4) or (lf[0] == 'pfield' and lf[3] != 4) or (lf[0] == 'fill' and lf[4] != 4): continue
                v = fresh_ptr()
            out.append(v)
            if limit and len(out) >= limit: break
        return out

    def keep(mc, mr, about, desc, new):
        S.update(new)
        mab = about + '; ' + desc if about.startswith('mutant of ') else 'mutant of %s: %s' % (about[:60], desc)
        mc['about'] = mab
        pool.append((mc, mr, mab))
        kept.append((len(new), mc))

    def attack(c, ctx, i, bpc, tgt, about, steps_lim, note=True, budget=None):
        """mutate the inputs of the branch at trace index i until a run reaches something new: True when one did"""
        got = inputs(ctx, i, bpc, tgt, note)
        if not got: return False
        kind, vals, imm, lv = got
        n = 0
        for lf in lv[:6]:
            for v in values(kind, vals, imm, lf):
                key = (bpc, tgt, str(lf[:3]), v, id(c))
                if key in tried: continue
                tried.add(key)
                mc, desc = apply(c, lf, v)
                mr = run(fn, mc, trace=True, steps=steps_lim); state['runs'] += 1; n += 1
                if clean(mc, mr) and set(mr['covered']) - S and strip_fills(mc, mr, ctx.call_to):
                    mr = run(fn, mc, trace=True, steps=steps_lim); state['runs'] += 1
                if clean(mc, mr):
                    new = set(mr['covered']) - S
                    if new:
                        keep(mc, mr, about, desc, new); return True
                if time.time() - t0 > opt['--time'] or (budget and n >= budget): return False
        return False

    def stepping(c, ctx, i, bpc, tgt, about, steps_lim):
        """flip one of the last branches before the frontier (a first mutant that reaches nothing new on its own), then attack the
        frontier on that run: the value it tests was stored by the function on the path the earlier branch chose"""
        T = ctx.T; seen_b = []
        for k in range(i - 1, -1, -1):
            pc, op = T[k][0], T[k][1]
            if ctx.lo <= pc < ctx.hi and cond_branch(op, pc) and pc != bpc and pc not in [x[1] for x in seen_b]:
                seen_b.append((k, pc))
                if len(seen_b) >= 6: break
        for (k, pc) in seen_b:
            got = inputs(ctx, k, pc, None, note=False)
            if not got: continue
            kind, vals, imm, lv = got
            for lf in lv[:3]:
                for v in values(kind, vals, imm, lf, limit=10):
                    key = ('step', bpc, tgt, pc, str(lf[:3]), v, id(c))
                    if key in tried: continue
                    tried.add(key)
                    m1, d1 = apply(c, lf, v)
                    r1 = run(fn, m1, trace=True, steps=steps_lim); state['runs'] += 1
                    if clean(m1, r1) and strip_fills(m1, r1, ctx.call_to):
                        r1 = run(fn, m1, trace=True, steps=steps_lim); state['runs'] += 1
                    if not clean(m1, r1): continue
                    new = set(r1['covered']) - S
                    if new:
                        keep(m1, r1, about, d1, new); return True
                    if bpc not in r1['covered']: continue
                    c1 = Ctx(r1, fn)
                    i1 = next((x for x, e in enumerate(c1.T) if e[0] == bpc), None)
                    if i1 is None: continue
                    if attack(m1, c1, i1, bpc, tgt, about + '; ' + d1 if about.startswith('mutant of ') else 'mutant of %s: %s' % (about[:60], d1),
                              steps_lim, note=False, budget=60):
                        return True
                    if time.time() - t0 > opt['--time']: return False
        return False

    qi = 0
    while qi < len(pool) and time.time() - t0 < opt['--time']:
        c, r, about = pool[qi]; qi += 1
        if 'trace' not in r or r['trace'] is None:
            continue
        ctx = Ctx(r, fn)
        steps_lim = min(max(20 * r['steps'] + 20000, 200000), c.get('steps', 2000000))
        stuck = []
        for (i, bpc, tgt) in sorted(frontiers(ctx, S), key=lambda x: x[0]):
            if tgt in S or time.time() - t0 > opt['--time']:
                continue
            if not attack(c, ctx, i, bpc, tgt, about, steps_lim):
                stuck.append((i, bpc, tgt))
        if not opt.get('--no-step'):
            for (i, bpc, tgt) in stuck:
                if tgt in S or time.time() - t0 > opt['--time']:
                    continue
                stepping(c, ctx, i, bpc, tgt, about, steps_lim)
        r.pop('trace', None); r.pop('_mem', None)        # free the parent's trace
    if os.environ.get('MUTDEBUG'):
        for (bpc, tgt), w in sorted(why.items()):
            if tgt not in S: say('  %08X -> %08X: %s' % (bpc, tgt, w))
    a_, s_ = FUN[fn]
    say('%-24s %s: reached %d -> %d instructions (+%d), %d mutants, %.0f s' % (fn, cfile[fn], start, len(S), len(S) - start, len(kept), time.time() - t0))
    return kept

def main():
    total_new = 0
    for fn in targets:
        if fn not in FUN or fn not in cfile:
            say('%s: no function or no C' % fn); continue
        kept = explore(fn)
        if write and kept:
            kept = sorted(kept, key=lambda x: -x[0])[:opt['--keep']]
            p = 'tests/%s/%s.json' % (cfile[fn], fn)
            d = json.load(open(p))
            if isinstance(d, list): d = {'dev': d}
            d.setdefault('holdout', []).extend(mc for _, mc in kept)
            json.dump(d, open(p, 'w'), indent=1)
            say('  wrote %d holdout cases to %s' % (len(kept), p))


if __name__ == '__main__':
    main()
