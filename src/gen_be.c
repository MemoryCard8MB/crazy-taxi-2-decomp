/* Straight-line functions with calls and guards (batch gen_be): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o100_float { char p[0x100]; float v; };
struct o104_float { char p[0x104]; float v; };
struct o108_short { char p[0x108]; short v; };
struct o10A_short { char p[0x10A]; short v; };
struct o10C_short { char p[0x10C]; short v; };
struct o14_int { char p[0x14]; int v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_int { char p[0x20]; int v; };
struct o24_float { char p[0x24]; float v; };
struct o26_uint { char p[0x26]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o28_int { char p[0x28]; int v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o30_int { char p[0x30]; int v; };
struct o34_float { char p[0x34]; float v; };
struct o34_int { char p[0x34]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_short { char p[0x44]; short v; };
struct o44_ushort { char p[0x44]; unsigned short v; };
struct o46_short { char p[0x46]; short v; };
struct o46_ushort { char p[0x46]; unsigned short v; };
struct o48_short { char p[0x48]; short v; };
struct o48_ushort { char p[0x48]; unsigned short v; };
struct o4A_short { char p[0x4A]; short v; };
struct o4A_ushort { char p[0x4A]; unsigned short v; };
struct o60_float { char p[0x60]; float v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o64_float { char p[0x64]; float v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o68_float { char p[0x68]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o84_int { char p[0x84]; int v; };
struct o84_uint { char p[0x84]; unsigned int v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA4_short { char p[0xA4]; short v; };
struct oA6_short { char p[0xA6]; short v; };
struct oA8_short { char p[0xA8]; short v; };
struct oAA_short { char p[0xAA]; short v; };
struct oAE_short { char p[0xAE]; short v; };
struct oAE_ushort { char p[0xAE]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oFC_float { char p[0xFC]; float v; };
extern int FUN_0c026ce6();
int FUN_0c029b12(int, float);
int FUN_0c031b94(int, int, int, int);
int FUN_0c031e86(int, int, int, int);
int FUN_0c031ede(int, int);
int FUN_0c031f94(int, int);
int FUN_0c031fd8(int, int);
int FUN_0c032026(int, int);
int FUN_0c032942(int, int, int, int, int);
int FUN_0c0331b8(int, int);
int FUN_0c03332c(int, int, int, int);
int FUN_0c03386a(int);
int FUN_0c0339c0(int);
int FUN_0c0339fc(int);
int FUN_0c034320(int, int);
int FUN_0c0343b8(int, int);
int FUN_0c0345ec(int, int, int, float, float, float);
int FUN_0c035a20(int);
int FUN_0c035a5e(int, int, float, float);
int FUN_0c039d7e(int, int);
int FUN_0c03c070(int, int, int);
int FUN_0c03e806(int, int);
int FUN_0c046724(int, int, float);
int FUN_0c058ca6(int, int);
int FUN_0c05be5c(int, float);
int FUN_0c05c00c(int, int, float);
int FUN_0c068166(int, int);
int FUN_0c06e700(int, int, float);
int FUN_0c070730(float);
int FUN_0c070e60(void);
float FUN_0c070e80(void);
float FUN_0c072148(int);
int FUN_0c072230(int, int);
int FUN_0c072290(int, int);
int FUN_0c073360(void);
int FUN_0c0739a0(int);
int FUN_0c073a30(float, float, float);
int FUN_0c073a60(int);
float FUN_0c073b40(int, int);
int FUN_0c073c40(int, int, float);
float FUN_0c073c60(int);
int FUN_0c073e90(int);
int FUN_0c074f20(float);
int FUN_0c076230(float, float, float);
int FUN_0c07a380(int, int, int, int);
int FUN_0c07c8be(int);
int FUN_0c07ff00(void);
int FUN_0c07ffac(int);
int FUN_0c0800c8(int, int);
int buIsExistFile(int, int);
int buIsReady(int);
int kmytex_FBAllocEntry(void);
int kmytex_FBDeQueueEntry(int, int, int);
int kmytex_FBEnQueueEntry(int, int, int);
int kmytex_FBEnQueueTop(int, int, int);
int kmytex_FBFreeEntry(int);
extern int memcpy();
int memset(int, int, int);
int nlAddVector(int, int);
int nlCloseEvent(int);
int nlGetMatrix33on44(int);
float nlLength(int, int);
int nlMultiMatrix(int);
int nlMvGetFaceVerts(int, int, int, int);
int nlMvSendFan3(int, int, int, int, int);
int nlMvSendTriangle(int, int, int);
int nlObjPut(int);
int nlObjPutUseViewMatrix(int);
int nlObjPutUseViewMatrixTrnsl(int, float);
int nlOuterProduct(int, int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlRotateV(int, int);
int nlScale(float, float, float);
int nlSubVector3op(int, int, int);
int syRtcGetDate(int);
int FUN_0c032a60(int a4, int a5, int a6, int a7);
float FUN_0c0683b0(int a4, int a5, float f4);
int FUN_0c041718(int a4);
int kmiVQallocFB(int a4, int a5, int a6, int a7, int a8, int a9);
int FUN_0c036f80(void);
int FUN_0c025088(int a4, float f4);
int FUN_0c02d8a8(int a4, float f4);
int FUN_0c06bda4(int a4, int a5);
int nlMvPutFaceClip(int a4, int a5, int a6, int a7);
int kmytex_ABSalloc(int a4, int a5, int a6, int a7, int a8, int a9);
int FUN_0c033f62(int a4, int a5, int a6);

int FUN_0c032a60(int a4, int a5, int a6, int a7)
{
    int stk[31];
    register int t0;
    register int t15;
    register int t16;
    register int t22;
    register int t23;
    register int t24;
    register int t27;
    register int t32;
    register int t35;
    register int t36;
    register int t40;
    register int t55;
    register int t56;
    register int t57;
    register int t63;
    register int t64;
    register int t65;
    register int t68;
    register int t83;
    register int t106;
    register int t85;
    register int t87;
    register int t95;
    register int t102;
    register int t88;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 12)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    t0 = ((int (*)(int, int, int, int))(memcpy))(0xC2AC310, 0xC12A8EC, 0x8, a7);
    FUN_0c031ede(0xC2AC318, 0xC12A8F4);
    syRtcGetDate((((int)stk + 4) + 0xC));
    FUN_0c03332c(0xC2AC3CE, 0x4, 0x3, (unsigned short)(*(short *)(((int)stk + 16))));
    FUN_0c03332c(0xC2AC3D2, 0x2, 0x3, (unsigned char)(*(signed char *)(((int)stk + 18))));
    FUN_0c03332c(0xC2AC3D4, 0x2, 0x3, (unsigned char)(*(signed char *)(((int)stk + 19))));
    FUN_0c03332c(0xC2AC3D6, 0x2, 0x3, (unsigned char)(*(signed char *)(((int)stk + 20))));
    FUN_0c03332c(0xC2AC3D8, 0x2, 0x3, (unsigned char)(*(signed char *)(((int)stk + 21))));
    FUN_0c03332c(0xC2AC3DA, 0x2, 0x3, (unsigned char)(*(signed char *)(((int)stk + 22))));
    t15 = (((struct o4_int *)0xC2AC5CC)->v);
    t16 = t15;
    if ((int)t15 < 0) {
        t16 = (t15 + 0x7);
    }
    t22 = ((int (*)(int, int, int))(memcpy))(0xC2AC454, (*(int *)((((((t16 >> 1) >> 1) >> 1) << 2) + 0xC12B748))), 0xB);
    t23 = (((struct o4_int *)0xC2AC5CC)->v);
    t24 = ((~(((~t23) + 0x1) & 0x7)) + 0x1);
    if ((int)t23 >= 0) {
        t24 = (t23 & 0x7);
    }
    t27 = ((int (*)(int, int, int))(memcpy))(0xC2AC45F, (*(int *)(((t24 << 2) + 0xC12B728))), 0x8);
    memset(0xC2AC490, 0x40, 0x1E);
    if ((int)((((struct o0_int *)0xC2AC5CC)->v)) < (int)0x2) {
        t32 = FUN_0c07ffac(((((struct o14_int *)0xC2AC5CC)->v)));
        FUN_0c03332c(0xC2AC490, 0x6, 0x1, t32);
        if ((int)((((struct o14_int *)0xC2AC5CC)->v)) < 0) {
            t35 = 0xC2AC490;
            for (;;) {
                t36 = *(signed char *)((t35 + 0x0));
                t35 = (t35 + 0x1);
                if (t36 != 32) {
                    break;
                }
            }
            *(unsigned char *)(((t35 - 2) + 0x0)) = 0x2D;
        }
    } else {
        t40 = (((struct o0_int *)0xC2AC5CC)->v);
        if (((t40 - 2) != 0) && ((t40 - 2) != 3)) {
            if ((t40 - 2) == 1) {
                FUN_0c031fd8(0xC2AC490, ((((struct o18_int *)0xC2AC5CC)->v)));
            } else {
                FUN_0c032026(0xC2AC490, ((((struct o18_int *)0xC2AC5CC)->v)));
            }
        } else {
            FUN_0c031f94(0xC2AC490, ((((struct o18_int *)0xC2AC5CC)->v)));
        }
    }
    t55 = ((int (*)(int, int, int))(memcpy))(0xC2AC4CC, (*(int *)(((((((struct o0_int *)0xC2AC5CC)->v)) << 2) + 0xC12B6B8))), 0x14);
    t56 = (((struct o4_int *)0xC2AC5CC)->v);
    t57 = t56;
    if ((int)t56 < 0) {
        t57 = (t56 + 0x7);
    }
    t63 = ((int (*)(int, int, int))(memcpy))(0xC2AC508, (*(int *)((((((t57 >> 1) >> 1) >> 1) << 2) + 0xC12B71C))), 0x8);
    t64 = (((struct o4_int *)0xC2AC5CC)->v);
    t65 = ((~(((~t64) + 0x1) & 0x7)) + 0x1);
    if ((int)t64 >= 0) {
        t65 = (t64 & 0x7);
    }
    t68 = ((int (*)(int, int, int))(memcpy))(0xC2AC544, (*(int *)(((t65 << 2) + 0xC12B728))), 0x8);
    (((struct o0_uchar *)0xC2AC582)->v) = 0x2D;
    FUN_0c03332c(0xC2AC58A, 0x1, 0x3, ((int)((int)(unsigned short)(*(short *)(((int)stk + 16))) % (int)0xA)));
    FUN_0c03332c(0xC2AC58B, 0x2, 0x3, (unsigned char)(*(signed char *)(((int)stk + 18))));
    FUN_0c03332c(0xC2AC58D, 0x2, 0x3, (unsigned char)(*(signed char *)(((int)stk + 19))));
    FUN_0c03332c(0xC2AC58F, 0x2, 0x3, (unsigned char)(*(signed char *)(((int)stk + 20))));
    FUN_0c03332c(0xC2AC591, 0x2, 0x3, (unsigned char)(*(signed char *)(((int)stk + 21))));
    t83 = FUN_0c031e86(0x1, (((((struct o30_int *)0xC2AC5CC)->v)) + 0x300), (((((struct o34_int *)0xC2AC5CC)->v)) - 768), ((*(int *)(((int)stk + 8))) - 768));
    t106 = 0xFFFFFFFF;
    if ((int)t83 > 0) {
        *(unsigned int *)0xC2AC5A8 = (t83 + 0x50); /* manual: the word at 0xC2AC5A8 (an offset struct put it at 0xC2AC5AA by alignment) */
        t85 = 0xC2AC2FC;
        t87 = ((((struct o30_int *)0xC2AC5CC)->v));
        for (;;) { t88 = *(int *)t85; t85 = (t85 + 4); if ((unsigned int)((0xC2AC2FC + 768)) < (unsigned int)t85) break; *(unsigned int *)t87 = t88; t87 = (t87 + 4); }
        FUN_0c031b94(0x0, (((((struct o30_int *)0xC2AC5CC)->v)) + 0x2B0), 0x4C, (((((struct o30_int *)0xC2AC5CC)->v)) + 0x2FC));
        memset((((int)stk + 4) + 0x18), 0x0, 0x60);
        FUN_0c0800c8((((int)stk + 4) + 0x18), 0xC12A947);
        FUN_0c0800c8((((int)stk + 4) + 0x2A), 0xC12A952);
        t95 = ((int (*)(int, int, int))(memcpy))((((int)stk + 4) + 0x4C), 0xC12A96C, 0x10);
        *(unsigned int *)(((int)stk + 96)) = 0xC12B055;
        *(unsigned int *)(((int)stk + 100)) = 0xC12B075;
        *(unsigned short *)(((int)stk + 104)) = 0x1;
        *(unsigned short *)(((int)stk + 106)) = 0x1;
        *(unsigned int *)(((int)stk + 108)) = 0x0;
        *(unsigned short *)(((int)stk + 112)) = 0x0;
        *(unsigned int *)(((int)stk + 116)) = ((((struct o30_int *)0xC2AC5CC)->v));
        *(unsigned int *)(((int)stk + 120)) = (t83 + 0x300);
        *(int *)((int)stk + 0) = 0x0;
        *(unsigned int *)(((int)stk + 4)) = (FUN_0c032942((*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 12))), (((int)stk + 0) + 0x1C), 0x0, 0x0));
        t102 = FUN_0c031e86(0xFFFFFFFF, (((((struct o30_int *)0xC2AC5CC)->v)) + 0x300), (((((struct o34_int *)0xC2AC5CC)->v)) - 768), t83);
        t106 = 0xFFFFFFFF;
        if ((int)t102 <= 0) {
        } else {
            t106 = (*(int *)(((int)stk + 4)));
        }
    }
    return t106;
}


