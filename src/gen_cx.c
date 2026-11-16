/* Straight-line functions with calls and guards (batch gen_cx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o1FC_float { char p[0x1FC]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct o8C_uint { char p[0x8C]; unsigned int v; };
int FUN_0c163594(void);
int FUN_0c16ad4c(void);
int FUN_0c16ad54(int);
int FUN_0c16ad6c(int);
int FUN_0c16ada2(int, int, int, int, int);
int FUN_0c16ba4c(void);
int memset(int, int, int);
int mwRnaDestroy(int, int);
int mwRnaErrEntryFunc(int, int);
int mwRnaGetTransSw(int);
int mwRnaSetBitPerSmpl(int, int);
int mwRnaSetNumChan(int, int);
int mwRnaSetSfreq(int, int);
int mwRnaStop(int);
int mwlRnaAddFlshPos(int);
int mwlRnaAddWrPos(int);
int mwlRnaAlloc(void);
int mwlRnaExecSvrHndl(int, int, int, int);
int mwlRnaSetInitMember(int);
int mwlRnaWaitTransEnd(int, int, int, int);
int mwRnaCreate(int a4, int a5, int a6, int a7);
int mwRnaSetTransSw(int a4, int a5, int a6, int a7);
void mwRnaFinish(int a4, int a5, int a6, int a7);
int cvFsFinish(int a4, int a5, int a6, int a7);
int mwRnaInit(void);
int kmSetFogTable(int a4);
int mwRnaSetOutVol(int a4, int a5, int a6, int a7);
int mwRnaExecServer(void);
int kmiWriteRegister(int a4, int a5);
int syCfgExit(void);

int mwRnaCreate(int a4, int a5, int a6, int a7)
{
    int stk[9];

    register int R1;
    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    v0_0 = a4;
    v0_1 = a5;
    v0_2 = (v0_0);
    v0_3 = (0xC16ADA2);
    v0_5 = (v0_1);
    if (((int)v0_1 < (int)0x1)) goto L_C1637C4;
    if (((int)v0_5 <= (int)0x2)) goto L_C1637CE;
    L_C1637C4:;
    *(int *)((int)stk + 0) = 0xC171664;
    FUN_0c16ada2(v0_0, v0_1, a6, a7, 0xC171664);
    L_C1637EA:;
    v0_0 = (0x0);
    L_C163882:;
    return v0_0;
    L_C1637CE:;
    if ((v0_2 == 0)) goto L_C1637E2;
    v0_3 = (0x0);
    v0_0 = (v0_2);
    v0_1 = (0x0);
    if (((int)v0_5 <= 0)) goto L_C1637F6;
    L_C1637DC:;
    if (!(((*(int *)((v0_0 + 0x0))) != 0))) goto L_C1637E2;
    v0_4 = (int)(v0_1 + 0x1) < (int)v0_5;
    v0_0 = ((v0_0 + 0x4));
    v0_1 = ((v0_1 + 0x1));
    if (v0_4) goto L_C1637DC;
    goto L_C1637F6;
    L_C1637E2:;
    *(int *)((int)stk + 0) = 0xC171694;
    FUN_0c16ada2(v0_0, v0_1, 0x0, 0x0, 0xC171694);
    v0_4 = (0xC171694);
    goto L_C1637EA;
    L_C1637F6:;
    FUN_0c16ad54(((int)stk + 4));
    v0_6 = mwlRnaAlloc();
    v0_4 = (v0_6);
    if ((v0_6 != 0)) goto L_C163810;
    *(int *)((int)stk + 0) = 0xC1716C0;
    FUN_0c16ada2(v0_0, v0_1, 0x0, 0x0, 0xC1716C0);
    L_C16387A:;
    FUN_0c16ad6c(((int)stk + 4));
    v0_0 = (v0_4);
    goto L_C163882;
    L_C163810:;
    *(unsigned char *)((v0_4 + 0x3)) = v0_5;
    *(unsigned char *)((v0_4 + 0x2)) = v0_5;
    v0_0 = (v0_3);
    v0_1 = (v0_3);
    if (((int)v0_5 <= 0)) goto L_C163832;
    L_C16381E:;
    *(unsigned int *)((((v0_4 + 0x10) + v0_0) + 0x0)) = (*(int *)((v0_2 + v0_0)));
    v0_6 = (int)(v0_1 + 0x1) < (int)v0_5;
    v0_0 = ((v0_0 + 0x4));
    v0_1 = ((v0_1 + 0x1));
    if (v0_6) goto L_C16381E;
    L_C163832:;
    v0_2 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC174328) + 0x14)))))(v0_5, v0_1, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
    *(unsigned int *)((v0_4 + 0x38)) = v0_2;
    if ((v0_2 != 0)) goto L_C163850;
    *(int *)((int)stk + 0) = 0xC1716F0;
    FUN_0c16ada2(v0_0, v0_1, 0x0, 0x0, 0xC1716F0);
    v0_4 = (v0_3);
    goto L_C16387A;
    L_C163850:;
    mwlRnaSetInitMember(v0_4);
    mwRnaSetBitPerSmpl(v0_4, 0x10);     /* manual: the arguments the original passes (the generator had dropped them) */
    mwRnaSetSfreq(v0_4, 0xAC44);
    mwRnaSetNumChan(v0_4, (unsigned char)(*(signed char *)((v0_4 + 0x3))));
    v0_0 = *(int *)((v0_4 + 0x38));
    *(unsigned int *)(((int)stk + 8)) = v0_0;
    *(unsigned int *)((v0_4 + 0x28)) = (((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((v0_0 + 0x0))) + 0x18)))))(v0_0, a5, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24)));
    *(unsigned char *)((v0_4 + 0x0)) = 0x1;
    goto L_C16387A;
}

