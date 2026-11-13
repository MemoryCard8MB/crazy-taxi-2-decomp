/* Straight-line functions with calls and guards (batch gen_cy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o64_uint { char p[0x64]; unsigned int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
int FUN_0c16ada2(int, int, int, int, int);
int kmiWriteRegister(int, int, int);
int mwRnaSetOutPan(void);
int mwRnaSetNumChan(int a4, int a5, int a6, int a7);
int kmSetCheapShadowMode(int a4);
int mwRnaSetBitPerSmpl(int a4, int a5, int a6, int a7);

int mwRnaSetNumChan(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    if (a4 == 0) {
        t0 = (FUN_0c16ada2(a4, a5, a6, a7, 0xC171714));
    } else {
        if ((int)a5 > (int)(unsigned char)(*(signed char *)((a4 + 0x2)))) {
            t1 = (FUN_0c16ada2(a4, a5, a6, a7, 0xC171784));
        } else {
            *(unsigned char *)((a4 + 0x3)) = a5;
            t2 = *(int *)((a4 + 0x38));
            t3 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t2 + 0x0))) + 0x1C)))))(t2, (signed char)a5, a6, a7);
            if (a5 == 1) {
                (((struct o64_uint *)(a4))->v) = 0x0;
                (((struct o68_uint *)(a4))->v) = 0x0;
            } else {
                (((struct o64_uint *)(a4))->v) = 0xFFFFFFF1;
                (((struct o68_uint *)(a4))->v) = 0xF;
            }
            t2 = 0x0;
            for (;;) {
                t3 = *(signed char *)((a4 + 0x3));
                if ((int)t2 >= (int)(unsigned char)t3) {
                    break;
                }
                *(volatile int *)((((t2 << 2) + (a4 + 0x64)) + 0x0));
                mwRnaSetOutPan();
                t2 = (t2 + 0x1);
            }
            t1 = (unsigned char)t3;
        }
        t0 = t1;
    }
    return t0;
}

int kmSetCheapShadowMode(int a4)
{
    register int t2;

    if ((int)a4 < 0) {
        *(unsigned int *)0xC17412C = 0x1;
    } else {
        *(unsigned int *)0xC17412C = 0x0;
    }
    t2 = *(int *)0xC17412C;
    kmiWriteRegister(0x74, (((0x1 - t2) << 8) | (unsigned char)a4), ((0x1 - t2) << 8));
    return 0x0;
}

int mwRnaSetBitPerSmpl(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t3;

    if (a4 == 0) {
        t0 = (FUN_0c16ada2(a4, a5, a6, a7, 0xC171714));
    } else {
        t1 = *(int *)((a4 + 0x28));
        t0 = *(int *)((a4 + 0x8));
        t3 = (t1 * t0);
        if ((int)(t1 * t0) < 0) {
            t3 = ((t1 * t0) + 0x7);
        }
        *(unsigned int *)((a4 + 0x28)) = ((((int)((int)(((t3 >> 1) >> 1) >> 1) / (int)a5)) << 2) << 1);
        t1 = *(int *)((a4 + 0x38));
        t0 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x2C)))))(t1, a5, a6, a7);
        *(unsigned int *)((a4 + 0x8)) = a5;
    }
    return t0;
}