int FUN_0c041718(int a4)
{
    int stk[4];

    register int R1;
    register int R7;
    register float F0;
    register float F1;
    register float F3;
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
    v0_2 = a4;
    v0_1 = (0xAE);
    v0_0 = (v0_2);
    if (((int)(unsigned short)((((struct oAE_short *)(v0_2))->v)) < (int)0x3000)) goto L_C04176C;
    if (((int)(unsigned short)(*(short *)((v0_0 + v0_1))) >= (int)0x4800)) goto L_C04174C;
    v0_2 = (0x4000);
    L_C04176E:;
    if ((v0_2 != 0)) goto L_C0417A4;
    v0_1 = (0x84);
    v0_3 = ((((((struct o84_int *)(v0_0))->v)) & 0xFFFFFFDF));
    L_C0417AC:;
    *(unsigned int *)((v0_0 + v0_1)) = v0_3;
    v0_1 = ((FUN_0c046724((unsigned short)((((struct oAE_short *)(v0_0))->v)), v0_2, 1.0f)));
    w0_0 = (0.0f);
    w0_1 = (1.0f);
    if ((!(9.99999975e-06f > _builtin_fabsf(((((struct o100_float *)(v0_0))->v)))))) goto L_C0417FE;
    v0_3 = (int)(FUN_0c07ffac(v0_1)) >= (int)0x400;
    if (v0_3) goto L_C0417FE;
    (((struct oAE_ushort *)(v0_0))->v) = v0_2;
    (((struct o100_float *)(v0_0))->v) = w0_0;
    v0_1 = (0x100);
    if (!((v0_2 == 0))) goto L_C041A2C;
    (((struct oFC_float *)(v0_0))->v) = w0_0;
    (((struct o84_uint *)(v0_0))->v) = (((((struct o84_int *)(v0_0))->v)) & 0xFFFFFF9F);
    v0_1 = (0x84);
    goto L_C041A2C;
    L_C041A2C:;
    return v0_1;
    L_C0417FE:;
    (((struct oAE_ushort *)(v0_0))->v) = (((((struct oAE_short *)(v0_0))->v)) + ((int)((((((((struct o100_float *)(v0_0))->v)) * 3276800.0f) / 6.28318548f)) + 0.5f) & 0xFFFF));
    v0_2 = FUN_0c046724((unsigned short)((((struct oAE_short *)(v0_0))->v)), v0_2, w0_1);
    FUN_0c073360();
    FUN_0c0739a0((0x8C + v0_0));
    nlRotateAZ((-(unsigned short)((((struct o10C_short *)(v0_0))->v))));
    nlRotateAX((-(unsigned short)((((struct o108_short *)(v0_0))->v))));
    nlRotateAY((-(unsigned short)((((struct o10A_short *)(v0_0))->v))));
    nlRotateAY((unsigned short)((((struct oA6_short *)(v0_0))->v)));
    nlRotateAX((unsigned short)((((struct oA4_short *)(v0_0))->v)));
    nlRotateAZ((unsigned short)((((struct oA8_short *)(v0_0))->v)));
    nlRotateAX((unsigned short)((((struct oAA_short *)(v0_0))->v)));
    nlRotateAZ((unsigned short)((((struct oAE_short *)(v0_0))->v)));
    v0_3 = *(int *)(((((((struct o78_int *)(v0_0))->v)) * 0xA8) + 0xC0C106C));
    v0_4 = (((((((v0_3 << 1) + v0_3) << 2) << 2) << 1) + 0xC2AB908));
    v0_3 = (v0_2);
    v0_2 = (0x8);
    v0_5 = (0xC072230);
    w0_1 = (((((struct o104_float *)(v0_0))->v)));
    L_C04192E:;
    if ((v0_2 != 0)) goto L_C041918;
    w0_2 = (((struct o104_float *)(v0_0))->v);
    v0_2 = !((w0_2 - w0_1) > 0.0f);
    w0_1 = ((w0_2 - w0_1));
    if (v0_2) goto L_C041A18;
    (((struct oFC_float *)(v0_0))->v) = w0_1;
    if (((int)v0_3 <= 0)) goto L_C04194C;
    v0_2 = (0x1);
    L_C041956:;
    if (((int)v0_1 <= 0)) goto L_C04195E;
    v0_3 = (0x1);
    L_C041968:;
    if ((v0_2 == v0_3)) goto L_C0419C8;
    if ((!(9.99999975e-05f > _builtin_fabsf(((((struct o100_float *)(v0_0))->v)))))) goto L_C041980;
    (((struct o100_float *)(v0_0))->v) = w0_0;
    L_C041A26:;
    v0_1 = ((nlPopMatrix(0x1)));
    goto L_C041A2C;
    L_C041980:;
    (((struct o100_float *)(v0_0))->v) = (((((struct o100_float *)(v0_0))->v)) * 0.300000012f);
    FPUL_ = (0x3E99999A);
    if ((!(100.0f > ((((struct o2C_float *)(v0_0))->v))))) goto L_C041A26;
    w0_0 = (((struct o100_float *)(v0_0))->v);
    v0_2 = ((int)(w0_0 * 4000.0f));
    v0_0 = (0xA);
    FPUL_ = ((int)(w0_0 * 4000.0f));
    if (((unsigned int)(int)(w0_0 * 4000.0f) >= (unsigned int)0xA)) goto L_C0419B2;
    v0_2 = (v0_2);
    L_C0419B4:;
    *(unsigned int *)(((int)stk + 0)) = v0_2;
    FUN_0c058ca6((*(int *)(((v0_2 << 2) + 0xC0C2520))), 0x1);
    goto L_C041A26;
    L_C0419B2:;
    v0_2 = (v0_0);
    goto L_C0419B4;
    L_C0419C8:;
    w0_2 = (9.99999994e-09f);
    if (((int)v0_1 >= 0)) goto L_C0419E2;
    v0_1 = (0x100);
    w0_0 = ((((((struct o100_float *)(v0_0))->v)) - ((((((struct oB4_float *)(v0_0))->v)) * w0_2))));
    L_C0419F2:;
    *(float *)((v0_0 + v0_1)) = w0_0;
    goto L_C041A26;
    L_C0419E2:;
    w0_0 = ((((struct o100_float *)(v0_0))->v));
    w0_0 = w0_0 + w0_2 * ((((struct oB4_float *)(v0_0))->v));
    v0_1 = (0x100);
    w0_0 = (w0_0);
    goto L_C0419F2;
    L_C04195E:;
    if (((int)v0_1 >= 0)) goto L_C041966;
    v0_3 = (0xFFFFFFFF);
    goto L_C041968;
    L_C041966:;
    v0_3 = (0x0);
    goto L_C041968;
    L_C04194C:;
    if (((int)v0_3 >= 0)) goto L_C041954;
    v0_2 = (0xFFFFFFFF);
    goto L_C041956;
    L_C041954:;
    v0_2 = (0x0);
    goto L_C041956;
    L_C041A18:;
    (((struct o100_float *)(v0_0))->v) = (((((struct o100_float *)(v0_0))->v)) * 0.980000019f);
    FPUL_ = (0x3F7AE148);
    goto L_C041A26;
    L_C041918:;
    FUN_0c072230(v0_4, (((int)stk + 0) + 0x4));
    w0_3 = *(float *)(((int)stk + 8));
    v0_4 = ((v0_4 + 0xC));
    v0_2 = ((v0_2 - 1));
    w0_2 = (w0_3);
    if ((!(w0_1 > w0_3))) goto L_C04192E;
    w0_1 = (w0_2);
    goto L_C04192E;
    L_C0417A4:;
    v0_1 = (0x84);
    v0_3 = ((((((struct o84_int *)(v0_0))->v)) | 0x20));
    goto L_C0417AC;
    L_C04174C:;
    if (((int)(unsigned short)(*(short *)((v0_0 + v0_1))) >= (int)0xB800)) goto L_C04175C;
    v0_2 = (0x8000);
    goto L_C04176E;
    L_C04175C:;
    if (((int)(unsigned short)(*(short *)((v0_0 + v0_1))) >= (int)0xD000)) goto L_C04176C;
    v0_2 = (0xC000);
    goto L_C04176E;
    L_C04176C:;
    v0_2 = (0x0);
    goto L_C04176E;
}