int mwRnaSetTransSw(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t3;
    register int t16;
    register int t23;
    register int t36;

    *(unsigned int *)(((int)stk + 8)) = a5;
    if (a4 == 0) {
        *(int *)((int)stk + 0) = 0xC171714;
        t36 = (FUN_0c16ada2(a4, a5, a6, a7, 0xC171714));
    } else {
        (((struct o8C_uint *)(a4))->v) = 0x1;
        if ((unsigned char)(*(signed char *)((a4 + 0x5))) == 1) {
            mwlRnaWaitTransEnd(a4, a5, a6, a7);
            t3 = mwRnaGetTransSw(a4);
            if (t3 == 1) {
                mwlRnaAddWrPos(a4);
            } else {
                mwlRnaAddFlshPos(a4);
            }
            *(unsigned char *)((a4 + 0x5)) = 0x0;
        }
        FUN_0c16ad54(((int)stk + 4));
        (((struct o8C_uint *)(a4))->v) = 0x0;
        if ((*(int *)(((int)stk + 8))) == 0) {
            t16 = mwRnaGetTransSw(a4);
            if (t16 != 0) {
                (((struct o50_uint *)(a4))->v) = (*(int *)((a4 + 0x2C)));
                (((struct o54_uint *)(a4))->v) = 0x0;
                (((struct o58_uint *)(a4))->v) = 0x0;
                *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) & 0x6);
            }
        } else {
            if ((*(int *)(((int)stk + 8))) == 1) {
                t23 = mwRnaGetTransSw(a4);
                if (t23 != 1) {
                    *(unsigned int *)((a4 + 0x2C)) = 0x0;
                    *(unsigned int *)((a4 + 0x30)) = 0x0;
                    *(unsigned int *)((a4 + 0x34)) = 0x0;
                    *(unsigned char *)((a4 + 0x6)) = 0x0;
                    (((struct o5C_uint *)(a4))->v) = 0x0;
                    (((struct o48_uint *)(a4))->v) = 0x0;
                    (((struct o4C_uint *)(a4))->v) = 0x0;
                    *(unsigned int *)((a4 + 0x3C)) = 0x0;
                    *(unsigned char *)((a4 + 0x4)) = 0x0;
                    (((struct o50_uint *)(a4))->v) = (*(int *)((a4 + 0x2C)));
                    (((struct o54_uint *)(a4))->v) = 0x0;
                    *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) | 0x1);
                }
            }
        }
        t36 = (FUN_0c16ad6c(((int)stk + 4)));
    }
    return t36;
}

