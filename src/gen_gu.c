/* Straight-line functions with calls and guards (batch gen_gu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_short { short v; };
struct o18_float { char p[0x18]; float v; };
struct o2_short { char p[0x2]; short v; };
struct o28_short { char p[0x28]; short v; };
struct o2C_short { char p[0x2C]; short v; };
struct o4_short { char p[0x4]; short v; };
int FUN_0c0148f4(void);
int FUN_0c0164fc(void);
int FUN_0c016cca(int);
int FUN_0c018df2(void);
int FUN_0c026c02(void);
int FUN_0c026ce6(void);
int FUN_0c026e8a(void);
int FUN_0c029b12(int, float);
int FUN_0c02a798(void);
int FUN_0c02d37c(void);
int FUN_0c02fe92(void);
int FUN_0c03ff4a(int);
int FUN_0c0423e6(int);
int FUN_0c0464f0(int, int, int, int, int);
int FUN_0c0476dc(int);
int FUN_0c047aa4(void);
int FUN_0c0494a4(void);
int FUN_0c04d5fa(void);
int FUN_0c059298(void);
int FUN_0c060384(void);
int FUN_0c06b3a6(void);
int FUN_0c073360(void);
int FUN_0c073a30(float, float, float);
int FUN_0c073a60(int);
int nlExecuteEvent(void);
int nlGetMatrix(int);
int nlObjPutUseViewMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int FUN_0c01d7b0(void);

int FUN_0c01d7b0(void)
{
    int stk[4];
    register int t4;
    register int t6;
    register int t34;
    register int t52;
    register int t64;

    FUN_0c026c02();
    FUN_0c026ce6();
    FUN_0c018df2();
    FUN_0c016cca(0x0);
    t4 = FUN_0c0476dc(0x0);
    if (t4 != 4) {
        FUN_0c0148f4();
        t6 = FUN_0c047aa4();
        if (t6 == 0) {
            FUN_0c0164fc();
        }
        FUN_0c02fe92();
        FUN_0c02d37c();
        FUN_0c060384();
        FUN_0c06b3a6();
    } else {
        FUN_0c073360();
        FUN_0c073a60(0xC175930);
        nlRotateAY((unsigned short)((((struct o2_short *)0xC17593C)->v)));
        nlRotateAX((unsigned short)((((struct o0_short *)0xC17593C)->v)));
        nlRotateAZ((unsigned short)((((struct o4_short *)0xC17593C)->v)));
        nlPushMatrix(0x0);
        nlRotateAX((unsigned short)((((struct o28_short *)0xC17593C)->v)));
        nlRotateAZ((unsigned short)((((struct o2C_short *)0xC17593C)->v)));
        FUN_0c073a30(0.0f, -2.5f, 0.0f);
        nlGetMatrix(0xC17596C);
        nlObjPutUseViewMatrix((*(int *)(((((*(int *)0xC175C80) & 0x7) << 2) + 0xC11D098))));
        nlPopMatrix(0x1);
        nlPopMatrix(0x1);
        *(unsigned int *)(((int)stk + 0)) = 0x12C;
        t34 = 0xC118760;
        for (;;) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x4)) = *(struct mv3 *)(t34); }
            *(float *)(((int)stk + 8)) = ((((struct o18_float *)((FUN_0c029b12((((int)stk + 0) + 0x4), 0.0f))))->v));
            nlPushMatrix(0x0);
            FUN_0c073a60((((int)stk + 0) + 0x4));
            nlRotateAY((unsigned short)(*(short *)0xC177D52));
            nlObjPutUseViewMatrix(0xC5101A0);
            nlPopMatrix(0x1);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x4)) = *(struct mv3 *)((((short)(*(signed char *)((t34 + 0xD))) * (short)0x1C) + 0xC177918)); }
            *(float *)(((int)stk + 8)) = ((((struct o18_float *)((FUN_0c029b12((((int)stk + 0) + 0x4), 0.0f))))->v));
            nlPushMatrix(0x0);
            FUN_0c073a60((((int)stk + 0) + 0x4));
            nlRotateAY((unsigned short)(*(short *)0xC177D52));
            nlObjPutUseViewMatrix(0xC510298);
            nlPopMatrix(0x1);
            t52 = *(int *)(((int)stk + 0));
            t34 = (t34 + 0x14);
            *(unsigned int *)(((int)stk + 0)) = (t52 - 1);
            if ((t52 - 1) == 0) {
                break;
            }
        }
    }
    FUN_0c0423e6(0x1);
    t64 = FUN_0c0476dc(0x0);
    if (t64 != 4) {
        FUN_0c03ff4a(0x1);
        FUN_0c04d5fa();
        nlExecuteEvent();
        FUN_0c02a798();
    }
    FUN_0c0494a4();
    FUN_0c059298();
    FUN_0c026e8a();
    return (FUN_0c0464f0(0x1, 0x0, 0x0, 0x0, *(int *)((int)stk + 0)));
}