int kmiVQallocFB(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int stk[4];
    register int t0;
    register int t2;
    register int t5;
    register int t15;
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register int t177;
    register int t49;
    register int t79;
    register int t105;
    register int t106;
    register int t109;
    register int t7;
    register int t12;
    int t13;
    int R1000;
    int R1008;
    int R1012;

    R1000 = *(int *)((int)stk + 0);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);

    *(unsigned short *)(((int)stk + 4)) = a4;
    t0 = ((~(((~a6) + 0x1) & 0x1F)) + 0x1);
    if ((int)a6 >= 0) {
        t0 = (a6 & 0x1F);
    }
    t2 = a6;
    if (t0 != 0) {
        t2 = (a6 + (0x20 - t0));
    }
    t5 = *(short *)(((int)stk + 4));
    t9 = *(int *)((((((t5 << 2) + t5) << 2) + 0xC173DEC) + 0x8));
    t15 = 0x0;
    if (t9 != 0) {
        t8 = t5;
        t10 = 0x0;
        for (;;) {
            t11 = *(int *)((t9 + 0xC));
            if (((int)t11 <= (int)a5) && ((t12 = *(int *)((t9 + 0x10)), t8 = t12, t8 = (t8 + t11), (int)t8 > (int)a5) && (((int)t11 <= (int)(a5 + a6)) && (t13 = *(int *)((t9 + 0x10)), t7 = t13, t7 = (t7 + t11), (int)t7 >= (int)(a5 + a6))))) {
                t10 = t9;
                t9 = 0x0;
            } else {
                t9 = (*(int *)((t9 + 0x8)));
            }
            if (t9 == 0) {
                break;
            }
        }
        t15 = t10;
    }
    t177 = 0x3;
    if (t15 == 0) {
    } else {
        if ((*(int *)((t15 + 0x10))) == t2) {
            kmytex_FBDeQueueEntry((((((t5 << 2) + t5) << 2) + 0xC173DEC) + 0x8), (((((t5 << 2) + t5) << 2) + 0xC173DEC) + 0xC), t15);
            kmytex_FBEnQueueTop(((((t5 << 2) + t5) << 2) + 0xC173DEC), (((((t5 << 2) + t5) << 2) + 0xC173DEC) + 0x4), t15);
            *(unsigned int *)((a7 + 0x8)) = (*(int *)((t15 + 0xC)));
            *(unsigned int *)((t15 + 0x14)) = a7;
            *(unsigned short *)((t15 + 0x0)) = 0x1;
            if ((*(short *)(((int)stk + 4))) == 0) {
                *(unsigned short *)((t15 + 0x0)) = ((*(short *)((t15 + 0x0))) | 0x800);
            } else {
                *(unsigned short *)((t15 + 0x0)) = ((*(short *)((t15 + 0x0))) | 0x1000);
            }
            if (a8 != 0) {
                *(unsigned short *)((t15 + 0x0)) = ((*(short *)((t15 + 0x0))) | 0x2);
            }
            if (a9 != 0) {
                *(unsigned short *)((t15 + 0x0)) = ((*(short *)((t15 + 0x0))) | 0x4);
            }
            *(unsigned int *)((((((t5 << 2) + t5) << 2) + 0xC173DEC) + 0x10)) = ((*(int *)((((((t5 << 2) + t5) << 2) + 0xC173DEC) + 0x10))) - (*(int *)((t15 + 0x10))));
            t177 = 0x0;
        } else {
            if ((*(int *)((t15 + 0xC))) == a5) {
                t49 = kmytex_FBAllocEntry();
                t177 = 0x3;
                if (t49 == 0) {
                } else {
                    *(unsigned int *)((t49 + 0xC)) = (*(int *)((t15 + 0xC)));
                    *(unsigned int *)((t49 + 0x10)) = t2;
                    *(unsigned int *)((t15 + 0x10)) = ((*(int *)((t15 + 0x10))) - t2);
                    *(unsigned int *)((t15 + 0xC)) = ((*(int *)((t15 + 0xC))) + t2);
                    R1000 = ((((t5 << 2) + t5) << 2) + 0xC173DEC);
                    kmytex_FBEnQueueTop((R1000), (((((t5 << 2) + t5) << 2) + 0xC173DEC) + 0x4), t49);
                    *(unsigned int *)((a7 + 0x8)) = (*(int *)((t49 + 0xC)));
                    *(unsigned int *)((t49 + 0x14)) = a7;
                    if ((*(short *)(((int)stk + 4))) == 0) {
                        *(unsigned short *)((t49 + 0x0)) = ((*(short *)((t49 + 0x0))) | 0x800);
                    } else {
                        *(unsigned short *)((t49 + 0x0)) = ((*(short *)((t49 + 0x0))) | 0x1000);
                    }
                    if (a8 != 0) {
                        *(unsigned short *)((t49 + 0x0)) = ((*(short *)((t49 + 0x0))) | 0x2);
                    }
                    if (a9 != 0) {
                        *(unsigned short *)((t49 + 0x0)) = ((*(short *)((t49 + 0x0))) | 0x4);
                    }
                    *(unsigned int *)((((((t5 << 2) + t5) << 2) + 0xC173DEC) + 0x10)) = ((*(int *)((((((t5 << 2) + t5) << 2) + 0xC173DEC) + 0x10))) - (*(int *)((t49 + 0x10))));
                    t177 = 0x0;
                }
            } else {
                if (((*(int *)((t15 + 0xC))) + (*(int *)((t15 + 0x10)))) == (a5 + a6)) {
                    t79 = kmytex_FBAllocEntry();
                    t177 = 0x3;
                    if (t79 != 0) {
                        *(unsigned int *)((t15 + 0x10)) = ((*(int *)((t15 + 0x10))) - t2);
                        *(unsigned int *)((t79 + 0xC)) = a5;
                        *(unsigned int *)((t79 + 0x10)) = t2;
                        R1000 = ((((t5 << 2) + t5) << 2) + 0xC173DEC);
                        kmytex_FBEnQueueTop((R1000), (((((t5 << 2) + t5) << 2) + 0xC173DEC) + 0x4), t79);
                        *(unsigned int *)((a7 + 0x8)) = (*(int *)((t79 + 0xC)));
                        *(unsigned int *)((t79 + 0x14)) = a7;
                        if ((*(short *)(((int)stk + 4))) == 0) {
                            *(unsigned short *)((t79 + 0x0)) = ((*(short *)((t79 + 0x0))) | 0x800);
                        } else {
                            *(unsigned short *)((t79 + 0x0)) = ((*(short *)((t79 + 0x0))) | 0x1000);
                        }
                        if (a8 != 0) {
                            *(unsigned short *)((t79 + 0x0)) = ((*(short *)((t79 + 0x0))) | 0x2);
                        }
                        if (a9 != 0) {
                            *(unsigned short *)((t79 + 0x0)) = ((*(short *)((t79 + 0x0))) | 0x4);
                        }
                        *(unsigned int *)((((((t5 << 2) + t5) << 2) + 0xC173DEC) + 0x10)) = ((*(int *)((((((t5 << 2) + t5) << 2) + 0xC173DEC) + 0x10))) - (*(int *)((t79 + 0x10))));
                        t177 = 0x0;
                    }
                } else {
                    t105 = kmytex_FBAllocEntry();
                    t177 = 0x3;
                    if (t105 != 0) {
                        t106 = kmytex_FBAllocEntry();
                        R1000 = t106;
                        if (t106 == 0) {
                            kmytex_FBFreeEntry(t105);
                            t177 = 0x3;
                        } else {
                            R1012 = (*(int *)((t15 + 0x10)));
                            t109 = *(int *)((t15 + 0xC));
                            R1008 = (a5 - t109);
                            *(unsigned int *)((t15 + 0x10)) = (a5 - t109);
                            *(unsigned int *)((t105 + 0xC)) = a5;
                            *(unsigned int *)((t105 + 0x10)) = t2;
                            kmytex_FBEnQueueTop(((((t5 << 2) + t5) << 2) + 0xC173DEC), (((((t5 << 2) + t5) << 2) + 0xC173DEC) + 0x4), t105);
                            *(unsigned int *)(((R1000) + 0xC)) = (a5 + t2);
                            *(unsigned int *)(((R1000) + 0x10)) = (((R1012) - t2) - (R1008));
                            kmytex_FBEnQueueEntry((((((t5 << 2) + t5) << 2) + 0xC173DEC) + 0xC), (R1000), (*(int *)((((((t5 << 2) + t5) << 2) + 0xC173DEC) + 0xC))));
                            *(unsigned int *)((a7 + 0x8)) = (*(int *)((t105 + 0xC)));
                            *(unsigned int *)((t105 + 0x14)) = a7;
                            if ((*(short *)(((int)stk + 4))) == 0) {
                                *(unsigned short *)((t105 + 0x0)) = ((*(short *)((t105 + 0x0))) | 0x800);
                            } else {
                                *(unsigned short *)((t105 + 0x0)) = ((*(short *)((t105 + 0x0))) | 0x1000);
                            }
                            if (a8 != 0) {
                                *(unsigned short *)((t105 + 0x0)) = ((*(short *)((t105 + 0x0))) | 0x2);
                            }
                            if (a9 != 0) {
                                *(unsigned short *)((t105 + 0x0)) = ((*(short *)((t105 + 0x0))) | 0x4);
                            }
                            *(unsigned int *)((((((t5 << 2) + t5) << 2) + 0xC173DEC) + 0x10)) = ((*(int *)((((((t5 << 2) + t5) << 2) + 0xC173DEC) + 0x10))) - (*(int *)((t105 + 0x10))));
                            t177 = 0x0;
                        }
                    }
                }
            }
        }
    }
    return t177;
}


