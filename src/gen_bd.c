/* Straight-line functions with calls and guards (batch gen_bd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_int { char p[0x10]; int v; };
struct o10_short { char p[0x10]; short v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o104_float { char p[0x104]; float v; };
struct o108_short { char p[0x108]; short v; };
struct o10A_short { char p[0x10A]; short v; };
struct o10C_short { char p[0x10C]; short v; };
struct o16_short { char p[0x16]; short v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o2_short { char p[0x2]; short v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o2_ushort { char p[0x2]; unsigned short v; };
struct o20_int { char p[0x20]; int v; };
struct o24_float { char p[0x24]; float v; };
struct o24_int { char p[0x24]; int v; };
struct o28_int { char p[0x28]; int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o38_ushort { char p[0x38]; unsigned short v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o48_int { char p[0x48]; int v; };
struct o4C_int { char p[0x4C]; int v; };
struct o50_ushort { char p[0x50]; unsigned short v; };
struct o58_int { char p[0x58]; int v; };
struct o5C_int { char p[0x5C]; int v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o60_int { char p[0x60]; int v; };
struct o64_int { char p[0x64]; int v; };
struct o68_int { char p[0x68]; int v; };
struct o6C_float { char p[0x6C]; float v; };
struct o6C_int { char p[0x6C]; int v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o80_int { char p[0x80]; int v; };
struct o84_int { char p[0x84]; int v; };
struct o88_int { char p[0x88]; int v; };
struct o88_uint { char p[0x88]; unsigned int v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct oA4_short { char p[0xA4]; short v; };
struct oA6_short { char p[0xA6]; short v; };
struct oA8_short { char p[0xA8]; short v; };
struct oAA_short { char p[0xAA]; short v; };
struct oAE_short { char p[0xAE]; short v; };
struct oB8_float { char p[0xB8]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oC0_uint { char p[0xC0]; unsigned int v; };
struct oC4_float { char p[0xC4]; float v; };
struct oC8_float { char p[0xC8]; float v; };
struct oCC_float { char p[0xCC]; float v; };
struct oD0_float { char p[0xD0]; float v; };
struct oD4_int { char p[0xD4]; int v; };
struct oF8_float { char p[0xF8]; float v; };
struct oFC_float { char p[0xFC]; float v; };
int FUN_0c0100c4(int, int);
int FUN_0c01c4e2(void);
int FUN_0c01e6f0(void);
int FUN_0c01ff48(int, int);
int FUN_0c0200f0(int);
int FUN_0c020176(void);
int FUN_0c020244(void);
int FUN_0c0209b6(void);
int FUN_0c020b54(void);
int FUN_0c026c82(float, float, float);
int FUN_0c026ce6(void);
int FUN_0c027f28(int);
int FUN_0c027fbe(float, float);
int FUN_0c02803a(int, int, int, int);
float FUN_0c02806c(int);
int FUN_0c02842e(int);
int FUN_0c02d694(int, int);
int FUN_0c03fa18(int, int, int, int);
int FUN_0c0469e2(int, int, int, int, int);
int FUN_0c048d70(int);
int FUN_0c058ca6(int, int);
int FUN_0c05a356(int);
int FUN_0c05ab5e(void);
int FUN_0c05efcc(void);
int FUN_0c05f788(int, int);
int FUN_0c06cd60(void);
int FUN_0c06f240(void);
int FUN_0c070e60(void);
int FUN_0c072230(int, int);
int FUN_0c072290(int, int);
int FUN_0c072600(int);
int FUN_0c073360(void);
int FUN_0c0737d0(float);
int FUN_0c0739a0(int);
int FUN_0c073a30(float, float, float);
int FUN_0c073a60(int);
float FUN_0c073b40(int, int);
int FUN_0c073c40(int, int, float);
int FUN_0c075c60(int);
int FUN_0c07ff00(void);
int MultiRot4Vec(int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int gdFsCheckMedia(int);
int gdFsGetDirEnt(int, int, int, int);
int gdFsGetDirInfoG(int, int);
int gdFsGetLE4(int);
int gdFsGetTocG(int, int, int, int);
int gdFsLockDir(int);
int gdFsReadWG(int, int, int);
int gdFsReopenHn(int, int, int, int);
int gdFsWaitCompleteReq(int, int, int, int);
int gdc_FileLoad(int, int, int);
int nlAddVector(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlQuickInvertMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlSubVector3op(int, int, int);
int pfSize(float, float);
int syChainAddHandler(int, int, int, int);
int FUN_0c041d5c(int a4, int a5);
int FUN_0c02ae3c(int a4, int a5, int a6, int a7, int a8, int a9, float f4, float f5);
int FUN_0c01c568(void);
int FUN_0c044ba0(int a4);
int FUN_0c14a2ba(int a4, int a5, int a6, int a7);
int FUN_0c0476dc(int a4, int a5, int a6, float f4);
int FUN_0c033b12(int a4, int a5, int a6, int a7);

int FUN_0c041d5c(int a4, int a5)
{
    int stk[3];
    register int t0;
    register int t2;
    register int t30;
    register int t68;
    register int t73;
    register float u116;
    register int t128;
    register int t163;
    register int t187;
    int t76;
    register int t77;
    int t89;
    register int t90;
    register int t91;
    int R1000;
    int R1004;
    int R1008;

    R1000 = *(int *)((int)stk + 0);
    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);

    R1008 = a5;
    t0 = (((struct o78_int *)(a4))->v);
    nlPushMatrix(0x0);
    t2 = R1008;
    if ((*(int *)((((((t0 * 0xA8) + 0xC0C0FCC) + 0x8) + (t2 << 2)) + 0x0))) != 0) {
        FUN_0c073360();
        FUN_0c073a30(((((struct o8C_float *)(a4))->v)), ((((struct o104_float *)(a4))->v)), ((((struct o94_float *)(a4))->v)));
        nlRotateAY((unsigned short)((((struct o10A_short *)(a4))->v)));
        nlRotateAX((unsigned short)((((struct o108_short *)(a4))->v)));
        nlRotateAZ((unsigned short)((((struct o10C_short *)(a4))->v)));
        FUN_0c075c60((*(int *)((((((t0 * 0xA8) + 0xC0C0FCC) + 0x8) + (t2 << 2)) + 0x0))));
        nlPopMatrix(0x1);
    }
    FUN_0c073a30(0.0f, (((((struct oF8_float *)(a4))->v)) + ((((struct oFC_float *)(a4))->v))), 0.0f);
    nlRotateAX((unsigned short)((((struct oAA_short *)(a4))->v)));
    nlRotateAZ((unsigned short)((((struct oAE_short *)(a4))->v)));
    if ((int)((((struct o7C_int *)(a4))->v)) >= 0) {
        t30 = (((struct o7C_int *)(a4))->v);
        FUN_0c026c82((*(float *)((((((t30 << 1) + t30) << 2) + 0xC0C237C) + 0x0))), ((((struct o4_float *)(((((t30 << 1) + t30) << 2) + 0xC0C237C)))->v)), ((((struct o8_float *)(((((t30 << 1) + t30) << 2) + 0xC0C237C)))->v)));
    }
    if ((*(int *)(((((t0 * 0xA8) + 0xC0C0FCC) + (t2 << 2)) + 0x0))) != 0) {
        FUN_0c05a356((*(int *)(((((t0 * 0xA8) + 0xC0C0FCC) + (t2 << 2)) + 0x0))));
    }
    FUN_0c026ce6();
    if ((*(int *)((((((t0 * 0xA8) + 0xC0C0FCC) + 0x10) + (t2 << 2)) + 0x0))) != 0) {
        FUN_0c05a356((*(int *)((((((t0 * 0xA8) + 0xC0C0FCC) + 0x10) + (t2 << 2)) + 0x0))));
    }
    if ((*(int *)((((t0 * 0xA8) + 0xC0C0FCC) + 0x1C))) != 0) {
        R1000 = 0x0;
        t68 = 0x0;
        if (((*(int *)0xC1EC83C) & 16) != 0) {
            t68 = 0x0;
            if ((((((struct o84_int *)(a4))->v)) & 0x2400) != 0) {
                t68 = 0x1;
            }
            if ((((((struct o84_int *)(a4))->v)) & 0x4800) != 0) {
                R1000 = 0x1;
            }
        }
        t73 = t68;
        if (((((struct oC8_float *)(a4))->v)) > 0.00999999978f) {
            R1000 = ((R1000) + 0x2);
            t73 = (t68 + 0x2);
        }
        R1004 = ((R1008) << 2);
        if ((t73 != 0) && (t76 = R1004, t77 = *(int *)(((((t76 + t73) << 2) + (((t0 * 0xA8) + 0xC0C0FCC) + 0x18)) + 0x0)), t77 != 0)) {
            FUN_0c05a356((*(int *)((((((R1004) + t73) << 2) + (((t0 * 0xA8) + 0xC0C0FCC) + 0x18)) + 0x0))));
        }
        if (((R1000) != 0) && (t89 = R1004, t90 = R1000, t91 = *(int *)(((((t89 + t90) << 2) + (((t0 * 0xA8) + 0xC0C0FCC) + 0x38)) + 0x0)), t91 != 0)) {
            FUN_0c05a356((*(int *)((((((R1004) + (R1000)) << 2) + (((t0 * 0xA8) + 0xC0C0FCC) + 0x38)) + 0x0))));
        }
    }
    if ((R1008) != 0) {
    } else {
        if (((((struct o60_int *)(((t0 * 0xA8) + 0xC0C0FCC)))->v)) == 0) {
        } else {
            u116 = ((((struct oB8_float *)(a4))->v));
            u116 = u116 + 0.200000003f * ((((struct oCC_float *)(a4))->v));
            (((struct oB8_float *)(a4))->v) = u116;
            if (((((struct o58_int *)(((t0 * 0xA8) + 0xC0C0FCC)))->v)) != 0) {
                R1000 = (((t0 * 0xA8) + 0xC0C0FCC) + 0x70);
                nlPushMatrix(0x0);
                FUN_0c073a60((R1000));
                FUN_0c0737d0(((((struct oB8_float *)(a4))->v)));
                FUN_0c05a356(((((struct o58_int *)(((t0 * 0xA8) + 0xC0C0FCC)))->v)));
                nlPopMatrix(0x1);
                if (((((struct o5C_int *)(((t0 * 0xA8) + 0xC0C0FCC)))->v)) != 0) {
                    nlPushMatrix(0x0);
                    t128 = R1000;
                    FUN_0c073a30((-(*(float *)((t128 + 0x0)))), ((((struct o4_float *)(t128))->v)), ((((struct o8_float *)(t128))->v)));
                    FUN_0c0737d0(((((struct oB8_float *)(a4))->v)));
                    FUN_0c05a356(((((struct o5C_int *)(((t0 * 0xA8) + 0xC0C0FCC)))->v)));
                    nlPopMatrix(0x1);
                }
            }
            R1000 = (((t0 * 0xA8) + 0xC0C0FCC) + 0x7C);
            nlPushMatrix(0x0);
            FUN_0c073a60((R1000));
            FUN_0c0737d0(((((struct oB8_float *)(a4))->v)));
            if (((((struct o60_int *)(((t0 * 0xA8) + 0xC0C0FCC)))->v)) != 0) {
                FUN_0c05a356(((((struct o60_int *)(((t0 * 0xA8) + 0xC0C0FCC)))->v)));
            }
            nlPopMatrix(0x1);
            if (((((struct o64_int *)(((t0 * 0xA8) + 0xC0C0FCC)))->v)) != 0) {
                nlPushMatrix(0x0);
                t163 = R1000;
                FUN_0c073a30((-(*(float *)((t163 + 0x0)))), ((((struct o4_float *)(t163))->v)), ((((struct o8_float *)(t163))->v)));
                FUN_0c0737d0(((((struct oB8_float *)(a4))->v)));
                FUN_0c05a356(((((struct o64_int *)(((t0 * 0xA8) + 0xC0C0FCC)))->v)));
                nlPopMatrix(0x1);
            }
            if (((((struct o68_int *)(((t0 * 0xA8) + 0xC0C0FCC)))->v)) != 0) {
                R1000 = ((((t0 * 0xA8) + 0xC0C0FCC) + 0x70) + 0x18);
                nlPushMatrix(0x0);
                FUN_0c073a60((R1000));
                FUN_0c0737d0(((((struct oB8_float *)(a4))->v)));
                FUN_0c05a356(((((struct o68_int *)(((t0 * 0xA8) + 0xC0C0FCC)))->v)));
                nlPopMatrix(0x1);
                if (((((struct o6C_int *)(((t0 * 0xA8) + 0xC0C0FCC)))->v)) != 0) {
                    nlPushMatrix(0x0);
                    t187 = R1000;
                    FUN_0c073a30((-(*(float *)((t187 + 0x0)))), ((((struct o4_float *)(t187))->v)), ((((struct o8_float *)(t187))->v)));
                    FUN_0c0737d0(((((struct oB8_float *)(a4))->v)));
                    FUN_0c05a356(((((struct o6C_int *)(((t0 * 0xA8) + 0xC0C0FCC)))->v)));
                    nlPopMatrix(0x1);
                }
            }
        }
    }
    return (nlPopMatrix(0x1));
}

int FUN_0c02ae3c(int a4, int a5, int a6, int a7, int a8, int a9, float f4, float f5)
{
    int stk[18];

    register int R1;
    register int R2;
    register int R3;
    register float F0;
    register float F1;
    register float F2;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    register float w0_5;
    int R1000;
    float R1004;
    float R1008;
    int R1012;
    int R1016;
    int R1020;
    R1000 = *(int *)((int)stk + 0);
    R1004 = *(float *)((int)stk + 4);
    R1008 = *(float *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);
    R1016 = *(int *)((int)stk + 16);
    R1020 = *(int *)((int)stk + 20);
    v0_4 = a4;
    v0_1 = a5;
    v0_0 = a6;
    v0_2 = a7;
    w0_0 = f4;
    w0_1 = f5;
    R1000 = v0_4;
    R1012 = v0_0;
    R1016 = (*(int *)(((R1000) + 0x28)));
    R1020 = (*(int *)(((R1012) + 0x28)));
    v0_3 = (v0_2);
    v0_0 = (a8);
    v0_1 = (v0_1);
    v0_2 = (0xC073A60);
    if ((a9 == 0)) goto L_C02AEA8;
    nlQuickInvertMatrix();
    L_C02AECE:;
    R1008 = -3.40282347e+38f;
    R1004 = 3.40282347e+38f;
    v0_2 = (0xC072230);
    v0_2 = (v0_3);
    w0_1 = (3.40282347e+38f);
    w0_4 = (3.40282347e+38f);
    w0_3 = (-3.40282347e+38f);
    w0_2 = (-3.40282347e+38f);
    L_C02AEE6:;
    FUN_0c072230(v0_2, (((int)stk + 0) + 0x3C));
    w0_5 = *(float *)(((int)stk + 60));
    w0_0 = (w0_5);
    if ((!(w0_5 > (R1008)))) goto L_C02AF00;
    R1008 = w0_0;
    L_C02AF06:;
    if ((!((*(float *)(((int)stk + 64))) > w0_2))) goto L_C02AF14;
    w0_2 = ((*(float *)(((int)stk + 64))));
    L_C02AF28:;
    w0_5 = *(float *)(((int)stk + 68));
    w0_0 = (w0_5);
    if ((!(w0_5 > w0_3))) goto L_C02AF34;
    w0_3 = (w0_0);
    L_C02AF3A:;
    v0_4 = (unsigned int)(v0_2 + 0xC) < (unsigned int)(v0_3 + 0x60);
    v0_2 = ((v0_2 + 0xC));
    if (v0_4) goto L_C02AEE6;
    w0_5 = (((struct o6C_float *)(v0_1))->v);
    w0_0 = (w0_5);
    if ((w0_4 > w0_5)) goto L_C02AF7E;
    if (((-w0_0) > (R1008))) goto L_C02AF7E;
    if (((R1004) > ((((struct o70_float *)(v0_1))->v)))) goto L_C02AF7E;
    if (((-((((struct o70_float *)(v0_1))->v))) > w0_2)) goto L_C02AF7E;
    v0_4 = (0x74);
    if ((w0_1 > ((((struct o74_float *)(v0_1))->v)))) goto L_C02AF7E;
    if (!((!((-(*(float *)((v0_1 + v0_4)))) > w0_3)))) goto L_C02AF7E;
    FUN_0c07ff00();
    v0_2 = ((0x0 + v0_3));
    v0_4 = (0x0);
    v0_5 = (0x0);
    goto L_C02B004;
    L_C02AF7E:;
    v0_4 = (0x0);
    L_C02B164:;
    return v0_4;
    L_C02B004:;
    if (((unsigned int)v0_2 < (unsigned int)(v0_3 + 0x60))) goto L_C02AFA2;
    if ((v0_5 != 0)) goto L_C02B014;
    v0_4 = (0x1);
    goto L_C02B164;
    L_C02B014:;
    FUN_0c073c40((((int)stk + 0) + 0x30), (((int)stk + 0) + 0x30), (1.0f / (float)v0_5));
    FUN_0c072600((((int)stk + 0) + 0x24));
    nlSubVector3op((((int)stk + 0) + 0x18), (((int)stk + 0) + 0x30), (((int)stk + 0) + 0x24));
    (((struct o24_float *)(v0_0))->v) = -3.40282347e+38f;
    w0_4 = *(float *)(((int)stk + 24));
    v0_2 = (0xC0A2D08);
    w0_2 = (1.0f);
    w0_3 = (0.0f);
    w0_0 = (w0_4);
    w0_1 = ((*(float *)(((int)stk + 36))));
    if ((!(w0_4 > 0.0f))) goto L_C02B076;
    w0_3 = (((struct o6C_float *)(v0_1))->v);
    v0_3 = !((((-w0_3) - w0_1) / w0_0) > ((((struct o24_float *)(v0_0))->v)));
    v0_4 = (0x24);
    w0_0 = ((((-w0_3) - w0_1) / w0_0));
    if (v0_3) goto L_C02B092;
    *(float *)((v0_0 + v0_4)) = w0_0;
    v0_2 = (0xC0A2D50);
    L_C02B092:;
    w0_4 = *(float *)(((int)stk + 32));
    w0_3 = (0.0f);
    w0_0 = (w0_4);
    w0_1 = ((*(float *)(((int)stk + 44))));
    if ((!(w0_4 > 0.0f))) goto L_C02B0F4;
    w0_3 = (((struct o74_float *)(v0_1))->v);
    v0_3 = !((((-w0_3) - w0_1) / w0_0) > ((((struct o24_float *)(v0_0))->v)));
    v0_4 = (0x24);
    w0_0 = ((((-w0_3) - w0_1) / w0_0));
    if (v0_3) goto L_C02B110;
    *(float *)((v0_0 + v0_4)) = w0_0;
    v0_2 = (0xC0A2D80);
    L_C02B110:;
    (((struct o24_float *)(v0_0))->v) = ((FUN_0c073b40(v0_2, (((int)stk + 0) + 0x18))) * ((-((((struct o24_float *)(v0_0))->v))) + w0_2));
    FUN_0c073360();
    FUN_0c073a60((R1000));
    MultiRot4Vec((R1016));
    FUN_0c073a60((v0_1 + 0x60));
    FUN_0c072230((((int)stk + 0) + 0x30), v0_0);
    FUN_0c072290(v0_2, (v0_0 + 0x18));
    FUN_0c072290((((int)stk + 0) + 0x18), (v0_0 + 0xC));
    nlPopMatrix(0x1);
    v0_4 = (0x2);
    goto L_C02B164;
    L_C02B0F4:;
    if ((!(w0_3 > w0_0))) goto L_C02B110;
    w0_3 = (((struct o74_float *)(v0_1))->v);
    v0_3 = !(((w0_3 - w0_1) / w0_0) > ((((struct o24_float *)(v0_0))->v)));
    v0_4 = (0x24);
    w0_0 = (((w0_3 - w0_1) / w0_0));
    if (v0_3) goto L_C02B110;
    *(float *)((v0_0 + v0_4)) = w0_0;
    v0_2 = (0xC0A2D74);
    goto L_C02B110;
    L_C02B076:;
    if ((!(w0_3 > w0_0))) goto L_C02B092;
    w0_3 = (((struct o6C_float *)(v0_1))->v);
    v0_3 = !(((w0_3 - w0_1) / w0_0) > ((((struct o24_float *)(v0_0))->v)));
    v0_4 = (0x24);
    w0_0 = (((w0_3 - w0_1) / w0_0));
    if (v0_3) goto L_C02B092;
    *(float *)((v0_0 + v0_4)) = w0_0;
    v0_2 = (0xC0A2D44);
    goto L_C02B092;
    L_C02AFA2:;
    FUN_0c072230(v0_2, (((int)stk + 0) + 0x3C));
    w0_2 = *(float *)(((int)stk + 60));
    w0_3 = (((struct o6C_float *)(v0_1))->v);
    w0_0 = (w0_3);
    w0_1 = (w0_2);
    if ((w0_2 > w0_3)) goto L_C02B002;
    if (((-w0_0) > w0_1)) goto L_C02B002;
    if (((*(float *)(((int)stk + 68))) > ((((struct o74_float *)(v0_1))->v)))) goto L_C02B002;
    if (((-((((struct o74_float *)(v0_1))->v))) > (*(float *)(((int)stk + 68))))) goto L_C02B002;
    w0_1 = *(float *)(((int)stk + 64));
    w0_3 = (0.0f);
    w0_0 = (w0_1);
    if ((0.0f > w0_1)) goto L_C02AFF0;
    v0_4 = (0x70);
    if ((!(w0_0 > ((((struct o70_float *)(v0_1))->v))))) goto L_C02AFEE;
    w0_3 = ((*(float *)((v0_1 + v0_4))));
    L_C02AFF0:;
    *(float *)(((int)stk + 64)) = w0_3;
    nlAddVector((((int)stk + 0) + 0x30), (((int)stk + 0) + 0x3C));
    v0_5 = ((v0_5 + 0x1));
    L_C02B002:;
    v0_2 = ((v0_2 + 0xC));
    goto L_C02B004;
    L_C02AFEE:;
    w0_3 = (w0_0);
    goto L_C02AFF0;
    L_C02AF34:;
    if ((!(w0_1 > w0_0))) goto L_C02AF3A;
    w0_1 = (w0_0);
    goto L_C02AF3A;
    L_C02AF14:;
    if ((!((R1004) > (*(float *)(((int)stk + 64)))))) goto L_C02AF28;
    R1004 = (*(float *)(((int)stk + 64)));
    goto L_C02AF28;
    L_C02AF00:;
    if ((!(w0_4 > w0_0))) goto L_C02AF06;
    w0_4 = (w0_0);
    goto L_C02AF06;
    L_C02AEA8:;
    FUN_0c073a60((R1000));
    MultiRot4Vec((R1016));
    FUN_0c073a60((v0_1 + 0x60));
    nlQuickInvertMatrix();
    FUN_0c073a60((R1012));
    MultiRot4Vec((R1020));
    FUN_0c073a60((v0_3 + 0x60));
    goto L_C02AECE;
}

int FUN_0c01c568(void)
{
    int stk[11];
    register float u6;
    register float u11;
    register float u31;
    register int t44;
    register int t46;
    register int t50;
    register int t51;
    register int t53;
    register int t63;
    register int t65;
    register float u77;
    register float u100;
    register int t127;
    register int t114;
    int t115;

    *(unsigned int *)0xC11D094 = 0x0;
    if (((((struct o24_int *)0xC1EC71C)->v)) != 0) {
        FUN_0c06f240();
        FUN_0c027f28(0x0);
        FUN_0c02803a(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
        pfSize(1.0f, 1.0f);
        u6 = (-((FUN_0c02806c(0xC0974F0)) * 0.5f));
        FUN_0c027fbe((u6 + 320.0f), 240.0f);
        FUN_0c02842e(0xC097540);
        FUN_0c06f240();
        u11 = (-((FUN_0c02806c(0xC0974F0)) * 0.5f));
        FUN_0c027fbe((u11 + 320.0f), 240.0f);
        FUN_0c02842e(0xC097540);
        *(unsigned int *)0xC11D094 = ((*(int *)0xC11D094) + 0x1);
        FUN_0c01c4e2();
        FUN_0c06f240();
    }
    FUN_0c01e6f0();
    if (((((struct o24_int *)0xC1EC71C)->v)) != 0) {
        if (((((struct o0_int *)0xC1EC71C)->v)) == 2) {
            FUN_0c020b54();
        } else {
            FUN_0c0209b6();
        }
        pfSize(1.0f, 1.0f);
        u31 = (-((FUN_0c02806c(0xC0974F0)) * 0.5f));
        FUN_0c027fbe((u31 + 320.0f), 240.0f);
        FUN_0c02842e(0xC097540);
        *(unsigned int *)0xC11D094 = ((*(int *)0xC11D094) + 0x1);
        FUN_0c01c4e2();
        FUN_0c06f240();
    }
    FUN_0c05ab5e();
    if (((((struct o24_int *)0xC1EC71C)->v)) == 0) {
        if ((((int)((((struct o8_int *)0xC2AC2F0)->v)) >> 4) & 1) == 0) {
            t44 = 0x0;
            for (;;) {
                FUN_0c05f788(t44, 0x0);
                t44 = (t44 + 0x1);
                if ((int)t44 >= (int)0x4) {
                    break;
                }
            }
        } else {
            t46 = 0x4;
            for (;;) {
                FUN_0c05f788(t46, 0x0);
                t46 = (t46 + 0x1);
                if ((int)t46 >= (int)0x8) {
                    break;
                }
            }
        }
        t50 = (((struct o8_int *)0xC2AC2F0)->v);
        if (((int)t50 >> 5) != 0) {
            if (((int)t50 >> 5) != 1) {
                if (((int)t50 >> 5) != 2) {
                    if ((((int)t50 >> 4) & 0x1) == 0) {
                        t51 = 0x0;
                        for (;;) {
                            FUN_0c0100c4(t51, 0x0);
                            t51 = (t51 + 0x1);
                            if ((int)t51 >= (int)0x4) {
                                break;
                            }
                        }
                    } else {
                        t53 = 0x4;
                        for (;;) {
                            FUN_0c0100c4(t53, 0x0);
                            t53 = (t53 + 0x1);
                            if ((int)t53 >= (int)0x8) {
                                break;
                            }
                        }
                    }
                } else {
                    FUN_0c0100c4(0x10, 0x0);
                }
            } else {
                FUN_0c0100c4(0x8, 0x0);
            }
        } else {
            if ((((int)t50 >> 4) & 0x1) == 0) {
                t63 = 0x0;
                for (;;) {
                    FUN_0c0100c4(t63, 0x0);
                    t63 = (t63 + 0x1);
                    if ((int)t63 >= (int)0x4) {
                        break;
                    }
                }
            } else {
                t65 = 0x4;
                for (;;) {
                    FUN_0c0100c4(t65, 0x0);
                    t65 = (t65 + 0x1);
                    if ((int)t65 >= (int)0x8) {
                        break;
                    }
                }
            }
        }
    } else {
        FUN_0c05f788((*(int *)0xC175C80), 0x0);
        FUN_0c0100c4((*(int *)0xC175C80), 0x1);
        pfSize(1.0f, 1.0f);
        u77 = (-((FUN_0c02806c(0xC0974F0)) * 0.5f));
        FUN_0c027fbe((u77 + 320.0f), 240.0f);
        FUN_0c02842e(0xC097540);
        *(unsigned int *)0xC11D094 = ((*(int *)0xC11D094) + 0x1);
        FUN_0c01c4e2();
        FUN_0c06f240();
    }
    FUN_0c06cd60();
    if ((*(int *)0xC11D048) != ((((struct o0_int *)0xC1EC71C)->v))) {
        *(unsigned int *)0xC11D048 = ((((struct o0_int *)0xC1EC71C)->v));
        FUN_0c01ff48(((((struct o0_int *)0xC1EC71C)->v)), 0x0);
        FUN_0c048d70(((((struct o0_int *)0xC1EC71C)->v)));
    } else {
        FUN_0c020244();
    }
    if (((((struct o24_int *)0xC1EC71C)->v)) != 0) {
        pfSize(1.0f, 1.0f);
        u100 = (-((FUN_0c02806c(0xC0974F0)) * 0.5f));
        FUN_0c027fbe((u100 + 320.0f), 240.0f);
        FUN_0c02842e(0xC097540);
        *(unsigned int *)0xC11D094 = ((*(int *)0xC11D094) + 0x1);
        FUN_0c01c4e2();
        FUN_0c06f240();
    }
    FUN_0c020176();
    FUN_0c0200f0(((((struct o0_int *)0xC1EC71C)->v)));
    if ((((((struct o24_int *)0xC1EC71C)->v)) != 0) && ((t114 = (((struct o0_int *)0xC1EC71C)->v), t114 != 2) && (t115 = (((struct o0_int *)0xC2AC2F0)->v), t115 == 0))) {
        gdc_FileLoad((((((struct o0_int *)0xC2AC5FC)->v)) + 0x300), (*(int *)((((((((struct o0_int *)0xC1EC71C)->v)) << 2) + (0xC11D07C + ((((int)((int)(*(int *)0xC175C80) / (int)0x8)) << 2) << 1))) + 0x0))), (((((struct o4_int *)0xC2AC5FC)->v)) - 768));
    }
    t127 = (((struct o0_int *)0xC1EC71C)->v);
    if (t127 == 1) {
        return FUN_0c05efcc();
    }
    return t127;
}

int FUN_0c044ba0(int a4)
{
    int stk[5];

    register int R1;
    register int R2;
    register int R3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_10;
    register int v0_11;
    register int v0_12;
    int v0_2;
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
    register float w0_3;
    register float w0_4;
    int R1004;
    R1004 = *(int *)((int)stk + 4);
    v0_3 = a4;
    FUN_0c073360();
    FUN_0c0739a0((0x8C + v0_3));
    nlRotateAY((unsigned short)((((struct oA6_short *)(v0_3))->v)));
    nlRotateAX((unsigned short)((((struct oA4_short *)(v0_3))->v)));
    nlRotateAZ((unsigned short)((((struct oA8_short *)(v0_3))->v)));
    FUN_0c073a30(0.0f, 0.0f, 45.0f);
    FUN_0c072600((((int)stk + 4) + 0x4));
    nlPopMatrix(0x1);
    v0_1 = (((struct o80_int *)(v0_3))->v);
    v0_2 = *(int *)0xC2ADA7C;
    v0_0 = *(int *)((((((v0_1 << 1) + v0_1) << 2) + v0_2) + 0x0));
    v0_1 = *(int *)(((*(int *)((((((v0_1 << 1) + v0_1) << 2) + v0_2) + 0x4))) + 0x0));
    *(int *)((int)stk + 0) = (((int)stk + 4) + 0x4);
    FUN_0c0469e2(0x1, v0_0, v0_1, (0xD4 + v0_3), (((int)stk + 4) + 0x4));
    R1004 = ((((struct o88_int *)(v0_3))->v));
    (((struct o88_uint *)(v0_3))->v) = 0x0;
    v0_2 = (0x88);
    v0_4 = (0x0);
    v0_0 = (0x3);
    v0_1 = (v0_3);
    w0_0 = (0.0f);
    if ((((*(int *)((v0_3 + 0x38))) & 0xBFFFF) == 0)) goto L_C044C42;
    *(unsigned int *)((v0_1 + v0_2)) = 0x5;
    L_C044D2E:;
    (((struct oC0_uint *)(v0_1))->v) = v0_4;
    v0_4 = (((struct o80_int *)(v0_1))->v);
    v0_3 = (((struct o88_int *)(v0_1))->v);
    v0_2 = (v0_3);
    w0_2 = ((*(float *)((0xC0F3AD4 + (((*(int *)(((*(int *)((((((v0_4 << 1) + v0_4) << 2) + (*(int *)0xC2ADA7C)) + 0x8))) + 0x0))) & 0xF) << 2)))));
    if ((v0_3 == 5)) goto L_C044D70;
    if ((v0_2 == 4)) goto L_C044D70;
    if ((v0_2 == 3)) goto L_C044D74;
    if ((v0_2 == 2)) goto L_C044D7A;
    if ((v0_2 == 1)) goto L_C044DA4;
    if ((v0_2 == 0)) goto L_C044DA8;
    L_C044DA8:;
    (((struct oC8_float *)(v0_1))->v) = w0_0;
    w0_3 = (_builtin_fabsf((w0_2 - ((((struct oCC_float *)(v0_1))->v)))));
    if ((w0_2 != 0.0f)) goto L_C044DCC;
    (((struct oC4_float *)(v0_1))->v) = w0_0;
    (((struct oC8_float *)(v0_1))->v) = ((((struct oD0_float *)(v0_1))->v));
    L_C044E50:;
    v0_2 = (0x2C);
    if ((!(800.0f > ((((struct o2C_float *)(v0_1))->v))))) goto L_C044EC6;
    v0_4 = R1004;
    v0_5 = (((struct o88_int *)(v0_1))->v);
    v0_2 = (0x88);
    v0_1 = (0xC058CA6);
    v0_3 = ((v0_5 - v0_4));
    if (((int)(v0_5 - v0_4) <= 0)) goto L_C044EBC;
    if (((int)v0_3 < (int)v0_0)) goto L_C044E78;
    v0_2 = ((FUN_0c058ca6(0x409A9, 0x1)));
    L_C044EC6:;
    return v0_2;
    L_C044E78:;
    if (((int)v0_3 < (int)0x2)) goto L_C044EC6;
    v0_2 = ((FUN_0c058ca6(0x309A9, 0x1)));
    goto L_C044EC6;
    L_C044EBC:;
    if (((int)v0_3 >= 0)) goto L_C044EC6;
    v0_2 = ((FUN_0c058ca6(0x209A9, 0x1)));
    goto L_C044EC6;
    L_C044DCC:;
    w0_1 = ((1.0f + 1.0f));
    if ((((((struct oCC_float *)(v0_1))->v)) > w0_2)) goto L_C044E0E;
    w0_2 = (((struct oC4_float *)(v0_1))->v);
    w0_0 = (w0_2);
    if ((!((((((struct oD0_float *)(v0_1))->v)) * w0_1) > w0_2))) goto L_C044E3A;
    w0_4 = (((struct oD0_float *)(v0_1))->v);
    v0_2 = (0xC4);
    w0_0 = (((((struct oC4_float *)(v0_1))->v)));
    w0_2 = (0.00100000005f);
    w0_3 = ((w0_4 * 0.0299999993f));
    FPUL_ = (0x3CF5C28F);
    if ((!(0.00100000005f > (w0_4 * 0.0299999993f)))) goto L_C044E06;
    w0_2 = (w0_3);
    L_C044E08:;
    *(float *)((v0_1 + v0_2)) = (w0_0 + w0_2);
    L_C044E3A:;
    if ((!(((((struct oC4_float *)(v0_1))->v)) > (((((struct oD0_float *)(v0_1))->v)) * w0_1)))) goto L_C044E50;
    (((struct oC4_float *)(v0_1))->v) = ((((struct oD0_float *)(v0_1))->v));
    goto L_C044E50;
    L_C044E06:;
    w0_2 = (w0_2);
    goto L_C044E08;
    L_C044E0E:;
    w0_2 = (0.5f);
    if ((!(0.231481478f > w0_3))) goto L_C044E24;
    w0_0 = (((struct oC4_float *)(v0_1))->v);
    (((struct oC4_float *)(v0_1))->v) = (w0_0 * w0_2);
    w0_0 = ((w0_0 * w0_2));
    goto L_C044E3A;
    L_C044E24:;
    (((struct oC4_float *)(v0_1))->v) = w0_0;
    w0_0 = (0.462962955f);
    if ((!(w0_3 > 0.462962955f))) goto L_C044E3A;
    (((struct oC8_float *)(v0_1))->v) = (((((struct oD0_float *)(v0_1))->v)) * w0_2);
    goto L_C044E3A;
    L_C044DA4:;
    w0_2 = (2.77777767f);
    goto L_C044DA8;
    L_C044D7A:;
    w0_2 = (1.85185182f);
    goto L_C044DA8;
    L_C044D74:;
    w0_2 = (0.92592591f);
    goto L_C044DA8;
    L_C044D70:;
    w0_2 = (w0_0);
    goto L_C044DA8;
    L_C044C42:;
    v0_2 = FUN_0c03fa18(((((struct o80_int *)(v0_1))->v)), ((((struct oD4_int *)(v0_1))->v)), 0x0, 0xA);
    v0_3 = ((v0_2 >> 1));
    v0_5 = (0x4);
    if (((0x1F & (v0_2 >> 1)) == 0)) goto L_C044CAC;
    (((struct o88_uint *)(v0_1))->v) = v0_5;
    goto L_C044D2E;
    L_C044CAC:;
    if ((v0_3 == 0)) goto L_C044CB6;
    (((struct o88_uint *)(v0_1))->v) = v0_0;
    goto L_C044D2E;
    L_C044CB6:;
    v0_2 = (((struct o80_int *)(v0_1))->v);
    v0_9 = *(int *)0xC0C2798;
    v0_6 = (v0_4);
    v0_3 = ((*(int *)(((((((v0_2 - v0_9) << 1) + (v0_2 - v0_9)) << 2) + 0xC12D274) + 0x4))));
    v0_7 = ((((((v0_2 - v0_9) << 1) + (v0_2 - v0_9)) << 2) + 0xC12D274));
    v0_8 = (v0_4);
    v0_9 = (((((((v0_2 - v0_9) << 1) + (v0_2 - v0_9)) << 2) + 0xC12D274) + 0x8));
    v0_10 = (0x1);
    L_C044D20:;
    if (((int)v0_8 < (int)(*(int *)((v0_9 + 0x0))))) goto L_C044CDA;
    if ((v0_6 != 0)) goto L_C044D2E;
    *(unsigned int *)((v0_7 + 0x0)) = 0x12C;
    goto L_C044D2E;
    L_C044CDA:;
    v0_11 = (((struct oD4_int *)(v0_1))->v);
    v0_2 = (0xD4);
    v0_12 = (v0_11);
    if (((int)v0_11 <= (int)(*(int *)((v0_3 + 0x0))))) goto L_C044D1C;
    if (((int)v0_12 >= (int)(*(int *)((v0_3 + 0x4))))) goto L_C044D1C;
    if (((int)(*(int *)((v0_7 + 0x0))) <= 0)) goto L_C044D1A;
    if (((int)(*(int *)((v0_1 + v0_2))) < (int)((*(int *)((v0_3 + 0x4))) - 2))) goto L_C044D06;
    *(unsigned int *)((v0_7 + 0x0)) = ((*(int *)((v0_7 + 0x0))) - 1);
    (((struct o88_uint *)(v0_1))->v) = v0_5;
    L_C044D1A:;
    v0_6 = ((v0_6 + 0x1));
    L_C044D1C:;
    v0_3 = ((v0_3 + 0x8));
    v0_8 = ((v0_8 + 0x1));
    goto L_C044D20;
    L_C044D06:;
    if (((int)(*(int *)((v0_1 + v0_2))) < (int)((*(int *)((v0_3 + 0x4))) - 10))) goto L_C044D16;
    (((struct o88_uint *)(v0_1))->v) = v0_0;
    goto L_C044D1A;
    L_C044D16:;
    (((struct o88_uint *)(v0_1))->v) = v0_10;
    goto L_C044D1A;
}

int FUN_0c14a2ba(int a4, int a5, int a6, int a7)
{
    int stk[9];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R7;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    int R1000;
    int R1004;
    int R1008;
    int R1012;
    int R1016;
    int R1020;
    R1000 = *(int *)((int)stk + 0);
    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);
    R1016 = *(int *)((int)stk + 16);
    R1020 = *(int *)((int)stk + 20);
    R1004 = (((int)stk + 4) + 0x1C);
    v0_0 = _builtin_get_imask();
    R1012 = 0xC2D0CC8;
    R1020 = 0xC2D0CCA;
    R1008 = 0xC2D0CCB;
    R1016 = v0_0;
    _builtin_set_imask(0xF);
    v0_0 = (0x0);
    v0_4 = (0xC1737F0);
    v0_3 = (0xC15DA44);
    v0_1 = (0x0);
    v0_2 = (0xC1737EC);
    v0_5 = (0xC2D0CCB);
    v0_6 = (0xC2D0CBC);
    if ((((((struct o0_int *)0xC1737F0)->v)) != 0)) goto L_C14A318;
    *(unsigned int *)((v0_4 + 0x0)) = (syChainAddHandler(0x900, 0xC14A284, 0x50, (*(int *)((v0_2 + 0x0)))));
    L_C14A318:;
    v0_4 = (0xC1737F4);
    if ((((((struct o4_int *)0xC1737F0)->v)) != 0)) goto L_C14A32E;
    *(unsigned int *)((v0_4 + 0x0)) = (syChainAddHandler(0xA40, 0xC14A26A, 0x10, (*(int *)((v0_2 + 0x0)))));
    L_C14A32E:;
    v0_4 = gdFsReopenHn((*(int *)(((*(int *)((v0_2 + 0x0))) + 0x14))), 0x0, 0x0, 0x0);
    v0_3 = (v0_4);
    if ((v0_4 == 0)) goto L_C14A3B4;
    v0_4 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)(((*(int *)((v0_2 + 0x0))) + 0xC))) + 0x1C)))))(v0_5, R5, R6, R7, R1004, R1008, R1012, R1016, R1020, *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
    v0_5 = (v0_4);
    if ((v0_4 == 0)) goto L_C14A3B4;
    *(unsigned int *)((v0_3 + 0x3C)) = v0_5;
    (((struct o50_ushort *)(v0_3))->v) = 0x4;
    *(unsigned int *)(((*(int *)((v0_3 + 0x0))) + 0x1C)) = v0_3;
    v0_4 = gdFsWaitCompleteReq(v0_3, R5, R6, R7);
    v0_3 = (((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)(((*(int *)((v0_2 + 0x0))) + 0xC))) + 0x20)))))((((int)stk + 4) + 0x18), a5, a6, a7, R1004, R1008, R1012, R1016, R1020, *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24))) == 0;
    v0_4 = (v0_4);
    v0_7 = (0x4);
    if (v0_3) goto L_C14A3B4;
    if ((v0_4 == 0)) goto L_C14A392;
    if (!((v0_4 == -29))) goto L_C14A590;
    if (((*(int *)(((int)stk + 28))) == 6)) goto L_C14A38E;
    goto L_C14A590;
    L_C14A590:;
    v0_5 = (v0_4);
    L_C14A5BC:;
    _builtin_set_imask(((unsigned int)((((R1016) & 0xF) << 2) << 2) >> 4));
    if ((v0_0 == 0)) goto L_C14A5D6;
    v0_0 = (v0_0);
    L_C14A5D8:;
    return v0_0;
    L_C14A5D6:;
    v0_0 = (v0_5);
    goto L_C14A5D8;
    L_C14A38E:;
    R5 = (0xFFFFFFE9);
    L_C14A5A8:;
    v0_5 = (R5);
    goto L_C14A5BC;
    L_C14A392:;
    if (!(((*(int *)(((R1004) + 0x0))) == 0x80))) goto L_C14A5A6;
    v0_4 = gdFsReopenHn((*(int *)(((*(int *)((v0_2 + 0x0))) + 0x14))), 0x0, 0x0, 0x0);
    v0_3 = (v0_4);
    if ((v0_4 != 0)) goto L_C14A3E4;
    goto L_C14A3B4;
    L_C14A5A6:;
    R5 = (0xFFFFFFFB);
    goto L_C14A5A8;
    L_C14A3B4:;
    R5 = (0xFFFFFFFE);
    goto L_C14A5A8;
    L_C14A3E4:;
    *(unsigned int *)(((*(int *)((v0_2 + 0x0))) + 0x2C)) = v0_1;
    v0_4 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))(((((struct o4C_int *)((*(int *)(((*(int *)((v0_2 + 0x0))) + 0xC)))))->v))))(v0_6, R5, R6, R7, R1004, R1008, R1012, R1016, R1020, *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
    v0_5 = (v0_4);
    if ((v0_4 == 0)) goto L_C14A43E;
    *(unsigned int *)((v0_3 + 0x3C)) = v0_5;
    (((struct o50_ushort *)(v0_3))->v) = v0_7;
    *(unsigned int *)(((*(int *)((v0_3 + 0x0))) + 0x1C)) = v0_3;
    v0_3 = gdFsWaitCompleteReq(v0_3, R5, R6, R7);
    v0_5 = (v0_3);
    if ((v0_3 != 0)) goto L_C14A43E;
    v0_3 = *(int *)((v0_2 + 0x0));
    *(unsigned int *)((v0_3 + 0x2C)) = ((*(int *)((v0_3 + 0x2C))) | (((*(signed char *)(((R1012) + 0x0))) - 48) << 16));
    v0_3 = *(int *)((v0_2 + 0x0));
    *(unsigned int *)((v0_3 + 0x2C)) = ((*(int *)((v0_3 + 0x2C))) | (((*(signed char *)(((R1020) + 0x0))) - 48) << 8));
    v0_3 = *(int *)((v0_2 + 0x0));
    *(unsigned int *)((v0_3 + 0x2C)) = ((*(int *)((v0_3 + 0x2C))) | ((*(signed char *)(((R1008) + 0x0))) - 48));
    L_C14A43E:;
    gdFsGetTocG(0x1, ((*(int *)((v0_2 + 0x0))) + 0x40), R6, R7);
    v0_5 = (0xFFFFFF);
    if (((((((struct o48_int *)((*(int *)((v0_2 + 0x0)))))->v)) & 0xFFFFFF) == 0xB05E)) goto L_C14A45A;
    v0_0 = (0xFFFFFFCD);
    v0_5 = (0xFFFFFFCD);
    L_C14A45A:;
    v0_3 = (gdFsReadWG((*(int *)0xC16FEA4), 0x1, ((*(int *)((v0_2 + 0x0))) + 0x40))) == 0;
    if (!(v0_3)) goto L_C14A598;
    v0_3 = (gdFsCheckMedia(((*(int *)((v0_2 + 0x0))) + 0x40))) != 0;
    if (v0_3) goto L_C14A47E;
    goto L_C14A5A6;
    L_C14A598:;
    R5 = (0xFFFFFFFC);
    goto L_C14A5A8;
    L_C14A47E:;
    v0_3 = *(int *)((v0_2 + 0x0));
    R1000 = (0x4 + v0_3);
    *(unsigned int *)(((0x4 + v0_3) + 0x0)) = (gdFsGetLE4((((*(int *)((v0_2 + 0x0))) + 0x40) + 0x8C)));
    v0_3 = *(int *)((v0_2 + 0x0));
    *(unsigned int *)((v0_3 + 0x4)) = ((*(int *)((v0_3 + 0x4))) + 0x96);
    v0_3 = *(int *)((v0_2 + 0x0));
    R1000 = (0x8 + v0_3);
    *(unsigned int *)(((0x8 + v0_3) + 0x0)) = (gdFsGetLE4((((*(int *)((v0_2 + 0x0))) + 0x40) + 0x84)));
    (((struct o18_uint *)0xC2D0CDC)->v) = 0xC2D0CDC;
    (((struct o0_ushort *)0xC2D0CDC)->v) = (*(signed char *)0x8C0080FC);
    v0_4 = (0x96);
    v0_3 = (0xC2D0CF4);
    v0_5 = (0x8C0080F0);
    if (((*(short *)((((((struct o18_int *)0xC2D0CDC)->v)) + 0x0))) != 1)) goto L_C14A4F2;
    *(unsigned short *)(((*(int *)((v0_3 + 0x0))) + 0x2)) = (*(signed char *)((v0_5 + 0xD)));
    *(unsigned int *)(((*(int *)((v0_3 + 0x0))) + 0x4)) = v0_1;
    v0_6 = v0_5;
    v0_5 = (v0_1);
    R5 = v0_6;
    R6 = (((*(int *)((v0_3 + 0x0))) + 0x8));
    L_C14A4DC:;
    if (((*(signed char *)((R5 + 0x0))) == 32)) goto L_C14A4F0;
    *(unsigned char *)((R6 + 0x0)) = (*(signed char *)((R5 + 0x0)));
    v0_6 = (int)(v0_5 + 0x1) < (int)0xC;
    v0_5 = ((v0_5 + 0x1));
    R5 = ((R5 + 0x1));
    R6 = ((R6 + 0x1));
    if (v0_6) goto L_C14A4DC;
    L_C14A4F0:;
    *(unsigned char *)((R6 + 0x0)) = v0_1;
    L_C14A4F2:;
    v0_6 = gdFsGetLE4((((*(int *)((v0_2 + 0x0))) + 0x40) + 0x9E));
    v0_7 = gdFsGetLE4((((*(int *)((v0_2 + 0x0))) + 0x40) + 0xA6));
    *(unsigned int *)(((*(int *)(((*(int *)((v0_2 + 0x0))) + 0x10))) + 0x8)) = v0_1;
    v0_5 = (((*(int *)((v0_2 + 0x0))) + 0x40));
    R5 = ((v0_6 + v0_4));
    R6 = ((*(int *)(((*(int *)((v0_2 + 0x0))) + 0x10))));
    R7 = (v0_7);
    v0_5 = gdFsGetDirEnt(v0_5, R5, R6, R7);
    v0_4 = (v0_5);
    if ((v0_5 == -12)) goto L_C14A590;
    if ((v0_4 != 0)) goto L_C14A598;
    if (((*(int *)(((*(int *)(((*(int *)((v0_2 + 0x0))) + 0x10))) + 0x0))) == 0)) goto L_C14A5A6;
    v0_5 = *(int *)((v0_3 + 0x0));
    v0_4 = (v0_5);
    if (((*(short *)((v0_5 + 0x0))) != 1)) goto L_C14A5B2;
    v0_4 = (gdFsGetDirInfoG((v0_4 + 0x8), (((int)stk + 4) + 0x14))) != 0;
    if (v0_4) goto L_C14A598;
    v0_4 = *(int *)(((int)stk + 24));
    *(unsigned int *)(((*(int *)((v0_3 + 0x0))) + 0x4)) = v0_4;
    v0_3 = gdFsGetDirEnt(((*(int *)((v0_2 + 0x0))) + 0x40), v0_4, (*(int *)(((*(int *)((v0_2 + 0x0))) + 0x10))), 0x1);
    v0_4 = (v0_3);
    if ((v0_3 != -12)) goto L_C14A594;
    goto L_C14A590;
    L_C14A594:;
    if ((v0_4 == 0)) goto L_C14A59C;
    goto L_C14A598;
    L_C14A59C:;
    if (((*(int *)(((*(int *)(((*(int *)((v0_2 + 0x0))) + 0x10))) + 0x0))) != 0)) goto L_C14A5AC;
    goto L_C14A5A6;
    L_C14A5AC:;
    gdFsLockDir((*(int *)(((*(int *)((v0_2 + 0x0))) + 0x10))));
    L_C14A5B2:;
    (((struct o38_ushort *)((*(int *)((v0_2 + 0x0)))))->v) = 0x1;
    v0_5 = (v0_1);
    goto L_C14A5BC;
}

int FUN_0c0476dc(int a4, int a5, int a6, float f4)
{
    int t0;
    int t1;
    int t2;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t10;
    register int t11;
    register int t12;

    if (a4 == 0) {
    } else {
        t4 = (((struct o4_int *)0xC2ADA58)->v);
        t5 = (((struct o20_int *)0xC2AC5DC)->v);
        if ((int)a4 < (int)0x5) {
            (((struct o0_uint *)0xC2ADA58)->v) = a4;
        } else {
            t6 = (((struct o24_int *)0xC1EC71C)->v);
            if (a4 == 6) {
                if (((t6 == 1) && (t0 = (((struct o28_int *)0xC1EC71C)->v), t0 != 5)) || (t6 == 0)) {
                    if ((int)((((struct o4_int *)0xC2ADA58)->v)) >= (int)((((struct o4_int *)0xC12D2A0)->v))) {
                    } else {
                        if ((((((struct o0_int *)0xC2ADA58)->v)) != 3) && (t1 = (((struct o0_int *)0xC2ADA58)->v), t1 != 4)) {
                            if (t1 != 2) {
                            } else {
                                *(unsigned char *)((((t5 + 0x300) + (t4 << 2)) + 0x0)) = (*(signed char *)0xC1EC770);
                                *(unsigned char *)((((t5 + 0x300) + (t4 << 2)) + 0x1)) = (*(signed char *)0xC1EC771);
                                *(unsigned char *)((((t5 + 0x300) + (t4 << 2)) + 0x2)) = (*(signed char *)0xC1EC772);
                                *(unsigned char *)((((t5 + 0x300) + (t4 << 2)) + 0x3)) = ((((unsigned char)(*(signed char *)0xC1EC774) << 1) | (*(signed char *)0xC1EC773)) | ((unsigned char)(*(signed char *)0xC1EC776) << 2));
                            }
                        } else {
                            (((struct o0_uchar *)0xC1EC770)->v) = (*(signed char *)((((t5 + 0x300) + (t4 << 2)) + 0x0)));
                            (((struct o1_uchar *)0xC1EC770)->v) = (*(signed char *)((((t5 + 0x300) + (t4 << 2)) + 0x1)));
                            (((struct o2_uchar *)0xC1EC770)->v) = (*(signed char *)((((t5 + 0x300) + (t4 << 2)) + 0x2)));
                            (((struct o3_uchar *)0xC1EC770)->v) = ((*(signed char *)((((t5 + 0x300) + (t4 << 2)) + 0x3))) & 0x1);
                            (((struct o4_uchar *)0xC1EC770)->v) = (((unsigned int)(unsigned char)(*(signed char *)((((t5 + 0x300) + (t4 << 2)) + 0x3))) >> 1) & 0x1);
                            (((struct o6_uchar *)0xC1EC770)->v) = (((unsigned int)(unsigned char)(*(signed char *)((((t5 + 0x300) + (t4 << 2)) + 0x3))) >> 2) & 0x1);
                        }
                    }
                }
            } else {
                if (((((struct o0_int *)0xC2ADA58)->v)) == 1) {
                    (((struct o4_uint *)0xC2ADA58)->v) = 0x0;
                    (((struct o28_uint *)0xC2AC5DC)->v) = 0x0;
                    (((struct o2C_uint *)0xC2AC5DC)->v) = 0x0;
                    (((struct o30_float *)0xC2AC5DC)->v) = 0.0f;
                    (((struct o34_float *)0xC2AC5DC)->v) = 0.0f;
                } else {
                    if ((((((struct o0_int *)0xC2ADA58)->v)) != 3) && (t2 = (((struct o0_int *)0xC2ADA58)->v), t2 != 4)) {
                        if (((((struct o0_int *)0xC2ADA58)->v)) == 2) {
                            t0 = 0x0;
                            if (t6 != 1) {
                            } else {
                                t1 = 0x0;
                                if (((((struct o4_int *)0xC2AC2F0)->v)) != 0) {
                                } else {
                                    t2 = 0x0;
                                    if (((((struct o0_int *)0xC12D2A0)->v)) == 4) {
                                    } else {
                                        if (((((struct o4_int *)0xC2ADA58)->v)) == 0) {
                                            (((struct o8_uint *)0xC12D2A0)->v) = 0xFFFFFFFF;
                                            (((struct oC_uint *)0xC12D2A0)->v) = 0xB4;
                                            (((struct o10_uint *)0xC12D2A0)->v) = 0xFFFFFFFF;
                                        }
                                        t4 = (((struct o8_int *)0xC12D2A0)->v);
                                        t5 = 0x0;
                                        if ((int)t4 < 0) {
                                            t5 = 0x1;
                                        }
                                        t6 = 0x2;
                                        if ((int)t4 < (int)0xB) {
                                            if (((((struct oC_int *)0xC12D2A0)->v)) == 0) {
                                                t4 = 0x2;
                                                if (((((struct o10_int *)0xC12D2A0)->v)) != -1) {
                                                    t7 = FUN_0c02d694(0xC175930, ((((struct o10_int *)0xC12D2A0)->v)));
                                                    t4 = 0x2;
                                                    if (t7 != 0) {
                                                        t7 = (((struct o8_int *)0xC12D2A0)->v);
                                                        (((struct o8_uint *)0xC12D2A0)->v) = (t7 + 0x1);
                                                        t4 = 0x2;
                                                        if ((int)(t7 + 0x1) < (int)0xB) {
                                                            t7 = (((struct o8_int *)0xC12D2A0)->v);
                                                            t10 = 0xC12F1A8;
                                                            if (((((struct o0_int *)0xC1EC71C)->v)) == 0) {
                                                                t10 = 0xC12EC08;
                                                            }
                                                            *(unsigned int *)(((t10 + ((((t7 << 2) << 1) + t7) << 2)) + 0x0)) = ((((struct o4_int *)0xC2ADA58)->v));
                                                            *(unsigned int *)(((t10 + ((((t7 << 2) << 1) + t7) << 2)) + 0x4)) = 0x0;
                                                            *(unsigned int *)(((t10 + ((((t7 << 2) << 1) + t7) << 2)) + 0x8)) = (((((struct o8_int *)0xC12D2A0)->v)) + 0x50);
                                                            *(unsigned int *)(((t10 + ((((t7 << 2) << 1) + t7) << 2)) + 0xC)) = 0x4;
                                                            *(unsigned int *)(((t10 + ((((t7 << 2) << 1) + t7) << 2)) + 0x10)) = (((((struct o8_int *)0xC12D2A0)->v)) + 0x23);
                                                            *(unsigned int *)(((t10 + ((((t7 << 2) << 1) + t7) << 2)) + 0x14)) = 0x1;
                                                            *(unsigned int *)(((t10 + ((((t7 << 2) << 1) + t7) << 2)) + 0x18)) = ((((struct o10_int *)0xC12D2A0)->v));
                                                            *(unsigned int *)(((t10 + ((((t7 << 2) << 1) + t7) << 2)) + 0x1C)) = ((int)((int)(FUN_0c070e60()) % (int)0x3));
                                                            *(unsigned int *)(((t10 + ((((t7 << 2) << 1) + t7) << 2)) + 0x20)) = 0x3039;
                                                            *(unsigned int *)(((((*(int *)(((t10 + ((((t7 << 2) << 1) + t7) << 2)) + 0x8))) * 0x3D0) + ((((struct oC_int *)0xC2ADA58)->v))) + 0x0)) = (*(int *)0xC175C80);
                                                            t11 = 0xC1758B4;
                                                            t12 = ((((*(int *)(((t10 + ((((t7 << 2) << 1) + t7) << 2)) + 0x8))) * 0x3D0) + ((((struct oC_int *)0xC2ADA58)->v))) + 0x4);
                                                            for (;;) { t6 = *(int *)t11; t11 = (t11 + 4); if ((unsigned int)((0xC1758B4 + 972)) < (unsigned int)t11) break; *(unsigned int *)t12 = t6; t12 = (t12 + 4); }
                                                            (((struct oC_uint *)0xC12D2A0)->v) = 0x12C;
                                                            (((struct o10_uint *)0xC12D2A0)->v) = 0xFFFFFFFF;
                                                            t4 = 0x0;
                                                        }
                                                    }
                                                }
                                                t6 = t4;
                                            } else {
                                                (((struct oC_uint *)0xC12D2A0)->v) = (((((struct oC_int *)0xC12D2A0)->v)) - 1);
                                                t6 = t5;
                                            }
                                        }
                                        t2 = t6;
                                    }
                                    t1 = t2;
                                }
                                t0 = t1;
                            }
                            if ((((int)((((struct o4_int *)0xC2ADA58)->v)) < (int)((((struct o4_int *)0xC12D2A0)->v))) && (t0 == 0)) || (t0 == 1)) {
                                (((struct o4_uint *)0xC2ADA58)->v) = (((((struct o4_int *)0xC2ADA58)->v)) + 0x1);
                            }
                        }
                    } else {
                        if ((int)((((struct o4_int *)0xC2ADA58)->v)) < (int)((((struct o4_int *)0xC12D2A0)->v))) {
                            (((struct o4_uint *)0xC2ADA58)->v) = (((((struct o4_int *)0xC2ADA58)->v)) + 0x1);
                        }
                    }
                }
            }
        }
    }
    if (((((struct o0_int *)0xC2AC2F0)->v)) == 0) {
        (((struct o0_uint *)0xC2AC5DC)->v) = ((((struct o4_int *)0xC2ADA58)->v));
    }
    return ((((struct o0_int *)0xC2ADA58)->v));
}

int FUN_0c033b12(int a4, int a5, int a6, int a7)
{
    int stk[4];
    int t0;
    int t6;
    register int t13;
    register int t39;
    register int t121;
    register int t102;
    int t103;
    register int t104;
    int t117;
    int R1000;
    int R1004;
    int R1008;

    R1000 = *(int *)((int)stk + 0);
    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);

    if (a4 == 0) {
        (((struct o0_uint *)0xC2A4670)->v) = 0x0;
        (((struct o4_uint *)0xC2A4670)->v) = 0x0;
        (((struct o8_uint *)0xC2A4670)->v) = 0x0;
        (((struct o2_ushort *)0xC2A5878)->v) = 0x0;
        (((struct o0_ushort *)0xC2A5878)->v) = 0x0;
        (((struct oC_uint *)0xC2A4670)->v) = 0x0;
        t121 = 0x0;
    } else {
        t121 = 0x0;
        if (0x0 != 0) {
        } else {
            t0 = (((struct o4_int *)0xC1EC758)->v);
            (((struct o0_uint *)0xC2A4670)->v) = (((((((((((((((t0 & 0x8) == 0)) ? 1 : 0) ^ 0x1) | (((-(((((t0 & 0x10) == 0)) ? 1 : 0) - 1)) << 2) << 1)) | (((-(((((t0 & 0x20) == 0)) ? 1 : 0) - 1)) << 2) << 2)) | ((((-(((((t0 & 0x40) == 0)) ? 1 : 0) - 1)) << 2) << 2) << 1)) | ((((-(((((0x80 & t0) == 0)) ? 1 : 0) - 1)) << 2) << 2) << 2)) | ((-(((((0x400 & t0) == 0)) ? 1 : 0) - 1)) << 7)) | ((-(((((0x200 & t0) == 0)) ? 1 : 0) - 1)) << 8)) | (((-(((((0x20000 & t0) == 0)) ? 1 : 0) - 1)) << 8) << 1)) | (((-(((((0x10000 & t0) == 0)) ? 1 : 0) - 1)) << 8) << 2)) | ((-(((((0x2 & t0) == 0)) ? 1 : 0) - 1)) << 2)) | ((-(((((0x4 & t0) == 0)) ? 1 : 0) - 1)) << 1));
            R1008 = ((((struct o4_int *)0xC2A4670)->v));
            t6 = (((struct o0_int *)0xC1EC758)->v);
            (((struct o4_uint *)0xC2A4670)->v) = (((((((((((((((t6 & 0x8) == 0)) ? 1 : 0) ^ 0x1) | (((-(((((t6 & 0x10) == 0)) ? 1 : 0) - 1)) << 2) << 1)) | (((-(((((t6 & 0x20) == 0)) ? 1 : 0) - 1)) << 2) << 2)) | ((((-(((((t6 & 0x40) == 0)) ? 1 : 0) - 1)) << 2) << 2) << 1)) | ((((-(((((0x80 & t6) == 0)) ? 1 : 0) - 1)) << 2) << 2) << 2)) | ((-(((((0x400 & t6) == 0)) ? 1 : 0) - 1)) << 7)) | ((-(((((0x200 & t6) == 0)) ? 1 : 0) - 1)) << 8)) | (((-(((((0x20000 & t6) == 0)) ? 1 : 0) - 1)) << 8) << 1)) | (((-(((((0x10000 & t6) == 0)) ? 1 : 0) - 1)) << 8) << 2)) | ((-(((((0x2 & t6) == 0)) ? 1 : 0) - 1)) << 2)) | ((-(((((0x4 & t6) == 0)) ? 1 : 0) - 1)) << 1));
            *(unsigned short *)(((((int)stk + 0) + 0xC) + 0x0)) = (((unsigned int)(unsigned short)((((struct o10_short *)0xC1EC758)->v)) >> 8) - 128);
            *(unsigned short *)(((((int)stk + 0) + 0xC) + 0x2)) = (((unsigned int)(unsigned short)((((struct o16_short *)0xC1EC758)->v)) >> 8) - 128);
            R1000 = (((int)stk + 0) + 0xC);
            t13 = (((struct o0_short *)0xC2A5878)->v);
            R1004 = t13;
            if (((int)t13 > (int)0xFFFFFFB0) && ((int)t13 < (int)0x50)) {
                if ((int)(*(short *)(((R1000) + 0x0))) < (int)0xFFFFFFB0) {
                    (((struct o0_uint *)0xC2A4670)->v) = (((((struct o0_int *)0xC2A4670)->v)) | 0x20);
                } else {
                    if ((int)(*(short *)(((R1000) + 0x0))) > (int)0x50) {
                        (((struct o0_uint *)0xC2A4670)->v) = (((((struct o0_int *)0xC2A4670)->v)) | 0x40);
                    }
                }
            }
            R1000 = ((((int)stk + 0) + 0xC) + 0x2);
            t39 = (((struct o2_short *)0xC2A5878)->v);
            R1004 = t39;
            if (((int)t39 > (int)0xFFFFFFB0) && ((int)t39 < (int)0x50)) {
                if ((int)(*(short *)(((R1000) + 0x0))) < (int)0xFFFFFFB0) {
                    (((struct o0_uint *)0xC2A4670)->v) = (((((struct o0_int *)0xC2A4670)->v)) | 0x8);
                } else {
                    if ((int)(*(short *)(((R1000) + 0x0))) > (int)0x50) {
                        (((struct o0_uint *)0xC2A4670)->v) = (((((struct o0_int *)0xC2A4670)->v)) | 0x10);
                    }
                }
            }
            R1000 = (((int)stk + 0) + 0xC);
            (((struct o0_ushort *)0xC2A5878)->v) = (*(short *)(((((int)stk + 0) + 0xC) + 0x0)));
            t121 = *(short *)(((((int)stk + 0) + 0xC) + 0x2));
            (((struct o2_ushort *)0xC2A5878)->v) = t121;
            if ((int)(*(short *)(((R1000) + 0x0))) < (int)0xFFFFFFB0) {
                (((struct o4_uint *)0xC2A4670)->v) = (((((struct o4_int *)0xC2A4670)->v)) | 0x20);
            } else {
                if ((int)(*(short *)(((((int)stk + 0) + 0xC) + 0x0))) > (int)0x50) {
                    (((struct o4_uint *)0xC2A4670)->v) = (((((struct o4_int *)0xC2A4670)->v)) | 0x40);
                }
            }
            if ((int)(*(short *)((((((int)stk + 0) + 0xC) + 0x2) + 0x0))) < (int)0xFFFFFFB0) {
                (((struct o4_uint *)0xC2A4670)->v) = (((((struct o4_int *)0xC2A4670)->v)) | 0x8);
            } else {
                if ((int)(*(short *)((((((int)stk + 0) + 0xC) + 0x2) + 0x0))) > (int)0x50) {
                    (((struct o4_uint *)0xC2A4670)->v) = (((((struct o4_int *)0xC2A4670)->v)) | 0x10);
                }
            }
        }
        if ((((((struct o0_int *)0xC2A4670)->v)) == 0) && ((t102 = (((struct o4_int *)0xC2A4670)->v), t102 != 0) && (t103 = (((struct o4_int *)0xC2A4670)->v), t104 = R1008, t103 == t104))) {
            if (((((struct o8_int *)0xC2A4670)->v)) == 0) {
                (((struct o8_uint *)0xC2A4670)->v) = 0x6;
            } else {
                (((struct o8_uint *)0xC2A4670)->v) = (((((struct o8_int *)0xC2A4670)->v)) - 1);
            }
        } else {
            (((struct o8_uint *)0xC2A4670)->v) = 0x14;
        }
        if ((((((struct o0_int *)0xC2A4670)->v)) == 0) && (t117 = (((struct o4_int *)0xC2A4670)->v), t117 == 0)) {
            (((struct oC_uint *)0xC2A4670)->v) = (((((struct oC_int *)0xC2A4670)->v)) + 0x1);
        } else {
            (((struct oC_uint *)0xC2A4670)->v) = 0x0;
        }
    }
    return t121;
}
