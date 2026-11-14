/* Straight-line functions with calls and guards (batch gen_dj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_float { char p[0x20]; float v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_int { char p[0x28]; int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o34_int { char p[0x34]; int v; };
struct o38_int { char p[0x38]; int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3C_int { char p[0x3C]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int FUN_0c01505c(int, int, float);
int FUN_0c028a0c(void);
int FUN_0c033578(int, int, float, float, float);
int FUN_0c0345ec(int, int, int, float, float, float);
int FUN_0c035560(int, int, int, int, int, int, float, float);
int FUN_0c035a5e(int, int, float, float);
int FUN_0c048fd6(int, float, float);
int FUN_0c058ca6(int, int);
int FUN_0c05f470(int, int, float, float);
int FUN_0c05f98c(void);
int FUN_0c05f9b0(float);
int FUN_0c07a2c0(void);
int FUN_0c07ada0(int, int);
int FUN_0c07b864(int, int, int, int);
int FUN_0c07b97e(int, int, int, int);
int FUN_0c07ff00(void);
int kmSetCheapShadowMode(int);
int kmSetPixelClipping(int, int, int, int);
int kmUseAnotherModifier(int);
int kmiCheckRenderTexture(int);
int kmiDiscardRenderPipeline(int, int, int, int);
int kmiFBControl(int, int, int, int, int, int);
int kmiFlipVertexBuffer(int);
int kmiGetProfileInt(int, int, int);
int kmiInitNTSC(void);
int kmiInitPAL(void);
int kmiInitVGA(void);
int kmiInitializeDMA(void);
int kmiReadRegister(int);
int kmiStartRenderTextureEntry(int, int, int, int);
int kmiWaitVlank(void);
int kmiWriteRegister(int, int);
float nlLength(int, int);
int syExtChkClearG2TimeOut(void);
int syExtChkConnectSyncDev(int);
int syExtChkDisableInterrupt(int);
int syExtChkDisableSyncDev(int);
int syG2Read(int, int, int, int, int, int);
int FUN_0c04f826(void);
int kmSetDisplayMode(int a4, int a5, int a6, int a7);
int kmRenderTextureDirect(int a4, int a5, int a6, int a7);
int FUN_0c03650c(int a4, int a5);
int FUN_0c0164fc(int a4, int a5);
int syExtChkInit(int a4);
int FUN_0c15ba7c(int a4, int a5, int a6);
int kmfSetVirticalFilterMode(int a4);
int FUN_0c061516(void);
int FUN_0c07bf7a(int a4, int a5, int a6, int a7);
int nlMvSetWorkBuffer(int a4, int a5);
int kmfInitializeYUVConverter(int a4, int a5, int a6, int a7, int a8);
int kmiWriteDispModeRegisters(void);
int kmBlankScreen(int a4);
int kmiInitializeTA(void);
int kmSetPaletteMode(int a4);

int FUN_0c04f826(void)
{
    int stk[5];

    register int R1;
    register int R2;
    register int R3;
    register float F5;
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
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    FUN_0c07ff00();
    v0_1 = (((struct o0_int *)0xC2B1D90)->v);
    v0_3 = (0xC048FD6);
    v0_0 = (0xC2B1CE4);
    v0_2 = (0xC2B1CEC);
    v0_9 = (v0_1);
    w0_2 = (0.600000024f);
    w0_1 = (0.0f);
    w0_0 = (((((struct o0_float *)0xC2B1CE4)->v)));
    if ((v0_1 != 0)) goto L_C04F87E;
    if ((!(0.0f > w0_0))) goto L_C04F872;
    w0_0 = *(float *)((v0_0 + 0x0));
    *(float *)((v0_0 + 0x0)) = (w0_0 + 90.0f);
    w0_3 = ((w0_0 + 90.0f));
    L_C04F8EC:;
    v0_1 = (0xC2B1CE8);
    w0_0 = ((*(float *)((v0_0 + 0x0))));
    if ((((((struct o0_int *)0xC2B1D90)->v)) != 2)) goto L_C04F96C;
    if ((!(w0_0 > 0.0f))) goto L_C04F90A;
    w0_2 = *(float *)((v0_0 + 0x0));
    *(float *)((v0_0 + 0x0)) = (w0_2 - 30.0f);
    w0_3 = ((w0_2 - 30.0f));
    L_C04F920:;
    w0_2 = (0.0f);
    if ((!(0.0f > (*(float *)((v0_2 + 0x0)))))) goto L_C04F934;
    w0_3 = *(float *)((v0_2 + 0x0));
    *(float *)((v0_2 + 0x0)) = (w0_3 + 1.0f);
    w0_3 = ((w0_3 + 1.0f));
    L_C04F936:;
    if ((w0_2 > (*(float *)((v0_0 + 0x0))))) goto L_C04F96C;
    w0_2 = *(float *)((v0_0 + 0x0));
    w0_3 = (w0_2);
    if ((!(0.00999999978f > w0_2))) goto L_C04F96C;
    w0_3 = *(float *)((v0_1 + 0x0));
    w0_4 = (w0_3);
    w0_2 = (0.0f);
    if ((!(w0_3 > 0.0f))) goto L_C04F95A;
    w0_1 = *(float *)((v0_1 + 0x0));
    *(float *)((v0_1 + 0x0)) = (w0_1 - 49.0f);
    w0_3 = ((w0_1 - 49.0f));
    L_C04F96C:;
    v0_2 = (((struct o28_int *)0xC2B1D90)->v);
    v0_9 = (v0_2);
    v0_3 = (v0_2);
    v0_4 = (((((struct o1C_int *)0xC2B1CE4)->v)));
    if ((v0_2 == 0)) goto L_C04F982;
    if ((v0_9 == 1)) goto L_C04F986;
    if (!((v0_9 == 2))) goto L_C04F982;
    v0_9 = (0x9);
    goto L_C04F98C;
    L_C04F982:;
    v0_9 = ((*(int *)((v0_4 + 0x0))));
    L_C04F98C:;
    v0_2 = (0xC2B1C94);
    v0_5 = (0xC131B9C);
    v0_6 = (0xC131BEC);
    v0_7 = (0x0);
    v0_8 = (0xC07ADA0);
    if ((v0_3 == 0)) goto L_C04FA06;
    *(unsigned int *)((v0_2 + 0x34)) = 0x5;
    *(unsigned int *)(((int)stk + 4)) = ((v0_9 << 2) + v0_6);
    *(unsigned int *)(((int)stk + 0)) = (((v0_9 << 2) << 1) + v0_5);
    v0_8 = (0x0);
    v0_3 = (0xC131B6C);
    L_C04F9B2:;
    v0_9 = *(int *)(((*(int *)(((int)stk + 4))) + 0x0));
    v0_10 = *(int *)((v0_8 + v0_9));
    *(unsigned int *)((v0_2 + 0x0)) = v0_10;
    v0_9 = (v0_9);
    if ((v0_10 == 0)) goto L_C04F9F6;
    (((struct o4_float *)(v0_2))->v) = (float)(int)(((*(float *)(((*(int *)(((int)stk + 0))) + 0x0))) + (*(float *)((v0_0 + 0x0)))) + (*(float *)((v0_3 + 0x0))));
    (((struct o8_float *)(v0_2))->v) = (float)(int)((((((struct o4_float *)((*(int *)(((int)stk + 0)))))->v)) + (*(float *)((v0_1 + 0x0)))) + ((((struct o4_float *)(v0_3))->v)));
    v0_9 = ((FUN_0c07ada0(0xC2B1C94, v0_5)));
    L_C04F9F6:;
    v0_10 = (unsigned int)(v0_7 + 0x1) < (unsigned int)0x6;
    v0_8 = ((v0_8 + 0x4));
    v0_3 = ((v0_3 + 0x8));
    v0_7 = ((v0_7 + 0x1));
    if (v0_10) goto L_C04F9B2;
    L_C04FBCC:;
    return v0_9;
    L_C04FA06:;
    if (((int)(*(int *)((v0_4 + 0x0))) < (int)0x4)) goto L_C04FABE;
    *(unsigned int *)((v0_2 + 0x34)) = 0xA;
    *(unsigned int *)(((int)stk + 0)) = (((v0_9 << 2) << 1) + v0_5);
    *(unsigned int *)(((int)stk + 4)) = ((v0_9 << 2) + v0_6);
    v0_8 = (v0_7);
    w0_2 = (192.0f);
    w0_1 = (320.0f);
    L_C04FA2C:;
    v0_3 = (v0_7);
    w0_3 = ((float)(((((v0_8 - 2) << 2) << 2) << 2) << 1));
    FPUL_ = ((((((v0_8 - 2) << 2) << 2) << 2) << 1));
    L_C04FA40:;
    if ((v0_8 != 3)) goto L_C04FA54;
    v0_9 = (v0_3);
    if ((v0_3 != 2)) goto L_C04FA54;
    if ((((((struct o28_int *)0xC2B1D90)->v)) != 0)) goto L_C04FAAA;
    L_C04FA54:;
    (((struct o4_float *)(v0_2))->v) = (float)(int)((((*(float *)(((*(int *)(((int)stk + 0))) + 0x0))) + (*(float *)((v0_0 + 0x0)))) + w0_3) + w0_1);
    (((struct o8_float *)(v0_2))->v) = (float)(int)(((((((struct o4_float *)((*(int *)(((int)stk + 0)))))->v)) + (*(float *)((v0_1 + 0x0)))) + (float)(((((v0_3 - 1) << 2) << 2) << 2) << 1)) + w0_2);
    *(unsigned int *)((v0_2 + 0x0)) = (*(int *)(((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) + (((v0_3 << 2) + v0_8) << 2))));
    v0_9 = ((FUN_0c07ada0(0xC2B1C94, v0_5)));
    L_C04FAAA:;
    v0_10 = (int)(v0_3 + 0x1) < (int)0x3;
    v0_3 = ((v0_3 + 0x1));
    if (v0_10) goto L_C04FA40;
    v0_3 = (int)(v0_8 + 0x1) < (int)0x4;
    v0_8 = ((v0_8 + 0x1));
    if (v0_3) goto L_C04FA2C;
    goto L_C04FBCC;
    L_C04FABE:;
    *(unsigned int *)((v0_2 + 0x34)) = 0x5;
    v0_8 = ((((v0_9 << 2) << 1) + v0_5));
    v0_3 = (v0_7);
    v0_7 = (((v0_9 << 2) + v0_6));
    w0_1 = (256.0f);
    L_C04FAD6:;
    v0_10 = *(int *)(((*(int *)((v0_7 + 0x0))) + (v0_3 << 2)));
    *(unsigned int *)((v0_2 + 0x0)) = v0_10;
    v0_9 = ((v0_3 << 2));
    if ((v0_10 == 0)) goto L_C04FBC4;
    w0_0 = ((*(float *)((v0_0 + 0x0))));
    if (((int)v0_3 >= (int)0x2)) goto L_C04FB64;
    (((struct o4_float *)(v0_2))->v) = (float)(int)(((*(float *)((v0_8 + 0x0))) + w0_0) + (float)(v0_3 << 8));
    FPUL_ = ((int)(((((struct o4_float *)(v0_8))->v)) + (*(float *)((v0_1 + 0x0)))));
    L_C04FBBA:;
    (((struct o8_float *)(v0_2))->v) = (float)FPUL_;
    v0_9 = ((FUN_0c07ada0(0xC2B1C94, v0_5)));
    L_C04FBC4:;
    v0_10 = (unsigned int)(v0_3 + 0x1) < (unsigned int)0x7;
    v0_3 = ((v0_3 + 0x1));
    if (v0_10) goto L_C04FAD6;
    goto L_C04FBCC;
    L_C04FB64:;
    if (((int)v0_3 >= (int)0x5)) goto L_C04FB88;
    FPUL_ = ((int)(((*(float *)((v0_8 + 0x0))) + w0_0) + (float)((((v0_3 - 2) << 2) << 2) << 2)));
    L_C04FBA6:;
    (((struct o4_float *)(v0_2))->v) = (float)FPUL_;
    FPUL_ = ((int)((((((struct o4_float *)(v0_8))->v)) + (*(float *)((v0_1 + 0x0)))) + w0_1));
    goto L_C04FBBA;
    L_C04FB88:;
    FPUL_ = ((int)((((*(float *)((v0_8 + 0x0))) + w0_0) + (float)(((((v0_3 - 5) << 2) << 2) << 2) << 1)) + w0_1));
    goto L_C04FBA6;
    L_C04F986:;
    v0_9 = (0x8);
    goto L_C04F98C;
    L_C04F95A:;
    if ((!(w0_2 > w0_4))) goto L_C04F96A;
    *(float *)((v0_1 + 0x0)) = ((*(float *)((v0_1 + 0x0))) + 10.0f);
    goto L_C04F96C;
    L_C04F96A:;
    *(float *)((v0_1 + 0x0)) = w0_1;
    goto L_C04F96C;
    L_C04F934:;
    *(float *)((v0_2 + 0x0)) = w0_1;
    goto L_C04F936;
    L_C04F90A:;
    v0_3 = !(0.100000001f > _builtin_fabsf(w0_0));
    w0_0 = (_builtin_fabsf(w0_0));
    if (v0_3) goto L_C04F918;
    *(float *)((v0_0 + 0x0)) = w0_1;
    goto L_C04F920;
    L_C04F918:;
    FUN_0c048fd6(0xC2B1CE4, w0_2, w0_1);
    goto L_C04F920;
    L_C04F872:;
    FUN_0c048fd6(0xC2B1CE4, w0_2, w0_1);
    goto L_C04F8EC;
    L_C04F87E:;
    if ((v0_9 != 1)) goto L_C04F8EC;
    if ((!(w0_0 > 0.0f))) goto L_C04F896;
    *(float *)((v0_0 + 0x0)) = ((*(float *)((v0_0 + 0x0))) - 60.0f);
    L_C04F89E:;
    if ((!(0.0f > (*(float *)((v0_2 + 0x0)))))) goto L_C04F8E4;
    w0_0 = *(float *)((v0_2 + 0x0));
    *(float *)((v0_2 + 0x0)) = (w0_0 + (1.0f + 1.0f));
    w0_3 = ((w0_0 + (1.0f + 1.0f)));
    goto L_C04F8EC;
    L_C04F8E4:;
    FUN_0c048fd6(0xC2B1CEC, w0_2, w0_1);
    goto L_C04F8EC;
    L_C04F896:;
    FUN_0c048fd6(0xC2B1CE4, w0_2, w0_1);
    goto L_C04F89E;
}

int kmSetDisplayMode(int a4, int a5, int a6, int a7)
{
    int stk[15];
    int t2;
    register int t8;
    register int t18;
    register int t111;
    register int t51;
    register int t73;
    register int t101;
    register int t103;
    int t11;
    register int t69;
    register int t29;

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 12)) = a6;
    *(unsigned int *)(((int)stk + 16)) = a7;
    kmiDiscardRenderPipeline(a4, a5, a6, a7);
    t2 = kmiGetProfileInt(0xC170DE8, 0xC170DFC, (*(int *)(((int)stk + 8))));
    *(unsigned int *)(((int)stk + 8)) = (kmiGetProfileInt(0xC170DE8, 0xC170E08, (*(int *)(((int)stk + 16)))));
    *(unsigned int *)(((int)stk + 12)) = (kmiGetProfileInt(0xC170DE8, 0xC170E14, (*(int *)(((int)stk + 12)))));
    (((struct o0_uint *)0xC3008EC)->v) = (0x3 & t2);
    if ((t2 & 0x42) == 66) {
        *(unsigned int *)(((int)stk + 20)) = t2;
        t8 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)0xC300B48)))((((int)stk + 8) + 0xC), a5, a6, a7, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24));
        (((struct o14_uint *)0xC3008EC)->v) = (*(int *)(((int)stk + 24)));
        if (((int)((((struct o14_int *)0xC3008EC)->v)) >= 0) && (t11 = (((struct o14_int *)0xC3008EC)->v), (int)t11 <= (int)0x4)) {
        } else {
            (((struct o14_uint *)0xC3008EC)->v) = 0x1;
        }
    }
    t18 = 0x0;
    if ((a5 != 5) && ((a5 != 4) && ((a5 != 3) && ((a5 != 1) && (a5 != 0))))) {
        t18 = 0x1;
    }
    t101 = 0x0;
    if ((*(int *)(((int)stk + 8))) != 0) {
        t101 = 0x1;
    }
    if ((*(int *)(((int)stk + 12))) != 0) {
        *(unsigned int *)(((int)stk + 8)) = 0x1;
    } else {
        *(unsigned int *)(((int)stk + 8)) = 0x0;
    }
    t111 = t18;
    if (t18 != 0) {
    } else {
        (((struct o4_uint *)0xC3008EC)->v) = t2;
        (((struct o8_uint *)0xC3008EC)->v) = a5;
        (((struct oC_uint *)0xC3008EC)->v) = (*(int *)(((int)stk + 8)));
        (((struct o10_uint *)0xC3008EC)->v) = t101;
        if (((((struct o4_int *)0xC3008EC)->v)) == 1) {
            *(unsigned int *)(((int)stk + 16)) = 0x280;
            *(unsigned int *)(((int)stk + 12)) = 0x0;
            *(unsigned int *)0xC300BF0 = 0x1E0;
            t69 = 0x1E0;
        } else {
            if (((((((struct o4_int *)0xC3008EC)->v)) & 0x1) != 1) && ((t29 = (((struct o4_int *)0xC3008EC)->v), (t29 & 44) != 0) && (0x1 != 0))) {
                *(unsigned int *)(((int)stk + 12)) = 0x1;
            } else {
                *(unsigned int *)(((int)stk + 12)) = 0x0;
            }
            if ((((((struct o4_int *)0xC3008EC)->v)) & 16) != 0) {
                *(unsigned int *)(((int)stk + 16)) = 0x280;
            } else {
                *(unsigned int *)(((int)stk + 16)) = 0x140;
            }
            if ((((((struct o4_int *)0xC3008EC)->v)) & 32) != 0) {
                t69 = 0x1E0;
                if ((((((struct o4_int *)0xC3008EC)->v)) & 0x42) == 66) {
                    t69 = (*(int *)(((((((struct o14_int *)0xC3008EC)->v)) << 2) + 0xC300DA8)));
                }
                *(unsigned int *)0xC300BF0 = (((int)((unsigned int)((int)((unsigned int)t69 + (unsigned int)0x0)) + ((((int)0x0 > (int)t69)) ? 1u : 0u))) >> 1);
            } else {
                t69 = 0xF0;
                if ((((((struct o4_int *)0xC3008EC)->v)) & 0x42) == 66) {
                    t51 = *(int *)(((((((struct o14_int *)0xC3008EC)->v)) << 2) + 0xC300DA8));
                    t69 = (((int)((unsigned int)((int)((unsigned int)t51 + (unsigned int)0x0)) + ((((int)0x0 > (int)t51)) ? 1u : 0u))) >> 1);
                }
                *(unsigned int *)0xC300BF0 = t69;
            }
        }
        t73 = (((struct o0_int *)0xC3008EC)->v);
        if (t73 != 1) {
            if (t73 != 0) {
                t111 = 0x1;
                if (t73 != 2) {
                } else {
                    kmiInitPAL();
                    t111 = 0x0;
                }
            } else {
                kmiInitNTSC();
                t111 = 0x0;
            }
        } else {
            kmiInitVGA();
            t111 = 0x0;
        }
        *(int *)((int)stk + 4) = t101;
        t103 = (*(int *)(((int)stk + 8)));
        *(int *)((int)stk + 0) = t103;
        kmiFBControl((*(int *)(((int)stk + 16))), t69, a5, (*(int *)(((int)stk + 12))), t103, t101);
        kmiWriteDispModeRegisters();
    }
    return t111;
}

int kmRenderTextureDirect(int a4, int a5, int a6, int a7)
{
    int stk[11];
    register int t5;
    register int t877;
    register int t881;
    register int t9;
    register int t17;
    register int t24;
    register int t26;
    register int t27;
    register int t35;
    register int t39;
    register int t104;
    register int t108;
    register int t167;
    register int t175;
    register int t179;
    register int t244;
    register int t248;
    register int t309;
    register int t311;
    register int t312;
    register int t320;
    register int t324;
    register int t389;
    register int t393;
    register int t452;
    register int t460;
    register int t464;
    register int t529;
    register int t533;
    register int t594;
    register int t596;
    register int t597;
    register int t605;
    register int t609;
    register int t674;
    register int t678;
    register int t737;
    register int t745;
    register int t749;
    register int t814;
    register int t818;
    register int t1267;
    register int t1175;
    register int t1179;
    register int t885;
    register int t892;
    register int t894;
    register int t895;
    register int t903;
    register int t907;
    register int t972;
    register int t976;
    register int t1035;
    register int t1043;
    register int t1047;
    register int t1112;
    register int t1116;
    register int t1182;
    register int t1184;
    register int t1228;
    register int t1230;
    register int t1205;
    register int t1276;
    register int t1259;
    register int t1188;
    register int t1194;

    t1276 = kmiCheckRenderTexture(a4);
    if (t1276 != 0) {
        kmiFlipVertexBuffer((*(int *)0xC1740A4));
    } else {
        (((struct o0_uint *)0xC300DD8)->v) = ((unsigned int)((unsigned int)((unsigned int)(((*(int *)((a4 + 0xC))) << 2) << 2) >> 2) >> 2) >> 2);
        (((struct o4_uint *)0xC300DD8)->v) = ((*(int *)((a4 + 0x1C))) | 0x1000000);
        t5 = (((struct o0_int *)0xC300C2C)->v);
        (((struct o14_uint *)0xC300C2C)->v) = 0x0;
        t877 = 0xC300ADC;
        t881 = 0x0;
        if (((((struct o4_int *)0xC300AD8)->v)) != 0) {
            for (;;) {
                t9 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))(((((struct o0_int *)0xC300B38)->v))))(((((struct o4_int *)0xC300B38)->v)), a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
                if ((unsigned int)((((struct o14_int *)0xC300C2C)->v)) > (unsigned int)((((struct o20_int *)0xC300AD8)->v))) {
                    break;
                }
                if (((((struct o4_int *)0xC300AD8)->v)) == 0) {
                    if (0x0 != 0) {
                        return 0xC300AF8;
                    }
                    (((struct o14_uint *)0xC300C2C)->v) = 0x0;
                    if (((((struct o0_int *)0xC300AD8)->v)) != 0) {
                        for (;;) {
                            t17 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))(((((struct o0_int *)0xC300B38)->v))))(((((struct o4_int *)0xC300B38)->v)), a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
                            if ((unsigned int)((((struct o14_int *)0xC300C2C)->v)) > (unsigned int)((((struct o1C_int *)0xC300AD8)->v))) {
                                break;
                            }
                            if (((((struct o0_int *)0xC300AD8)->v)) == 0) {
                                if (0x0 != 0) {
                                    (((struct o0_uint *)0xC300AD8)->v) = 0x0;
                                    return 0xC300AF4;
                                }
                                (((struct o1C_uint *)0xC300C2C)->v) = 0x1;
                                *(unsigned int *)(((int)stk + 12)) = ((((struct o0_int *)0xC300B84)->v));
                                *(unsigned int *)(((int)stk + 0)) = ((((struct o4_int *)0xC300B84)->v));
                                t24 = *(int *)((a4 + 0x10));
                                *(unsigned int *)(((int)stk + 8)) = t24;
                                t26 = *(int *)((a4 + 0xC));
                                if ((unsigned int)t24 > (unsigned int)((((struct o4_int *)0xC300918)->v))) {
                                    t27 = (((struct o4_int *)0xC300918)->v);
                                    *(unsigned int *)(((int)stk + 4)) = t26;
                                    if ((unsigned int)t26 > (unsigned int)((((struct o0_int *)0xC300918)->v))) {
                                        kmSetPixelClipping(0x0, 0x0, ((((struct o0_int *)0xC300918)->v)), t27);
                                        (((struct o8_uint *)0xC300DD8)->v) = ((((struct o0_int *)0xC300B84)->v));
                                        (((struct oC_uint *)0xC300DD8)->v) = ((((struct o4_int *)0xC300B84)->v));
                                        (((struct o0_uint *)0xC300B84)->v) = (*(int *)(((int)stk + 12)));
                                        (((struct o4_uint *)0xC300B84)->v) = (*(int *)(((int)stk + 0)));
                                        t35 = kmiStartRenderTextureEntry(0xC300DD4, 0x0, 0x0, 0x0);
                                        (((struct o14_uint *)0xC300C2C)->v) = 0x0;
                                        if (((((struct o0_int *)0xC300AD8)->v)) != 0) {
                                            for (;;) {
                                                t39 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))(((((struct o0_int *)0xC300B38)->v))))(((((struct o4_int *)0xC300B38)->v)), a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
                                                if ((unsigned int)((((struct o14_int *)0xC300C2C)->v)) > (unsigned int)((((struct o1C_int *)0xC300AD8)->v))) {
                                                    break;
                                                }
                                                if (((((struct o0_int *)0xC300AD8)->v)) == 0) {
                                                    if (0x0 != 0) {
                                                        (((struct o1C_uint *)0xC300C2C)->v) = 0x0;
                                                        return 0xC300AF4;
                                                    }
                                                    kmiWriteRegister(0x8, 0x1);
                                                    kmiWriteRegister(0x8, 0x0);
                                                    kmiWriteRegister(0x124, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D48))));
                                                    kmiWriteRegister(0x12C, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D4C))));
                                                    kmiWriteRegister(0x128, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D54))));
                                                    kmiWriteRegister(0x130, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D58))));
                                                    kmiWriteRegister(0x164, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D50))));
                                                    kmiWriteRegister(0x144, 0x80000000);
                                                    kmiReadRegister(0x144);
                                                    (((struct o10_uint *)0xC300C2C)->v) = 0x0;
                                                    (((struct oC_uint *)0xC300C2C)->v) = (*(int *)0xC300D38);
                                                    (((struct o8_uint *)0xC300C2C)->v) = ((((struct o0_int *)0xC300C2C)->v));
                                                    (((struct o4_uint *)0xC300AD8)->v) = 0x1;
                                                    (((struct o20_uint *)0xC300C2C)->v) = 0x1;
                                                    *(unsigned int *)(((((((struct o0_int *)0xC300C2C)->v)) << 2) + 0xC300C1C)) = 0x2;
                                                    return 0x0;
                                                }
                                            }
                                            if (0x1 != 0) {
                                                (((struct o1C_uint *)0xC300C2C)->v) = 0x0;
                                                return 0xC300AF4;
                                            }
                                        } else {
                                            if (0x0 != 0) {
                                                (((struct o1C_uint *)0xC300C2C)->v) = 0x0;
                                                return t35;
                                            }
                                        }
                                    } else {
                                        kmSetPixelClipping(0x0, 0x0, (*(int *)(((int)stk + 4))), t27);
                                        (((struct o8_uint *)0xC300DD8)->v) = ((((struct o0_int *)0xC300B84)->v));
                                        (((struct oC_uint *)0xC300DD8)->v) = ((((struct o4_int *)0xC300B84)->v));
                                        (((struct o0_uint *)0xC300B84)->v) = (*(int *)(((int)stk + 12)));
                                        (((struct o4_uint *)0xC300B84)->v) = (*(int *)(((int)stk + 0)));
                                        t104 = kmiStartRenderTextureEntry(0xC300DD4, 0x0, 0x0, 0x0);
                                        (((struct o14_uint *)0xC300C2C)->v) = 0x0;
                                        if (((((struct o0_int *)0xC300AD8)->v)) != 0) {
                                            for (;;) {
                                                t108 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))(((((struct o0_int *)0xC300B38)->v))))(((((struct o4_int *)0xC300B38)->v)), a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
                                                if ((unsigned int)((((struct o14_int *)0xC300C2C)->v)) > (unsigned int)((((struct o1C_int *)0xC300AD8)->v))) {
                                                    break;
                                                }
                                                if (((((struct o0_int *)0xC300AD8)->v)) == 0) {
                                                    if (0x0 != 0) {
                                                        (((struct o1C_uint *)0xC300C2C)->v) = 0x0;
                                                        return 0xC300AF4;
                                                    }
                                                    kmiWriteRegister(0x8, 0x1);
                                                    kmiWriteRegister(0x8, 0x0);
                                                    kmiWriteRegister(0x124, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D48))));
                                                    kmiWriteRegister(0x12C, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D4C))));
                                                    kmiWriteRegister(0x128, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D54))));
                                                    kmiWriteRegister(0x130, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D58))));
                                                    kmiWriteRegister(0x164, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D50))));
                                                    kmiWriteRegister(0x144, 0x80000000);
                                                    kmiReadRegister(0x144);
                                                    (((struct o10_uint *)0xC300C2C)->v) = 0x0;
                                                    (((struct oC_uint *)0xC300C2C)->v) = (*(int *)0xC300D38);
                                                    (((struct o8_uint *)0xC300C2C)->v) = ((((struct o0_int *)0xC300C2C)->v));
                                                    (((struct o4_uint *)0xC300AD8)->v) = 0x1;
                                                    (((struct o20_uint *)0xC300C2C)->v) = 0x1;
                                                    *(unsigned int *)(((((((struct o0_int *)0xC300C2C)->v)) << 2) + 0xC300C1C)) = 0x2;
                                                    return 0x0;
                                                }
                                            }
                                            if (0x1 != 0) {
                                                (((struct o1C_uint *)0xC300C2C)->v) = 0x0;
                                                return 0xC300AF4;
                                            }
                                        } else {
                                            if (0x0 != 0) {
                                                (((struct o1C_uint *)0xC300C2C)->v) = 0x0;
                                                return t104;
                                            }
                                        }
                                    }
                                } else {
                                    t167 = *(int *)(((int)stk + 8));
                                    *(unsigned int *)(((int)stk + 4)) = t26;
                                    if ((unsigned int)t26 > (unsigned int)((((struct o0_int *)0xC300918)->v))) {
                                        kmSetPixelClipping(0x0, 0x0, ((((struct o0_int *)0xC300918)->v)), t167);
                                        (((struct o8_uint *)0xC300DD8)->v) = ((((struct o0_int *)0xC300B84)->v));
                                        (((struct oC_uint *)0xC300DD8)->v) = ((((struct o4_int *)0xC300B84)->v));
                                        (((struct o0_uint *)0xC300B84)->v) = (*(int *)(((int)stk + 12)));
                                        (((struct o4_uint *)0xC300B84)->v) = (*(int *)(((int)stk + 0)));
                                        t175 = kmiStartRenderTextureEntry(0xC300DD4, 0x0, 0x0, 0x0);
                                        (((struct o14_uint *)0xC300C2C)->v) = 0x0;
                                        if (((((struct o0_int *)0xC300AD8)->v)) != 0) {
                                            for (;;) {
                                                t179 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))(((((struct o0_int *)0xC300B38)->v))))(((((struct o4_int *)0xC300B38)->v)), a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
                                                if ((unsigned int)((((struct o14_int *)0xC300C2C)->v)) > (unsigned int)((((struct o1C_int *)0xC300AD8)->v))) {
                                                    break;
                                                }
                                                if (((((struct o0_int *)0xC300AD8)->v)) == 0) {
                                                    if (0x0 != 0) {
                                                        (((struct o1C_uint *)0xC300C2C)->v) = 0x0;
                                                        return 0xC300AF4;
                                                    }
                                                    kmiWriteRegister(0x8, 0x1);
                                                    kmiWriteRegister(0x8, 0x0);
                                                    kmiWriteRegister(0x124, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D48))));
                                                    kmiWriteRegister(0x12C, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D4C))));
                                                    kmiWriteRegister(0x128, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D54))));
                                                    kmiWriteRegister(0x130, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D58))));
                                                    kmiWriteRegister(0x164, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D50))));
                                                    kmiWriteRegister(0x144, 0x80000000);
                                                    kmiReadRegister(0x144);
                                                    (((struct o10_uint *)0xC300C2C)->v) = 0x0;
                                                    (((struct oC_uint *)0xC300C2C)->v) = (*(int *)0xC300D38);
                                                    (((struct o8_uint *)0xC300C2C)->v) = ((((struct o0_int *)0xC300C2C)->v));
                                                    (((struct o4_uint *)0xC300AD8)->v) = 0x1;
                                                    (((struct o20_uint *)0xC300C2C)->v) = 0x1;
                                                    *(unsigned int *)(((((((struct o0_int *)0xC300C2C)->v)) << 2) + 0xC300C1C)) = 0x2;
                                                    return 0x0;
                                                }
                                            }
                                            if (0x1 != 0) {
                                                (((struct o1C_uint *)0xC300C2C)->v) = 0x0;
                                                return 0xC300AF4;
                                            }
                                        } else {
                                            if (0x0 != 0) {
                                                (((struct o1C_uint *)0xC300C2C)->v) = 0x0;
                                                return t175;
                                            }
                                        }
                                    } else {
                                        kmSetPixelClipping(0x0, 0x0, (*(int *)(((int)stk + 4))), t167);
                                        (((struct o8_uint *)0xC300DD8)->v) = ((((struct o0_int *)0xC300B84)->v));
                                        (((struct oC_uint *)0xC300DD8)->v) = ((((struct o4_int *)0xC300B84)->v));
                                        (((struct o0_uint *)0xC300B84)->v) = (*(int *)(((int)stk + 12)));
                                        (((struct o4_uint *)0xC300B84)->v) = (*(int *)(((int)stk + 0)));
                                        t244 = kmiStartRenderTextureEntry(0xC300DD4, 0x0, 0x0, 0x0);
                                        (((struct o14_uint *)0xC300C2C)->v) = 0x0;
                                        if (((((struct o0_int *)0xC300AD8)->v)) != 0) {
                                            for (;;) {
                                                t248 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))(((((struct o0_int *)0xC300B38)->v))))(((((struct o4_int *)0xC300B38)->v)), a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
                                                if ((unsigned int)((((struct o14_int *)0xC300C2C)->v)) > (unsigned int)((((struct o1C_int *)0xC300AD8)->v))) {
                                                    break;
                                                }
                                                if (((((struct o0_int *)0xC300AD8)->v)) == 0) {
                                                    if (0x0 != 0) {
                                                        (((struct o1C_uint *)0xC300C2C)->v) = 0x0;
                                                        return 0xC300AF4;
                                                    }
                                                    kmiWriteRegister(0x8, 0x1);
                                                    kmiWriteRegister(0x8, 0x0);
                                                    kmiWriteRegister(0x124, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D48))));
                                                    kmiWriteRegister(0x12C, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D4C))));
                                                    kmiWriteRegister(0x128, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D54))));
                                                    kmiWriteRegister(0x130, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D58))));
                                                    kmiWriteRegister(0x164, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D50))));
                                                    kmiWriteRegister(0x144, 0x80000000);
                                                    kmiReadRegister(0x144);
                                                    (((struct o10_uint *)0xC300C2C)->v) = 0x0;
                                                    (((struct oC_uint *)0xC300C2C)->v) = (*(int *)0xC300D38);
                                                    (((struct o8_uint *)0xC300C2C)->v) = ((((struct o0_int *)0xC300C2C)->v));
                                                    (((struct o4_uint *)0xC300AD8)->v) = 0x1;
                                                    (((struct o20_uint *)0xC300C2C)->v) = 0x1;
                                                    *(unsigned int *)(((((((struct o0_int *)0xC300C2C)->v)) << 2) + 0xC300C1C)) = 0x2;
                                                    return 0x0;
                                                }
                                            }
                                            if (0x1 != 0) {
                                                (((struct o1C_uint *)0xC300C2C)->v) = 0x0;
                                                return 0xC300AF4;
                                            }
                                        } else {
                                            if (0x0 != 0) {
                                                (((struct o1C_uint *)0xC300C2C)->v) = 0x0;
                                                return t244;
                                            }
                                        }
                                    }
                                }
                                kmiWriteRegister(0x8, 0x1);
                                kmiWriteRegister(0x8, 0x0);
                                kmiWriteRegister(0x124, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D48))));
                                kmiWriteRegister(0x12C, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D4C))));
                                kmiWriteRegister(0x128, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D54))));
                                kmiWriteRegister(0x130, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D58))));
                                kmiWriteRegister(0x164, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D50))));
                                kmiWriteRegister(0x144, 0x80000000);
                                kmiReadRegister(0x144);
                                (((struct o10_uint *)0xC300C2C)->v) = 0x0;
                                (((struct oC_uint *)0xC300C2C)->v) = (*(int *)0xC300D38);
                                (((struct o8_uint *)0xC300C2C)->v) = ((((struct o0_int *)0xC300C2C)->v));
                                (((struct o4_uint *)0xC300AD8)->v) = 0x1;
                                (((struct o20_uint *)0xC300C2C)->v) = 0x1;
                                *(unsigned int *)(((((((struct o0_int *)0xC300C2C)->v)) << 2) + 0xC300C1C)) = 0x2;
                                return 0x0;
                            }
                        }
                        if (0x1 != 0) {
                            (((struct o0_uint *)0xC300AD8)->v) = 0x0;
                            return 0xC300AF4;
                        }
                        (((struct o1C_uint *)0xC300C2C)->v) = 0x1;
                        *(unsigned int *)(((int)stk + 12)) = ((((struct o0_int *)0xC300B84)->v));
                        *(unsigned int *)(((int)stk + 0)) = ((((struct o4_int *)0xC300B84)->v));
                        t309 = *(int *)((a4 + 0x10));
                        *(unsigned int *)(((int)stk + 8)) = t309;
                        t311 = *(int *)((a4 + 0xC));
                        if ((unsigned int)t309 > (unsigned int)((((struct o4_int *)0xC300918)->v))) {
                            t312 = (((struct o4_int *)0xC300918)->v);
                            *(unsigned int *)(((int)stk + 4)) = t311;
                            if ((unsigned int)t311 > (unsigned int)((((struct o0_int *)0xC300918)->v))) {
                                kmSetPixelClipping(0x0, 0x0, ((((struct o0_int *)0xC300918)->v)), t312);
                                (((struct o8_uint *)0xC300DD8)->v) = ((((struct o0_int *)0xC300B84)->v));
                                (((struct oC_uint *)0xC300DD8)->v) = ((((struct o4_int *)0xC300B84)->v));
                                (((struct o0_uint *)0xC300B84)->v) = (*(int *)(((int)stk + 12)));
                                (((struct o4_uint *)0xC300B84)->v) = (*(int *)(((int)stk + 0)));
                                t320 = kmiStartRenderTextureEntry(0xC300DD4, 0x0, 0x0, 0x0);
                                (((struct o14_uint *)0xC300C2C)->v) = 0x0;
                                if (((((struct o0_int *)0xC300AD8)->v)) != 0) {
                                    for (;;) {
                                        t324 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))(((((struct o0_int *)0xC300B38)->v))))(((((struct o4_int *)0xC300B38)->v)), a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
                                        if ((unsigned int)((((struct o14_int *)0xC300C2C)->v)) > (unsigned int)((((struct o1C_int *)0xC300AD8)->v))) {
                                            break;
                                        }
                                        if (((((struct o0_int *)0xC300AD8)->v)) == 0) {
                                            if (0x0 != 0) {
                                                (((struct o1C_uint *)0xC300C2C)->v) = 0x0;
                                                return 0xC300AF4;
                                            }
                                            kmiWriteRegister(0x8, 0x1);
                                            kmiWriteRegister(0x8, 0x0);
                                            kmiWriteRegister(0x124, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D48))));
                                            kmiWriteRegister(0x12C, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D4C))));
                                            kmiWriteRegister(0x128, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D54))));
                                            kmiWriteRegister(0x130, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D58))));
                                            kmiWriteRegister(0x164, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D50))));
                                            kmiWriteRegister(0x144, 0x80000000);
                                            kmiReadRegister(0x144);
                                            (((struct o10_uint *)0xC300C2C)->v) = 0x0;
                                            (((struct oC_uint *)0xC300C2C)->v) = (*(int *)0xC300D38);
                                            (((struct o8_uint *)0xC300C2C)->v) = ((((struct o0_int *)0xC300C2C)->v));
                                            (((struct o4_uint *)0xC300AD8)->v) = 0x1;
                                            (((struct o20_uint *)0xC300C2C)->v) = 0x1;
                                            *(unsigned int *)(((((((struct o0_int *)0xC300C2C)->v)) << 2) + 0xC300C1C)) = 0x2;
                                            return 0x0;
                                        }
                                    }
                                    if (0x1 != 0) {
                                        (((struct o1C_uint *)0xC300C2C)->v) = 0x0;
                                        return 0xC300AF4;
                                    }
                                } else {
                                    if (0x0 != 0) {
                                        (((struct o1C_uint *)0xC300C2C)->v) = 0x0;
                                        return t320;
                                    }
                                }
                            } else {
                                kmSetPixelClipping(0x0, 0x0, (*(int *)(((int)stk + 4))), t312);
                                (((struct o8_uint *)0xC300DD8)->v) = ((((struct o0_int *)0xC300B84)->v));
                                (((struct oC_uint *)0xC300DD8)->v) = ((((struct o4_int *)0xC300B84)->v));
                                (((struct o0_uint *)0xC300B84)->v) = (*(int *)(((int)stk + 12)));
                                (((struct o4_uint *)0xC300B84)->v) = (*(int *)(((int)stk + 0)));
                                t389 = kmiStartRenderTextureEntry(0xC300DD4, 0x0, 0x0, 0x0);
                                (((struct o14_uint *)0xC300C2C)->v) = 0x0;
                                if (((((struct o0_int *)0xC300AD8)->v)) != 0) {
                                    for (;;) {
                                        t393 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))(((((struct o0_int *)0xC300B38)->v))))(((((struct o4_int *)0xC300B38)->v)), a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
                                        if ((unsigned int)((((struct o14_int *)0xC300C2C)->v)) > (unsigned int)((((struct o1C_int *)0xC300AD8)->v))) {
                                            break;
                                        }
                                        if (((((struct o0_int *)0xC300AD8)->v)) == 0) {
                                            if (0x0 != 0) {
                                                (((struct o1C_uint *)0xC300C2C)->v) = 0x0;
                                                return 0xC300AF4;
                                            }
                                            kmiWriteRegister(0x8, 0x1);
                                            kmiWriteRegister(0x8, 0x0);
                                            kmiWriteRegister(0x124, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D48))));
                                            kmiWriteRegister(0x12C, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D4C))));
                                            kmiWriteRegister(0x128, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D54))));
                                            kmiWriteRegister(0x130, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D58))));
                                            kmiWriteRegister(0x164, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D50))));
                                            kmiWriteRegister(0x144, 0x80000000);
                                            kmiReadRegister(0x144);
                                            (((struct o10_uint *)0xC300C2C)->v) = 0x0;
                                            (((struct oC_uint *)0xC300C2C)->v) = (*(int *)0xC300D38);
                                            (((struct o8_uint *)0xC300C2C)->v) = ((((struct o0_int *)0xC300C2C)->v));
                                            (((struct o4_uint *)0xC300AD8)->v) = 0x1;
                                            (((struct o20_uint *)0xC300C2C)->v) = 0x1;
                                            *(unsigned int *)(((((((struct o0_int *)0xC300C2C)->v)) << 2) + 0xC300C1C)) = 0x2;
                                            return 0x0;
                                        }
                                    }
                                    if (0x1 != 0) {
                                        (((struct o1C_uint *)0xC300C2C)->v) = 0x0;
                                        return 0xC300AF4;
                                    }
                                } else {
                                    if (0x0 != 0) {
                                        (((struct o1C_uint *)0xC300C2C)->v) = 0x0;
                                        return t389;
                                    }
                                }
                            }
                        } else {
                            t452 = *(int *)(((int)stk + 8));
                            *(unsigned int *)(((int)stk + 4)) = t311;
                            if ((unsigned int)t311 > (unsigned int)((((struct o0_int *)0xC300918)->v))) {
                                kmSetPixelClipping(0x0, 0x0, ((((struct o0_int *)0xC300918)->v)), t452);
                                (((struct o8_uint *)0xC300DD8)->v) = ((((struct o0_int *)0xC300B84)->v));
                                (((struct oC_uint *)0xC300DD8)->v) = ((((struct o4_int *)0xC300B84)->v));
                                (((struct o0_uint *)0xC300B84)->v) = (*(int *)(((int)stk + 12)));
                                (((struct o4_uint *)0xC300B84)->v) = (*(int *)(((int)stk + 0)));
                                t460 = kmiStartRenderTextureEntry(0xC300DD4, 0x0, 0x0, 0x0);
                                (((struct o14_uint *)0xC300C2C)->v) = 0x0;
                                if (((((struct o0_int *)0xC300AD8)->v)) != 0) {
                                    for (;;) {
                                        t464 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))(((((struct o0_int *)0xC300B38)->v))))(((((struct o4_int *)0xC300B38)->v)), a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
                                        if ((unsigned int)((((struct o14_int *)0xC300C2C)->v)) > (unsigned int)((((struct o1C_int *)0xC300AD8)->v))) {
                                            break;
                                        }
                                        if (((((struct o0_int *)0xC300AD8)->v)) == 0) {
                                            if (0x0 != 0) {
                                                (((struct o1C_uint *)0xC300C2C)->v) = 0x0;
                                                return 0xC300AF4;
                                            }
                                            kmiWriteRegister(0x8, 0x1);
                                            kmiWriteRegister(0x8, 0x0);
                                            kmiWriteRegister(0x124, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D48))));
                                            kmiWriteRegister(0x12C, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D4C))));
                                            kmiWriteRegister(0x128, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D54))));
                                            kmiWriteRegister(0x130, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D58))));
                                            kmiWriteRegister(0x164, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D50))));
                                            kmiWriteRegister(0x144, 0x80000000);
                                            kmiReadRegister(0x144);
                                            (((struct o10_uint *)0xC300C2C)->v) = 0x0;
                                            (((struct oC_uint *)0xC300C2C)->v) = (*(int *)0xC300D38);
                                            (((struct o8_uint *)0xC300C2C)->v) = ((((struct o0_int *)0xC300C2C)->v));
                                            (((struct o4_uint *)0xC300AD8)->v) = 0x1;
                                            (((struct o20_uint *)0xC300C2C)->v) = 0x1;
                                            *(unsigned int *)(((((((struct o0_int *)0xC300C2C)->v)) << 2) + 0xC300C1C)) = 0x2;
                                            return 0x0;
                                        }
                                    }
                                    if (0x1 != 0) {
                                        (((struct o1C_uint *)0xC300C2C)->v) = 0x0;
                                        return 0xC300AF4;
                                    }
                                } else {
                                    if (0x0 != 0) {
                                        (((struct o1C_uint *)0xC300C2C)->v) = 0x0;
                                        return t460;
                                    }
                                }
                            } else {
                                kmSetPixelClipping(0x0, 0x0, (*(int *)(((int)stk + 4))), t452);
                                (((struct o8_uint *)0xC300DD8)->v) = ((((struct o0_int *)0xC300B84)->v));
                                (((struct oC_uint *)0xC300DD8)->v) = ((((struct o4_int *)0xC300B84)->v));
                                (((struct o0_uint *)0xC300B84)->v) = (*(int *)(((int)stk + 12)));
                                (((struct o4_uint *)0xC300B84)->v) = (*(int *)(((int)stk + 0)));
                                t529 = kmiStartRenderTextureEntry(0xC300DD4, 0x0, 0x0, 0x0);
                                (((struct o14_uint *)0xC300C2C)->v) = 0x0;
                                if (((((struct o0_int *)0xC300AD8)->v)) != 0) {
                                    for (;;) {
                                        t533 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))(((((struct o0_int *)0xC300B38)->v))))(((((struct o4_int *)0xC300B38)->v)), a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
                                        if ((unsigned int)((((struct o14_int *)0xC300C2C)->v)) > (unsigned int)((((struct o1C_int *)0xC300AD8)->v))) {
                                            break;
                                        }
                                        if (((((struct o0_int *)0xC300AD8)->v)) == 0) {
                                            if (0x0 != 0) {
                                                (((struct o1C_uint *)0xC300C2C)->v) = 0x0;
                                                return 0xC300AF4;
                                            }
                                            kmiWriteRegister(0x8, 0x1);
                                            kmiWriteRegister(0x8, 0x0);
                                            kmiWriteRegister(0x124, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D48))));
                                            kmiWriteRegister(0x12C, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D4C))));
                                            kmiWriteRegister(0x128, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D54))));
                                            kmiWriteRegister(0x130, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D58))));
                                            kmiWriteRegister(0x164, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D50))));
                                            kmiWriteRegister(0x144, 0x80000000);
                                            kmiReadRegister(0x144);
                                            (((struct o10_uint *)0xC300C2C)->v) = 0x0;
                                            (((struct oC_uint *)0xC300C2C)->v) = (*(int *)0xC300D38);
                                            (((struct o8_uint *)0xC300C2C)->v) = ((((struct o0_int *)0xC300C2C)->v));
                                            (((struct o4_uint *)0xC300AD8)->v) = 0x1;
                                            (((struct o20_uint *)0xC300C2C)->v) = 0x1;
                                            *(unsigned int *)(((((((struct o0_int *)0xC300C2C)->v)) << 2) + 0xC300C1C)) = 0x2;
                                            return 0x0;
                                        }
                                    }
                                    if (0x1 != 0) {
                                        (((struct o1C_uint *)0xC300C2C)->v) = 0x0;
                                        return 0xC300AF4;
                                    }
                                } else {
                                    if (0x0 != 0) {
                                        (((struct o1C_uint *)0xC300C2C)->v) = 0x0;
                                        return t529;
                                    }
                                }
                            }
                        }
                    } else {
                        if (0x0 != 0) {
                            (((struct o0_uint *)0xC300AD8)->v) = 0x0;
                            return 0xC300AF8;
                        }
                        (((struct o1C_uint *)0xC300C2C)->v) = 0x1;
                        *(unsigned int *)(((int)stk + 12)) = ((((struct o0_int *)0xC300B84)->v));
                        *(unsigned int *)(((int)stk + 0)) = ((((struct o4_int *)0xC300B84)->v));
                        t594 = *(int *)((a4 + 0x10));
                        *(unsigned int *)(((int)stk + 8)) = t594;
                        t596 = *(int *)((a4 + 0xC));
                        if ((unsigned int)t594 > (unsigned int)((((struct o4_int *)0xC300918)->v))) {
                            t597 = (((struct o4_int *)0xC300918)->v);
                            *(unsigned int *)(((int)stk + 4)) = t596;
                            if ((unsigned int)t596 > (unsigned int)((((struct o0_int *)0xC300918)->v))) {
                                kmSetPixelClipping(0x0, 0x0, ((((struct o0_int *)0xC300918)->v)), t597);
                                (((struct o8_uint *)0xC300DD8)->v) = ((((struct o0_int *)0xC300B84)->v));
                                (((struct oC_uint *)0xC300DD8)->v) = ((((struct o4_int *)0xC300B84)->v));
                                (((struct o0_uint *)0xC300B84)->v) = (*(int *)(((int)stk + 12)));
                                (((struct o4_uint *)0xC300B84)->v) = (*(int *)(((int)stk + 0)));
                                t605 = kmiStartRenderTextureEntry(0xC300DD4, 0x0, 0x0, 0x0);
                                (((struct o14_uint *)0xC300C2C)->v) = 0x0;
                                if (((((struct o0_int *)0xC300AD8)->v)) != 0) {
                                    for (;;) {
                                        t609 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))(((((struct o0_int *)0xC300B38)->v))))(((((struct o4_int *)0xC300B38)->v)), a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
                                        if ((unsigned int)((((struct o14_int *)0xC300C2C)->v)) > (unsigned int)((((struct o1C_int *)0xC300AD8)->v))) {
                                            break;
                                        }
                                        if (((((struct o0_int *)0xC300AD8)->v)) == 0) {
                                            if (0x0 != 0) {
                                                (((struct o1C_uint *)0xC300C2C)->v) = 0x0;
                                                return 0xC300AF4;
                                            }
                                            kmiWriteRegister(0x8, 0x1);
                                            kmiWriteRegister(0x8, 0x0);
                                            kmiWriteRegister(0x124, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D48))));
                                            kmiWriteRegister(0x12C, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D4C))));
                                            kmiWriteRegister(0x128, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D54))));
                                            kmiWriteRegister(0x130, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D58))));
                                            kmiWriteRegister(0x164, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D50))));
                                            kmiWriteRegister(0x144, 0x80000000);
                                            kmiReadRegister(0x144);
                                            (((struct o10_uint *)0xC300C2C)->v) = 0x0;
                                            (((struct oC_uint *)0xC300C2C)->v) = (*(int *)0xC300D38);
                                            (((struct o8_uint *)0xC300C2C)->v) = ((((struct o0_int *)0xC300C2C)->v));
                                            (((struct o4_uint *)0xC300AD8)->v) = 0x1;
                                            (((struct o20_uint *)0xC300C2C)->v) = 0x1;
                                            *(unsigned int *)(((((((struct o0_int *)0xC300C2C)->v)) << 2) + 0xC300C1C)) = 0x2;
                                            return 0x0;
                                        }
                                    }
                                    if (0x1 != 0) {
                                        (((struct o1C_uint *)0xC300C2C)->v) = 0x0;
                                        return 0xC300AF4;
                                    }
                                } else {
                                    if (0x0 != 0) {
                                        (((struct o1C_uint *)0xC300C2C)->v) = 0x0;
                                        return t605;
                                    }
                                }
                            } else {
                                kmSetPixelClipping(0x0, 0x0, (*(int *)(((int)stk + 4))), t597);
                                (((struct o8_uint *)0xC300DD8)->v) = ((((struct o0_int *)0xC300B84)->v));
                                (((struct oC_uint *)0xC300DD8)->v) = ((((struct o4_int *)0xC300B84)->v));
                                (((struct o0_uint *)0xC300B84)->v) = (*(int *)(((int)stk + 12)));
                                (((struct o4_uint *)0xC300B84)->v) = (*(int *)(((int)stk + 0)));
                                t674 = kmiStartRenderTextureEntry(0xC300DD4, 0x0, 0x0, 0x0);
                                (((struct o14_uint *)0xC300C2C)->v) = 0x0;
                                if (((((struct o0_int *)0xC300AD8)->v)) != 0) {
                                    for (;;) {
                                        t678 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))(((((struct o0_int *)0xC300B38)->v))))(((((struct o4_int *)0xC300B38)->v)), a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
                                        if ((unsigned int)((((struct o14_int *)0xC300C2C)->v)) > (unsigned int)((((struct o1C_int *)0xC300AD8)->v))) {
                                            break;
                                        }
                                        if (((((struct o0_int *)0xC300AD8)->v)) == 0) {
                                            if (0x0 != 0) {
                                                (((struct o1C_uint *)0xC300C2C)->v) = 0x0;
                                                return 0xC300AF4;
                                            }
                                            kmiWriteRegister(0x8, 0x1);
                                            kmiWriteRegister(0x8, 0x0);
                                            kmiWriteRegister(0x124, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D48))));
                                            kmiWriteRegister(0x12C, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D4C))));
                                            kmiWriteRegister(0x128, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D54))));
                                            kmiWriteRegister(0x130, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D58))));
                                            kmiWriteRegister(0x164, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D50))));
                                            kmiWriteRegister(0x144, 0x80000000);
                                            kmiReadRegister(0x144);
                                            (((struct o10_uint *)0xC300C2C)->v) = 0x0;
                                            (((struct oC_uint *)0xC300C2C)->v) = (*(int *)0xC300D38);
                                            (((struct o8_uint *)0xC300C2C)->v) = ((((struct o0_int *)0xC300C2C)->v));
                                            (((struct o4_uint *)0xC300AD8)->v) = 0x1;
                                            (((struct o20_uint *)0xC300C2C)->v) = 0x1;
                                            *(unsigned int *)(((((((struct o0_int *)0xC300C2C)->v)) << 2) + 0xC300C1C)) = 0x2;
                                            return 0x0;
                                        }
                                    }
                                    if (0x1 != 0) {
                                        (((struct o1C_uint *)0xC300C2C)->v) = 0x0;
                                        return 0xC300AF4;
                                    }
                                } else {
                                    if (0x0 != 0) {
                                        (((struct o1C_uint *)0xC300C2C)->v) = 0x0;
                                        return t674;
                                    }
                                }
                            }
                        } else {
                            t737 = *(int *)(((int)stk + 8));
                            *(unsigned int *)(((int)stk + 4)) = t596;
                            if ((unsigned int)t596 > (unsigned int)((((struct o0_int *)0xC300918)->v))) {
                                kmSetPixelClipping(0x0, 0x0, ((((struct o0_int *)0xC300918)->v)), t737);
                                (((struct o8_uint *)0xC300DD8)->v) = ((((struct o0_int *)0xC300B84)->v));
                                (((struct oC_uint *)0xC300DD8)->v) = ((((struct o4_int *)0xC300B84)->v));
                                (((struct o0_uint *)0xC300B84)->v) = (*(int *)(((int)stk + 12)));
                                (((struct o4_uint *)0xC300B84)->v) = (*(int *)(((int)stk + 0)));
                                t745 = kmiStartRenderTextureEntry(0xC300DD4, 0x0, 0x0, 0x0);
                                (((struct o14_uint *)0xC300C2C)->v) = 0x0;
                                if (((((struct o0_int *)0xC300AD8)->v)) != 0) {
                                    for (;;) {
                                        t749 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))(((((struct o0_int *)0xC300B38)->v))))(((((struct o4_int *)0xC300B38)->v)), a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
                                        if ((unsigned int)((((struct o14_int *)0xC300C2C)->v)) > (unsigned int)((((struct o1C_int *)0xC300AD8)->v))) {
                                            break;
                                        }
                                        if (((((struct o0_int *)0xC300AD8)->v)) == 0) {
                                            if (0x0 != 0) {
                                                (((struct o1C_uint *)0xC300C2C)->v) = 0x0;
                                                return 0xC300AF4;
                                            }
                                            kmiWriteRegister(0x8, 0x1);
                                            kmiWriteRegister(0x8, 0x0);
                                            kmiWriteRegister(0x124, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D48))));
                                            kmiWriteRegister(0x12C, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D4C))));
                                            kmiWriteRegister(0x128, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D54))));
                                            kmiWriteRegister(0x130, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D58))));
                                            kmiWriteRegister(0x164, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D50))));
                                            kmiWriteRegister(0x144, 0x80000000);
                                            kmiReadRegister(0x144);
                                            (((struct o10_uint *)0xC300C2C)->v) = 0x0;
                                            (((struct oC_uint *)0xC300C2C)->v) = (*(int *)0xC300D38);
                                            (((struct o8_uint *)0xC300C2C)->v) = ((((struct o0_int *)0xC300C2C)->v));
                                            (((struct o4_uint *)0xC300AD8)->v) = 0x1;
                                            (((struct o20_uint *)0xC300C2C)->v) = 0x1;
                                            *(unsigned int *)(((((((struct o0_int *)0xC300C2C)->v)) << 2) + 0xC300C1C)) = 0x2;
                                            return 0x0;
                                        }
                                    }
                                    if (0x1 != 0) {
                                        (((struct o1C_uint *)0xC300C2C)->v) = 0x0;
                                        return 0xC300AF4;
                                    }
                                } else {
                                    if (0x0 != 0) {
                                        (((struct o1C_uint *)0xC300C2C)->v) = 0x0;
                                        return t745;
                                    }
                                }
                            } else {
                                kmSetPixelClipping(0x0, 0x0, (*(int *)(((int)stk + 4))), t737);
                                (((struct o8_uint *)0xC300DD8)->v) = ((((struct o0_int *)0xC300B84)->v));
                                (((struct oC_uint *)0xC300DD8)->v) = ((((struct o4_int *)0xC300B84)->v));
                                (((struct o0_uint *)0xC300B84)->v) = (*(int *)(((int)stk + 12)));
                                (((struct o4_uint *)0xC300B84)->v) = (*(int *)(((int)stk + 0)));
                                t814 = kmiStartRenderTextureEntry(0xC300DD4, 0x0, 0x0, 0x0);
                                (((struct o14_uint *)0xC300C2C)->v) = 0x0;
                                if (((((struct o0_int *)0xC300AD8)->v)) != 0) {
                                    for (;;) {
                                        t818 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))(((((struct o0_int *)0xC300B38)->v))))(((((struct o4_int *)0xC300B38)->v)), a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
                                        if ((unsigned int)((((struct o14_int *)0xC300C2C)->v)) > (unsigned int)((((struct o1C_int *)0xC300AD8)->v))) {
                                            break;
                                        }
                                        if (((((struct o0_int *)0xC300AD8)->v)) == 0) {
                                            if (0x0 != 0) {
                                                (((struct o1C_uint *)0xC300C2C)->v) = 0x0;
                                                return 0xC300AF4;
                                            }
                                            kmiWriteRegister(0x8, 0x1);
                                            kmiWriteRegister(0x8, 0x0);
                                            kmiWriteRegister(0x124, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D48))));
                                            kmiWriteRegister(0x12C, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D4C))));
                                            kmiWriteRegister(0x128, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D54))));
                                            kmiWriteRegister(0x130, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D58))));
                                            kmiWriteRegister(0x164, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D50))));
                                            kmiWriteRegister(0x144, 0x80000000);
                                            kmiReadRegister(0x144);
                                            (((struct o10_uint *)0xC300C2C)->v) = 0x0;
                                            (((struct oC_uint *)0xC300C2C)->v) = (*(int *)0xC300D38);
                                            (((struct o8_uint *)0xC300C2C)->v) = ((((struct o0_int *)0xC300C2C)->v));
                                            (((struct o4_uint *)0xC300AD8)->v) = 0x1;
                                            (((struct o20_uint *)0xC300C2C)->v) = 0x1;
                                            *(unsigned int *)(((((((struct o0_int *)0xC300C2C)->v)) << 2) + 0xC300C1C)) = 0x2;
                                            return 0x0;
                                        }
                                    }
                                    if (0x1 != 0) {
                                        (((struct o1C_uint *)0xC300C2C)->v) = 0x0;
                                        return 0xC300AF4;
                                    }
                                } else {
                                    if (0x0 != 0) {
                                        (((struct o1C_uint *)0xC300C2C)->v) = 0x0;
                                        return t814;
                                    }
                                }
                            }
                        }
                    }
                    kmiWriteRegister(0x8, 0x1);
                    kmiWriteRegister(0x8, 0x0);
                    kmiWriteRegister(0x124, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D48))));
                    kmiWriteRegister(0x12C, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D4C))));
                    kmiWriteRegister(0x128, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D54))));
                    kmiWriteRegister(0x130, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D58))));
                    kmiWriteRegister(0x164, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D50))));
                    kmiWriteRegister(0x144, 0x80000000);
                    kmiReadRegister(0x144);
                    (((struct o10_uint *)0xC300C2C)->v) = 0x0;
                    (((struct oC_uint *)0xC300C2C)->v) = (*(int *)0xC300D38);
                    (((struct o8_uint *)0xC300C2C)->v) = ((((struct o0_int *)0xC300C2C)->v));
                    (((struct o4_uint *)0xC300AD8)->v) = 0x1;
                    (((struct o20_uint *)0xC300C2C)->v) = 0x1;
                    *(unsigned int *)(((((((struct o0_int *)0xC300C2C)->v)) << 2) + 0xC300C1C)) = 0x2;
                    return 0x0;
                }
            }
            t877 = 0xC300AF8;
            t881 = 0x1;
        }
        t1267 = t877;
        if (t881 != 0) {
        } else {
            (((struct o14_uint *)0xC300C2C)->v) = 0x0;
            t1175 = t877;
            t1179 = 0x0;
            if (((((struct o0_int *)0xC300AD8)->v)) != 0) {
                for (;;) {
                    t885 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))(((((struct o0_int *)0xC300B38)->v))))(((((struct o4_int *)0xC300B38)->v)), a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
                    if ((unsigned int)((((struct o14_int *)0xC300C2C)->v)) > (unsigned int)((((struct o1C_int *)0xC300AD8)->v))) {
                        break;
                    }
                    if (((((struct o0_int *)0xC300AD8)->v)) == 0) {
                        if (0x0 != 0) {
                            (((struct o0_uint *)0xC300AD8)->v) = 0x0;
                            return 0xC300AF4;
                        }
                        (((struct o1C_uint *)0xC300C2C)->v) = 0x1;
                        *(unsigned int *)(((int)stk + 12)) = ((((struct o0_int *)0xC300B84)->v));
                        *(unsigned int *)(((int)stk + 0)) = ((((struct o4_int *)0xC300B84)->v));
                        t892 = *(int *)((a4 + 0x10));
                        *(unsigned int *)(((int)stk + 8)) = t892;
                        t894 = *(int *)((a4 + 0xC));
                        if ((unsigned int)t892 > (unsigned int)((((struct o4_int *)0xC300918)->v))) {
                            t895 = (((struct o4_int *)0xC300918)->v);
                            *(unsigned int *)(((int)stk + 4)) = t894;
                            if ((unsigned int)t894 > (unsigned int)((((struct o0_int *)0xC300918)->v))) {
                                kmSetPixelClipping(0x0, 0x0, ((((struct o0_int *)0xC300918)->v)), t895);
                                (((struct o8_uint *)0xC300DD8)->v) = ((((struct o0_int *)0xC300B84)->v));
                                (((struct oC_uint *)0xC300DD8)->v) = ((((struct o4_int *)0xC300B84)->v));
                                (((struct o0_uint *)0xC300B84)->v) = (*(int *)(((int)stk + 12)));
                                (((struct o4_uint *)0xC300B84)->v) = (*(int *)(((int)stk + 0)));
                                t903 = kmiStartRenderTextureEntry(0xC300DD4, 0x0, 0x0, 0x0);
                                (((struct o14_uint *)0xC300C2C)->v) = 0x0;
                                if (((((struct o0_int *)0xC300AD8)->v)) != 0) {
                                    for (;;) {
                                        t907 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))(((((struct o0_int *)0xC300B38)->v))))(((((struct o4_int *)0xC300B38)->v)), a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
                                        if ((unsigned int)((((struct o14_int *)0xC300C2C)->v)) > (unsigned int)((((struct o1C_int *)0xC300AD8)->v))) {
                                            break;
                                        }
                                        if (((((struct o0_int *)0xC300AD8)->v)) == 0) {
                                            if (0x0 != 0) {
                                                (((struct o1C_uint *)0xC300C2C)->v) = 0x0;
                                                return 0xC300AF4;
                                            }
                                            kmiWriteRegister(0x8, 0x1);
                                            kmiWriteRegister(0x8, 0x0);
                                            kmiWriteRegister(0x124, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D48))));
                                            kmiWriteRegister(0x12C, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D4C))));
                                            kmiWriteRegister(0x128, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D54))));
                                            kmiWriteRegister(0x130, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D58))));
                                            kmiWriteRegister(0x164, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D50))));
                                            kmiWriteRegister(0x144, 0x80000000);
                                            kmiReadRegister(0x144);
                                            (((struct o10_uint *)0xC300C2C)->v) = 0x0;
                                            (((struct oC_uint *)0xC300C2C)->v) = (*(int *)0xC300D38);
                                            (((struct o8_uint *)0xC300C2C)->v) = ((((struct o0_int *)0xC300C2C)->v));
                                            (((struct o4_uint *)0xC300AD8)->v) = 0x1;
                                            (((struct o20_uint *)0xC300C2C)->v) = 0x1;
                                            *(unsigned int *)(((((((struct o0_int *)0xC300C2C)->v)) << 2) + 0xC300C1C)) = 0x2;
                                            return 0x0;
                                        }
                                    }
                                    if (0x1 != 0) {
                                        (((struct o1C_uint *)0xC300C2C)->v) = 0x0;
                                        return 0xC300AF4;
                                    }
                                } else {
                                    if (0x0 != 0) {
                                        (((struct o1C_uint *)0xC300C2C)->v) = 0x0;
                                        return t903;
                                    }
                                }
                            } else {
                                kmSetPixelClipping(0x0, 0x0, (*(int *)(((int)stk + 4))), t895);
                                (((struct o8_uint *)0xC300DD8)->v) = ((((struct o0_int *)0xC300B84)->v));
                                (((struct oC_uint *)0xC300DD8)->v) = ((((struct o4_int *)0xC300B84)->v));
                                (((struct o0_uint *)0xC300B84)->v) = (*(int *)(((int)stk + 12)));
                                (((struct o4_uint *)0xC300B84)->v) = (*(int *)(((int)stk + 0)));
                                t972 = kmiStartRenderTextureEntry(0xC300DD4, 0x0, 0x0, 0x0);
                                (((struct o14_uint *)0xC300C2C)->v) = 0x0;
                                if (((((struct o0_int *)0xC300AD8)->v)) != 0) {
                                    for (;;) {
                                        t976 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))(((((struct o0_int *)0xC300B38)->v))))(((((struct o4_int *)0xC300B38)->v)), a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
                                        if ((unsigned int)((((struct o14_int *)0xC300C2C)->v)) > (unsigned int)((((struct o1C_int *)0xC300AD8)->v))) {
                                            break;
                                        }
                                        if (((((struct o0_int *)0xC300AD8)->v)) == 0) {
                                            if (0x0 != 0) {
                                                (((struct o1C_uint *)0xC300C2C)->v) = 0x0;
                                                return 0xC300AF4;
                                            }
                                            kmiWriteRegister(0x8, 0x1);
                                            kmiWriteRegister(0x8, 0x0);
                                            kmiWriteRegister(0x124, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D48))));
                                            kmiWriteRegister(0x12C, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D4C))));
                                            kmiWriteRegister(0x128, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D54))));
                                            kmiWriteRegister(0x130, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D58))));
                                            kmiWriteRegister(0x164, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D50))));
                                            kmiWriteRegister(0x144, 0x80000000);
                                            kmiReadRegister(0x144);
                                            (((struct o10_uint *)0xC300C2C)->v) = 0x0;
                                            (((struct oC_uint *)0xC300C2C)->v) = (*(int *)0xC300D38);
                                            (((struct o8_uint *)0xC300C2C)->v) = ((((struct o0_int *)0xC300C2C)->v));
                                            (((struct o4_uint *)0xC300AD8)->v) = 0x1;
                                            (((struct o20_uint *)0xC300C2C)->v) = 0x1;
                                            *(unsigned int *)(((((((struct o0_int *)0xC300C2C)->v)) << 2) + 0xC300C1C)) = 0x2;
                                            return 0x0;
                                        }
                                    }
                                    if (0x1 != 0) {
                                        (((struct o1C_uint *)0xC300C2C)->v) = 0x0;
                                        return 0xC300AF4;
                                    }
                                } else {
                                    if (0x0 != 0) {
                                        (((struct o1C_uint *)0xC300C2C)->v) = 0x0;
                                        return t972;
                                    }
                                }
                            }
                        } else {
                            t1035 = *(int *)(((int)stk + 8));
                            *(unsigned int *)(((int)stk + 4)) = t894;
                            if ((unsigned int)t894 > (unsigned int)((((struct o0_int *)0xC300918)->v))) {
                                kmSetPixelClipping(0x0, 0x0, ((((struct o0_int *)0xC300918)->v)), t1035);
                                (((struct o8_uint *)0xC300DD8)->v) = ((((struct o0_int *)0xC300B84)->v));
                                (((struct oC_uint *)0xC300DD8)->v) = ((((struct o4_int *)0xC300B84)->v));
                                (((struct o0_uint *)0xC300B84)->v) = (*(int *)(((int)stk + 12)));
                                (((struct o4_uint *)0xC300B84)->v) = (*(int *)(((int)stk + 0)));
                                t1043 = kmiStartRenderTextureEntry(0xC300DD4, 0x0, 0x0, 0x0);
                                (((struct o14_uint *)0xC300C2C)->v) = 0x0;
                                if (((((struct o0_int *)0xC300AD8)->v)) != 0) {
                                    for (;;) {
                                        t1047 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))(((((struct o0_int *)0xC300B38)->v))))(((((struct o4_int *)0xC300B38)->v)), a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
                                        if ((unsigned int)((((struct o14_int *)0xC300C2C)->v)) > (unsigned int)((((struct o1C_int *)0xC300AD8)->v))) {
                                            break;
                                        }
                                        if (((((struct o0_int *)0xC300AD8)->v)) == 0) {
                                            if (0x0 != 0) {
                                                (((struct o1C_uint *)0xC300C2C)->v) = 0x0;
                                                return 0xC300AF4;
                                            }
                                            kmiWriteRegister(0x8, 0x1);
                                            kmiWriteRegister(0x8, 0x0);
                                            kmiWriteRegister(0x124, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D48))));
                                            kmiWriteRegister(0x12C, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D4C))));
                                            kmiWriteRegister(0x128, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D54))));
                                            kmiWriteRegister(0x130, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D58))));
                                            kmiWriteRegister(0x164, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D50))));
                                            kmiWriteRegister(0x144, 0x80000000);
                                            kmiReadRegister(0x144);
                                            (((struct o10_uint *)0xC300C2C)->v) = 0x0;
                                            (((struct oC_uint *)0xC300C2C)->v) = (*(int *)0xC300D38);
                                            (((struct o8_uint *)0xC300C2C)->v) = ((((struct o0_int *)0xC300C2C)->v));
                                            (((struct o4_uint *)0xC300AD8)->v) = 0x1;
                                            (((struct o20_uint *)0xC300C2C)->v) = 0x1;
                                            *(unsigned int *)(((((((struct o0_int *)0xC300C2C)->v)) << 2) + 0xC300C1C)) = 0x2;
                                            return 0x0;
                                        }
                                    }
                                    if (0x1 != 0) {
                                        (((struct o1C_uint *)0xC300C2C)->v) = 0x0;
                                        return 0xC300AF4;
                                    }
                                } else {
                                    if (0x0 != 0) {
                                        (((struct o1C_uint *)0xC300C2C)->v) = 0x0;
                                        return t1043;
                                    }
                                }
                            } else {
                                kmSetPixelClipping(0x0, 0x0, (*(int *)(((int)stk + 4))), t1035);
                                (((struct o8_uint *)0xC300DD8)->v) = ((((struct o0_int *)0xC300B84)->v));
                                (((struct oC_uint *)0xC300DD8)->v) = ((((struct o4_int *)0xC300B84)->v));
                                (((struct o0_uint *)0xC300B84)->v) = (*(int *)(((int)stk + 12)));
                                (((struct o4_uint *)0xC300B84)->v) = (*(int *)(((int)stk + 0)));
                                t1112 = kmiStartRenderTextureEntry(0xC300DD4, 0x0, 0x0, 0x0);
                                (((struct o14_uint *)0xC300C2C)->v) = 0x0;
                                if (((((struct o0_int *)0xC300AD8)->v)) != 0) {
                                    for (;;) {
                                        t1116 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))(((((struct o0_int *)0xC300B38)->v))))(((((struct o4_int *)0xC300B38)->v)), a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
                                        if ((unsigned int)((((struct o14_int *)0xC300C2C)->v)) > (unsigned int)((((struct o1C_int *)0xC300AD8)->v))) {
                                            break;
                                        }
                                        if (((((struct o0_int *)0xC300AD8)->v)) == 0) {
                                            if (0x0 != 0) {
                                                (((struct o1C_uint *)0xC300C2C)->v) = 0x0;
                                                return 0xC300AF4;
                                            }
                                            kmiWriteRegister(0x8, 0x1);
                                            kmiWriteRegister(0x8, 0x0);
                                            kmiWriteRegister(0x124, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D48))));
                                            kmiWriteRegister(0x12C, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D4C))));
                                            kmiWriteRegister(0x128, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D54))));
                                            kmiWriteRegister(0x130, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D58))));
                                            kmiWriteRegister(0x164, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D50))));
                                            kmiWriteRegister(0x144, 0x80000000);
                                            kmiReadRegister(0x144);
                                            (((struct o10_uint *)0xC300C2C)->v) = 0x0;
                                            (((struct oC_uint *)0xC300C2C)->v) = (*(int *)0xC300D38);
                                            (((struct o8_uint *)0xC300C2C)->v) = ((((struct o0_int *)0xC300C2C)->v));
                                            (((struct o4_uint *)0xC300AD8)->v) = 0x1;
                                            (((struct o20_uint *)0xC300C2C)->v) = 0x1;
                                            *(unsigned int *)(((((((struct o0_int *)0xC300C2C)->v)) << 2) + 0xC300C1C)) = 0x2;
                                            return 0x0;
                                        }
                                    }
                                    if (0x1 != 0) {
                                        (((struct o1C_uint *)0xC300C2C)->v) = 0x0;
                                        return 0xC300AF4;
                                    }
                                } else {
                                    if (0x0 != 0) {
                                        (((struct o1C_uint *)0xC300C2C)->v) = 0x0;
                                        return t1112;
                                    }
                                }
                            }
                        }
                        kmiWriteRegister(0x8, 0x1);
                        kmiWriteRegister(0x8, 0x0);
                        kmiWriteRegister(0x124, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D48))));
                        kmiWriteRegister(0x12C, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D4C))));
                        kmiWriteRegister(0x128, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D54))));
                        kmiWriteRegister(0x130, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D58))));
                        kmiWriteRegister(0x164, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D50))));
                        kmiWriteRegister(0x144, 0x80000000);
                        kmiReadRegister(0x144);
                        (((struct o10_uint *)0xC300C2C)->v) = 0x0;
                        (((struct oC_uint *)0xC300C2C)->v) = (*(int *)0xC300D38);
                        (((struct o8_uint *)0xC300C2C)->v) = ((((struct o0_int *)0xC300C2C)->v));
                        (((struct o4_uint *)0xC300AD8)->v) = 0x1;
                        (((struct o20_uint *)0xC300C2C)->v) = 0x1;
                        *(unsigned int *)(((((((struct o0_int *)0xC300C2C)->v)) << 2) + 0xC300C1C)) = 0x2;
                        return 0x0;
                    }
                }
                t1175 = 0xC300AF4;
                t1179 = 0x1;
            }
            if (t1179 != 0) {
                (((struct o0_uint *)0xC300AD8)->v) = 0x0;
                t1259 = t1175;
            } else {
                (((struct o1C_uint *)0xC300C2C)->v) = 0x1;
                *(unsigned int *)(((int)stk + 12)) = ((((struct o0_int *)0xC300B84)->v));
                *(unsigned int *)(((int)stk + 0)) = ((((struct o4_int *)0xC300B84)->v));
                t1182 = *(int *)((a4 + 0x10));
                *(unsigned int *)(((int)stk + 8)) = t1182;
                t1184 = *(int *)((a4 + 0xC));
                if ((unsigned int)t1182 > (unsigned int)((((struct o4_int *)0xC300918)->v))) {
                    t1188 = ((((struct o4_int *)0xC300918)->v));
                } else {
                    t1188 = (*(int *)(((int)stk + 8)));
                }
                *(unsigned int *)(((int)stk + 4)) = t1184;
                if ((unsigned int)t1184 > (unsigned int)((((struct o0_int *)0xC300918)->v))) {
                    t1194 = ((((struct o0_int *)0xC300918)->v));
                } else {
                    t1194 = (*(int *)(((int)stk + 4)));
                }
                kmSetPixelClipping(0x0, 0x0, t1194, t1188);
                (((struct o8_uint *)0xC300DD8)->v) = ((((struct o0_int *)0xC300B84)->v));
                (((struct oC_uint *)0xC300DD8)->v) = ((((struct o4_int *)0xC300B84)->v));
                (((struct o0_uint *)0xC300B84)->v) = (*(int *)(((int)stk + 12)));
                (((struct o4_uint *)0xC300B84)->v) = (*(int *)(((int)stk + 0)));
                t1228 = kmiStartRenderTextureEntry(0xC300DD4, 0x0, 0x0, 0x0);
                (((struct o14_uint *)0xC300C2C)->v) = 0x0;
                t1230 = 0x0;
                if (((((struct o0_int *)0xC300AD8)->v)) != 0) {
                    for (;;) {
                        t1205 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))(((((struct o0_int *)0xC300B38)->v))))(((((struct o4_int *)0xC300B38)->v)), a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
                        if ((unsigned int)((((struct o14_int *)0xC300C2C)->v)) > (unsigned int)((((struct o1C_int *)0xC300AD8)->v))) {
                            break;
                        }
                        if (((((struct o0_int *)0xC300AD8)->v)) == 0) {
                            if (0x0 != 0) {
                                (((struct o1C_uint *)0xC300C2C)->v) = 0x0;
                                return 0xC300AF4;
                            }
                            kmiWriteRegister(0x8, 0x1);
                            kmiWriteRegister(0x8, 0x0);
                            kmiWriteRegister(0x124, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D48))));
                            kmiWriteRegister(0x12C, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D4C))));
                            kmiWriteRegister(0x128, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D54))));
                            kmiWriteRegister(0x130, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D58))));
                            kmiWriteRegister(0x164, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D50))));
                            kmiWriteRegister(0x144, 0x80000000);
                            kmiReadRegister(0x144);
                            (((struct o10_uint *)0xC300C2C)->v) = 0x0;
                            (((struct oC_uint *)0xC300C2C)->v) = (*(int *)0xC300D38);
                            (((struct o8_uint *)0xC300C2C)->v) = ((((struct o0_int *)0xC300C2C)->v));
                            (((struct o4_uint *)0xC300AD8)->v) = 0x1;
                            (((struct o20_uint *)0xC300C2C)->v) = 0x1;
                            *(unsigned int *)(((((((struct o0_int *)0xC300C2C)->v)) << 2) + 0xC300C1C)) = 0x2;
                            return 0x0;
                        }
                    }
                    t1228 = 0xC300AF4;
                    t1230 = 0x1;
                }
                if (t1230 != 0) {
                    (((struct o1C_uint *)0xC300C2C)->v) = 0x0;
                    t1259 = t1228;
                } else {
                    kmiWriteRegister(0x8, 0x1);
                    kmiWriteRegister(0x8, 0x0);
                    kmiWriteRegister(0x124, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D48))));
                    kmiWriteRegister(0x12C, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D4C))));
                    kmiWriteRegister(0x128, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D54))));
                    kmiWriteRegister(0x130, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D58))));
                    kmiWriteRegister(0x164, (*(int *)((((((t5 & 0x1) << 2) << 2) << 1) + 0xC300D50))));
                    kmiWriteRegister(0x144, 0x80000000);
                    kmiReadRegister(0x144);
                    (((struct o10_uint *)0xC300C2C)->v) = 0x0;
                    (((struct oC_uint *)0xC300C2C)->v) = (*(int *)0xC300D38);
                    (((struct o8_uint *)0xC300C2C)->v) = ((((struct o0_int *)0xC300C2C)->v));
                    (((struct o4_uint *)0xC300AD8)->v) = 0x1;
                    (((struct o20_uint *)0xC300C2C)->v) = 0x1;
                    *(unsigned int *)(((((((struct o0_int *)0xC300C2C)->v)) << 2) + 0xC300C1C)) = 0x2;
                    t1259 = 0x0;
                }
            }
            t1267 = t1259;
        }
        t1276 = t1267;
    }
    return t1276;
}

int FUN_0c03650c(int a4, int a5)
{
    register int t0;
    register int t1;

    if (a4 == 0) {
    } else {
        t0 = FUN_0c035a5e(0x0, 0x0, (float)(((((struct o8_int *)0xC2A5858)->v)) + 0x1D8), 184.0f);
        if (t0 != 2) {
        } else {
            FUN_0c033578(0x23, 0xC0C0238, (float)(((((struct o8_int *)0xC2A5858)->v)) + 0x190), 232.0f, 1.0f);
            FUN_0c033578(0x20, 0xC0C0244, (float)(((((struct o8_int *)0xC2A5858)->v)) + 0x1FE), 232.0f, 1.0f);
            FUN_0c033578(0x40023, ((((a5 << 2) << 2) << 1) + 0xC0B6450), (float)(((((struct o8_int *)0xC2A5858)->v)) + 0x148), 120.0f, 1.0f);
            FUN_0c033578(0x23, 0xC0C0254, (float)(((((struct o8_int *)0xC2A5858)->v)) + 0x148), 146.0f, 1.0f);
            if ((a5 - 1) != 0) {
                if ((a5 - 1) != 1) {
                    t0 = 0x0;
                    if ((a5 - 1) != 3) {
                    } else {
                        t0 = ((((struct o8_int *)0xC12B848)->v));
                    }
                    t1 = t0;
                } else {
                    t1 = ((((struct o4_int *)0xC12B848)->v));
                }
                t0 = t1;
            } else {
                t0 = ((((struct o0_int *)0xC12B848)->v));
            }
            FUN_0c0345ec(0x24, (unsigned char)(*(signed char *)((((((a5 - 1) << 1) + (a5 - 1)) + 0xC0BFE84) + 0x0))), t0, (float)(((((struct o8_int *)0xC2A5858)->v)) + 0x158), ((((struct o0_float *)0xC036758)->v)), ((((struct o0_float *)0xC2A5858)->v)));
            FUN_0c0345ec(0x24, (unsigned char)(*(signed char *)((((((a5 - 1) << 1) + (a5 - 1)) + 0xC0BFE84) + 0x1))), t0, (float)(((((struct o8_int *)0xC2A5858)->v)) + 0x158), ((((struct o8_float *)0xC036758)->v)), ((((struct o0_float *)0xC2A5858)->v)));
            FUN_0c0345ec(0x24, (unsigned char)(*(signed char *)((((((a5 - 1) << 1) + (a5 - 1)) + 0xC0BFE84) + 0x2))), 0x0, (float)(0x158 + ((((struct o8_int *)0xC2A5858)->v))), ((((struct oC_float *)0xC036758)->v)), ((((struct o0_float *)0xC2A5858)->v)));
        }
        t0 = FUN_0c035a5e(0x1, 0x0, (float)(((((struct o8_int *)0xC2A5858)->v)) + 0x1F0), ((((struct o10_float *)0xC036758)->v)));
        t1 = t0;
        if (t0 == 2) {
            FUN_0c033578(0x23, 0xC0C025C, (float)(((((struct o8_int *)0xC2A5858)->v)) + 0x178), ((((struct o18_float *)0xC036758)->v)), 1.0f);
            t1 = (FUN_0c035560(0x220, 0xFFFFFFFF, (a5 + 0x7), 0x0, 0x4, 0x1, (float)(((((struct o8_int *)0xC2A5858)->v)) + 0x178), ((((struct o20_float *)0xC036758)->v))));
        }
        t0 = t1;
    }
    return t0;
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
    v0_7 = ((v0_0 & R14));
    v0_6 = (v0_2);
    if (((v0_0 & R14) == 0)) goto L_C01656C;
    if (((((((struct o28_int *)0xC177D0C)->v)) & R14) != 0)) goto L_C016618;
    L_C01656C:;
    if ((v0_7 != 0)) goto L_C016578;
    if (((((((struct o28_int *)0xC177D0C)->v)) & R14) == 0)) goto L_C016618;
    L_C016578:;
    if (((*(int *)((v0_3 + 0x4))) == -1)) goto L_C01659E;
    v0_7 = ((*(int *)(((int)stk + 4))));
    L_C016580:;
    v0_8 = *(int *)((v0_3 + 0x4));
    v0_9 = (v0_8);
    if ((v0_8 == (*(int *)0xC2ADEC4))) goto L_C016590;
    if ((v0_9 != (*(int *)((v0_7 + 0x0))))) goto L_C016592;
    L_C016590:;
    v0_6 = (R14);
    L_C016592:;
    v0_8 = (unsigned int)(v0_7 + 0x4) < (unsigned int)(*(int *)(((int)stk + 0)));
    v0_7 = ((v0_7 + 0x4));
    if (v0_8) goto L_C016580;
    L_C0165A0:;
    if ((v0_6 == 0)) goto L_C016618;
    FUN_0c07ff00();
    FUN_0c07ff00();
    *(float *)(((int)stk + 12)) = w0_0;
    *(float *)(((int)stk + 24)) = w0_0;
    w0_1 = nlLength((((int)stk + 0) + 0x14), (((int)stk + 0) + 0x8));
    w0_2 = (w0_1);
    if ((!(((((struct o4_float *)0xC177D0C)->v)) > w0_1))) goto L_C016618;
    *(unsigned int *)((v0_3 + 0x0)) = R14;
    FUN_0c01505c(v0_3, v0_5, w0_2);
    goto L_C016618;
    L_C01659E:;
    v0_6 = (R14);
    goto L_C0165A0;
}

int syExtChkInit(int a4)
{
    int stk[4];
    register int t68;
    register int t2;
    register int t3;
    register int t6;
    register int t12;
    register int t37;
    register int t43;
    register int t49;

    t68 = 0xFFFFFFFF;
    if (((((struct o0_int *)0xC173814)->v)) == 0) {
        syExtChkClearG2TimeOut();
        *(int *)((int)stk + 4) = 0x0;
        *(int *)((int)stk + 0) = 0x0;
        t2 = syG2Read(0xA0600004, (((int)stk + 0) + 0xC), 0x1, 0x1, 0x0, 0x0);
        t68 = 0xFFFFFFFF;
        if (t2 == 0) {
            *(int *)((int)stk + 4) = 0x0;
            *(int *)((int)stk + 0) = 0x0;
            t3 = syG2Read(0xA0600000, (((int)stk + 0) + 0x8), 0x1, 0x1, 0x0, 0x0);
            t68 = 0xFFFFFFFF;
            if (t3 != 0) {
            } else {
                if ((unsigned char)(*(signed char *)(((int)stk + 12))) == 16) {
                    (((struct oC_uint *)0xC173814)->v) = 0xFFFFFFFF;
                    t6 = *(signed char *)(((int)stk + 8));
                    if ((unsigned char)(t6 & 0xC0) == 0) {
                        (((struct o4_uint *)0xC173814)->v) = 0x1;
                    } else {
                        if ((unsigned char)(t6 & 0xC0) == 64) {
                            (((struct o4_uint *)0xC173814)->v) = 0x2;
                        } else {
                            (((struct o4_uint *)0xC173814)->v) = 0xFFFFFFFF;
                        }
                    }
                    t12 = *(signed char *)(((int)stk + 8));
                    if ((unsigned char)(t12 & 0xF) == 0) {
                        (((struct o8_uint *)0xC173814)->v) = 0x1;
                    } else {
                        if ((unsigned char)(t12 & 0xF) == 2) {
                            (((struct o8_uint *)0xC173814)->v) = 0x2;
                        } else {
                            if ((unsigned char)(t12 & 0xF) == 6) {
                                (((struct o8_uint *)0xC173814)->v) = 0x3;
                            } else {
                                if ((unsigned char)(t12 & 0xF) == 13) {
                                    (((struct o8_uint *)0xC173814)->v) = 0x4;
                                } else {
                                    (((struct o8_uint *)0xC173814)->v) = 0xFFFFFFFF;
                                }
                            }
                        }
                    }
                }
                if ((unsigned char)(*(signed char *)(((int)stk + 12))) == 18) {
                    (((struct o10_uint *)0xC173814)->v) = 0xFFFFFFFF;
                }
                t37 = syExtChkConnectSyncDev(0xA1000400);
                if (t37 == 1) {
                    syExtChkDisableInterrupt(0xA1000400);
                    syExtChkDisableSyncDev(0xA1000400);
                    (((struct o14_uint *)0xC173814)->v) = 0xFFFFFFFF;
                }
                t43 = syExtChkConnectSyncDev(0xA1000800);
                if (t43 == 1) {
                    syExtChkDisableInterrupt(0xA1000800);
                    syExtChkDisableSyncDev(0xA1000800);
                    (((struct o18_uint *)0xC173814)->v) = 0xFFFFFFFF;
                }
                t49 = syExtChkConnectSyncDev(0xA1001400);
                if (t49 == 1) {
                    syExtChkDisableInterrupt(0xA1001400);
                    syExtChkDisableSyncDev(0xA1001400);
                    (((struct o1C_uint *)0xC173814)->v) = 0xFFFFFFFF;
                }
                syExtChkClearG2TimeOut();
                (((struct o0_uint *)0xC173814)->v) = 0xFFFFFFFF;
                t68 = 0x0;
            }
        }
    }
    return t68;
}

int FUN_0c15ba7c(int a4, int a5, int a6)
{
    register int t2;
    register int t4;
    register int t6;
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register int t12;
    register int t13;
    int t15;
    int t17;
    register int t25;
    register int t22;
    register int t23;

    t2 = ((int (*)(int, int, int))(kmiWriteRegister))(0x124, (*(int *)(((((a6 << 2) << 2) << 1) + 0xC300D48))), a6);
    t4 = ((int (*)(int, int))(kmiWriteRegister))(0x12C, (*(int *)(((((a6 << 2) << 2) << 1) + 0xC300D4C))));
    t6 = ((int (*)(int, int))(kmiWriteRegister))(0x128, (*(int *)(((((a6 << 2) << 2) << 1) + 0xC300D54))));
    t8 = ((int (*)(int, int))(kmiWriteRegister))(0x130, (*(int *)(((((a6 << 2) << 2) << 1) + 0xC300D58))));
    t9 = ((int (*)(int, int))(kmiWriteRegister))(0x13C, ((((a5 - 1) << 16) + a4) - 1));
    t10 = (((struct o4_int *)0xC300D7C)->v);
    t11 = (((struct o8_int *)0xC300D7C)->v);
    t12 = (((struct oC_int *)0xC300D7C)->v);
    t13 = (((struct o10_int *)0xC300D7C)->v);
    if ((*(int *)0xC3008D0) == 6) {
        t15 = (((struct o0_int *)0xC300D7C)->v);
        t22 = ((((((t10 & 0x3) | (((t11 & 0x3) << 2) << 2)) | ((t12 & 0x3) << 8)) | ((((t13 & 0x3) << 8) << 2) << 2)) | ((((0x1 & t15) << 16) << 2) << 2)) | ((0x3 & ((((struct o14_int *)0xC300D7C)->v))) << 16));
        t23 = ((((0x1 & t15) << 16) << 2) << 2);
    } else {
        t17 = (((struct o0_int *)0xC300D7C)->v);
        t22 = (((((t10 & 0x3) | (((t11 & 0x3) << 2) << 2)) | ((t12 & 0x3) << 8)) | ((((t13 & 0x3) << 8) << 2) << 2)) | ((0x1 & t17) << 16));
        t23 = ((0x1 & t17) << 16);
    }
    t25 = ((int (*)(int, int, int))(kmiWriteRegister))(0x140, t22, t23);
    return (((int (*)(int, int))(kmiWriteRegister))(0x144, 0x80000000));
}

int kmfSetVirticalFilterMode(int a4)
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
    register int t9;
    register int t10;
    register int t11;

    t3 = (((struct o3C_int *)0xC3008F0)->v);
    t4 = *(int *)0xC300930;
    t5 = (((struct o24_int *)0xC3008F0)->v);
    t6 = (((struct o18_int *)0xC300B78)->v);
    t7 = (((struct o0_int *)0xC300BD0)->v);
    t8 = t5;
    t9 = ((unsigned short)t7 & 0xFF00);
    t10 = t4;
    t11 = t3;
    if (a4 != 0) {
        t8 = t5;
        t9 = (unsigned short)t7;
        t10 = t4;
        t11 = t3;
        if (a4 != 1) {
            t8 = t5;
            t9 = (unsigned short)t7;
            t10 = t4;
            t11 = t3;
            if (a4 == 2) {
                t8 = t5;
                t5 = (unsigned short)t7;
                t10 = t4;
                t11 = t3;
                if (((((((struct o0_int *)0xC3008F0)->v)) & 3) == 0) && ((t0 = (((struct o0_int *)0xC3008F0)->v), (t0 & 32) != 0) && ((t1 = (((struct o0_int *)0xC3008F0)->v), (t1 & 0x1) == 1) || ((t2 = (((struct o0_int *)0xC3008F0)->v), (t2 & 0x2C) != 32) || (0x1 == 0))))) {
                    t8 = 0xD6;
                    t5 = 0x471;
                    t10 = (t4 + 0xC);
                    t11 = (t3 + 0xC);
                }
                t9 = t5;
            }
        }
    }
    t0 = (((struct o34_int *)0xC3008F0)->v);
    t1 = (((struct o34_int *)0xC3008F0)->v);
    kmiWaitVlank();
    kmiWriteRegister(0x44, (((((struct o20_int *)0xC300B78)->v)) & 0xFFFFFFFE));
    kmiWriteRegister(0xE8, (((((struct o4_int *)0xC300BD0)->v)) | 0x8));
    kmiWriteRegister(0xF0, ((t11 + t0) | ((t10 + t1) << 16)));
    kmiWriteRegister(0x5C, ((t6 & 0xFFF003FF) | (((t8 & 0x3FF) << 8) << 2)));
    kmiWriteRegister(0xF4, ((t7 & 0xFFFF0000) | t9));
    (((struct o0_uint *)0xC300B78)->v) = 0x1;
    return 0x0;
}

int FUN_0c061516(void)
{
    register float u12;
    int t19;

    if (((((struct o4_int *)0xC2B9C9C)->v)) == 0) {
        FUN_0c05f470(0xC2B9C1C, 0xC883820, 0.0f, 10.0f);
        (((struct o38_uint *)0xC2B9C20)->v) = (((((struct o38_int *)0xC2B9C20)->v)) | 0x80000000);
        (((struct o4_uint *)0xC2B9C9C)->v) = (((((struct o4_int *)0xC2B9C9C)->v)) + 0x1);
    }
    (((struct o4_float *)0xC2B9C20)->v) = ((_builtin_fabsf(((((struct o3C_float *)0xC1759D8)->v))) * 2.5f) / 3.5f);
    if (0.0f > ((((struct o4_float *)0xC2B9C20)->v))) {
        (((struct o4_float *)0xC2B9C20)->v) = 0.0f;
    } else {
        u12 = (((struct o0_float *)0xC0616AC)->v);
        if (((((struct o4_float *)0xC2B9C20)->v)) > u12) {
            (((struct o4_float *)0xC2B9C20)->v) = u12;
        }
    }
    if ((((((struct o0_int *)0xC1759D8)->v)) != 0) && (t19 = *(signed char *)0xC2B9C5B, (t19 & 32) == 0)) {
        (((struct o0_uint *)0xC2B9C9C)->v) = 0x9;
        (((struct o4_uint *)0xC2B9C9C)->v) = 0x0;
    }
    FUN_0c05f98c();
    return FUN_0c05f9b0(((-((((struct o0_float *)0xC2B9C20)->v))) + ((((struct o10_float *)0xC0616AC)->v))));
}

int FUN_0c07bf7a(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t1;
    register int t15;
    register int t2;
    register int t3;
    register int t4;
    register int t7;
    register int t12;

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    t1 = FUN_0c07b864(a4, (*(int *)(((int)stk + 4))), 0x0, a7);
    t15 = t1;
    if (t1 != 0) {
    } else {
        t2 = *(int *)((a4 + 0x8));
        t3 = *(int *)0xC2C3EA4;
        t4 = *(int *)0xC2C3EA4;
        t7 = FUN_0c07b97e((*(int *)(((int)stk + 4))), (*(int *)((a4 + 0x4))), t2, ((int)stk + 0));
        *(unsigned int *)(((t4 + 0x1C) + 0x0)) = t7;
        *(unsigned int *)(((t3 + 0x18) + 0x0)) = t7;
        *(unsigned int *)(((*(int *)0xC2C3EA4) + 0x14)) = a4;
        *(unsigned int *)(((*(int *)0xC2C3EA4) + 0x0)) = 0x1;
        *(unsigned int *)(((*(int *)0xC2C3EA4) + 0x4)) = (*(int *)(((int)stk + 8)));
        t12 = *(int *)0xC2C3EA4;
        *(unsigned int *)((t12 + 0xC)) = t2;
        *(unsigned int *)((t12 + 0x8)) = t2;
        *(unsigned int *)(((*(int *)0xC2C3EA4) + 0x10)) = (*(int *)(((int)stk + 0)));
        t15 = 0x0;
    }
    return t15;
}

int nlMvSetWorkBuffer(int a4, int a5)
{
    register int t3;
    register int t4;
    register int t6;

    (((struct o0_uint *)0xC147668)->v) = (*(int *)((a5 + 0x4)));
    (((struct o4_uint *)0xC147668)->v) = (*(int *)((a5 + 0x8)));
    (((struct o8_uint *)0xC147668)->v) = (*(int *)((a5 + 0xC)));
    t3 = *(int *)((a5 + 0xC));
    t4 = *(int *)((a5 + 0x4));
    t6 = *(int *)((a5 + 0x8));
    (((struct o0_uint *)0xC2C3DD0)->v) = a4;
    (((struct o4_uint *)0xC2C3DD0)->v) = (a4 + (0x0 + ((t4 << 2) << 2)));
    (((struct o8_uint *)0xC2C3DD0)->v) = (a4 + ((0x0 + ((t4 << 2) << 2)) + ((t4 << 2) << 2)));
    (((struct oC_uint *)0xC2C3DD0)->v) = (a4 + (((0x0 + ((t4 << 2) << 2)) + ((t4 << 2) << 2)) + ((t4 << 2) << 2)));
    (((struct o10_uint *)0xC2C3DD0)->v) = (a4 + ((((0x0 + ((t4 << 2) << 2)) + ((t4 << 2) << 2)) + ((t4 << 2) << 2)) + ((t6 << 2) << 2)));
    (((struct o18_uint *)0xC2C3DD0)->v) = (a4 + (((((0x0 + ((t4 << 2) << 2)) + ((t4 << 2) << 2)) + ((t4 << 2) << 2)) + ((t6 << 2) << 2)) + ((t6 << 2) << 2)));
    (((struct o14_uint *)0xC2C3DD0)->v) = (a4 + ((((((0x0 + ((t4 << 2) << 2)) + ((t4 << 2) << 2)) + ((t4 << 2) << 2)) + ((t6 << 2) << 2)) + ((t6 << 2) << 2)) + (((t3 << 1) + t3) << 2)));
    kmSetCheapShadowMode((*(int *)((a5 + 0x10))));
    FUN_0c07a2c0();
    return kmUseAnotherModifier(0x1);
}

int kmfInitializeYUVConverter(int a4, int a5, int a6, int a7, int a8)
{
    register int t0;
    register int t1;

    t0 = 0x0;
    if (a5 == 3) {
        t0 = 0x1000000;
    }
    t1 = (0x10000 | (((((a8 - 1) & 0x3F) << 8) | ((a7 - 1) & 0x3F)) | t0));
    if (a6 == 0) {
        t1 = (((((a8 - 1) & 0x3F) << 8) | ((a7 - 1) & 0x3F)) | t0);
    }
    t0 = ((int (*)(int, int, int, int))(kmiWriteRegister))(0x14C, t1, a6, ((a7 - 1) & 0x3F));
    t0 = ((int (*)(int, int))(kmiWriteRegister))(0x148, (*(int *)((a4 + 0x1C))));
    return 0x0;
}

int kmiWriteDispModeRegisters(void)
{
    kmiWriteRegister(0x68, ((((struct o0_int *)0xC300B84)->v)));
    kmiWriteRegister(0x6C, ((((struct o4_int *)0xC300B84)->v)));
    kmiWriteRegister(0x5C, ((((struct oC_int *)0xC300B84)->v)));
    kmiWriteRegister(0x4C, ((((struct o10_int *)0xC300B84)->v)));
    kmiWriteRegister(0x118, ((((struct o0_int *)0xC300BCC)->v)));
    kmiWriteRegister(0xF4, ((((struct o4_int *)0xC300BCC)->v)));
    kmiWriteRegister(0x48, ((((struct o18_int *)0xC300B84)->v)));
    kmiWriteRegister(0x44, (((((struct o14_int *)0xC300B84)->v)) & 0xFFFFFFFE));
    return (kmiWriteRegister(0xE8, (((((struct o8_int *)0xC300BCC)->v)) | 0x8)));
}

int kmBlankScreen(int a4)
{
    register int t7;

    if (a4 == 1) {
        kmiWriteRegister(0x44, (((((struct o0_int *)0xC300B98)->v)) & 0xFFFFFFFE));
        t7 = (((((struct o3C_int *)0xC300B98)->v)) | 0x8);
    } else {
        kmiWriteRegister(0x44, (((((struct o0_int *)0xC300B98)->v)) & 0xFFFFFFFE));
        t7 = ((((struct o3C_int *)0xC300B98)->v));
    }
    kmiWriteRegister(0xE8, t7);
    kmiWriteRegister(0x44, ((((struct o0_int *)0xC300B98)->v)));
    return 0x0;
}

int kmiInitializeTA(void)
{
    kmiWriteRegister(0x8, 0x1);
    kmiWriteRegister(0x8, 0x0);
    kmiInitializeDMA();
    (((struct o0_uint *)0xC300D18)->v) = 0x800000;
    (((struct o8_uint *)0xC300D18)->v) = 0x600000;
    (((struct oC_uint *)0xC300D18)->v) = ((((struct o8_int *)0xC300D18)->v));
    (((struct o24_uint *)0xC300D18)->v) = ((unsigned int)((((struct o0_int *)0xC300D18)->v)) >> 1);
    (((struct o0_uint *)0xC300D5C)->v) = 0x0;
    (((struct o20_uint *)0xC300D5C)->v) = 0x1;
    return 0xC300D3C;
}

int kmSetPaletteMode(int a4)
{
    if ((0xFFFFFFFC & a4) == 0) {
        *(unsigned int *)0xC30096C = a4;
        kmiWriteRegister(0x108, a4);
    }
    return 0x0;
}
