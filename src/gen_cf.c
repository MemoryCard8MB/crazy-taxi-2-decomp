/* Straight-line functions with calls and guards (batch gen_cf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uint { unsigned int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
int FUN_0c07ada0(int, int, int, int, float, float, float, float, float);
int FUN_0c04f70e(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8);

int FUN_0c04f70e(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t0 = *(short *)0xC28ED98;
    t1 = 0x4;
    if (((unsigned short)t0 & 32) != 0) {
        t1 = 0x8;
    }
    t2 = (unsigned short)t0;
    if ((int)t1 > 0) {
        t0 = 0x0;
        for (;;) {
            if (t0 == (*(int *)(((*(int *)0xC2B1D00) + 0x0)))) {
                (((struct o34_uint *)0xC2B1C44)->v) = 0x5;
                t4 = 0x0;
            } else {
                (((struct o34_uint *)0xC2B1C44)->v) = 0x20005;
                (((struct o38_uint *)0xC2B1C44)->v) = 0xFF808080;
                t4 = 0x1;
            }
            t5 = ((~(((~t0) + 0x1) & 0x3)) + 0x1);
            if ((int)t0 >= 0) {
                t5 = (t0 & 0x3);
            }
            t6 = t0;
            if ((int)t0 < 0) {
                t6 = (t0 + 0x3);
            }
            (((struct o4_float *)0xC2B1C44)->v) = (float)((((((t5 << 2) << 1) + t5) << 2) + ((((t6 >> 1) >> 1) << 1) + ((t6 >> 1) >> 1))) + 0x1D0);
            (((struct o8_float *)0xC2B1C44)->v) = (float)((((((((t6 >> 1) >> 1) << 2) << 1) + ((t6 >> 1) >> 1)) << 2) - ((t5 << 1) + t5)) + 0x24);
            (((struct o0_uint *)0xC2B1C44)->v) = (*(int *)(((t4 << 2) + (*(int *)((0xC1319EC + (t0 << 2)))))));
            (((struct o28_uint *)0xC2B1C44)->v) = 0x2D8;
            t3 = FUN_0c07ada0(0xC2B1C44, ((t5 << 1) + t5), ((((((((t6 >> 1) >> 1) << 2) << 1) + ((t6 >> 1) >> 1)) << 2) - ((t5 << 1) + t5)) + 0x24), a7, f4, f5, f6, f7, f8);
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)t1) {
                break;
            }
        }
        t2 = t3;
    }
    return t2;
}
