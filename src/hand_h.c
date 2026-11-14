/* Hand-written C (step 6). */

int FUN_0c03542a(int, int, float, float, float, float, float);
int FUN_0c0350a6(int, int, int, int, int, float, float);
int FUN_0c0353a2(int, int, int, float, float);
int FUN_0c0336c8(int, int, float, float, float, float);
int FUN_0c033578(int, int, float, float, float);
int FUN_0c055766(int);

typedef struct { int name; int score; signed char rank; signed char who; short pad; } Row;      /* 12 bytes */

/* manual: draws rows first..last of a records table at (x, y), 20 apart. a6 picks the table (8..23: the five-row tables, drawn
   with a place number; else the ten-row ones, drawn with an icon), a5 the player block (below 0: the shared block, rows then
   show their owner), flags (second stack argument) bit 2 a frame behind the rows, bits 0-1 the short layout.
   f6-f8 are not used here: FUN_0c03542a's C passes its float registers on, so the check compares them; the same for the 8
   that FUN_0c0353a2 finds in r6, left from the call before. */
void FUN_0c035560(int a4, int a5, int a6, int first, int last, int flags, float x, float y, float f6, float f7, float f8)
{
    int five = a6 >= 8 && a6 < 24;
    int col, base, i, j, k, kind;
    Row *tbl, *r;
    float scale, off;

    if (flags & 4) {
        FUN_0c03542a((five ? 2 : 0) + (a5 >= 0 ? 1 : 0), last - first + 1, x, y, f6, f7, f8);
        x += 40.0f;
        y += 19.0f;
    }
    switch (a4 & 15) {
    case 0: col = 13; break;
    case 1: col = 14; break;
    case 2: col = 18; break;
    default: col = 12; break;
    }
    if (a5 < 0)
        base = 0xC2A4FE0;
    else
        base = a5 * 1928 + 0xC28EDA8;
    scale = (float)col * 1.3f;
    if (!five) {
        if (a6 == 24)
            tbl = (Row *)0xC28FF84;
        else if (a6 == 25)
            tbl = (Row *)0xC2906B4;
        else if (a6 < 4)
            tbl = (Row *)(base + 8 + a6 * 120);
        else
            tbl = (Row *)(base + 488 + (a6 - 4) * 120);
        for (i = first; i <= last; i++) {
            r = &tbl[i];
            if (r->rank < 0) {
                FUN_0c033578(a4, 0xC0C0210, x + 16.0f, y, 1.0f);
            } else {
                k = FUN_0c055766(r->name);
                if (k == 999)
                    k = 0;
                else if (k == 99)
                    k = 1;
                else
                    k += 2;
                FUN_0c033578(a4, 0xC0B6690 + k * 32, x + 16.0f, y, 1.0f);
            }
            FUN_0c0350a6(a4, r->name, 8, 1, col, x + 144.0f, y);
            FUN_0c0353a2(a4, r->rank, 8, x + 284.0f, y);
            if (a5 < 0) {
                if (r->who != -1)
                    FUN_0c0336c8(a4, 0xC28EDA8 + r->who * 1928, x + 400.0f, y, scale, 1.0f);
                else
                    FUN_0c0336c8(a4, 0xC0C0214, x + 400.0f, y, scale, 1.0f);
            } else {
                FUN_0c0350a6(a4, r->score, 8, 6, col - 1, x + 400.0f, y);
            }
            y += 20.0f;
        }
    } else {
        tbl = (Row *)(base + 968 + (a6 - 8) * 60);
        kind = *(int *)(0xC09C8F4 + (a6 - 8) * 12);
        for (i = first; i <= last; i++) {
            r = &tbl[i];
            if (a5 < 0) {
                for (j = i; j >= 1; j--)        /* rows with the same name share the place of the first */
                    if (r->name == -1 || tbl[j - 1].name != r->name)
                        break;
                FUN_0c0350a6(a4, j + 1, 3, 0, col, x, y);
            } else {
                FUN_0c0350a6(a4, r->who, 3, 0, col, x, y);
            }
            if ((flags & 3) == 0) {
                FUN_0c0350a6(a4, r->name, 8, kind, col, x + 116.0f, y);
                FUN_0c0353a2(a4, r->rank, 8, x + 268.0f, y);
                if (a5 < 0) {
                    if (r->who != -1)
                        FUN_0c0336c8(a4, 0xC28EDA8 + r->who * 1928, x + 384.0f, y, scale, 1.0f);
                    else
                        FUN_0c0336c8(a4, 0xC0C0214, x + 384.0f, y, scale, 1.0f);
                } else {
                    FUN_0c0350a6(a4, r->score, 8, 6, col - 1, x + 384.0f, y);
                }
            } else {
                off = (float)((flags & 2) ? 24 : 0);
                FUN_0c0350a6(a4, r->name, 8, kind, col, (off + x) + 80.0f, y);
                FUN_0c0353a2(a4, r->rank, 8, (x + 2.5f * off) + 204.0f, y);
            }
            y += 20.0f;
        }
    }
}
