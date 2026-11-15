#!/usr/bin/env python3
"""framesnap.py <label> [pc hex]: (run in the repo, Flycast running the original with Debug.GDBEnabled=yes) a RAM snapshot of the running ORIGINAL at the frame loop's scene call, for tools/6-agentic/frametest.py.

Stops the game, puts a breakpoint at <pc> (default 0C01B0CE: FUN_0c01b026's `jsr @r12`, the current scene's per-frame function),
continues to it, removes the breakpoint, then writes work/dumps/frame/<label>.ram (16 MB from 0C000000) and <label>.json
({'g': GDB 'g' packet hex, 'gbr', 'vbr', 'pc'}) and resumes. Run frametest on it with START=<pc>:
    START=0C01B0CE STEPS=3000000 python3 tools/6-agentic/frametest.py FUN_0c01b026 work/dumps/frame/<label>
and make cases from it: python3 tools/6-agentic/snapcases.py [--write] <label>
"""
import json, os, struct, sys, time
sys.path.insert(0, os.environ.get('GDBSNAP_DIR', os.path.join(os.path.dirname(os.path.abspath(__file__)), '../../../dc-decomp-kickoff/scripts')))   # gdbsnap.py of the kickoff
import gdbsnap

label = sys.argv[1]
pc = int(sys.argv[2], 16) if len(sys.argv) > 2 else 0x0C01B0CE
out = 'work/dumps/frame'
os.makedirs(out, exist_ok=True)
g = gdbsnap.Gdb(gdbsnap.HOST, gdbsnap.PORT, timeout=30)
g.stop()
r = g.ask('Z0,%x,2' % pc)
if r != 'OK':
    g.resume(); sys.exit('breakpoint refused: %r' % r)
g.s.sendall(g._packet('c'))
t0 = time.time()
why = g.recv()                                   # the stop at the breakpoint
regs_hex = g.ask('g')
w = struct.unpack_from('<24I', bytes.fromhex(regs_hex))
g.ask('z0,%x,2' % pc)
if (w[16] & 0x1FFFFFFF) != (pc & 0x1FFFFFFF):
    print('warning: stopped at %08X, not %08X (%s)' % (w[16], pc, why))
ram = bytearray()
for off in range(0, 0x1000000, 2048):
    ram += g.read(0x0C000000 + off, 2048)
g.resume()
open('%s/%s.ram' % (out, label), 'wb').write(ram)
json.dump({'g': regs_hex, 'gbr': w[18], 'vbr': w[19], 'pc': '%08X' % w[16], 'label': label,
           'time': time.strftime('%Y-%m-%dT%H:%M:%S')}, open('%s/%s.json' % (out, label), 'w'))
print('%s: stopped %s at pc %08X (r12 %08X) after %.1fs; 16 MB written, game resumed (%.0fs)' % (label, why, w[16], w[12], time.time() - t0, time.time() - t0))
