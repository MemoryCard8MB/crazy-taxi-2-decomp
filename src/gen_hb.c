/* Straight-line functions with calls and guards (batch gen_hb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o13_uchar { char p[0x13]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o1434_int { char p[0x1434]; int v; };
struct o1434_uint { char p[0x1434]; unsigned int v; };
struct o1438_int { char p[0x1438]; int v; };
struct o1438_uint { char p[0x1438]; unsigned int v; };
struct o143C_uint { char p[0x143C]; unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o24_float { char p[0x24]; float v; };
struct o28_int { char p[0x28]; int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o4C_int { char p[0x4C]; int v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o58_int { char p[0x58]; int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o63_uchar { char p[0x63]; unsigned char v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_int { char p[0x6C]; int v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oB_uchar { char p[0xB]; unsigned char v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oFF_uchar { char p[0xFF]; unsigned char v; };
int CheckAreaGrid(int, int);
int FUN_0c01505c(int, int);
int FUN_0c018b22(int, int);
int FUN_0c018c2a(float, float);
int FUN_0c018c8a(float, float);
int FUN_0c026bd6(int);
int FUN_0c0272a6(int);
int FUN_0c028a0c(void);
int FUN_0c0297f4(int, int, float);
int FUN_0c029b12(int, float);
int FUN_0c02a470(int, int);
int FUN_0c03f154(int);
int FUN_0c04707e(int, int, int);
int FUN_0c058ca6(int, int);
int FUN_0c05b596(int, int, int);
int FUN_0c05f434(void);
int FUN_0c05f44c(int, int);
int FUN_0c05f470(int, int, float, float);
int FUN_0c05f4c8(int);
int FUN_0c05f6fe(int);
int FUN_0c06356c(int);
int FUN_0c066cc6(int, int);
int FUN_0c067494(int, int);
int FUN_0c069864(int);
int FUN_0c0698ac(int, int);
int FUN_0c06aa94(int);
int FUN_0c06ce48(void);
int FUN_0c06e700(int, int, float);
int FUN_0c072230(int, int);
int FUN_0c072290(int, int);
int FUN_0c072600(int);
int FUN_0c073360(void);
int FUN_0c073a30(float, float, float);
int FUN_0c073a40(int);
int FUN_0c073a60(int);
float FUN_0c073b40(int, int);
int FUN_0c073c40(int, int, float);
float FUN_0c073e10(int);
int FUN_0c078800(int, int, int);
int FUN_0c078850(int);
int FUN_0c07ffac(int);
int GetRotVec(int);
int KillColliObj(int);
int MultiRot4Vec(int);
int SetColliObj(int, int);
int camSetTarget(int, int);
int nlAddVector(int, int);
int nlAddVector3op(int, int, int);
int nlGetAverageVector(int, int, int, float, float);
int nlGetMatrix(int);
int nlGetMatrix33on44(int);
int nlGetPushedMatrix(int);
float nlLength(int, int);
int nlMultiMatrix(int);
int nlObjPutUseViewMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateV(int, int);
int nlScale(float, float, float);
int nlScaleUnitVector(int, int, float);
int nlSubVector(int, int, Stk3);
int nlSubVector3op(int, int, int);
float nlUnitVectorsd(int, int);
int set_event(int, int);
int FUN_0c06d8e6(float f4);
int FUN_0c0164fc(int a4, int a5);
int FUN_0c02fb94(int a4, int a5);
int FUN_0c026d10(void);
int FUN_0c0638e6(int a4);
int FUN_0c02bbbc(void);
void FUN_0c02a326(int a4);
int FUN_0c0303d0(int a4);
int FUN_0c06e0dc(int a4);
int FUN_0c06deb8(int a4);
int FUN_0c0461b0(int a4);
int FUN_0c02a5ca(int a4, int a5, int a6, int a7);
int FUN_0c047ab0(int a4, int a5);
int FUN_0c069d2c(int a4);
int FUN_0c05fab8(float f4, float f5);
int FUN_0c02bcf8(int a4);
int FUN_0c069450(void);
int FUN_0c063458(int a4, int a5, int a6, int a7, float f4);
void FUN_0c027096(void);
int FUN_0c0666c0(int a4);
int FUN_0c01422e(int a4);
int getRootDistance(int a4, int a5, int a6, int a7, int a8, int a9, int a10);

int FUN_0c06d8e6(float f4)
{
    int stk[9];
    register int t3;
    register int t6;
    register float u8;
    register float u9;
    register int t36;
    register float t41;
    register float u42;
    register float u45;
    register int t46;
    register int t77;
    register int t2;
    register int t4;
    register int t5;
    register int t26;
    register int t27;

    t3 = *(int *)(((*(int *)0xC13C358) + 0xC));
    if ((int)t3 <= (int)0x3) {
        t6 = 0x0;
        u8 = f4;
        u9 = 0.0f;
        for (;;) {
            if ((int)t6 >= (int)(*(int *)(((*(int *)0xC13C358) + 0x4)))) {
                break;
            }
            t5 = t6;
            t2 = 0x80;
            t5 = (t5 << 8);
            if ((int)(*(int *)((((*(int *)(((*(int *)0xC13C358) + 0x0))) + t5) + t2))) < (int)0x4) {
                u8 = ((nlLength(0xC17599C, (((*(int *)(((*(int *)0xC13C358) + 0x0))) + t5) + 0x70))));
            } else {
                u8 = 0.0f;
                t26 = t2;
                t27 = t3;
            }
            t2 = t26;
            t3 = t27;
            if (u8 > u9) {
                t4 = t6;
                u9 = u8;
            }
            t6 = (t6 + 0x1);
        }
        if (!(((((struct o0_float *)0xC06DA80)->v)) > u9)) {
            t36 = *(int *)0xC13C358;
            if ((int)((((struct o80_int *)(((*(int *)((t36 + 0x0))) + (t4 << 8))))->v)) >= (int)0x4) {
                *(unsigned int *)0xC2BB3D8 = 0x4;
                t77 = 0x80;
            } else {
                nlSubVector3op(((int)stk + 0), (((*(int *)((t36 + 0x0))) + (t4 << 8)) + 0x70), 0xC17599C);
                *(float *)(((int)stk + 4)) = 0.0f;
                t41 = FUN_0c073e10(((int)stk + 0));
                u42 = (((struct oC_float *)0xC06DA80)->v);
                FUN_0c073c40(((int)stk + 0), ((int)stk + 0), (t41 + u42));
                nlAddVector3op((((int)stk + 0) + 0x18), ((int)stk + 0), 0xC17599C);
                u45 = (((struct o18_float *)0xC06DA80)->v);
                t46 = FUN_0c029b12((((int)stk + 0) + 0x18), u45);
                if ((*(int *)((t46 + 0x1C))) != -1) {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x18)) = *(struct mv3 *)(t46); }
                }
                *(float *)(((int)stk + 28)) = ((*(float *)(((int)stk + 28))) + u45);
                FUN_0c018b22((((int)stk + 0) + 0x18), 0x0);
                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0xC)) = *(struct mv3 *)(0xC17599C); }
                FUN_0c06e700((((int)stk + 0) + 0xC), 0xC17597C, u42);
                t77 = camSetTarget((((int)stk + 0) + 0xC), 0x0);
                *(unsigned int *)0xC2BB3D8 = ((*(int *)0xC2BB3D8) + 0x1);
            }
        } else {
            *(unsigned int *)0xC2BB3D8 = 0x4;
            t77 = 0xC06DA80;
        }
    } else {
        *(unsigned int *)0xC2BB3D8 = 0x4;
    }
    return t77;
}

int FUN_0c0164fc(int a4, int a5)
{
    int stk[8];

    register int R1;
    register int R2;
    register int R3;
    int R14;
    register float F0;
    register float F3;
    register float F4;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_10;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    register float w0_0;
    v0_6 = a5;
    v0_3 = (((struct oC_int *)0xC177D0C)->v);
    v0_5 = (((struct o10_int *)0xC177D0C)->v);
    *(unsigned int *)(((int)stk + 0)) = 0xC2ADF08;
    *(unsigned int *)(((int)stk + 4)) = 0xC2ADED0;
    v0_0 = (0x0);
    v0_1 = (0xC177D28);
    v0_2 = (0x0);
    v0_3 = (v0_3);
    R14 = (0x1);
    v0_4 = (0xC1758B4);
    v0_5 = (v0_5);
    w0_0 = (0.0f);
    L_C01661E:;
    if (((int)v0_0 < (int)((((struct o14_int *)0xC177D0C)->v)))) goto L_C016530;
    (((struct o0_uint *)0xC177D0C)->v) = (((((struct o0_int *)0xC177D0C)->v)) + 0x1);
    (((struct o28_uint *)0xC177D0C)->v) = (((((struct o28_int *)0xC177D0C)->v)) + 0x1);
    return (FUN_0c028a0c());
    L_C016530:;
    v0_6 = *(int *)((v0_3 + 0x0));
    v0_7 = (v0_6);
    if ((v0_6 == 0)) goto L_C01655A;
    if (!((v0_7 != 1))) goto L_C016618;
    if ((v0_7 == 3)) goto L_C0165EC;
    if ((v0_7 == 4)) goto L_C016618;
    if ((v0_7 == 5)) goto L_C016618;
    if ((v0_7 == 6)) goto L_C016612;
    if ((v0_7 == 7)) goto L_C016618;
    if ((v0_7 == -1)) goto L_C016618;
    goto L_C016618;
    L_C016618:;
    v0_0 = ((v0_0 + 0x1));
    v0_3 = ((v0_3 + 0x18));
    v0_5 = ((v0_5 + 0x14));
    goto L_C01661E;
    L_C016612:;
    *(unsigned int *)((v0_1 + 0x0)) = v0_2;
    *(unsigned int *)((v0_3 + 0x0)) = 0x7;
    goto L_C016618;
    L_C0165EC:;
    if (((*(int *)((v0_1 + 0x0))) != 0)) goto L_C01660E;
    if (((*(int *)0xC1ECD0C) == 2)) goto L_C01660E;
    *(unsigned int *)((v0_3 + 0x0)) = 0x4;
    (((struct o54_uint *)(v0_4))->v) = v0_2;
    FUN_0c058ca6(0x400A9, 0x0);
    *(unsigned int *)((v0_1 + 0x0)) = R14;
    goto L_C016618;
    L_C01660E:;
    *(unsigned int *)((v0_3 + 0x0)) = R14;
    goto L_C016618;
    L_C01655A:;
    v0_8 = ((v0_0 & R14));
    v0_6 = (v0_2);
    if (((v0_0 & R14) == 0)) goto L_C01656C;
    if (((((((struct o28_int *)0xC177D0C)->v)) & R14) != 0)) goto L_C016618;
    L_C01656C:;
    if ((v0_8 != 0)) goto L_C016578;
    if (((((((struct o28_int *)0xC177D0C)->v)) & R14) == 0)) goto L_C016618;
    L_C016578:;
    v0_8 = *(int *)((v0_3 + 0x4));
    v0_7 = (v0_8);
    if ((v0_8 == -1)) goto L_C01659E;
    v0_8 = ((*(int *)(((int)stk + 4))));
    L_C016580:;
    v0_7 = *(int *)((v0_3 + 0x4));
    v0_9 = (v0_7);
    if ((v0_7 == (*(int *)0xC2ADEC4))) goto L_C016590;
    v0_10 = *(int *)((v0_8 + 0x0));
    v0_7 = (v0_10);
    if ((v0_9 != v0_10)) goto L_C016592;
    L_C016590:;
    v0_6 = (R14);
    L_C016592:;
    v0_7 = (unsigned int)(v0_8 + 0x4) < (unsigned int)(*(int *)(((int)stk + 0)));
    v0_8 = ((v0_8 + 0x4));
    if (v0_7) goto L_C016580;
    L_C0165A0:;
    if ((v0_6 == 0)) goto L_C016618;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x14)) = *(struct mv3 *)(v0_5); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x8)) = *(struct mv3 *)((v0_4 + 0x7C)); }
    *(float *)(((int)stk + 12)) = w0_0;
    *(float *)(((int)stk + 24)) = w0_0;
    v0_6 = !(((((struct o4_float *)0xC177D0C)->v)) > (nlLength((((int)stk + 0) + 0x14), (((int)stk + 0) + 0x8))));
    if (v0_6) goto L_C016618;
    *(unsigned int *)((v0_3 + 0x0)) = R14;
    FUN_0c01505c(v0_3, v0_5);
    goto L_C016618;
    L_C01659E:;
    v0_6 = (R14);
    goto L_C0165A0;
}

int FUN_0c02fb94(int a4, int a5)
{
    int t0;
    register int t1;
    register int t3;

    t0 = *(short *)((a4 + 0x10));
    t1 = t0;
    if (t0 == -1) {
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(a5) = *(struct mv3 *)(a4); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a5 + 0xC)) = *(struct mv3 *)(0xC0A2D08); }
        (((struct o18_float *)(a5))->v) = 0.0f;
        FUN_0c073360();
        nlRotateAY((*(int *)((a4 + 0xC))));
        t0 = *(short *)((a4 + 0x10));
        nlRotateAX((*(int *)((0xC1296BC + ((((t0 << 2) << 1) + t0) << 2)))));
        GetRotVec((a5 + 0x30));
        nlPopMatrix(0x1);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a5 + 0x48)) = *(struct mv3 *)(0xC0A2D08); }
        *(unsigned int *)((a5 + 0x28)) = (a5 + 0x30);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a5 + 0x58)) = *(struct mv3 *)(0xC0A2D08); }
        t0 = *(short *)((a4 + 0x10));
        if ((t0 != 17) && ((t0 != 20) && ((t0 != 19) && ((t0 != 7) && (t0 != 16))))) {
            (((struct o68_uint *)(a5))->v) = 0x1;
        } else {
            (((struct o68_uint *)(a5))->v) = 0x0;
        }
        t0 = *(short *)((a4 + 0x10));
        (((struct o54_uint *)(a5))->v) = (((((t0 << 2) << 1) + t0) << 2) + 0xC1296B0);
        (((struct o6C_uint *)(a5))->v) = (*(short *)((a4 + 0x12)));
        (((struct o64_uint *)(a5))->v) = (*(int *)(((*(int *)((0xC129CCC + ((*(short *)((a4 + 0x10))) << 2)))) + ((*(short *)((a4 + 0x12))) << 2))));
        t0 = *(short *)((a4 + 0x10));
        if ((t0 != 7) && ((t0 != 8) && ((t0 != 10) && (t0 != 14)))) {
            t0 = *(short *)((a4 + 0x10));
            if ((t0 != 11) && ((t0 != 12) && ((t0 != 15) && (t0 != 16)))) {
                t0 = *(short *)((a4 + 0x10));
                if (t0 == 19) {
                    t1 = (SetColliObj(a5, 0x18));
                } else {
                    t3 = 0x15;
                    if (t0 == 20) {
                        t3 = 0x19;
                    }
                    t1 = (SetColliObj(a5, t3));
                }
                t0 = t1;
            } else {
                t0 = (SetColliObj(a5, 0x17));
            }
            t1 = t0;
        } else {
            t1 = (SetColliObj(a5, 0x16));
        }
    }
    return t1;
}

int FUN_0c026d10(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC1EC71C;
    t1 = *(int *)0xC175C84;
    switch (t0) {
    case 0:
        if (t1 == 1) {
            *(unsigned int *)0xC270B68 = 0x0;
            (((struct oC_uint *)0xC270B04)->v) = 0x0;
            *(unsigned int *)0xC270BB8 = 0x0;
        } else {
            *(unsigned int *)0xC270B68 = 0x1;
            (((struct oC_uint *)0xC270B04)->v) = 0x1;
            *(unsigned int *)0xC270BB8 = 0x1;
        }
        t0 = *(int *)0xC270B68;
        FUN_0c0272a6((((((t0 << 2) << 1) + t0) << 2) + 0xC09D670));
        t0 = *(int *)0xC270B68;
        { struct mv9 { int w[9]; }; *(struct mv9 *)(0xC270B70) = *(struct mv9 *)((((((t0 << 2) << 1) + t0) << 2) + 0xC09D670)); }
        break;
    case 1:
        if (t1 == 1) {
            *(unsigned int *)0xC270B68 = 0x5;
            (((struct oC_uint *)0xC270B04)->v) = 0x5;
            *(unsigned int *)0xC270BB8 = 0x5;
            t0 = 0xC09D76C;
        } else {
            *(unsigned int *)0xC270B68 = 0x0;
            (((struct oC_uint *)0xC270B04)->v) = 0x0;
            *(unsigned int *)0xC270BB8 = 0x0;
            t0 = 0xC09D6B8;
        }
        FUN_0c0272a6(t0);
        t0 = *(int *)0xC270B68;
        { struct mv9 { int w[9]; }; *(struct mv9 *)(0xC270B70) = *(struct mv9 *)((((((t0 << 2) << 1) + t0) << 2) + 0xC09D6B8)); }
        break;
    case 2:
        *(volatile int *)0xC2ADEB8;
        *(unsigned int *)0xC270B68 = 0x0;
        (((struct oC_uint *)0xC270B04)->v) = 0x0;
        *(unsigned int *)0xC270BB8 = 0x0;
        t0 = *(int *)0xC270B68;
        FUN_0c0272a6((((((t0 << 2) << 1) + t0) << 2) + 0xC09D7D8));
        t0 = *(int *)0xC270B68;
        { struct mv9 { int w[9]; }; *(struct mv9 *)(0xC270B70) = *(struct mv9 *)((((((t0 << 2) << 1) + t0) << 2) + 0xC09D7D8)); }
        break;
    }
    { struct mv9 { int w[9]; }; *(struct mv9 *)(0xC270B94) = *(struct mv9 *)(0xC270B38); }
    (((struct o0_float *)0xC270B04)->v) = 1.0f;
    (((struct o4_float *)0xC270B04)->v) = 0.0f;
    return 0xC270B04;
}

int FUN_0c0638e6(int a4)
{
    int stk[8];
    register float t3;
    register float u7;
    register float u8;
    register int t9;
    register int t10;
    register int t15;
    register int t23;
    register int t25;
    register int t27;
    register int t30;
    register float u19;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = 0xC1758B4;
    nlSubVector3op((((int)stk + 0) + 0x14), ((*(int *)(((int)stk + 0))) + 0x40), 0xC175930);
    t3 = FUN_0c073b40((((int)stk + 0) + 0x14), ((*(int *)(((int)stk + 4))) + 0xB8));
    t10 = 0x1;
    if (t3 > 0.0f) {
        t10 = 0x0;
    }
    nlPushMatrix(0xC17596C);
    *(unsigned int *)(((int)stk + 0)) = 0xC1758B4;
    u7 = (((struct o0_float *)0xC063A60)->v);
    u8 = (((struct o4_float *)0xC063A60)->v);
    t9 = 0x0;
    for (;;) {
        FUN_0c072230((((((t10 & 0x1) << 1) + (t10 & 0x1)) << 2) + 0xC10EF4C), (((int)stk + 0) + 0x8));
        *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) + u7);
        t15 = *(int *)(((FUN_0c029b12((((int)stk + 0) + 0x8), u8)) + 0x1C));
        if (t15 != -1) {
            if ((t10 & 0x1) != 0) {
                u19 = ((((struct o10_float *)0xC063A60)->v));
            } else {
                u19 = ((((struct o14_float *)0xC063A60)->v));
            }
            FUN_0c073c40((((int)stk + 0) + 0x14), ((*(int *)(((int)stk + 0))) + 0xB8), u19);
            t23 = FUN_0c0297f4((((int)stk + 0) + 0x8), (((int)stk + 0) + 0x14), 0.0f);
            if ((*(int *)((t23 + 0x1C))) == -1) {
                break;
            }
            t9 = (t9 + 0x1);
            t25 = (t10 & 0x1);
            t10 = (t10 + 0x1);
            if ((int)t9 >= (int)0x2) {
                nlPopMatrix(0x1);
                if (0x0 == 0) {
                    return 0x1;
                }
                return t25;
            }
            continue;
        }
        t9 = (t9 + 0x1);
        t27 = (t10 & 0x1);
        t10 = (t10 + 0x1);
        if ((int)t9 >= (int)0x2) {
            nlPopMatrix(0x1);
            if (0x0 == 0) {
                return 0x1;
            }
            return t27;
        }
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x8)) = *(struct mv3 *)(t23); }
    nlPopMatrix(0x1);
    t30 = (t10 & 0x1);
    if (0x1 == 0) {
        t30 = 0x1;
    }
    return t30;
}


void FUN_0c02a326(int a4)
{
    int stk[6];
    register int t5;
    register int t8;
    register float u9;
    register float u10;
    register int t16;
    register int t17;

    *(unsigned int *)0xC128DB0 = (CheckAreaGrid(a4, (*(int *)0xC128DB0)));
    *(float *)(((int)stk + 0)) = ((*(float *)((a4 + 0x0))) * 9.99999975e-06f);
    *(float *)(((int)stk + 4)) = (-(((((struct o8_float *)(a4))->v)) * 9.99999975e-06f));
    *(float *)(((int)stk + 8)) = -0.5f;
    FUN_0c078800(((int)stk + 0), ((int)stk + 0), 0xFF00FF00);
    t5 = 0x0;
    for (;;) {
        t8 = 0xFF00FF00;
        u9 = -1.0f;
        u10 = 1.99999995e-05f;
        if (t5 == (*(int *)0xC128DB0)) {
            t8 = 0xFFFF0000;
            u9 = -0.5f;
            u10 = 9.99999975e-06f;
        }
        *(float *)(((int)stk + 12)) = (((((struct o18_float *)(((((t5 << 2) << 2) << 1) + 0xC09E0F4)))->v)) * u10);
        *(float *)(((int)stk + 16)) = (-(((((struct o4_float *)((((((t5 << 2) << 2) << 1) + 0xC09E0F4) + 0x18)))->v)) * u10));
        *(float *)(((int)stk + 20)) = u9;
        t16 = 0x0;
        t17 = ((((t5 << 2) << 2) << 1) + 0xC09E0F4);
        for (;;) {
            *(float *)(((int)stk + 0)) = ((*(float *)((t17 + 0x0))) * u10);
            *(float *)(((int)stk + 4)) = (-(((((struct o4_float *)(t17))->v)) * u10));
            *(float *)(((int)stk + 8)) = u9;
            FUN_0c078800((((int)stk + 0) + 0xC), ((int)stk + 0), t8);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0xC)) = *(struct mv3 *)(((int)stk + 0)); }
            t16 = (t16 + 0x1);
            t17 = (t17 + 0x8);
            if ((int)t16 >= (int)0x4) {
                break;
            }
        }
        t5 = (t5 + 0x1);
        if ((int)t5 >= (int)0x19) {
            break;
        }
    }
}

int FUN_0c0303d0(int a4)
{
    int stk[4];
    register int t6;
    register int t7;
    register int t11;
    register int t12;
    register int t14;
    register int t30;
    register int t5;
    register int t8;
    register int t26;
    register int t15;

    if ((*(int *)((a4 + 0x20))) == 0) {
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x4)) = *(struct mv3 *)(0xC0A3988); }
        FUN_0c073360();
        FUN_0c073a60(a4);
        MultiRot4Vec((a4 + 0x30));
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 0)) = 0xC129D00;
        t6 = t5;
        t7 = 0x0;
        for (;;) {
            if ((int)t7 >= (int)(*(int *)(((((int)stk + 0) + 0x4) + (((((struct o6C_int *)(a4))->v)) << 2))))) {
                break;
            }
            t6 = 0x84;
            t11 = set_event(t6, 0xC0300D8);
            t6 = t11;
            if (t11 != 0) {
                t8 = t6;
                t8 = (t8 + 0x14);
                t12 = a4;
                t14 = t8;
                for (;;) { t15 = *(int *)t12; t12 = (t12 + 4); if ((unsigned int)((a4 + 112)) < (unsigned int)t12) break; *(unsigned int *)t14 = t15; t14 = (t14 + 4); }
                t6 = 0x0;
                nlGetPushedMatrix(t6);
                t6 = ((((struct o6C_int *)(a4))->v));
                t6 = (t6 << 2);
                t6 = (t6 << 2);
                t6 = (t6 << 2);
                t6 = (t6 << 1);
                t6 = (t6 + 0xC129D40);
                t6 = (t6 + ((t7 << 2) << 2));
                FUN_0c073a60(t6);
                t6 = t8;
                FUN_0c072600(t6);
                (((struct o54_uint *)(t8))->v) = 0xC129884;
                (((struct o64_uint *)(t8))->v) = (*(int *)(((*(int *)(((*(int *)(((int)stk + 0))) + 0x0))) + 0x0)));
                t6 = t8;
                SetColliObj(t6, 0x15);
            } else {
                t26 = t6;
            }
            t7 = (t7 + 0x1);
            t6 = t26;
        }
        nlPopMatrix(0x2);
        KillColliObj(a4);
        (((struct o68_uint *)(a4))->v) = 0xFFFFFFFE;
        t30 = 0x68;
    }
    return t30;
}

int FUN_0c06e0dc(int a4)
{
    int stk[7];
    register float u14;
    register float u15;
    register int t31;
    register float u6;
    register float u23;

    *(unsigned int *)(((int)stk + 0)) = a4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x4)) = *(struct mv3 *)(0xC17599C); }
    if (((*(signed char *)(((*(int *)(((int)stk + 0))) + 0xFE))) & 2) != 0) {
        u6 = ((((struct oC_float *)0xC112B58)->v));
    } else {
        u6 = (-((((struct oC_float *)0xC112B58)->v)));
    }
    FUN_0c06e700((((int)stk + 0) + 0x4), 0xC17596C, u6);
    FUN_0c06e700((((int)stk + 0) + 0x4), 0xC17597C, ((((struct o10_float *)0xC112B58)->v)));
    FUN_0c06e700((((int)stk + 0) + 0x4), 0xC17598C, ((((struct o14_float *)0xC112B58)->v)));
    camSetTarget((((int)stk + 0) + 0x4), 0x2);
    u14 = (((struct o0_float *)0xC06E254)->v);
    u15 = (((struct o4_float *)0xC06E254)->v);
    FUN_0c018c8a(u14, u15);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x10)) = *(struct mv3 *)(0xC17599C); }
    if (((*(signed char *)(((*(int *)(((int)stk + 0))) + 0xFE))) & 2) != 0) {
        u23 = ((((struct o0_float *)0xC112B58)->v));
    } else {
        u23 = (-((((struct o0_float *)0xC112B58)->v)));
    }
    FUN_0c06e700((((int)stk + 0) + 0x10), 0xC17596C, u23);
    FUN_0c06e700((((int)stk + 0) + 0x10), 0xC17597C, ((((struct o4_float *)0xC112B58)->v)));
    FUN_0c06e700((((int)stk + 0) + 0x10), 0xC17598C, ((((struct o8_float *)0xC112B58)->v)));
    FUN_0c018b22((((int)stk + 0) + 0x10), 0x2);
    t31 = FUN_0c018c2a(u14, u15);
    *(unsigned int *)0xC2BB3D8 = ((*(int *)0xC2BB3D8) + 0x1);
    return t31;
}

int FUN_0c06deb8(int a4)
{
    int stk[4];
    register float u14;
    register float u15;
    register int t31;
    register float u6;
    register float u23;

    *(unsigned int *)(((int)stk + 0)) = a4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x4)) = *(struct mv3 *)(0xC17599C); }
    if (((*(signed char *)(((*(int *)(((int)stk + 0))) + 0xFE))) & 2) != 0) {
        u6 = ((((struct o0_float *)0xC112B34)->v));
    } else {
        u6 = (-((((struct o0_float *)0xC112B34)->v)));
    }
    FUN_0c06e700((((int)stk + 0) + 0x4), 0xC17596C, u6);
    FUN_0c06e700((((int)stk + 0) + 0x4), 0xC17597C, ((((struct o4_float *)0xC112B34)->v)));
    FUN_0c06e700((((int)stk + 0) + 0x4), 0xC17598C, ((((struct o8_float *)0xC112B34)->v)));
    FUN_0c018b22((((int)stk + 0) + 0x4), 0x2);
    u14 = (((struct o0_float *)0xC06E030)->v);
    u15 = (((struct o4_float *)0xC06E030)->v);
    FUN_0c018c2a(u14, u15);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x4)) = *(struct mv3 *)(0xC17599C); }
    if (((*(signed char *)(((*(int *)(((int)stk + 0))) + 0xFE))) & 2) != 0) {
        u23 = ((((struct oC_float *)0xC112B34)->v));
    } else {
        u23 = (-((((struct oC_float *)0xC112B34)->v)));
    }
    FUN_0c06e700((((int)stk + 0) + 0x4), 0xC17596C, u23);
    FUN_0c06e700((((int)stk + 0) + 0x4), 0xC17597C, ((((struct o10_float *)0xC112B34)->v)));
    FUN_0c06e700((((int)stk + 0) + 0x4), 0xC17598C, ((((struct o14_float *)0xC112B34)->v)));
    camSetTarget((((int)stk + 0) + 0x4), 0x2);
    t31 = FUN_0c018c8a(u14, u15);
    *(unsigned int *)0xC2BB3D8 = ((*(int *)0xC2BB3D8) + 0x1);
    return t31;
}

int FUN_0c0461b0(int a4)
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

    if ((int)a4 >= (int)0x2) {
    } else {
        t0 = set_event(0x1440, 0xC04630C);
        t1 = t0;
        if (t0 != 0) {
            if (a4 == 0) {
                (((struct o1434_uint *)(t0))->v) = 0x1E;
            } else {
                if (a4 == 1) {
                    (((struct o1434_uint *)(t0))->v) = 0x2E;
                }
            }
            (((struct o1438_uint *)(t0))->v) = 0x30C;
            (((struct o143C_uint *)(t0))->v) = ((((struct o1438_int *)(t0))->v));
            t2 = 0x0;
            t3 = (*(int *)(((a4 << 2) + 0xC12D28C)));
            t4 = (t0 + 0x14);
            for (;;) {
                if ((int)t2 >= (int)((((struct o1434_int *)(t0))->v))) {
                    break;
                }
                *(unsigned int *)((t4 + 0x0)) = 0x0;
                t5 = 0x1434;
                t6 = 0x0;
                t7 = 0x0;
                for (;;) {
                    *(unsigned int *)((((t4 + 0x4) + t6) + 0x0)) = (*(int *)(((t3 + t6) + 0x0)));
                    if ((int)(*(int *)((((t4 + 0x4) + t6) + 0x0))) >= 0) {
                        t5 = (*(int *)0xC2ADA7C);
                        t8 = *(int *)((((t4 + 0x4) + t7) + 0x0));
                        t5 = (*(int *)(((*(int *)((((((t8 << 1) + t8) << 2) + t5) + 0x4))) + 0x0)));
                        t5 = (t5 - 2);
                        *(unsigned int *)((((t4 + 0x34) + t7) + 0x0)) = t5;
                    }
                    t6 = (t6 + 0x4);
                    t7 = (t7 + 0x4);
                    if ((unsigned int)t6 >= (unsigned int)0x30) {
                        break;
                    }
                }
                t5 = *(int *)((t4 + 0x4));
                t6 = *(int *)((t4 + 0x34));
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t4 + 0x64)) = *(struct mv3 *)(((*(int *)((((((t5 << 1) + t5) << 2) + (*(int *)0xC2ADA7C)) + 0x0))) + (((t6 << 1) + t6) << 2))); }
                t5 = *(int *)((t4 + 0x1C));
                t6 = (((struct o4C_int *)(t4))->v);
                nlAddVector((t4 + 0x64), ((*(int *)((((((t5 << 1) + t5) << 2) + (*(int *)0xC2ADA7C)) + 0x0))) + (((t6 << 1) + t6) << 2)));
                FUN_0c073c40((t4 + 0x64), (t4 + 0x64), 0.5f);
                t2 = (t2 + 0x1);
                t4 = (t4 + 0x70);
                t3 = (t3 + 0x30);
            }
            t1 = 0x1434;
        }
        t0 = t1;
    }
    return t0;
}

int FUN_0c02a5ca(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    { struct mv10 { int w[10]; }; *(struct mv10 *)(0xC2737BC) = *(struct mv10 *)(0xC09FC14); }
    { struct mv10 { int w[10]; }; *(struct mv10 *)(0xC2737E4) = *(struct mv10 *)(0xC09FC14); }
    if ((*(int *)0xC1293C4) != 0) {
        t0 = 0x0;
        for (;;) {
            FUN_0c02a470(t0, (((t0 << 2) << 2) + 0xC1290F4));
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x14) {
                break;
            }
        }
        t0 = 0x0;
        for (;;) {
            t1 = 0x0;
            for (;;) {
                t2 = 0x0;
                if ((int)t0 < (int)0x14) {
                    t2 = 0x1;
                }
                t3 = 0x0;
                if ((int)t1 < (int)0x14) {
                    t3 = 0x1;
                }
                t4 = (t1 << 2);
                t1 = (t1 + 0x1);
                *(unsigned int *)((((t0 * 0x68) + 0xC27125C) + t4)) = (*(int *)((((((t2 << 2) << 1) + 0xC1293B4) + (t3 << 2)) + 0x0)));
                if ((int)t1 >= (int)0x1A) {
                    break;
                }
            }
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x1A) {
                break;
            }
        }
        *(unsigned int *)0xC1293C4 = 0x0;
    }
    *(float *)0xC128DC8 = 1.0f;
    FUN_0c02a470(0x0, (((a4 << 2) << 2) + 0xC129234));
    t0 = 0x0;
    for (;;) {
        t1 = t0;
        t0 = (t0 + 0x4);
        *(unsigned int *)((0xC271D58 + t1)) = 0x0;
        *(unsigned int *)((0xC271CEC + t1)) = 0x0;
        *(unsigned int *)((0xC271DC4 + t1)) = 0x0;
        if ((unsigned int)t0 >= (unsigned int)0x6C) {
            break;
        }
    }
    *(unsigned int *)0xC271E30 = 0x0;
    t0 = 0xC2727BC;
    for (;;) {
        *(unsigned int *)((t0 + 0x4)) = 0xFFFFFFFF;
        t0 = (t0 + 0x10);
        if ((unsigned int)t0 >= (unsigned int)0xC2737BC) {
            break;
        }
    }
    return t1;
}


int FUN_0c069d2c(int a4)
{
    int stk[26];
    register int t2;
    register int t3;
    register int t11;
    register int t12;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x0)) = 0x6;
    *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x4)) = 0xFF8080FF;
    (((struct o5C_uint *)((((int)stk + 0) + 0x8)))->v) = 0x0;
    *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 0) + 0x8) + 0x8);
    FUN_0c073360();
    t2 = 0x6;
    t3 = ((((int)stk + 0) + 0x8) + 0x8);
    for (;;) {
        if (t2 == 0) {
            break;
        }
        nlRotateAY(0x2AAA);
        FUN_0c072290(0xC10D9C8, t3);
        t2 = (t2 - 1);
        t3 = (t3 + 0xC);
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(t3) = *(struct mv3 *)((*(int *)(((int)stk + 4)))); }
    nlPopMatrix(0x1);
    FUN_0c073360();
    FUN_0c073a60(((*(int *)(((int)stk + 0))) + 0x54));
    t11 = 0xC069DF8;
    t12 = 0x5;
    for (;;) {
        if (t12 == 0) {
            break;
        }
        t11 = (nlPushMatrix(0x0));
        t11 = (nlScale(40.0f, 40.0f, 40.0f));
        t11 = (FUN_0c078850((((int)stk + 0) + 0x8)));
        t11 = (nlPopMatrix(0x1));
        t11 = 0x1E;
        t11 = ((int)((int)(*(int *)0xC1EC83C) % (int)t11));
        t11 = (FUN_0c073a30(0.0f, (((((float)t11 * 5.0f) / 30.0f)) + 5.0f), 0.0f));
        t12 = (t12 - 1);
    }
    return (nlPopMatrix(0x1));
}

int FUN_0c05fab8(float f4, float f5)
{
    int stk[28];
    register int t7;
    register float t14;

    *(float *)(((int)stk + 0)) = f4;
    *(float *)(((int)stk + 4)) = f5;
    *(unsigned int *)(((int)stk + 8)) = 0xC1758B4;
    nlPushMatrix(0xC17596C);
    nlMultiMatrix(0xC2B9C5C);
    nlPushMatrix(0x0);
    FUN_0c073a30(0.0f, 7.80000019f, -2.85619998f);
    FUN_0c072600(0xC2B9CC8);
    nlPopMatrix(0x1);
    nlGetMatrix((((int)stk + 0) + 0x30));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x24)) = *(struct mv3 *)((((int)stk + 0) + 0x60)); }
    t7 = FUN_0c029b12((((int)stk + 0) + 0x24), 5.0f);
    if ((*(int *)((t7 + 0x1C))) != -1) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x24)) = *(struct mv3 *)(t7); }
    }
    nlSubVector3op((((int)stk + 0) + 0x18), (((int)stk + 0) + 0x60), (((int)stk + 0) + 0x24));
    t14 = nlUnitVectorsd((((int)stk + 0) + 0x18), (((int)stk + 0) + 0xC));
    if (t14 > 8.0f) {
        FUN_0c073c40((((int)stk + 0) + 0x18), (((int)stk + 0) + 0xC), 8.0f);
    }
    FUN_0c073a40((((int)stk + 0) + 0x18));
    *(unsigned int *)0xC2B9C50 = 0xC05FC5C;
    (((struct o0_float *)0xC2B9CD4)->v) = (*(float *)(((int)stk + 0)));
    (((struct o4_float *)0xC2B9CD4)->v) = (*(float *)(((int)stk + 4)));
    FUN_0c05f4c8(0xC2B9C1C);
    if ((*(int *)((t7 + 0x1C))) != -1) {
        FUN_0c026bd6((((int)stk + 0) + 0xC));
        FUN_0c073360();
        FUN_0c073a60(t7);
        nlRotateV(0xC10D9E0, (t7 + 0xC));
        FUN_0c05b596((((int)stk + 0) + 0xC), t7, (t7 + 0xC));
        nlObjPutUseViewMatrix(0xC4F4988);
        nlPopMatrix(0x1);
    }
    return (nlPopMatrix(0x1));
}


int FUN_0c069450(void)
{
    register int t15;
    register int t27;

    if (((*(signed char *)0xC2BA6A7) & 64) != 0) {
        (((struct o0_uint *)0xC2BA694)->v) = 0x3;
        (((struct o4_uint *)0xC2BA694)->v) = 0x28;
        (((struct o13_uchar *)0xC2BA694)->v) = ((*(signed char *)0xC2BA6A7) | 0x20);
        (((struct o13_uchar *)0xC2BA694)->v) = ((*(signed char *)0xC2BA6A7) & 0xF7);
        (((struct o13_uchar *)0xC2BA694)->v) = ((*(signed char *)0xC2BA6A7) & 0x7F);
        FUN_0c05f44c(0xC2BA654, (*(int *)((((((struct o0_int *)0xC2BA5F0)->v)) + 0x10))));
        { struct mv16 { int w[16]; }; *(struct mv16 *)(0xC2BA654) = *(struct mv16 *)(((((struct o0_int *)0xC2BA5F0)->v))); }
        FUN_0c05f470(0xC2BA654, 0xC8A0C38, ((-(float)((((struct o4_int *)0xC2BA694)->v))) + 145.0f), 10.0f);
        FUN_0c06aa94(((((struct o1C_int *)0xC2BA648)->v)));
        FUN_0c06ce48();
    }
    t15 = *(signed char *)0xC2BA6A7;
    if ((t15 & 16) != 0) {
        if (!(35.0f > ((((struct o8_float *)0xC2BA5AC)->v)))) {
            if ((((((struct oC_float *)0xC2BA5AC)->v)) + 35.0f) > ((((struct o8_float *)0xC2BA5AC)->v))) {
                FUN_0c0698ac(0xC2BA5F0, (*(int *)((((((((struct o0_int *)0xC2BA5AC)->v)) << 2) + 0xC2BA528) + 0x0))));
                (((struct o0_uint *)0xC2BA5AC)->v) = (((((struct o0_int *)0xC2BA5AC)->v)) + 0x1);
                (((struct o13_uchar *)0xC2BA694)->v) = ((*(signed char *)0xC2BA6A7) & 0xEF);
                (((struct o13_uchar *)0xC2BA694)->v) = ((*(signed char *)0xC2BA6A7) | 0x80);
                (((struct o10_uint *)0xC2BA5F0)->v) = 0x4;
                (((struct oB_uchar *)0xC2BA648)->v) = ((*(signed char *)0xC2BA653) | 0x80);
                (((struct o18_uint *)0xC2BA5F0)->v) = 0x0;
                (((struct o0_uint *)0xC2BA648)->v) = 0x0;
                t27 = (((struct o0_int *)0xC2BA5F0)->v);
                (((struct oFF_uchar *)(t27))->v) = ((*(signed char *)(((0xFF + t27) + 0x0))) & 0xEF);
                (((struct o34_uint *)0xC2BA5AC)->v) = 0xC06967E;
                FUN_0c069864(0x0);
                return FUN_0c058ca6(0x507A9, 0x2);
            }
            return 0x8C;
        }
        return 0x8C;
    }
    return t15;
}

int FUN_0c063458(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t0 = (((struct o58_int *)(a4))->v);
    (((struct o58_uint *)(a4))->v) = (t0 - 1);
    t1 = (t0 - 1);
    t0 = 0x0;
    t2 = a7;
    for (;;) {
        if ((int)t0 >= (int)(*(int *)((a4 + 0x4)))) {
            break;
        }
        t1 = (*(int *)((a4 + 0x0)));
        t3 = 0x80;
        if ((*(int *)((t3 + ((t0 << 8) + t1)))) == 1) {
            if ((int)((((struct o58_int *)(a4))->v)) <= 0) {
                t1 = (*(int *)((a4 + 0x0)));
                t2 = t0;
                t2 = (t2 << 8);
                t2 = (t2 + t1);
                t1 = 0xC07FF00;
                t3 = t2;
                t3 = (t3 + 0x70);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(t3) = *(struct mv3 *)((0xE8 + t2)); }
                t4 = 0xC07FF00;
            } else {
                t4 = t1;
            }
            t5 = t4;
        } else {
            t5 = t1;
        }
        t1 = t5;
        t0 = (t0 + 0x1);
    }
    t0 = 0x58;
    t2 = t3;
    t3 = t1;
    t1 = 0x0;
    t4 = 0x0;
    for (;;) {
        if ((int)t1 >= (int)(*(int *)((a4 + 0x4)))) {
            break;
        }
        t3 = (*(int *)((a4 + 0x0)));
        t0 = t1;
        t2 = 0x80;
        t0 = (t0 << 8);
        t0 = (t0 + t3);
        t0 = (*(int *)((t2 + t0)));
        t1 = (t1 + 0x1);
        if (t0 == 3) {
            t4 = (t4 + 0x1);
        }
    }
    t1 = *(int *)((a4 + 0x4));
    if (t4 == t1) {
        t2 = t0;
        t3 = 0x0;
        for (;;) {
            if ((int)t3 >= (int)(*(int *)((a4 + 0x4)))) {
                break;
            }
            t4 = t3;
            t2 = 0x80;
            t4 = (t4 << 8);
            *(unsigned int *)((((*(int *)((a4 + 0x0))) + t4) + t2)) = 0x4;
            t2 = 0x8;
            t3 = (t3 + 0x1);
            t4 = (t4 + (*(int *)((a4 + 0x0))));
            *(float *)((t4 + t2)) = 1.0f;
        }
        t3 = t2;
    } else {
        t3 = t0;
    }
    t0 = t3;
    t2 = t1;
    t1 = 0x0;
    t3 = 0x0;
    t4 = 0x0;
    t5 = 0x0;
    for (;;) {
        if ((int)t3 >= (int)(*(int *)((a4 + 0x4)))) {
            break;
        }
        t1 = t3;
        t0 = 0xFE;
        t1 = (t1 << 8);
        t0 = (*(signed char *)((((*(int *)((a4 + 0x0))) + t1) + t0)));
        t6 = (t0 & 1) != 0;
        t0 = (*(int *)((a4 + 0x0)));
        if (t6) {
            t5 = (t5 + 0x1);
        }
        t2 = 0x80;
        t0 = (t0 + t1);
        t0 = (*(int *)((t2 + t0)));
        t3 = (t3 + 0x1);
        if (t0 == 5) {
            t4 = (t4 + 0x1);
        }
    }
    if (t5 == (*(int *)((a4 + 0x4)))) {
        t1 = *(signed char *)(((a4 + 0x63) + 0x0));
        (((struct o63_uchar *)(a4))->v) = (t1 | 0x10);
        t2 = (t1 | 0x10);
    } else {
        t2 = t0;
    }
    if (t4 == (*(int *)((a4 + 0x4)))) {
        *(unsigned int *)((a4 + 0xC)) = ((*(int *)((a4 + 0xC))) + 0x1);
        return FUN_0c06356c(a4);
    }
    return t2;
}

void FUN_0c027096(void)
{
    int t0;
    register int t1;
    register int t2;

    t0 = *(int *)0xC270BB8;
    t1 = (((struct oC_int *)0xC270B04)->v);
    t2 = *(int *)0xC270B68;
    switch (t0) {
    case 1:
        if (t1 != 1) {
            (((struct o4_float *)0xC270B04)->v) = 60.0f;
            (((struct o0_float *)0xC270B04)->v) = 0.200000003f;
            (((struct oC_uint *)0xC270B04)->v) = 0x1;
        }
        break;
    case 0:
        if (t1 != 0) {
            if (t2 == 1) {
                (((struct o4_float *)0xC270B04)->v) = 60.0f;
                (((struct o0_float *)0xC270B04)->v) = 0.200000003f;
            } else {
                (((struct o4_float *)0xC270B04)->v) = 0.0f;
            }
            (((struct oC_uint *)0xC270B04)->v) = 0x0;
        }
        break;
    case 5:
        if (t1 != 5) {
            if (t2 == 1) {
                (((struct o4_float *)0xC270B04)->v) = 60.0f;
                (((struct o0_float *)0xC270B04)->v) = 0.200000003f;
            } else {
                (((struct o4_float *)0xC270B04)->v) = 0.0f;
            }
            (((struct oC_uint *)0xC270B04)->v) = 0x5;
        }
        break;
    default:
        if ((t0 != 2) && ((t0 != 3) && ((t0 != 6) && (t0 != 7)))) {
            (((struct oC_uint *)0xC270B04)->v) = 0x0;
        } else {
            if (t1 != t0) {
                (((struct oC_uint *)0xC270B04)->v) = t0;
                (((struct o4_float *)0xC270B04)->v) = 0.0f;
            }
        }
        break;
    }
    if (((((struct oC_int *)0xC270B04)->v)) != (*(int *)0xC270B68)) {
        *(unsigned int *)0xC270B68 = 0x101;
        if (((((struct oC_int *)0xC270B04)->v)) == 0) {
            (((struct o8_uint *)0xC270B04)->v) = 0xC270B14;
        } else {
            t0 = (((struct oC_int *)0xC270B04)->v);
            (((struct o8_uint *)0xC270B04)->v) = (((((t0 << 2) << 1) + t0) << 2) + 0xC09D6B8);
        }
    }
    *(unsigned int *)0xC270BB8 = 0x0;
    { struct mv9 { int w[9]; }; *(struct mv9 *)(0xC270B14) = *(struct mv9 *)(0xC09D6B8); }
}


/* manual: returns what the original leaves in r0: 1 from the default-table paths ([0C1EC720] 0, or not 1 or 2), 0 for 1
   and 2 (retcheck: a caller reads it) */
