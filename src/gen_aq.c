/* Straight-line functions with calls and guards (batch gen_aq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o104_float { char p[0x104]; float v; };
struct o124_int { char p[0x124]; int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o160_float { char p[0x160]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_short { char p[0x1C]; short v; };
struct o1C_uchar { char p[0x1C]; unsigned char v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o1D_uchar { char p[0x1D]; unsigned char v; };
struct o1D4_float { char p[0x1D4]; float v; };
struct o1E_short { char p[0x1E]; short v; };
struct o1E_uchar { char p[0x1E]; unsigned char v; };
struct o1F_uchar { char p[0x1F]; unsigned char v; };
struct o2_short { char p[0x2]; short v; };
struct o2_ushort { char p[0x2]; unsigned short v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uchar { char p[0x20]; unsigned char v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o21_uchar { char p[0x21]; unsigned char v; };
struct o24_float { char p[0x24]; float v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o258_float { char p[0x258]; float v; };
struct o28_int { char p[0x28]; int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2B_uchar { char p[0x2B]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2C_int { char p[0x2C]; int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o2DC_float { char p[0x2DC]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o30_int { char p[0x30]; int v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o34_float { char p[0x34]; float v; };
struct o34_short { char p[0x34]; short v; };
struct o34_ushort { char p[0x34]; unsigned short v; };
struct o360_float { char p[0x360]; float v; };
struct o38_int { char p[0x38]; int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o3B4_int { char p[0x3B4]; int v; };
struct o3C_int { char p[0x3C]; int v; };
struct o3C_uint { char p[0x3C]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_short { char p[0x4]; short v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o40_int { char p[0x40]; int v; };
struct o44_int { char p[0x44]; int v; };
struct o48_int { char p[0x48]; int v; };
struct o4C_int { char p[0x4C]; int v; };
struct o50_int { char p[0x50]; int v; };
struct o54_int { char p[0x54]; int v; };
struct o58_int { char p[0x58]; int v; };
struct o5C_int { char p[0x5C]; int v; };
struct o60_int { char p[0x60]; int v; };
struct o64_int { char p[0x64]; int v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o68_int { char p[0x68]; int v; };
struct o6C_int { char p[0x6C]; int v; };
struct o70_int { char p[0x70]; int v; };
struct o7C_float { char p[0x7C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_short { char p[0x8]; short v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o80_float { char p[0x80]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o84_uint { char p[0x84]; unsigned int v; };
struct o88_int { char p[0x88]; int v; };
struct o88_short { char p[0x88]; short v; };
struct o8A_short { char p[0x8A]; short v; };
struct o8C_int { char p[0x8C]; int v; };
struct o8C_short { char p[0x8C]; short v; };
struct o8C_uint { char p[0x8C]; unsigned int v; };
struct o90_int { char p[0x90]; int v; };
struct o90_uint { char p[0x90]; unsigned int v; };
struct o94_int { char p[0x94]; int v; };
struct o94_uint { char p[0x94]; unsigned int v; };
struct o98_int { char p[0x98]; int v; };
struct o98_uint { char p[0x98]; unsigned int v; };
struct o9C_int { char p[0x9C]; int v; };
struct o9C_uint { char p[0x9C]; unsigned int v; };
struct oA0_int { char p[0xA0]; int v; };
struct oB4_int { char p[0xB4]; int v; };
struct oB8_int { char p[0xB8]; int v; };
struct oBC_int { char p[0xBC]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oE0_int { char p[0xE0]; int v; };
struct oE0_uint { char p[0xE0]; unsigned int v; };
struct oE4_uint { char p[0xE4]; unsigned int v; };
struct oF8_short { char p[0xF8]; short v; };
struct oFC_int { char p[0xFC]; int v; };
struct oFC_uint { char p[0xFC]; unsigned int v; };
struct oFD_uchar { char p[0xFD]; unsigned char v; };
struct oFE_uchar { char p[0xFE]; unsigned char v; };
struct oFF_uchar { char p[0xFF]; unsigned char v; };
int CalcHomingAngle(int);
int CalcHomingVector(int);
int FUN_0c016cb2(int);
int FUN_0c018b00(int);
int FUN_0c018b1c(int);
int FUN_0c018b22(int, int);
int FUN_0c018c2a(float, float);
int FUN_0c018c8a(float, float);
int FUN_0c018c96(int, int, int, int);
int FUN_0c018ce0(float, float);
int FUN_0c018cec(float);
int FUN_0c01b920(int, float, float);
int FUN_0c01d69c(void);
int FUN_0c0295c0(int, int, float, float);
int FUN_0c0464de(int);
float FUN_0c0468aa(int, int);
int FUN_0c047624(int);
int FUN_0c0476dc(int, int, int, int);
int FUN_0c047cb6(int, int, int, int, float);
int FUN_0c05a338(void);
int FUN_0c05a3b0(float);
int FUN_0c05a3f8(int);
int FUN_0c05bdde(int);
int FUN_0c05bf60(void);
int FUN_0c05ccce(int);
int FUN_0c060210(int);
int FUN_0c060298(int, int, int);
int FUN_0c068c94(int);
int FUN_0c06ac1a(int, int, int, int);
int FUN_0c06ce72(void);
int FUN_0c06db2e(void);
int FUN_0c06e460(void);
float FUN_0c072140(int);
float FUN_0c072148(int);
int FUN_0c072230(int, int);
int FUN_0c072290(int, int);
int FUN_0c072600(int);
int FUN_0c072b60(int);
int FUN_0c073360(void);
int FUN_0c0739a0(int);
int FUN_0c073a30(float, float, float);
int FUN_0c073a60(int);
int FUN_0c073c40(int, int, float);
int FUN_0c07fdc8(void);
int FUN_0c07ff00(void);
int GetAng4Mat(int);
int HomingAngle1(int, int, float);
int MultiRot4Vec(int);
int SetAdvCamera(int, int);
int camSetTarget(int, int);
int camSnapToCar(int);
int gdc_CoursePointLoadReq(float);
int kmiConvertUVnum(int);
int nlAddVector(int, int);
int nlGetMatrix(int);
int nlInvertMatrix(int);
float nlLength(int, int);
int nlLocate(int, int);
int nlLookAt(int, int, int);
int nlMatrixMode(int);
int nlObjPutUseViewMatrix(int);
int nlPerspectiveX(int, float, float, float);
int nlPopMatrix(int);
int nlPrintf(int, ...);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlSubVector3op(int, int, int);
int nlUnitMatrix(void);
int FUN_0c016cca(int a4);
int FUN_0c063a2a(int a4, int a5, int a6, int a7);
int FUN_0c048262(int a4);
int kmProcessVertexRenderState(int a4);



int FUN_0c048262(int a4)
{
    int stk[30];
    int t65;
    register int t190;
    register int t239;
    register int t395;
    register int t417;

    int R5;
    int R6;
    register int R7;
    int R10;
    register int R14;
    register float F0;
    register float F1;
    register float F2;
    register float F3;
    register float F4;
    register float F8;
    register float F12;
    register float F13;
    register float F14;
    register float F15;
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
    v0_5 = a4;
    *(unsigned int *)(((int)stk + 32)) = v0_5;
    { struct mvb32 { char b[32]; }; *(struct mvb32 *)((((int)stk + 32) + 0x38)) = *(struct mvb32 *)(0xC0F33F4); }
    FUN_0c07fdc8();
    v0_0 = *(int *)(((int)stk + 32));
    v0_7 = (v0_0);
    R10 = (0x1);
    v0_1 = (0xC2ADA5C);
    v0_2 = (0xC12FDAC);
    v0_5 = (0xC12FDA4);
    R5 = (0xC12FDA8);
    v0_4 = (0xC175C80);
    if ((v0_0 != -2)) goto L_C0482B2;
    *(unsigned int *)((v0_5 + 0x0)) = (*(int *)((v0_4 + 0x0)));
    *(unsigned char *)0xC1EC87C = R10;
    *(unsigned int *)((R5 + 0x0)) = (signed char)R10;
    L_C048D12:;
    return v0_7;
    L_C0482B2:;
    if (((*(int *)(((int)stk + 32))) != -1)) goto L_C0482D0;
    *(unsigned int *)((v0_4 + 0x0)) = (*(int *)((v0_5 + 0x0)));
    *(unsigned char *)0xC1EC87C = (*(int *)((R5 + 0x0)));
    (((struct oC_uint *)0xC1EC83C)->v) = 0x0;
    *(unsigned int *)((v0_1 + 0x0)) = 0x0;
    *(unsigned int *)((v0_2 + 0x0)) = 0x0;
    v0_7 = (0xC1EC848);
    goto L_C048D12;
    L_C0482D0:;
    if (((*(int *)(((int)stk + 32))) != 1)) goto L_C0482DC;
    R14 = (0xC12D2B8);
    L_C0482E4:;
    *(unsigned int *)(((int)stk + 36)) = 0x5A;
    L_C048304:;
    v0_5 = (0xC12D2B4);
    if ((((((struct o0_int *)0xC2AC2F4)->v)) != 1)) goto L_C04839C;
    v0_6 = (0xC12FDAC);
    if (((int)((((struct o0_int *)0xC12FDAC)->v)) <= 0)) goto L_C04839C;
    if (((int)(*(int *)((v0_6 + 0x0))) > (int)0xB)) goto L_C04839C;
    *(unsigned int *)((v0_5 + 0x0)) = R10;
    L_C0483A0:;
    v0_5 = (FUN_0c0464de(0x2000)) == 0;
    v0_0 = (0x3D0);
    v0_3 = (0xC2ADA64);
    if (v0_5) goto L_C0483B4;
    v0_5 = (0xC1EC78C);
    if (((int)(*(int *)0xC2AC614) >= (int)0x1E)) goto L_C0486F4;
    R6 = ((*(int *)((v0_5 + 0x4))));
    L_C0486F6:;
    if (((0x80 & R6) == 0)) goto L_C04870A;
    if (((int)((((struct o10_int *)0xC12FDAC)->v)) >= (int)0x1)) goto L_C04870A;
    v0_7 = (0x1);
    L_C04870C:;
    if (((0x40 & R6) == 0)) goto L_C04871E;
    if (((int)((((struct o10_int *)0xC12FDAC)->v)) <= 0)) goto L_C04871E;
    v0_6 = (0x1);
    L_C048720:;
    v0_5 = (((struct o10_int *)0xC12FDAC)->v);
    (((struct o10_uint *)0xC12FDAC)->v) = (v0_5 + (v0_7 - v0_6));
    v0_6 = (v0_5 + (v0_7 - v0_6)) != 0;
    v0_7 = (0xC12FDB8);
    v0_5 = ((0x20 & R6));
    R5 = ((0x10 & R6));
    R7 = (((((struct oC_int *)0xC12FDAC)->v)));
    if (v0_6) goto L_C048776;
    if ((v0_5 == 0)) goto L_C048756;
    if (((int)(*(int *)((v0_7 + 0x0))) >= (int)((*(int *)(((((((struct o8_int *)0xC12FDAC)->v)) << 2) + (((int)stk + 32) + 0x30)))) - 1))) goto L_C048756;
    v0_7 = (0x1);
    L_C048758:;
    if ((R5 == 0)) goto L_C048768;
    if (((int)((((struct oC_int *)0xC12FDAC)->v)) <= 0)) goto L_C048768;
    v0_6 = (0x1);
    L_C04876A:;
    v0_5 = ((((((struct oC_int *)0xC12FDAC)->v)) + (v0_7 - v0_6)));
    v0_6 = (0xC12FDB8);
    L_C04890C:;
    *(unsigned int *)((v0_6 + 0x0)) = v0_5;
    L_C0489AE:;
    v0_5 = (((struct o8_int *)0xC12FDAC)->v);
    *(unsigned int *)(((int)stk + 56)) = 0xC1EC78C;
    t65 = *(int *)0xC1EC790;
    v0_5 = (v0_5);
    R5 = (t65);
    if (((0x200 & t65) != 0)) goto L_C0489C8;
    if (((0x20000 & R5) != 0)) goto L_C0489C8;
    if ((v0_5 != 0)) goto L_C048B78;
    *(unsigned int *)(((int)stk + 44)) = 0x0;
    *(unsigned int *)(((int)stk + 32)) = (0x0 + R14);
    *(unsigned int *)(((int)stk + 40)) = (0x0 + R14);
    v0_5 = ((0x0 + R14));
    if (((int)(*(int *)(((int)stk + 36))) <= 0)) goto L_C048B78;
    L_C048B3E:;
    if (((*(int *)((v0_1 + 0x0))) != ((*(int *)(((*(int *)(((int)stk + 40))) + 0x0))) - 1))) goto L_C048B5E;
    if (((*(int *)(((*(int *)(((int)stk + 32))) + 0x4))) != 0)) goto L_C048B5E;
    FUN_0c0476dc(0x4, R5, R6, R7);
    FUN_0c018b00(0x7);
    L_C048B5E:;
    *(unsigned int *)(((int)stk + 44)) = ((*(int *)(((int)stk + 44))) + 0x1);
    *(unsigned int *)(((int)stk + 32)) = ((*(int *)(((int)stk + 32))) + 0x24);
    *(unsigned int *)(((int)stk + 40)) = ((*(int *)(((int)stk + 40))) + 0x24);
    if (((int)(*(int *)(((int)stk + 44))) < (int)(*(int *)(((int)stk + 36))))) goto L_C048B3E;
    L_C048B78:;
    (((struct o30_uint *)0xC1EC71C)->v) = (((((struct o30_int *)0xC1EC71C)->v)) - 1);
    nlLocate(0x1E, 0x37);
    v0_5 = ((((struct o8_int *)0xC12D298)->v));
    *(int *)((int)stk + 28) = v0_5;
    v0_6 = (((struct o8_int *)0xC12FDAC)->v);
    *(int *)((int)stk + 24) = (((v0_6 << 2) << 2) + (((int)stk + 28) + 0x3C));
    *(int *)((int)stk + 20) = 0xC0F341C;
    nlPrintf(0xC0F341C, (((v0_6 << 2) << 2) + (((int)stk + 28) + 0x3C)), v0_5);
    v0_5 = (((struct o8_int *)0xC12FDAC)->v);
    v0_7 = (v0_5);
    if ((v0_5 == 0)) goto L_C048BB8;
    if (!((v0_7 == 1))) goto L_C048CBC;
    v0_1 = (*(int *)((v0_4 + 0x0)));
    *(int *)((int)stk + 28) = v0_1;
    *(int *)((int)stk + 24) = 0xC0F3490;
    nlPrintf(0xC0F3490, v0_1);
    v0_1 = (*(int *)((((((((struct o4_int *)0xC12FDAC)->v)) * v0_0) + (*(int *)((v0_3 + 0x0)))) + 0x0)));
    *(int *)((int)stk + 20) = v0_1;
    v0_2 = ((((struct o4_int *)0xC12FDAC)->v));
    *(int *)((int)stk + 16) = v0_2;
    *(int *)((int)stk + 12) = 0xC0F34A4;
    nlPrintf(0xC0F34A4, v0_2, v0_1);
    *(int *)((int)stk + 8) = 0x3CC;
    v0_0 = v0_0;
    *(int *)((int)stk + 4) = v0_0;
    *(int *)((int)stk + 0) = 0xC0F34C4;
    nlPrintf(0xC0F34C4, v0_0, 0x3CC);
    goto L_C048CBC;
    L_C048CBC:;
    if ((((((struct o10_int *)0xC12FDAC)->v)) == 0)) goto L_C048CCC;
    if (((((((struct o0_int *)0xC1EC83C)->v)) & 8) == 0)) goto L_C048CE2;
    L_C048CCC:;
    nlLocate(0x1E, (((((struct oC_int *)0xC12FDAC)->v)) + 0x37));
    *(int *)((int)stk + 28) = 0xC0F34E4;
    nlPrintf(0xC0F34E4);
    L_C048CE2:;
    FUN_0c073360();
    FUN_0c0739a0(((*(int *)0xC2ADA68) + 0x84));
    nlRotateAY((((((((struct o0_int *)0xC1EC83C)->v)) << 2) << 2) << 2));
    nlObjPutUseViewMatrix(0xC4F5620);
    nlPopMatrix(0x1);
    L_C048D10:;
    v0_7 = (0x0);
    goto L_C048D12;
    L_C048BB8:;
    v0_4 = (*(int *)((v0_2 + 0x0)));
    *(int *)((int)stk + 28) = v0_4;
    *(int *)((int)stk + 24) = 0xC0F3428;
    nlPrintf(0xC0F3428, v0_4);
    v0_4 = *(int *)((v0_2 + 0x0));
    v0_4 = (*(int *)(((((((v0_4 << 2) << 1) + v0_4) << 2) + R14) + 0x4)));
    *(int *)((int)stk + 20) = v0_4;
    *(int *)((int)stk + 16) = 0xC0F343C;
    nlPrintf(0xC0F343C, v0_4);
    v0_4 = *(int *)((v0_2 + 0x0));
    *(unsigned int *)(((int)stk + 52)) = (((((v0_4 << 2) << 1) + v0_4) << 2) + R14);
    v0_4 = *(int *)(((((((v0_4 << 2) << 1) + v0_4) << 2) + R14) + 0x8));
    *(unsigned int *)(((int)stk + 32)) = v0_4;
    v0_0 = (*(int *)((((v0_4 * v0_0) + (*(int *)((v0_3 + 0x0)))) + 0x0)));
    *(int *)((int)stk + 12) = v0_0;
    v0_3 = (*(int *)(((int)stk + 32)));
    *(int *)((int)stk + 8) = v0_3;
    *(int *)((int)stk + 4) = 0xC0F3450;
    nlPrintf(0xC0F3450, v0_3, v0_0);
    v0_0 = *(int *)((v0_2 + 0x0));
    v0_0 = ((((((v0_0 << 2) << 1) + v0_0) << 2) + R14));
    if (((int)((*(int *)((v0_2 + 0x0))) + 0x1) >= (int)(*(int *)(((int)stk + 36))))) goto L_C048C28;
    R7 = ((*(int *)((v0_0 + 0x24))));
    L_C048C2C:;
    *(int *)((int)stk + 28) = (R7);
    *(unsigned int *)(((int)stk + 48)) = v0_0;
    v0_0 = *(int *)((v0_0 + 0x0));
    *(unsigned int *)(((int)stk + 32)) = v0_0;
    *(int *)((int)stk + 24) = (v0_0);
    v0_0 = *(int *)((v0_1 + 0x0));
    v0_2 = *(int *)(((int)stk + 32));
    *(int *)((int)stk + 20) = (v0_0 - v0_2);
    v0_1 = (*(int *)((v0_1 + 0x0)));
    *(int *)((int)stk + 16) = v0_1;
    *(int *)((int)stk + 12) = 0xC0F3470;
    nlPrintf(0xC0F3470, v0_1, (v0_0 - v0_2));
    goto L_C048CBC;
    L_C048C28:;
    R7 = (((((struct oC_int *)0xC12D298)->v)));
    goto L_C048C2C;
    L_C0489C8:;
    if ((v0_5 != 0)) goto L_C048A10;
    if (((*(int *)(((int)stk + 32))) != 1)) goto L_C0489DC;
    FUN_0c047624(0x1);
    L_C0489E8:;
    v0_5 = *(int *)((v0_2 + 0x0));
    v0_6 = *(int *)(((((((v0_5 << 2) << 1) + v0_5) << 2) + R14) + 0x0));
    *(unsigned int *)((v0_1 + 0x0)) = v0_6;
    (((struct oC_uint *)0xC1EC83C)->v) = v0_6;
    *(unsigned int *)((v0_4 + 0x0)) = (*(int *)(((((*(int *)(((((((v0_5 << 2) << 1) + v0_5) << 2) + R14) + 0x8))) * v0_0) + (*(int *)((v0_3 + 0x0)))) + 0x0)));
    L_C048A24:;
    *(unsigned char *)0xC1EC87C = R10;
    if ((((*(int *)0xC1EC790) & 0x200) == 0)) goto L_C048A64;
    v0_5 = (0x3);
    L_C048A66:;
    FUN_0c0476dc(v0_5, R5, R6, R7);
    *(unsigned int *)(((int)stk + 32)) = 0xC01D69C;
    FUN_0c01d69c();
    if ((((((struct o8_int *)0xC12FDAC)->v)) != 0)) goto L_C048AF4;
    *(unsigned int *)(((int)stk + 40)) = (((int)stk + 32) + 0x1C);
    *(unsigned int *)(((((int)stk + 32) + 0x1C) + 0x0)) = ((((struct o2C_int *)0xC1758B0)->v));
    *(unsigned int *)(((int)stk + 36)) = ((((int)stk + 32) + 0x1C) + 0x4);
    *(unsigned int *)((((((int)stk + 32) + 0x1C) + 0x4) + 0x0)) = ((((struct o30_int *)0xC1758B0)->v));
    *(unsigned int *)(((int)stk + 32)) = ((((int)stk + 32) + 0x1C) + 0x8);
    *(unsigned int *)((((((int)stk + 32) + 0x1C) + 0x8) + 0x0)) = ((((struct o1C_int *)0xC175908)->v));
    *(unsigned int *)((((((int)stk + 32) + 0x1C) + 0xC) + 0x0)) = ((((struct o20_int *)0xC175908)->v));
    *(unsigned int *)((((((int)stk + 32) + 0x1C) + 0x10) + 0x0)) = ((((struct o24_int *)0xC175908)->v));
    v0_2 = *(int *)((v0_2 + 0x0));
    v0_1 = *(int *)((v0_3 + 0x0));
    v0_2 = *(int *)(((((((v0_2 << 2) << 1) + v0_2) << 2) + R14) + 0x8));
    v0_3 = (((v0_2 * v0_0) + v0_1) + 0x4);
    v0_4 = 0xC1758B4;
    for (;;) { t190 = *(int *)v0_3; v0_3 = (v0_3 + 4); if ((unsigned int)(((((v0_2 * v0_0) + v0_1) + 0x4) + 972)) < (unsigned int)v0_3) break; *(unsigned int *)v0_4 = t190; v0_4 = (v0_4 + 4); }
    (((struct o2C_uint *)0xC1758B0)->v) = (*(int *)(((*(int *)(((int)stk + 40))) + 0x0)));
    (((struct o30_uint *)0xC1758B0)->v) = (*(int *)(((*(int *)(((int)stk + 36))) + 0x0)));
    (((struct o1C_uint *)0xC175908)->v) = (*(int *)(((*(int *)(((int)stk + 32))) + 0x0)));
    (((struct o20_uint *)0xC175908)->v) = (*(int *)((((((int)stk + 32) + 0x1C) + 0xC) + 0x0)));
    (((struct o24_uint *)0xC175908)->v) = (*(int *)((((((int)stk + 32) + 0x1C) + 0x10) + 0x0)));
    R5 = ((((int)stk + 32) + 0x1C));
    L_C048AF4:;
    SetAdvCamera(0xC177D38, 0x0);
    FUN_0c018b00(0x0);
    L_C048B02:;
    v0_7 = (0x1);
    goto L_C048D12;
    L_C048A64:;
    v0_5 = (0x2);
    goto L_C048A66;
    L_C0489DC:;
    if (((*(int *)(((int)stk + 32))) != 2)) goto L_C0489E8;
    FUN_0c047624(0x2);
    goto L_C0489E8;
    L_C048A10:;
    if ((v0_5 != 1)) goto L_C048A24;
    FUN_0c047624(0x0);
    (((struct oC_uint *)0xC1EC83C)->v) = 0x0;
    *(unsigned int *)((v0_1 + 0x0)) = 0x0;
    goto L_C048A24;
    L_C048768:;
    v0_6 = (0x0);
    goto L_C04876A;
    L_C048756:;
    v0_7 = (0x0);
    goto L_C048758;
    L_C048776:;
    v0_8 = (((struct o8_int *)0xC12FDAC)->v);
    v0_7 = (v0_8);
    v0_6 = (0xC12FDB4);
    if ((v0_8 == 0)) goto L_C0487A0;
    if ((v0_7 != 1)) goto L_C048786;
    v0_7 = (R7);
    if ((R7 == 0)) goto L_C0488E0;
    if ((v0_7 == 1)) goto L_C048910;
    if ((v0_7 == 2)) goto L_C048950;
    goto L_C0489AE;
    L_C048950:;
    if ((R5 == 0)) goto L_C048962;
    if (((int)((((struct o4_int *)0xC12FDAC)->v)) >= (int)0x63)) goto L_C048962;
    v0_7 = (0x1);
    L_C048964:;
    if ((v0_5 == 0)) goto L_C048974;
    if (((int)((((struct o4_int *)0xC12FDAC)->v)) <= 0)) goto L_C048974;
    v0_6 = (0x1);
    L_C048976:;
    (((struct o4_uint *)0xC12FDAC)->v) = (((((struct o4_int *)0xC12FDAC)->v)) + (v0_7 - v0_6));
    if ((((*(int *)0xC1EC790) & 0x10000) == 0)) goto L_C0489AE;
    *(unsigned int *)((((((((struct o4_int *)0xC12FDAC)->v)) * v0_0) + (*(int *)((v0_3 + 0x0)))) + 0x0)) = (*(int *)((v0_4 + 0x0)));
    v0_5 = 0xC1758B4;
    v0_6 = (((((((struct o4_int *)0xC12FDAC)->v)) * v0_0) + (*(int *)((v0_3 + 0x0)))) + 0x4);
    for (;;) { t239 = *(int *)v0_5; v0_5 = (v0_5 + 4); if ((unsigned int)((0xC1758B4 + 972)) < (unsigned int)v0_5) break; *(unsigned int *)v0_6 = t239; v0_6 = (v0_6 + 4); }
    goto L_C0489AE;
    L_C048974:;
    v0_6 = (0x0);
    goto L_C048976;
    L_C048962:;
    v0_7 = (0x0);
    goto L_C048964;
    L_C048910:;
    if ((R5 == 0)) goto L_C048922;
    if (((int)(*(int *)0xC175C80) >= (int)0x17)) goto L_C048922;
    v0_7 = (0x1);
    L_C048924:;
    if ((v0_5 == 0)) goto L_C048934;
    if (((int)(*(int *)0xC175C80) <= 0)) goto L_C048934;
    v0_6 = (0x1);
    L_C048936:;
    *(unsigned int *)((v0_4 + 0x0)) = ((*(int *)((v0_4 + 0x0))) + (v0_7 - v0_6));
    goto L_C0489AE;
    L_C048934:;
    v0_6 = (0x0);
    goto L_C048936;
    L_C048922:;
    v0_7 = (0x0);
    goto L_C048924;
    L_C0488E0:;
    if ((R5 == 0)) goto L_C0488F0;
    if (((int)(*(int *)((v0_6 + 0x0))) >= (int)0x1)) goto L_C0488F0;
    v0_7 = (0x1);
    L_C0488F2:;
    if ((v0_5 == 0)) goto L_C048902;
    if (((int)((((struct o8_int *)0xC12FDAC)->v)) <= 0)) goto L_C048902;
    v0_6 = (0x1);
    L_C048904:;
    v0_5 = ((((((struct o8_int *)0xC12FDAC)->v)) + (v0_7 - v0_6)));
    v0_6 = (0xC12FDB4);
    goto L_C04890C;
    L_C048902:;
    v0_6 = (0x0);
    goto L_C048904;
    L_C0488F0:;
    v0_7 = (0x0);
    goto L_C0488F2;
    L_C048786:;
    goto L_C0489AE;
    L_C0487A0:;
    v0_7 = (R7);
    if ((R7 == 0)) goto L_C0487BA;
    if ((v0_7 == 1)) goto L_C0487EA;
    if ((v0_7 == 2)) goto L_C04881C;
    if ((v0_7 == 3)) goto L_C048856;
    if ((v0_7 == 4)) goto L_C048890;
    goto L_C0489AE;
    L_C048890:;
    v0_6 = *(int *)((v0_2 + 0x0));
    R6 = ((((((v0_6 << 2) << 1) + v0_6) << 2) + R14));
    if ((R5 == 0)) goto L_C0488B2;
    if (((int)(*(int *)((R6 + 0x0))) >= (int)(((((struct oC_int *)0xC12D298)->v)) - 1))) goto L_C0488B2;
    v0_6 = (0x1);
    L_C0488B4:;
    if ((v0_5 == 0)) goto L_C0488C2;
    if (((int)(*(int *)((R6 + 0x0))) <= 0)) goto L_C0488C2;
    v0_7 = (0x1);
    L_C0488C4:;
    *(unsigned int *)((R6 + 0x0)) = ((*(int *)((R6 + 0x0))) + (v0_6 - v0_7));
    goto L_C0489AE;
    L_C0488C2:;
    v0_7 = (0x0);
    goto L_C0488C4;
    L_C0488B2:;
    v0_6 = (0x0);
    goto L_C0488B4;
    L_C048856:;
    v0_6 = *(int *)((v0_2 + 0x0));
    R6 = ((((((v0_6 << 2) << 1) + v0_6) << 2) + R14));
    if ((R5 == 0)) goto L_C048874;
    if (((int)(*(int *)((R6 + 0x8))) >= (int)0x63)) goto L_C048874;
    v0_6 = (0x1);
    L_C048876:;
    if ((v0_5 == 0)) goto L_C048884;
    if (((int)(*(int *)((R6 + 0x8))) <= 0)) goto L_C048884;
    v0_7 = (0x1);
    L_C048886:;
    *(unsigned int *)((R6 + 0x8)) = ((*(int *)((R6 + 0x8))) + (v0_6 - v0_7));
    goto L_C0489AE;
    L_C048884:;
    v0_7 = (0x0);
    goto L_C048886;
    L_C048874:;
    v0_6 = (0x0);
    goto L_C048876;
    L_C04881C:;
    v0_6 = *(int *)((v0_2 + 0x0));
    R6 = ((((((v0_6 << 2) << 1) + v0_6) << 2) + R14));
    if ((R5 == 0)) goto L_C04883A;
    if (((int)(*(int *)((R6 + 0x4))) >= (int)0x1)) goto L_C04883A;
    v0_6 = (0x1);
    L_C04883C:;
    if ((v0_5 == 0)) goto L_C04884A;
    if (((int)(*(int *)((R6 + 0x4))) <= 0)) goto L_C04884A;
    v0_7 = (0x1);
    L_C04884C:;
    *(unsigned int *)((R6 + 0x4)) = ((*(int *)((R6 + 0x4))) + (v0_6 - v0_7));
    goto L_C0489AE;
    L_C04884A:;
    v0_7 = (0x0);
    goto L_C04884C;
    L_C04883A:;
    v0_6 = (0x0);
    goto L_C04883C;
    L_C0487EA:;
    if ((R5 == 0)) goto L_C0487FE;
    if (((int)((((struct o0_int *)0xC12FDAC)->v)) >= (int)((*(int *)(((int)stk + 36))) - 1))) goto L_C0487FE;
    v0_6 = (0x1);
    L_C048800:;
    if ((v0_5 == 0)) goto L_C048810;
    if (((int)((((struct o0_int *)0xC12FDAC)->v)) <= 0)) goto L_C048810;
    v0_7 = (0x1);
    L_C048812:;
    *(unsigned int *)((v0_2 + 0x0)) = ((*(int *)((v0_2 + 0x0))) + (v0_6 - v0_7));
    goto L_C0489AE;
    L_C048810:;
    v0_7 = (0x0);
    goto L_C048812;
    L_C0487FE:;
    v0_6 = (0x0);
    goto L_C048800;
    L_C0487BA:;
    if ((R5 == 0)) goto L_C0487CA;
    if (((int)(*(int *)((v0_6 + 0x0))) >= (int)0x1)) goto L_C0487CA;
    v0_7 = (0x1);
    L_C0487CC:;
    if ((v0_5 == 0)) goto L_C0487DC;
    if (((int)((((struct o8_int *)0xC12FDAC)->v)) <= 0)) goto L_C0487DC;
    v0_6 = (0x1);
    L_C0487DE:;
    v0_5 = ((((((struct o8_int *)0xC12FDAC)->v)) + (v0_7 - v0_6)));
    v0_6 = (0xC12FDB4);
    goto L_C04890C;
    L_C0487DC:;
    v0_6 = (0x0);
    goto L_C0487DE;
    L_C0487CA:;
    v0_7 = (0x0);
    goto L_C0487CC;
    L_C04871E:;
    v0_6 = (0x0);
    goto L_C048720;
    L_C04870A:;
    v0_7 = (0x0);
    goto L_C04870C;
    L_C0486F4:;
    R6 = ((*(int *)((v0_5 + 0x0))));
    goto L_C0486F6;
    L_C0483B4:;
    if (((((((struct o0_int *)0xC12D298)->v)) & R10) == 0)) goto L_C0483CC;
    if (((*(int *)((v0_1 + 0x0))) == 0)) goto L_C0483C6;
    goto L_C048D10;
    L_C0483C6:;
    (((struct o4_uint *)0xC12D298)->v) = R10;
    goto L_C048D10;
    L_C0483CC:;
    if (((*(int *)((v0_1 + 0x0))) != 0)) goto L_C0483D8;
    (((struct oC_uint *)0xC1EC83C)->v) = 0x0;
    L_C0483D8:;
    if (((*(int *)((v0_2 + 0x0))) != 0)) goto L_C0483EC;
    if ((((((struct o0_int *)0xC2AC2F4)->v)) != 1)) goto L_C0483EC;
    (((struct o0_uint *)0xC175908)->v) = R10;
    L_C0483EC:;
    v0_5 = *(int *)((v0_2 + 0x0));
    R14 = ((R14 + ((((v0_5 << 2) << 1) + v0_5) << 2)));
    if ((((((struct o0_int *)0xC2AC2F4)->v)) == 1)) goto L_C048406;
    FUN_0c047cb6((*(int *)((v0_3 + 0x0))), R14, (*(int *)((v0_2 + 0x0))), R7, F4);
    L_C04850A:;
    if (((int)((((struct oC_int *)0xC1EC83C)->v)) >= (int)(*(int *)((R14 + 0x0))))) goto L_C048518;
    goto L_C048D10;
    L_C048518:;
    *(unsigned int *)((v0_2 + 0x0)) = ((*(int *)((v0_2 + 0x0))) + 0x1);
    if (((*(int *)((R14 + 0x4))) != 1)) goto L_C048574;
    if (((*(int *)((R14 + 0xC))) != 0)) goto L_C04853C;
    SetAdvCamera(0xC177D38, 0x0);
    FUN_0c018b00(0x0);
    goto L_C048D10;
    L_C04853C:;
    SetAdvCamera(0xC177D38, (*(int *)((R14 + 0xC))));
    goto L_C048D10;
    L_C048574:;
    *(unsigned int *)((v0_1 + 0x0)) = (*(int *)((R14 + 0x0)));
    if ((((((struct o0_int *)0xC2AC2F4)->v)) != 0)) goto L_C0485A8;
    *(unsigned int *)((v0_4 + 0x0)) = ((((((int)((((struct o4_int *)0xC2AC2F4)->v)) >> 5) << 2) << 1) + (*(int *)(((((*(int *)((R14 + 0x8))) * v0_0) + (*(int *)((v0_3 + 0x0)))) + 0x0)))) + ((((int)((((struct o4_int *)0xC2AC2F4)->v)) >> 4) & R10) << 2));
    v0_5 = (0xC2AC2F8);
    L_C0485A8:;
    *(unsigned char *)0xC1EC87C = R10;
    *(unsigned int *)(((int)stk + 32)) = 0xC01D69C;
    FUN_0c01d69c();
    *(unsigned int *)(((((int)stk + 32) + 0x1C) + 0x0)) = ((((struct o2C_int *)0xC1758B0)->v));
    *(unsigned int *)(((int)stk + 32)) = ((((int)stk + 32) + 0x1C) + 0x4);
    *(unsigned int *)((((((int)stk + 32) + 0x1C) + 0x4) + 0x0)) = ((((struct o30_int *)0xC1758B0)->v));
    *(unsigned int *)(((int)stk + 36)) = ((((int)stk + 32) + 0x1C) + 0x8);
    *(unsigned int *)((((((int)stk + 32) + 0x1C) + 0x8) + 0x0)) = ((((struct o1C_int *)0xC175908)->v));
    *(unsigned int *)(((int)stk + 40)) = ((((int)stk + 32) + 0x1C) + 0xC);
    *(unsigned int *)((((((int)stk + 32) + 0x1C) + 0xC) + 0x0)) = ((((struct o20_int *)0xC175908)->v));
    *(unsigned int *)((((((int)stk + 32) + 0x1C) + 0x10) + 0x0)) = ((((struct o24_int *)0xC175908)->v));
    v0_1 = *(int *)((R14 + 0x8));
    v0_2 = *(int *)((v0_3 + 0x0));
    v0_3 = (((v0_1 * v0_0) + v0_2) + 0x4);
    v0_4 = 0xC1758B4;
    for (;;) { t395 = *(int *)v0_3; v0_3 = (v0_3 + 4); if ((unsigned int)(((((v0_1 * v0_0) + v0_2) + 0x4) + 972)) < (unsigned int)v0_3) break; *(unsigned int *)v0_4 = t395; v0_4 = (v0_4 + 4); }
    (((struct o2C_uint *)0xC1758B0)->v) = (*(int *)(((((int)stk + 32) + 0x1C) + 0x0)));
    (((struct o30_uint *)0xC1758B0)->v) = (*(int *)(((*(int *)(((int)stk + 32))) + 0x0)));
    (((struct o1C_uint *)0xC175908)->v) = (*(int *)(((*(int *)(((int)stk + 36))) + 0x0)));
    (((struct o20_uint *)0xC175908)->v) = (*(int *)(((*(int *)(((int)stk + 40))) + 0x0)));
    (((struct o24_uint *)0xC175908)->v) = (*(int *)((((((int)stk + 32) + 0x1C) + 0x10) + 0x0)));
    camSnapToCar(0x0);
    if (((*(int *)((R14 + 0xC))) != 0)) goto L_C048638;
    SetAdvCamera(0xC177D38, 0x0);
    v0_5 = (0x0);
    L_C048648:;
    FUN_0c018b00(v0_5);
    L_C04866C:;
    if (((int)(*(int *)((R14 + 0x10))) >= (int)0x23)) goto L_C048678;
    goto L_C048B02;
    L_C048678:;
    if ((((((struct o24_int *)0xC1EC71C)->v)) == 0)) goto L_C04868C;
    FUN_0c068c94((R14 + 0x10));
    goto L_C048B02;
    L_C04868C:;
    *(volatile int *)((R14 + 0x10));
    FUN_0c07ff00();
    *(unsigned int *)(((int)stk + 60)) = t417;
    FUN_0c068c94((((int)stk + 32) + 0x1C));
    goto L_C048B02;
    L_C048638:;
    if (((*(int *)((R14 + 0xC))) != -1)) goto L_C048652;
    SetAdvCamera(0xC177D38, 0x0);
    v0_5 = (0x7);
    goto L_C048648;
    L_C048652:;
    *(unsigned int *)(((int)stk + 32)) = (*(int *)0xC2ADA68);
    v0_0 = *(int *)((R14 + 0x18));
    SetAdvCamera(((((v0_0 << 1) + v0_0) << 2) + (*(int *)(((int)stk + 32)))), (*(int *)((R14 + 0xC))));
    goto L_C04866C;
    L_C048406:;
    if (((*(int *)((v0_2 + 0x0))) != 12)) goto L_C048422;
    if ((_builtin_fabsf((*(float *)0xC175A14)) > 0.150000006f)) goto L_C048422;
    FUN_0c060210(0x0);
    L_C048422:;
    (((struct o0_uint *)0xC1758B0)->v) = 0x3;
    if (((int)((((struct oC_int *)0xC1EC83C)->v)) < (int)((*(int *)((R14 + 0x0))) - 200))) goto L_C0484B4;
    v0_5 = *(int *)((R14 + 0x18));
    v0_6 = *(int *)0xC2ADA68;
    *(unsigned int *)(((int)stk + 32)) = ((((v0_5 << 1) + v0_5) << 2) + v0_6);
    v0_5 = (((((v0_5 << 1) + v0_5) << 2) + v0_6));
    if (((*(int *)((v0_2 + 0x0))) != 11)) goto L_C04849C;
    FUN_0c07ff00();
    F4 = (850.0f);
    L_C0484AC:;
    gdc_CoursePointLoadReq(F4);
    L_C0484B4:;
    if (((int)((((struct oC_int *)0xC1EC83C)->v)) < (int)((*(int *)((R14 + 0x0))) - 150))) goto L_C04850A;
    v0_5 = *(int *)((R14 + 0x18));
    *(unsigned int *)(((int)stk + 32)) = ((((v0_5 << 1) + v0_5) << 2) + (*(int *)0xC2ADA68));
    if (((*(int *)((v0_2 + 0x0))) != 11)) goto L_C0484EA;
    FUN_0c07ff00();
    F4 = (1700.0f);
    L_C0484F8:;
    gdc_CoursePointLoadReq(F4);
    goto L_C04850A;
    L_C0484EA:;
    FUN_0c07ff00();
    F4 = (900.0f);
    goto L_C0484F8;
    L_C04849C:;
    FUN_0c07ff00();
    F4 = (450.0f);
    goto L_C0484AC;
    L_C04839C:;
    *(unsigned int *)((v0_5 + 0x0)) = 0x0;
    goto L_C0483A0;
    L_C0482DC:;
    if (((*(int *)(((int)stk + 32))) != 2)) goto L_C0482EA;
    R14 = (0xC12DF60);
    goto L_C0482E4;
    L_C0482EA:;
    if (((*(int *)(((int)stk + 32))) != 3)) goto L_C048304;
    v0_7 = (0x28);
    if ((((((struct o0_int *)0xC1EC71C)->v)) != 0)) goto L_C048300;
    R14 = (0xC12EC08);
    L_C048302:;
    *(unsigned int *)(((int)stk + 36)) = v0_7;
    goto L_C048304;
    L_C048300:;
    R14 = (0xC12F1A8);
    goto L_C048302;
}

int kmProcessVertexRenderState(int a4)
{
    int stk[9];
    register int t0;
    register int t1;
    register int t3;
    register int t5;
    register int t6;
    int t8;
    int t12;
    register int t17;
    int t27;
    register int t33;
    int t40;
    int t45;
    register int t51;
    register int t63;
    register int t73;
    register int t91;
    register int t77;
    register int t86;
    register int t101;
    int t108;
    register int t112;
    register int t124;
    register int t134;
    int t144;
    int t149;
    int t156;
    register int t162;
    int t173;
    int t180;
    register int t177;
    register int t178;
    register int t185;
    register int t201;
    register int t194;
    register int t212;
    register int t213;
    int t214;
    register int t217;
    register int t215;
    register int t218;
    register int t219;
    int t220;
    int t259;
    register int t248;
    register int t249;
    int t252;
    int t266;
    int t279;
    int t284;
    int t292;
    int t297;
    register int t314;
    register int t302;
    int t326;
    register int t331;
    int t66;
    register int t68;
    register int t81;
    int t191;
    register int t227;
    register int t273;
    int t282;
    int t285;

    t0 = (((struct o94_int *)(a4))->v);
    t1 = (((struct o98_int *)(a4))->v);
    *(unsigned int *)(((int)stk + 8)) = ((((struct o9C_int *)(a4))->v));
    t3 = (((struct o90_int *)(a4))->v);
    t5 = (((struct o4_int *)0xC1710A0)->v);
    *(unsigned int *)(((((int)stk + 0) + 0x14) + 0x0)) = ((((struct o0_int *)0xC1710A0)->v));
    *(unsigned int *)(((((int)stk + 0) + 0x14) + 0x4)) = t5;
    t6 = (((struct oC_int *)0xC1710A0)->v);
    *(unsigned int *)(((((int)stk + 0) + 0x14) + 0x8)) = ((((struct o8_int *)0xC1710A0)->v));
    *(unsigned int *)(((((int)stk + 0) + 0x14) + 0xC)) = t6;
    t8 = *(int *)((a4 + 0x0));
    t12 = t0;
    if ((0x1 & t8) != 0) {
        t12 = ((t0 & 0x1FFFFFFF) | ((*(int *)((a4 + 0x14))) << 29));
    }
    t17 = t12;
    if ((0x2 & t8) != 0) {
        t17 = ((0xE7FFFFFF & t12) | ((*(int *)((a4 + 0x18))) << 27));
    }
    t27 = t17;
    if ((0x20 & t8) != 0) {
        t27 = (t17 & 0xFBFFFFFF);
        if ((*(int *)((a4 + 0x28))) != 0) {
            t27 = (t17 | 0x4000000);
        }
    }
    t33 = t27;
    if ((0x8 & t8) != 0) {
        t33 = ((0xFDFFFFFF & t27) | (((((unsigned int)(*(int *)((a4 + 0x20))) >> 1) << 16) << 8) << 1));
    }
    *(unsigned int *)(((int)stk + 12)) = (0x200 & t8);
    t40 = t33;
    if ((0x200 & t8) != 0) {
        t40 = ((t33 & 0xFEFFFFFF) | ((((((struct o40_int *)(a4))->v)) << 16) << 8));
    }
    t45 = t40;
    if ((0x8 & t8) != 0) {
        t45 = ((0xFF7FFFFF & t40) | (((*(int *)((a4 + 0x20))) & 0x1) << 23));
    }
    *(unsigned int *)(((int)stk + 4)) = (0x800000 & t8);
    t51 = t45;
    if ((0x800000 & t8) != 0) {
        t51 = ((0xFFBFFFFF & t45) | ((*(int *)((a4 + 0x10))) << 22));
    }
    t63 = t51;
    if ((t8 & 0x4000000) != 0) {
        t63 = (t51 & 0xFFEFFFFF);
        if (((((struct oB4_int *)(a4))->v)) != 0) {
            t63 = (t51 | 0x100000);
        }
    }
    t73 = t1;
    if (((0x40 & t8) != 0) && (t66 = *(int *)((a4 + 0x2C)), (unsigned int)t66 < (unsigned int)0xC)) {
        switch ((t66 << 1)) {
            case 0:
            {
                t68 = ((((t1 & 0x1FFFFFFF) | 0xA0000000) & 0xE3FFFFFF) | 0x10000000);
            }
                break;
            case 2:
            {
                t68 = ((((t1 & 0x1FFFFFFF) | 0x80000000) & 0xE3FFFFFF) | 0x14000000);
            }
                break;
            case 4:
            {
                t68 = (0xC0000000 | (t1 & 0x1FFFFFFF));
            }
                break;
            case 6:
            {
                t68 = (0x40000000 | (t1 & 0x1FFFFFFF));
            }
                break;
            case 8:
            {
                t68 = (0xE0000000 | (t1 & 0x1FFFFFFF));
            }
                break;
            case 10:
            {
                t68 = (0x60000000 | (t1 & 0x1FFFFFFF));
            }
                break;
            case 12:
            {
                t68 = (0xA0000000 | (t1 & 0x1FFFFFFF));
            }
                break;
            case 14:
            case 18:
            {
                t68 = t1;
            }
                break;
            case 16:
            {
                t68 = (0x80000000 | (t1 & 0x1FFFFFFF));
            }
                break;
            case 20:
            {
                t68 = (0x20000000 | (t1 & 0x1FFFFFFF));
            }
                break;
            default:
            {
                t68 = (t1 & 0x1FFFFFFF);
            }
                break;
        }
        t73 = t68;
    }
    t91 = t73;
    if ((0x80 & t8) != 0) {
        *(unsigned int *)(((int)stk + 0)) = (t73 & 0x1FFFFFFF);
        t77 = *(int *)((a4 + 0x30));
        t86 = t73;
        if ((unsigned int)t77 < (unsigned int)0xC) {
            switch ((t77 << 1)) {
                case 0:
                {
                    t81 = ((((*(int *)(((int)stk + 0))) | 0xA0000000) & 0xE3FFFFFF) | 0x10000000);
                }
                    break;
                case 2:
                {
                    t81 = ((((*(int *)(((int)stk + 0))) | 0x80000000) & 0xE3FFFFFF) | 0x14000000);
                }
                    break;
                case 4:
                {
                    t81 = (0x18000000 | (t73 & 0xE3FFFFFF));
                }
                    break;
                case 6:
                case 10:
                {
                    t81 = t73;
                }
                    break;
                case 8:
                {
                    t81 = (0x1C000000 | (t73 & 0xE3FFFFFF));
                }
                    break;
                case 12:
                {
                    t81 = (0x14000000 | (t73 & 0xE3FFFFFF));
                }
                    break;
                case 14:
                {
                    t81 = (0xC000000 | (t73 & 0xE3FFFFFF));
                }
                    break;
                case 16:
                {
                    t81 = (0x10000000 | (t73 & 0xE3FFFFFF));
                }
                    break;
                case 18:
                {
                    t81 = (0x8000000 | (t73 & 0xE3FFFFFF));
                }
                    break;
                case 20:
                {
                    t81 = ((t73 & 0xE3FFFFFF) | 0x4000000);
                }
                    break;
                default:
                {
                    t81 = (t73 & 0xE3FFFFFF);
                }
                    break;
            }
            t86 = t81;
        }
        t91 = t86;
    }
    t101 = t91;
    if ((t8 & 0x1000000) != 0) {
        t101 = (t91 & 0xFDFFFFFF);
        if ((*(int *)((a4 + 0x34))) != 0) {
            t101 = (t91 | 0x2000000);
        }
    }
    t108 = t101;
    if ((0x2000000 & t8) != 0) {
        t108 = (t101 & 0xFEFFFFFF);
        if ((*(int *)((a4 + 0x38))) != 0) {
            t108 = (t101 | 0x1000000);
        }
    }
    t112 = t108;
    if ((0x100 & t8) != 0) {
        t112 = ((0xFF3FFFFF & t108) | (((*(int *)((a4 + 0x3C))) & 0x3) << 22));
    }
    t124 = t112;
    if ((0x40000 & t8) != 0) {
        t124 = (t112 & 0xFFDFFFFF);
        if (((((struct o64_int *)(a4))->v)) != 0) {
            t124 = (t112 | 0x200000);
        }
    }
    t134 = t124;
    if ((0x400 & t8) != 0) {
        t134 = (t124 & 0xFFEFFFFF);
        if (((((struct o44_int *)(a4))->v)) != 0) {
            t134 = (t124 | 0x100000);
        }
    }
    t144 = t134;
    if ((0x800 & t8) != 0) {
        t144 = (t134 & 0xFFF7FFFF);
        if (((((struct o48_int *)(a4))->v)) != 0) {
            t144 = (t134 | 0x80000);
        }
    }
    t149 = t144;
    if ((t8 & 0x1000) != 0) {
        t149 = ((0xFFFE7FFF & t144) | (((((struct o4C_int *)(a4))->v)) << 15));
    }
    t156 = t149;
    if ((0x2000 & t8) != 0) {
        t156 = ((0xFFF9FFFF & t149) | ((((((struct o50_int *)(a4))->v)) << 16) << 1));
    }
    t162 = t156;
    if ((0x4000 & t8) != 0) {
        t162 = ((0xFFFF9FFF & t156) | ((*(int *)((((((((struct o54_int *)(a4))->v)) << 2) + (((int)stk + 0) + 0x14)) + 0x0))) << 13));
    }
    t173 = t162;
    if ((0x8000 & t8) != 0) {
        t173 = (t162 & 0xFFFFEFFF);
        if (((((struct o58_int *)(a4))->v)) != 0) {
            t173 = (t162 | 0x1000);
        }
    }
    t180 = t173;
    if ((0x10000 & t8) != 0) {
        t177 = (((struct o5C_int *)(a4))->v);
        t178 = (t177 & 0xF);
        if ((t177 & 0xF) == 0) {
            t178 = 0x4;
        }
        t180 = ((0xFFFFF0FF & t173) | (t178 << 8));
    }
    t185 = t180;
    if ((0x20000 & t8) != 0) {
        t185 = ((0xFFFFFF3F & t180) | ((((((((struct o60_int *)(a4))->v)) & 0x3) << 2) << 2) << 2));
    }
    t201 = t185;
    if ((((*(int *)((a4 + 0x20))) >> 1) == 1) && (t191 = (((struct o6C_int *)(a4))->v), t191 != 0)) {
        t194 = kmiConvertUVnum((*(int *)((((((struct o6C_int *)(a4))->v)) + 0xC))));
        *(unsigned int *)(((int)stk + 0)) = ((t185 & 0xFFFFFFC7) | ((t194 << 2) << 1));
        t201 = ((((t185 & 0xFFFFFFC7) | ((t194 << 2) << 1)) & 0xFFFFFFF8) | (kmiConvertUVnum((*(int *)((((((struct o6C_int *)(a4))->v)) + 0x10))))));
    }
    if (((*(int *)((a4 + 0x20))) >> 1) != 1) {
    } else {
        if (((((struct o6C_int *)(a4))->v)) != 0) {
            t212 = (((struct o6C_int *)(a4))->v);
            t213 = *(int *)(((int)stk + 8));
            t214 = *(int *)((t212 + 0x18));
            t217 = ((0x1 & t214) & 0x1);
            t215 = (int)(((unsigned int)t217 >> 1) | ((unsigned int)t217 << 31));
            t218 = *(int *)((t212 + 0x8));
            if (((((((((t213 & 0x7FFFFFFF) | t215) & 0xBFFFFFFF) | ((t214 & 0x8) << 27)) & 0xC7FFFFFF) | (t218 & 0x38000000)) & 0x38000000) != 0x28000000) && ((((((((t213 & 0x7FFFFFFF) | t215) & 0xBFFFFFFF) | ((t214 & 0x8) << 27)) & 0xC7FFFFFF) | (t218 & 0x38000000)) & 0x38000000) != 0x30000000)) {
                t219 = (((struct o6C_int *)(a4))->v);
                *(unsigned int *)(((int)stk + 16)) = t219;
                t220 = *(int *)((t219 + 0x18));
                t227 = ((0xFDFFFFFF & ((((((((t213 & 0x7FFFFFFF) | t215) & 0xBFFFFFFF) | ((t214 & 0x8) << 27)) & 0xC7FFFFFF) | (t218 & 0x38000000)) & 0xFBFFFFFF) | ((((~(0x4 & t220)) & 0x4) << 16) << 8))) | ((t220 & 0x10) << 21));
            } else {
                t227 = ((0xF81FFFFF & ((((((t213 & 0x7FFFFFFF) | t215) & 0xBFFFFFFF) | ((t214 & 0x8) << 27)) & 0xC7FFFFFF) | (t218 & 0x38000000))) | ((((((struct o68_int *)(a4))->v)) & 0x3F) << 21));
            }
            *(unsigned int *)(((int)stk + 8)) = ((t227 & 0xFFE00000) | ((unsigned int)((unsigned int)(*(int *)((((((struct o6C_int *)(a4))->v)) + 0x1C))) >> 2) >> 1));
        }
    }
    t259 = t3;
    if ((0x100000 & t8) != 0) {
        t248 = *(int *)((a4 + 0x4));
        t249 = t3;
        if (t248 == 0) {
            t249 = (0x80000000 | (t3 & 0x1FFFFFFF));
        }
        t252 = t249;
        if (t248 == 1) {
            t252 = (0x80000000 | (t249 & 0x1FFFFFFF));
        }
        t259 = t252;
        if (t248 == 2) {
            t259 = (0xA0000000 | (0x1FFFFFFF & t252));
        }
    }
    t266 = t259;
    if ((0x200000 & t8) != 0) {
        t266 = ((0xF8FFFFFF & t259) | (((*(int *)((a4 + 0x8))) << 16) << 8));
    }
    if ((0x8000000 & t8) != 0) {
        t273 = ((((struct oB8_int *)(a4))->v));
    } else {
        t273 = (*(int *)0xC300AAC);
    }
    t279 = (((t273 << 16) << 2) | (0xFFF3FFFF & (t266 | 0x800000)));
    if ((0x10000000 & t8) != 0) {
        t279 = ((0xFFFCFFFF & (((t273 << 16) << 2) | (0xFFF3FFFF & (t266 | 0x800000)))) | (((((struct oBC_int *)(a4))->v)) << 16));
    }
    t284 = (0xFFFFFF3F & t279);
    if (((((((struct oA0_int *)(a4))->v)) & 0x60000000) != 0) && (t282 = *(int *)((a4 + 0x8)), (t282 & 1) != 0)) {
        t284 = (0x40 | (0xFFFFFF3F & t279));
    }
    t292 = t284;
    if (((0x10 & t8) != 0) && (t285 = *(int *)((a4 + 0x24)), (t285 & 1) != 0)) {
        t292 = ((0xFFFFFFBF & ((0xFFFFFF7F & t284) | ((*(int *)((a4 + 0x24))) << 7))) | ((((*(int *)0xC17412C) << 2) << 2) << 2));
    }
    t297 = t292;
    if ((t8 & 0x400000) != 0) {
        t297 = ((0xFFFFFFCF & t292) | (((*(int *)((a4 + 0xC))) << 2) << 2));
    }
    t314 = t297;
    if ((0x8 & t8) != 0) {
        t302 = *(int *)((a4 + 0x20));
        t314 = ((0xFFFFFFF7 & t297) | ((((unsigned int)t302 >> 1) << 2) << 1));
        if ((0x8 & t8) != 0) {
            t314 = ((0xFFFFFFFD & ((0xFFFFFFF7 & t297) | ((((unsigned int)t302 >> 1) << 2) << 1))) | (((*(int *)((a4 + 0x20))) & 0x1) << 1));
        }
    }
    t326 = t314;
    if ((*(int *)(((int)stk + 12))) != 0) {
        t326 = (t314 & 0xFFFFFFFB);
        if (((((struct o40_int *)(a4))->v)) != 0) {
            t326 = (t314 | 0x4);
        }
    }
    t331 = t326;
    if ((*(int *)(((int)stk + 4))) != 0) {
        t331 = ((*(int *)((a4 + 0x10))) | (0xFFFFFFFE & t326));
    }
    (((struct o94_uint *)(a4))->v) = (t63 & 0xFFD00000);
    (((struct o98_uint *)(a4))->v) = t201;
    (((struct o9C_uint *)(a4))->v) = (*(int *)(((int)stk + 8)));
    (((struct o90_uint *)(a4))->v) = (t331 & 0xE78F00FF);
    return 0x0;
}
