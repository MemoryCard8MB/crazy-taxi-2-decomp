/* Straight-line functions with calls and guards (batch gen_he): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_short { short v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o104_float { char p[0x104]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o14_short { char p[0x14]; short v; };
struct o17C_short { char p[0x17C]; short v; };
struct o17E_short { char p[0x17E]; short v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o180_short { char p[0x180]; short v; };
struct o184_short { char p[0x184]; short v; };
struct o186_short { char p[0x186]; short v; };
struct o188_short { char p[0x188]; short v; };
struct o18A_short { char p[0x18A]; short v; };
struct o18E_short { char p[0x18E]; short v; };
struct o192_short { char p[0x192]; short v; };
struct o1C_int { char p[0x1C]; int v; };
struct o252_short { char p[0x252]; short v; };
struct o370_uint { char p[0x370]; unsigned int v; };
struct o3C_int { char p[0x3C]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_float { char p[0x6C]; float v; };
struct o6C_int { char p[0x6C]; int v; };
struct o70_float { char p[0x70]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o84_int { char p[0x84]; int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oF8_short { char p[0xF8]; short v; };
int FUN_0c01f368(int, int, float);
int FUN_0c01f4ca(int, int, float);
int FUN_0c026bd6(int);
int FUN_0c026c02(void);
int FUN_0c0271d8(int, int, int, int);
int FUN_0c0297f4(int, int, float);
int FUN_0c029962(int, int, int);
int FUN_0c029b12(int, float);
int FUN_0c02deca(int, int);
extern int FUN_0c02e42a();
int FUN_0c04afec(int, int, int, int, float, float);
int FUN_0c04b0ba(int);
int FUN_0c04b0e4(int);
int FUN_0c04b12a(int);
int FUN_0c04ba04(int);
int FUN_0c04ba42(int);
int FUN_0c04c11c(void);
int FUN_0c058ca6(int, int);
int FUN_0c05beca(int, float);
int FUN_0c06e700(int, int, float);
int FUN_0c072150(int, int, int);
int FUN_0c072230(int, int);
int FUN_0c072290(int, int);
int FUN_0c072b60(int);
int FUN_0c073360(void);
int FUN_0c073a30(float, float, float);
int FUN_0c073a40(int);
int FUN_0c073a60(int);
float FUN_0c073b40(int, int);
int FUN_0c073c40(int, int, float);
float FUN_0c073c60(int);
float FUN_0c073c80(int);
int FUN_0c075d50(void);
int FUN_0c075d60(void);
extern int KillColliObj();
int MakeCollisionCellList(int, int);
int SJUNI_Lock(void);
int SJUNI_Unlock(int, int);
int SetColliObj(int, int);
int SetHelicopter(void);
extern float _builtin_sqrtf(float);
int nlAddVector(int, int);
float nlLength(int, int);
int nlObjPutSetLightDirectionV(int);
int nlOuterProduct(int, int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAY(int);
int nlRotateV(int, int);
int nlSubVector3op(int, int, int);
int nlUnitMatrix(void);
int nlUnitVectorsd(int, int);
int pdGetPeripheral(int);
int set_event(int, int);
int thunk_FUN_0c0765b0(void);
int FUN_0c049f58(int a4, int a5, int a6, int a7, float f4, float f5, float f6);
int FUN_0c049610(int a4, int a5, int a6, int a7, float f4, float f5, float f6);
int FUN_0c029866(int a4, int a5, int a6, float f4);
int FUN_0c04ba86(float f4);
void FUN_0c018b22(int a4, int a5);
void FUN_0c02f0a2(void);
void FUN_0c0301b4(int a4);
int FUN_0c062466(int a4, int a5);
void FUN_0c030634(int a4);
void MakeKyakuTakeArea(int a4, int a5, int a6, float f4, float f5);
int InsertRankRecord(int a4, int a5, int a6, int a7);
void SJUNI_UngetChunk(int a4, int a5, int a6, int a7);
int GetStopPosCenter(int a4, int a5, int a6);
int FUN_0c0435e2(int a4, int a5, int a6, int a7);



int FUN_0c029866(int a4, int a5, int a6, float f4)
{
    int stk[13];
    register float t0;
    register int t37;
    register float u6;
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register int t13;
    register int t21;
    register float t23;
    register int t7;
    register int t12;
    register float u14;
    register float u15;
    register int t29;
    register float u30;
    register float u31;

    t0 = FUN_0c073c60(a5);
    t37 = 0x0;
    if (t0 == 0.0f) {
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x10)) = *(struct mv3 *)(a4); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x1C)) = *(struct mv3 *)(a5); }
        *(float *)(((int)stk + 44)) = t0;
        *(float *)(((int)stk + 48)) = (f4 + t0);
        *(float *)(((int)stk + 40)) = f4;
        FUN_0c073360();
        nlUnitVectorsd(a5, (((int)stk + 0) + 0x4));
        nlRotateV((((int)stk + 0) + 0x4), 0xC09DFA4);
        FUN_0c073a40(a4);
        MakeCollisionCellList(a4, a5);
        u6 = (((struct o8_float *)(a6))->v);
        *(unsigned int *)(((int)stk + 0)) = 0xC270F04;
        t8 = 0xC270F04;
        t9 = 0x0;
        t10 = 0xC270EDC;
        t11 = 0xC270F04;
        t13 = a5;
        for (;;) {
            if ((unsigned int)t10 >= (unsigned int)(*(int *)(((int)stk + 0)))) {
                break;
            }
            t8 = (*(int *)((t10 + 0x0)));
            t10 = (t10 + 0x4);
            if (t8 != 0) {
                t21 = *(short *)((t8 + 0x8));
                t13 = t8;
                t12 = t21;
                t13 = (t13 + 0xC);
                for (;;) {
                    if (t12 == 0) {
                        break;
                    }
                    t8 = a4;
                    t23 = nlLength(t8, ((*(int *)((t13 + 0x0))) + 0x14));
                    t7 = (*(int *)((t13 + 0x0)));
                    t21 = 0x10;
                    u15 = (*(float *)((t7 + t21)));
                    t21 = 0x30;
                    u14 = (*(float *)((((int)stk + 0) + t21)));
                    u14 = (u14 + u15);
                    if (u14 > t23) {
                        t8 = ((int)stk + 0);
                        t8 = (t8 + 0x10);
                        t21 = (FUN_0c029962(t8, (*(int *)((t13 + 0x0))), a6));
                        t9 = (t9 | t21);
                    } else {
                        t29 = t7;
                        u30 = u14;
                        u31 = u15;
                    }
                    u14 = u30;
                    u15 = u31;
                    t13 = (t13 + 0x4);
                    t7 = t29;
                    t12 = (t12 - 1);
                }
                u15 = (*(float *)((t11 + 0x0)));
                u14 = ((((struct o8_float *)(a6))->v));
                u15 = (u15 * u6);
                if (u14 > u15) {
                    t11 = (t11 + 0x4);
                    continue;
                }
                break;
            }
            break;
        }
        nlPopMatrix(0x1);
        t37 = t9;
    }
    return t37;
}

int FUN_0c04ba86(float f4)
{
    int stk[6];

    register int R1;
    register int R2;
    register int R3;
    register int R6;
    register int R9;
    register float F2;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    w0_0 = f4;
    w0_2 = *(float *)0xC175934;
    v0_1 = (0xC1758B4);
    v0_2 = (0xC1758B4);
    w0_1 = (w0_2);
    if ((w0_2 > w0_0)) goto L_C04BAA8;
    if (((*(float *)0xC131610) > w0_0)) goto L_C04BAC0;
    L_C04BAA8:;
    v0_0 = (0xC04BB08);
    w0_2 = (-7.0f);
    if (((w0_0 + -7.0f) > w0_1)) goto L_C04BB6E;
    if ((!((w0_0 + w0_2) > (*(float *)0xC131610)))) goto L_C04BB6E;
    L_C04BAC0:;
    if ((!(0.0f > ((((struct o104_float *)(v0_1))->v))))) goto L_C04BB10;
    v0_0 = (0xC04BB0C);
    w0_0 = (1.20000005f);
    L_C04BB14:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0xC)) = *(struct mv3 *)((0x100 + v0_1)); }
    v0_1 = ((0x1A4 + v0_2));
    v0_2 = (0x4);
    v0_0 = (0xC02E42A);
    w0_1 = ((w0_0 * (1.0f + 1.0f)));
    L_C04BB62:;
    if ((v0_2 != 0)) goto L_C04BB34;
    v0_0 = ((FUN_0c058ca6(0x6A9, 0x0)));
    L_C04BB6E:;
    return v0_0;
    L_C04BB34:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((v0_1 + 0x5C)); }
    *(float *)(((int)stk + 16)) = w0_0;
    v0_0 = ((int (*)(int, int, int, Stk3))(FUN_0c02e42a))(((int)stk + 0), (((int)stk + 0) + 0xC), 0x5, *(Stk3 *)(((int)stk + 0)));
    *(float *)(((int)stk + 16)) = w0_1;
    v0_0 = ((((int (*)(int, int, int))(FUN_0c02e42a))(((int)stk + 0), (((int)stk + 0) + 0xC), 0x5)));
    v0_1 = ((v0_1 + 0x84));
    v0_2 = ((v0_2 - 1));
    goto L_C04BB62;
    L_C04BB10:;
    v0_0 = (0xC04BC10);
    w0_0 = ((*(float *)0xC04BC10));
    goto L_C04BB14;
}

void FUN_0c018b22(int a4, int a5)
{
    if (a5 != 0) {
        if (a5 == 1) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC177DE8) = *(struct mv3 *)(0xC0A2D08); }
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC177DF4) = *(struct mv3 *)(a4); }
        return;
    }
    FUN_0c02deca(0xC177DDC, a4);
}

void FUN_0c02f0a2(void)
{
    if (((((struct o14_int *)0xC277824)->v)) == 0) {
        if (((((struct o18_int *)0xC277824)->v)) == 0) {
            if ((*(int *)0xC17591C) == 8) {
                SetHelicopter();
                FUN_0c058ca6(0x8A9, 0x0);
    return;
            }
            return;
        }
        return;
    }
    if (((((struct o18_int *)0xC277824)->v)) == 0) {
        FUN_0c073c40(0xC277820, 0xC1758E4, 1000.0f);
        (((struct o0_float *)0xC277824)->v) = (((((struct o0_float *)0xC277824)->v)) + 200.0f);
        nlAddVector(0xC277820, 0xC175930);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC27782C) = *(struct mv3 *)(0xC175930); }
        if ((*(int *)0xC17591C) != 8) {
            (((struct o18_uint *)0xC277824)->v) = (((((struct o18_int *)0xC277824)->v)) + 0x1);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC277820) = *(struct mv3 *)(0xC0A2D08); }
            (((struct o0_float *)0xC277824)->v) = (((((struct o0_float *)0xC277824)->v)) + 2000.0f);
        }
    }
}

void FUN_0c0301b4(int a4)
{
    int stk[4];
    register float t0;
    register float u1;
    register int t2;
    register int t5;
    register int t7;
    register int t3;
    register int t8;

    t0 = nlLength((a4 + 0xC), (a4 + 0x58));
    if (t0 > (1.0f + 1.0f)) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x58)) = *(struct mv3 *)((a4 + 0xC)); }
        *(unsigned int *)(((int)stk + 0)) = 0xC1299C8;
        u1 = *(float *)0xC0302DC;
        t2 = 0x0;
        for (;;) {
            t3 = set_event(0x84, 0xC03010E);
            if (t3 != 0) {
                t3 = (t3 + 0x14);
                t5 = a4;
                t7 = t3;
                for (;;) { t8 = *(int *)t5; t5 = (t5 + 4); if ((unsigned int)((a4 + 112)) < (unsigned int)t5) break; *(unsigned int *)t7 = t8; t7 = (t7 + 4); }
                if (t2 != 0) {
                    FUN_0c073c40((t3 + 0x30), (t3 + 0x30), -1.0f);
                }
                FUN_0c073c40((((int)stk + 0) + 0x4), (t3 + 0x30), u1);
                nlAddVector(t3, (((int)stk + 0) + 0x4));
                *(unsigned int *)((t3 + 0x28)) = (t3 + 0x30);
                (((struct o54_uint *)(t3))->v) = (*(int *)(((int)stk + 0)));
                (((struct o64_uint *)(t3))->v) = (*(int *)((((((((struct o6C_int *)(a4))->v)) << 2) + (*(int *)0xC129D24)) + 0x0)));
                SetColliObj(t3, 0x15);
            }
            t2 = (t2 + 0x1);
            if ((int)t2 >= (int)0x2) {
                break;
            }
        }
        KillColliObj(a4);
        (((struct o68_uint *)(a4))->v) = 0xFFFFFFFE;
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x58)) = *(struct mv3 *)((a4 + 0xC)); }
    }
}

int FUN_0c062466(int a4, int a5)
{
    int stk[7];
    register float u0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t11;
    register int t12;
    register int t21;

    u0 = *(float *)0xC0625B4;
    t1 = a5;
    t2 = 0x0;
    for (;;) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x10)) = *(struct mv3 *)(0xC17599C); }
        *(unsigned int *)(((int)stk + 0)) = (0xC10EF04 + t2);
        t3 = *(int *)(((0xC10EF04 + t2) + 0x0));
        t4 = *(int *)0xC175C80;
        FUN_0c06e700((((int)stk + 0) + 0x10), 0xC17597C, ((((((struct o4_float *)(((((t3 << 1) + t3) << 2) + 0xC10E970)))->v)) + ((((struct o4_float *)(((((t4 << 1) + t4) << 2) + 0xC10E9B8)))->v))) + u0));
        t11 = *(int *)0xC175C80;
        t12 = *(int *)(((*(int *)(((int)stk + 0))) + 0x0));
        FUN_0c06e700((((int)stk + 0) + 0x10), 0xC17598C, (((((struct o8_float *)(((((t12 << 1) + t12) << 2) + 0xC10E970)))->v)) + ((((struct o8_float *)(((((t11 << 1) + t11) << 2) + 0xC10E9B8)))->v))));
        FUN_0c073c40((((int)stk + 0) + 0x4), 0xC17596C, (*(float *)((t2 + 0xC10EF10))));
        t21 = *(int *)(((FUN_0c0297f4((((int)stk + 0) + 0x10), (((int)stk + 0) + 0x4), 0.0f)) + 0x1C));
        if (t21 == -1) {
            *(unsigned int *)((t1 + 0x0)) = 0x1;
        } else {
            *(unsigned int *)((t1 + 0x0)) = 0x0;
        }
        t2 = (t2 + 0x4);
        t1 = (t1 + 0x4);
        if ((unsigned int)t2 >= (unsigned int)0xC) {
            break;
        }
    }
    return t21;
}

void FUN_0c030634(int a4)
{
    int stk[6];
    register float t0;
    register int t1;
    register int t2;
    register int t4;
    register float t13;
    register int t5;
    register int t18;

    t0 = nlLength((a4 + 0xC), (a4 + 0x58));
    if (t0 > (1.0f + 1.0f)) {
        t1 = set_event(0x84, 0xC0300D8);
        if (t1 != 0) {
            t2 = a4;
            t4 = (t1 + 0x14);
            for (;;) { t5 = *(int *)t2; t2 = (t2 + 4); if ((unsigned int)((a4 + 112)) < (unsigned int)t2) break; *(unsigned int *)t4 = t5; t4 = (t4 + 4); }
            FUN_0c073c40((((int)stk + 0) + 0xC), ((t1 + 0x14) + 0x3C), 12.0f);
            nlAddVector((t1 + 0x14), (((int)stk + 0) + 0xC));
            *(unsigned int *)(((t1 + 0x14) + 0x28)) = ((t1 + 0x14) + 0x30);
            (((struct o54_uint *)((t1 + 0x14)))->v) = 0xC1299EC;
            (((struct o64_uint *)((t1 + 0x14)))->v) = (*(int *)((((((struct o0_int *)0xC129D28)->v)) + 0x0)));
            SetColliObj((t1 + 0x14), 0x15);
            nlSubVector3op((((int)stk + 0) + 0xC), (a4 + 0xC), (a4 + 0x58));
            nlOuterProduct((a4 + 0x3C), (a4 + 0x30), ((int)stk + 0));
            t13 = FUN_0c073b40((((int)stk + 0) + 0xC), ((int)stk + 0));
            if (t13 > 0.0f) {
                (((struct o54_uint *)(a4))->v) = 0xC129A10;
                t18 = (*(int *)((((((struct o4_int *)0xC129D28)->v)) + 0x0)));
            } else {
                (((struct o54_uint *)(a4))->v) = 0xC129A34;
                t18 = (*(int *)((((((struct o8_int *)0xC129D28)->v)) + 0x0)));
            }
            (((struct o64_uint *)(a4))->v) = t18;
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x58)) = *(struct mv3 *)((a4 + 0xC)); }
    }
}

void MakeKyakuTakeArea(int a4, int a5, int a6, float f4, float f5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;

    *(unsigned int *)((a4 + 0x0)) = 0xC;
    *(unsigned int *)(((a4 + 0x4) + 0x0)) = (*(int *)(((a6 << 2) + 0xC12951C)));
    (((struct oA0_uint *)((a4 + 0x4)))->v) = 0x0;
    if ((*(int *)0xC1EC71C) == 0) {
        u0 = ((((struct o4_float *)(a5))->v));
    } else {
        u1 = (((struct o0_float *)0xC02D868)->v);
        u0 = (((((struct o4_float *)(a5))->v)) + u1);
        u2 = u1;
    }
    t0 = ((a4 + 0x4) + 0xA0);
    t1 = 0x0;
    t2 = (a4 + 0x8);
    u1 = u2;
    u2 = f4;
    u3 = f5;
    for (;;) {
        if ((int)t1 >= (int)0xC) {
            break;
        }
        t3 = 0x1555;
        t0 = (t1 * t3);
        FUN_0c072150(t0, (t2 + 0x8), t2);
        u4 = (*(float *)((t2 + 0x0)));
        u1 = (*(float *)((a5 + 0x0)));
        u5 = u1;
        u5 = u5 + f4 * u4;
        u1 = u5;
        t3 = 0xC029B12;
        *(float *)((t2 + 0x0)) = u1;
        u4 = ((((struct o8_float *)(t2))->v));
        u1 = ((((struct o8_float *)(a5))->v));
        u5 = u1;
        u5 = u5 + f4 * u4;
        u1 = u5;
        (((struct o8_float *)(t2))->v) = u1;
        (((struct o4_float *)(t2))->v) = u0;
        u2 = (((((struct oC_float *)0xC02D868)->v)));
        t0 = t2;
        t0 = (FUN_0c029b12(t0, u2));
        u2 = ((((struct o10_float *)0xC02D868)->v));
        if ((*(int *)((t0 + 0x1C))) != -1) {
            u3 = ((((struct o14_float *)0xC02D868)->v));
            u1 = ((((struct o4_float *)(a5))->v));
            u4 = ((((struct o18_float *)(t0))->v));
            u1 = (u1 + u3);
            if (u1 > u4) {
                u1 = ((((struct o4_float *)(a5))->v));
                u1 = (u1 + u2);
            } else {
                u1 = ((((struct o18_float *)(t0))->v));
                u1 = (u1 + u2);
            }
            u5 = u4;
            u6 = u3;
        } else {
            u1 = ((((struct o4_float *)(a5))->v));
            u1 = (u1 + u2);
        }
        (((struct o4_float *)(t2))->v) = u1;
        u4 = u5;
        u3 = u6;
        t2 = (t2 + 0xC);
        t1 = (t1 + 0x1);
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(t2) = *(struct mv3 *)((a4 + 0x8)); }
}


void SJUNI_UngetChunk(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;

    if (((int)a5 >= 0) && ((int)a5 < (int)0x4)) {
        if (((int)(*(int *)((a6 + 0x4))) > 0) && (t0 = *(int *)((a6 + 0x0)), t0 != 0)) {
            t0 = SJUNI_Lock();
            t4 = *(int *)((((a5 << 2) + (a4 + 0x18)) + 0x0));
            if (((*(signed char *)((a4 + 0x5))) == 1) && ((t4 != 0) && (t1 = *(int *)((a6 + 0x0)), t2 = *(int *)((a6 + 0x4)), t3 = *(int *)((t4 + 0x8)), (t1 + t2) == t3))) {
                *(unsigned int *)((t4 + 0x8)) = (*(int *)((a6 + 0x0)));
                *(unsigned int *)((t4 + 0xC)) = ((*(int *)((t4 + 0xC))) + (*(int *)((a6 + 0x4))));
            } else {
                t1 = *(int *)((a4 + 0x14));
                if (t1 == 0) {
                    if ((*(int *)((a4 + 0x28))) != 0) {
                        t2 = ((int (*)(int, int, int, int))((*(int *)((a4 + 0x28)))))((*(int *)((a4 + 0x2C))), 0xFFFFFFFD, a6, a7);
                    }
                } else {
                    *(unsigned int *)((a4 + 0x14)) = (*(int *)((t1 + 0x0)));
                    *(unsigned int *)((t1 + 0x0)) = 0x0;
                    { struct mv2 { int w[2]; }; *(struct mv2 *)((t1 + 0x8)) = *(struct mv2 *)(a6); }
                    *(unsigned int *)((t1 + 0x0)) = (*(int *)((((a4 + 0x18) + (a5 << 2)) + 0x0)));
                    *(unsigned int *)((((a4 + 0x18) + (a5 << 2)) + 0x0)) = t1;
                }
            }
            SJUNI_Unlock(a4, t0);
    return;
        }
        return;
    }
    if ((*(int *)((a4 + 0x28))) != 0) {
        ((int (*)(int, int, int, int))((*(int *)((a4 + 0x28)))))((*(int *)((a4 + 0x2C))), 0xFFFFFFFD, a6, a7);
    return;
    }
}

int GetStopPosCenter(int a4, int a5, int a6)
{
    int stk[5];
    register int t4;
    register int t6;
    register int t7;
    register int t8;
    register float u18;
    register float u19;
    register float u20;
    register float u41;
    register int t27;
    register int t28;
    register float u29;
    register float t30;

    *(unsigned int *)(((int)stk + 0)) = a6;
    t4 = *(int *)(((((((struct o4_int *)0xC1EC720)->v)) << 2) + (*(int *)((0xC1294F0 + (((((struct o0_int *)0xC1EC720)->v)) << 2))))));
    *(unsigned int *)(((int)stk + 4)) = ((a4 << 2) << 1);
    t8 = *(int *)(((t4 + ((a4 << 2) << 1)) + 0x4));
    t6 = *(int *)(((t4 + ((a4 << 2) << 1)) + 0x0));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x8)) = *(struct mv3 *)(0xC09741C); }
    if ((int)t6 > 0) {
        t7 = 0x0;
        for (;;) {
            nlAddVector((((int)stk + 0) + 0x8), t8);
            t7 = (t7 + 0x1);
            t8 = (t8 + 0xC);
            if ((int)t7 >= (int)t6) {
                break;
            }
        }
    }
    u18 = *(float *)(((int)stk + 8));
    *(float *)(((int)stk + 8)) = (u18 * (1.0f / (float)t6));
    *(float *)((a5 + 0x0)) = (u18 * (1.0f / (float)t6));
    u19 = *(float *)(((int)stk + 12));
    *(float *)(((int)stk + 12)) = (u19 * (1.0f / (float)t6));
    (((struct o4_float *)(a5))->v) = (u19 * (1.0f / (float)t6));
    u20 = *(float *)(((int)stk + 16));
    *(float *)(((int)stk + 16)) = (u20 * (1.0f / (float)t6));
    (((struct o8_float *)(a5))->v) = (u20 * (1.0f / (float)t6));
    t28 = *(int *)((((*(int *)(((((((struct o4_int *)0xC1EC720)->v)) << 2) + (*(int *)((0xC1294F0 + (((((struct o0_int *)0xC1EC720)->v)) << 2))))))) + (*(int *)(((int)stk + 4)))) + 0x4));
    u41 = 0.0f;
    if ((int)t6 > 0) {
        t27 = 0x0;
        u29 = 0.0f;
        for (;;) {
            t30 = nlLength(a5, t28);
            t28 = (t28 + 0xC);
            if (t30 > u29) {
                u29 = t30;
            }
            t27 = (t27 + 0x1);
            if ((int)t27 >= (int)t6) {
                break;
            }
        }
        u41 = u29;
    }
    *(float *)(((*(int *)(((int)stk + 0))) + 0x0)) = (u41 * 1.20000005f);
    return 0xC016394;
}

int FUN_0c0435e2(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    if ((a5 & 0x8) != 0) {
        if ((((((struct o84_int *)(a4))->v)) & 0x8) != 0) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x14)) = *(struct mv3 *)((0x8C + a4)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x20)) = *(struct mv3 *)((0x98 + a4)); }
            *(unsigned int *)((a4 + 0x3C)) = (a4 + 0x44);
            (((struct o40_uint *)(a4))->v) = 0x0;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x5C)) = *(struct mv3 *)(0xC0C3670); }
            (((struct o68_uint *)(a4))->v) = 0x0;
            (((struct o6C_float *)(a4))->v) = 0.0f;
            (((struct o70_float *)(a4))->v) = 0.0f;
            SetColliObj((a4 + 0x14), (*(int *)(((((((struct o78_int *)(a4))->v)) * 0xA8) + 0xC0C106C))));
        } else {
            t0 = ((int (*)(int, int, int, int))(KillColliObj))((a4 + 0x14), a5, a6, a7);
        }
    } else {
        t0 = a5;
    }
    t1 = 0x1;
    if ((((((struct o84_int *)(a4))->v)) & 1) == 0) {
        if ((0x8 & ((((struct o84_int *)(a4))->v))) != 0) {
            t2 = ((int (*)(int, int))(KillColliObj))((a4 + 0x14), t0);
        }
        t1 = 0x0;
    }
    return t1;
}
