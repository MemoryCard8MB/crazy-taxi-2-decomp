/* Straight-line functions with calls and guards (batch gen_ce): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o108_int { char p[0x108]; int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o164_float { char p[0x164]; float v; };
struct o16C_float { char p[0x16C]; float v; };
struct o170_float { char p[0x170]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o184_float { char p[0x184]; float v; };
struct o188_float { char p[0x188]; float v; };
struct o18C_int { char p[0x18C]; int v; };
struct o190_float { char p[0x190]; float v; };
struct o194_float { char p[0x194]; float v; };
struct o1A4_int { char p[0x1A4]; int v; };
struct o20_float { char p[0x20]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2A_short { char p[0x2A]; short v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o30_int { char p[0x30]; int v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o3A_short { char p[0x3A]; short v; };
struct o3A_ushort { char p[0x3A]; unsigned short v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_int { char p[0x40]; int v; };
struct o44_int { char p[0x44]; int v; };
struct o48_ushort { char p[0x48]; unsigned short v; };
struct o50_ushort { char p[0x50]; unsigned short v; };
struct o74_int { char p[0x74]; int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o84_int { char p[0x84]; int v; };
struct o88_short { char p[0x88]; short v; };
struct o8A_short { char p[0x8A]; short v; };
struct o8C_short { char p[0x8C]; short v; };
struct o94_int { char p[0x94]; int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oF8_short { char p[0xF8]; short v; };
int ADXAMP_Destroy(int);
int ADXCRS_Lock(int);
int ADXCRS_Unlock(void);
int ADXPD_GetNumBlk(int);
int ADXRNA_Destroy(int);
int ADXSJD_Destroy(int);
int ADXSTM_Close(int);
int ADXT_SetOutVol(int, int);
int FUN_0c01e742(int);
int FUN_0c01ea8e(void);
int FUN_0c01eeda(int);
int FUN_0c026bd6(int);
int FUN_0c029b12(int, float);
int FUN_0c02a470(int, int);
int FUN_0c031e86(int, int, int, int);
int FUN_0c03209c(int, int, int, int, int, int);
int FUN_0c055b84(void);
int FUN_0c055dce(void);
int FUN_0c055e84(void);
int FUN_0c058ca6(int, int);
int FUN_0c058f64(int, int, int, int);
int FUN_0c05b596(int, int, int);
int FUN_0c05f4c8(int);
int FUN_0c06cbe2(void);
float FUN_0c072140(int);
float FUN_0c072148(int);
int FUN_0c0721f0(int, int);
int FUN_0c072230(int, int);
int FUN_0c072290(int, int);
int FUN_0c072600(int);
int FUN_0c072fe0(void);
int FUN_0c073360(void);
int FUN_0c073a30(float, float, float);
int FUN_0c073a40(int);
int FUN_0c073a60(int);
float FUN_0c073b40(int, int);
int FUN_0c073c40(int, int, float);
int FUN_0c07ada0(int);
int FUN_0c07b650(int);
int FUN_0c07fdc8(void);
int FUN_0c07ff00(void);
int FUN_0c14e8e4(int, int, int, int);
int FUN_0c165878(int);
int Result_Face_Put(void);
int Voice_ShutUp(int);
extern void _builtin_ftrv(float *, float *);
extern int _builtin_get_imask(void);
extern void _builtin_prefetch(void *);
extern void _builtin_set_imask(int);
int bcd2bin(int);
int bcdtime2fad(int);
int buGetFileSize(int, int);
float carGripCurve(float);
float carSlipRatio(float, float);
int crcchk(int, int, int, int);
int gdFsReopenHn(int, int, int, int);
int gdc_GetVolGainMute(int);
int kmFreeTexture(int);
int kmiMemCopy8(int, int, int);
int memcpy(int, int, int, int);
int memset(int, int, int);
extern int nlCommonTextureClearTextureIndex();
int nlFree(int, int, int, int);
int nlFreePalette(int, int, int, int);
int nlGetMatrix(int);
int nlLineCalcColor(int, int);
int nlLineClipNear(int, int);
int nlLineDrawThick(int, int, int, int);
int nlLineSendHeader(int);
int nlMalloc(int);
int nlMultiMatrix(int);
int nlMultiMatrix8(int);
int nlMvClipEdge(int, int, int);
int nlMvGetFaceVerts(int, int, int, int);
int nlMvPutFaceClip(int, int, int, int);
int nlObjPutUseViewMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlRotateV(int, int);
int nlSubVector3op(int, int, int);
float nlUnitVectorsd(int, int);
int FUN_0c02a5ca(int a4);
float nlObjPutCheapEnvMap(int a4);
int nlMultiLineSub(int a4, int a5);
void ADXT_Destroy(int a4, int a5, int a6, int a7);
int FUN_0c05fab8(float f4, float f5);
int nlMvPutPolygon(int a4, int a5, int a6, int a7);
int FUN_0c052c00(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8);
int nlSpriteFreeTextureOnce_Sub(int a4, int a5, int a6, int a7);
int gdFsDaReleaseG(int a4, int a5, int a6, int a7);
int kmChangeContextSRCBlendMode(int a4);
int FUN_0c01eb14(void);
int FUN_0c04ede4(int a4, int a5, int a6);
int FUN_0c07dfb0(int a4, int a5, int a6);
int gdDecSubcode(int a4, int a5, int a6, int a7);
int ADXB_EndDecode(int a4);
int FUN_0c032210(int a4, int a5, int a6, int a7, int a8, int a9, int a10);
int FUN_0c055c18(void);
int FUN_0c01f4ca(int a4, int a5, float f4);
float FUN_0c0128ec(int a4);
int FUN_0c04e03c(void);
int kmiFinalizeRender(int a4, int a5, int a6);
int FUN_0c07d2aa(int a4, int a5, int a6, int a7);
int FUN_0c027096(void);

int FUN_0c02a5ca(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    FUN_0c07fdc8();
    FUN_0c07fdc8();
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

float nlObjPutCheapEnvMap(int a4)
{
    float u38;
    float u83;
    float u35[4];
    float u80[4];

    int R0;
    int R1;
    int R6;
    register float F0;
    register float F2;
    register float F3;
    register float F4;
    register float F5;
    register float F6;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    register float w0_5;
    v0_0 = a4;
    v0_1 = (int)(*(int *)((v0_0 + 0x0))) < 0;
    R0 = (0xC075F7C);
    v0_3 = ((*(signed char *)(((v0_0 + 0x3C) + 0x0))));
    v0_0 = ((v0_0 + 0x3C));
    w0_0 = (0.5f);
    if (v0_1) goto L_C075ED6;
    R1 = ((*(int *)(((v0_0 + 0x2C) + 0x0))));
    v0_0 = (((v0_0 + 0x2C) + 0x4));
    R6 = (0xFFFFFFFE);
    v0_1 = ((*(int *)(((R0 + 0x4) + 0x0))));
    w0_1 = ((*(float *)((R0 + 0x0))));
    L_C075E68:;
    if ((v0_3 == R6)) goto L_C075EEA;
    if (((v0_1 & R1) == 0)) goto L_C075EEA;
    if (((int)v0_3 <= (int)R6)) goto L_C075EF2;
    L_C075E74:;
    v0_2 = (*(int *)((v0_0 + 0x0)));
    v0_0 = ((v0_0 + 0x4));
    v0_2 = v0_2;
    F0 = (w0_0);
    if (((R1 & 8) == 0)) goto L_C075E84;
    v0_2 = (((v0_2 << 1) + v0_2));
    L_C075E84:;
    v0_3 = ((*(int *)((v0_0 + 0x0))));
    L_C075E86:;
    R0 = (0x1);
    v0_0 = ((v0_0 + 0xC));
    w0_2 = (0.0f);
    if (((v0_3 & 0x1) == 0)) goto L_C075EDA;
    w0_3 = *(float *)((v0_0 + 0x0));
    w0_4 = (((struct o4_float *)(v0_0))->v);
    w0_5 = (((struct o4_float *)((v0_0 + 0x4)))->v);
    v0_3 = *(int *)(((((v0_0 + 0x4) + 0x4) + 0x8) + 0x0));
    _builtin_prefetch((void *)((((v0_0 + 0x4) + 0x4) + 0x8) + 0x24));
    u35[0] = w0_3;
    u35[1] = w0_4;
    u35[2] = w0_5;
    u35[3] = w0_2;
    _builtin_ftrv(u35, u35);
    w0_2 = w0_0;
    w0_2 = w0_2 + F0 * u35[0];
    w0_3 = w0_0;
    w0_3 = w0_3 + F0 * u35[1];
    u38 = w0_3;
    *(float *)(((((((v0_0 + 0x4) + 0x4) + 0x8) + 0x24) - 32) + 0xFFFFFFF8)) = w0_2;
    v0_4 = *(int *)(((((((v0_0 + 0x4) + 0x4) + 0x8) + 0x24) - 32) + 0x0));
    *(unsigned int *)(((((((v0_0 + 0x4) + 0x4) + 0x8) + 0x24) - 32) + 0xFFFFFFFC)) = ((v0_3 & R0) | ((*(int *)&u38) & R6));
    v0_5 = (v0_2 - 0x1) != 0;
    R0 = (0xFFFFFFFC);
    v0_3 = (v0_4);
    v0_0 = ((((((v0_0 + 0x4) + 0x4) + 0x8) + 0x24) - 32));
    v0_2 = ((v0_2 - 0x1));
    FPUL_ = ((*(int *)&u38));
    if (v0_5) goto L_C075E86;
    L_C075EC2:;
    R1 = ((*(int *)((v0_0 + 0x0))));
    v0_0 = ((v0_0 + 0x4));
    L_C075EC4:;
    if (((int)R1 > 0)) goto L_C075E74;
    if ((R1 == 0)) goto L_C075ED6;
    R1 = ((*(int *)((((v0_0 + 0x20) + 0x2C) + 0x0))));
    v0_3 = ((*(signed char *)(((v0_0 + 0x20) + 0x0))));
    v0_0 = ((((v0_0 + 0x20) + 0x2C) + 0x4));
    goto L_C075E68;
    L_C075ED6:;
    return F0;
    L_C075EDA:;
    _builtin_prefetch((void *)(v0_0 + 0x20));
    v0_3 = (v0_2 - 0x1) != 0;
    R0 = ((v0_0 + 0x20));
    v0_0 = ((v0_0 - 4));
    v0_2 = ((v0_2 - 0x1));
    if (v0_3) goto L_C075E84;
    R1 = ((*(int *)((v0_0 + 0x0))));
    v0_0 = ((v0_0 + 0x4));
    goto L_C075EC4;
    L_C075EF2:;
    v0_2 = (*(int *)((v0_0 + 0x0)));
    v0_0 = ((v0_0 + 0x4));
    v0_2 = v0_2;
    F0 = (w0_1);
    if (((R1 & 8) == 0)) goto L_C075F02;
    v0_2 = (((v0_2 << 1) + v0_2));
    L_C075F02:;
    v0_3 = ((*(int *)((v0_0 + 0x0))));
    L_C075F04:;
    R0 = (0x1);
    v0_4 = ((*(int *)((v0_0 + 0xC))));
    v0_0 = ((v0_0 + 0xD));
    if (((v0_3 & 0x1) == 0)) goto L_C075F66;
    v0_5 = *(signed char *)((v0_0 + 0x0));
    v0_6 = *(signed char *)(((v0_0 + 0x1) + 0x0));
    v0_3 = *(int *)((((v0_0 + 0x1) + 0xE) + 0x0));
    _builtin_prefetch((void *)(((v0_0 + 0x1) + 0xE) + 0x24));
    u80[0] = (float)v0_6;
    u80[1] = (float)v0_5;
    u80[2] = (float)(signed char)v0_4;
    u80[3] = 0.0f;
    _builtin_ftrv(u80, u80);
    w0_2 = w0_0;
    w0_2 = w0_2 + F0 * u80[0];
    w0_3 = w0_0;
    w0_3 = w0_3 + F0 * u80[1];
    u83 = w0_3;
    *(float *)((((((v0_0 + 0x1) + 0xE) + 0x24) - 32) + 0xFFFFFFF8)) = w0_2;
    v0_4 = *(int *)((((((v0_0 + 0x1) + 0xE) + 0x24) - 32) + 0x0));
    *(unsigned int *)((((((v0_0 + 0x1) + 0xE) + 0x24) - 32) + 0xFFFFFFFC)) = ((v0_3 & R0) | ((*(int *)&u83) & R6));
    v0_5 = (v0_2 - 0x1) != 0;
    R0 = (0xFFFFFFFC);
    v0_3 = (v0_4);
    v0_0 = (((((v0_0 + 0x1) + 0xE) + 0x24) - 32));
    v0_2 = ((v0_2 - 0x1));
    FPUL_ = ((*(int *)&u83));
    if (v0_5) goto L_C075F04;
    R1 = ((*(int *)((v0_0 + 0x0))));
    v0_0 = ((v0_0 + 0x4));
    L_C075F50:;
    if (((int)R1 > 0)) goto L_C075EF2;
    if ((R1 == 0)) goto L_C075F62;
    R1 = ((*(int *)((((v0_0 + 0x20) + 0x2C) + 0x0))));
    v0_3 = ((*(signed char *)(((v0_0 + 0x20) + 0x0))));
    v0_0 = ((((v0_0 + 0x20) + 0x2C) + 0x4));
    goto L_C075E68;
    L_C075F62:;
    return F0;
    L_C075F66:;
    _builtin_prefetch((void *)(v0_0 + 0x20));
    v0_3 = (v0_2 - 0x1) != 0;
    R0 = ((v0_0 + 0x20));
    v0_0 = ((v0_0 - 5));
    v0_2 = ((v0_2 - 0x1));
    if (v0_3) goto L_C075F02;
    R1 = ((*(int *)((v0_0 + 0x0))));
    v0_0 = ((v0_0 + 0x4));
    goto L_C075F50;
    L_C075EEA:;
    v0_2 = *(int *)(((v0_0 - 8) + 0x0));
    R0 = (v0_2);
    v0_0 = ((((v0_0 - 8) + 0x4) + v0_2));
    goto L_C075EC2;
}

int nlMultiLineSub(int a4, int a5)
{
    int stk[9];
    register int t10;
    register int t12;
    register int t16;
    register int t17;
    register int t20;
    register float u25;
    register float u26;
    register float u29;
    register float u30;
    register float u33;
    register float u34;
    register float u35;
    register float u38;
    register float u40;
    register float u42;
    register int t47;
    register int t48;
    register int t11;
    register int t13;
    register int t14;

    t16 = nlLineSendHeader(a5);
    nlPushMatrix(0xC1475E8);
    nlMultiMatrix8(((((struct oC_int *)0xC2BF960)->v)));
    if ((0x2 & a5) != 0) {
        nlMultiMatrix8(((((struct o0_int *)0xC2BF960)->v)));
    }
    t10 = (FUN_0c072fe0());
    t12 = t11;
    t17 = a4;
    for (;;) {
        if ((*(int *)((t17 + 0x0))) == 0) {
            break;
        }
        t13 = (*(int *)((t17 + 0x0)));
        t17 = (t17 + 0x4);
        t12 = 0x0;
        t20 = *(int *)((t17 + 0x0));
        t17 = (t17 + 0x4);
        *(unsigned int *)(((int)stk + 0)) = t20;
        t14 = t12;
        for (;;) {
            if ((unsigned int)t14 >= (unsigned int)t13) {
                break;
            }
            t12 = t17;
            t10 = (FUN_0c0721f0(t12, (((int)stk + 0) + 0x14)));
            t12 = t17;
            t12 = (t12 + 0xC);
            t10 = (FUN_0c0721f0(t12, (((int)stk + 0) + 0x4)));
            t12 = ((int)stk + 0);
            t12 = (t12 + 0x14);
            t10 = (nlLineClipNear(t12, (((int)stk + 0) + 0x4)));
            if (t10 != 0) {
                t12 = ((int)stk + 0);
                t12 = (t12 + 0x14);
                t10 = (nlLineCalcColor(t12, (((int)stk + 0) + 0x4)));
                if (t10 != 0) {
                    t10 = 0x1C;
                    u25 = *(float *)((((int)stk + 0) + t10));
                    t10 = 0x14;
                    t12 = 0xC2C3D9C;
                    u26 = *(float *)((((int)stk + 0) + t10));
                    t10 = 0x14;
                    u29 = (*(float *)((t12 + 0x0)));
                    u29 = u29 + ((1.0f / u25)) * u26;
                    *(float *)((((int)stk + 0) + t10)) = u29;
                    t10 = 0x18;
                    u30 = *(float *)((((int)stk + 0) + t10));
                    t10 = 0x18;
                    u33 = (*(float *)0xC2C3DA0);
                    u33 = u33 + ((1.0f / u25)) * u30;
                    *(float *)((((int)stk + 0) + t10)) = u33;
                    t10 = 0xC;
                    u34 = *(float *)((((int)stk + 0) + t10));
                    t10 = 0x4;
                    u35 = *(float *)((((int)stk + 0) + t10));
                    t10 = 0x4;
                    u38 = (*(float *)((t12 + 0x0)));
                    u38 = u38 + ((1.0f / u34)) * u35;
                    *(float *)((((int)stk + 0) + t10)) = u38;
                    t10 = 0x8;
                    u40 = *(float *)((((int)stk + 0) + t10));
                    t10 = 0x8;
                    u42 = (*(float *)0xC2C3DA0);
                    u42 = u42 + ((1.0f / u34)) * u40;
                    *(float *)((((int)stk + 0) + t10)) = u42;
                    t12 = t16;
                    t10 = (nlLineDrawThick(t12, (((int)stk + 0) + 0x14), (((int)stk + 0) + 0x4), ((int)stk + 0)));
                    t16 = t10;
                }
            }
            t14 = (t14 + 0x1);
            t17 = (t17 + 0xC);
        }
        t17 = (t17 + 0xC);
    }
    nlPopMatrix(0x1);
    t47 = *(int *)0xC2D0C3C;
    t48 = t47;
    if ((a5 & 0x1) != 0) {
        t48 = (t47 + 0x8);
    }
    *(unsigned int *)((t48 + 0x0)) = (((*(int *)((t48 + 0x0))) & 0xFC000000) | (t16 & 0x3FFFFFF));
    return 0x1;
}

void ADXT_Destroy(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    if (a4 == 0) {
        return;
    }
    if ((*(signed char *)((a4 + 0x0))) == 1) {
        FUN_0c14e8e4(a4, a5, a6, a7);
    } else {
        t0 = a4;
    }
    if ((*(int *)((a4 + 0xC))) != 0) {
        ADXRNA_Destroy((*(int *)((a4 + 0xC))));
    } else {
        t1 = t0;
    }
    if ((*(int *)((a4 + 0x4))) != 0) {
        ADXSJD_Destroy((*(int *)((a4 + 0x4))));
    } else {
        t0 = t1;
    }
    if ((*(int *)((a4 + 0x8))) != 0) {
        ADXSTM_Close((*(int *)((a4 + 0x8))));
    } else {
        t1 = t0;
    }
    ADXCRS_Lock(t1);
    t0 = (((struct o94_int *)(a4))->v);
    if (t0 != 0) {
        FUN_0c165878(((((struct o94_int *)(a4))->v)));
    } else {
        t1 = t0;
    }
    t0 = *(int *)((a4 + 0x10));
    if (t0 != 0) {
        t2 = *(int *)((a4 + 0x10));
        t3 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t2 + 0x0))) + 0xC)))))(t2, a5, a6, a7);
    } else {
        t2 = t0;
        t0 = t1;
    }
    t1 = t2;
    t2 = t0;
    t0 = 0x0;
    for (;;) {
        if ((int)t0 >= (int)(*(signed char *)((a4 + 0x3)))) {
            break;
        }
        t1 = a4;
        t3 = t0;
        t1 = (t1 + 0x18);
        t3 = (t3 << 2);
        t1 = (t1 + t3);
        t2 = (*(int *)((t1 + 0x0)));
        if (t2 != 0) {
            t4 = a4;
            t4 = (t4 + 0x18);
            t4 = (t4 + t3);
            t4 = (*(int *)((t4 + 0x0)));
            t2 = (*(int *)((t4 + 0x0)));
            t1 = (*(int *)((t2 + 0xC)));
            t5 = ((int (*)(int, int, int, int))(t1))(t4, a5, a6, a7);
        } else {
            t5 = t1;
        }
        t1 = t5;
        t2 = a4;
        t2 = (t2 + 0x78);
        t2 = (t2 + t3);
        t1 = (*(int *)((t2 + 0x0)));
        if (t1 != 0) {
            t4 = a4;
            t4 = (t4 + 0x78);
            t4 = (t4 + t3);
            t4 = (*(int *)((t4 + 0x0)));
            t2 = (*(int *)((t4 + 0x0)));
            t1 = (*(int *)((t2 + 0xC)));
            t5 = ((int (*)(int, int, int, int))(t1))(t4, a5, a6, a7);
        } else {
            t5 = t1;
        }
        t1 = t5;
        t2 = 0x80;
        t2 = (t2 + a4);
        t2 = (t2 + t3);
        t1 = (*(int *)((t2 + 0x0)));
        if (t1 != 0) {
            t4 = 0x80;
            t4 = (t4 + a4);
            t4 = (t4 + t3);
            t4 = (*(int *)((t4 + 0x0)));
            t2 = (*(int *)((t4 + 0x0)));
            t1 = (*(int *)((t2 + 0xC)));
            t3 = ((int (*)(int, int, int, int))(t1))(t4, a5, a6, a7);
        } else {
            t3 = t1;
            t4 = t2;
        }
        t0 = (t0 + 0x1);
        t1 = t3;
        t2 = t4;
    }
    if (((((struct o74_int *)(a4))->v)) != 0) {
        ADXAMP_Destroy(((((struct o74_int *)(a4))->v)));
    }
    memset(a4, 0x0, 0xA4);
    *(unsigned char *)((a4 + 0x0)) = 0x0;
    ADXCRS_Unlock();
}

int FUN_0c05fab8(float f4, float f5)
{
    int stk[28];
    register int t8;
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
    FUN_0c07ff00();
    t8 = FUN_0c029b12((((int)stk + 0) + 0x24), 5.0f);
    if ((*(int *)((t8 + 0x1C))) != -1) {
        FUN_0c07ff00();
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
    if ((*(int *)((t8 + 0x1C))) != -1) {
        FUN_0c026bd6((((int)stk + 0) + 0xC));
        FUN_0c073360();
        FUN_0c073a60(t8);
        nlRotateV(0xC10D9E0, (t8 + 0xC));
        FUN_0c05b596((((int)stk + 0) + 0xC), t8, (t8 + 0xC));
        nlObjPutUseViewMatrix(0xC4F4988);
        nlPopMatrix(0x1);
    }
    return (nlPopMatrix(0x1));
}

int nlMvPutPolygon(int a4, int a5, int a6, int a7)
{
    int stk[10];
    register int t2;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t12;
    register float t15;
    register int t17;
    register int t21;
    register int t25;
    register int t28;
    register int t4;
    register int t9;
    register int t10;
    register int t11;
    register float u13;
    register int t50;
    register int t51;
    register int t52;
    register float u53;
    register int t34;
    register int t35;
    register float u37;

    *(unsigned int *)(((int)stk + 24)) = a6;
    *(unsigned int *)(((int)stk + 0)) = ((((struct oC_int *)0xC2C3DDC)->v));
    *(unsigned int *)(((int)stk + 28)) = 0xC2C3DF0;
    t6 = *(int *)((a7 + 0x0));
    t2 = (((int)stk + 0) + 0x1C);
    if ((t6 & 0x1) != 0) {
        t2 = ((int)stk + 0);
    }
    t5 = 0xC2C3DE8;
    t7 = a5;
    t8 = a4;
    t12 = a5;
    for (;;) {
        if ((int)t12 <= 0) {
            break;
        }
        t5 = 0xC073B40;
        t7 = (*(int *)((t2 + 0x0)));
        t15 = FUN_0c073b40(t8, t7);
        u13 = 0.0f;
        if (u13 > t15) {
            t9 = t8;
            t10 = 0x3;
            t9 = (t9 + 0x12);
            for (;;) {
                t6 = 0xC2C3DE4;
                t11 = *(short *)((t9 + 0x0));
                t9 = (t9 + 0x2);
                t17 = *(int *)((t6 + 0x0));
                t5 = (*(signed char *)(((t17 + t11) + 0x0)));
                if (t5 != 0) {
                    t4 = 0x2;
                    *(unsigned char *)(((t17 + t11) + 0x0)) = t4;
                    t34 = t5;
                    t35 = t6;
                    u37 = u13;
                } else {
                    *(unsigned char *)(((t17 + t11) + 0x0)) = 0x1;
                    t5 = (*(int *)(((int)stk + 24)));
                    t21 = ((t11 << 2) + t5);
                    t5 = (*(short *)((((t11 << 2) + t5) + 0x0)));
                    *(unsigned int *)(((int)stk + 20)) = t5;
                    t4 = (*(short *)((t21 + 0x2)));
                    *(unsigned int *)(((int)stk + 4)) = t4;
                    *(unsigned int *)(((int)stk + 16)) = ((t11 << 2) << 2);
                    t7 = (*(int *)(((int)stk + 4)));
                    t7 = (t7 << 2);
                    t7 = (t7 << 2);
                    t6 = ((((struct o0_int *)0xC2C3DDC)->v));
                    *(unsigned int *)(((int)stk + 8)) = t7;
                    t25 = *(int *)(((int)stk + 20));
                    t4 = 0xC2C3DD0;
                    t5 = (*(int *)((t4 + 0x0)));
                    *(unsigned int *)(((int)stk + 12)) = ((t25 << 2) << 2);
                    t7 = (t7 + t5);
                    t4 = (nlMvClipEdge((((t25 << 2) << 2) + t5), t7, (((t11 << 2) << 2) + t6)));
                    t4 = 0xC2C3DD4;
                    t5 = 0xC2C3DE0;
                    t28 = *(int *)((t4 + 0x0));
                    t7 = (*(int *)(((int)stk + 8)));
                    t6 = (*(int *)((t5 + 0x0)));
                    t7 = (t7 + t28);
                    t4 = (nlMvClipEdge(((*(int *)(((int)stk + 12))) + t28), t7, ((*(int *)(((int)stk + 16))) + t6)));
                }
                u13 = u37;
                t10 = (t10 - 0x1);
                t5 = t34;
                t6 = t35;
                if (t10 == 0) {
                    break;
                }
            }
            t6 = 0xC2C3DDC;
            t7 = t8;
            t5 = 0xC2C3DD0;
            t7 = (t7 + 0xC);
            t4 = (nlMvGetFaceVerts((*(int *)((t5 + 0x0))), t7, (*(int *)((t6 + 0x0))), (t8 + 0x12)));
            t6 = 0xC2C3DE0;
            t7 = t8;
            t5 = 0xC2C3DD4;
            t7 = (t7 + 0xC);
            t11 = t4;
            t4 = (nlMvGetFaceVerts((*(int *)((t5 + 0x0))), t7, (*(int *)((t6 + 0x0))), (t8 + 0x12)));
            t6 = t11;
            t7 = t4;
            t6 = (t6 | t7);
            if (t6 != 0) {
                t4 = (nlMvPutFaceClip(t11, t7, (t8 + 0xC), (t8 + 0x12)));
            } else {
                t51 = t6;
                t52 = t7;
            }
            t50 = t4;
        } else {
            u53 = u13;
        }
        u13 = u53;
        t4 = t50;
        t5 = (*(int *)(((int)stk + 0)));
        t6 = t51;
        t7 = t52;
        t8 = (t8 + 0x18);
        t12 = (t12 - 1);
        t5 = (t5 + 0xC);
        *(unsigned int *)(((int)stk + 0)) = t5;
    }
    return t4;
}

int FUN_0c052c00(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8)
{
    register int t1;
    register int t2;
    register int t3;

    t1 = (((struct o30_int *)0xC2B28B4)->v);
    (((struct o30_uint *)0xC2B28B4)->v) = 0xA;
    if ((int)((((struct o0_int *)0xC2B2A2C)->v)) < (int)0xA) {
        (((struct o0_uint *)0xC2B2A2C)->v) = (((((struct o0_int *)0xC2B2A2C)->v)) + 0x1);
    } else {
        (((struct o0_uint *)0xC2B2A2C)->v) = 0xA;
    }
    t2 = (((struct o0_int *)0xC2B2A2C)->v);
    (((struct oC_float *)0xC2B28B4)->v) = ((float)t2 / 10.0f);
    (((struct o10_float *)0xC2B28B4)->v) = ((float)t2 / 10.0f);
    t2 = (((struct o10_int *)0xC2B2A2C)->v);
    if (t2 != 0) {
        if ((int)t2 > 0) {
            (((struct o10_uint *)0xC2B2A2C)->v) = (((((struct o10_int *)0xC2B2A2C)->v)) - 40);
        } else {
            (((struct o10_uint *)0xC2B2A2C)->v) = 0x0;
        }
        *(float *)0xC2B292C = 0.5f;
        (((struct o0_float *)0xC2B28B4)->v) = (float)(0x140 - ((((struct o10_int *)0xC2B2A2C)->v)));
        t2 = ((int (*)(int, int, int, int, float, float, float, float, float))(FUN_0c07ada0))(0xC2B28B0, 0xC2B2900, a6, a7, f4, f5, f6, f7, f8);
    } else {
        *(float *)0xC2B292C = 1.0f;
        t2 = 0xC2B2900;
    }
    (((struct o0_float *)0xC2B28B4)->v) = (float)(((((struct o10_int *)0xC2B2A2C)->v)) + 0x140);
    t3 = ((int (*)(int, int))(FUN_0c07ada0))(0xC2B28B0, t2);
    t2 = (((struct o0_int *)0xC2B2A2C)->v);
    t3 = t2;
    if ((t2 == 10) && (t3 = (((struct o4_int *)0xC2B2A2C)->v), t3 == 0)) {
        Voice_ShutUp(0x0);
        t3 = (((struct o14_int *)0xC2B2A2C)->v);
        if ((*(int *)0xC1EC720) != 2) {
            *(unsigned int *)0xC131FA0 = (*(int *)(((t3 << 2) + 0xC10C9BC)));
        } else {
            *(unsigned int *)0xC131FA0 = (*(int *)(((t3 << 2) + 0xC10C9D8)));
        }
        t3 = FUN_0c058f64(0xC131FA0, 0x0, 0x78, 0x0);
        (((struct o4_uint *)0xC2B2A2C)->v) = 0x1;
    }
    (((struct o30_uint *)0xC2B28B4)->v) = t1;
    return t3;
}

int nlSpriteFreeTextureOnce_Sub(int a4, int a5, int a6, int a7)
{
    int stk[2];

    register int R1;
    register int R2;
    register int R3;
    register int R9;
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
    v0_7 = a4;
    v0_0 = a6;
    v0_1 = a7;
    v0_7 = ((v0_7 + ((v0_0 << 2) << 2)));
    v0_4 = (((v0_0 << 2) << 2));
    if ((v0_1 != 1)) goto L_C07ABB2;
    v0_0 = ((*(int *)((v0_7 + 0xC))));
    L_C07ABB2:;
    v0_5 = *(int *)0xC2BF8E4;
    *(unsigned int *)(((int)stk + 0)) = (v0_0 + v0_5);
    v0_2 = (0xC2BB3E8);
    v0_3 = ((((v0_0 + v0_5) << 2) << 1));
    if (((unsigned int)(*(int *)((((*(int *)0xC2BB3E8) + (((v0_0 + v0_5) << 2) << 1)) + 0x0))) <= (unsigned int)0x0)) goto L_C07AC9A;
    v0_5 = *(int *)((v0_2 + 0x0));
    *(unsigned int *)(((v0_5 + v0_3) + 0x0)) = ((*(int *)(((v0_5 + v0_3) + 0x0))) - 1);
    if (((*(int *)((((*(int *)((v0_2 + 0x0))) + v0_3) + 0x0))) != 0)) goto L_C07AC9A;
    v0_7 = *(int *)((((*(int *)((v0_2 + 0x0))) + v0_3) + 0x4));
    v0_5 = (v0_7);
    v0_8 = (0xC2BF120);
    v0_6 = ((v0_7 * 0x3C));
    if (((*(int *)((((*(int *)0xC2BF120) + (v0_7 * 0x3C)) + 0x28))) != 0)) goto L_C07AC20;
    v0_9 = kmFreeTexture(((*(int *)((v0_8 + 0x0))) + v0_6));
    v0_7 = (v0_9);
    if ((v0_9 == 0)) goto L_C07AC20;
    (((struct o0_uint *)0xC2C3E2C)->v) = 0x2;
    v0_0 = (v0_7);
    L_C07AC9C:;
    return v0_0;
    L_C07AC20:;
    *(unsigned int *)((((*(int *)((v0_8 + 0x0))) + v0_6) + 0x2C)) = 0x0;
    *(unsigned int *)((((*(int *)((v0_8 + 0x0))) + v0_6) + 0x38)) = 0xFFFFFFFF;
    v0_6 = *(int *)(((int)stk + 0));
    *(unsigned int *)(((int)stk + 4)) = (v0_6 << 1);
    v0_6 = *(short *)(((v0_6 << 1) + ((((struct o4_int *)0xC2C3E2C)->v))));
    v0_4 = ((int (*)(int, int))(nlCommonTextureClearTextureIndex))(v0_5, v0_4);
    FUN_0c07b650(v0_6);
    *(unsigned int *)((((*(int *)((v0_2 + 0x0))) + v0_3) + 0x4)) = 0xFFFFFFFF;
    *(unsigned short *)((((((struct o4_int *)0xC2C3E2C)->v)) + (*(int *)(((int)stk + 4))))) = 0xFFFFFFFF;
    v0_6 = (v0_6);
    if (((*(int *)0xC147340) != 0)) goto L_C07AC9A;
    v0_2 = (((struct o14_int *)0xC2C3E2C)->v);
    v0_7 = ((unsigned short)(*(short *)((((((v0_6 << 2) << 2) << 1) + v0_2) + 0x16))));
    v0_4 = ((0x7 & ((unsigned int)(*(int *)((((((v0_6 << 2) << 2) << 1) + v0_2) + 0xC))) >> 27)));
    if (((*(int *)0xC2BFCC8) == 0)) goto L_C07AC9A;
    if ((v0_4 == 5)) goto L_C07AC8C;
    if ((v0_4 != 6)) goto L_C07AC9A;
    L_C07AC8C:;
    if (((int)v0_7 >= (int)(*(short *)0xC2C4DA4))) goto L_C07AC9A;
    nlFreePalette(v0_7, v0_4, v0_0, v0_1);
    L_C07AC9A:;
    v0_0 = (0x0);
    goto L_C07AC9C;
}

int gdFsDaReleaseG(int a4, int a5, int a6, int a7)
{
    register int t1;
    int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;

    t3 = gdFsReopenHn((*(int *)(((*(int *)0xC1737EC) + 0x14))), 0x0, 0x0, 0x0);
    t4 = 0xFFFFFFF3;
    if (t3 != 0) {
        t5 = _builtin_get_imask();
        _builtin_set_imask(0xF);
        t6 = *(int *)0xC1737EC;
        if ((((((struct o3A_short *)(t6))->v)) != 0) && (t4 = (((struct o10_int *)0xC2D0D04)->v), t1 = (((struct o14_int *)0xC2D0D04)->v), t4 != t1)) {
            (((struct o3A_ushort *)(t6))->v) = 0x0;
        }
        t4 = *(int *)0xC1737EC;
        if ((((((struct o3A_short *)(t4))->v)) != 0) && (t2 = *(int *)((t4 + 0x2C)), (int)t2 >= (int)0x10001)) {
            t1 = (((struct o8_int *)0xC2D0D04)->v);
            t2 = (((struct oC_int *)0xC2D0D04)->v);
            t6 = (((struct o4_int *)0xC2D0D04)->v);
            if (((((struct o0_int *)0xC2D0D04)->v)) == 1) {
                t7 = (*(int *)(((*(int *)((t4 + 0xC))) + 0x28)));
            } else {
                t7 = (*(int *)(((*(int *)((t4 + 0xC))) + 0x2C)));
            }
            t8 = ((int (*)(int, int, int, int))(t7))(t6, t1, t2, a7);
            if (t8 != 0) {
                *(unsigned int *)((t3 + 0x3C)) = t8;
                (((struct o50_ushort *)(t3))->v) = 0x4;
                *(unsigned int *)((t3 + 0x4)) = 0xC2D0D14;
                (((struct o48_ushort *)(t3))->v) = 0x8;
                *(unsigned int *)(((*(int *)((t3 + 0x0))) + 0x1C)) = t3;
                t1 = ((int (*)(void))(((((struct o40_int *)((*(int *)(((*(int *)0xC1737EC) + 0xC)))))->v))))();
            }
            t1 = t8;
        } else {
            t2 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t4 + 0xC))) + 0x34)))))(a4, a5, a6, a7);
            if (t2 != 0) {
                *(unsigned int *)((t3 + 0x3C)) = t2;
                (((struct o50_ushort *)(t3))->v) = 0x4;
                (((struct o48_ushort *)(t3))->v) = 0x6;
                *(unsigned int *)(((*(int *)((t3 + 0x0))) + 0x1C)) = t3;
                t4 = ((int (*)(void))(((((struct o40_int *)((*(int *)(((*(int *)0xC1737EC) + 0xC)))))->v))))();
            }
            t1 = t2;
        }
        _builtin_set_imask(((unsigned int)(((t5 & 0xF) << 2) << 2) >> 4));
        t4 = 0x0;
        if (t1 == 0) {
            t4 = 0xFFFFFFF3;
        }
    }
    return t4;
}

int kmChangeContextSRCBlendMode(int a4)
{
    if ((unsigned int)a4 < (unsigned int)0xC) {
        switch ((a4 << 1)) {
            case 0:
            {
                *(unsigned int *)0xC300E00 = ((0x1FFFFFFF & (*(int *)0xC300E00)) | 0xA0000000);
                *(unsigned int *)0xC300E00 = ((0xE3FFFFFF & (*(int *)0xC300E00)) | 0x10000000);
            }
                break;
            case 2:
            {
                *(unsigned int *)0xC300E00 = ((0x1FFFFFFF & (*(int *)0xC300E00)) | 0x80000000);
                *(unsigned int *)0xC300E00 = ((0xE3FFFFFF & (*(int *)0xC300E00)) | 0x14000000);
            }
                break;
            case 4:
            {
                *(unsigned int *)0xC300E00 = ((0x1FFFFFFF & (*(int *)0xC300E00)) | 0xC0000000);
            }
                break;
            case 6:
            {
                *(unsigned int *)0xC300E00 = ((0x1FFFFFFF & (*(int *)0xC300E00)) | 0x40000000);
            }
                break;
            case 8:
            {
                *(unsigned int *)0xC300E00 = ((0x1FFFFFFF & (*(int *)0xC300E00)) | 0xE0000000);
            }
                break;
            case 10:
            {
                *(unsigned int *)0xC300E00 = ((0x1FFFFFFF & (*(int *)0xC300E00)) | 0x60000000);
            }
                break;
            case 12:
            {
                *(unsigned int *)0xC300E00 = ((0x1FFFFFFF & (*(int *)0xC300E00)) | 0xA0000000);
            }
                break;
            case 14:
            case 18:
            {
            }
                break;
            case 16:
            {
                *(unsigned int *)0xC300E00 = ((0x1FFFFFFF & (*(int *)0xC300E00)) | 0x80000000);
            }
                break;
            case 20:
            {
                *(unsigned int *)0xC300E00 = ((0x1FFFFFFF & (*(int *)0xC300E00)) | 0x20000000);
            }
                break;
            default:
            {
                *(unsigned int *)0xC300E00 = (0x1FFFFFFF & (*(int *)0xC300E00));
            }
                break;
        }
    }
    *(unsigned int *)0xC17413C = (*(int *)0xC300E00);
    return 0x0;
}

int FUN_0c01eb14(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t4;

    t0 = *(signed char *)0xC1ECD50;
    if ((*(int *)0xC2A464C) == 1) {
        t1 = gdc_GetVolGainMute(t0);
        ADXT_SetOutVol((*(int *)0xC1ECD64), t1);
        *(unsigned int *)0xC11D0C4 = 0x1;
    } else {
        if ((*(int *)0xC11D0C4) == 1) {
            t1 = gdc_GetVolGainMute(t0);
            ADXT_SetOutVol((*(int *)0xC1ECD64), t1);
            *(unsigned int *)0xC11D0C4 = 0x0;
        }
    }
    t0 = (((struct o0_int *)0xC2690E4)->v);
    t1 = (((struct o4_int *)0xC2690E4)->v);
    if (t0 != 1) {
        t2 = t0;
        if (t0 != 2) {
        } else {
            t0 = (((struct o10_int *)0xC2690E4)->v);
            if ((int)t0 < (int)0x3C) {
                t2 = ((~(((~(t1 + 0x1)) + 0x1) & 0x3)) + 0x1);
                if ((int)(t1 + 0x1) >= 0) {
                    t2 = ((t1 + 0x1) & 0x3);
                }
                (((struct o4_uint *)0xC2690E4)->v) = t2;
                t2 = (FUN_0c01ea8e());
            } else {
                t4 = gdc_GetVolGainMute((int)(((float)t0 / (*(float *)0xC01ECE4)) * (float)(*(signed char *)0xC1ECD50)));
                t2 = (ADXT_SetOutVol((*(int *)0xC1ECD64), t4));
            }
            (((struct o10_uint *)0xC2690E4)->v) = (((((struct o10_int *)0xC2690E4)->v)) - 1);
        }
        t0 = t2;
    } else {
        t2 = FUN_0c01e742(0x0);
        if ((int)t2 >= (int)(*(int *)(((t1 << 2) + 0xC099888)))) {
            (((struct o0_uint *)0xC2690E4)->v) = 0x2;
            (((struct o10_uint *)0xC2690E4)->v) = 0xB4;
        }
        t0 = 0xC099888;
    }
    return t0;
}

int FUN_0c04ede4(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;

    t0 = (((struct o0_int *)0xC2B1CFC)->v);
    t1 = (((struct o4_int *)0xC2B1CFC)->v);
    if (t0 != 1) {
        if (t0 != 2) {
            t2 = t0;
            if (t0 != 3) {
            } else {
                (((struct o0_uint *)0xC2B1DA0)->v) = (*(int *)((0xC2B1D1C + ((*(int *)((t1 + 0x0))) << 2))));
                t3 = *(int *)((((((struct o4_int *)0xC2B1CFC)->v)) + 0x0));
                *(unsigned int *)((0xC2B1D1C + (t3 << 2))) = 0x0;
                (((struct o0_uint *)0xC2B1CFC)->v) = 0x4;
                t2 = (t3 << 2);
            }
            t3 = t2;
        } else {
            t2 = *(int *)0xC131E5C;
            *(unsigned int *)0xC131E5C = (t2 - 1);
            if ((int)(t2 - 1) <= 0) {
                (((struct o0_uint *)0xC2B1CFC)->v) = 0x3;
            }
            t3 = t0;
        }
        t0 = t3;
    } else {
        t2 = *(int *)((t1 + 0x0));
        if (t2 == 2) {
            t3 = *(int *)((t1 + 0x0));
            t1 = *(int *)((0xC2B1D1C + (t3 << 2)));
            if ((int)t1 >= (int)0x15) {
                if ((int)t1 > (int)0x62) {
                    (((struct o0_uint *)0xC2B1CFC)->v) = 0x2;
                    (((struct o4_uint *)0xC2B1DA0)->v) = 0x10;
                }
            } else {
                (((struct o0_uint *)0xC2B1CFC)->v) = 0x2;
                (((struct o4_uint *)0xC2B1DA0)->v) = 0x10;
            }
            t1 = (t3 << 2);
        } else {
            if (t2 == 3) {
                t3 = *(int *)((((((struct o4_int *)0xC2B1CFC)->v)) + 0x0));
                t4 = *(int *)((0xC2B1D1C + (t3 << 2)));
                if ((int)t4 >= (int)0x5) {
                    if (((int)t4 > (int)0x5C) && ((int)t4 <= (int)0x61)) {
                        (((struct o0_uint *)0xC2B1CFC)->v) = 0x2;
                        (((struct o4_uint *)0xC2B1DA0)->v) = 0x8;
                        t5 = 0x61;
                    } else {
                        t6 = FUN_0c06cbe2();
                        t7 = *(int *)(((0xC131E64 + (((*(int *)((((((struct o4_int *)0xC2B1CFC)->v)) + 0x0))) << 2) << 2)) + 0x0));
                        if ((int)t4 > (int)((*(int *)(((t6 + t7) + 0x0))) - 5)) {
                            (((struct o0_uint *)0xC2B1CFC)->v) = 0x2;
                            (((struct o4_uint *)0xC2B1DA0)->v) = 0x8;
                        }
                        t5 = (t6 + t7);
                    }
                    t4 = t5;
                } else {
                    (((struct o0_uint *)0xC2B1CFC)->v) = 0x2;
                    (((struct o4_uint *)0xC2B1DA0)->v) = 0x8;
                    t4 = (t3 << 2);
                }
                t3 = t4;
            } else {
                (((struct o0_uint *)0xC2B1CFC)->v) = 0x2;
                (((struct o4_uint *)0xC2B1DA0)->v) = 0x10;
                t3 = t2;
            }
            t1 = t3;
        }
        *(unsigned int *)0xC131E5C = (0x20 - ((((struct o4_int *)0xC2B1DA0)->v)));
        t0 = t1;
    }
    return t0;
}

int FUN_0c07dfb0(int a4, int a5, int a6)
{
    int stk[10];
    register int t0;
    register int t2;
    register int t4;
    register int t5;
    register int t9;
    register int t13;
    register int t43;
    register int t15;
    register int t16;
    register int t17;
    register int t35;
    register int t37;
    register int t39;
    register int t40;
    register int t27;
    register float u29;
    int R1000;
    int R1004;

    R1000 = *(int *)((int)stk + 0);
    R1004 = *(int *)((int)stk + 4);

    t0 = (((struct o8_int *)0xC2BBAC8)->v);
    t2 = *(int *)((t0 + 0x0));
    R1004 = (t2 << 2);
    t4 = *(int *)((t0 + 0x4));
    t5 = *(int *)(((t2 << 2) + ((((struct o0_int *)0xC2BBAC8)->v))));
    (((struct o0_uint *)0xFF000038)->v) = ((unsigned int)((unsigned int)t5 >> 16) >> 8);
    (((struct o4_uint *)0xFF000038)->v) = ((unsigned int)((unsigned int)t5 >> 16) >> 8);
    R1000 = ((t5 & 0x3FFFFFF) | 0xE0000000);
    kmiMemCopy8(((t5 & 0x3FFFFFF) | 0xE0000000), ((((struct o4_int *)0xC2BBAC8)->v)), t4);
    t15 = R1000;
    _builtin_prefetch((void *)t15);
    if (t4 == 64) {
        t9 = R1000;
        _builtin_prefetch((void *)(t9 + 0x20));
        t15 = (t9 + 0x20);
    }
    t43 = (((struct o0_int *)0xC2BBAC8)->v);
    t13 = R1004;
    *(unsigned int *)((t13 + t43)) = ((*(int *)((t13 + t43))) + (((unsigned int)t4 >> 2) << 2));
    *(unsigned int *)(((int)stk + 8)) = 0xE0000000;
    R1004 = ((((a5 << 2) << 1) + 0xC114078) + 0x4);
    if ((int)a4 > 0) {
        t16 = a4;
        t17 = a6;
        for (;;) {
            if (t16 == 1) {
                t15 = 0xF0000000;
                *(unsigned int *)(((int)stk + 8)) = t15;
            }
            if ((*(int *)0xC2C413C) != 0) {
                FUN_0c072230(t17, (((int)stk + 0) + 0xC));
                u29 = (*(float *)(((int)stk + 20)));
            } else {
                *(float *)(((int)stk + 12)) = (*(float *)((t17 + 0x0)));
                *(float *)(((int)stk + 16)) = ((((struct o4_float *)(t17))->v));
                t27 = t15;
                u29 = ((((struct o8_float *)(t17))->v));
            }
            t15 = t27;
            t15 = 0xFF000038;
            *(float *)(((int)stk + 20)) = (1.0f / u29);
            *(unsigned int *)(((int)stk + 32)) = (*(int *)((t17 + ((*(int *)(((R1004) + 0x0))) << 2))));
            t35 = *(int *)((((((struct o8_int *)0xC2BBAC8)->v)) + 0x0));
            R1000 = (t35 << 2);
            t37 = *(int *)(((t35 << 2) + ((((struct o0_int *)0xC2BBAC8)->v))));
            *(unsigned int *)((t15 + 0x0)) = ((unsigned int)((unsigned int)t37 >> 16) >> 8);
            (((struct o4_uint *)0xFF000038)->v) = ((unsigned int)((unsigned int)t37 >> 16) >> 8);
            kmiMemCopy8(((t37 & 0x3FFFFFF) | 0xE0000000), (((int)stk + 0) + 0x8), 0x20);
            _builtin_prefetch((void *)((t37 & 0x3FFFFFF) | 0xE0000000));
            t39 = (((struct o0_int *)0xC2BBAC8)->v);
            t16 = (t16 - 1);
            t40 = R1000;
            t15 = (*(int *)((t40 + t39)));
            t15 = (t15 + 0x20);
            *(unsigned int *)((t40 + t39)) = t15;
            t17 = (t17 + ((*(int *)(((((a5 << 2) << 1) + 0xC114078) + 0x0))) << 2));
            if ((int)t16 <= 0) {
                break;
            }
        }
        t43 = t39;
    }
    return t43;
}

int gdDecSubcode(int a4, int a5, int a6, int a7)
{
    int stk[8];
    register int t51;
    register int t37;
    register int t6;
    register int t7;
    register int t10;
    register int t19;
    register int t24;
    register int t25;
    register int t28;
    register int t5;

    t51 = 0xFFFFFFFF;
    if ((*(signed char *)((a4 + 0x0))) == 0) {
        t37 = 0xFFFFFFFE;
        if (((*(signed char *)((a4 + 0x3))) + ((*(signed char *)((a4 + 0x2))) << 8)) == 100) {
            t6 = 0x0;
            t7 = (a4 + 0x4);
            for (;;) {
                if ((int)t6 >= (int)0xC) {
                    t6 = ((unsigned char)(*(signed char *)((((((int)stk + 4) + 0x4) + 0xC) + 0xA))) << 8);
                    t6 = (t6 | (unsigned char)(*(signed char *)((((((int)stk + 4) + 0x4) + 0xC) + 0xB))));
                    t10 = crcchk(((((int)stk + 4) + 0x4) + 0xC), t6, 0x40, 0x0);
                    if (t10 != 0) {
                        return 0xFFFFFFFD;
                    }
                    *(unsigned int *)((a5 + 0x0)) = (bcd2bin((*(signed char *)(((((int)stk + 4) + 0x4) + 0xD)))));
                    *(unsigned int *)((a5 + 0x4)) = (bcd2bin((*(signed char *)(((((int)stk + 4) + 0x4) + 0xF)))));
                    *(unsigned int *)((a5 + 0x8)) = (bcd2bin((*(signed char *)(((((int)stk + 4) + 0x4) + 0x10)))));
                    *(unsigned int *)((a5 + 0xC)) = (bcd2bin((*(signed char *)(((((int)stk + 4) + 0x4) + 0x11)))));
                    *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 4) + 0x4) + 0xC);
                    t19 = *(signed char *)((((((int)stk + 4) + 0x4) + 0xC) + 0x0));
                    *(int *)((int)stk + 0) = ((t19 << 16) << 8);
                    *(unsigned int *)((a5 + 0x10)) = ((bcdtime2fad(((*(int *)(((int)stk + 4))) + 0x7))) | ((t19 << 16) << 8));
                    *(unsigned int *)((a5 + 0x14)) = (bcd2bin((*(signed char *)(((((int)stk + 4) + 0x4) + 0xE)))));
                    return 0x0;
                }
                *(unsigned char *)((((((int)stk + 4) + 0x4) + t6) + 0x0)) = 0x0;
                *(unsigned char *)(((((((int)stk + 4) + 0x4) + 0xC) + t6) + 0x0)) = 0x0;
                t24 = 0x7;
                for (;;) {
                    if (t24 == 7) {
                        t25 = *(signed char *)((t7 + 0x0));
                        t7 = (t7 + 0x1);
                        *(unsigned char *)(((((((int)stk + 4) + 0x4) + 0xC) + t6) + 0x0)) = ((*(signed char *)(((((((int)stk + 4) + 0x4) + 0xC) + t6) + 0x0))) | ((t25 & 0x40) << 1));
                    } else {
                        t28 = *(signed char *)((t7 + 0x0));
                        t7 = (t7 + 0x1);
                        t5 = (*(signed char *)(((((((int)stk + 4) + 0x4) + 0xC) + t6) + 0x0)));
                        t5 = (t5 | ((int)(t28 & 0x40) << (int)(-(0x6 - t24))));
                        *(unsigned char *)(((((((int)stk + 4) + 0x4) + 0xC) + t6) + 0x0)) = t5;
                    }
                    t24 = (t24 - 1);
                    if ((int)t24 < 0) {
                        break;
                    }
                }
                if (((*(signed char *)(((((int)stk + 4) + 0x4) + 0xC))) & 0xF) != 1) {
                    break;
                }
                t6 = (t6 + 0x1);
            }
            t37 = 0xFFFFFFFB;
        }
        t51 = t37;
    }
    return t51;
}

int ADXB_EndDecode(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t8;
    register int t10;
    register int t12;
    register int t14;

    t0 = *(int *)(((a4 + 0x50) + 0x10));
    t1 = *(int *)(((a4 + 0x50) + 0xC));
    t2 = *(int *)(((a4 + 0x50) + 0x28));
    t3 = (((struct o40_int *)(a4))->v);
    t4 = *(int *)(((a4 + 0x50) + 0x20));
    t5 = *(int *)(((a4 + 0x50) + 0x14));
    t6 = (((struct o44_int *)(a4))->v);
    t8 = (int)((int)((t0 + t2) - 1) % (int)t0);
    t10 = ADXPD_GetNumBlk((*(int *)((a4 + 0x8))));
    t12 = (int)((int)(t0 * t10) / (int)(*(int *)(((a4 + 0x50) + 0x8))));
    t14 = t12;
    if ((int)((int)((int)((t0 + t2) - 1) / (int)t0)) <= (int)t10) {
        t14 = (t12 - ((t0 - t8) - 1));
    }
    (((struct oA0_uint *)(a4))->v) = t14;
    (((struct oA4_uint *)(a4))->v) = (t1 * t10);
    if ((int)(t4 + t14) >= (int)t3) {
        if ((*(int *)(((a4 + 0x50) + 0x8))) == 2) {
            return ((int (*)(int, int, int, int))(0xC16AB08))(t5, t3, t6, ((t4 + t14) - t3));
        }
        return ((int (*)(int, int, int, int))(0xC16AB3C))(t5, t3, t6, ((t4 + t14) - t3));
    }
    return 0xA4;
}

int FUN_0c032210(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    int stk[28];

    register int R2;
    register int R3;
    register float F4;
    register float F11;
    register float F14;
    register float F15;
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
    int R1008;
    int R1012;
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);
    v0_3 = a4;
    v0_0 = a5;
    v0_1 = a6;
    v0_2 = a7;
    R1008 = v0_3;
    R1012 = v0_0;
    v0_3 = (v0_2);
    v0_4 = (v0_1);
    v0_5 = (a8);
    v0_6 = ((buGetFileSize((R1008), v0_0)));
    v0_7 = (a10);
    if ((a8 == 0)) goto L_C032248;
    if (((int)v0_5 <= (int)v0_6)) goto L_C032246;
    v0_5 = (0x0);
    L_C032248:;
    v0_8 = (int)v0_3 < (int)((v0_6 << 8) << 1);
    v0_6 = (((v0_6 << 8) << 1));
    if (v0_8) goto L_C032256;
    v0_6 = (v0_3);
    v0_8 = (v0_4);
    L_C032266:;
    *(int *)((int)stk + 4) = 0x0;
    v0_9 = v0_5;
    *(int *)((int)stk + 0) = v0_9;
    v0_9 = FUN_0c03209c((R1008), (R1012), (((int)stk + 0) + 0x10), v0_8, v0_9, 0x0);
    v0_10 = (v0_9);
    if ((v0_9 != 0)) goto L_C03230A;
    if ((v0_5 != 0)) goto L_C0322CC;
    v0_5 = ((*(int *)(((int)stk + 108))));
    v0_0 = ((*(int *)(((int)stk + 104))));
    L_C0322DC:;
    memcpy(v0_8, v0_0, v0_5, v0_2);
    if ((a9 != 1)) goto L_C0322FC;
    FUN_0c031e86(0xFFFFFFFF, (v0_8 + v0_7), (v0_6 - v0_7), (v0_5 - v0_7));
    L_C0322FC:;
    if ((v0_8 == v0_4)) goto L_C032314;
    memcpy(v0_4, v0_8, v0_5, v0_2);
    L_C03230A:;
    if ((v0_8 == v0_4)) goto L_C032314;
    nlFree(v0_8, v0_0, v0_1, v0_2);
    L_C032314:;
    v0_0 = (v0_10);
    L_C032316:;
    return v0_0;
    L_C0322CC:;
    v0_0 = ((0x280 + v0_8));
    if (((int)v0_3 < (int)v0_6)) goto L_C0322DA;
    v0_5 = ((0xFFFFFD80 + v0_6));
    goto L_C0322DC;
    L_C0322DA:;
    v0_5 = (v0_3);
    goto L_C0322DC;
    L_C032256:;
    v0_9 = nlMalloc(v0_6);
    v0_8 = (v0_9);
    if ((v0_9 != 0)) goto L_C032266;
    v0_0 = (0xFFFFFFFF);
    goto L_C032316;
    L_C032246:;
    v0_6 = (v0_5);
    goto L_C032248;
}

int FUN_0c055c18(void)
{
    register int t0;
    int t1;
    register int t2;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u7;

    (((struct o38_uint *)0xC2B3110)->v) = 0xE;
    (((struct o14_float *)0xC2B3110)->v) = (((((struct o10_float *)0xC2B3164)->v)) + 1.0f);
    (((struct o18_float *)0xC2B3110)->v) = (((((struct o10_float *)0xC2B3164)->v)) + 1.0f);
    (((struct o20_float *)0xC2B3110)->v) = 0.0f;
    (((struct o28_float *)0xC2B3110)->v) = 1.0f;
    (((struct o2C_uint *)0xC2B3110)->v) = 0x38E;
    t0 = 0xC055D40;
    t1 = 0x0;
    u0 = 0.0f;
    u1 = 1.0f;
    for (;;) {
        t2 = (((struct o0_int *)0xC2B3110)->v);
        if ((int)t2 > (int)(((t1 << 2) << 1) - t1)) {
            u2 = u0;
            u3 = u1;
            if ((int)t2 <= (int)0x2A) {
                t0 = 0x7;
                t0 = ((int)((int)t2 % (int)t0));
                u4 = u0;
                u5 = u1;
                if (t0 == 0) {
                    t0 = 0x7;
                    t0 = ((int)((int)t2 % (int)t0));
                    if ((t0 == 0) && (t1 == 0)) {
                        t0 = (FUN_0c058ca6(0x5A9, 0x0));
                        *(unsigned int *)0xC1321EC = ((*(int *)0xC1321EC) + 0x1);
                    } else {
                        u6 = u0;
                        u7 = u1;
                    }
                    u4 = u6;
                    u5 = u7;
                }
                u2 = u4;
                u3 = u5;
            }
            u0 = u2;
            u1 = u3;
            t2 = t1;
            t2 = (t2 << 2);
            u0 = (float)(((((struct o0_int *)0xC2B3164)->v)) + 0x7B);
            u2 = u0;
            u3 = (float)(*(int *)(((0xC10CE34 + t2) + 0x0)));
            u3 = (u3 * (FUN_0c072140(0x38E)));
            t0 = 0x8;
            u2 = (u2 - u3);
            *(float *)((0xC2B3114 + t0)) = u2;
            u0 = (float)(*(int *)(((0xC10CE34 + t2) + 0x0)));
            u3 = u0;
            u0 = 50.0f;
            u2 = u0;
            u2 = u2 + (FUN_0c072148(0x38E)) * u3;
            u0 = u2;
            t0 = 0x4;
            *(float *)((0xC2B3114 + t0)) = u0;
            t0 = 0xC10CE18;
            (((struct o4_uint *)0xC2B3110)->v) = (*(int *)((t2 + t0)));
            t0 = (FUN_0c07ada0(0xC2B3114));
        } else {
            u2 = u0;
            u3 = u1;
        }
        u0 = u2;
        u1 = u3;
        t1 = (t1 + 0x1);
        if ((int)t1 >= (int)0x7) {
            break;
        }
    }
    FUN_0c055b84();
    Result_Face_Put();
    FUN_0c055dce();
    t0 = FUN_0c055e84();
    *(unsigned int *)0xC2B31A4 = ((*(int *)0xC2B31A4) + 0x1);
    return t0;
}


float FUN_0c0128ec(int a4)
{
    int stk[6];
    register float t26;
    int t12;
    int t18;

    nlPushMatrix(0x0);
    nlRotateAY(((unsigned short)((((struct o8A_short *)(a4))->v)) - (unsigned short)((((struct oF8_short *)(a4))->v))));
    nlRotateAX((unsigned short)((((struct o88_short *)(a4))->v)));
    nlRotateAZ((unsigned short)((((struct o8C_short *)(a4))->v)));
    *(float *)(((int)stk + 12)) = 0.0f;
    *(float *)(((int)stk + 16)) = 0.0f;
    *(float *)(((int)stk + 20)) = ((((struct o164_float *)(a4))->v));
    FUN_0c072290((((int)stk + 0) + 0xC), ((int)stk + 0));
    nlPopMatrix(0x1);
    if ((((((struct o84_int *)((0x1A4 + a4)))->v)) == -1) && (t12 = (((struct o1A4_int *)(a4))->v), t12 == -1)) {
        (((struct o184_float *)(a4))->v) = 0.0f;
    } else {
        (((struct o184_float *)(a4))->v) = (carSlipRatio(((((struct o16C_float *)(a4))->v)), (*(float *)(((int)stk + 8)))));
    }
    if ((((((struct o18C_int *)((0x1A4 + a4)))->v)) == -1) && (t18 = (((struct o108_int *)((0x1A4 + a4)))->v), t18 == -1)) {
        (((struct o190_float *)(a4))->v) = 0.0f;
    } else {
        (((struct o190_float *)(a4))->v) = (carSlipRatio(((((struct o170_float *)(a4))->v)), (*(float *)(((int)stk + 8)))));
    }
    (((struct o188_float *)(a4))->v) = (carGripCurve(((((struct o184_float *)(a4))->v))));
    t26 = carGripCurve(((((struct o190_float *)(a4))->v)));
    (((struct o194_float *)(a4))->v) = t26;
    return t26;
}

int kmiFinalizeRender(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    if ((*(int *)((0xC300C1C + (((((struct o0_int *)0xC300C34)->v)) << 2)))) != -1) {
        if (((((struct o14_int *)0xC300C34)->v)) == 0) {
            *(unsigned int *)0xC300B80 = ((*(int *)0xC300B80) | 0x20);
            *(unsigned int *)(((((((struct o0_int *)0xC300C34)->v)) << 2) + 0xC300C1C)) = 0x3;
        }
        if (((*(int *)0xC3008D4) & 0x1) != 0) {
            t0 = (*(int *)0xA05F8138);
        } else {
            t0 = (*(int *)((((((((((struct o0_int *)0xC300C34)->v)) & 0x1) << 2) << 2) << 1) + 0xC300D58)));
        }
        *(unsigned int *)(((((((((struct o0_int *)0xC300C34)->v)) & 0x1) << 2) + 0xC306E10) + 0x0)) = (*(int *)0xA05F8138);
        (((struct o8_uint *)0xC300A7C)->v) = ((((((struct o0_int *)0xC300A7C)->v)) & 0xFF000000) | (((t0 - (*(int *)((((((((((struct o0_int *)0xC300C34)->v)) & 0x1) << 2) << 2) << 1) + 0xC300D54)))) << 1) & 0xFFFFF8));
        t1 = (t0 + 0xA5000000);
        t0 = 0x30;
        t2 = 0xC300974;
        for (;;) {
            t3 = *(int *)((t2 + 0x0));
            t2 = (t2 + 0x4);
            t0 = (t0 - 1);
            *(unsigned int *)((t1 + 0x0)) = t3;
            t1 = (t1 + 0x4);
            if (t0 == 0) {
                break;
            }
        }
    }
    *(unsigned int *)0xC300ADC = 0x0;
    (((struct o4_uint *)0xC306E34)->v) = (((((struct o0_int *)0xC306E34)->v)) - (*(int *)0xFFD8000C));
    return 0x4C;
}

int FUN_0c07d2aa(int a4, int a5, int a6, int a7)
{

    register int R1;
    register int R3;
    register int R14;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    v0_1 = a4;
    v0_2 = a5;
    v0_5 = a6;
    v0_3 = a7;
    v0_6 = *(signed char *)((v0_1 + 0x9));
    v0_4 = ((v0_6 & 0x3));
    v0_0 = ((*(int *)((v0_1 + 0xC))));
    if (((v0_6 & 0x3) == 0)) goto L_C07D2C8;
    if ((v0_4 == 1)) goto L_C07D2CC;
    if ((v0_4 == 2)) goto L_C07D2D0;
    L_C07D2D2:;
    v0_6 = *(signed char *)((v0_1 + 0x8));
    v0_4 = (v0_6);
    if ((v0_6 == 0)) goto L_C07D2E8;
    if ((v0_4 == 1)) goto L_C07D2EC;
    if ((v0_4 == 2)) goto L_C07D2F0;
    if ((v0_4 == 3)) goto L_C07D2F0;
    L_C07D2F2:;
    v0_4 = (v0_2);
    v0_6 = ((v0_1 + 0x33));
    v0_5 = ((((short)v0_5 << 2) + v0_1));
    if ((v0_2 == 0)) goto L_C07D330;
    if ((v0_4 == 1)) goto L_C07D33C;
    if ((v0_4 == 2)) goto L_C07D340;
    if ((v0_4 == 3)) goto L_C07D3A2;
    if ((v0_4 == 4)) goto L_C07D358;
    if ((v0_4 == 5)) goto L_C07D35C;
    if ((v0_4 == 6)) goto L_C07D364;
    if ((v0_4 == 7)) goto L_C07D36C;
    if ((v0_4 == 8)) goto L_C07D374;
    if ((v0_4 == 9)) goto L_C07D380;
    if ((v0_4 == 10)) goto L_C07D3A6;
    v0_4 = (0xFFFFFFFF);
    L_C07D3B4:;
    return v0_4;
    L_C07D3A6:;
    v0_4 = ((v0_1 + 0x1E));
    L_C07D3AC:;
    v0_4 = ((unsigned char)(*(signed char *)((v0_4 + 0x0))));
    goto L_C07D3B4;
    L_C07D380:;
    if (((unsigned char)(*(signed char *)((v0_1 + 0x1F))) == 0)) goto L_C07D38E;
    v0_4 = (0x0);
    goto L_C07D3B4;
    L_C07D38E:;
    v0_1 = *(short *)((v0_1 + 0x16));
    v0_0 = (((unsigned int)((unsigned int)((unsigned int)(unsigned short)v0_1 >> 2) >> 2) >> 2));
    if ((((unsigned int)((unsigned int)((unsigned int)(unsigned short)v0_1 >> 2) >> 2) >> 2) != 0)) goto L_C07D3A2;
    v0_4 = (0x1);
    goto L_C07D3B4;
    L_C07D3A2:;
    v0_4 = (v0_0);
    goto L_C07D3B4;
    L_C07D374:;
    v0_4 = (((int)((unsigned char)(*(signed char *)((v0_6 + 0x0))) & 0xF0) >> 4));
    goto L_C07D3B4;
    L_C07D36C:;
    v0_4 = (((unsigned char)(*(signed char *)((v0_6 + 0x0))) & 0xF));
    goto L_C07D3B4;
    L_C07D364:;
    v0_4 = ((v0_5 + 0x32));
    goto L_C07D3AC;
    L_C07D35C:;
    v0_4 = ((v0_5 + 0x31));
    goto L_C07D3AC;
    L_C07D358:;
    v0_4 = (R14);
    goto L_C07D3B4;
    L_C07D340:;
    v0_4 = (((int)((int)((int)((int)((v0_0 << 2) << 1) / (int)v0_3)) / (int)R14)));
    goto L_C07D3B4;
    L_C07D33C:;
    v0_4 = (v0_3);
    goto L_C07D3B4;
    L_C07D330:;
    v0_4 = ((unsigned short)((((struct o2A_short *)(v0_1))->v)));
    goto L_C07D3B4;
    L_C07D2F0:;
    v0_3 = (0x4);
    goto L_C07D2F2;
    L_C07D2EC:;
    v0_3 = (0x8);
    goto L_C07D2F2;
    L_C07D2E8:;
    v0_3 = (0x10);
    goto L_C07D2F2;
    L_C07D2D0:;
    R14 = (0x4);
    goto L_C07D2D2;
    L_C07D2CC:;
    R14 = (0x2);
    goto L_C07D2D2;
    L_C07D2C8:;
    R14 = (0x1);
    goto L_C07D2D2;
}

int FUN_0c027096(void)
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
    return (FUN_0c07ff00());
}
