/* Straight-line functions with calls and guards (batch gen_gt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o100_float { char p[0x100]; float v; };
struct o104_float { char p[0x104]; float v; };
struct o110_int { char p[0x110]; int v; };
struct o110_uint { char p[0x110]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o160_float { char p[0x160]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o19C_short { char p[0x19C]; short v; };
struct o19E_short { char p[0x19E]; short v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o28_int { char p[0x28]; int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_float { char p[0x2C]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o34_short { char p[0x34]; short v; };
struct o34_ushort { char p[0x34]; unsigned short v; };
struct o38_int { char p[0x38]; int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_int { char p[0x54]; int v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o60_float { char p[0x60]; float v; };
struct o60_int { char p[0x60]; int v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o64_float { char p[0x64]; float v; };
struct o68_float { char p[0x68]; float v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o80_float { char p[0x80]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_int { char p[0x84]; int v; };
struct o84_ushort { char p[0x84]; unsigned short v; };
struct o88_int { char p[0x88]; int v; };
struct o88_uint { char p[0x88]; unsigned int v; };
struct o8A_short { char p[0x8A]; short v; };
struct o8C_int { char p[0x8C]; int v; };
struct o8C_uint { char p[0x8C]; unsigned int v; };
struct o90_float { char p[0x90]; float v; };
struct o90_uint { char p[0x90]; unsigned int v; };
struct o94_uint { char p[0x94]; unsigned int v; };
struct o98_uint { char p[0x98]; unsigned int v; };
struct o9C_float { char p[0x9C]; float v; };
struct o9C_uint { char p[0x9C]; unsigned int v; };
struct oA4_short { char p[0xA4]; short v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA6_short { char p[0xA6]; short v; };
struct oA8_short { char p[0xA8]; short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oB8_int { char p[0xB8]; int v; };
struct oB8_uint { char p[0xB8]; unsigned int v; };
struct oBC_uint { char p[0xBC]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC8_uint { char p[0xC8]; unsigned int v; };
struct oCC_float { char p[0xCC]; float v; };
struct oCC_uint { char p[0xCC]; unsigned int v; };
struct oF8_float { char p[0xF8]; float v; };
struct oF8_short { char p[0xF8]; short v; };
int CalcShadow4Normal(int, int);
int FUN_0c018b1c(int);
int FUN_0c018b22(int, int);
int FUN_0c018c2a(float, float);
int FUN_0c018c8a(float, float);
float FUN_0c018cfc(void);
int FUN_0c026bd6(int);
int FUN_0c026c02(void);
int FUN_0c0297f4(int, int, float);
int FUN_0c029b12(int, float);
int FUN_0c03f948(int, int, int, int);
int FUN_0c03f9d0(int, int);
int FUN_0c041298(int);
int FUN_0c0415ba(int);
int FUN_0c041664(void);
int FUN_0c041a44(int, int);
int FUN_0c041d5c(int, int);
int FUN_0c0420b0(int, int);
int FUN_0c0423c8(int);
int FUN_0c0435e2(int, int);
int FUN_0c0436b8(int);
int FUN_0c0436f6(int);
int FUN_0c043706(int);
int FUN_0c046fde(int, int, int);
int FUN_0c04e03c(void);
int FUN_0c04e152(int, int, int);
int FUN_0c04e192(int, int, int, int);
int FUN_0c04e3c0(int);
int FUN_0c04e43a(int);
int FUN_0c04e45e(int, int);
float FUN_0c04e526(int);
int FUN_0c04e64e(void);
int FUN_0c058ca6(int, int);
int FUN_0c05be5c(int, float);
int FUN_0c05be8a(int, float);
int FUN_0c05d0d8(float);
int FUN_0c05f42e(void);
int FUN_0c061bcc(int, int);
int FUN_0c062270(void);
int FUN_0c0673da(int);
int FUN_0c067804(int);
int FUN_0c06e700(int, int, Stk3, float);
int FUN_0c070730(float);
int FUN_0c072230(int, int);
int FUN_0c072290(int, int);
int FUN_0c072b60(int);
int FUN_0c073360(void);
int FUN_0c0739a0(int);
int FUN_0c073a30(float, float, float);
int FUN_0c073a60(int);
float FUN_0c073b40(int, int);
int FUN_0c073c40(int, int, float);
float FUN_0c073c60(int);
float FUN_0c073c80(int);
float FUN_0c073e10(int);
int FUN_0c075740(int, int, int, int, int, int, int, int, int, int, float, float, float, float, float, float, float, float);
int FUN_0c075a00(int, float, float, float);
int FUN_0c075d50(void);
int FUN_0c075d60(void);
int FUN_0c078810(int, int, int);
int FUN_0c078870(int);
int FUN_0c078890(Stk3, float);
int GetRotVec4Ang(int, int, int, int);
int calcCheck(int);
int camSetTarget(int, int);
int nlAddVector(int, int);
int nlAddVector3op(int, int, int);
int nlGetMatrix(int);
int nlObjPutSetLightDirectionV(int);
int nlObjPutUseViewMatrix(int);
int nlOuterProduct(int, int, int);
int nlPopMatrix(int);
int nlProjectScreen3D(int, int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlRotateAxe(int, int);
int nlScaleUnitVector(int, int, float);
int nlSubVector3op(int, int, int);
int nlTriPutSetClipping(int, float, float, float, float);
int nlTriPutSetPoint(int, int, float, float, float, float, float, float, float, float);
int nlTriPutTextureInit(int, int, int);
int nlUnitMatrix(void);
int pcarRejoinLane(int);
int set_event(int, int);
int thunk_FUN_0c0765b0(void);
float FUN_0c04d5fa(void);
int FUN_0c04dcf0(void);
int FUN_0c02d3e8(int a4, int a5, int a6, int a7);
int FUN_0c0423e6(int a4, int a5, int a6, int a7);
int FUN_0c0668c6(int a4, int a5, int a6, int a7, float f4, float f5, float f6);
int FUN_0c01505c(int a4, int a5);
float FUN_0c0443ac(int a4);
int FUN_0c067898(int a4);
int PutColliWall(int a4);
int FUN_0c06d3f4(void);

float FUN_0c04d5fa(void)
{
    int stk[21];

    register int R1;
    register int R2;
    int R7;
    register float F0;
    register float F1;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    register float w0_5;
    register float w0_6;
    register float w0_7;
    v0_2 = *(int *)0xC1EC71C;
    v0_8 = (v0_2);
    v0_0 = (0x0);
    v0_1 = (0xC1758B4);
    v0_3 = (0xC073650);
    v0_3 = (0xC073280);
    w0_2 = ((1.0f + 1.0f));
    w0_0 = (1.0f);
    w0_1 = (0.0f);
    if ((v0_2 != 2)) goto L_C04D632;
    L_C04DCD2:;
    return F0;
    L_C04D632:;
    v0_2 = (FUN_0c04dcf0()) != 0;
    if (v0_2) goto L_C04D63E;
    FUN_0c04e03c();
    L_C04D63E:;
    w0_4 = (((struct o160_float *)(v0_1))->v);
    w0_3 = (_builtin_fabsf(w0_4) * 30.0f);
    w0_4 = (_builtin_fabsf(w0_4) * 30.0f);
    *(float *)(((int)stk + 8)) = (w0_3 * w0_4);
    v0_2 = (((struct o19E_short *)(v0_1))->v);
    *(float *)(((int)stk + 16)) = (_builtin_fabsf((float)v0_2) / 384.0f);
    FPUL_ = (v0_2);
    if ((!(0.0f > ((((struct o160_float *)(v0_1))->v))))) goto L_C04D676;
    w0_3 = (6400.0f);
    L_C04D67A:;
    *(float *)(((int)stk + 32)) = w0_3;
    if ((!(w0_0 > (*(float *)(((int)stk + 16)))))) goto L_C04D68A;
    *(float *)(((int)stk + 16)) = w0_0;
    L_C04D68A:;
    v0_2 = (((struct o4_int *)0xC2B1B94)->v);
    v0_8 = (v0_2);
    if (((int)v0_2 < 0)) goto L_C04D6D8;
    v0_8 = ((v0_8 & 0x3));
    L_C04D6E2:;
    v0_3 = (v0_8);
    L_C04D9CA:;
    v0_2 = (0xC2AE0CC);
    if (((int)v0_3 >= (int)0x80)) goto L_C04D9D6;
    v0_4 = (((v0_3 * 0x64) + v0_2));
    if (!((((((struct o34_short *)(((v0_3 * 0x64) + v0_2)))->v)) != -1))) goto L_C04D9C8;
    (((struct o54_uint *)(v0_4))->v) = (FUN_0c04e45e((v0_4 + 0xC), (v0_4 + 0x50)));
    v0_5 = (((struct o54_int *)(v0_4))->v);
    v0_8 = (v0_5);
    if ((v0_5 != 3)) goto L_C04D722;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_4 + 0xC)) = *(struct mv3 *)(v0_4); }
    goto L_C04D8C0;
    L_C04D9C8:;
    v0_3 = ((v0_3 + 0x4));
    goto L_C04D9CA;
    L_C04D8C0:;
    w0_3 = ((((struct oC_float *)(v0_4))->v));
    w0_3 = w0_3 + w0_2 * ((((struct o18_float *)(v0_4))->v));
    *(float *)(((int)stk + 72)) = w0_3;
    *(float *)(((int)stk + 76)) = (((((struct o10_float *)(v0_4))->v)) + -0.122499995f);
    w0_3 = ((((struct o14_float *)(v0_4))->v));
    w0_3 = w0_3 + w0_2 * ((((struct o20_float *)(v0_4))->v));
    *(float *)(((int)stk + 80)) = w0_3;
    v0_5 = FUN_0c029b12((((int)stk + 4) + 0x44), 40.0f);
    v0_7 = *(int *)((v0_5 + 0x1C));
    v0_5 = (v0_5);
    v0_6 = (v0_7);
    if ((v0_7 == -1)) goto L_C04D9C4;
    if ((v0_6 == 2)) goto L_C04D9C4;
    if ((v0_6 == 6)) goto L_C04D9C4;
    v0_8 = (0x10);
    if ((((((struct o10_float *)(v0_4))->v)) > ((((struct o4_float *)(v0_5))->v)))) goto L_C04D946;
    if ((!((((((struct o4_float *)(v0_5))->v)) - (*(float *)((v0_4 + v0_8)))) > 30.0f))) goto L_C04D934;
    FUN_0c04e43a(v0_4);
    L_C04D95A:;
    v0_7 = *(int *)((v0_5 + 0x1C));
    v0_6 = (v0_7);
    if ((v0_7 == 3)) goto L_C04D97A;
    if ((v0_6 == 8)) goto L_C04D97A;
    if ((v0_6 == 9)) goto L_C04D97A;
    if ((v0_6 == 1)) goto L_C04D97A;
    if (!((v0_6 != 10))) goto L_C04D97A;
    *(unsigned int *)((v0_4 + 0x3C)) = v0_0;
    goto L_C04D9C8;
    L_C04D97A:;
    CalcShadow4Normal((v0_4 + 0x24), (v0_5 + 0xC));
    *(unsigned int *)((v0_4 + 0x3C)) = 0x1;
    goto L_C04D9C8;
    L_C04D934:;
    (((struct o10_float *)(v0_4))->v) = ((((struct o4_float *)(v0_5))->v));
    (((struct o1C_float *)(v0_4))->v) = w0_1;
    (((struct o58_uint *)(v0_4))->v) = v0_0;
    goto L_C04D95A;
    L_C04D946:;
    (((struct o58_uint *)(v0_4))->v) = 0x1;
    v0_8 = (0x1C);
    w0_4 = (-0.163333327f);
    if ((!(((((struct o1C_float *)(v0_4))->v)) > -0.163333327f))) goto L_C04D95A;
    *(float *)((v0_4 + v0_8)) = w0_4;
    goto L_C04D95A;
    L_C04D9C4:;
    FUN_0c04e43a(v0_4);
    goto L_C04D9C8;
    L_C04D722:;
    nlSubVector3op((((int)stk + 4) + 0x2C), (v0_4 + 0xC), (v0_1 + 0x7C));
    w0_3 = FUN_0c073c60((((int)stk + 4) + 0x2C));
    FUN_0c073c40((((int)stk + 4) + 0x2C), (((int)stk + 4) + 0x2C), (w0_0 / w0_3));
    FUN_0c073360();
    *(float *)(((int)stk + 36)) = w0_1;
    *(float *)(((int)stk + 40)) = w0_1;
    *(float *)(((int)stk + 44)) = w0_0;
    nlRotateAY((unsigned short)((((struct oF8_short *)(v0_1))->v)));
    FUN_0c072230((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x20));
    nlPopMatrix(0x1);
    w0_3 = ((*(float *)(((int)stk + 44))) * (*(float *)(((int)stk + 56))));
    w0_3 = w0_3 + (*(float *)(((int)stk + 48))) * (*(float *)(((int)stk + 36)));
    w0_4 = (((struct o10_float *)(v0_4))->v);
    w0_5 = (((struct o80_float *)(v0_1))->v);
    w0_6 = ((*(float *)(((int)stk + 8))) * w0_3);
    w0_6 = (w0_6 * w0_3);
    w0_7 = (w0_6 * w0_3);
    w0_6 = (*(float *)(((int)stk + 32)));
    w0_6 = w0_6 + 0.5f * w0_7;
    w0_3 = (w0_3);
    w0_4 = (((w0_5 - w0_4) * (w0_5 - w0_4)));
    if ((w0_6 > (((((struct o50_float *)(v0_4))->v)) * (*(float *)(((int)stk + 16)))))) goto L_C04D7BE;
    goto L_C04D8C0;
    L_C04D7BE:;
    if ((400.0f > w0_4)) goto L_C04D7CA;
    goto L_C04D8C0;
    L_C04D7CA:;
    if (((*(signed char *)((v0_4 + 0x40))) == 0)) goto L_C04D7D6;
    goto L_C04D8C0;
    L_C04D7D6:;
    if ((!(w0_3 > 0.930000007f))) goto L_C04D848;
    v0_8 = (0x19C);
    v0_6 = (0x300);
    if (((int)((((struct o19C_short *)(v0_1))->v)) <= (int)0x300)) goto L_C04D824;
    if ((((((struct o160_float *)(v0_1))->v)) > 0.0f)) goto L_C04D85C;
    L_C04D852:;
    v0_7 = (0x1);
    v0_2 = (0x1);
    L_C04D860:;
    FUN_0c04e152(v0_4, v0_7, v0_2);
    (((struct o4C_float *)(v0_4))->v) = w0_2;
    (((struct o48_float *)(v0_4))->v) = 10.0f;
    if (((*(int *)0xC2AE0C8) == 0)) goto L_C04D880;
    v0_5 = ((FUN_0c04e64e()) & 1) == 0;
    if (v0_5) goto L_C04D8C0;
    L_C04D880:;
    v0_5 = (*(int *)((0xC1317C4 + ((*(int *)((0xC10C8A8 + (((((struct o34_short *)(v0_4))->v)) << 2)))) << 2))));
    *(int *)((int)stk + 0) = v0_5;
    v0_5 = *(int *)((v0_5 + (((int)((unsigned int)(FUN_0c04e64e()) % (unsigned int)(*(int *)((((*(int *)((((((((struct o34_short *)(v0_4))->v)) << 2) + 0xC10C8A8) + 0x0))) << 2) + 0xC1317D0))))) << 2)));
    FUN_0c058ca6(v0_5, 0x1);
    *(unsigned int *)0xC2AE0C8 = 0x28;
    goto L_C04D8C0;
    L_C04D85C:;
    v0_7 = (0x1);
    v0_2 = (0x0);
    goto L_C04D860;
    L_C04D824:;
    v0_6 = (0xFFFFFD00);
    if (((int)(*(short *)((v0_1 + v0_8))) >= (int)0xFFFFFD00)) goto L_C04D83A;
    if ((!(((((struct o160_float *)(v0_1))->v)) > 0.0f))) goto L_C04D85C;
    goto L_C04D852;
    L_C04D83A:;
    v0_2 = !((FUN_0c04e526(v0_4)) > 0.0f);
    if (v0_2) goto L_C04D85C;
    goto L_C04D852;
    L_C04D848:;
    v0_2 = !((FUN_0c04e526(v0_4)) > 0.0f);
    if (v0_2) goto L_C04D85C;
    goto L_C04D852;
    L_C04D9D6:;
    v0_3 = (0xC2AE0C8);
    if (((int)(*(int *)0xC2AE0C8) <= 0)) goto L_C04D9E4;
    *(unsigned int *)((v0_3 + 0x0)) = ((*(int *)((v0_3 + 0x0))) - 1);
    L_C04D9E4:;
    v0_3 = (((struct o8A_short *)(v0_1))->v);
    v0_4 = (((struct oF8_short *)(v0_1))->v);
    (((struct o0_uint *)0xC2B1B94)->v) = (unsigned short)(v0_4 - v0_3);
    v0_6 = (0xC2B1B94);
    v0_7 = ((unsigned short)(v0_4 - v0_3));
    R7 = (0xFFFF);
    if (((unsigned int)(unsigned short)(v0_4 - v0_3) >= (unsigned int)0x8000)) goto L_C04DA54;
    w0_2 = ((float)v0_7);
    FPUL_ = (v0_7);
    if (((int)v0_7 >= 0)) goto L_C04DA0E;
    w0_2 = ((w0_2 + 4.2949673e+09f));
    FPUL_ = (0x4F800000);
    L_C04DA0E:;
    w0_4 = (float)(unsigned short)((((struct o8A_short *)(v0_1))->v));
    w0_4 = w0_4 + 0.5f * w0_2;
    w0_3 = (w0_4);
    w0_2 = (2.14748365e+09f);
    FPUL_ = (0x4F000000);
    if ((2.14748365e+09f > w0_4)) goto L_C04DA86;
    w0_3 = ((w0_3 - (w0_2 + w0_2)));
    L_C04DA86:;
    *(unsigned int *)((v0_6 + 0x0)) = ((int)w0_3 & R7);
    *(unsigned int *)(((int)stk + 28)) = v0_0;
    *(unsigned int *)(((int)stk + 24)) = v0_0;
    *(unsigned int *)(((int)stk + 20)) = v0_2;
    *(unsigned int *)(((int)stk + 4)) = v0_2;
    *(unsigned int *)(((int)stk + 12)) = (v0_2 + 0x3200);
    v0_3 = (v0_0);
    v0_5 = (v0_0);
    v0_6 = ((v0_2 + 0x3200));
    v0_7 = (v0_2);
    FPUL_ = ((int)w0_3);
    if (((unsigned int)(*(int *)(((int)stk + 4))) >= (unsigned int)(v0_2 + 0x3200))) goto L_C04DB2E;
    L_C04DAAC:;
    if ((((((struct o34_short *)((*(int *)(((int)stk + 4)))))->v)) == -1)) goto L_C04DB1C;
    v0_4 = *(int *)(((int)stk + 20));
    FUN_0c04e192(v0_4, v0_7, v0_2, R7);
    v0_1 = (((struct o54_int *)(v0_4))->v);
    v0_8 = (v0_1);
    v0_4 = (v0_4);
    if ((v0_1 == 1)) goto L_C04DAD8;
    if ((v0_8 == 2)) goto L_C04DAD8;
    if ((v0_8 == 3)) goto L_C04DAEE;
    if ((v0_8 == 4)) goto L_C04DAEE;
    if ((v0_8 == 5)) goto L_C04DB18;
    L_C04DB18:;
    FUN_0c04e43a(v0_4);
    L_C04DB1C:;
    *(unsigned int *)(((int)stk + 20)) = ((*(int *)(((int)stk + 20))) + 0x64);
    v0_1 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = (v0_1 + 0x64);
    if (((unsigned int)(v0_1 + 0x64) < (unsigned int)(*(int *)(((int)stk + 12))))) goto L_C04DAAC;
    L_C04DB2E:;
    FUN_0c073360();
    FUN_0c072b60(0xC177D5C);
    FUN_0c075d50();
    nlGetMatrix(0xC2B96F8);
    nlPopMatrix(0x1);
    FUN_0c073360();
    v0_4 = (0xC05BE5C);
    w0_3 = (15.0f);
    L_C04DB70:;
    if ((v0_3 != 0)) goto L_C04DB5C;
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    FUN_0c073360();
    *(float *)(((int)stk + 60)) = w0_1;
    *(float *)(((int)stk + 64)) = w0_1;
    *(float *)(((int)stk + 68)) = -1.0f;
    nlRotateAY((unsigned short)(*(short *)0xC177D52));
    FUN_0c072230((((int)stk + 4) + 0x38), (((int)stk + 4) + 0x38));
    nlPopMatrix(0x1);
    nlUnitMatrix();
    FUN_0c072b60(0xC177D5C);
    FUN_0c026bd6((((int)stk + 4) + 0x44));
    FUN_0c072290((((int)stk + 4) + 0x44), (((int)stk + 4) + 0x44));
    nlObjPutSetLightDirectionV((((int)stk + 4) + 0x44));
    nlRotateAY((0x8000 + (unsigned short)(*(short *)0xC177D52)));
    thunk_FUN_0c0765b0();
    FUN_0c075d50();
    FUN_0c026c02();
    nlRotateAY(((-(unsigned short)(*(short *)0xC177D52)) - 32768));
    v0_3 = (0xC177D50);
    L_C04DCC2:;
    if ((v0_5 != 0)) goto L_C04DC4C;
    v0_0 = nlPopMatrix(0x1);
    (((struct o4_uint *)0xC2B1B94)->v) = (((((struct o4_int *)0xC2B1B94)->v)) + 0x1);
    v0_8 = (v0_0);
    goto L_C04DCD2;
    L_C04DC4C:;
    nlSubVector3op((((int)stk + 4) + 0x2C), (v0_5 + 0xC), 0xC177D38);
    *(float *)(((int)stk + 52)) = w0_1;
    nlScaleUnitVector((((int)stk + 4) + 0x2C), (((int)stk + 4) + 0x2C), w0_0);
    w0_2 = ((*(float *)(((int)stk + 56))) * (*(float *)(((int)stk + 68))));
    w0_2 = w0_2 + (*(float *)(((int)stk + 60))) * (*(float *)(((int)stk + 48)));
    if ((!(w0_2 > (*(float *)0xC04DDF8)))) goto L_C04DCBE;
    v0_0 = (FUN_0c05be5c((v0_5 + 0xC), w0_3)) == 0;
    if (v0_0) goto L_C04DCBE;
    nlPushMatrix(0x0);
    FUN_0c073a60((v0_5 + 0xC));
    nlRotateAY((0x8000 + (unsigned short)(*(short *)((v0_3 + 0x2)))));
    FUN_0c075d60();
    nlPopMatrix(0x1);
    L_C04DCBE:;
    v0_5 = (((((struct o60_int *)(v0_5))->v)));
    goto L_C04DCC2;
    L_C04DB5C:;
    v0_0 = (FUN_0c05be5c((v0_3 + 0xC), w0_3)) == 0;
    if (v0_0) goto L_C04DB6C;
    FUN_0c04e3c0(v0_3);
    L_C04DB6C:;
    v0_3 = (((((struct o60_int *)(v0_3))->v)));
    goto L_C04DB70;
    L_C04DAEE:;
    if (((*(int *)(((int)stk + 28))) != 0)) goto L_C04DAFA;
    *(unsigned int *)(((int)stk + 28)) = v0_4;
    v0_5 = (v0_4);
    L_C04DB02:;
    (((struct o60_uint *)(v0_4))->v) = v0_0;
    goto L_C04DB1C;
    L_C04DAFA:;
    (((struct o60_uint *)((*(int *)(((int)stk + 28)))))->v) = v0_4;
    *(unsigned int *)(((int)stk + 28)) = v0_4;
    goto L_C04DB02;
    L_C04DAD8:;
    if (((*(int *)(((int)stk + 24))) != 0)) goto L_C04DAE4;
    *(unsigned int *)(((int)stk + 24)) = v0_4;
    v0_3 = (v0_4);
    goto L_C04DB02;
    L_C04DAE4:;
    (((struct o60_uint *)((*(int *)(((int)stk + 24)))))->v) = v0_4;
    *(unsigned int *)(((int)stk + 24)) = v0_4;
    goto L_C04DB02;
    L_C04DA54:;
    w0_2 = ((float)(R7 - v0_7));
    FPUL_ = ((R7 - v0_7));
    if (((int)(R7 - v0_7) >= 0)) goto L_C04DA68;
    w0_2 = ((w0_2 + 4.2949673e+09f));
    FPUL_ = (0x4F800000);
    L_C04DA68:;
    w0_4 = (float)(unsigned short)((((struct oF8_short *)(v0_1))->v));
    w0_4 = w0_4 + 0.5f * w0_2;
    w0_3 = (w0_4);
    w0_2 = (2.14748365e+09f);
    FPUL_ = (0x4F000000);
    if ((2.14748365e+09f > w0_4)) goto L_C04DA86;
    w0_3 = ((w0_3 - (w0_2 + w0_2)));
    goto L_C04DA86;
    L_C04D6D8:;
    v0_8 = (((~(((~v0_8) + 0x1) & 0x3)) + 0x1));
    goto L_C04D6E2;
    L_C04D676:;
    w0_3 = (900.0f);
    goto L_C04D67A;
}

int FUN_0c04dcf0(void)
{
    int stk[7];

    register int R1;
    register int R2;
    register int R3;
    register int R6;
    register int R7;
    register float F3;
    register float F4;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    *(unsigned int *)(((int)stk + 8)) = 0x0;
    v0_0 = (0x0);
    L_C04E010:;
    if (((int)(*(int *)(((int)stk + 8))) >= (int)0x14)) goto L_C04E01C;
    v0_3 = *(int *)0xC2B1B8C;
    v0_1 = (0xC2B1B8C);
    v0_2 = (((v0_3 * 0x1C) + 0xC2B12CC));
    if (!(((*(int *)((((v0_3 * 0x1C) + 0xC2B12CC) + 0x0))) != -1))) goto L_C04DFFA;
    if (((*(short *)((v0_2 + 0x1A))) == 0)) goto L_C04DD36;
    goto L_C04DFFA;
    L_C04DFFA:;
    v0_2 = *(int *)((v0_1 + 0x0));
    *(unsigned int *)((v0_1 + 0x0)) = (v0_2 + 0x1);
    if (((int)(v0_2 + 0x1) < (int)0x50)) goto L_C04E00A;
    *(unsigned int *)((v0_1 + 0x0)) = v0_0;
    L_C04E00A:;
    *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x1);
    goto L_C04E010;
    L_C04DD36:;
    v0_3 = (0x1);
    v0_7 = (v0_0);
    if (((*(int *)0xC2ADEC4) == (*(int *)((v0_2 + 0x0))))) goto L_C04DD52;
    v0_8 = (0xC2ADED0);
    L_C04DD58:;
    if (!(((*(int *)((v0_8 + 0x0))) != -1))) goto L_C04DD5E;
    if (((*(int *)((v0_8 + 0x0))) != (*(int *)((v0_2 + 0x0))))) goto L_C04DD56;
    goto L_C04DD52;
    L_C04DD5E:;
    if ((v0_7 != 0)) goto L_C04DD68;
    *(unsigned int *)((v0_2 + 0x0)) = 0xFFFFFFFF;
    goto L_C04DFFA;
    L_C04DD68:;
    nlSubVector3op((((int)stk + 4) + 0xC), 0xC175930, (v0_2 + 0x4));
    w0_0 = FUN_0c073c80((((int)stk + 4) + 0xC));
    *(float *)(((int)stk + 20)) = w0_0;
    v0_6 = (0xC073C80);
    w0_1 = (w0_0);
    w0_1 = (w0_0);
    if ((w0_0 > 160000.0f)) goto L_C04DD92;
    goto L_C04DFFA;
    L_C04DD92:;
    if ((1960000.0f > w0_1)) goto L_C04DD9E;
    goto L_C04DFFA;
    L_C04DD9E:;
    v0_4 = (v0_0);
    v0_5 = (v0_0);
    if (((*(int *)0xC1EC71C) != 1)) goto L_C04DDBC;
    if (((*(int *)0xC175C84) != 1)) goto L_C04DDBC;
    *(unsigned int *)(((int)stk + 12)) = ((unsigned short)(*(short *)((v0_2 + 0x14))) - 2);
    L_C04DDD4:;
    if (((int)(*(int *)(((int)stk + 12))) > 0)) goto L_C04DDDE;
    goto L_C04DFFA;
    L_C04DDDE:;
    *(unsigned int *)0xC1317DC = (unsigned short)(*(short *)((v0_2 + 0x18)));
    v0_6 = (0xC2AE0CC);
    L_C04DFEA:;
    if (((int)v0_4 >= (int)(*(int *)(((int)stk + 12))))) goto L_C04DFF4;
    L_C04DE54:;
    v0_8 = (0x80);
    if ((((((struct o34_short *)(v0_6))->v)) != -1)) goto L_C04DE48;
    if (!(((int)v0_5 < (int)v0_8))) goto L_C04DFF4;
    (((struct o4_float *)(v0_6))->v) = ((((struct o8_float *)(v0_2))->v));
    w0_0 = (((struct o10_float *)(v0_2))->v);
    w0_2 = ((float)(FUN_0c04e64e()) * 3.05175781e-05f);
    w0_1 = 5.0f;
    w0_1 = w0_1 + w0_0 * w0_2;
    v0_8 = FUN_0c04e64e();
    v0_7 = (0x4);
    w0_0 = (0.5f);
    w0_2 = (5.0f);
    w0_3 = (w0_1);
    w0_1 = (3.05175781e-05f);
    FPUL_ = (v0_8);
    if ((!(0.5f > ((float)v0_8 * 3.05175781e-05f)))) goto L_C04DE9E;
    w0_3 = ((-w0_3));
    goto L_C04DE9E;
    L_C04DFF4:;
    if (((*(int *)(((int)stk + 4))) != 0)) goto L_C04E01C;
    goto L_C04DFFA;
    L_C04E01C:;
    return (*(int *)(((int)stk + 4)));
    L_C04DE9E:;
    *(float *)((v0_6 + 0x0)) = ((*(float *)((v0_2 + v0_7))) + w0_3);
    w0_3 = (((struct o10_float *)(v0_2))->v);
    w0_4 = ((float)(FUN_0c04e64e()) * w0_1);
    w0_2 = w0_2;
    w0_2 = w0_2 + w0_3 * w0_4;
    v0_8 = FUN_0c04e64e();
    v0_7 = (0xC);
    w0_3 = (w0_2);
    FPUL_ = (v0_8);
    if ((!(w0_0 > ((float)v0_8 * w0_1)))) goto L_C04DEC8;
    w0_3 = ((-w0_3));
    L_C04DEC8:;
    (((struct o8_float *)(v0_6))->v) = ((*(float *)((v0_2 + v0_7))) + w0_3);
    v0_7 = FUN_0c029b12(v0_6, 40.0f);
    *(unsigned int *)(((int)stk + 4)) = v0_7;
    (((struct o4_float *)(v0_6))->v) = ((((struct o4_float *)(v0_7))->v));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_6 + 0xC)) = *(struct mv3 *)(v0_6); }
    (((struct o18_float *)(v0_6))->v) = 0.0f;
    (((struct o1C_float *)(v0_6))->v) = 0.0f;
    (((struct o20_float *)(v0_6))->v) = 0.0f;
    *(unsigned int *)((v0_6 + 0x30)) = (unsigned short)(*(short *)0xC1759AC);
    *(unsigned int *)((v0_6 + 0x38)) = (*(int *)((v0_1 + 0x0)));
    v0_7 = (*(int *)((0xC131778 + ((unsigned short)(*(short *)((v0_2 + 0x16))) << 2))));
    *(int *)((int)stk + 0) = v0_7;
    (((struct o34_ushort *)(v0_6))->v) = (*(int *)((v0_7 + (((int)((int)(FUN_0c04e64e()) % (int)(*(int *)((0xC10C7BC + ((unsigned short)(*(short *)((v0_2 + 0x16))) << 2)))))) << 2))));
    (((struct o4C_float *)(v0_6))->v) = 1.0f;
    v0_7 = (*(int *)((0xC131784 + ((*(int *)((0xC10C860 + (((((struct o34_short *)(v0_6))->v)) << 2)))) << 2))));
    *(int *)((int)stk + 0) = v0_7;
    v0_7 = *(int *)((v0_7 + (((int)((int)(FUN_0c04e64e()) % (int)(*(int *)((0xC10C850 + ((*(int *)(((((((struct o34_short *)(v0_6))->v)) << 2) + 0xC10C860))) << 2)))))) << 2)));
    (((struct o5C_uint *)(v0_6))->v) = v0_7;
    FUN_0c04e152(v0_6, 0x0, v0_7);
    (((struct o50_float *)(v0_6))->v) = 1000000.0f;
    (((struct o54_uint *)(v0_6))->v) = 0x4;
    (((struct o60_uint *)(v0_6))->v) = 0x0;
    v0_8 = ((v0_6 + 0x24));
    v0_7 = (((*(int *)(((int)stk + 4))) + 0xC));
    CalcShadow4Normal(v0_8, v0_7);
    *(unsigned int *)((v0_6 + 0x3C)) = v0_3;
    *(unsigned int *)(((int)stk + 4)) = v0_3;
    *(unsigned short *)((v0_2 + 0x1A)) = ((*(short *)((v0_2 + 0x1A))) + 0x1);
    v0_4 = ((v0_4 + 0x1));
    goto L_C04DFEA;
    L_C04DE48:;
    v0_7 = (int)(v0_5 + 0x1) < (int)v0_8;
    v0_6 = ((v0_6 + 0x64));
    v0_5 = ((v0_5 + 0x1));
    if (v0_7) goto L_C04DE54;
    goto L_C04DFF4;
    L_C04DDBC:;
    v0_6 = *(short *)((v0_2 + 0x14));
    *(int *)((int)stk + 0) = (unsigned short)v0_6;
    v0_7 = FUN_0c062270();
    *(unsigned int *)(((int)stk + 12)) = ((unsigned short)v0_6 - (((int)((unsigned int)((int)((unsigned int)v0_7 + (unsigned int)0x0)) + ((((int)0x0 > (int)v0_7)) ? 1u : 0u))) >> 1));
    v0_6 = (0xC062270);
    goto L_C04DDD4;
    L_C04DD52:;
    v0_7 = (v0_3);
    goto L_C04DD5E;
    L_C04DD56:;
    v0_8 = ((v0_8 + 0x4));
    goto L_C04DD58;
}

int FUN_0c02d3e8(int a4, int a5, int a6, int a7)
{
    int stk[8];
    register float u1;
    register float u2;
    register int t8;
    register int t16;
    register float u39;
    register int t57;
    register float u58;
    register int t40;
    register int t41;
    register float u42;
    register float u43;
    register float u44;
    register float u46;
    register float u60;
    register float u61;
    register float u63;
    register int t93;
    register int t94;
    register int t96;
    register int t97;
    register int t98;
    register float u114;
    register float u121;
    register int t125;

    *(unsigned int *)(((int)stk + 28)) = a5;
    u1 = *(float *)0xC1294DC;
    u2 = (((struct o0_float *)0xC02D6C4)->v);
    if (((((struct o10_int *)0xC2752C8)->v)) != a4) {
        (((struct o10_uint *)0xC2752C8)->v) = a4;
        t8 = *(int *)((((*(int *)(((((((struct o4_int *)0xC1EC720)->v)) << 2) + (*(int *)((0xC129504 + (((((struct o0_int *)0xC1EC720)->v)) << 2))))))) + ((a4 << 2) << 1)) + 0x0));
        (((struct o4_float *)0xC2752C8)->v) = u2;
        if ((*(int *)0xC2B1B9C) != 0) {
        } else {
            t16 = *(int *)((((*(int *)(((((((struct o4_int *)0xC1EC720)->v)) << 2) + (*(int *)((0xC129504 + (((((struct o0_int *)0xC1EC720)->v)) << 2))))))) + ((((((struct o10_int *)0xC2752C8)->v)) << 2) << 1)) + 0x4));
            nlTriPutTextureInit(0xC2752E0, 0xFFFFFFFF, 0x0);
            *(int *)((int)stk + 20) = ((t8 << 1) + 0x2);
            *(int *)((int)stk + 16) = 0x0;
            *(int *)((int)stk + 12) = 0x1;
            *(int *)((int)stk + 8) = 0x1;
            *(int *)((int)stk + 4) = 0x0;
            *(int *)((int)stk + 0) = 0x1;
            FUN_0c075740(0xC2752E0, 0x1, 0x0, 0xFFFFFFFF, 0x1, 0x0, 0x1, 0x1, 0x0, ((t8 << 1) + 0x2), 1.0f, ((((struct o2C_float *)0xC02D6C4)->v)), 0.0f, ((((struct o28_float *)0xC02D6C4)->v)), 0.0f, 0.0f, 0.0f, 0.0f);
            nlTriPutSetClipping(0xC2752E0, (*(float *)((t16 + 0x0))), ((((struct o4_float *)(t16))->v)), ((((struct o8_float *)(t16))->v)), ((((struct o34_float *)0xC02D6C4)->v)));
            (((struct o38_uint *)0xC2752C8)->v) = (((((struct o38_int *)0xC2752C8)->v)) & 0x3FFFF3F);
            (((struct o38_uint *)0xC2752C8)->v) = (((((struct o38_int *)0xC2752C8)->v)) | 0x300000C0);
            nlTriPutSetPoint(0xC2752E0, 0x0, (*(float *)((t16 + 0x0))), ((((struct o4_float *)(t16))->v)), ((((struct o8_float *)(t16))->v)), 1.0f, 1.0f, 1.0f, u1, 0.0f);
            nlTriPutSetPoint(0xC2752E0, 0x1, (*(float *)((t16 + 0x0))), (((((struct o4_float *)(t16))->v)) + ((((struct o4_float *)0xC2752C8)->v))), ((((struct o8_float *)(t16))->v)), 1.0f, 1.0f, 1.0f, u1, ((((struct o0_float *)0xC02D70C)->v)));
            u39 = (((struct o28_float *)0xC02D6C4)->v);
            t57 = 0x1;
            u58 = (u1 + u39);
            if ((int)0x1 < (int)t8) {
                t40 = 0x1;
                t41 = (t16 + 0xC);
                u42 = (u1 + u39);
                for (;;) {
                    u43 = (((struct o8_float *)(t41))->v);
                    u44 = (((struct o4_float *)(t41))->v);
                    u46 = *(float *)((t41 + 0x0));
                    *(unsigned int *)(((int)stk + 24)) = (t40 << 1);
                    nlTriPutSetPoint(0xC2752E0, (t40 << 1), u46, u44, u43, 1.0f, 1.0f, 1.0f, u42, 0.0f);
                    nlTriPutSetPoint(0xC2752E0, ((*(int *)(((int)stk + 24))) + 0x1), (*(float *)((t41 + 0x0))), (((((struct o4_float *)(t41))->v)) + ((((struct o4_float *)0xC2752C8)->v))), ((((struct o8_float *)(t41))->v)), 1.0f, 1.0f, 1.0f, u42, ((((struct o0_float *)0xC02D70C)->v)));
                    t40 = (t40 + 0x1);
                    u42 = (u42 + ((((struct o28_float *)0xC02D6C4)->v)));
                    t41 = (t41 + 0xC);
                    if ((int)t40 >= (int)t8) {
                        break;
                    }
                }
                t57 = t40;
                u58 = u42;
            }
            u60 = (((struct o8_float *)(t16))->v);
            u61 = (((struct o4_float *)(t16))->v);
            u63 = *(float *)((t16 + 0x0));
            *(unsigned int *)(((int)stk + 24)) = (t57 << 1);
            nlTriPutSetPoint(0xC2752E0, (t57 << 1), u63, u61, u60, 1.0f, 1.0f, 1.0f, u58, 0.0f);
            nlTriPutSetPoint(0xC2752E0, ((*(int *)(((int)stk + 24))) + 0x1), (*(float *)((t16 + 0x0))), (((((struct o4_float *)(t16))->v)) + ((((struct o4_float *)0xC2752C8)->v))), ((((struct o8_float *)(t16))->v)), 1.0f, 1.0f, 1.0f, u58, ((((struct o0_float *)0xC02D70C)->v)));
        }
        t98 = *(int *)((((*(int *)(((((((struct o4_int *)0xC1EC720)->v)) << 2) + (*(int *)((0xC129504 + (((((struct o0_int *)0xC1EC720)->v)) << 2))))))) + ((((((struct o10_int *)0xC2752C8)->v)) << 2) << 1)) + 0x4));
        (((struct o0_uint *)0xC2774C0)->v) = t8;
        (((struct o4_uint *)0xC2774C0)->v) = 0xDF007F00;
        *(unsigned int *)(((((((t8 + 0x1) << 1) + (t8 + 0x1)) << 2) + 0xC2774C0) + 0x8)) = 0x0;
        t93 = 0xC129504;
        t94 = (((((t8 + 0x1) << 1) + (t8 + 0x1)) << 2) + 0xC2774C0);
        t96 = t8;
        t97 = 0xC2774C8;
        for (;;) {
            if (t96 == 0) {
                break;
            }
            t94 = t98;
            t93 = t97;
            t98 = (t98 + 0xC);
            t97 = (t97 + 0xC);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(t93) = *(struct mv3 *)(t94); }
            t96 = (t96 - 1);
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(t97) = *(struct mv3 *)(0xC2774C8); }
    }
    u114 = *(float *)0xC1294DC;
    FUN_0c075a00(0xC2752E0, 0.0f, ((((struct o0_float *)0xC2752C8)->v)), 0.0f);
    (((struct o4_uint *)0xC2774C0)->v) = (((int)(((((struct o0_float *)0xC2752C8)->v)) * ((((struct o14_float *)0xC02D70C)->v))) << 8) | 0xDF000000);
    nlPushMatrix(0x0);
    if ((*(int *)0xC2B1B9C) == 0) {
        nlObjPutUseViewMatrix(0xC2752E0);
        u121 = u2;
        u121 = u121 + u2 * u114;
        FUN_0c073a30(0.0f, u121, 0.0f);
        t125 = (*(int *)(((int)stk + 28)));
        for (;;) {
            if (t125 == 0) {
                break;
            }
            FUN_0c078870(0xC2774C0);
            FUN_0c073a30(0.0f, u2, 0.0f);
            t125 = (t125 - 1);
        }
    }
    return nlPopMatrix(0x1);
}


int FUN_0c0668c6(int a4, int a5, int a6, int a7, float f4, float f5, float f6)
{
    int stk[10];

    register int R1;
    register int R2;
    register int R3;
    register float F3;
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
    register float w0_1;
    v0_0 = a4;
    v0_7 = a5;
    v0_8 = a6;
    v0_9 = a7;
    w0_0 = f4;
    w0_0 = f5;
    w0_0 = f6;
    *(unsigned int *)(((int)stk + 4)) = v0_0;
    { struct mv2 { int w[2]; }; *(struct mv2 *)((((int)stk + 0) + 0x20)) = *(struct mv2 *)(0xC10FEE8); }
    { struct mv2 { int w[2]; }; *(struct mv2 *)((((int)stk + 0) + 0x18)) = *(struct mv2 *)(0xC10FEF0); }
    { struct mv2 { int w[2]; }; *(struct mv2 *)((((int)stk + 0) + 0x10)) = *(struct mv2 *)(0xC10FEF8); }
    { struct mv2 { int w[2]; }; *(struct mv2 *)((((int)stk + 0) + 0x8)) = *(struct mv2 *)(0xC10FF00); }
    v0_10 = *(int *)(((*(int *)(((int)stk + 4))) + 0x0));
    v0_1 = (v0_10);
    v0_2 = ((((int)stk + 0) + 0x8));
    v0_3 = ((((int)stk + 0) + 0x10));
    v0_4 = ((((int)stk + 0) + 0x18));
    v0_5 = ((((int)stk + 0) + 0x20));
    v0_0 = (0x3);
    v0_7 = (0x7A9);
    v0_8 = (0x1);
    v0_9 = (0x407A9);
    v0_6 = (0x2);
    if ((v0_10 == 0xCAAD704)) goto L_C066960;
    if ((v0_1 == 0xCAB037C)) goto L_C066972;
    if ((v0_1 == 0xCAB267C)) goto L_C066978;
    if ((v0_1 == 0xCAB7F44)) goto L_C0669EC;
    if ((v0_1 == 0xCABA2E0)) goto L_C0669F2;
    if ((v0_1 == 0xCABC9C0)) goto L_C066A02;
    if ((v0_1 == 0xCAC5458)) goto L_C066A0C;
    if ((v0_1 == 0xCACD2C0)) goto L_C066A1C;
    L_C066A34:;
    if ((v0_0 != 0xC066B3A)) goto L_C066ADC;
    *(unsigned int *)(((int)stk + 0)) = 0x0;
    v0_7 = (0x0);
    v0_8 = ((0x0 + v0_5));
    w0_0 = (1.0f);
    w0_1 = (0.0f);
    L_C066AA0:;
    if (!(((unsigned int)(*(int *)(((int)stk + 0))) < (unsigned int)v0_6))) goto L_C066B22;
    if (((*(int *)((v0_8 + 0x0))) == 0)) goto L_C066A96;
    v0_9 = set_event(0x6C, 0xC066B3A);
    v0_1 = (v0_9);
    v0_0 = (v0_9);
    if ((v0_9 == 0)) goto L_C066A96;
    { struct mv16 { int w[16]; }; *(struct mv16 *)((v0_0 + 0x14)) = *(struct mv16 *)(((*(int *)(((int)stk + 4))) + 0x40)); }
    (((struct o54_uint *)(v0_0))->v) = (*(int *)((v0_5 + v0_7)));
    (((struct o58_uint *)(v0_0))->v) = (*(int *)((v0_4 + v0_7)));
    (((struct o5C_uint *)(v0_0))->v) = (*(int *)((v0_3 + v0_7)));
    (((struct o60_float *)(v0_0))->v) = (*(float *)((v0_2 + v0_7)));
    (((struct o64_float *)(v0_0))->v) = w0_1;
    (((struct o68_float *)(v0_0))->v) = w0_0;
    v0_1 = (0x68);
    goto L_C066A96;
    L_C066B22:;
    return v0_1;
    L_C066A96:;
    *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0x1);
    v0_7 = ((v0_7 + 0x4));
    v0_8 = ((v0_8 + 0x4));
    goto L_C066AA0;
    L_C066ADC:;
    if ((v0_0 != 0xC066C3C)) goto L_C066B22;
    v0_0 = set_event(0x58, 0xC066C3C);
    v0_1 = (v0_0);
    v0_7 = (v0_0);
    if ((v0_0 == 0)) goto L_C066B22;
    nlPushMatrix(0xC17596C);
    FUN_0c0673da(0x1);
    FUN_0c073a30(((((struct o8_float *)0xC066C08)->v)), ((((struct o4_float *)0xC066C08)->v)), ((((struct o0_float *)0xC066C08)->v)));
    nlGetMatrix((v0_7 + 0x14));
    nlPopMatrix(0x1);
    (((struct o54_uint *)(v0_7))->v) = 0xFFFFFFD2;
    v0_1 = (0x54);
    goto L_C066B22;
    L_C066A1C:;
    *(unsigned int *)((v0_5 + 0x0)) = 0xCAD0B84;
    *(unsigned int *)((v0_4 + 0x0)) = v0_6;
    *(unsigned int *)((v0_5 + 0x4)) = 0xCAD0EB8;
    *(unsigned int *)((v0_4 + 0x4)) = v0_0;
    *(unsigned int *)((v0_3 + 0x4)) = v0_9;
    (((struct o4_float *)(v0_2))->v) = 76.0f;
    v0_1 = (0x4);
    L_C066A32:;
    v0_0 = (0xC066B3A);
    goto L_C066A34;
    L_C066A0C:;
    *(unsigned int *)((v0_5 + 0x0)) = 0xCAC8B3C;
    *(unsigned int *)((v0_4 + 0x0)) = v0_8;
    *(unsigned int *)((v0_3 + 0x0)) = v0_7;
    *(float *)((v0_2 + 0x0)) = 71.0f;
    v0_1 = (0xC066AC0);
    goto L_C066A32;
    L_C066A02:;
    *(unsigned int *)((v0_5 + 0x0)) = 0xCABF194;
    *(unsigned int *)((v0_4 + 0x0)) = 0x0;
    goto L_C066A32;
    L_C0669F2:;
    *(unsigned int *)((v0_5 + 0x0)) = 0xCABC7FC;
    L_C0669F6:;
    *(unsigned int *)((v0_4 + 0x0)) = v0_8;
    *(unsigned int *)((v0_3 + 0x0)) = v0_7;
    *(float *)((v0_2 + 0x0)) = 70.0f;
    v0_1 = (0xC066AB4);
    goto L_C066A32;
    L_C0669EC:;
    *(unsigned int *)((v0_5 + 0x0)) = 0xCABA158;
    goto L_C0669F6;
    L_C066978:;
    *(unsigned int *)((v0_5 + 0x0)) = 0xCAB4F0C;
    *(unsigned int *)((v0_4 + 0x0)) = v0_6;
    *(unsigned int *)((v0_5 + 0x4)) = 0xCAB52B8;
    *(unsigned int *)((v0_4 + 0x4)) = v0_0;
    *(unsigned int *)((v0_3 + 0x4)) = v0_9;
    (((struct o4_float *)(v0_2))->v) = 75.0f;
    v0_1 = (0x4);
    goto L_C066A32;
    L_C066972:;
    v0_0 = (0xC066C3C);
    goto L_C066A34;
    L_C066960:;
    *(unsigned int *)((v0_5 + 0x0)) = 0xCAAFC74;
    *(unsigned int *)((v0_4 + 0x0)) = v0_6;
    *(unsigned int *)((v0_3 + 0x0)) = 0x307A9;
    *(float *)((v0_2 + 0x0)) = 100.0f;
    v0_1 = (0xC0669D8);
    goto L_C066A32;
}

int FUN_0c01505c(int a4, int a5)
{
    int stk[10];
    register int t0;
    register int t77;
    register int t19;
    register int t31;
    register int t32;
    register int t53;
    register int t62;
    register int t72;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    t0 = set_event(0x180, 0xC0152F0);
    t77 = t0;
    if (t0 == 0) {
    } else {
        (((struct o80_uint *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x14)) = (*(int *)(((int)stk + 4)));
        *(unsigned int *)((t0 + 0x18)) = (*(int *)(((int)stk + 0)));
        (((struct o98_uint *)(t0))->v) = 0x0;
        (((struct o9C_uint *)(t0))->v) = 0xFFFFFFFF;
        (((struct oA4_uint *)(t0))->v) = 0x0;
        (((struct o84_ushort *)(t0))->v) = 0x0;
        if ((*(signed char *)((0x10 + (*(int *)((t0 + 0x18)))))) == -1) {
            (((struct o94_uint *)(t0))->v) = 0x1;
            (((struct o90_uint *)(t0))->v) = 0x1;
            (((struct o8C_uint *)(t0))->v) = 0x1;
            (((struct o88_uint *)(t0))->v) = ((int)((int)((int)((int)(*(int *)0xC177D0C) / (int)0x258)) % (int)0x3));
            (((struct oB8_uint *)(t0))->v) = ((0xC177914 + ((short)(*(signed char *)(((((*(int *)((t0 + 0x18))) + 0xD) + ((((struct o88_int *)(t0))->v))) + 0x0))) * (short)0x1C)) + 0x1C);
            (((struct oC8_uint *)(t0))->v) = 0x1;
            (((struct oB4_float *)(t0))->v) = (((*(float *)((((((((struct o88_int *)(t0))->v)) << 2) + ((*(int *)((t0 + 0x14))) + 0x8)) + 0x0))) + -2000.0f) * 5.88235307e-05f);
            if (((((struct oB4_float *)(t0))->v)) > 1.0f) {
                (((struct oB4_float *)(t0))->v) = 1.0f;
            }
            if (0.0f > ((((struct oB4_float *)(t0))->v))) {
                (((struct oB4_float *)(t0))->v) = 0.0f;
            }
            t19 = FUN_0c029b12((*(int *)((t0 + 0x18))), 20.0f);
            *(unsigned int *)(((int)stk + 8)) = (*(int *)((0xC097028 + ((*(signed char *)(((*(int *)((t0 + 0x18))) + 0xC))) << 2))));
            *(unsigned int *)(((int)stk + 12)) = 0x1;
            *(unsigned int *)(((int)stk + 16)) = t19;
            *(float *)(((int)stk + 20)) = ((((struct oB4_float *)(t0))->v));
            t72 = 0x0;
            if ((int)(*(signed char *)((((((struct oB8_int *)(t0))->v)) + 0x0))) >= 0) {
                t72 = 0x1;
            }
        } else {
            (((struct o88_uint *)(t0))->v) = ((int)((int)((int)((int)(*(int *)0xC177D0C) / (int)0x258)) % (int)0x3));
            (((struct o8C_uint *)(t0))->v) = 0x0;
            t31 = (0x88 + t0);
            t32 = 0x0;
            for (;;) {
                if (((unsigned short)(*(short *)(((*(int *)((t0 + 0x18))) + 0x12))) & ((int)0x1 << (int)((((((struct o88_int *)(t0))->v)) << 2) + t32))) != 0) {
                    t31 = (*(signed char *)(((((*(int *)((t0 + 0x18))) + 0xD) + t32) + 0x0)));
                    t31 = ((short)t31 * (short)0x1C);
                    t31 = (t31 + 0xC177914);
                    t31 = (t31 + 0x1C);
                    *(unsigned int *)((((((((struct o8C_int *)(t0))->v)) << 2) + (0xB8 + t0)) + 0x0)) = t31;
                    t31 = 0xC8;
                    t31 = (t31 + t0);
                    *(unsigned int *)((((((((struct o8C_int *)(t0))->v)) << 2) + t31) + 0x0)) = 0x1;
                    (((struct o8C_uint *)(t0))->v) = (((((struct o8C_int *)(t0))->v)) + 0x1);
                }
                t32 = (t32 + 0x1);
                if ((int)t32 >= (int)0x4) {
                    break;
                }
            }
            if (((((struct o8C_int *)(t0))->v)) == 0) {
                (((struct oB8_uint *)(t0))->v) = 0xC177914;
                (((struct oBC_uint *)(t0))->v) = 0xC177914;
                (((struct o8C_uint *)(t0))->v) = 0x2;
                (((struct oC8_uint *)(t0))->v) = 0x1;
                (((struct oCC_uint *)(t0))->v) = 0x1;
            }
            t53 = (((struct o8C_int *)(t0))->v);
            (((struct o94_uint *)(t0))->v) = t53;
            (((struct o90_uint *)(t0))->v) = t53;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0xA8 + t0)) = *(struct mv3 *)((*(int *)((t0 + 0x18)))); }
            (((struct oB4_float *)(t0))->v) = (((*(float *)((((((((struct o88_int *)(t0))->v)) << 2) + ((*(int *)((t0 + 0x14))) + 0x8)) + 0x0))) + -2000.0f) * 5.88235307e-05f);
            if (((((struct oB4_float *)(t0))->v)) > 1.0f) {
                (((struct oB4_float *)(t0))->v) = 1.0f;
            }
            if (0.0f > ((((struct oB4_float *)(t0))->v))) {
                (((struct oB4_float *)(t0))->v) = 0.0f;
            }
            t62 = FUN_0c029b12((0xA8 + t0), 20.0f);
            *(unsigned int *)(((int)stk + 8)) = (*(int *)((0xC097028 + ((*(signed char *)(((*(int *)((t0 + 0x18))) + 0xC))) << 2))));
            *(unsigned int *)(((int)stk + 12)) = ((((struct o8C_int *)(t0))->v));
            *(unsigned int *)(((int)stk + 16)) = t62;
            *(float *)(((int)stk + 20)) = -1.0f;
            t72 = 0x0;
            if ((int)(*(signed char *)((((((struct oB8_int *)(t0))->v)) + 0x0))) >= 0) {
                t72 = 0x1;
            }
        }
        *(unsigned int *)(((int)stk + 24)) = t72;
        t77 = (FUN_0c061bcc((t0 + 0x1C), (((int)stk + 0) + 0x8)));
    }
    return t77;
}

float FUN_0c0443ac(int a4)
{
    int stk[6];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R7;
    register float F0;
    register float F1;
    register float F2;
    register float F3;
    register float F4;
    register float F14;
    register float F15;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register float w0_0;
    v0_1 = a4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((0x98 + v0_1)); }
    FUN_0c043706(v0_1);
    v0_2 = (((struct o84_int *)(v0_1))->v);
    calcCheck(v0_1);
    v0_3 = (((struct o84_int *)(v0_1))->v);
    v0_4 = ((v0_2 ^ v0_3));
    v0_0 = (v0_1);
    if (((v0_2 ^ v0_3) == 0)) goto L_C0443E8;
    v0_1 = (FUN_0c0435e2(v0_0, v0_4)) != 0;
    if (v0_1) goto L_C0443E8;
    L_C044514:;
    v0_2 = ((FUN_0c0436b8(v0_0)));
    L_C04460C:;
    return F0;
    L_C0443E8:;
    pcarRejoinLane(v0_0);
    v0_1 = (((struct o84_int *)(v0_0))->v);
    v0_2 = (v0_1);
    if (((v0_1 & 8) == 0)) goto L_C044424;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x8C + v0_0)) = *(struct mv3 *)((v0_0 + 0x14)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x98 + v0_0)) = *(struct mv3 *)((v0_0 + 0x20)); }
    w0_0 = FUN_0c073b40((v0_0 + 0x5C), (v0_0 + 0x44));
    (((struct o100_float *)(v0_0))->v) = w0_0;
    F15 = (w0_0);
    L_C044424:;
    v0_4 = (0xC073C40);
    if (!(((((((struct o84_int *)(v0_0))->v)) & 4) != 0))) goto L_C04455C;
    (((struct o9C_float *)(v0_0))->v) = (((((struct o9C_float *)(v0_0))->v)) - 0.0734999999f);
    FPUL_ = (0x3D96872B);
    if (((int)((((struct o110_int *)(v0_0))->v)) <= 0)) goto L_C044456;
    (((struct o110_uint *)(v0_0))->v) = (((((struct o110_int *)(v0_0))->v)) - 1);
    FUN_0c041298(v0_0);
    goto L_C044456;
    L_C04455C:;
    FUN_0c073360();
    nlRotateAZ((-(unsigned short)((((struct oA8_short *)(v0_0))->v))));
    nlRotateAX((-(unsigned short)((((struct oA4_short *)(v0_0))->v))));
    nlRotateAY((-(unsigned short)((((struct oA6_short *)(v0_0))->v))));
    FUN_0c072290((0x98 + v0_0), (((int)stk + 0) + 0xC));
    (((struct oCC_float *)(v0_0))->v) = (*(float *)(((int)stk + 20)));
    nlPopMatrix(0x1);
    FUN_0c0423c8(v0_0);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x14)) = *(struct mv3 *)((0x8C + v0_0)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x20)) = *(struct mv3 *)((0x98 + v0_0)); }
    FUN_0c073c40((((int)stk + 0) + 0xC), (v0_0 + 0x44), (((((struct o100_float *)(v0_0))->v)) - F15));
    nlAddVector((v0_0 + 0x5C), (((int)stk + 0) + 0xC));
    FUN_0c073c40((v0_0 + 0x5C), (v0_0 + 0x5C), 0.996999979f);
    GetRotVec4Ang((v0_0 + 0x44), (unsigned short)((((struct oA4_short *)(v0_0))->v)), (unsigned short)((((struct oA6_short *)(v0_0))->v)), (unsigned short)((((struct oA8_short *)(v0_0))->v)));
    (((struct o68_uint *)(v0_0))->v) = 0x0;
    v0_2 = (0x68);
    goto L_C04460C;
    L_C044456:;
    FUN_0c073c40((0x98 + v0_0), (0x98 + v0_0), 0.999800026f);
    nlAddVector((0x8C + v0_0), (0x98 + v0_0));
    v0_1 = FUN_0c029b12((0x8C + v0_0), 30.0f);
    v0_3 = *(int *)((v0_1 + 0x1C));
    v0_2 = (v0_3);
    v0_1 = (v0_1);
    if ((v0_3 == -1)) goto L_C04450C;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xEC + v0_0)) = *(struct mv3 *)((v0_1 + 0xC)); }
    (((struct o104_float *)(v0_0))->v) = ((((struct o18_float *)(v0_1))->v));
    if ((!(((((struct o104_float *)(v0_0))->v)) > ((((struct o90_float *)(v0_0))->v))))) goto L_C04451C;
    (((struct o90_float *)(v0_0))->v) = ((((struct o104_float *)(v0_0))->v));
    FUN_0c0415ba(v0_0);
    v0_1 = (((struct o110_int *)(v0_0))->v);
    (((struct o110_uint *)(v0_0))->v) = (int)((float)v0_1 + 5.0f);
    FPUL_ = ((int)((float)v0_1 + 5.0f));
    L_C04451C:;
    v0_2 = (0x110);
    v0_1 = (0xA);
    if (((int)((((struct o110_int *)(v0_0))->v)) <= (int)0xA)) goto L_C044528;
    *(unsigned int *)((v0_0 + v0_2)) = v0_1;
    L_C044528:;
    nlSubVector3op(((int)stk + 0), (0x98 + v0_0), ((int)stk + 0));
    (((struct oF8_float *)(v0_0))->v) = (((((struct oF8_float *)(v0_0))->v)) - ((((((struct o4_float *)(((int)stk + 0)))->v)) * (1.0f + 1.0f))));
    (((struct oF8_float *)(v0_0))->v) = (((((struct oF8_float *)(v0_0))->v)) * 0.800000012f);
    FUN_0c041a44(v0_0, ((int)stk + 0));
    goto L_C04455C;
    L_C04450C:;
    v0_1 = (FUN_0c0436f6(v0_0)) == 0;
    if (v0_1) goto L_C04451C;
    goto L_C044514;
}

int FUN_0c067898(int a4)
{
    int stk[11];
    register int t0;
    register float t8;
    register int t17;
    register int t23;
    register int t29;
    register int t37;
    register int t50;
    register int t62;
    register int t63;

    t0 = FUN_0c05f42e();
    (((struct o20_float *)(((int)stk + 0)))->v) = (FUN_0c073b40(0xC2B9CBC, 0xC17596C));
    (((struct o4_float *)((((int)stk + 0) + 0x20)))->v) = (FUN_0c073b40(0xC2B9CBC, 0xC17597C));
    (((struct o8_float *)((((int)stk + 0) + 0x20)))->v) = (FUN_0c073b40(0xC2B9CBC, 0xC17598C));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((((int)stk + 0) + 0x20)); }
    FUN_0c06e700(((int)stk + 0), (0xB0 + a4), *(Stk3 *)(((int)stk + 0)), -0.200000003f);
    nlAddVector(((int)stk + 0), (0xBC + a4));
    FUN_0c073c40((0xBC + a4), ((int)stk + 0), 0.800000012f);
    nlAddVector((0xB0 + a4), (0xBC + a4));
    (((struct oB8_float *)(a4))->v) = 0.0f;
    t8 = FUN_0c073c60((0xB0 + a4));
    if (t8 > 3.0f) {
        FUN_0c073c40((0xB0 + a4), (0xB0 + a4), (3.0f / t8));
    }
    if (0.00100000005f > t8) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0xB0 + a4)) = *(struct mv3 *)(0xC10D9BC); }
    }
    t17 = FUN_0c05d0d8(((((struct oB0_float *)(a4))->v)));
    if (t17 != 0) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0xB0 + a4)) = *(struct mv3 *)(0xC10D9BC); }
    }
    t23 = FUN_0c05d0d8(((((struct oB4_float *)(a4))->v)));
    if (t23 != 0) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0xB0 + a4)) = *(struct mv3 *)(0xC10D9BC); }
    }
    t29 = FUN_0c05d0d8(((((struct oB8_float *)(a4))->v)));
    if (t29 != 0) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0xB0 + a4)) = *(struct mv3 *)(0xC10D9BC); }
    }
    nlAddVector(t0, (0xB0 + a4));
    *(unsigned int *)(((int)stk + 12)) = (0xC8 + a4);
    *(unsigned int *)(((int)stk + 16)) = (0xCC + a4);
    *(unsigned int *)(((int)stk + 20)) = (int)(-(((((struct o8_float *)((((int)stk + 0) + 0x20)))->v)) * 2500.0f));
    *(unsigned int *)(((int)stk + 24)) = 0x14;
    *(unsigned int *)(((int)stk + 28)) = 0x55;
    FUN_0c067804((((int)stk + 0) + 0xC));
    t37 = *(int *)(((int)stk + 12));
    if ((int)(*(int *)((t37 + 0x0))) > (int)0xE38) {
        *(unsigned int *)((t37 + 0x0)) = 0xE38;
    } else {
        if ((int)(*(int *)((t37 + 0x0))) < (int)0xFFFFFC72) {
            *(unsigned int *)((t37 + 0x0)) = 0xFFFFFC72;
        }
    }
    *(unsigned int *)((t0 + 0x1C)) = ((*(int *)((t0 + 0x1C))) + (*(int *)(((*(int *)(((int)stk + 12))) + 0x0))));
    *(unsigned int *)(((int)stk + 12)) = (0xD0 + a4);
    *(unsigned int *)(((int)stk + 16)) = (0xD4 + a4);
    *(unsigned int *)(((int)stk + 20)) = (int)(-(((((struct o20_float *)(((int)stk + 0)))->v)) * 2000.0f));
    *(unsigned int *)(((int)stk + 24)) = 0xA;
    *(unsigned int *)(((int)stk + 28)) = 0x46;
    FUN_0c067804((((int)stk + 0) + 0xC));
    t50 = *(int *)(((int)stk + 12));
    if ((int)(*(int *)((t50 + 0x0))) > (int)0xAAA) {
        *(unsigned int *)((t50 + 0x0)) = 0xAAA;
    } else {
        if ((int)(*(int *)((t50 + 0x0))) < (int)0xFFFFF556) {
            *(unsigned int *)((t50 + 0x0)) = 0xFFFFF556;
        }
    }
    *(unsigned int *)((t0 + 0x20)) = ((*(int *)((t0 + 0x20))) + (*(int *)(((*(int *)(((int)stk + 12))) + 0x0))));
    *(unsigned int *)(((int)stk + 12)) = (0xD8 + a4);
    *(unsigned int *)(((int)stk + 16)) = (0xDC + a4);
    *(unsigned int *)(((int)stk + 20)) = (int)(((((struct o8_float *)((((int)stk + 0) + 0x20)))->v)) * 5000.0f);
    *(unsigned int *)(((int)stk + 24)) = 0xA;
    *(unsigned int *)(((int)stk + 28)) = 0x46;
    t62 = FUN_0c067804((((int)stk + 0) + 0xC));
    t63 = *(int *)(((int)stk + 12));
    if ((int)(*(int *)((t63 + 0x0))) > (int)0x1554) {
        *(unsigned int *)((t63 + 0x0)) = 0x1554;
    } else {
        if ((int)(*(int *)((t63 + 0x0))) < (int)0xFFFFEAAC) {
            *(unsigned int *)((t63 + 0x0)) = 0xFFFFEAAC;
        }
    }
    *(unsigned int *)((t0 + 0x2C)) = ((*(int *)((t0 + 0x2C))) + (*(int *)(((*(int *)(((int)stk + 12))) + 0x0))));
    return t62;
}

int PutColliWall(int a4)
{
    int stk[12];
    register float u9;
    register float u10;
    register int t83;
    register float u31;
    register float u56;
    register float u57;
    register float u58;
    register float u67;
    register float u68;
    register float u70;
    register float u72;
    register float u73;
    register float u76;
    register float u77;
    register float u78;
    register int t80;

    if ((*(int *)0xC12945C) != 0) {
        nlTriPutTextureInit(0xC274048, 0xFFFFFFFF, 0x0);
        *(int *)((int)stk + 20) = 0x4;
        *(int *)((int)stk + 16) = 0x0;
        *(int *)((int)stk + 12) = 0x0;
        *(int *)((int)stk + 8) = 0x0;
        *(int *)((int)stk + 4) = 0x0;
        *(int *)((int)stk + 0) = 0x0;
        FUN_0c075740(0xC274048, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x4, 0.5f, 0.5f, 0.0f, 5.0f, 1.0f, 0.0f, 0.0f, 0.0f);
        *(unsigned int *)0xC274068 = ((*(int *)0xC274068) | 0xC0);
        *(unsigned int *)0xC12945C = 0x0;
    }
    u9 = 0.0f;
    u10 = 0.699999988f;
    if (((*(int *)((a4 + 0x18))) & 1) != 0) {
        u9 = 0.699999988f;
        u10 = 0.0f;
    }
    FUN_0c075a00(0xC274048, 1.0f, u9, u10);
    *(float *)(((int)stk + 36)) = ((((struct o8_float *)(a4))->v));
    *(float *)(((int)stk + 40)) = ((((struct o18_float *)(a4))->v));
    *(float *)(((int)stk + 44)) = ((((struct oC_float *)(a4))->v));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 24)) = *(struct mv3 *)((((int)stk + 24) + 0xC)); }
    *(float *)(((int)stk + 28)) = ((((struct o14_float *)(a4))->v));
    FUN_0c078890(*(Stk3 *)(((int)stk + 24)), 3.0f);
    FUN_0c078810((((int)stk + 24) + 0xC), ((int)stk + 24), 0xFFFF0000);
    t83 = 0x1C;
    if (!(((((struct o1C_float *)(a4))->v)) > 0.0f)) {
    } else {
        *(float *)(((int)stk + 28)) = (*(float *)(((int)stk + 40)));
        *(float *)(((int)stk + 24)) = ((((struct o8_float *)((a4 + 0x20)))->v));
        *(float *)(((int)stk + 32)) = ((((struct oC_float *)((a4 + 0x20)))->v));
        FUN_0c078810((((int)stk + 24) + 0xC), ((int)stk + 24), 0xFFFF0000);
        *(float *)(((int)stk + 24)) = ((*(float *)(((int)stk + 36))) - ((((((struct o4_float *)(a4))->v)) * ((((struct o1C_float *)(a4))->v)))));
        u31 = (*(float *)(((int)stk + 44)));
        u31 = u31 + ((((struct o1C_float *)(a4))->v)) * (*(float *)((a4 + 0x0)));
        *(float *)(((int)stk + 32)) = u31;
        nlTriPutSetPoint(0xC274048, 0x0, (*(float *)(((int)stk + 36))), ((((struct o18_float *)(a4))->v)), (*(float *)(((int)stk + 44))), (*(float *)((a4 + 0x0))), 0.0f, ((((struct o4_float *)(a4))->v)), 0.0f, 0.0f);
        nlTriPutSetPoint(0xC274048, 0x1, (*(float *)(((int)stk + 36))), ((((struct o14_float *)(a4))->v)), (*(float *)(((int)stk + 44))), (*(float *)((a4 + 0x0))), 0.0f, ((((struct o4_float *)(a4))->v)), 0.0f, 0.0f);
        nlTriPutSetPoint(0xC274048, 0x2, (*(float *)(((int)stk + 24))), ((((struct o18_float *)(a4))->v)), (*(float *)(((int)stk + 32))), (*(float *)((a4 + 0x0))), 0.0f, ((((struct o4_float *)(a4))->v)), 0.0f, 0.0f);
        nlTriPutSetPoint(0xC274048, 0x3, (*(float *)(((int)stk + 24))), ((((struct o14_float *)(a4))->v)), (*(float *)(((int)stk + 32))), (*(float *)((a4 + 0x0))), 0.0f, ((((struct o4_float *)(a4))->v)), 0.0f, 0.0f);
        u56 = (((struct o14_float *)(a4))->v);
        u57 = (((struct o1C_float *)(a4))->v);
        u58 = (((struct o18_float *)(a4))->v);
        nlTriPutSetClipping(0xC274048, (((*(float *)(((int)stk + 36))) + (*(float *)(((int)stk + 24)))) * 0.5f), ((u56 + u58) * 0.5f), (((*(float *)(((int)stk + 44))) + (*(float *)(((int)stk + 32)))) * 0.5f), (((u57 + u56) - u58) * 0.5f));
        nlObjPutUseViewMatrix(0xC274048);
        nlAddVector((((int)stk + 24) + 0xC), ((int)stk + 24));
        FUN_0c073c40((((int)stk + 24) + 0xC), (((int)stk + 24) + 0xC), 0.5f);
        u67 = (((struct o18_float *)(a4))->v);
        u68 = (((struct o14_float *)(a4))->v);
        *(float *)(((int)stk + 28)) = ((u68 + u67) * 0.5f);
        *(float *)(((int)stk + 40)) = ((u68 + u67) * 0.5f);
        u70 = (((u57 + u56) - u58) * 0.5f);
        u72 = ((*(float *)((a4 + 0x0))) * u70);
        u73 = (*(float *)(((int)stk + 36)));
        u73 = u73 + 0.200000003f * u72;
        *(float *)(((int)stk + 24)) = u73;
        u76 = (((u57 + u56) - u58) * 0.5f);
        u77 = (((((struct o4_float *)(a4))->v)) * u76);
        u78 = (*(float *)(((int)stk + 44)));
        u78 = u78 + 0.200000003f * u77;
        *(float *)(((int)stk + 32)) = u78;
        t80 = 0xFF00FF00;
        if (((*(int *)((a4 + 0x14))) & 1) != 0) {
            t80 = 0xFF007F00;
        }
        t83 = (FUN_0c078810((((int)stk + 24) + 0xC), ((int)stk + 24), t80));
    }
    return t83;
}

int FUN_0c06d3f4(void)
{
    int stk[12];
    register float t3;
    register float t11;
    register float t12;
    register int t13;
    register float t15;
    register int t16;
    register int t19;
    register float t20;
    register int t21;
    register float t25;
    register int t28;
    register float u34;
    register int t45;
    register int t51;
    register int t46;

    nlSubVector3op((((int)stk + 0) + 0x24), 0xC177D38, 0xC177D44);
    nlSubVector3op((((int)stk + 0) + 0x18), 0xC2BB3B0, 0xC177D44);
    nlOuterProduct((((int)stk + 0) + 0x24), (((int)stk + 0) + 0x18), (((int)stk + 0) + 0xC));
    t3 = FUN_0c073c60((((int)stk + 0) + 0xC));
    if (0.00100000005f > t3) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0xC)) = *(struct mv3 *)(0xC10D9E0); }
    } else {
        FUN_0c073c40((((int)stk + 0) + 0xC), (((int)stk + 0) + 0xC), (1.0f / t3));
    }
    FUN_0c073e10((((int)stk + 0) + 0x24));
    t11 = FUN_0c073e10((((int)stk + 0) + 0x18));
    t12 = FUN_0c073b40((((int)stk + 0) + 0x24), (((int)stk + 0) + 0x18));
    t13 = FUN_0c070730(t12);
    nlOuterProduct((((int)stk + 0) + 0x18), (((int)stk + 0) + 0xC), ((int)stk + 0));
    t15 = FUN_0c073b40((((int)stk + 0) + 0x24), ((int)stk + 0));
    t16 = t13;
    if (0.0f > t15) {
        t16 = (-t13);
    }
    t19 = (int)((int)t16 / (int)(0x28 - ((((struct o8_int *)0xC2BB3D8)->v))));
    t20 = FUN_0c018cfc();
    t21 = (((struct o8_int *)0xC2BB3D8)->v);
    FUN_0c073360();
    nlRotateAxe((((int)stk + 0) + 0xC), t19);
    FUN_0c072290((((int)stk + 0) + 0x24), (((int)stk + 0) + 0x24));
    t25 = FUN_0c018cfc();
    FUN_0c073c40((((int)stk + 0) + 0x24), (((int)stk + 0) + 0x24), (t25 + ((t11 - t20) / (float)(0x28 - t21))));
    nlAddVector3op((((int)stk + 0) + 0x18), (((int)stk + 0) + 0x24), 0xC177D44);
    t28 = FUN_0c0297f4(0xC177D44, (((int)stk + 0) + 0x24), 0.0f);
    if ((*(int *)((t28 + 0x1C))) != -1) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x24)) = *(struct mv3 *)(t28); }
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x24)) = *(struct mv3 *)((((int)stk + 0) + 0x18)); }
    }
    FUN_0c018b1c(0x1);
    FUN_0c018b22((((int)stk + 0) + 0x24), 0x2);
    u34 = *(float *)0xC06D6A8;
    FUN_0c018c2a(u34, 0.0f);
    nlPopMatrix(0x1);
    nlSubVector3op((((int)stk + 0) + 0x24), 0xC2BB3BC, 0xC177D44);
    FUN_0c073c40((((int)stk + 0) + 0x24), (((int)stk + 0) + 0x24), (1.0f / (float)(0x28 - ((((struct o8_int *)0xC2BB3D8)->v)))));
    nlAddVector((((int)stk + 0) + 0x24), 0xC177D44);
    camSetTarget((((int)stk + 0) + 0x24), 0x2);
    FUN_0c018c8a(u34, 0.0f);
    t45 = (((struct o80_int *)((*(int *)(((*(int *)0xC13C358) + 0x0)))))->v);
    t51 = t45;
    if (t45 == 4) {
        t46 = (((struct o8_int *)0xC2BB3D8)->v);
        (((struct o8_uint *)0xC2BB3D8)->v) = (t46 + 0x1);
        if ((int)(t46 + 0x1) >= (int)0x28) {
            (((struct o0_uint *)0xC2BB3D8)->v) = (((((struct o0_int *)0xC2BB3D8)->v)) + 0x1);
        }
        t51 = (t46 + 0x1);
    }
    return t51;
}
