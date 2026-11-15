/* Straight-line functions with calls and guards (batch gen_az): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o104_float { char p[0x104]; float v; };
struct o108_uchar { char p[0x108]; unsigned char v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o184_float { char p[0x184]; float v; };
struct o190_float { char p[0x190]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o2_short { char p[0x2]; short v; };
struct o20_float { char p[0x20]; float v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o48_int { char p[0x48]; int v; };
struct o50_float { char p[0x50]; float v; };
struct o50_int { char p[0x50]; int v; };
struct o54_int { char p[0x54]; int v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o58_int { char p[0x58]; int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o60_int { char p[0x60]; int v; };
struct o68_int { char p[0x68]; int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o70_int { char p[0x70]; int v; };
struct o78_int { char p[0x78]; int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o84_int { char p[0x84]; int v; };
struct o84_uint { char p[0x84]; unsigned int v; };
struct o90_float { char p[0x90]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA4_short { char p[0xA4]; short v; };
struct oA6_short { char p[0xA6]; short v; };
struct oA6_ushort { char p[0xA6]; unsigned short v; };
struct oA8_short { char p[0xA8]; short v; };
struct oA8_ushort { char p[0xA8]; unsigned short v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC8_float { char p[0xC8]; float v; };
struct oCC_float { char p[0xCC]; float v; };
struct oF8_float { char p[0xF8]; float v; };
struct oFC_float { char p[0xFC]; float v; };
int CalcShadow2Matrix(int);
int CalcShadow4Normal(int, int);
int FUN_0c026ce6(void);
int FUN_0c029b12(int, float);
int FUN_0c02e42a(int, int, int);
int FUN_0c03f154(int);
int FUN_0c040704(int, int);
int FUN_0c040bec(int, int, int, float);
int FUN_0c041298(int);
int FUN_0c0415ba(int);
int FUN_0c0423c8(int);
int FUN_0c043706(int);
int FUN_0c046724(int, int, float);
int FUN_0c046814(int);
int FUN_0c046d8c(int, int, int, int, int);
int FUN_0c052dba(int, int, float, float);
int FUN_0c058ca6(int, int);
int FUN_0c058f64(int, int, int, int);
int FUN_0c05b586(int);
int FUN_0c070e60(void);
int FUN_0c072230(int, int);
int FUN_0c072290(int, int);
int FUN_0c072600(int);
int FUN_0c073360(void);
int FUN_0c073a30(float, float, float);
int FUN_0c073a60(int);
float FUN_0c073b40(int, int);
int FUN_0c073c40(int, int, float);
float FUN_0c073c60(int);
float FUN_0c073e10(int);
int FUN_0c074f20(float);
int FUN_0c075d60(void);
int FUN_0c076230(float, float, float);
int FUN_0c07ff00(void);
int GetRotVec(int);
int GetRotVec4Ang(int, int, int, int);
int KillColliObj(int);
int MultiRot4Vec(int);
int SetBubble(int, int);
extern int Voice_ShutUp();
int nlAddVector(int, int);
int nlAddVector3op(int, int, int);
int nlArcTan2(float, float);
int nlCloseEvent(int);
int nlGetPushedMatrix(int);
float nlLength(int, int);
int nlMultiMatrixRevOrder8(int);
int nlObjPutUseViewMatrix(int);
int nlOuterProduct(int, int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlQuickInvertMatrix(void);
int nlRotate(int, int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlRotateV(int, int);
int nlScale(float, float, float);
int nlScaleUnitVector(int, int, float);
int nlSubVector(int, int);
int nlSubVector3op(int, int, int);
int nlUnitVectorsd(int, int);
int thunk_FUN_0c0765b0(void);
int FUN_0c02ebf0(int a4);
float FUN_0c02e7a6(int a4, int a5);
int FUN_0c045d66(int a4);
int FUN_0c05e33e(int a4, int a5);
int FUN_0c050958(int a4, int a5, int a6, int a7);

int FUN_0c02ebf0(int a4)
{
    int stk[6];
    register float t3;
    register float u5;
    register float u24;
    register float u35;
    register float t26;
    register float t44;
    register int t64;
    register int t65;
    register int t67;
    register int t77;
    register float u92;
    register float u117;
    register float t119;
    register int t127;
    int t121;

    FUN_0c073c40((((int)stk + 0) + 0xC), (a4 + 0x20), 120.0f);
    nlAddVector((((int)stk + 0) + 0xC), (a4 + 0x14));
    nlSubVector3op((((int)stk + 0) + 0xC), 0xC277820, (((int)stk + 0) + 0xC));
    *(float *)(((int)stk + 16)) = 0.0f;
    t3 = FUN_0c073e10((((int)stk + 0) + 0xC));
    u5 = (((struct o0_float *)0xC277824)->v);
    if (u5 > ((((struct o18_float *)(a4))->v))) {
        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + 0.00499999989f);
    } else {
        if (((((struct o18_float *)(a4))->v)) > (u5 + 50.0f)) {
            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - 0.00499999989f);
        }
    }
    u24 = ((((struct o50_float *)(a4))->v));
    u24 = u24 + 0.100000001f * (((-((((struct o50_float *)(a4))->v))) + 0.166666597f));
    (((struct o50_float *)(a4))->v) = u24;
    if (0.0f > u24) {
        (((struct o50_float *)(a4))->v) = 0.0f;
    }
    u35 = t3;
    if (t3 > 500.0f) {
        t26 = FUN_0c073b40((((int)stk + 0) + 0xC), (a4 + 0x2C));
        if (t26 > 0.699999988f) {
            nlAddVector((a4 + 0x20), (a4 + 0x2C));
        }
        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + 0.00499999989f);
        u35 = 500.0f;
    }
    FUN_0c073c40((((int)stk + 0) + 0xC), (((int)stk + 0) + 0xC), (u35 * 0.00200000009f));
    nlAddVector((((int)stk + 0) + 0xC), 0xC0A2D5C);
    nlSubVector((((int)stk + 0) + 0xC), (a4 + 0x38));
    nlOuterProduct((a4 + 0x38), (((int)stk + 0) + 0xC), (((int)stk + 0) + 0xC));
    t44 = FUN_0c073c60((((int)stk + 0) + 0xC));
    FUN_0c073360();
    FUN_0c073a60((a4 + 0x14));
    if (t44 > 0.0f) {
        nlRotate((((int)stk + 0) + 0xC), (int)(t44 * 50.0f));
    }
    MultiRot4Vec((a4 + 0x2C));
    nlRotateAY(((((struct o58_int *)(a4))->v)));
    GetRotVec((a4 + 0x2C));
    nlPushMatrix(0x0);
    nlQuickInvertMatrix();
    FUN_0c072230(0xC27782C, (((int)stk + 0) + 0xC));
    nlPopMatrix(0x1);
    nlRotateAY(((((struct o54_int *)(a4))->v)));
    nlPopMatrix(0x1);
    t64 = nlArcTan2((-(*(float *)(((int)stk + 12)))), (*(float *)(((int)stk + 20))));
    t65 = t64;
    if ((int)(short)t64 > (int)0x1000) {
        t65 = 0x1000;
    }
    t67 = t65;
    if ((int)(short)t65 < (int)0xFFFFF000) {
        t67 = 0xFFFFF000;
    }
    (((struct o58_uint *)(a4))->v) = (((((struct o58_int *)(a4))->v)) - ((int)(short)t67 >> 10));
    (((struct o58_uint *)(a4))->v) = (int)((float)((((struct o58_int *)(a4))->v)) * 0.980000019f);
    FUN_0c073c40((a4 + 0x20), (a4 + 0x20), 0.980000019f);
    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) - 0.166666597f);
    FUN_0c073c40((((int)stk + 0) + 0xC), (a4 + 0x38), ((((struct o50_float *)(a4))->v)));
    nlAddVector((a4 + 0x20), (((int)stk + 0) + 0xC));
    nlAddVector((a4 + 0x14), (a4 + 0x20));
    t77 = FUN_0c029b12((a4 + 0x14), 40.0f);
    if ((*(int *)((t77 + 0x1C))) != -1) {
        if ((((((struct o18_float *)(t77))->v)) + 100.0f) > ((((struct o18_float *)(a4))->v))) {
            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + 0.00999999978f);
        }
        if (((((struct o18_float *)(t77))->v)) > (((((struct o18_float *)(a4))->v)) + -15.0f)) {
            (((struct o18_float *)(a4))->v) = (((((struct o18_float *)(t77))->v)) + 15.0f);
            if (0.0f > ((((struct o24_float *)(a4))->v))) {
                u92 = ((((struct o24_float *)(a4))->v));
                u92 *= -0.600000024f;
                (((struct o24_float *)(a4))->v) = u92;
            }
            FUN_0c073c40((a4 + 0x20), (a4 + 0x20), 0.899999976f);
        }
        CalcShadow4Normal(((int)stk + 0), (t77 + 0xC));
        FUN_0c073360();
        FUN_0c073a60(t77);
        CalcShadow2Matrix(((int)stk + 0));
        nlScale(20.0f, 20.0f, 20.0f);
        FUN_0c073a30(0.0f, 0.100000001f, 0.0f);
        FUN_0c074f20(20.0f);
        nlObjPutUseViewMatrix(0xC4F4890);
        nlPopMatrix(0x1);
    }
    u117 = 8225.0f;
    u117 = u117 + 1000.0f * ((((struct o50_float *)(a4))->v));
    (((struct o54_uint *)(a4))->v) = (int)((float)((((struct o54_int *)(a4))->v)) + u117);
    t119 = nlLength((a4 + 0x14), 0xC175930);
    if ((t119 > ((((struct o0_float *)0xC02F0E4)->v))) && (t121 = (((struct o18_int *)0xC277824)->v), t121 != 0)) {
        FUN_0c058ca6(0x108A9, 0x0);
    }
    t127 = 0xC02F0F4;
    if (t119 > ((((struct o10_float *)0xC02F0E4)->v))) {
        t127 = nlCloseEvent(a4);
        (((struct o14_uint *)0xC277824)->v) = 0x0;
    }
    return t127;
}

float FUN_0c02e7a6(int a4, int a5)
{
    int stk[17];

    register int R1;
    register int R2;
    register int R3;
    register int R6;
    register float F2;
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
    int R1000;
    int R1004;
    int R1008;
    int R1012;
    int R1016;
    R1000 = *(int *)((int)stk + 0);
    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);
    R1016 = *(int *)((int)stk + 16);
    v0_4 = a4;
    v0_5 = a5;
    R1004 = v0_5;
    w0_1 = FUN_0c073c60(v0_5);
    v0_7 = (((struct o2_short *)0xC17593E)->v);
    v0_3 = (0xC1758B4);
    v0_0 = (0x0);
    v0_2 = (v0_4);
    v0_4 = ((unsigned short)(((((struct o0_short *)0xC17593E)->v)) - (*(short *)0xC1759AC)));
    v0_5 = ((unsigned short)v0_7);
    v0_6 = (0x2);
    v0_1 = (0x1);
    w0_0 = (w0_1);
    w0_1 = (w0_1);
    if (((int)(unsigned short)v0_7 < 0)) goto L_C02E7F0;
    if (((int)v0_5 < (int)0x800)) goto L_C02E7FC;
    L_C02E7F0:;
    if (((int)v0_5 <= (int)0xF800)) goto L_C02E864;
    if (((int)v0_5 > (int)0xFFFF)) goto L_C02E864;
    L_C02E7FC:;
    if (((int)v0_4 <= (int)0x1800)) goto L_C02E814;
    if (((int)v0_4 >= (int)0xE800)) goto L_C02E814;
    if ((!(w0_1 > (1.0f + 1.0f)))) goto L_C02E814;
    R1016 = v0_6;
    L_C02E866:;
    R1012 = v0_0;
    R1008 = v0_0;
    R1000 = v0_0;
    if (!(((int)v0_0 < (int)0x4))) goto L_C02E9B2;
    v0_5 = (0xC129580);
    w0_2 = (-0.400000006f);
    w0_3 = (1.0f);
    w0_4 = (-0.600000024f);
    goto L_C02E884;
    L_C02E9B2:;
    v0_8 = R1012;
    v0_6 = (v0_8);
    v0_5 = (0xC277810);
    v0_7 = (0xC277814);
    v0_2 = (0xC277818);
    v0_4 = (0x1E);
    if ((v0_8 != 4)) goto L_C02EA0A;
    *(unsigned int *)((v0_7 + 0x0)) = v0_4;
    *(unsigned int *)((v0_2 + 0x0)) = v0_1;
    v0_2 = (((struct o0_int *)0xC277808)->v);
    (((struct o0_uint *)0xC277808)->v) = (v0_2 - 1);
    if (((v0_2 - 1) != 0)) goto L_C02E9FC;
    if ((((((struct o4_int *)0xC277808)->v)) != 0)) goto L_C02E9FC;
    FUN_0c040bec(0x6, (*(int *)((v0_5 + 0x0))), R6, F4);
    v0_2 = (((struct o58_int *)(v0_3))->v);
    v0_6 = (v0_2);
    if ((v0_2 != 2)) goto L_C02E9F0;
    v0_6 = ((FUN_0c040704(0x1, (*(int *)((v0_5 + 0x0))))));
    L_C02E9F0:;
    (((struct o0_uint *)0xC277808)->v) = 0x14;
    *(unsigned int *)((v0_5 + 0x0)) = ((*(int *)((v0_5 + 0x0))) + 0x1);
    L_C02E9FC:;
    if ((((*(int *)((v0_3 + 0x20))) & 0x800FFFFE) == 0)) goto L_C02EA76;
    (((struct o4_uint *)0xC277808)->v) = v0_1;
    v0_6 = (0xC27780C);
    L_C02EA76:;
    v0_2 = (0xC1295B0);
    if (((R1008) == 0)) goto L_C02EA94;
    if ((((((struct o14_int *)0xC277808)->v)) != 0)) goto L_C02EA94;
    FUN_0c058ca6(0x306A9, 0x0);
    v0_4 = (0x6A9);
    v0_5 = (0x1);
    L_C02EAEE:;
    v0_3 = FUN_0c058ca6(v0_4, v0_5);
    *(unsigned int *)((v0_2 + 0x0)) = v0_1;
    v0_6 = (v0_3);
    L_C02EAF6:;
    (((struct o14_uint *)0xC277808)->v) = (R1008);
    v0_4 = (0xC1295A4);
    v0_5 = (((((struct o0_int *)0xC1295A0)->v)));
    if ((((((struct o4_int *)0xC1295A0)->v)) == 0)) goto L_C02EB40;
    if ((v0_5 != 0)) goto L_C02EB5C;
    v0_1 = *(int *)((v0_4 + 0x0));
    *(unsigned int *)((v0_4 + 0x0)) = (v0_1 - 1);
    v0_6 = ((v0_1 - 1));
    L_C02EB5C:;
    v0_4 = (0xC1295AC);
    v0_5 = (((((struct o8_int *)0xC1295A0)->v)));
    if ((((((struct oC_int *)0xC1295A0)->v)) == 0)) goto L_C02EB74;
    if ((v0_5 != 0)) goto L_C02EB96;
    *(unsigned int *)((v0_4 + 0x0)) = ((*(int *)((v0_4 + 0x0))) - 1);
    L_C02EB96:;
    (((struct o8_uint *)0xC1295A0)->v) = v0_0;
    (((struct o0_uint *)0xC1295A0)->v) = v0_0;
    return w0_0;
    L_C02EB74:;
    if ((v0_5 == 0)) goto L_C02EB96;
    v0_6 = (0xC1295A4);
    if ((((((struct o4_int *)0xC1295A0)->v)) != 0)) goto L_C02EB96;
    *(unsigned int *)((v0_4 + 0x0)) = 0x6;
    v0_1 = *(int *)((0xC129614 + (((FUN_0c070e60()) & 0x7) << 2)));
    v0_6 = ((FUN_0c058ca6(v0_1, 0x0)));
    goto L_C02EB96;
    L_C02EB40:;
    if ((v0_5 == 0)) goto L_C02EB5C;
    *(unsigned int *)((v0_4 + 0x0)) = 0x6;
    v0_1 = *(int *)((0xC1295F4 + (((FUN_0c070e60()) & 0x7) << 2)));
    v0_6 = ((FUN_0c058ca6(v0_1, 0x0)));
    goto L_C02EB5C;
    L_C02EA94:;
    if (((R1008) != 0)) goto L_C02EAB6;
    if ((((((struct o14_int *)0xC277808)->v)) == 0)) goto L_C02EAB6;
    FUN_0c058ca6(0x406A9, 0x0);
    v0_6 = ((FUN_0c058ca6(0x206A9, 0x1)));
    L_C02EADA:;
    *(unsigned int *)((v0_2 + 0x0)) = v0_0;
    goto L_C02EAF6;
    L_C02EAB6:;
    if (((R1008) == 0)) goto L_C02EAF6;
    v0_3 = *(int *)((v0_2 + 0x0));
    v0_4 = (v0_3);
    if ((v0_3 == 0)) goto L_C02EADE;
    v0_6 = (0xC02EB30);
    if ((!(0.400000006f > w0_1))) goto L_C02EADE;
    FUN_0c058ca6(0x406A9, 0x0);
    v0_6 = ((FUN_0c058ca6(0x106A9, 0x0)));
    goto L_C02EADA;
    L_C02EADE:;
    if ((v0_4 != 0)) goto L_C02EAF6;
    v0_6 = (0xC02EB30);
    if ((!(w0_1 > 0.400000006f))) goto L_C02EAF6;
    v0_4 = (0x306A9);
    v0_5 = (0x0);
    goto L_C02EAEE;
    L_C02EA0A:;
    (((struct o0_uint *)0xC277808)->v) = v0_4;
    (((struct o4_uint *)0xC277808)->v) = v0_0;
    *(unsigned int *)((v0_5 + 0x0)) = v0_1;
    v0_4 = R1016;
    v0_6 = (v0_4);
    if ((v0_4 != 2)) goto L_C02EA70;
    v0_4 = *(int *)((v0_7 + 0x0));
    *(unsigned int *)((v0_7 + 0x0)) = (v0_4 - 1);
    if (((v0_4 - 1) != 0)) goto L_C02EA76;
    FUN_0c040bec(0x5, (*(int *)((v0_2 + 0x0))), R6, F4);
    v0_3 = (((struct o58_int *)(v0_3))->v);
    v0_6 = (v0_3);
    if ((v0_3 != 2)) goto L_C02EA3C;
    v0_6 = ((FUN_0c040704(0x2, (*(int *)((v0_2 + 0x0))))));
    L_C02EA3C:;
    *(unsigned int *)((v0_7 + 0x0)) = 0xF;
    *(unsigned int *)((v0_2 + 0x0)) = ((*(int *)((v0_2 + 0x0))) + 0x1);
    goto L_C02EA76;
    L_C02EA70:;
    *(unsigned int *)((v0_7 + 0x0)) = 0x14;
    *(unsigned int *)((v0_2 + 0x0)) = v0_1;
    goto L_C02EA76;
    L_C02E884:;
    if (((int)(*(int *)((v0_2 + 0x0))) >= 0)) goto L_C02E8A6;
    *(unsigned int *)((v0_5 + ((R1000) << 2))) = 0x64;
    if (!(((*(int *)0xC1EC71C) != 2))) goto L_C02E99E;
    R1012 = ((R1012) + 0x1);
    goto L_C02E99E;
    L_C02E99E:;
    v0_4 = R1000;
    R1000 = (v0_4 + 0x1);
    v0_2 = ((v0_2 + 0x84));
    if (((int)(v0_4 + 0x1) >= (int)0x4)) goto L_C02E9B2;
    goto L_C02E884;
    L_C02E8A6:;
    v0_7 = *(int *)((v0_2 + 0x0));
    v0_4 = (v0_7);
    if ((v0_7 == 3)) goto L_C02E8C6;
    if ((v0_4 == 23)) goto L_C02E8C6;
    if ((v0_4 == 8)) goto L_C02E8C6;
    if ((v0_4 == 9)) goto L_C02E8C6;
    if (!((v0_4 != 14))) goto L_C02E8C6;
    if (((*(int *)((v0_2 + 0x0))) != 5)) goto L_C02E8DA;
    R1008 = ((R1008) + 0x1);
    R6 = (0x5);
    goto L_C02E8DC;
    L_C02E8C6:;
    R6 = (v0_6);
    L_C02E8DC:;
    v0_4 = R1000;
    v0_7 = ((v0_4 << 2));
    if (((*(int *)(((v0_4 << 2) + 0xC129590))) == (*(int *)((v0_2 + 0x0))))) goto L_C02E8F4;
    if ((R6 == 0)) goto L_C02E8F4;
    *(unsigned int *)((v0_5 + v0_7)) = 0x64;
    L_C02E8F4:;
    if (((int)(R1000) >= (int)v0_6)) goto L_C02E918;
    F4 = ((((((struct o184_float *)(v0_3))->v)) + w0_4));
    L_C02E91E:;
    if (((R1016) == 0)) goto L_C02E92C;
    if ((R6 != 0)) goto L_C02E92C;
    R6 = (v0_1);
    F4 = (w0_3);
    L_C02E92C:;
    if ((F4 > 0.0f)) goto L_C02E93C;
    if ((R6 == 0)) goto L_C02E944;
    if ((!(w0_1 > 1.0f))) goto L_C02E944;
    L_C02E93C:;
    *(unsigned int *)((v0_5 + v0_7)) = ((*(int *)((v0_5 + v0_7))) + 0x1);
    L_C02E944:;
    v0_4 = (v0_5);
    if ((R6 != 5)) goto L_C02E974;
    if (((int)(*(int *)((v0_4 + v0_7))) <= 0)) goto L_C02E998;
    FPUL_ = (0x3ECCCCCD);
    if ((!(w0_1 > 0.400000006f))) goto L_C02E998;
    FUN_0c02e42a((v0_2 + 0x5C), (R1004), 0x5);
    *(unsigned int *)((v0_5 + v0_7)) = v0_0;
    L_C02E998:;
    *(unsigned int *)((v0_7 + 0xC129590)) = (*(int *)((v0_2 + 0x0)));
    goto L_C02E99E;
    L_C02E974:;
    if (((int)(*(int *)((v0_4 + v0_7))) <= (int)0x5)) goto L_C02E998;
    FUN_0c02e42a((v0_2 + 0x5C), (R1004), R6);
    *(unsigned int *)((v0_5 + v0_7)) = v0_0;
    if (((*(int *)((v0_2 + 0x0))) != 14)) goto L_C02E998;
    SetBubble((v0_2 + 0x5C), (R1004));
    goto L_C02E998;
    L_C02E918:;
    F4 = ((((((struct o190_float *)(v0_3))->v)) + w0_2));
    goto L_C02E91E;
    L_C02E8DA:;
    R6 = (v0_0);
    goto L_C02E8DC;
    L_C02E814:;
    if (((int)v0_4 <= (int)0x1000)) goto L_C02E864;
    if (((int)v0_4 >= (int)0xF000)) goto L_C02E864;
    if ((!(w0_1 > 1.0f))) goto L_C02E864;
    R1016 = v0_1;
    goto L_C02E866;
    L_C02E864:;
    R1016 = v0_0;
    goto L_C02E866;
}


int FUN_0c05e33e(int a4, int a5)
{
    int stk[1];
    register int t0;
    int R1000;

    R1000 = *(int *)((int)stk + 0);

    R1000 = a5;
    t0 = *(int *)(((a4 << 2) + 0xC13AC90));
    nlPushMatrix(0x0);
    if (((R1000) & 1) != 0) {
        FUN_0c073a30(0.0f, (*(float *)0xC2B973C), 0.0f);
    } else {
        FUN_0c073a60(0xC2B9738);
    }
    FUN_0c05b586(0xC2B9744);
    nlPushMatrix(0x0);
    FUN_0c05b586(0xC2B9750);
    R1000 = (t0 + 0x8);
    if ((*(int *)(((t0 + 0x8) + 0x0))) != 0) {
        nlPushMatrix(0x0);
        thunk_FUN_0c0765b0();
        nlMultiMatrixRevOrder8(0xC2B96F8);
        FUN_0c075d60();
        nlPopMatrix(0x1);
    }
    nlPushMatrix(0x0);
    FUN_0c073a30(4.4849f, 0.0f, 0.0f);
    FUN_0c05b586(0xC2B975C);
    R1000 = (t0 + 0x10);
    if ((*(int *)(((t0 + 0x10) + 0x0))) != 0) {
        nlPushMatrix(0x0);
        thunk_FUN_0c0765b0();
        nlMultiMatrixRevOrder8(0xC2B96F8);
        FUN_0c075d60();
        nlPopMatrix(0x1);
    }
    nlGetPushedMatrix(0x0);
    FUN_0c073a30(3.66109991f, 0.0560000017f, -1.78760004f);
    FUN_0c05b586(0xC2B9768);
    R1000 = (t0 + 0x18);
    if ((*(int *)(((t0 + 0x18) + 0x0))) != 0) {
        nlPushMatrix(0x0);
        thunk_FUN_0c0765b0();
        nlMultiMatrixRevOrder8(0xC2B96F8);
        FUN_0c075d60();
        nlPopMatrix(0x1);
    }
    FUN_0c073a30(2.5079999f, 0.0f, 0.0f);
    FUN_0c05b586(0xC2B9774);
    R1000 = (t0 + 0x20);
    if ((*(int *)(((t0 + 0x20) + 0x0))) != 0) {
        nlPushMatrix(0x0);
        thunk_FUN_0c0765b0();
        nlMultiMatrixRevOrder8(0xC2B96F8);
        FUN_0c075d60();
        nlPopMatrix(0x1);
    }
    nlPopMatrix(0x1);
    FUN_0c073a30(3.66109991f, 0.0560000017f, 1.78760004f);
    FUN_0c05b586(0xC2B9780);
    R1000 = (t0 + 0x30);
    if ((*(int *)(((t0 + 0x30) + 0x0))) != 0) {
        nlPushMatrix(0x0);
        thunk_FUN_0c0765b0();
        nlMultiMatrixRevOrder8(0xC2B96F8);
        FUN_0c075d60();
        nlPopMatrix(0x1);
    }
    FUN_0c073a30(2.5079999f, 0.0f, 0.0f);
    FUN_0c05b586(0xC2B978C);
    R1000 = (t0 + 0x38);
    if ((*(int *)(((t0 + 0x38) + 0x0))) != 0) {
        nlPushMatrix(0x0);
        thunk_FUN_0c0765b0();
        nlMultiMatrixRevOrder8(0xC2B96F8);
        FUN_0c075d60();
        nlPopMatrix(0x1);
    }
    nlPopMatrix(0x1);
    FUN_0c05b586(0xC2B9798);
    R1000 = (t0 + 0x48);
    if (((((struct o48_int *)(t0))->v)) != 0) {
        nlPushMatrix(0x0);
        thunk_FUN_0c0765b0();
        nlMultiMatrixRevOrder8(0xC2B96F8);
        FUN_0c075d60();
        nlPopMatrix(0x1);
    }
    nlPushMatrix(0x0);
    FUN_0c073a30(1.16030002f, 0.148599997f, -1.17639995f);
    FUN_0c05b586(0xC2B97A4);
    R1000 = (t0 + 0x50);
    if (((((struct o50_int *)(t0))->v)) != 0) {
        nlPushMatrix(0x0);
        thunk_FUN_0c0765b0();
        nlMultiMatrixRevOrder8(0xC2B96F8);
        FUN_0c075d60();
        nlPopMatrix(0x1);
    }
    FUN_0c073a30(4.05100012f, 0.0f, 0.0f);
    FUN_0c05b586(0xC2B97B0);
    R1000 = (t0 + 0x58);
    if (((((struct o58_int *)(t0))->v)) != 0) {
        nlPushMatrix(0x0);
        thunk_FUN_0c0765b0();
        nlMultiMatrixRevOrder8(0xC2B96F8);
        FUN_0c075d60();
        nlPopMatrix(0x1);
    }
    FUN_0c073a30(4.24660015f, 0.0f, 0.0f);
    R1000 = (t0 + 0x60);
    if (((((struct o60_int *)(t0))->v)) != 0) {
        nlPushMatrix(0x0);
        thunk_FUN_0c0765b0();
        nlMultiMatrixRevOrder8(0xC2B96F8);
        FUN_0c075d60();
        nlPopMatrix(0x1);
    }
    nlPopMatrix(0x1);
    FUN_0c073a30(1.16030002f, 0.148599997f, 1.17639995f);
    FUN_0c05b586(0xC2B97BC);
    R1000 = (t0 + 0x68);
    if (((((struct o68_int *)(t0))->v)) != 0) {
        nlPushMatrix(0x0);
        thunk_FUN_0c0765b0();
        nlMultiMatrixRevOrder8(0xC2B96F8);
        FUN_0c075d60();
        nlPopMatrix(0x1);
    }
    FUN_0c073a30(4.05100012f, 0.0f, 0.0f);
    FUN_0c05b586(0xC2B97C8);
    if (((((struct o70_int *)(t0))->v)) != 0) {
        nlPushMatrix(0x0);
        thunk_FUN_0c0765b0();
        nlMultiMatrixRevOrder8(0xC2B96F8);
        FUN_0c075d60();
        nlPopMatrix(0x1);
    }
    FUN_0c073a30(4.24660015f, 0.0f, 0.0f);
    if (((((struct o78_int *)(t0))->v)) != 0) {
        nlPushMatrix(0x0);
        thunk_FUN_0c0765b0();
        nlMultiMatrixRevOrder8(0xC2B96F8);
        FUN_0c075d60();
        nlPopMatrix(0x1);
    }
    return (nlPopMatrix(0x1));
}

int FUN_0c050958(int a4, int a5, int a6, int a7)
{
    register int t0;
    register float u0;

    (((struct o24_uint *)0xC2B2690)->v) = 0x200A;
    (((struct o20_uint *)0xC2B2690)->v) = 0x2;
    if ((*(int *)0xC1EC720) == 2) {
        if ((*(int *)0xC2AC2F0) == 0) {
            if (a4 == 115) {
                t0 = ((int (*)(int, int, int, int))(Voice_ShutUp))(0x0, a5, a6, a7);
                FUN_0c058f64(0xC131FE4, 0x0, 0x78, 0x0);
            }
            if (a4 == 45) {
                t0 = ((int (*)(int))(Voice_ShutUp))(0x0);
                FUN_0c058f64(0xC131FFC, 0x0, 0x78, 0x0);
            }
        } else {
            if (a4 == 100) {
                t0 = ((int (*)(int, int, int, int))(Voice_ShutUp))(0x0, a5, a6, a7);
                FUN_0c058f64(0xC132014, 0x0, 0x7D, 0x0);
            }
        }
        if ((*(int *)0xC2AC2F0) == 0) {
            if (((int)a4 > (int)0x32) && ((int)a4 < (int)0x78)) {
                FUN_0c076230(1.0f, ((((struct o24_float *)0xC050D6C)->v)), ((((struct o20_float *)0xC050D6C)->v)));
                u0 = ((float)(a4 - 110) * 0.100000001f);
                if (0.0f > ((float)(a4 - 110) * 0.100000001f)) {
                    u0 = 0.0f;
                }
                (((struct o1C_float *)0xC2B2690)->v) = (1.0f - u0);
                u0 = ((float)(a4 - 110) * 0.100000001f);
                if (0.0f > ((float)(a4 - 110) * 0.100000001f)) {
                    u0 = 0.0f;
                }
                (((struct o4_float *)0xC2B2690)->v) = (1.0f - u0);
                t0 = (((a4 - 110) * 0x1E) + 0x140);
                if ((int)(((a4 - 110) * 0x1E) + 0x140) < (int)0x140) {
                    t0 = 0x140;
                }
                FUN_0c052dba(0xC2B2680, 0x65, (float)t0, 240.0f);
                t0 = (0x140 - ((a4 - 110) * 0x1E));
                if ((int)(0x140 - ((a4 - 110) * 0x1E)) > (int)0x140) {
                    t0 = 0x140;
                }
                FUN_0c052dba(0xC2B2680, 0x65, (float)t0, 240.0f);
            }
            if (((int)a4 > 0) && ((int)a4 < (int)0x32)) {
                FUN_0c076230(((((struct oC_float *)0xC050D6C)->v)), ((((struct o8_float *)0xC050D6C)->v)), 0.0f);
                if ((int)a4 < (int)0x28) {
                    u0 = 1.0f;
                    u0 = u0 + ((((struct o0_float *)0xC050D6C)->v)) * ((float)(0x28 - a4));
                    (((struct o0_float *)0xC2B2690)->v) = u0;
                    (((struct o4_float *)0xC2B2690)->v) = u0;
                    u0 = (1.0f - (((float)(0x28 - a4) * ((((struct o4_float *)0xC050D6C)->v)))));
                } else {
                    (((struct o0_float *)0xC2B2690)->v) = 1.0f;
                    (((struct o4_float *)0xC2B2690)->v) = 1.0f;
                    u0 = 1.0f;
                }
                (((struct o1C_float *)0xC2B2690)->v) = u0;
                FUN_0c052dba(0xC2B2680, 0x60, ((((struct o28_float *)0xC050D6C)->v)), 240.0f);
            }
        }
    } else {
        if ((*(int *)0xC2AC2F0) == 0) {
            if (a4 == 0x14A) {
                t0 = FUN_0c03f154(0x0);
                if ((int)t0 <= (int)0x1) {
                    t0 = ((int (*)(int))(Voice_ShutUp))(0x0);
                    FUN_0c058f64(0xC131EF8, 0x0, 0x78, 0x0);
                }
            }
            if (a4 == 0x12C) {
                t0 = FUN_0c03f154(0x0);
                if (t0 == 3) {
                    t0 = FUN_0c03f154(0x1);
                    if (t0 == 0) {
                        t0 = ((int (*)(int))(Voice_ShutUp))(0x0);
                        FUN_0c058f64(0xC131F10, 0x0, 0x7D, 0x0);
                    }
                }
            }
        } else {
            if (a4 == 0xF0) {
                t0 = ((int (*)(int, int, int, int))(Voice_ShutUp))(0x0, a5, a6, a7);
                FUN_0c058f64(0xC131F28, 0x0, 0x7D, 0x0);
            }
        }
        if ((*(int *)0xC2AC2F0) != 0) {
        } else {
            if (((int)a4 > (int)0x4B) && ((int)a4 <= (int)0x64)) {
                FUN_0c076230(1.0f, 0.643137276f, 0.160784319f);
                u0 = ((float)(a4 - 90) * 0.100000001f);
                if (0.0f > ((float)(a4 - 90) * 0.100000001f)) {
                    u0 = 0.0f;
                }
                (((struct o1C_float *)0xC2B2690)->v) = (1.0f - u0);
                u0 = ((float)(a4 - 90) * 0.100000001f);
                if (0.0f > ((float)(a4 - 90) * 0.100000001f)) {
                    u0 = 0.0f;
                }
                (((struct o4_float *)0xC2B2690)->v) = (1.0f - u0);
                t0 = (((a4 - 90) * 0x1E) + 0x140);
                if ((int)(((a4 - 90) * 0x1E) + 0x140) < (int)0x140) {
                    t0 = 0x140;
                }
                FUN_0c052dba(0xC2B2680, 0x219, (float)t0, 240.0f);
                t0 = (0x140 - ((a4 - 90) * 0x1E));
                if ((int)(0x140 - ((a4 - 90) * 0x1E)) > (int)0x140) {
                    t0 = 0x140;
                }
                FUN_0c052dba(0xC2B2680, 0x219, (float)t0, 240.0f);
            }
            if (((int)a4 > (int)0x32) && ((int)a4 <= (int)0x4B)) {
                FUN_0c076230(1.0f, 0.643137276f, 0.160784319f);
                u0 = ((float)(a4 - 65) * 0.100000001f);
                if (0.0f > ((float)(a4 - 65) * 0.100000001f)) {
                    u0 = 0.0f;
                }
                (((struct o1C_float *)0xC2B2690)->v) = (1.0f - u0);
                u0 = ((float)(a4 - 65) * 0.100000001f);
                if (0.0f > ((float)(a4 - 65) * 0.100000001f)) {
                    u0 = 0.0f;
                }
                (((struct o4_float *)0xC2B2690)->v) = (1.0f - u0);
                t0 = (((a4 - 65) * 0x1E) + 0x140);
                if ((int)(((a4 - 65) * 0x1E) + 0x140) < (int)0x140) {
                    t0 = 0x140;
                }
                FUN_0c052dba(0xC2B2680, 0x21A, (float)t0, 240.0f);
                t0 = (0x140 - ((a4 - 65) * 0x1E));
                if ((int)(0x140 - ((a4 - 65) * 0x1E)) > (int)0x140) {
                    t0 = 0x140;
                }
                FUN_0c052dba(0xC2B2680, 0x21A, (float)t0, 240.0f);
            }
            if ((int)a4 <= 0) {
            } else {
                if ((int)a4 > (int)0x32) {
                } else {
                    if ((int)a4 < (int)0x28) {
                        u0 = 1.0f;
                        u0 = u0 + ((((struct o0_float *)0xC050D6C)->v)) * ((float)(0x28 - a4));
                        (((struct o0_float *)0xC2B2690)->v) = u0;
                        (((struct o4_float *)0xC2B2690)->v) = u0;
                        u0 = (1.0f - (((float)(0x28 - a4) * ((((struct o4_float *)0xC050D6C)->v)))));
                    } else {
                        (((struct o0_float *)0xC2B2690)->v) = 1.0f;
                        (((struct o4_float *)0xC2B2690)->v) = 1.0f;
                        u0 = 1.0f;
                    }
                    (((struct o1C_float *)0xC2B2690)->v) = u0;
                    FUN_0c076230(((((struct oC_float *)0xC050D6C)->v)), ((((struct o8_float *)0xC050D6C)->v)), 0.0f);
                    FUN_0c052dba(0xC2B2680, 0x60, ((((struct o28_float *)0xC050D6C)->v)), 240.0f);
                }
            }
        }
    }
    return FUN_0c026ce6();
}