void mwRnaFinish(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;

    t0 = (((struct o0_int *)0xC174324)->v);
    (((struct o0_uint *)0xC174324)->v) = (t0 - 1);
    if ((t0 - 1) == 0) {
        t1 = (t0 - 1);
        t2 = (t0 - 1);
        t0 = 0xC303CA0;
        t3 = 0xC303CA0;
        t4 = 0xC303CA0;
        for (;;) {
            if ((unsigned char)(*(signed char *)((t4 + 0x0))) == 1) {
                t0 = t3;
                mwRnaStop(t0);
            } else {
                t5 = t1;
                t6 = t2;
                t7 = t0;
            }
            t4 = (t4 + 0x90);
            t1 = t5;
            t2 = t6;
            t0 = t7;
            t3 = (t3 + 0x90);
            if ((unsigned int)t4 >= (unsigned int)0xC304120) {
                break;
            }
        }
        t0 = t1;
        t1 = t2;
        t2 = 0xC303CA0;
        t3 = 0xC303CA0;
        t4 = 0xC303CA0;
        t5 = 0xC303CA0;
        for (;;) {
            if ((unsigned char)(*(signed char *)((t5 + 0x0))) == 1) {
                t2 = t4;
                mwRnaDestroy(t2, t3);
            } else {
                t6 = t0;
                t7 = t1;
                t8 = t2;
                t9 = t3;
            }
            t5 = (t5 + 0x90);
            t0 = t6;
            t1 = t7;
            t2 = t8;
            t3 = t9;
            t4 = (t4 + 0x90);
            if ((unsigned int)t5 >= (unsigned int)0xC304120) {
                break;
            }
        }
        memset(0xC303CA0, 0x0, 0x480);
        memset(0xC304120, 0x0, 0x820);
        t0 = 0x0;
        t1 = 0xC304940;
        for (;;) {
            t0 = (t0 + 0x1);
            *(unsigned int *)((t1 + 0x0)) = 0x80808080;
            t1 = (t1 + 0x4);
            if ((int)t0 >= (int)0x200) {
                break;
            }
        }
        t2 = ((int (*)(int, int, int, int))((*(int *)((((((struct o4_int *)0xC174324)->v)) + 0x10)))))(t0, 0x80808080, t1, 0x200);
        ((int (*)(void))(0xC16AD50))();
    return;
    }
}

int cvFsFinish(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;

    t0 = *(int *)0xC174580;
    *(unsigned int *)0xC174580 = (t0 - 1);
    if ((t0 - 1) == 0) {
        t1 = (t0 - 1);
        t0 = 0xC30B754;
        t2 = 0xC30B754;
        t3 = 0xC30B754;
        t4 = 0xC30B754;
        t5 = 0xC30B754;
        for (;;) {
            if ((*(int *)((t3 + 0x0))) != 0) {
                t1 = (*(int *)(((*(int *)((t4 + 0x0))) + 0x14)));
                t0 = (*(int *)((t4 + 0x4)));
                t6 = ((int (*)(int, int, int, int))(t1))(t0, t2, a6, a7);
            } else {
                t6 = t1;
                t7 = t0;
                t8 = t2;
            }
            t3 = (t3 + 0x8);
            t1 = t6;
            t0 = t7;
            t2 = t8;
            *(unsigned int *)((t5 + 0x0)) = 0x0;
            *(unsigned int *)((t5 + 0x4)) = 0x0;
            t5 = (t5 + 0x8);
            t4 = (t4 + 0x8);
            if ((unsigned int)t3 >= (unsigned int)0xC30B854) {
                break;
            }
        }
        t0 = 0xC30B854;
        for (;;) {
            *(unsigned char *)((t0 + 0x4)) = 0x0;
            t0 = (t0 + 0x10);
            if ((unsigned int)t0 >= (unsigned int)0xC30BA54) {
                break;
            }
        }
        t0 = memset(0xC30BA54, 0x0, 0x9);
        *(unsigned char *)0xC30BA54 = 0x0;
        t1 = t0;
    }
    return t1;
}

