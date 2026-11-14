# RAM map above the BSS

What lies between the end of the BSS and the course files, from 7 full RAM dumps (16 MB from `0C000000`: menu ×2, Around Apple,
Small Apple, Crazy Pyramid, a scene, a drive) and the executable's own references. It decides how far a build from C may move
(`layout.txt` `bss` / `fixed`).

| Range | What | Moves with the image |
|---|---|---|
| `0C175400`-`0C2D0BC0` | game BSS (`_INITSCT` word-clears it) | yes |
| `0C2D0BC0`-`0C30BC20` | SDK BSS (byte-cleared) | yes |
| `0C30BC20`-`0C310000` | unused: zero in every dump | yes |
| `0C310000`-`0CD10000` | `FUN_0c01b1e8` (main) fills it with `-1` at start | the fill starts at the moved `0C310000` and still ends at `0CD10000` (`src/hand_g.c`) |
| `0C310000`-`0C318000` | `pplDC<n>.BIN` (cities 1 and 2, 32 KB) | yes, see below |
| `0C318000`, `0C328000` | `splDC<n>.bin` buffers (city 1's ends at `0C37F7A8`) | yes |
| `0C37F800`-`0C390000` | free: `-1` fill in every dump (66 KB) | yes |
| `0C390000` | `sprPAL.BIN`, then sprite and texture work areas up to `0C59D520` (the same end in every dump but the first menu) | yes |
| `0C59D800`-`0C5C0000` | free: `-1` fill in every dump (138 KB): the room the image may grow into | (`bss` .. `fixed`) |
| `0C5C0000` | `polDC<n>.BIN` | no (`fixed`) |
| `0CB1C800`-`0CB60000` | top of the heap `FUN_0c06cd06` sets up (`0C8AFE18`-`0CB40000`), then free | no |
| `0CB60000` | `colDC<n>.BIN` | no |
| `0CE90000` | `objDC<n>.BIN` | no |

## Files with absolute pointers

Every file on the disc (the 163 in the root; the `DP*` folders belong to the web browser) was scanned for 4-aligned words that point
into the range that moves (`0C06E700`-`0C59D800`). Pixel data, floats and audio give scattered hits (`0c0c0c0c`, `ac20ac20`, a
normal's `ac3ff700` next to `-1.0`); two kinds are real:

- **`pplDC1.BIN` / `pplDC2.BIN`** (371 and 585 words): pointers to their own load address `0C310000`. The file is 256 list heads
  (one per map area, 1 KB), then 24-byte records: position (3 floats), a float (20-30, a radius?), two signed bytes, a short, the
  next record (or 0). The only code that follows the pointers is `FUN_0c04e03c`, which streams an area's records into the 80 slots at
  `0C2B12CC`; its C (`src/hand_i.c`) adds how far the buffer moved (`PPL_MOVED`, 0 in the original layout) when it reads a record.
  The executable names the buffer only at `0C01B1FC` (main's fill), `0C020300` (the loader `FUN_0c0200f0`) and `0C04E0F8`.
- **`objDC<n>.BIN`** (5, 8 and 1 words): field `+1C` of a 32-byte record holds a BSS address left from the tool that wrote the
  file. It is a run-time slot (the object a record spawned): `FUN_0c02ff06`, at course start, zeroes `+1C` of the first 127 records
  (`0xFE0` bytes), which hold all 14 such words. Nothing to translate.

Words in RAM above the moved range that point into it (88-500 per dump) are floats in model data, or slots the code writes at run time.

## Marker test

2026-11-14, `work/fix8/watchfree.py`: `0C59D520`-`0C5C0000` read every 5 s over Flycast's GDB server while the game was played
(drives in both cities, Crazy Pyramid, menus): 420 samples over 35 minutes, every word the `-1` fill. Then the game's internet
function zeroed all of it within a second. That is the Dream Passport browser, a program of its own (`ntLDBrowser` loads
`sg_dpldr.bin` to `8C008300`, which loads `2_DP.BIN`, linked at `8C010000`, over the game). Leaving it restarts `1ST_READ.BIN`:
after the browser `0C310000`-`0C390000` is all `-1` again, as at boot (`menu1`), where a menu after a drive still holds the ppl and spl
data (`menu2`, 408,660 bytes). Nothing of the game's RAM is used across the browser, so the block stays free for the game. The
launch passes only fixed system addresses (`8C008300`, hardware and cache registers); what else ntLD/ntInf name is game memory read
by the game's own code, which moves with it. A build from C still has to be tried with the browser in step 9.