int FUN_0c025088(int a4, float f4)
{
    register int t0;
    register int t1;
    register float u0;

    if ((*(int *)((a4 + 0x14))) == 0) {
        u0 = nlLength((a4 + 0x1C), 0xC175930);
        if ((((((struct o34_float *)(a4))->v)) + 5.0f) > u0) {
            *(unsigned int *)((a4 + 0x14)) = 0x1;
            *(unsigned int *)0xC2709AC = ((*(int *)0xC2709AC) - 1);
            FUN_0c058ca6(0xBA9, 0x0);
            if (((*(int *)0xC1EC83C) & 1) != 0) {
                t0 = 0x600;
                t1 = (int)((FUN_0c070e80()) * 1536.0f);
            } else {
                t0 = 0xFA00;
                t1 = (-(int)((FUN_0c070e80()) * 1536.0f));
            }
            (((struct o48_ushort *)(a4))->v) = (t1 + t0);
            if (((*(int *)0xC1EC83C) & 2) != 0) {
                t0 = 0x400;
                t1 = (int)((FUN_0c070e80()) * 1024.0f);
            } else {
                t0 = 0xFC00;
                t1 = (-(int)((FUN_0c070e80()) * 1024.0f));
            }
            (((struct o4A_ushort *)(a4))->v) = (t1 + t0);
            (((struct o28_float *)(a4))->v) = (((((struct o0_float *)0xC1759B4)->v)) * 0.699999988f);
            (((struct o30_float *)(a4))->v) = (((((struct o8_float *)0xC1759B4)->v)) * 0.699999988f);
        }
    }
    FUN_0c076230(((((struct o38_float *)(a4))->v)), ((((struct o3C_float *)(a4))->v)), ((((struct o40_float *)(a4))->v)));
    if ((*(int *)((a4 + 0x14))) != 1) {
        nlPushMatrix(0x0);
        FUN_0c073a60((a4 + 0x1C));
        nlScale(4.0f, 4.0f, 4.0f);
        FUN_0c074f20(4.0f);
        nlObjPutUseViewMatrixTrnsl(0xC404210, 0.850000024f);
        nlPopMatrix(0x1);
        t0 = ((int (*)(void))(FUN_0c026ce6))();
    } else {
        nlPushMatrix(0x0);
        FUN_0c073a60((a4 + 0x1C));
        nlPushMatrix(0x0);
        u0 = -28.0f;
        u0 = u0 + 25.0f * ((((struct o18_float *)(a4))->v));
        FUN_0c073a30(0.0f, u0, 0.0f);
        nlScale(10.0f, (((((struct o18_float *)(a4))->v)) * 10.0f), 10.0f);
        nlRotateAX((unsigned short)((((struct o44_short *)(a4))->v)));
        nlRotateAZ((unsigned short)((((struct o46_short *)(a4))->v)));
        FUN_0c074f20(10.0f);
        nlObjPutUseViewMatrixTrnsl(0xC3BA160, 0.850000024f);
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        nlRotateAX(0x8000);
        u0 = -28.0f;
        u0 = u0 + 25.0f * ((((struct o18_float *)(a4))->v));
        FUN_0c073a30(0.0f, u0, 0.0f);
        nlScale(10.0f, (((((struct o18_float *)(a4))->v)) * 10.0f), 10.0f);
        nlRotateAX((unsigned short)((((struct o44_short *)(a4))->v)));
        nlRotateAZ((unsigned short)((((struct o46_short *)(a4))->v)));
        FUN_0c074f20(10.0f);
        nlObjPutUseViewMatrixTrnsl(0xC3BA160, 0.850000024f);
        nlPopMatrix(0x1);
        nlPopMatrix(0x1);
        (((struct o44_ushort *)(a4))->v) = (((((struct o44_short *)(a4))->v)) + ((((struct o48_short *)(a4))->v)));
        (((struct o46_ushort *)(a4))->v) = (((((struct o46_short *)(a4))->v)) + ((((struct o4A_short *)(a4))->v)));
        (((struct o1C_float *)(a4))->v) = (((((struct o1C_float *)(a4))->v)) + ((((struct o28_float *)(a4))->v)));
        (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + ((((struct o30_float *)(a4))->v)));
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) * 0.899999976f);
        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) * 0.899999976f);
        (((struct o18_float *)(a4))->v) = (((((struct o18_float *)(a4))->v)) - 0.0799999982f);
        if (0.0f > ((((struct o18_float *)(a4))->v))) {
            (((struct o18_float *)(a4))->v) = 0.0f;
            return nlCloseEvent(a4);
        }
        t0 = ((int (*)(float))(FUN_0c026ce6))(0.899999976f);
    }
    nlPushMatrix(0x0);
    FUN_0c073a30(((((struct o1C_float *)(a4))->v)), 1.0f, ((((struct o24_float *)(a4))->v)));
    nlScale(4.5f, 4.5f, 4.5f);
    FUN_0c074f20(4.5f);
    nlObjPutUseViewMatrix(0xC4F4988);
    return (nlPopMatrix(0x1));
}



