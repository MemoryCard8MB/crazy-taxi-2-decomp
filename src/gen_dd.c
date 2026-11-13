/* Straight-line functions with calls and guards (batch gen_dd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o40_int { char p[0x40]; int v; };
struct o44_int { char p[0x44]; int v; };
struct o48_int { char p[0x48]; int v; };
struct o4C_int { char p[0x4C]; int v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_int { char p[0x6C]; int v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o70_int { char p[0x70]; int v; };
struct o70_uint { char p[0x70]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
int FUN_0c16ad54(int);
int FUN_0c16ad6c(int);
int FUN_0c16ada2(int, int, int, int, int);
int FUN_0c16bab0(int, int, int, int, int);
int mwRnaGetPlaySw(int);
int mwRnaGetSfreq(int);
int mwRnaSetBitPerSmpl(int, int);
int mwRnaSetSfreq(void);
int mwlRnaAddRdPos(int, int, int, int);
int strncpy(int, int, int);
int mwRnaSetStmHdInfo(int a4, int a5, int a6, int a7);
int FUN_0c16592e(int a4, int a5, int a6, int a7, int a8);
int mwRnaSetPlaySw(int a4, int a5, int a6, int a7);
int mwRnaSetOutPan(int a4, int a5, int a6, int a7);
int mwRnaGetTime(int a4, int a5, int a6, int a7);
int mwRnaGetFx(int a4, int a5, int a6, int a7);

int mwRnaSetStmHdInfo(int a4, int a5, int a6, int a7)
{
    int stk[14];
    register int t1;
    register int t5;
    register int t6;
    register int t12;
    register int t13;
    register int t17;
    register int t21;
    register int t25;
    register int t29;
    register int t33;
    register int t36;
    register int t37;
    register int t40;
    register int t60;

    *(unsigned int *)(((int)stk + 32)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    if (a4 == 0) {
        *(int *)((int)stk + 0) = 0xC171714;
        t60 = (FUN_0c16ada2(a4, a5, a6, a7, 0xC171714));
    } else {
        t1 = *(int *)((a4 + 0x38));
        *(unsigned int *)(((int)stk + 8)) = t1;
        t5 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))(((((struct o44_int *)((*(int *)((t1 + 0x0)))))->v))))(t1, 0x4, (*(int *)(((int)stk + 32))), 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
        t6 = *(int *)((a4 + 0x38));
        *(unsigned int *)(((int)stk + 8)) = t6;
        t12 = *(int *)(((*(int *)(((int)stk + 4))) + 0x0));
        t60 = (((int (*)(int, int, int, int, int, int, int, int, int, int, int))(((((struct o48_int *)((*(int *)((t6 + 0x0)))))->v))))(t6, 0x4, (*(int *)(((int)stk + 4))), (((int)stk + 4) + 0x24), *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24)));
        if ((int)t12 > 0) {
            t13 = *(int *)((a4 + 0x38));
            *(unsigned int *)(((int)stk + 4)) = t13;
            *(unsigned int *)(((int)stk + 8)) = (((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t13 + 0x0))) + 0x30)))))(t13, a5, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24)));
            t17 = *(int *)((a4 + 0x38));
            *(unsigned int *)(((int)stk + 4)) = t17;
            *(unsigned int *)(((int)stk + 44)) = (((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t17 + 0x0))) + 0x28)))))(t17, a5, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24)));
            t21 = *(int *)((a4 + 0x38));
            *(unsigned int *)(((int)stk + 4)) = t21;
            *(unsigned int *)(((int)stk + 4)) = (((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t21 + 0x0))) + 0x38)))))(t21, a5, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24)));
            *(unsigned int *)(((int)stk + 32)) = (((int)stk + 4) + 0x2C);
            t25 = *(int *)((a4 + 0x38));
            *(unsigned int *)(((int)stk + 36)) = t25;
            *(unsigned int *)(((((int)stk + 4) + 0x2C) + 0x0)) = (((int (*)(int, int, int, int, int, int, int, int, int, int, int))(((((struct o40_int *)((*(int *)((t25 + 0x0)))))->v))))(t25, 0x0, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24)));
            *(unsigned int *)(((int)stk + 36)) = (((int)stk + 4) + 0x30);
            t29 = *(int *)((a4 + 0x38));
            *(unsigned int *)(((int)stk + 12)) = t29;
            *(unsigned int *)(((((int)stk + 4) + 0x30) + 0x0)) = (((int (*)(int, int, int, int, int, int, int, int, int, int, int))(((((struct o40_int *)((*(int *)((t29 + 0x0)))))->v))))(t29, 0x1, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24)));
            t33 = *(int *)((a4 + 0x38));
            *(unsigned int *)(((int)stk + 12)) = t33;
            t36 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))(((((struct o48_int *)((*(int *)((t33 + 0x0)))))->v))))(t33, 0x0, (((int)stk + 4) + 0x14), (((int)stk + 4) + 0x18), *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
            t37 = *(int *)((a4 + 0x38));
            *(unsigned int *)(((int)stk + 12)) = t37;
            t40 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))(((((struct o48_int *)((*(int *)((t37 + 0x0)))))->v))))(t37, 0x3, (((int)stk + 4) + 0xC), (((int)stk + 4) + 0x10), *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
            mwRnaSetBitPerSmpl(a4, (*(int *)(((int)stk + 8))));
            *(volatile int *)(((int)stk + 44));
            mwRnaSetSfreq();
            (((struct o60_uint *)(a4))->v) = (*(int *)(((int)stk + 4)));
            (((struct o64_uint *)(a4))->v) = (*(int *)(((*(int *)(((int)stk + 32))) + 0x0)));
            (((struct o68_uint *)(a4))->v) = (*(int *)(((*(int *)(((int)stk + 36))) + 0x0)));
            (((struct o6C_uint *)(a4))->v) = (*(int *)(((int)stk + 24)));
            (((struct o70_uint *)(a4))->v) = (*(int *)(((int)stk + 28)));
            (((struct o7C_uint *)(a4))->v) = (*(int *)(((int)stk + 16)));
            (((struct o80_uint *)(a4))->v) = (*(int *)(((int)stk + 20)));
            t60 = 0x80;
        }
    }
    return t60;
}

int FUN_0c16592e(int a4, int a5, int a6, int a7, int a8)
{
    register int t0;
    register int t3;
    register int t5;

    if (a4 == 0) {
        FUN_0c16bab0(a4, a5, a6, a7, 0xC1718DC);
        t0 = 0xFFFFFFFF;
    } else {
        t0 = 0xFFFFFFFF;
        if ((int)(*(int *)((a4 + 0x24))) < (int)0x10) {
            if (a5 == 0) {
                FUN_0c16bab0(a4, a5, a6, a7, 0xC171900);
                t0 = 0xFFFFFFFF;
            } else {
                t3 = *(int *)((a4 + 0x1C));
                t0 = ((~(((~(t3 + 0xF)) + 0x1) & 0xF)) + 0x1);
                if ((int)(t3 + 0xF) >= 0) {
                    t0 = ((t3 + 0xF) & 0xF);
                }
                t3 = *(int *)((((((t0 << 2) << 2) << 2) + (a4 + 0x38)) + 0x0));
                t0 = (t3 + 0x1);
                if (t3 == 0x7FFFFFFF) {
                    t0 = 0x0;
                }
                t3 = *(int *)((a4 + 0x1C));
                *(unsigned int *)((((((t3 << 2) << 2) << 2) + (a4 + 0x38)) + 0x0)) = t0;
                strncpy((((((t3 << 2) << 2) << 2) + (a4 + 0x38)) + 0x4), a5, 0x28);
                *(unsigned int *)((((((t3 << 2) << 2) << 2) + (a4 + 0x38)) + 0x30)) = a7;
                *(unsigned int *)((((((t3 << 2) << 2) << 2) + (a4 + 0x38)) + 0x34)) = a8;
                *(unsigned int *)((((((t3 << 2) << 2) << 2) + (a4 + 0x38)) + 0x2C)) = a6;
                *(unsigned int *)((((((t3 << 2) << 2) << 2) + (a4 + 0x38)) + 0x38)) = 0x0;
                *(unsigned int *)((((((t3 << 2) << 2) << 2) + (a4 + 0x38)) + 0x3C)) = 0x0;
                *(unsigned int *)((a4 + 0x24)) = ((*(int *)((a4 + 0x24))) + 0x1);
                t3 = *(int *)((a4 + 0x1C));
                t5 = ((~(((~(t3 + 0x1)) + 0x1) & 0xF)) + 0x1);
                if ((int)(t3 + 0x1) >= 0) {
                    t5 = ((t3 + 0x1) & 0xF);
                }
                *(unsigned int *)((a4 + 0x1C)) = t5;
                if ((*(signed char *)((a4 + 0x1))) == 1) {
                    *(unsigned char *)((a4 + 0x1)) = 0x2;
                }
            }
        }
    }
    return t0;
}

int mwRnaSetPlaySw(int a4, int a5, int a6, int a7)
{
    int stk[5];
    register int t4;
    register int t5;
    register int t8;
    register int t13;
    register int t14;
    register int t17;

    *(unsigned int *)(((int)stk + 4)) = a5;
    if (a4 == 0) {
        *(int *)((int)stk + 0) = 0xC171714;
        return (FUN_0c16ada2(a4, a5, a6, a7, 0xC171714));
    }
    FUN_0c16ad54((((int)stk + 4) + 0x4));
    if ((*(int *)(((int)stk + 4))) == 0) {
        t4 = mwRnaGetPlaySw(a4);
        if (t4 != 0) {
            t5 = *(int *)((a4 + 0x38));
            *(unsigned int *)(((int)stk + 4)) = t5;
            t8 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t5 + 0x0))) + 0x14)))))(t5, a5, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
            *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) & 0x5);
        }
    } else {
        if ((*(int *)(((int)stk + 4))) == 1) {
            t13 = mwRnaGetPlaySw(a4);
            if (t13 != 1) {
                t14 = *(int *)((a4 + 0x38));
                *(unsigned int *)(((int)stk + 4)) = t14;
                t17 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t14 + 0x0))) + 0x10)))))(t14, a5, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) | 0x2);
            }
        }
    }
    return (FUN_0c16ad6c((((int)stk + 4) + 0x4)));
}

int mwRnaSetOutPan(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    if (a4 == 0) {
        t0 = (FUN_0c16ada2(a4, a5, a6, a7, 0xC171714));
    } else {
        t1 = 0xFFFFFFF1;
        if ((int)a6 >= (int)0xFFFFFFF1) {
            t2 = a6;
            if ((int)a6 > (int)0xF) {
                t2 = 0xF;
            }
            t1 = t2;
        }
        t2 = *(int *)((a4 + 0x38));
        t0 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t2 + 0x0))) + 0x3C)))))(t2, a5, t1, a7);
        *(unsigned int *)((((a5 << 2) + (a4 + 0x64)) + 0x0)) = t1;
    }
    return t0;
}

int mwRnaGetTime(int a4, int a5, int a6, int a7)
{
    register int t5;

    if (a4 == 0) {
        t5 = (FUN_0c16ada2(a4, a5, a6, a7, 0xC171714));
    } else {
        mwlRnaAddRdPos(a4, a5, a6, a7);
        *(unsigned int *)((a5 + 0x0)) = (((((struct o4C_int *)(a4))->v)) - (*(int *)((a4 + 0x34))));
        t5 = mwRnaGetSfreq(a4);
        *(unsigned int *)((a6 + 0x0)) = t5;
    }
    return t5;
}

int mwRnaGetFx(int a4, int a5, int a6, int a7)
{
    register int t0;

    if (a4 == 0) {
        t0 = FUN_0c16ada2(a4, a5, a6, a7, 0xC171714);
        *(unsigned int *)((a5 + 0x0)) = 0xFFFFFFFF;
        *(unsigned int *)((a6 + 0x0)) = 0xFFFFFFFF;
        return t0;
    }
    *(unsigned int *)((a5 + 0x0)) = ((((struct o6C_int *)(a4))->v));
    *(unsigned int *)((a6 + 0x0)) = ((((struct o70_int *)(a4))->v));
    return 0x70;
}