int mwRnaInit(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = (((struct o0_int *)0xC174324)->v);
    *(volatile int *)0xC174320;
    if (t0 == 0) {
        FUN_0c16ad4c();
        memset(0xC303CA0, 0x0, 0x480);
        memset(0xC304120, 0x0, 0x820);
        t0 = 0x0;
        t1 = 0xC304940;
        for (;;) {
            t0 = (t0 + 0x1);
            *(unsigned int *)((t1 + 0x0)) = 0x80808080;
            t1 = (t1 + 0x4);
            if ((int)t0 >= (int)0x200) {
                break;
            }
        }
        if (((((struct o4_int *)0xC174324)->v)) == 0) {
            (((struct o4_uint *)0xC174324)->v) = (FUN_0c16ba4c());
        } else {
            t0 = 0x80808080;
            t2 = t1;
            t1 = 0x200;
        }
        t3 = ((int (*)(int, int, int, int))((*(int *)((((((struct o4_int *)0xC174324)->v)) + 0xC)))))(((((struct o8_int *)0xC174324)->v)), t0, t2, t1);
        FUN_0c163594();
        t0 = (mwRnaErrEntryFunc(0x0, 0x0));
    }
    (((struct o0_uint *)0xC174324)->v) = (((((struct o0_int *)0xC174324)->v)) + 0x1);
    return t0;
}

int kmSetFogTable(int a4)
{
    register float u0;
    register int t2;
    register int t3;
    register int t5;

    u0 = *(float *)0xC147D30;
    t2 = ((int)(((((struct o1FC_float *)(a4))->v)) * u0) & 0xFF);
    t3 = 0x80;
    for (;;) {
        t3 = (t3 - 1);
        t5 = t2;
        t2 = (int)((*(float *)((a4 + (t3 << 2)))) * u0);
        t2 = (t2 & 0xFF);
        kmiWriteRegister(((t3 << 2) + 0x200), (unsigned short)((t2 << 8) | t5));
        if (t3 == 0) {
            break;
        }
    }
    return 0x0;
}

int mwRnaSetOutVol(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    if (a4 == 0) {
        t0 = (FUN_0c16ada2(a4, a5, a6, a7, 0xC171714));
    } else {
        t1 = 0x0;
        if ((int)a5 >= 0) {
        } else {
            t2 = a5;
            if ((int)a5 <= (int)0xFFFFFC19) {
                t2 = 0xFFFFFC19;
            }
            t1 = t2;
        }
        t2 = *(int *)((a4 + 0x38));
        t3 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t2 + 0x0))) + 0x34)))))(t2, t1, a6, a7);
        (((struct o60_uint *)(a4))->v) = t1;
        t0 = 0x60;
    }
    return t0;
}

int mwRnaExecServer(void)
{
    int stk[6];
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t8;
    register int t9;

    FUN_0c16ad54(((int)stk + 0));
    t1 = 0xC303CA0;
    t2 = 0xC303CA0;
    t3 = 0xC303CA0;
    t4 = 0xC303CA0;
    for (;;) {
        if ((unsigned char)(*(signed char *)((t4 + 0x0))) == 1) {
            t1 = t3;
            mwlRnaExecSvrHndl(t1, t2, 0x0, 0x0);
        } else {
            t8 = t1;
            t9 = t2;
        }
        t4 = (t4 + 0x90);
        t1 = t8;
        t2 = t9;
        t3 = (t3 + 0x90);
        if ((unsigned int)t4 >= (unsigned int)0xC304120) {
            break;
        }
    }
    return (FUN_0c16ad6c(((int)stk + 0)));
}

int kmiWriteRegister(int a4, int a5)
{
    *(unsigned int *)(((a4 + 0xA05F8000) + 0x0)) = a5;
    return 0x1;
}

int syCfgExit(void)
{
    *(unsigned int *)0xC173808 = 0x0;
    return 0x0;
}