int FUN_0c01422e(int a4)
{
    register int t0;

    t0 = *(int *)0xC1EC720;
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                t0 = FUN_0c03f154(0x0);
                if (t0 == 3) {
                    t0 = (int)((int)(*(int *)0xC2A4664) % (int)0x5);
                    { struct mv5 { int w[5]; }; *(struct mv5 *)(a4) = *(struct mv5 *)((0xC096F30 + (((t0 << 2) + t0) << 2))); }
                } else {
                    if ((*(int *)0xC175C84) != 1) {
                        { struct mv5 { int w[5]; }; *(struct mv5 *)(a4) = *(struct mv5 *)(0xC096FF8); }
                    } else {
                        { struct mv5 { int w[5]; }; *(struct mv5 *)(a4) = *(struct mv5 *)(0xC2903BC); }
                    }
                }
                return 1;
            }
            { struct mv5 { int w[5]; }; *(struct mv5 *)(a4) = *(struct mv5 *)(0xC175930); }
            return 0;
        }
        t0 = FUN_0c03f154(0x0);
        if (t0 == 3) {
            t0 = (int)((int)(*(int *)0xC2A4664) % (int)0x5);
            { struct mv5 { int w[5]; }; *(struct mv5 *)(a4) = *(struct mv5 *)((0xC096F94 + (((t0 << 2) + t0) << 2))); }
        } else {
            if ((*(int *)0xC175C84) != 1) {
                { struct mv5 { int w[5]; }; *(struct mv5 *)(a4) = *(struct mv5 *)(0xC09700C); }
            } else {
                { struct mv5 { int w[5]; }; *(struct mv5 *)(a4) = *(struct mv5 *)(0xC290AEC); }
            }
        }
        return *(int *)(a4 + 4);       /* what the copy helper leaves in r0: the record's second word */
    }
    t0 = FUN_0c03f154(0x0);
    if (t0 == 3) {
        t0 = (int)((int)(*(int *)0xC2A4664) % (int)0x5);
        { struct mv5 { int w[5]; }; *(struct mv5 *)(a4) = *(struct mv5 *)((0xC096F30 + (((t0 << 2) + t0) << 2))); }
    } else {
        if ((*(int *)0xC175C84) != 1) {
            { struct mv5 { int w[5]; }; *(struct mv5 *)(a4) = *(struct mv5 *)(0xC096FF8); }
        } else {
            { struct mv5 { int w[5]; }; *(struct mv5 *)(a4) = *(struct mv5 *)(0xC2903BC); }
        }
    }
    return 1;
}