int nlMvPutFaceClip(int a4, int a5, int a6, int a7)
{
    int stk[10];
    register int t0;
    register int t1;
    register int t14;
    register int t15;
    register int t16;
    register int t19;
    register int t20;
    register int t23;
    register int t24;
    register int t27;
    register int t28;
    register int t31;
    register int t32;
    register int t37;
    register int t38;
    register int t41;
    register int t47;
    register int t71;
    register int t76;
    register int t98;
    register int t104;
    register int t118;
    register int t53;
    register int t56;
    register int t57;
    register int t58;
    register int t59;
    register int t80;
    register int t83;
    register int t84;
    register int t85;
    register int t109;
    register int t112;
    register int t113;
    register int t114;
    register int t115;
    int R1000;
    int R1004;
    int R1008;

    R1000 = *(int *)((int)stk + 0);
    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);

    R1008 = (a6 + 0x4);
    t0 = (((struct o0_int *)0xC2C3DD8)->v);
    R1004 = (a6 + 0x2);
    t1 = (((struct o8_int *)0xC2C3DD8)->v);
    if (a4 == 0) {
        if (a5 != 7) {
            return nlMvGetFaceVerts(t0, a6, t1, a7);
        }
        return nlMvSendTriangle(((((*(short *)((a6 + 0x0))) << 2) << 2) + t0), ((((*(short *)(((R1004) + 0x0))) << 2) << 2) + t0), ((((*(short *)(((R1008) + 0x0))) << 2) << 2) + t0));
    }
    if (a4 == 7) {
        if (a5 == 7) {
            return a5;
        }
        if (a5 == 0) {
            return nlMvSendTriangle(((((*(short *)((a6 + 0x0))) << 2) << 2) + t0), ((((*(short *)(((R1004) + 0x0))) << 2) << 2) + t0), ((((*(short *)(((R1008) + 0x0))) << 2) << 2) + t0));
        }
        return nlMvGetFaceVerts(t0, a6, t1, a7);
    }
    t14 = (((struct o4_int *)0xC2C3DD8)->v);
    if ((a5 != 0) && (a5 != 7)) {
        if (a4 == a5) {
            if (a4 != 1) {
                if (a4 != 2) {
                    if ((a4 != 3) && (a4 != 4)) {
                        if (a4 != 5) {
                            if (a4 != 6) {
                                return a4;
                            }
                            t15 = *(short *)(((a7 + 0x4) + 0x0));
                            R1008 = ((t15 << 2) << 2);
                            t16 = *(short *)(((a7 + 0x2) + 0x0));
                            R1004 = ((t16 << 2) << 2);
                            return FUN_0c07a380(((R1008) + t14), ((R1004) + t14), (((t16 << 2) << 2) + t1), (((t15 << 2) << 2) + t1));
                        }
                        t19 = *(short *)(((a7 + 0x2) + 0x0));
                        R1008 = ((t19 << 2) << 2);
                        t20 = *(short *)((a7 + 0x0));
                        R1004 = ((t20 << 2) << 2);
                        return FUN_0c07a380(((R1008) + t14), ((R1004) + t14), (((t20 << 2) << 2) + t1), (((t19 << 2) << 2) + t1));
                    }
                    t23 = *(short *)((a7 + 0x0));
                    R1008 = ((t23 << 2) << 2);
                    t24 = *(short *)(((a7 + 0x4) + 0x0));
                    R1004 = ((t24 << 2) << 2);
                    return FUN_0c07a380(((R1008) + t14), ((R1004) + t14), (((t24 << 2) << 2) + t1), (((t23 << 2) << 2) + t1));
                }
                t27 = *(short *)(((a7 + 0x2) + 0x0));
                R1008 = ((t27 << 2) << 2);
                t28 = *(short *)((a7 + 0x0));
                R1004 = ((t28 << 2) << 2);
                return FUN_0c07a380(((R1008) + t14), ((R1004) + t14), (((t28 << 2) << 2) + t1), (((t27 << 2) << 2) + t1));
            }
            t31 = *(short *)(((a7 + 0x4) + 0x0));
            R1008 = ((t31 << 2) << 2);
            t32 = *(short *)(((a7 + 0x2) + 0x0));
            R1004 = ((t32 << 2) << 2);
            return FUN_0c07a380(((R1008) + t14), ((R1004) + t14), (((t32 << 2) << 2) + t1), (((t31 << 2) << 2) + t1));
        }
        t37 = a4;
        t38 = a5;
        if ((0x4 & a4) != 0) {
            t37 = ((~a4) & 0x7);
            t38 = ((~a5) & 0x7);
        }
        if (t37 != 1) {
            if (t37 != 2) {
                t118 = t37;
                if (t37 == 3) {
                    if (t38 == 2) {
                        t41 = *(short *)((a7 + 0x0));
                        R1004 = ((t41 << 2) << 2);
                        R1000 = (((t41 << 2) << 2) + t1);
                        t53 = (((t41 << 2) << 2) + t1);
                        t56 = (R1004);
                        t57 = ((((*(short *)(((a7 + 0x4) + 0x0))) << 2) << 2) + t14);
                        t58 = ((((*(short *)(((R1008) + 0x0))) << 2) << 2) + t0);
                        t59 = ((((*(short *)(((a7 + 0x2) + 0x0))) << 2) << 2) + t1);
                    } else {
                        t47 = *(short *)(((a7 + 0x4) + 0x0));
                        R1008 = ((t47 << 2) << 2);
                        R1000 = (((t47 << 2) << 2) + t1);
                        t53 = (((t47 << 2) << 2) + t1);
                        t56 = (R1008);
                        t57 = ((((*(short *)((a7 + 0x0))) << 2) << 2) + t14);
                        t58 = ((((*(short *)(((R1004) + 0x0))) << 2) << 2) + t0);
                        t59 = ((((*(short *)(((a7 + 0x2) + 0x0))) << 2) << 2) + t1);
                    }
                    t118 = (nlMvSendFan3((t56 + t14), t57, t58, t59, t53));
                }
            } else {
                if (t38 == 3) {
                    t71 = *(short *)((a7 + 0x0));
                    R1004 = ((t71 << 2) << 2);
                    R1000 = (((t71 << 2) << 2) + t1);
                    t80 = (((t71 << 2) << 2) + t1);
                    t83 = (*(short *)(((a7 + 0x2) + 0x0)));
                    t84 = ((((*(short *)(((R1008) + 0x0))) << 2) << 2) + t0);
                    t85 = ((((*(short *)(((a7 + 0x4) + 0x0))) << 2) << 2) + t1);
                } else {
                    t76 = *(short *)(((a7 + 0x2) + 0x0));
                    R1004 = ((t76 << 2) << 2);
                    R1000 = (((t76 << 2) << 2) + t1);
                    t80 = (((t76 << 2) << 2) + t1);
                    t83 = (*(short *)((a7 + 0x0)));
                    t84 = ((((*(short *)((a6 + 0x0))) << 2) << 2) + t0);
                    t85 = ((((*(short *)(((a7 + 0x4) + 0x0))) << 2) << 2) + t1);
                }
                t118 = (nlMvSendFan3(((R1004) + t14), (((t83 << 2) << 2) + t14), t84, t85, t80));
            }
        } else {
            if (t38 == 3) {
                t98 = *(short *)(((a7 + 0x4) + 0x0));
                R1008 = ((t98 << 2) << 2);
                R1000 = (((t98 << 2) << 2) + t1);
                t109 = (((t98 << 2) << 2) + t1);
                t112 = (R1008);
                t113 = ((((*(short *)(((a7 + 0x2) + 0x0))) << 2) << 2) + t14);
                t114 = ((((*(short *)(((R1004) + 0x0))) << 2) << 2) + t0);
                t115 = ((((*(short *)((a7 + 0x0))) << 2) << 2) + t1);
            } else {
                t104 = *(short *)(((a7 + 0x2) + 0x0));
                R1004 = ((t104 << 2) << 2);
                R1000 = (((t104 << 2) << 2) + t1);
                t109 = (((t104 << 2) << 2) + t1);
                t112 = (R1004);
                t113 = ((((*(short *)(((a7 + 0x4) + 0x0))) << 2) << 2) + t14);
                t114 = ((((*(short *)((a6 + 0x0))) << 2) << 2) + t0);
                t115 = ((((*(short *)((a7 + 0x0))) << 2) << 2) + t1);
            }
            t118 = (nlMvSendFan3((t112 + t14), t113, t114, t115, t109));
        }
        return t118;
    }
    return nlMvGetFaceVerts(t0, a6, t14, a7);
}

