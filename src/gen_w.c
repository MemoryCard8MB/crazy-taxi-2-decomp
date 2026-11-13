/* Straight-line functions with calls and guards (batch gen_w): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o8_float { char p[0x8]; float v; };
float FUN_0c072140(int);
int FUN_0c16d04e(int, int);
int FUN_0c16d0bc(int, int, int);
extern int cvFsError();
int cvFsLoadDirInfo(int a4, int a5, int a6, int a7);
float FUN_0c040fb4(int a4, float f4, float f5, float f6);

int cvFsLoadDirInfo(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t4;

    if (a5 == 0) {
        t0 = ((int (*)(int, int, int, int))(cvFsError))(0xC172974, a5, a6, a7);
        t0 = 0x0;
    } else {
        if ((int)a6 < 0) {
            t0 = ((int (*)(int, int, int, int))(cvFsError))(0xC172998, a5, a6, a7);
            t0 = 0x0;
        } else {
            t0 = 0x0;
            if (a6 == 0) {
            } else {
                if (a4 == 0) {
                    t0 = (FUN_0c16d04e(a5, a6));
                } else {
                    t0 = (FUN_0c16d0bc(a4, a5, a6));
                }
                if (t0 == 0) {
                    t4 = ((int (*)(int))(cvFsError))(0xC1729B8);
                }
            }
        }
    }
    return t0;
}

float FUN_0c040fb4(int a4, float f4, float f5, float f6)
{
    register int t6;
    register int t7;
    register float t9;
    register float u10;

    if ((int)((((struct o0_int *)0xC2AB7D8)->v)) <= (int)0x1) {
        (((struct o8_float *)0xC2AB7D8)->v) = (((((struct o8_float *)0xC2AB7D8)->v)) + f4);
    }
    t6 = (int)((int)(((((((((struct o0_int *)0xC2AB7D8)->v)) << 8) << 2) << 2) << 2) << 1) / (int)a4);
    t7 = (0x4000 + t6);
    if ((int)(0x4000 + t6) > (int)0xC000) {
        t7 = 0xC000;
    }
    t9 = FUN_0c072140(t7);
    u10 = (f5 * (t9 + 1.0f));
    if (f6 > (u10 * 0.5f)) {
        (((struct o8_float *)0xC2AB7D8)->v) = (((((struct o8_float *)0xC2AB7D8)->v)) + ((u10 * 0.5f)));
    }
    return (t9 + 1.0f);
}
