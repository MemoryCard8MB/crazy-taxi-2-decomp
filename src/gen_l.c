/* Straight-line functions with calls and guards (batch gen_l): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o10_float { char p[0x10]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
int FUN_0c026ce6(void);
int FUN_0c027fbe(float, float);
float FUN_0c02806c(int);
int FUN_0c028196(void);
int FUN_0c0281b6(int);
int FUN_0c0281d4(int);
int FUN_0c02842e(int);
float FUN_0c070c40(float);
int FUN_0c073a40(int);
int FUN_0c076230(float, float, float);
int FUN_0c07ada0(int);
int nlRotateAZ(int);
int nlRotateXSC(float, float);
int nlRotateYSC(float, float);
int FUN_0c058aa0(int a4, int a5, int a6, int a7);
int nlLookAt(int a4, int a5, int a6, float f4, float f5);
int FUN_0c056960(void);

int FUN_0c058aa0(int a4, int a5, int a6, int a7)
{
    register int t0;
    register float u0;

    u0 = (((struct o0_float *)0xC058BA4)->v);
    t0 = (int)((int)a6 % (int)0x64);
    FUN_0c028196();
    FUN_0c0281d4((int)((float)a6 * u0));
    FUN_0c0281b6(0xC10D418);
    if ((int)t0 < (int)0xA) {
        FUN_0c0281b6(0xC10D410);
    }
    FUN_0c0281d4(t0);
    if (a7 == 1) {
        FUN_0c0281b6(0xC10D41C);
    } else {
        if (a7 == 2) {
            FUN_0c0281b6(0xC10D420);
        }
    }
    u0 = ((FUN_0c02806c((*(int *)0xC09DA20))) * ((((struct o2C_float *)0xC058BA4)->v)));
    FUN_0c027fbe(((float)a4 - u0), (float)a5);
    return FUN_0c02842e((*(int *)0xC09DA20));
}

int nlLookAt(int a4, int a5, int a6, float f4, float f5)
{
    int stk[3];
    register float u10;
    register float u11;
    register float u12;
    register float u13;
    register float t14;
    register float u15;
    register float u16;
    register float t17;

    if ((unsigned short)a6 != 0) {
        nlRotateAZ((unsigned short)a6);
    }
    *(float *)((((int)stk + 0) + 0x0)) = ((*(float *)((a5 + 0x0))) - (*(float *)((a4 + 0x0))));
    (((struct o4_float *)(((int)stk + 0)))->v) = (((((struct o4_float *)(a5))->v)) - ((((struct o4_float *)(a4))->v)));
    u10 = (((struct o8_float *)(a5))->v);
    u11 = (((struct o8_float *)(a4))->v);
    (((struct o8_float *)(((int)stk + 0)))->v) = (u10 - u11);
    u12 = *(float *)((((int)stk + 0) + 0x0));
    u13 = ((u10 - u11) * (u10 - u11));
    u13 = u13 + u12 * u12;
    t14 = FUN_0c070c40(u13);
    u15 = (((struct o4_float *)(((int)stk + 0)))->v);
    u16 = u13;
    u16 = u16 + u15 * u15;
    t17 = FUN_0c070c40(u16);
    nlRotateXSC((-(((((struct o4_float *)(((int)stk + 0)))->v)) * t17)), (t17 / t14));
    nlRotateYSC(((*(float *)((((int)stk + 0) + 0x0))) * t14), (-(((((struct o8_float *)(((int)stk + 0)))->v)) * t14)));
    return (FUN_0c073a40(a4));
}

int FUN_0c056960(void)
{
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    (((struct o38_uint *)0xC2B3110)->v) = 0x200A;
    t1 = (FUN_0c076230(0.75f, 0.75f, 0.75f));
    t2 = 0xC132290;
    t3 = 0x62;
    t4 = 0x34;
    for (;;) {
        if ((int)((((struct o0_int *)0xC2B3110)->v)) > (int)t4) {
            t1 = (*(int *)((t2 + 0x0)));
            (((struct o4_uint *)0xC2B3110)->v) = t1;
            t1 = 0x4;
            *(float *)((0xC2B3114 + t1)) = (float)t3;
            t1 = 0x8;
            *(float *)((0xC2B3114 + t1)) = (float)(((((struct o0_int *)0xC2B3164)->v)) + 0x148);
            t1 = 0x10;
            *(float *)((0xC2B3114 + t1)) = (((((struct o10_float *)0xC2B3164)->v)) + 1.0f);
            t1 = 0x14;
            *(float *)((0xC2B3114 + t1)) = (((((struct o10_float *)0xC2B3164)->v)) + 1.0f);
            t1 = 0x1C;
            *(float *)((0xC2B3114 + t1)) = 0.0f;
            t1 = 0x24;
            *(float *)((0xC2B3114 + t1)) = 1.0f;
            (((struct o2C_uint *)0xC2B3110)->v) = 0x0;
            t1 = (FUN_0c07ada0(0xC2B3114));
        }
        t4 = (t4 + 0x3);
        t3 = (t3 + 0x1E);
        t2 = (t2 + 0x4);
        if ((int)t4 >= (int)0x43) {
            break;
        }
    }
    return FUN_0c026ce6();
}