int kmytex_ABSalloc(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int stk[4];
    register int t0;
    register int t2;
    register int t5;
    register int t15;
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register int t177;
    register int t49;
    register int t79;
    register int t105;
    register int t106;
    register int t109;
    register int t7;
    register int t12;
    int t13;
    int R1000;
    int R1008;
    int R1012;

    R1000 = *(int *)((int)stk + 0);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);

    *(unsigned short *)(((int)stk + 4)) = a4;
    t0 = ((~(((~a6) + 0x1) & 0x1F)) + 0x1);
    if ((int)a6 >= 0) {
        t0 = (a6 & 0x1F);
    }
    t2 = a6;
    if (t0 != 0) {
        t2 = (a6 + (0x20 - t0));
    }
    t5 = *(short *)(((int)stk + 4));
    t9 = *(int *)((((((t5 << 2) + t5) << 2) + 0xC173DEC) + 0x8));
    t15 = 0x0;
    if (t9 != 0) {
        t8 = t5;
        t10 = 0x0;
        for (;;) {
            t11 = *(int *)((t9 + 0xC));
            if (((int)t11 <= (int)a5) && ((t12 = *(int *)((t9 + 0x10)), t8 = t12, t8 = (t8 + t11), (int)t8 > (int)a5) && (((int)t11 <= (int)(a5 + a6)) && (t13 = *(int *)((t9 + 0x10)), t7 = t13, t7 = (t7 + t11), (int)t7 >= (int)(a5 + a6))))) {
                t10 = t9;
                t9 = 0x0;
            } else {
                t9 = (*(int *)((t9 + 0x8)));
            }
            if (t9 == 0) {
                break;
            }
        }
        t15 = t10;
    }
    t177 = 0x3;
    if (t15 == 0) {
    } else {
        if ((*(int *)((t15 + 0x10))) == t2) {
            kmytex_FBDeQueueEntry((((((t5 << 2) + t5) << 2) + 0xC173DEC) + 0x8), (((((t5 << 2) + t5) << 2) + 0xC173DEC) + 0xC), t15);
            kmytex_FBEnQueueTop(((((t5 << 2) + t5) << 2) + 0xC173DEC), (((((t5 << 2) + t5) << 2) + 0xC173DEC) + 0x4), t15);
            *(unsigned int *)((a7 + 0x1C)) = (*(int *)((t15 + 0xC)));
            *(unsigned int *)((t15 + 0x14)) = a7;
            *(unsigned short *)((t15 + 0x0)) = 0x1;
            if ((*(short *)(((int)stk + 4))) == 0) {
                *(unsigned short *)((t15 + 0x0)) = ((*(short *)((t15 + 0x0))) | 0x80);
            } else {
                *(unsigned short *)((t15 + 0x0)) = ((*(short *)((t15 + 0x0))) | 0x100);
            }
            if (a8 != 0) {
                *(unsigned short *)((t15 + 0x0)) = ((*(short *)((t15 + 0x0))) | 0x2);
            }
            if (a9 != 0) {
                *(unsigned short *)((t15 + 0x0)) = ((*(short *)((t15 + 0x0))) | 0x4);
            }
            *(unsigned int *)((((((t5 << 2) + t5) << 2) + 0xC173DEC) + 0x10)) = ((*(int *)((((((t5 << 2) + t5) << 2) + 0xC173DEC) + 0x10))) - (*(int *)((t15 + 0x10))));
            t177 = 0x0;
        } else {
            if ((*(int *)((t15 + 0xC))) == a5) {
                t49 = kmytex_FBAllocEntry();
                t177 = 0x3;
                if (t49 == 0) {
                } else {
                    *(unsigned int *)((t49 + 0xC)) = (*(int *)((t15 + 0xC)));
                    *(unsigned int *)((t49 + 0x10)) = t2;
                    *(unsigned int *)((t15 + 0x10)) = ((*(int *)((t15 + 0x10))) - t2);
                    *(unsigned int *)((t15 + 0xC)) = ((*(int *)((t15 + 0xC))) + t2);
                    R1000 = ((((t5 << 2) + t5) << 2) + 0xC173DEC);
                    kmytex_FBEnQueueTop((R1000), (((((t5 << 2) + t5) << 2) + 0xC173DEC) + 0x4), t49);
                    *(unsigned int *)((a7 + 0x1C)) = (*(int *)((t49 + 0xC)));
                    *(unsigned int *)((t49 + 0x14)) = a7;
                    if ((*(short *)(((int)stk + 4))) == 0) {
                        *(unsigned short *)((t49 + 0x0)) = ((*(short *)((t49 + 0x0))) | 0x80);
                    } else {
                        *(unsigned short *)((t49 + 0x0)) = ((*(short *)((t49 + 0x0))) | 0x100);
                    }
                    if (a8 != 0) {
                        *(unsigned short *)((t49 + 0x0)) = ((*(short *)((t49 + 0x0))) | 0x2);
                    }
                    if (a9 != 0) {
                        *(unsigned short *)((t49 + 0x0)) = ((*(short *)((t49 + 0x0))) | 0x4);
                    }
                    *(unsigned int *)((((((t5 << 2) + t5) << 2) + 0xC173DEC) + 0x10)) = ((*(int *)((((((t5 << 2) + t5) << 2) + 0xC173DEC) + 0x10))) - (*(int *)((t49 + 0x10))));
                    t177 = 0x0;
                }
            } else {
                if (((*(int *)((t15 + 0xC))) + (*(int *)((t15 + 0x10)))) == (a5 + a6)) {
                    t79 = kmytex_FBAllocEntry();
                    t177 = 0x3;
                    if (t79 != 0) {
                        *(unsigned int *)((t15 + 0x10)) = ((*(int *)((t15 + 0x10))) - t2);
                        *(unsigned int *)((t79 + 0xC)) = a5;
                        *(unsigned int *)((t79 + 0x10)) = t2;
                        R1000 = ((((t5 << 2) + t5) << 2) + 0xC173DEC);
                        kmytex_FBEnQueueTop((R1000), (((((t5 << 2) + t5) << 2) + 0xC173DEC) + 0x4), t79);
                        *(unsigned int *)((a7 + 0x1C)) = (*(int *)((t79 + 0xC)));
                        *(unsigned int *)((t79 + 0x14)) = a7;
                        if ((*(short *)(((int)stk + 4))) == 0) {
                            *(unsigned short *)((t79 + 0x0)) = ((*(short *)((t79 + 0x0))) | 0x80);
                        } else {
                            *(unsigned short *)((t79 + 0x0)) = ((*(short *)((t79 + 0x0))) | 0x100);
                        }
                        if (a8 != 0) {
                            *(unsigned short *)((t79 + 0x0)) = ((*(short *)((t79 + 0x0))) | 0x2);
                        }
                        if (a9 != 0) {
                            *(unsigned short *)((t79 + 0x0)) = ((*(short *)((t79 + 0x0))) | 0x4);
                        }
                        *(unsigned int *)((((((t5 << 2) + t5) << 2) + 0xC173DEC) + 0x10)) = ((*(int *)((((((t5 << 2) + t5) << 2) + 0xC173DEC) + 0x10))) - (*(int *)((t79 + 0x10))));
                        t177 = 0x0;
                    }
                } else {
                    t105 = kmytex_FBAllocEntry();
                    t177 = 0x3;
                    if (t105 != 0) {
                        t106 = kmytex_FBAllocEntry();
                        R1000 = t106;
                        if (t106 == 0) {
                            kmytex_FBFreeEntry(t105);
                            t177 = 0x3;
                        } else {
                            R1012 = (*(int *)((t15 + 0x10)));
                            t109 = *(int *)((t15 + 0xC));
                            R1008 = (a5 - t109);
                            *(unsigned int *)((t15 + 0x10)) = (a5 - t109);
                            *(unsigned int *)((t105 + 0xC)) = a5;
                            *(unsigned int *)((t105 + 0x10)) = t2;
                            kmytex_FBEnQueueTop(((((t5 << 2) + t5) << 2) + 0xC173DEC), (((((t5 << 2) + t5) << 2) + 0xC173DEC) + 0x4), t105);
                            *(unsigned int *)(((R1000) + 0xC)) = (a5 + t2);
                            *(unsigned int *)(((R1000) + 0x10)) = (((R1012) - t2) - (R1008));
                            kmytex_FBEnQueueEntry((((((t5 << 2) + t5) << 2) + 0xC173DEC) + 0xC), (R1000), (*(int *)((((((t5 << 2) + t5) << 2) + 0xC173DEC) + 0xC))));
                            *(unsigned int *)((a7 + 0x1C)) = (*(int *)((t105 + 0xC)));
                            *(unsigned int *)((t105 + 0x14)) = a7;
                            if ((*(short *)(((int)stk + 4))) == 0) {
                                *(unsigned short *)((t105 + 0x0)) = ((*(short *)((t105 + 0x0))) | 0x80);
                            } else {
                                *(unsigned short *)((t105 + 0x0)) = ((*(short *)((t105 + 0x0))) | 0x100);
                            }
                            if (a8 != 0) {
                                *(unsigned short *)((t105 + 0x0)) = ((*(short *)((t105 + 0x0))) | 0x2);
                            }
                            if (a9 != 0) {
                                *(unsigned short *)((t105 + 0x0)) = ((*(short *)((t105 + 0x0))) | 0x4);
                            }
                            *(unsigned int *)((((((t5 << 2) + t5) << 2) + 0xC173DEC) + 0x10)) = ((*(int *)((((((t5 << 2) + t5) << 2) + 0xC173DEC) + 0x10))) - (*(int *)((t105 + 0x10))));
                            t177 = 0x0;
                        }
                    }
                }
            }
        }
    }
    return t177;
}