int getRootDistance(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    int stk[4];
    register int t0;
    register int t1;
    register int t3;
    register int t5;
    register int t9;
    register int t20;
    register float u22;
    register float u24;

    *(unsigned int *)(((int)stk + 0)) = a7;
    t0 = FUN_0c04707e(a7, a9, a5);
    t1 = FUN_0c07ffac(t0);
    if ((int)t1 <= (int)0x1) {
        *(float *)((a10 + 0x0)) = (nlLength(a6, a8));
    } else {
        if ((int)t0 < 0) {
            t3 = (int)((int)(a9 + 0x1) % (int)a5);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x4)) = *(struct mv3 *)(((((t3 << 1) + t3) << 2) + a4)); }
        } else {
            t5 = (int)((int)(a9 - 1) % (int)a5);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x4)) = *(struct mv3 *)(((((t5 << 1) + t5) << 2) + a4)); }
        }
        t9 = *(int *)(((int)stk + 0));
        *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + ((*(float *)((a6 + 0x0))) - (*(float *)((((((t9 << 1) + t9) << 2) + a4) + 0x0)))));
        *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + (((((struct o4_float *)(a6))->v)) - ((((struct o4_float *)(((((t9 << 1) + t9) << 2) + a4)))->v))));
        *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) + (((((struct o8_float *)(a6))->v)) - ((((struct o8_float *)(((((t9 << 1) + t9) << 2) + a4)))->v))));
        t20 = FUN_0c07ffac(t0);
        u22 = *(float *)0xC0471E0;
        u24 = (nlLength((((int)stk + 0) + 0x4), a8));
        u24 = u24 + u22 * ((float)(t20 - 1));
        *(float *)((a10 + 0x0)) = u24;
    }
    return t0;
}
