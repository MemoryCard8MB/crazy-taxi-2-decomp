/* Straight-line functions with calls and guards (batch gen_hw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o0_float { float v; };
struct o0_int { int v; };
struct o10_float { char p[0x10]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o8_uint { char p[0x8]; unsigned int v; };
int FUN_0c029b12(int, float);
int nlAddVector(int, int);
int nlScaleUnitVector(int, int, float);
int nlSubVector(int, int, Stk3);
int FUN_0c047ab0(int a4, int a5);

int FUN_0c047ab0(int a4, int a5)
{
    int stk[3];

    register int R1;
    register int R2;
    register int R3;
    register int R8;
    register int R9;
    register int R10;
    register int R12;
    register int R13;
    register float F0;
    register float F2;
    register float F3;
    register float F4;
    register float F10;
    register float F14;
    register float F15;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    v0_1 = a4;
    v0_2 = a5;
    v0_3 = (((struct o0_int *)0xC12D2A8)->v);
    v0_0 = (v0_1);
    v0_1 = (v0_3);
    if (((int)v0_3 < (int)0xB)) goto L_C047AC8;
    L_C047BCA:;
    (((struct o8_uint *)0xC12D2A8)->v) = 0xFFFFFFFF;
    return 0xC12D2B0;
    L_C047AC8:;
    if (((*(int *)0xC1EC71C) != 0)) goto L_C047B20;
    v0_3 = (0xC12EC08);
    v0_1 = (((((v0_1 << 2) << 1) + v0_1) << 2));
    L_C047B2E:;
    { struct mv5 { int w[5]; }; *(struct mv5 *)(((v0_1 + v0_3) + 0x10)) = *(struct mv5 *)(v0_0); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(v0_2); }
    *(float *)(((int)stk + 4)) = (*(float *)0xC175934);
    nlSubVector(((int)stk + 0), 0xC175930, *(Stk3 *)(((int)stk + 0)));
    nlScaleUnitVector(((int)stk + 0), ((int)stk + 0), ((((struct o0_float *)0xC047C2C)->v)));
    nlAddVector(((int)stk + 0), 0xC175930);
    if (((*(int *)((v0_0 + 0x8))) != 28)) goto L_C047B7E;
    if (((*(int *)0xC1EC71C) == 0)) goto L_C047BA4;
    L_C047B7E:;
    v0_2 = FUN_0c029b12(((int)stk + 0), ((((struct o10_float *)0xC047C2C)->v)));
    v0_1 = (v0_2);
    if (((*(int *)((v0_2 + 0x1C))) == -1)) goto L_C047BA4;
    if ((!(((((struct o18_float *)(v0_1))->v)) > (*(float *)(((int)stk + 4)))))) goto L_C047BA4;
    *(float *)(((int)stk + 4)) = ((((struct o18_float *)(v0_1))->v));
    L_C047BA4:;
    *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + ((((struct o18_float *)0xC047C2C)->v)));
    v0_0 = *(int *)((v0_0 + 0x8));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((((v0_0 << 1) + v0_0) << 2) + (*(int *)0xC2ADA68))) = *(struct mv3 *)(((int)stk + 0)); }
    goto L_C047BCA;
    L_C047B20:;
    v0_3 = (0xC12F1A8);
    v0_1 = (((((v0_1 << 2) << 1) + v0_1) << 2));
    goto L_C047B2E;
}