int FUN_0c033f62(int a4, int a5, int a6)
{
    int stk[3];

    register int R1;
    register int R3;
    int R4;
    int R6;
    int R7;
    int R9;
    int R11;
    int R14;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    int R1000;
    int R1004;
    int R1008;
    R1000 = *(int *)((int)stk + 0);
    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R4 = a4;
    v0_4 = a5;
    R6 = a6;
    R1004 = v0_4;
    v0_0 = *(int *)((((R4 * 0x2C) + 0xC2A4680) + 0x0));
    R1008 = (*(int *)((((v0_0 << 2) + (((R4 * 0x2C) + 0xC2A4680) + 0x4)) + 0x0)));
    R11 = (R6);
    v0_0 = (((v0_0 << 2) + (((R4 * 0x2C) + 0xC2A4680) + 0x4)));
    v0_4 = (((R4 * 0x2C) + 0xC2A4680));
    if (((*(int *)0xC2A46E0) != 1)) goto L_C033FA2;
    if ((R4 != 0)) goto L_C033FA2;
    L_C034246:;
    v0_0 = (0x0);
    L_C034248:;
    return v0_0;
    L_C033FA2:;
    R14 = (0x1);
    R4 = (((((struct o0_int *)0xC2A4670)->v)));
    R6 = (0x4);
    v0_1 = (0xC2A4670);
    if (!((((*(int *)((v0_4 + 0x1C))) & 0x4) != 0))) goto L_C034224;
    if (((0x2 & R4) == 0)) goto L_C033FDE;
    if (((*(int *)((((((*(int *)((v0_0 + 0x0))) << 2) << 1) + (*(int *)((v0_4 + 0x24)))) + 0x8))) != 0)) goto L_C033FCE;
    goto L_C034224;
    L_C034224:;
    if (!(((((int)R14 << (int)(*(int *)((v0_0 + 0x0)))) & R11) == 0))) goto L_C033FF2;
    if (((*(int *)((v0_0 + 0x0))) == (R1008))) goto L_C034246;
    FUN_0c07c8be(0x10DA9);
    v0_0 = (0x1);
    goto L_C034248;
    L_C033FF2:;
    v0_2 = *(int *)((v0_0 + 0x0));
    R4 = (v0_2);
    R7 = (0x0);
    if (((int)v0_2 < (int)R14)) goto L_C034004;
    if (((int)R4 >= (int)0x11)) goto L_C034004;
    R4 = (R14);
    L_C034006:;
    R9 = ((*(int *)((v0_1 + 0x0))));
    if ((R4 == 1)) goto L_C034012;
    v0_2 = (0x8);
    if (((R9 & 0x8) != 0)) goto L_C034180;
    if ((((((struct o8_int *)0xC2A4670)->v)) != 0)) goto L_C03419A;
    if (((v0_2 & ((((struct o4_int *)0xC2A4670)->v))) == 0)) goto L_C03419A;
    L_C034180:;
    if (((*(int *)((v0_0 + 0x0))) != 17)) goto L_C03418A;
    *(unsigned int *)((v0_0 + 0x0)) = R14;
    L_C03419A:;
    if ((((*(int *)((v0_1 + 0x0))) & 16) != 0)) goto L_C0341AC;
    if (((*(int *)((v0_1 + 0x8))) != 0)) goto L_C034224;
    if ((((*(int *)((v0_1 + 0x4))) & 16) == 0)) goto L_C034224;
    L_C0341AC:;
    if (((*(int *)((v0_0 + 0x0))) != 0)) goto L_C034216;
    *(unsigned int *)((v0_0 + 0x0)) = 0x10;
    R1000 = 0xC0B36E4;
    v0_2 = (0xC0B36F8);
    R4 = (0xC0B36F8);
    R6 = (0xC0B36F4);
    R9 = (R7);
    L_C03420C:;
    if (((unsigned int)R4 >= (unsigned int)(R1000))) goto L_C0341C6;
    goto L_C034224;
    L_C0341C6:;
    v0_3 = (R7);
    L_C0341F0:;
    if (!(((int)v0_3 < (int)(*(int *)((R4 + 0x0)))))) goto L_C0341F6;
    if (((((int)R14 << (int)(*(int *)((v0_0 + 0x0)))) & R11) != 0)) goto L_C0341E8;
    R9 = (R14);
    goto L_C0341F6;
    L_C0341F6:;
    if ((R9 != 0)) goto L_C034224;
    *(unsigned int *)((v0_0 + 0x0)) = ((*(int *)((v0_0 + 0x0))) - ((*(int *)((R6 + 0x0))) + (*(int *)((v0_2 + 0x0)))));
    v0_2 = ((v0_2 - 4));
    R4 = ((R4 - 4));
    R6 = ((R6 - 4));
    goto L_C03420C;
    L_C0341E8:;
    *(unsigned int *)((v0_0 + 0x0)) = ((*(int *)((v0_0 + 0x0))) + 0x1);
    v0_3 = ((v0_3 + 0x1));
    goto L_C0341F0;
    L_C034216:;
    v0_2 = *(int *)((v0_0 + 0x0));
    *(unsigned int *)((v0_0 + 0x0)) = (v0_2 + 0x1);
    if (((int)(v0_2 + 0x1) < (int)(R1004))) goto L_C034224;
    *(unsigned int *)((v0_0 + 0x0)) = R7;
    goto L_C034224;
    L_C03418A:;
    v0_2 = *(int *)((v0_0 + 0x0));
    *(unsigned int *)((v0_0 + 0x0)) = (v0_2 - 1);
    if (((int)(v0_2 - 1) >= 0)) goto L_C03419A;
    *(unsigned int *)((v0_0 + 0x0)) = ((R1004) - 1);
    goto L_C03419A;
    L_C034012:;
    v0_4 = *(int *)((v0_0 + 0x0));
    v0_2 = (R7);
    v0_3 = ((v0_4 - 1));
    R4 = ((v0_4 - 1));
    R6 = (R7);
    L_C03401C:;
    v0_4 = *(int *)(((v0_2 << 2) + 0xC0B36E4));
    v0_5 = (int)(v0_3 - v0_4) >= 0;
    v0_3 = ((v0_3 - v0_4));
    v0_4 = (v0_4);
    if (v0_5) goto L_C03404C;
    v0_3 = (v0_2);
    L_C034056:;
    R1000 = (R6 + v0_4);
    v0_2 = (R7);
    if (((0x40 & R9) != 0)) goto L_C034074;
    if ((((((struct o8_int *)0xC2A4670)->v)) != 0)) goto L_C034080;
    if (((((((struct o4_int *)0xC2A4670)->v)) & 64) == 0)) goto L_C034080;
    L_C034074:;
    v0_5 = (int)(R4 + 0x1) < (int)(R1000);
    v0_2 = (R14);
    R4 = ((R4 + 0x1));
    if (v0_5) goto L_C034080;
    R4 = (R6);
    L_C034080:;
    if (((0x8 & R9) != 0)) goto L_C034096;
    if ((((((struct o8_int *)0xC2A4670)->v)) != 0)) goto L_C034108;
    if (((((((struct o4_int *)0xC2A4670)->v)) & 8) == 0)) goto L_C034108;
    L_C034096:;
    R9 = ((v0_4 - 1));
    if ((v0_2 == 0)) goto L_C0340A4;
    if ((R4 != R6)) goto L_C0340A4;
    R4 = ((R4 + R9));
    L_C0340A4:;
    if ((v0_3 != 5)) goto L_C0340AE;
    R4 = (0xFFFFFFFF);
    L_C0340B8:;
    if (((((int)R14 << (int)(R4 + 0x1)) & R11) == 0)) goto L_C034164;
    v0_5 = (int)(v0_4 - 1) <= 0;
    v0_6 = (R6 + v0_4);
    v0_2 = (((R6 + v0_4) + (v0_4 - 1)));
    v0_3 = (R7);
    v0_4 = ((v0_4 - 1));
    R6 = v0_6;
    if (v0_5) goto L_C034164;
    L_C0340D2:;
    v0_5 = (int)(R4 + ((((v0_3 & R14) << 1) - 1) * (v0_3 + 0x1))) < (int)v0_2;
    R4 = ((R4 + ((((v0_3 & R14) << 1) - 1) * (v0_3 + 0x1))));
    if (v0_5) goto L_C0340EC;
    R4 = ((R4 - v0_4));
    L_C0340F2:;
    if (((((int)R14 << (int)(R4 + 0x1)) & R11) == 0)) goto L_C034164;
    v0_5 = (int)(v0_3 + 0x1) < (int)v0_4;
    v0_3 = ((v0_3 + 0x1));
    if (v0_5) goto L_C0340D2;
    L_C034164:;
    *(unsigned int *)((v0_0 + 0x0)) = (R4 + 0x1);
    goto L_C034224;
    L_C0340EC:;
    if (((int)R4 >= (int)R6)) goto L_C0340F2;
    R4 = ((R4 + v0_4));
    goto L_C0340F2;
    L_C0340AE:;
    if ((R4 != R6)) goto L_C0340B6;
    R4 = ((R4 + v0_4));
    goto L_C0340B8;
    L_C0340B6:;
    R4 = ((R4 + R9));
    goto L_C0340B8;
    L_C034108:;
    if (((0x10 & R9) != 0)) goto L_C03411E;
    if ((((((struct o8_int *)0xC2A4670)->v)) != 0)) goto L_C034144;
    if (((((((struct o4_int *)0xC2A4670)->v)) & 16) == 0)) goto L_C034144;
    L_C03411E:;
    if ((v0_3 != 0)) goto L_C034126;
    R4 = (0x10);
    goto L_C034164;
    L_C034126:;
    if ((v0_3 != 5)) goto L_C034130;
    R4 = (0xE);
    goto L_C034164;
    L_C034130:;
    if ((v0_2 == 0)) goto L_C03413C;
    if ((R4 != R6)) goto L_C03413C;
    R4 = ((R4 - 1));
    goto L_C034164;
    L_C03413C:;
    R4 = ((R4 - (v0_4 + 0x1)));
    goto L_C034164;
    L_C034144:;
    R7 = (0x20);
    if (((R9 & 0x20) != 0)) goto L_C03415A;
    if ((((((struct o8_int *)0xC2A4670)->v)) != 0)) goto L_C034164;
    if (((((((struct o4_int *)0xC2A4670)->v)) & R7) == 0)) goto L_C034164;
    L_C03415A:;
    v0_2 = (int)(R4 - 1) >= (int)R6;
    R4 = ((R4 - 1));
    if (v0_2) goto L_C034164;
    R4 = (((R1000) - 1));
    goto L_C034164;
    L_C03404C:;
    v0_5 = (int)(v0_2 + 0x1) < (int)0x6;
    v0_2 = ((v0_2 + 0x1));
    R6 = ((R6 + v0_4));
    if (v0_5) goto L_C03401C;
    goto L_C034056;
    L_C034004:;
    R4 = (R7);
    goto L_C034006;
    L_C033FCE:;
    *(unsigned int *)((v0_4 + 0x1C)) = ((*(int *)((v0_4 + 0x1C))) | 0x8);
    FUN_0c07c8be(0xDA9);
    goto L_C034224;
    L_C033FDE:;
    if (((R4 & R6) == 0)) goto L_C033FF2;
    *(unsigned int *)((v0_4 + 0x1C)) = ((*(int *)((v0_4 + 0x1C))) | 0x9);
    FUN_0c07c8be(0x30DA9);
    goto L_C034224;
}
