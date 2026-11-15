/* Straight-line functions with calls and guards (batch gen_gz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o10_float { char p[0x10]; float v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o104_float { char p[0x104]; float v; };
struct o110_uint { char p[0x110]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o18_ushort { char p[0x18]; unsigned short v; };
struct o1A_ushort { char p[0x1A]; unsigned short v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o2_ushort { char p[0x2]; unsigned short v; };
struct o20_float { char p[0x20]; float v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o2C_ushort { char p[0x2C]; unsigned short v; };
struct o30_uchar { char p[0x30]; unsigned char v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3C_uint { char p[0x3C]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o44_int { char p[0x44]; int v; };
struct o48_int { char p[0x48]; int v; };
struct o74_uint { char p[0x74]; unsigned int v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_short { char p[0x8]; short v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_int { char p[0x84]; int v; };
struct o84_uint { char p[0x84]; unsigned int v; };
struct o90_float { char p[0x90]; float v; };
struct oA4_uchar { char p[0xA4]; unsigned char v; };
struct oA6_short { char p[0xA6]; short v; };
struct oA6_ushort { char p[0xA6]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oC8_float { char p[0xC8]; float v; };
struct oD0_float { char p[0xD0]; float v; };
struct oD4_int { char p[0xD4]; int v; };
struct oD4_uint { char p[0xD4]; unsigned int v; };
int CarSel_SetFog(void);
int FUN_0c018b1c(int);
int FUN_0c018b22(int, int);
int FUN_0c018c18(int);
int FUN_0c018c2a(float, float);
int FUN_0c018c8a(float, float);
int FUN_0c0297f4(int, int, float);
int FUN_0c029c96(int, int, int);
int FUN_0c0329ba(int, int, int, int, int, int);
int FUN_0c03f9d0(int, int);
int FUN_0c041a44(int, int);
int FUN_0c0435e2(int, int);
int FUN_0c0438c0(int);
int FUN_0c046466(void);
int FUN_0c046fde(int, int, int);
int FUN_0c04f224(void);
int FUN_0c04f40a(void);
int FUN_0c04fbf0(void);
int FUN_0c057aec(int, int, int);
int FUN_0c05b77e(int, int, int, float);
int FUN_0c067494(int, int);
int FUN_0c06e700(int, int, float);
int FUN_0c070730(float);
int FUN_0c070e60(void);
float FUN_0c070e80(void);
int FUN_0c072230(int, int);
int FUN_0c072290(int, int);
int FUN_0c072ff0(void);
int FUN_0c073360(void);
float FUN_0c073b40(int, int);
int FUN_0c073c40(int, int, float);
float FUN_0c073c60(int);
float FUN_0c073c80(int);
int FUN_0c073e10(int);
int FUN_0c075740(int, int, int, int, int, int, int, int, int, int, float, float, float, float, float, float, float, float);
int FUN_0c078810(int, int, int);
int InsertRankRecord(int, int, int, int);
extern float _builtin_sqrtf(float);
int camSetTarget(int, int);
int memcpy(int, int, int, int);
int memset(int, int, int);
int nlAddVector(int, int);
int nlAddVector3op(int, int, int);
int nlCloseEvent(int);
float nlFloor(float);
int nlGetAverageVector(int, int, int, float, float);
int nlGetMatrix(int);
int nlGetMatrix33on44(int);
float nlLength(int, int);
int nlMatrixMode(int);
int nlMultiMatrix(int);
int nlObjPutUseViewMatrix(int);
int nlOuterProduct(int, int, int);
int nlPerspective(int, float, float, float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlQuickInvertMatrix(void);
int nlRotateAY(int);
int nlRotateAxe(int, int);
int nlScaleUnitVector(int, int, float);
int nlSetEventNext(int, int, int);
int nlSubVector(int, int);
int nlSubVector3op(int, int, int);
int nlTriPutSetClipping(int, float, float, float, float);
int nlTriPutSetPoint(int, int, float, float, float, float, float, float, float, float);
int nlTriPutTextureInit(int, int, int);
int nlUnitMatrix(void);
int pdGetPeripheral(int);
int set_event(int, int);
int FUN_0c03ea54(int a4, int a5, int a6, int a7);
float FUN_0c020e6c(int a4, int a5, int a6, int a7, int a8);
int FUN_0c04e6bc(void);
int FUN_0c02f4ca(int a4, int a5, int a6);
int FUN_0c043ccc(int a4, int a5, int a6);
int FUN_0c045bac(int a4, int a5);
int FUN_0c06d1c4(int a4);
int FUN_0c05b8ee(int a4, int a5, int a6, float f4);
int FUN_0c02cf88(int a4);
int FUN_0c027bfa(int a4);
int FUN_0c02e42a(int a4, int a5, int a6);
float ReflectColliWallBox(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7);
int FUN_0c043b00(int a4, int a5, int a6);
int FUN_0c065478(int a4, int a5);
int FUN_0c06dc4e(int a4);
int FUN_0c029b12(int a4, float f4);
int FUN_0c044f9a(int a4, int a5);

int FUN_0c03ea54(int a4, int a5, int a6, int a7)
{
    int stk[31];

    register int R1;
    register int R2;
    register int R3;
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
    v0_0 = a7;
    *(unsigned int *)(((int)stk + 0)) = 0x0;
    v0_1 = (0xC28DD0C);
    v0_2 = (0xC2A4FE0);
    v0_3 = (0x0);
    v0_4 = (0xC0800B0);
    v0_4 = (0x78);
    L_C03EA74:;
    v0_6 = *(int *)(((int)stk + 0));
    v0_5 = ((memset(((v0_2 + 0x8) + (v0_6 * 0x78)), 0xFFFFFFFF, 0x78)));
    v0_7 = ((v0_6 * 0x78));
    v0_6 = (0x0);
    L_C03EA8A:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x4C)) = *(struct mv3 *)((((0x10A4 + v0_1) + v0_7) + v0_6)); }
    if (((*(int *)(((int)stk + 76))) == -1)) goto L_C03EABE;
    *(unsigned char *)(((int)stk + 85)) = v0_3;
    v0_8 = (unsigned int)(v0_6 + 0xC) < (unsigned int)v0_4;
    v0_5 = ((InsertRankRecord(0x1, (((int)stk + 0) + 0x4C), ((v0_2 + 0x8) + v0_7), 0xA)));
    v0_6 = ((v0_6 + 0xC));
    if (v0_8) goto L_C03EA8A;
    L_C03EABE:;
    v0_5 = *(int *)(((int)stk + 0));
    *(unsigned int *)(((int)stk + 0)) = (v0_5 + 0x1);
    if (((int)(v0_5 + 0x1) < (int)0x4)) goto L_C03EA74;
    *(unsigned int *)(((int)stk + 0)) = v0_3;
    L_C03EACC:;
    v0_6 = *(int *)(((int)stk + 0));
    v0_5 = ((memset(((0x1E8 + v0_2) + (v0_6 * 0x78)), 0xFFFFFFFF, 0x78)));
    v0_7 = ((v0_6 * 0x78));
    v0_6 = (0x0);
    L_C03EAE2:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x4C)) = *(struct mv3 *)((((0x1284 + v0_1) + v0_7) + v0_6)); }
    if (((*(int *)(((int)stk + 76))) == -1)) goto L_C03EB16;
    *(unsigned char *)(((int)stk + 85)) = v0_3;
    v0_8 = (unsigned int)(v0_6 + 0xC) < (unsigned int)v0_4;
    v0_5 = ((InsertRankRecord(0x1, (((int)stk + 0) + 0x4C), ((0x1E8 + v0_2) + v0_7), 0xA)));
    v0_6 = ((v0_6 + 0xC));
    if (v0_8) goto L_C03EAE2;
    L_C03EB16:;
    v0_5 = *(int *)(((int)stk + 0));
    *(unsigned int *)(((int)stk + 0)) = (v0_5 + 0x1);
    if (((int)(v0_5 + 0x1) < (int)0x4)) goto L_C03EACC;
    *(unsigned int *)(((int)stk + 0)) = v0_3;
    *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 0) + 0x10) + 0x24);
    *(unsigned int *)(((int)stk + 12)) = (((int)stk + 0) + 0x10);
    v0_6 = ((((int)stk + 0) + 0x10));
    L_C03EB32:;
    v0_4 = *(int *)(((int)stk + 0));
    memset(((0x3C8 + v0_2) + (v0_4 * 0x3C)), 0xFFFFFFFF, 0x3C);
    memset(v0_6, 0xFFFFFFFF, 0x3C);
    v0_5 = *(int *)(((int)stk + 0));
    v0_8 = ((*(int *)(((int)stk + 12))));
    v0_7 = ((0xC09C834 + (((v0_5 << 1) + v0_5) << 2)));
    v0_9 = ((((v0_5 << 1) + v0_5) << 2));
    v0_4 = ((v0_4 * 0x3C));
    L_C03EB82:;
    if (((unsigned int)v0_8 < (unsigned int)(*(int *)(((int)stk + 4))))) goto L_C03EB7C;
    *(unsigned int *)(((int)stk + 8)) = (*(int *)((v0_9 + 0xC09C8FC)));
    v0_5 = (0xC09C8FC);
    v0_7 = (v0_3);
    L_C03EB90:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x4C)) = *(struct mv3 *)((((0x1464 + v0_1) + v0_4) + v0_7)); }
    if (((*(int *)(((int)stk + 76))) == -1)) goto L_C03EBC2;
    *(unsigned char *)(((int)stk + 85)) = v0_3;
    v0_8 = (unsigned int)(v0_7 + 0xC) < (unsigned int)0x3C;
    v0_5 = ((InsertRankRecord((*(int *)(((int)stk + 8))), (((int)stk + 0) + 0x4C), v0_6, 0x5)));
    v0_7 = ((v0_7 + 0xC));
    if (v0_8) goto L_C03EB90;
    L_C03EBC2:;
    v0_5 = ((memcpy(((0x3C8 + v0_2) + v0_4), v0_6, 0x3C, v0_0)));
    v0_9 = (0x0);
    L_C03EC0E:;
    if (!(((unsigned int)v0_9 < (unsigned int)0x3C))) goto L_C03EC14;
    *(unsigned char *)(((((0x1464 + v0_1) + v0_4) + v0_9) + 0x9)) = 0xFFFFFFFF;
    v0_8 = *(int *)(((((0x1464 + v0_1) + v0_4) + v0_9) + 0x0));
    v0_5 = (v0_8);
    v0_7 = ((((0x1464 + v0_1) + v0_4) + v0_9));
    if ((v0_8 == -1)) goto L_C03EC14;
    v0_8 = (v0_3);
    goto L_C03EBE8;
    L_C03EC14:;
    v0_4 = *(int *)(((int)stk + 0));
    *(unsigned int *)(((int)stk + 0)) = (v0_4 + 0x1);
    if (((int)(v0_4 + 0x1) < (int)0x10)) goto L_C03EB32;
    return v0_5;
    L_C03EBE8:;
    if (((*(int *)((v0_7 + 0x0))) != (*(int *)((((((v0_8 << 1) + v0_8) << 2) + v0_6) + 0x0))))) goto L_C03EC04;
    *(unsigned char *)((v0_7 + 0x9)) = (v0_8 + 0x1);
    v0_5 = ((v0_8 + 0x1));
    L_C03EC0C:;
    v0_9 = ((v0_9 + 0xC));
    goto L_C03EC0E;
    L_C03EC04:;
    v0_10 = (int)(v0_8 + 0x1) < (int)0x5;
    v0_8 = ((v0_8 + 0x1));
    if (v0_10) goto L_C03EBE8;
    goto L_C03EC0C;
    L_C03EB7C:;
    *(unsigned int *)((v0_8 + 0x0)) = (*(int *)((v0_7 + 0x0)));
    v0_8 = ((v0_8 + 0xC));
    v0_7 = ((v0_7 + 0x4));
    goto L_C03EB82;
}

float FUN_0c020e6c(int a4, int a5, int a6, int a7, int a8)
{
    int stk[9];

    register int R1;
    register int R2;
    register int R3;
    register float F2;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
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
    register float w0_2;
    v0_7 = a4;
    v0_4 = a5;
    v0_2 = a6;
    v0_0 = a7;
    *(unsigned int *)(((int)stk + 8)) = v0_4;
    *(unsigned int *)(((int)stk + 12)) = v0_0;
    v0_8 = (0x48);
    v0_0 = (v0_7);
    v0_1 = (a8);
    v0_2 = (v0_2);
    v0_3 = (0x0);
    if ((((((struct o0_int *)0xC27091C)->v)) != 0)) goto L_C020E9A;
    w0_0 = (0.0f);
    L_C02102A:;
    return w0_0;
    L_C020E9A:;
    if ((v0_1 == 0)) goto L_C020F30;
    v0_5 = (((struct o0_int *)0xC1EC71C)->v);
    v0_8 = (v0_5);
    v0_7 = (0x1);
    v0_4 = (0x2);
    if ((v0_5 == 0)) goto L_C020EB6;
    if ((v0_8 == 1)) goto L_C020F30;
    if (!((v0_8 == 2))) goto L_C020F32;
    if ((((((struct o8_int *)0xC1EC71C)->v)) != 8)) goto L_C020F30;
    v0_5 = *(int *)((v0_2 + 0x0));
    v0_8 = (v0_5);
    if ((v0_5 == 0)) goto L_C020EFA;
    if ((v0_8 == 1)) goto L_C020EFE;
    if ((v0_8 == 2)) goto L_C020EFE;
    goto L_C020F32;
    L_C020F32:;
    w0_0 = (((struct o0_float *)0xC021144)->v);
    *(unsigned int *)(((int)stk + 4)) = (*(int *)((v0_2 + 0x0)));
    *(unsigned int *)((v0_2 + 0x0)) = 0xFFFFFFFF;
    w0_0 = (w0_0);
    if (((*(int *)(((int)stk + 4))) == -1)) goto L_C020F8A;
    v0_7 = *(int *)(((int)stk + 4));
    v0_9 = (((struct o0_int *)0xC27091C)->v);
    v0_8 = *(int *)(((*(int *)((((((v0_7 << 1) + v0_7) << 2) + v0_9) + 0x4))) + 0x0));
    v0_4 = (v0_8);
    v0_5 = ((*(int *)((((((v0_7 << 1) + v0_7) << 2) + v0_9) + 0x0))));
    v0_6 = (v0_3);
    v0_7 = (((((v0_7 << 1) + v0_7) << 2) + v0_9));
    if (((int)v0_8 <= 0)) goto L_C020F8A;
    L_C020F60:;
    w0_2 = nlLength(v0_0, v0_5);
    w0_1 = (w0_2);
    if ((!(w0_0 > w0_2))) goto L_C020F82;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((*(int *)(((int)stk + 8)))) = *(struct mv3 *)(v0_5); }
    *(unsigned int *)((v0_2 + 0x0)) = (*(int *)(((int)stk + 4)));
    *(unsigned int *)(((*(int *)(((int)stk + 12))) + 0x0)) = v0_6;
    w0_0 = (w0_1);
    L_C020F82:;
    v0_7 = (int)(v0_6 + 0x1) < (int)v0_4;
    v0_5 = ((v0_5 + 0xC));
    v0_6 = ((v0_6 + 0x1));
    if (v0_7) goto L_C020F60;
    L_C020F8A:;
    *(unsigned int *)(((int)stk + 0)) = ((((struct o0_int *)0xC27091C)->v));
    *(unsigned int *)(((int)stk + 20)) = (((v0_1 == 0)) ? 1 : 0);
    v0_8 = ((((v0_1 == 0)) ? 1 : 0));
    v0_4 = (v0_3);
    L_C021020:;
    if (((int)v0_4 < (int)((((struct o4_int *)0xC27091C)->v)))) goto L_C020F9A;
    w0_0 = (w0_0);
    goto L_C02102A;
    L_C020F9A:;
    if ((v0_4 == (*(int *)(((int)stk + 4))))) goto L_C021018;
    if (((*(int *)(((*(int *)(((int)stk + 0))) + 0x0))) == 0)) goto L_C021018;
    v0_7 = *(int *)(((*(int *)(((*(int *)(((int)stk + 0))) + 0x4))) + 0x0));
    *(unsigned int *)(((int)stk + 16)) = v0_7;
    v0_5 = (v0_3);
    v0_6 = ((*(int *)(((*(int *)(((int)stk + 0))) + 0x0))));
    if (((int)v0_7 <= 0)) goto L_C021018;
    L_C020FBC:;
    if (((*(int *)(((int)stk + 20))) != 0)) goto L_C020FEE;
    if ((!(((((struct o10_float *)0xC021144)->v)) > (((((struct o4_float *)(v0_6))->v)) - ((((struct o4_float *)(v0_0))->v)))))) goto L_C020FD8;
    if ((v0_1 == 2)) goto L_C020FEE;
    L_C020FD8:;
    v0_8 = (0xC021158);
    if ((!((((((struct o4_float *)(v0_6))->v)) - ((((struct o4_float *)(v0_0))->v))) > ((((struct o14_float *)0xC021144)->v))))) goto L_C02100E;
    v0_8 = (v0_1);
    if ((v0_1 != 1)) goto L_C02100E;
    L_C020FEE:;
    w0_2 = nlLength(v0_0, v0_6);
    w0_1 = (w0_2);
    if ((!(w0_0 > w0_2))) goto L_C02100E;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((*(int *)(((int)stk + 8)))) = *(struct mv3 *)(v0_6); }
    *(unsigned int *)((v0_2 + 0x0)) = v0_4;
    *(unsigned int *)(((*(int *)(((int)stk + 12))) + 0x0)) = v0_5;
    w0_0 = (w0_1);
    L_C02100E:;
    v0_7 = (int)(v0_5 + 0x1) < (int)(*(int *)(((int)stk + 16)));
    v0_5 = ((v0_5 + 0x1));
    v0_6 = ((v0_6 + 0xC));
    if (v0_7) goto L_C020FBC;
    L_C021018:;
    *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0xC);
    v0_4 = ((v0_4 + 0x1));
    goto L_C021020;
    L_C020EFE:;
    v0_1 = (v0_7);
    goto L_C020F32;
    L_C020EFA:;
    v0_1 = (v0_4);
    goto L_C020F32;
    L_C020F30:;
    v0_1 = (v0_3);
    goto L_C020F32;
    L_C020EB6:;
    v0_1 = *(int *)((v0_2 + 0x0));
    v0_8 = (v0_1);
    if ((v0_1 == 19)) goto L_C020ED8;
    if ((v0_8 == 41)) goto L_C020ED8;
    if ((v0_8 == 3)) goto L_C020EFA;
    if ((v0_8 == 4)) goto L_C020EFA;
    if ((v0_8 == 18)) goto L_C020EFA;
    if ((v0_8 == 45)) goto L_C020EFA;
    if ((v0_8 == 46)) goto L_C020EFA;
    v0_1 = (v0_3);
    goto L_C020F32;
    L_C020ED8:;
    v0_1 = (v0_7);
    goto L_C020F32;
}

int FUN_0c04e6bc(void)
{
    register int t6;

    nlMatrixMode(0x3);
    nlUnitMatrix();
    nlPerspective(0x1D28, 1.33333337f, 0.300000012f, 300.0f);
    nlMatrixMode(0x1);
    (((struct o18_ushort *)0xC2B1D48)->v) = 0xEB00;
    (((struct o1A_ushort *)0xC2B1D48)->v) = 0xF200;
    (((struct o14_float *)0xC2B1D48)->v) = 0.800000012f;
    (((struct o24_uint *)0xC2B1D48)->v) = 0x8;
    FUN_0c04f224();
    CarSel_SetFog();
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC2B1D3C) = *(struct mv3 *)(0xC10C908); }
    (((struct o0_ushort *)0xC2B1D48)->v) = 0x0;
    (((struct o2_ushort *)0xC2B1D48)->v) = 0x0;
    (((struct o4_ushort *)0xC2B1D48)->v) = 0x0;
    t6 = 0xC2B1D1C;
    for (;;) {
        *(unsigned int *)((t6 + 0x0)) = 0x0;
        t6 = (t6 + 0x4);
        if ((unsigned int)t6 >= (unsigned int)0xC2B1D3C) {
            break;
        }
    }
    (((struct o10_uint *)0xC2B1CE4)->v) = 0x0;
    (((struct o14_uint *)0xC2B1CE4)->v) = 0x0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC2B1D04) = *(struct mv3 *)(0xC10C8FC); }
    (((struct o2C_ushort *)0xC2B1CE4)->v) = ((((struct o8_short *)0xC131E58)->v));
    (((struct o30_uint *)0xC2B1CE4)->v) = 0x19;
    (((struct o34_uint *)0xC2B1CE4)->v) = 0x19;
    (((struct o2C_uint *)0xC2B1D88)->v) = 0x0;
    *(float *)0xC131C7C = 0.0f;
    FUN_0c04fbf0();
    FUN_0c04f40a();
    (((struct o28_uint *)0xC2B1D48)->v) = 0x3BF;
    (((struct o18_uint *)0xC2B1CE4)->v) = 0x0;
    (((struct o2C_uint *)0xC2B1D48)->v) = 0x0;
    (((struct o8_uint *)0xC2B1D88)->v) = 0x2;
    (((struct o3C_uint *)0xC2B1D48)->v) = 0x0;
    (((struct o0_uint *)0xC2B1D88)->v) = 0x0;
    (((struct o30_uchar *)0xC2B1D48)->v) = 0x0;
    (((struct o34_uint *)0xC2B1D48)->v) = 0x0;
    (((struct o4_uint *)0xC2B1D88)->v) = 0x0;
    (((struct oC_uint *)0xC2B1D88)->v) = 0x0;
    (((struct o10_uint *)0xC2B1D88)->v) = 0x0;
    (((struct o14_uint *)0xC2B1D88)->v) = 0x0;
    (((struct o18_uint *)0xC2B1D88)->v) = 0x0;
    (((struct o1C_uint *)0xC2B1D88)->v) = 0x0;
    (((struct o20_uint *)0xC2B1D88)->v) = (int)(*(float *)0xC1EC800);
    (((struct o24_uint *)0xC2B1D88)->v) = 0x0;
    (((struct o28_uint *)0xC2B1D88)->v) = 0x0;
    (((struct o0_uint *)0xC2B1B9C)->v) = 0x0;
    (((struct o4_uint *)0xC2B1B9C)->v) = 0x0;
    (((struct o0_float *)0xC2B1CE4)->v) = 0.0f;
    (((struct o4_float *)0xC2B1CE4)->v) = 0.0f;
    (((struct o30_uint *)0xC2B1D88)->v) = 0x0;
    (((struct o0_uint *)0xC131E58)->v) = 0x1;
    return 0xC131E58;
}

int FUN_0c02f4ca(int a4, int a5, int a6)
{
    int stk[7];
    register int t0;
    register float t1;
    register float u2;
    register int t82;
    register int t7;
    register float u28;
    register int t33;
    register int t34;
    register int t39;
    register int t41;
    register int t42;
    register float u46;
    register float u48;
    register int t51;
    register float u55;
    register float u57;
    register int t60;
    register float u64;
    register float u66;
    register int t29;
    register int t30;
    register int t31;
    register int t32;
    register float u35;

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    t0 = (((struct o0_int *)0xC279048)->v);
    t1 = FUN_0c073c60(a5);
    u2 = (((struct o0_float *)0xC02F6B0)->v);
    t82 = 0xC02F6B4;
    if (((((struct o4_float *)0xC02F6B0)->v)) > (t1 * u2)) {
    } else {
        if ((int)a6 > (int)(0x5A - t0)) {
            if ((int)((a6 + 0x1) >> 1) > (int)(0x5A - t0)) {
                (((struct o0_uint *)0xC279048)->v) = 0x5A;
                t7 = (((struct o4_int *)0xC279048)->v);
                (((struct o4_uint *)0xC279048)->v) = (t7 + (((a6 + 0x1) >> 1) - (0x5A - t0)));
                if ((int)(t7 + (((a6 + 0x1) >> 1) - (0x5A - t0))) >= (int)0x5A) {
                    (((struct o4_uint *)0xC279048)->v) = (((((struct o4_int *)0xC279048)->v)) - 0x5A);
                }
            } else {
                (((struct o0_uint *)0xC279048)->v) = (((((struct o0_int *)0xC279048)->v)) + ((a6 + 0x1) >> 1));
            }
            t34 = ((a6 + 0x1) >> 1);
        } else {
            (((struct o0_uint *)0xC279048)->v) = (((((struct o0_int *)0xC279048)->v)) + a6);
            t34 = a6;
        }
        FUN_0c073360();
        FUN_0c072ff0();
        u28 = (((struct o20_float *)0xC02F6B0)->v);
        t33 = t32;
        for (;;) {
            if (t34 != 0) {
                t29 = ((((struct o8_int *)0xC279048)->v));
                t30 = (*(int *)(((int)stk + 8)));
                t31 = t29;
                t29 = (t29 << 2);
                t29 = (t29 << 1);
                t29 = (t29 + t31);
                t31 = 0xC07FF00;
                t29 = (t29 << 2);
                t29 = (t29 + 0xC2783A0);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(t29) = *(struct mv3 *)(t30); }
                t39 = (((struct o8_int *)0xC279048)->v);
                t31 = t39;
                t41 = ((((t39 << 2) << 1) + t31) << 2);
                t31 = 0xC;
                t31 = (t31 + (t41 + 0xC2783A0));
                t42 = t31;
                *(int *)((int)stk + 0) = t42;
                t30 = (*(int *)(((int)stk + 4)));
                u35 = (*(float *)((t30 + 0x0)));
                t30 = t42;
                u46 = (t1 * u2);
                u48 = u35;
                u48 = u48 + u46 * (((FUN_0c070e80()) + u28));
                u35 = u48;
                u35 = (u35 * (1.0f + 1.0f));
                *(float *)((t30 + 0x0)) = u35;
                t31 = ((((struct o8_int *)0xC279048)->v));
                t30 = t31;
                t31 = (t31 << 2);
                t31 = (t31 << 1);
                t31 = (t31 + t30);
                t31 = (t31 << 2);
                t30 = 0x10;
                t31 = (t31 + 0xC2783A0);
                t30 = (t30 + t31);
                t51 = t30;
                *(int *)((int)stk + 0) = t51;
                t29 = (*(int *)(((int)stk + 4)));
                u35 = ((((struct o4_float *)(t29))->v));
                t29 = t51;
                u55 = (t1 * u2);
                u57 = u35;
                u57 = u57 + u55 * (((FUN_0c070e80()) + u28));
                u35 = u57;
                u35 = (u35 * (1.0f + 1.0f));
                *(float *)((t29 + 0x0)) = u35;
                t31 = ((((struct o8_int *)0xC279048)->v));
                t30 = t31;
                t31 = (t31 << 2);
                t31 = (t31 << 1);
                t31 = (t31 + t30);
                t31 = (t31 << 2);
                t31 = (t31 + 0xC2783A0);
                t30 = 0x14;
                t30 = (t30 + t31);
                t60 = t30;
                *(int *)((int)stk + 0) = t60;
                t29 = (*(int *)(((int)stk + 4)));
                u35 = ((((struct o8_float *)(t29))->v));
                t29 = t60;
                u64 = (t1 * u2);
                u66 = u35;
                u66 = u66 + u64 * (((FUN_0c070e80()) + u28));
                u35 = u66;
                u35 = (u35 * (1.0f + 1.0f));
                *(float *)((t29 + 0x0)) = u35;
                t29 = 0x1E;
                t31 = ((((struct o8_int *)0xC279048)->v));
                t30 = t31;
                t31 = (t31 << 2);
                t31 = (t31 << 1);
                t31 = (t31 + t30);
                t31 = (t31 << 2);
                t31 = (t31 + 0xC2783A0);
                *(unsigned int *)((t31 + 0x18)) = t29;
                t31 = ((((struct o8_int *)0xC279048)->v));
                t29 = ((((struct o14_int *)0xC279048)->v));
                t30 = t31;
                t31 = (t31 << 2);
                t31 = (t31 << 1);
                t31 = (t31 + t30);
                t31 = (t31 << 2);
                t31 = (t31 + 0xC2783A0);
                *(unsigned int *)((t31 + 0x1C)) = t29;
                t31 = ((((struct o14_int *)0xC279048)->v));
                t31 = (t31 ^ 0x1);
                (((struct o14_uint *)0xC279048)->v) = t31;
                t31 = 0xC072230;
                t33 = (*(int *)(((int)stk + 8)));
                FUN_0c072230(t33, (((int)stk + 4) + 0xC));
                t30 = ((((struct o8_int *)0xC279048)->v));
                t31 = 0xC07FF00;
                t30 = (t30 << 2);
                t30 = (t30 << 2);
                t30 = (t30 << 1);
                t30 = (t30 + 0xC277840);
                *(unsigned int *)((t30 + 0x0)) = 0x1;
                t30 = ((int)stk + 4);
                t33 = ((((struct o8_int *)0xC279048)->v));
                t30 = (t30 + 0xC);
                t33 = (t33 << 2);
                t33 = (t33 << 2);
                t33 = (t33 << 1);
                t33 = (t33 + 0xC277840);
                *(unsigned int *)(((int)stk + 12)) = t33;
                t33 = (t33 + 0x8);
                t29 = t33;
                t29 = (t29 + 0xC);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(t29) = *(struct mv3 *)(t30); }
                t29 = t33;
                { struct mv3 { int w[3]; }; *(struct mv3 *)(t29) = *(struct mv3 *)(t30); }
                t29 = ((((struct o8_int *)0xC279048)->v));
                t31 = 0x5A;
                t29 = (t29 + 0x1);
                (((struct o8_uint *)0xC279048)->v) = t29;
                if ((int)t29 >= (int)t31) {
                    t29 = 0x0;
                    (((struct o8_uint *)0xC279048)->v) = t29;
                }
                t34 = (t34 - 1);
                continue;
            }
            break;
        }
        t82 = (nlPopMatrix(0x1));
    }
    return t82;
}

int FUN_0c043ccc(int a4, int a5, int a6)
{
    int stk[6];
    register int t0;
    register int t47;
    register int t1;
    register int t6;
    register int t22;
    register int t31;
    int t32;
    register float u33;
    int t23;

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 0)) = a6;
    t0 = set_event(0x12C, 0xC0443AC);
    t47 = t0;
    if (t0 != 0) {
        t1 = *(int *)0xC2A59C0;
        *(unsigned int *)0xC2A59C0 = (t1 + 0x1);
        (((struct o74_uint *)(t0))->v) = ((t1 + 0x1) - 1);
        *(unsigned int *)0xC2AB7EC = ((*(int *)0xC2AB7EC) + 0x1);
        (((struct o78_uint *)(t0))->v) = (*(int *)(((int)stk + 8)));
        (((struct o80_uint *)(t0))->v) = (*(int *)(((int)stk + 4)));
        if ((*(int *)(((int)stk + 0))) == 0) {
            t6 = (((struct o80_int *)(t0))->v);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x8C + t0)) = *(struct mv3 *)((*(int *)((((((t6 << 1) + t6) << 2) + (*(int *)0xC2ADA7C)) + 0x0)))); }
        } else {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x8C + t0)) = *(struct mv3 *)((*(int *)(((int)stk + 0)))); }
        }
        FUN_0c0438c0(t0);
        (((struct o84_uint *)(t0))->v) = (((((struct o84_int *)(t0))->v)) | 0x10);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0xC)) = *(struct mv3 *)(0xC0C3670); }
        *(float *)(((int)stk + 12)) = -50.0f;
        FUN_0c073360();
        nlRotateAY((unsigned short)((((struct oA6_short *)(t0))->v)));
        FUN_0c072230((((int)stk + 0) + 0xC), (((int)stk + 0) + 0xC));
        nlAddVector((0x8C + t0), (((int)stk + 0) + 0xC));
        nlAddVector((0xE0 + t0), (((int)stk + 0) + 0xC));
        nlPopMatrix(0x1);
        t22 = FUN_0c046466();
        if (((t22 & 3) != 0) && (t23 = (((struct o78_int *)(t0))->v), (int)t23 < (int)0xC)) {
            (((struct oA6_ushort *)(t0))->v) = (((((struct oA6_short *)(t0))->v)) + 0x2000);
        } else {
            (((struct o84_uint *)(t0))->v) = (((((struct o84_int *)(t0))->v)) | 0xC00);
        }
        (((struct oC8_float *)(t0))->v) = ((((struct o0_float *)0xC043EDC)->v));
        t31 = FUN_0c029b12((0x8C + t0), ((((struct o4_float *)0xC043EDC)->v)));
        t32 = *(int *)((t31 + 0x1C));
        if ((t32 != -1) && (t32 != 12)) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0xEC + t0)) = *(struct mv3 *)((t31 + 0xC)); }
            (((struct o110_uint *)(t0))->v) = 0xA;
            u33 = (((struct o18_float *)(t31))->v);
            (((struct o104_float *)(t0))->v) = u33;
            (((struct o90_float *)(t0))->v) = u33;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0xC)) = *(struct mv3 *)(0xC0C3670); }
            FUN_0c041a44(t0, (((int)stk + 0) + 0xC));
            (((struct oA4_uchar *)(t0))->v) = (*(signed char *)(((0x108 + t0) + 0x0)));
            *(unsigned char *)(((0xA4 + t0) + 0x1)) = (*(signed char *)(((0x108 + t0) + 0x1)));
            *(unsigned char *)(((0xA4 + t0) + 0x2)) = (*(signed char *)(((0x108 + t0) + 0x2)));
            *(unsigned char *)(((0xA4 + t0) + 0x3)) = (*(signed char *)(((0x108 + t0) + 0x3)));
            *(unsigned char *)(((0xA4 + t0) + 0x4)) = (*(signed char *)(((0x108 + t0) + 0x4)));
            *(unsigned char *)(((0xA4 + t0) + 0x5)) = (*(signed char *)(((0x108 + t0) + 0x5)));
            t47 = (FUN_0c0435e2(t0, ((((struct o84_int *)(t0))->v))));
        } else {
            t47 = nlCloseEvent(t0);
            *(unsigned int *)0xC2AB7EC = ((*(int *)0xC2AB7EC) - 1);
        }
    }
    return t47;
}

int FUN_0c045bac(int a4, int a5)
{
    int stk[4];
    register int t0;
    register int t59;
    register int t1;
    register int t5;
    register int t25;
    register int t31;
    register int t34;
    register float u15;

    *(unsigned int *)(((int)stk + 0)) = a5;
    t0 = nlSetEventNext(0x12C, 0xC045D66, a4);
    t59 = t0;
    if (t0 == 0) {
    } else {
        t1 = *(int *)0xC2A59C0;
        *(unsigned int *)0xC2A59C0 = (t1 + 0x1);
        (((struct o74_uint *)(t0))->v) = ((t1 + 0x1) - 1);
        *(unsigned int *)0xC2AB7EC = ((*(int *)0xC2AB7EC) + 0x1);
        (((struct o80_uint *)(t0))->v) = ((((struct o80_int *)(a4))->v));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x8C + t0)) = *(struct mv3 *)((0x8C + a4)); }
        (((struct oD4_uint *)(t0))->v) = ((((struct oD4_int *)(a4))->v));
        t5 = *(int *)(((int)stk + 0));
        if (((((struct o78_int *)(a4))->v)) == 19) {
            (((struct o78_uint *)(t0))->v) = ((((FUN_0c046466()) & 0x1) + ((((struct o78_int *)(a4))->v))) + 0x1);
            u15 = 132.0f;
        } else {
            (((struct o78_uint *)(t0))->v) = (((((struct o78_int *)(a4))->v)) + 0x1);
            u15 = 127.0f;
        }
        *(float *)(((int)stk + 12)) = (-((float)t5 * u15));
        *(float *)(((int)stk + 8)) = 0.0f;
        *(float *)(((int)stk + 4)) = 0.0f;
        FUN_0c073360();
        nlRotateAY((unsigned short)((((struct oA6_short *)(a4))->v)));
        FUN_0c072290((((int)stk + 0) + 0x4), (((int)stk + 0) + 0x4));
        nlAddVector((0x8C + t0), (((int)stk + 0) + 0x4));
        nlPopMatrix(0x1);
        FUN_0c0438c0(t0);
        if (((((struct o80_int *)(t0))->v)) == 0) {
            t25 = FUN_0c029b12((0x8C + t0), 30.0f);
            if ((*(int *)((t25 + 0x1C))) != -1) {
                (((struct o90_float *)(t0))->v) = (((((struct o18_float *)(t25))->v)) + 1.0f);
            }
        } else {
            t31 = (((struct o80_int *)(t0))->v);
            t34 = (((struct oD4_int *)(t0))->v);
            (((struct o90_float *)(t0))->v) = (((((struct o4_float *)(((*(int *)((((((t31 << 1) + t31) << 2) + (*(int *)0xC2ADA7C)) + 0x0))) + (((t34 << 1) + t34) << 2))))->v)) + 1.0f);
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x98 + t0)) = *(struct mv3 *)((0x98 + a4)); }
        (((struct oA4_uchar *)(t0))->v) = (*(signed char *)(((0xA4 + a4) + 0x0)));
        *(unsigned char *)(((0xA4 + t0) + 0x1)) = (*(signed char *)(((0xA4 + a4) + 0x1)));
        *(unsigned char *)(((0xA4 + t0) + 0x2)) = (*(signed char *)(((0xA4 + a4) + 0x2)));
        *(unsigned char *)(((0xA4 + t0) + 0x3)) = (*(signed char *)(((0xA4 + a4) + 0x3)));
        *(unsigned char *)(((0xA4 + t0) + 0x4)) = (*(signed char *)(((0xA4 + a4) + 0x4)));
        *(unsigned char *)(((0xA4 + t0) + 0x5)) = (*(signed char *)(((0xA4 + a4) + 0x5)));
        FUN_0c03f9d0(((((struct o80_int *)(t0))->v)), ((((struct oD4_int *)(t0))->v)));
        FUN_0c03f9d0(((((struct o80_int *)(t0))->v)), (((((struct oD4_int *)(t0))->v)) + 0x1));
        t59 = (FUN_0c0435e2(t0, ((((struct o84_int *)(t0))->v))));
    }
    return t59;
}

int FUN_0c06d1c4(int a4)
{
    int stk[9];
    register int t42;
    register float t8;
    register float u10;
    register int t16;
    register int t31;

    t42 = 0x80;
    if ((int)((((struct o80_int *)((*(int *)(((*(int *)0xC13C358) + 0x0)))))->v)) <= 0) {
    } else {
        FUN_0c018b1c(0x1);
        nlPushMatrix(0xC17596C);
        nlSubVector3op((((int)stk + 0) + 0x18), ((*(int *)(((*(int *)0xC13C358) + 0x0))) + 0xE8), 0xC17599C);
        t8 = FUN_0c073b40((((int)stk + 0) + 0x18), 0xC17596C);
        if (t8 > 0.0f) {
            (((struct oC_uint *)0xC2BB3D8)->v) = 0x1;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x18)) = *(struct mv3 *)(0xC112A84); }
        } else {
            (((struct oC_uint *)0xC2BB3D8)->v) = 0x0;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x18)) = *(struct mv3 *)(0xC112A84); }
            u10 = (*(float *)(((int)stk + 24)));
            u10 *= -1.0f;
            *(float *)(((int)stk + 24)) = u10;
        }
        FUN_0c072230((((int)stk + 0) + 0x18), (((int)stk + 0) + 0x18));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0xC)) = *(struct mv3 *)(0xC10D9BC); }
        t16 = 0x0;
        for (;;) {
            if ((int)t16 >= (int)(*(int *)(((*(int *)0xC13C358) + 0x4)))) {
                break;
            }
            nlAddVector((((int)stk + 0) + 0xC), (((*(int *)(((*(int *)0xC13C358) + 0x0))) + (t16 << 8)) + 0xE8));
            t16 = (t16 + 0x1);
        }
        FUN_0c073c40((((int)stk + 0) + 0xC), (((int)stk + 0) + 0xC), (1.0f / (float)(*(int *)(((*(int *)0xC13C358) + 0x4)))));
        *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) + ((((struct o0_float *)0xC06D3C0)->v)));
        camSetTarget((((int)stk + 0) + 0xC), 0x2);
        FUN_0c018c8a(((((struct o8_float *)0xC06D3C0)->v)), 0.0f);
        nlSubVector3op(((int)stk + 0), (((int)stk + 0) + 0x18), (((int)stk + 0) + 0xC));
        t31 = FUN_0c0297f4((((int)stk + 0) + 0xC), ((int)stk + 0), 0.0f);
        if ((*(int *)((t31 + 0x1C))) != -1) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x18)) = *(struct mv3 *)(t31); }
        }
        FUN_0c018b22((((int)stk + 0) + 0x18), 0x2);
        FUN_0c018c2a(((((struct o1C_float *)0xC06D3C0)->v)), 0.0f);
        t42 = nlPopMatrix(0x1);
        (((struct o0_uint *)0xC2BB3D8)->v) = (((((struct o0_int *)0xC2BB3D8)->v)) + 0x1);
    }
    return t42;
}

int FUN_0c05b8ee(int a4, int a5, int a6, float f4)
{
    int stk[6];
    register float t2;
    register float t10;
    register int t11;
    register float t14;
    register int t15;
    register float t19;
    register int t20;
    register float t21;
    register int t22;
    register float u7;
    float s1;

    FUN_0c073360();
    nlOuterProduct((a4 + 0x20), (a5 + 0x20), (((int)stk + 0) + 0xC));
    t2 = FUN_0c073c80((((int)stk + 0) + 0xC));
    if (9.99999975e-06f > t2) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0xC)) = *(struct mv3 *)((a4 + 0x10)); }
        u7 = t2;
    } else {
        s1 = _builtin_sqrtf(t2);
        FUN_0c073c40((((int)stk + 0) + 0xC), (((int)stk + 0) + 0xC), (1.0f / s1));
        u7 = s1;
    }
    t10 = FUN_0c073b40((a4 + 0x20), (a5 + 0x20));
    t11 = FUN_0c070730(t10);
    nlOuterProduct((a5 + 0x20), (((int)stk + 0) + 0xC), ((int)stk + 0));
    FUN_0c073e10(((int)stk + 0));
    t14 = FUN_0c073b40((a4 + 0x20), ((int)stk + 0));
    t15 = t11;
    if (0.0f > t14) {
        t15 = (-t11);
    }
    nlRotateAxe((((int)stk + 0) + 0xC), t15);
    FUN_0c072290((a4 + 0x10), ((int)stk + 0));
    t19 = FUN_0c073b40((a5 + 0x10), ((int)stk + 0));
    t20 = FUN_0c070730(t19);
    t21 = FUN_0c073b40(a5, ((int)stk + 0));
    t22 = t20;
    if (0.0f > t21) {
        t22 = (-t20);
    }
    nlUnitMatrix();
    nlRotateAxe((a5 + 0x20), (int)((float)t22 * f4));
    nlRotateAxe((((int)stk + 0) + 0xC), (int)((float)t15 * f4));
    nlMultiMatrix(a4);
    nlGetMatrix33on44(a6);
    nlGetAverageVector((a4 + 0x30), (a5 + 0x30), (a6 + 0x30), (1.0f - f4), f4);
    (((struct o2C_float *)(a6))->v) = 0.0f;
    (((struct o1C_float *)(a6))->v) = 0.0f;
    (((struct oC_float *)(a6))->v) = 0.0f;
    (((struct o3C_float *)(a6))->v) = 1.0f;
    return (nlPopMatrix(0x1));
}


int FUN_0c027bfa(int a4)
{

    int R0;
    register int R1;
    register int R2;
    register int R3;
    register int R8;
    register int R9;
    register int R10;
    register int R12;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    v0_2 = a4;
    v0_2 = ((((struct oC_int *)0xC270D04)->v)) == 0;
    v0_1 = (0xC270BBC);
    v0_0 = (0xC270D10);
    v0_4 = ((pdGetPeripheral(0x6)));
    if (v0_2) goto L_C027C16;
    L_C027D56:;
    if (((*(int *)((v0_0 + 0x0))) != 38)) goto L_C027D70;
    FUN_0c0329ba(0x0, 0xC09D868, v0_1, 0x140, 0x0, 0x0);
    L_C027D70:;
    if (((int)(*(int *)((v0_0 + 0x0))) <= 0)) goto L_C027D88;
    v0_1 = *(int *)((v0_0 + 0x0));
    *(unsigned int *)((v0_0 + 0x0)) = (v0_1 - 1);
    if (((v0_1 - 1) != 0)) goto L_C027D88;
    (((struct o0_uint *)0xC270D04)->v) = 0x0;
    L_C027D88:;
    return 0x0;
    L_C027C16:;
    v0_2 = (0xC270D08);
    v0_3 = (0x8);
    L_C027C22:;
    if (((int)(*(int *)((v0_2 + 0x0))) >= (int)v0_3)) goto L_C027C3C;
    v0_5 = *(int *)((v0_2 + 0x0));
    if (!(((*(int *)((((((v0_5 << 2) + v0_5) << 2) << 1) + 0xC270BE0))) == 0))) goto L_C027C3C;
    *(unsigned int *)((v0_2 + 0x0)) = ((*(int *)((v0_2 + 0x0))) + 0x1);
    goto L_C027C22;
    L_C027C3C:;
    v0_6 = *(int *)((v0_4 + 0x10));
    R0 = (v0_6);
    v0_5 = (0x10);
    if (((v0_6 & 32) == 0)) goto L_C027C7E;
    v0_4 = *(int *)((v0_2 + 0x0));
    *(unsigned int *)((v0_2 + 0x0)) = (v0_4 + 0x1);
    if (((int)(v0_4 + 0x1) < (int)v0_5)) goto L_C027C5C;
    *(unsigned int *)((v0_2 + 0x0)) = 0x0;
    L_C027C5C:;
    if (((int)(*(int *)((v0_2 + 0x0))) < (int)v0_3)) goto L_C027C66;
    goto L_C027D56;
    L_C027C66:;
    v0_4 = *(int *)((v0_2 + 0x0));
    if (((*(int *)((((((v0_4 << 2) + v0_4) << 2) << 1) + 0xC270BE0))) == 0)) goto L_C027C56;
    goto L_C027D56;
    L_C027C56:;
    *(unsigned int *)((v0_2 + 0x0)) = ((*(int *)((v0_2 + 0x0))) + 0x1);
    goto L_C027C5C;
    L_C027C7E:;
    if (((v0_5 & R0) == 0)) goto L_C027CBE;
    *(unsigned int *)((v0_2 + 0x0)) = ((*(int *)((v0_2 + 0x0))) - 1);
    L_C027C90:;
    if (((int)(*(int *)((v0_2 + 0x0))) < 0)) goto L_C027CB2;
    if (((int)(*(int *)((v0_2 + 0x0))) >= (int)0x8)) goto L_C027CB2;
    v0_3 = *(int *)((v0_2 + 0x0));
    if (!(((*(int *)((0xC270BE0 + ((((v0_3 << 2) + v0_3) << 2) << 1)))) == 0))) goto L_C027CB2;
    *(unsigned int *)((v0_2 + 0x0)) = ((*(int *)((v0_2 + 0x0))) - 1);
    goto L_C027C90;
    L_C027CB2:;
    if (((int)(*(int *)((v0_2 + 0x0))) >= 0)) goto L_C027D56;
    *(unsigned int *)((v0_2 + 0x0)) = 0xF;
    goto L_C027D56;
    L_C027CBE:;
    v0_4 = *(int *)((v0_4 + 0x10));
    R0 = (v0_4);
    if (((v0_4 & 4) == 0)) goto L_C027D56;
    v0_6 = *(int *)((v0_2 + 0x0));
    v0_4 = (v0_6);
    v0_5 = (0xC270B70);
    if (((int)v0_6 >= (int)v0_3)) goto L_C027D20;
    { struct mv9 { int w[9]; }; *(struct mv9 *)(v0_5) = *(struct mv9 *)((((((v0_4 << 2) + v0_4) << 2) << 1) + v0_1)); }
    { struct mv9 { int w[9]; }; *(struct mv9 *)(0xC270B94) = *(struct mv9 *)(v0_5); }
    L_C027D4C:;
    *(unsigned int *)((v0_0 + 0x0)) = 0x28;
    (((struct o8_uint *)0xC270D04)->v) = (*(int *)((v0_2 + 0x0)));
    goto L_C027D56;
    L_C027D20:;
    { struct mv9 { int w[9]; }; *(struct mv9 *)(((((((v0_4 - 8) << 2) + (v0_4 - 8)) << 2) << 1) + v0_1)) = *(struct mv9 *)(v0_5); }
    v0_3 = *(int *)((v0_2 + 0x0));
    *(unsigned int *)((((((((v0_3 - 8) << 2) + (v0_3 - 8)) << 2) << 1) + v0_1) + 0x24)) = 0x1;
    goto L_C027D4C;
}

int FUN_0c02e42a(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t3;
    register float u0;
    register float u1;

    t0 = 0xC02E0D6;
    if (a6 == 5) {
        t0 = 0xC02E380;
    }
    t1 = set_event(0x3C, t0);
    t0 = t1;
    if (t1 == 0) {
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x14)) = *(struct mv3 *)(a4); }
        (((struct o18_float *)(t1))->v) = (((((struct o18_float *)(t1))->v)) - (1.0f + 1.0f));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x20)) = *(struct mv3 *)(a5); }
        u0 = 0.200000003f;
        u0 = u0 + 0.200000003f * (FUN_0c070e80());
        (((struct o2C_float *)(t1))->v) = u0;
        *(unsigned int *)((t1 + 0x34)) = ((FUN_0c070e60()) & 0x3);
        *(unsigned int *)((t1 + 0x30)) = 0x1E;
        *(unsigned int *)((t1 + 0x38)) = a6;
        if (a6 != 1) {
            if (a6 != 2) {
                if (a6 != 3) {
                    if (a6 != 4) {
                        t0 = a6;
                        if (a6 != 5) {
                        } else {
                            u0 = FUN_0c073c60(a5);
                            (((struct o20_float *)(t1))->v) = (((((struct o20_float *)(t1))->v)) + ((FUN_0c070e80()) + -0.5f));
                            u1 = (FUN_0c070e80());
                            u1 = u1 + 0.100000001f * ((u0 + -0.400000006f));
                            (((struct o24_float *)(t1))->v) = (((((struct o24_float *)(t1))->v)) + (u1 + 0.300000012f));
                            (((struct o28_float *)(t1))->v) = (((((struct o28_float *)(t1))->v)) + ((FUN_0c070e80()) + -0.5f));
                            *(unsigned int *)((t1 + 0x30)) = 0x14;
                            t0 = (FUN_0c057aec((unsigned char)(*(signed char *)0xC1EC784), 0x1000, 0x2));
                        }
                        t3 = t0;
                    } else {
                        (((struct o2C_float *)(t1))->v) = (((((struct o2C_float *)(t1))->v)) * 1.60000002f);
                        *(unsigned int *)((t1 + 0x30)) = 0x14;
                        t3 = 0x2C;
                    }
                    t0 = t3;
                } else {
                    (((struct o2C_float *)(t1))->v) = (((((struct o2C_float *)(t1))->v)) * 3.0f);
                    *(unsigned int *)((t1 + 0x30)) = 0x14;
                    t0 = 0x2C;
                }
                t3 = t0;
            } else {
                (((struct o2C_float *)(t1))->v) = (((((struct o2C_float *)(t1))->v)) * (1.0f + 1.0f));
                t3 = (FUN_0c057aec((unsigned char)(*(signed char *)0xC1EC784), 0x1000, 0x1));
            }
            t0 = t3;
        } else {
            (((struct o2C_float *)(t1))->v) = (((((struct o2C_float *)(t1))->v)) * 1.5f);
            t0 = (FUN_0c057aec((unsigned char)(*(signed char *)0xC1EC784), 0x1000, 0x0));
        }
    }
    return t0;
}


int FUN_0c043b00(int a4, int a5, int a6)
{
    register int t0;
    int t1;
    register int t2;
    register float u0;
    register float u1;

    t0 = set_event(0x12C, 0xC0440A4);
    if (t0 == 0) {
        return t0;
    }
    t1 = *(int *)0xC2A59C0;
    *(unsigned int *)0xC2A59C0 = (t1 + 0x1);
    (((struct o74_uint *)(t0))->v) = ((t1 + 0x1) - 1);
    *(unsigned int *)0xC2AB7EC = ((*(int *)0xC2AB7EC) + 0x1);
    (((struct o78_uint *)(t0))->v) = a4;
    t1 = 0x0;
    if ((int)a4 < (int)0xF) {
        t2 = FUN_0c046466();
        t1 = 0x0;
        if ((t2 & 0xF) == 0) {
            t1 = 0x1;
        }
        if (t1 != 0) {
            (((struct o78_uint *)(t0))->v) = 0x0;
        }
    }
    (((struct o80_uint *)(t0))->v) = a5;
    if (a6 == 0) {
        t2 = (((struct o80_int *)(t0))->v);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x8C + t0)) = *(struct mv3 *)((*(int *)((((((t2 << 1) + t2) << 2) + (*(int *)0xC2ADA7C)) + 0x0)))); }
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x8C + t0)) = *(struct mv3 *)(a6); }
    }
    FUN_0c0438c0(t0);
    u0 = 0.0599999987f;
    u0 = u0 + 0.00999999978f * ((1000.0f / ((((struct oB4_float *)(t0))->v))));
    (((struct oD0_float *)(t0))->v) = u0;
    if (t1 != 0) {
        (((struct o84_uint *)(t0))->v) = (((((struct o84_int *)(t0))->v)) | 0x2);
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x98 + t0)) = *(struct mv3 *)((0xE0 + t0)); }
    nlSubVector((0x98 + t0), (0x8C + t0));
    t1 = (((struct o80_int *)(t0))->v);
    t2 = *(int *)0xC2ADA7C;
    u0 = *(float *)((((0xF & (*(int *)(((*(int *)((((((t1 << 1) + t1) << 2) + t2) + 0x8))) + 0x0)))) << 2) + 0xC0F3AD4));
    u1 = u0;
    if ((int)((((struct oD4_int *)(t0))->v)) > (int)((*(int *)(((*(int *)((((((t1 << 1) + t1) << 2) + t2) + 0x4))) + 0x0))) - 4)) {
        u1 = (u0 * 0.300000012f);
    }
    nlScaleUnitVector((0x98 + t0), (0x98 + t0), (u1 * 0.699999988f));
    FUN_0c03f9d0(((((struct o80_int *)(t0))->v)), ((((struct oD4_int *)(t0))->v)));
    FUN_0c0435e2(t0, ((((struct o84_int *)(t0))->v)));
    t1 = (((struct o78_int *)(t0))->v);
    if ((t1 != 19) && (t1 != 17)) {
        return t1;
    }
    return FUN_0c045bac(t0, 0x1);
}

int FUN_0c065478(int a4, int a5)
{
    int stk[17];
    register float t12;
    register int t13;
    register float u14;
    register float u15;
    register float t16;
    register int t17;
    register int t41;
    int t34;
    register int t35;

    *(unsigned int *)(((int)stk + 0)) = a4;
    FUN_0c067494(a5, 0x1);
    { struct mv16 { int w[16]; }; *(struct mv16 *)((((int)stk + 0) + 0x4)) = *(struct mv16 *)(0xC147388); }
    nlPushMatrix(0xC17596C);
    if ((int)(*(int *)0xC175C80) < (int)0x10) {
        nlRotateAY(0x8000);
    }
    nlGetMatrix33on44((((int)stk + 0) + 0x4));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x34)) = *(struct mv3 *)((0xE8 + a5)); }
    nlPopMatrix(0x1);
    if (((*(signed char *)(((a5 + 0x3F) + 0x0))) & 32) != 0) {
        t12 = FUN_0c073b40((a5 + 0x40), (((int)stk + 0) + 0x4));
        t13 = FUN_0c070730(t12);
        u14 = (((struct o20_float *)(a5))->v);
        u15 = (((struct o1C_float *)(a5))->v);
        t16 = FUN_0c073b40((a5 + 0x40), (((int)stk + 0) + 0x24));
        t17 = (int)(((float)t13 * u14) / ((-u15) + 1.0f));
        if (0.0f > t16) {
            t17 = (-(int)(((float)t13 * u14) / ((-u15) + 1.0f)));
        }
        FUN_0c073360();
        nlRotateAY(t17);
        nlMultiMatrix((a5 + 0x40));
        nlGetMatrix33on44((a5 + 0x40));
        nlPopMatrix(0x1);
        *(unsigned int *)(((int)stk + 0)) = (a5 + 0x70);
        t41 = (FUN_0c05b77e((a5 + 0x70), (((int)stk + 0) + 0x34), (a5 + 0x70), (((((struct o20_float *)(a5))->v)) / ((-((((struct o1C_float *)(a5))->v))) + 1.0f))));
    } else {
        nlPushMatrix(0xC17596C);
        nlQuickInvertMatrix();
        nlMultiMatrix((((int)stk + 0) + 0x4));
        nlGetMatrix((a5 + 0x40));
        nlPopMatrix(0x1);
        if (((int)(*(int *)(((*(int *)(((int)stk + 0))) + 0x8))) > (int)0x1) && (t34 = *(int *)(((int)stk + 0)), t35 = *(int *)((t34 + 0x14)), t35 == 0)) {
            (((struct o80_uint *)(a5))->v) = (((((struct o80_int *)(a5))->v)) + 0x1);
            (((struct o8_float *)(a5))->v) = 0.0f;
            t41 = 0x8;
        } else {
            (((struct o80_uint *)(a5))->v) = 0x4;
            t41 = 0x80;
        }
    }
    return t41;
}

int FUN_0c06dc4e(int a4)
{
    int stk[7];
    register int t41;
    register float u5;
    register float u17;
    register float u34;

    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x10)) = *(struct mv3 *)(0xC17599C); }
    if (((*(signed char *)((a4 + 0xFE))) & 2) != 0) {
        u5 = ((((struct o0_float *)0xC112B04)->v));
    } else {
        u5 = (-((((struct o0_float *)0xC112B04)->v)));
    }
    FUN_0c06e700((((int)stk + 0) + 0x10), 0xC17596C, u5);
    *(unsigned int *)(((int)stk + 0)) = 0xC112B04;
    FUN_0c06e700((((int)stk + 0) + 0x10), 0xC17597C, ((((struct o4_float *)0xC112B04)->v)));
    FUN_0c06e700((((int)stk + 0) + 0x10), 0xC17598C, ((((struct o8_float *)((*(int *)(((int)stk + 0)))))->v)));
    FUN_0c018b22((((int)stk + 0) + 0x10), 0x0);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x4)) = *(struct mv3 *)(0xC17599C); }
    if (((*(signed char *)((a4 + 0xFE))) & 2) != 0) {
        u17 = ((((struct oC_float *)0xC112B04)->v));
    } else {
        u17 = (-((((struct oC_float *)0xC112B04)->v)));
    }
    FUN_0c06e700((((int)stk + 0) + 0x4), 0xC17596C, u17);
    *(unsigned int *)(((int)stk + 0)) = 0xC112B10;
    FUN_0c06e700((((int)stk + 0) + 0x4), 0xC17597C, ((((struct o10_float *)0xC112B04)->v)));
    FUN_0c06e700((((int)stk + 0) + 0x4), 0xC17598C, ((((struct o8_float *)((*(int *)(((int)stk + 0)))))->v)));
    nlSubVector((((int)stk + 0) + 0x4), (((int)stk + 0) + 0x10));
    FUN_0c073c40((((int)stk + 0) + 0x4), (((int)stk + 0) + 0x4), 0.00833333377f);
    FUN_0c018c18((((int)stk + 0) + 0x4));
    FUN_0c018c2a(0.0f, 1.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x10)) = *(struct mv3 *)(0xC17599C); }
    if (((*(signed char *)((a4 + 0xFE))) & 2) != 0) {
        u34 = ((((struct o18_float *)0xC112B04)->v));
    } else {
        u34 = (-((((struct o18_float *)0xC112B04)->v)));
    }
    FUN_0c06e700((((int)stk + 0) + 0x10), 0xC17596C, u34);
    FUN_0c06e700((((int)stk + 0) + 0x10), 0xC17597C, ((((struct o1C_float *)0xC112B04)->v)));
    FUN_0c06e700((((int)stk + 0) + 0x10), 0xC17598C, ((((struct o20_float *)0xC112B04)->v)));
    t41 = camSetTarget((((int)stk + 0) + 0x10), 0x0);
    *(unsigned int *)0xC2BB3D8 = ((*(int *)0xC2BB3D8) + 0x1);
    return t41;
}


int FUN_0c044f9a(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = nlSetEventNext(0x12C, 0xC04586C, a4);
    if (t0 == 0) {
        return t0;
    }
    t1 = *(int *)0xC2A59C0;
    *(unsigned int *)0xC2A59C0 = (t1 + 0x1);
    (((struct o74_uint *)(t0))->v) = ((t1 + 0x1) - 1);
    *(unsigned int *)0xC2AB7EC = ((*(int *)0xC2AB7EC) + 0x1);
    if (a5 == 5) {
        (((struct o78_uint *)(t0))->v) = (((((struct o78_int *)(a4))->v)) + 0x2);
    } else {
        (((struct o78_uint *)(t0))->v) = (((((struct o78_int *)(a4))->v)) + 0x1);
    }
    (((struct o80_uint *)(t0))->v) = ((((struct o80_int *)(a4))->v));
    (((struct oD4_uint *)(t0))->v) = (((((struct oD4_int *)(a4))->v)) - ((a5 << 1) + (a5 << 2)));
    FUN_0c046fde((0x80 + t0), (0xD4 + t0), 0x0);
    t1 = (((struct o80_int *)(t0))->v);
    t2 = (((struct oD4_int *)(t0))->v);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x8C + t0)) = *(struct mv3 *)(((((t2 << 1) + t2) << 2) + (*(int *)((((((t1 << 1) + t1) << 2) + (*(int *)0xC2ADA7C)) + 0x0))))); }
    FUN_0c0438c0(t0);
    t1 = (((struct o80_int *)(t0))->v);
    t2 = (((struct oD4_int *)(t0))->v);
    (((struct o90_float *)(t0))->v) = (((((struct o4_float *)(((*(int *)((((((t1 << 1) + t1) << 2) + (*(int *)0xC2ADA7C)) + 0x0))) + (((t2 << 1) + t2) << 2))))->v)) + 1.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x98 + t0)) = *(struct mv3 *)((0x98 + a4)); }
    (((struct oA4_uchar *)(t0))->v) = (*(signed char *)(((0xA4 + a4) + 0x0)));
    *(unsigned char *)(((0xA4 + t0) + 0x1)) = (*(signed char *)(((0xA4 + a4) + 0x1)));
    *(unsigned char *)(((0xA4 + t0) + 0x2)) = (*(signed char *)(((0xA4 + a4) + 0x2)));
    *(unsigned char *)(((0xA4 + t0) + 0x3)) = (*(signed char *)(((0xA4 + a4) + 0x3)));
    *(unsigned char *)(((0xA4 + t0) + 0x4)) = (*(signed char *)(((0xA4 + a4) + 0x4)));
    *(unsigned char *)(((0xA4 + t0) + 0x5)) = (*(signed char *)(((0xA4 + a4) + 0x5)));
    FUN_0c03f9d0(((((struct o80_int *)(t0))->v)), ((((struct oD4_int *)(t0))->v)));
    FUN_0c03f9d0(((((struct o80_int *)(t0))->v)), (((((struct oD4_int *)(t0))->v)) + 0x1));
    return FUN_0c0435e2(t0, ((((struct o84_int *)(t0))->v)));
}
