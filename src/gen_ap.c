/* Straight-line functions with calls and guards (batch gen_ap): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o0_float { float v; };
struct o0_int { int v; };
struct o10_float { char p[0x10]; float v; };
struct o100_float { char p[0x100]; float v; };
struct o104_float { char p[0x104]; float v; };
struct o108_uchar { char p[0x108]; unsigned char v; };
struct o110_uint { char p[0x110]; unsigned int v; };
struct o114_uint { char p[0x114]; unsigned int v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o11C_uint { char p[0x11C]; unsigned int v; };
struct o120_uint { char p[0x120]; unsigned int v; };
struct o124_uint { char p[0x124]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o60_int { char p[0x60]; int v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o78_int { char p[0x78]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o80_int { char p[0x80]; int v; };
struct o84_int { char p[0x84]; int v; };
struct o84_uint { char p[0x84]; unsigned int v; };
struct o88_uint { char p[0x88]; unsigned int v; };
struct o8C_float { char p[0x8C]; float v; };
struct o90_float { char p[0x90]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o9C_int { char p[0x9C]; int v; };
struct oA4_uchar { char p[0xA4]; unsigned char v; };
struct oA6_ushort { char p[0xA6]; unsigned short v; };
struct oAA_short { char p[0xAA]; short v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
struct oAC_uint { char p[0xAC]; unsigned int v; };
struct oB0_float { char p[0xB0]; float v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_uint { char p[0xBC]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oC0_uint { char p[0xC0]; unsigned int v; };
struct oC4_float { char p[0xC4]; float v; };
struct oC8_float { char p[0xC8]; float v; };
struct oCC_float { char p[0xCC]; float v; };
struct oD0_float { char p[0xD0]; float v; };
struct oD4_int { char p[0xD4]; int v; };
struct oDC_uint { char p[0xDC]; unsigned int v; };
struct oE0_float { char p[0xE0]; float v; };
struct oE8_float { char p[0xE8]; float v; };
struct oF0_float { char p[0xF0]; float v; };
struct oF8_float { char p[0xF8]; float v; };
struct oFC_float { char p[0xFC]; float v; };
int CalcShadow4Normal(int, int);
int FUN_0c018b1c(int);
int FUN_0c018b22(int, int);
int FUN_0c02022a(void);
int FUN_0c020dbc(int, int, int, int, int);
float FUN_0c021040(int, int);
int FUN_0c029b12(int, float);
int FUN_0c046466(void);
int FUN_0c0469e2(int, int, int, int, int);
int FUN_0c046fde(int, int, int);
int FUN_0c04bd7c(int, int);
int FUN_0c05b3d4(int, int);
int FUN_0c064766(int, int, int);
int FUN_0c067eee(int, float);
extern int FUN_0c06e700();
int FUN_0c072290(int, int);
int FUN_0c073010(void);
int FUN_0c073360(void);
int FUN_0c073c40(int, int, float);
int FUN_0c076230(float, float, float);
int FUN_0c07ffac(int);
int GetStopPosCenter(int, int, int);
int camSetTarget(int, int);
int nlAddVector(int, int);
int nlArcTan2(int, float, float);
int nlGetMatrix(int);
float nlLength(int, int);
int nlMalloc(int);
int nlPopMatrix(int);
int nlQuickInvertMatrix(void);
int nlRotateAY(int);
int FUN_0c015f28(float f4);
float FUN_0c061bcc(int a4, int a5, int a6, int a7);
int FUN_0c0438c0(int a4);
void calcCheck(int a4);
int FUN_0c05ca24(float f4, float f5, float f6);
int FUN_0c06e300(void);
int FUN_0c05b410(float f4, float f5, float f6);


float FUN_0c061bcc(int a4, int a5, int a6, int a7)
{
    int stk[13];

    register int R1;
    register int R3;
    register int R6;
    register float F0;
    register float F3;
    register float F4;
    register float F14;
    register int T_;
    register int FPUL_;
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
    v0_6 = a4;
    v0_1 = a5;
    *(unsigned int *)0xC2B9EE8 = 0x0;
    v0_4 = *(int *)((v0_1 + 0x0));
    v0_0 = (v0_1);
    v0_2 = (0x0);
    v0_3 = (v0_6);
    v0_6 = (v0_4);
    if (((int)v0_4 < 0)) goto L_C061BF8;
    if (((int)v0_6 < (int)0x52)) goto L_C061BFE;
    L_C061BF8:;
    *(unsigned int *)(((int)stk + 4)) = 0x51;
    L_C061C02:;
    FUN_0c05b3d4(v0_3, 0x64);
    v0_4 = nlMalloc(((*(int *)((v0_0 + 0x4))) << 8));
    *(unsigned int *)((v0_3 + 0x0)) = v0_4;
    FUN_0c05b3d4(v0_4, ((*(int *)((v0_0 + 0x4))) << 8));
    v0_4 = *(int *)((v0_0 + 0x4));
    *(unsigned int *)((v0_3 + 0x8)) = v0_4;
    *(unsigned int *)((v0_3 + 0x4)) = v0_4;
    v0_4 = (int)(*(int *)((v0_0 + 0x4))) <= (int)0x1;
    v0_7 = ((FUN_0c073360()));
    if (v0_4) goto L_C061C3A;
    v0_4 = (int)((int)0x10000 / (int)(*(int *)((v0_0 + 0x4))));
    *(unsigned int *)(((int)stk + 8)) = v0_4;
    v0_7 = (v0_4);
    L_C061C3A:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x28)) = *(struct mv3 *)((*(int *)((v0_0 + 0x8)))); }
    v0_4 = (v0_2);
    L_C061DFA:;
    if (((int)v0_4 >= (int)(*(int *)((v0_0 + 0x4))))) goto L_C061E04;
    *(unsigned int *)(((int)stk + 12)) = v0_2;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x10)) = *(struct mv3 *)(0xC10D9E0); }
    v0_6 = (0xC10D9E0);
    v0_5 = (v0_2);
    if ((v0_4 != 0)) goto L_C061C64;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x1C)) = *(struct mv3 *)((((int)stk + 0) + 0x28)); }
    L_C061DBE:;
    FUN_0c064766(((*(int *)((v0_3 + 0x0))) + (v0_4 << 8)), (*(int *)(((int)stk + 4))), (((int)stk + 0) + 0x1C));
    (((struct oAC_uint *)(((*(int *)((v0_3 + 0x0))) + (v0_4 << 8))))->v) = v0_3;
    (((struct o84_uint *)(((*(int *)((v0_3 + 0x0))) + (v0_4 << 8))))->v) = v0_4;
    (((struct o88_uint *)(((*(int *)((v0_3 + 0x0))) + (v0_4 << 8))))->v) = v0_4;
    v0_7 = ((CalcShadow4Normal((((*(int *)((v0_3 + 0x0))) + (v0_4 << 8)) + 0x90), (((int)stk + 0) + 0x10))));
    v0_4 = ((v0_4 + 0x1));
    goto L_C061DFA;
    L_C061C64:;
    *(unsigned int *)(((int)stk + 0)) = (((int (*)(int, int, int, int, float))((*(int *)((0xC110374 + ((*(int *)0xC1EC740) << 2))))))(v0_6, v0_1, R6, a7, F4));
    v0_10 = *(int *)(((int)stk + 0));
    v0_7 = (v0_10);
    v0_8 = (0xC110374);
    v0_9 = (0xC1EC740);
    w0_0 = (15.0f);
    if (((int)v0_10 < 0)) goto L_C061C82;
    v0_7 = ((v0_7 & 0x3));
    L_C061C8C:;
    FUN_0c073c40((((int)stk + 0) + 0x1C), 0xC10D9C8, ((float)(v0_7 << 1) + w0_0));
    if ((v0_5 == 0)) goto L_C061CF0;
    v0_6 = ((int (*)(int, int, int, int, float))((*(int *)((v0_8 + ((*(int *)((v0_9 + 0x0))) << 2))))))(v0_6, v0_1, R6, a7, F4);
    *(unsigned int *)(((int)stk + 0)) = v0_6;
    v0_6 = ((v0_6 & 0xC00));
    L_C061CF2:;
    nlRotateAY(v0_6);
    FUN_0c072290((((int)stk + 0) + 0x1C), (((int)stk + 0) + 0x1C));
    nlAddVector((((int)stk + 0) + 0x1C), (((int)stk + 0) + 0x28));
    v0_6 = FUN_0c029b12((((int)stk + 0) + 0x1C), 18.0f);
    v0_7 = *(int *)((v0_6 + 0x1C));
    v0_8 = (v0_6);
    v0_6 = (v0_7);
    if ((v0_7 == -1)) goto L_C061D84;
    if ((v0_6 == 0)) goto L_C061D84;
    if ((v0_6 == 2)) goto L_C061D84;
    if ((v0_6 == 4)) goto L_C061D84;
    if ((v0_6 == 6)) goto L_C061D84;
    v0_9 = (v0_2);
    L_C061D7A:;
    if (!(((int)v0_9 < (int)v0_4))) goto L_C061D7E;
    v0_6 = !((nlLength(v0_8, (((v0_9 << 8) + (*(int *)((v0_3 + 0x0)))) + 0x70))) > w0_0);
    if (v0_6) goto L_C061D78;
    *(unsigned int *)(((int)stk + 12)) = 0x1;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x28)) = *(struct mv3 *)(v0_8); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x10)) = *(struct mv3 *)((v0_8 + 0xC)); }
    goto L_C061D7E;
    L_C061D7E:;
    if (((*(int *)(((int)stk + 12))) != 0)) goto L_C061DBE;
    L_C061D84:;
    v0_7 = (int)(v0_5 + 0x1) >= (int)0x10;
    v0_6 = (0x10);
    v0_5 = ((v0_5 + 0x1));
    if (v0_7) goto L_C061D90;
    goto L_C061C64;
    L_C061D90:;
    goto L_C061DBE;
    L_C061D78:;
    v0_9 = ((v0_9 + 0x1));
    goto L_C061D7A;
    L_C061CF0:;
    v0_6 = ((*(int *)(((int)stk + 8))));
    goto L_C061CF2;
    L_C061C82:;
    v0_7 = (((~(((~v0_7) + 0x1) & 0x3)) + 0x1));
    goto L_C061C8C;
    L_C061E04:;
    nlPopMatrix(0x1);
    FUN_0c067eee(v0_3, ((((struct oC_float *)(v0_0))->v)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_3 + 0x40)) = *(struct mv3 *)(((*(int *)((v0_3 + 0x0))) + 0x70)); }
    v0_1 = (v0_3);
    if (!(((*(int *)((v0_0 + 0x10))) == 0))) goto L_C061E30;
    goto L_C061E30;
    L_C061E30:;
    (((struct o60_uint *)(v0_1))->v) = ((((((struct o60_int *)(v0_1))->v)) & 0xFDFFFFFF) | ((unsigned int)((int)((unsigned int)v0_7 & 0x1)) << 25));
    return F0;
    L_C061BFE:;
    *(unsigned int *)(((int)stk + 4)) = (*(int *)((v0_0 + 0x0)));
    goto L_C061C02;
}


void calcCheck(int a4)
{

    register int R1;
    register int R3;
    register int R5;
    register int R6;
    register int R7;
    register int R9;
    register int R11;
    register int R12;
    register int R13;
    register float F2;
    register float F3;
    register float F10;
    register float F15;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register float w0_0;
    register float w0_1;
    v0_0 = a4;
    w0_0 = nlLength(0xC2A59D8, (0x8C + v0_0));
    v0_0 = (v0_0);
    w0_1 = (w0_0);
    if ((!(((*(float *)0xC2A59BC) + 30.0f) > w0_0))) goto L_C043558;
    v0_1 = (0x84);
    v0_2 = ((((((struct o84_int *)(v0_0))->v)) | 0xD));
    L_C043560:;
    *(unsigned int *)((v0_0 + v0_1)) = v0_2;
    if ((((((struct oC4_float *)(v0_0))->v)) != 0.0f)) goto L_C0435D2;
    w0_1 = (((struct o0_float *)0xC043668)->v);
    w0_0 = (w0_1);
    if ((!(w0_1 > _builtin_fabsf(((((struct oCC_float *)(v0_0))->v)))))) goto L_C0435D2;
    w0_0 = (((struct o4_float *)0xC043668)->v);
    w0_1 = (w0_0);
    if ((!(w0_0 > _builtin_fabsf(((((struct o60_float *)(v0_0))->v)))))) goto L_C0435D2;
    v0_1 = (int)(FUN_0c07ffac(((((struct oAA_short *)(v0_0))->v)))) >= (int)0x10;
    if (v0_1) goto L_C0435D2;
    if ((!(((((struct o4_float *)0xC043668)->v)) > _builtin_fabsf(((((struct o100_float *)(v0_0))->v)))))) goto L_C0435D2;
    w0_0 = (((struct o104_float *)(v0_0))->v);
    w0_1 = (((struct o90_float *)(v0_0))->v);
    v0_1 = !(((((struct oC_float *)0xC043668)->v)) > _builtin_fabsf((w0_1 - w0_0)));
    w0_0 = (_builtin_fabsf((w0_1 - w0_0)));
    if (v0_1) goto L_C0435D2;
    (((struct o84_uint *)(v0_0))->v) = (((((struct o84_int *)(v0_0))->v)) & 0xFFFFFFFB);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x98 + v0_0)) = *(struct mv3 *)(0xC0C3670); }
    L_C0435DC:;
    return;
    L_C0435D2:;
    (((struct o84_uint *)(v0_0))->v) = (((((struct o84_int *)(v0_0))->v)) | 0x4);
    v0_1 = (0x84);
    goto L_C0435DC;
    L_C043558:;
    v0_1 = (0x84);
    v0_2 = ((((((struct o84_int *)(v0_0))->v)) & 0xFFFFFFF2));
    goto L_C043560;
}

int FUN_0c05ca24(float f4, float f5, float f6)
{
    int stk[19];
    register int t5;
    register int t6;
    register int t7;
    register int t9;
    register int t10;
    register int t11;

    FUN_0c018b1c(0x1);
    FUN_0c073010();
    nlQuickInvertMatrix();
    nlGetMatrix((((int)stk + 0) + 0xC));
    nlPopMatrix(0x1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(0xC177D38); }
    t5 = ((int (*)(int, int, Stk3, float))(FUN_0c06e700))(((int)stk + 0), (((int)stk + 0) + 0xC), *(Stk3 *)(((int)stk + 0)), f4);
    t6 = ((int (*)(int, int, float))(FUN_0c06e700))(((int)stk + 0), (((int)stk + 0) + 0x1C), f5);
    t7 = ((int (*)(int, int, float))(FUN_0c06e700))(((int)stk + 0), (((int)stk + 0) + 0x2C), f6);
    FUN_0c018b22(((int)stk + 0), 0x1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(0xC177D44); }
    t9 = ((int (*)(int, int, Stk3, float))(FUN_0c06e700))(((int)stk + 0), (((int)stk + 0) + 0xC), *(Stk3 *)(((int)stk + 0)), f4);
    t10 = ((int (*)(int, int, float))(FUN_0c06e700))(((int)stk + 0), (((int)stk + 0) + 0x1C), f5);
    t11 = ((int (*)(int, int, float))(FUN_0c06e700))(((int)stk + 0), (((int)stk + 0) + 0x2C), f6);
    return (camSetTarget(((int)stk + 0), 0x1));
}

int FUN_0c06e300(void)
{
    int stk[3];
    register int t1;
    register int t3;
    register int t5;
    register int t8;
    register int t10;
    register int t12;
    register int t13;

    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(0xC17599C); }
    t1 = ((int (*)(int, int, Stk3, float))(FUN_0c06e700))(((int)stk + 0), 0xC17596C, *(Stk3 *)(((int)stk + 0)), ((((struct o0_float *)0xC112B7C)->v)));
    t3 = ((int (*)(int, int, float))(FUN_0c06e700))(((int)stk + 0), 0xC17597C, ((((struct o4_float *)0xC112B7C)->v)));
    t5 = ((int (*)(int, int, float))(FUN_0c06e700))(((int)stk + 0), 0xC17598C, ((((struct o8_float *)0xC112B7C)->v)));
    FUN_0c018b22(((int)stk + 0), 0x0);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(0xC17599C); }
    t8 = ((int (*)(int, int, Stk3, float))(FUN_0c06e700))(((int)stk + 0), 0xC17596C, *(Stk3 *)(((int)stk + 0)), ((((struct oC_float *)0xC112B7C)->v)));
    t10 = ((int (*)(int, int, float))(FUN_0c06e700))(((int)stk + 0), 0xC17597C, ((((struct o10_float *)0xC112B7C)->v)));
    t12 = ((int (*)(int, int, float))(FUN_0c06e700))(((int)stk + 0), 0xC17598C, ((((struct o14_float *)0xC112B7C)->v)));
    t13 = camSetTarget(((int)stk + 0), 0x0);
    *(unsigned int *)0xC2BB3D8 = ((*(int *)0xC2BB3D8) + 0x1);
    return t13;
}

int FUN_0c05b410(float f4, float f5, float f6)
{
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC2B968C) = *(struct mv3 *)(0xC147500); }
    return FUN_0c076230(f4, f5, f6);
}
