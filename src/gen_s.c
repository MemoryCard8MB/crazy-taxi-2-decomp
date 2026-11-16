/* Straight-line functions with calls and guards (batch gen_s): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o2_short { char p[0x2]; short v; };
struct o20_float { char p[0x20]; float v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2C_int { char p[0x2C]; int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o3C_uint { char p[0x3C]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_short { char p[0x4]; short v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o4C_short { char p[0x4C]; short v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o58_int { char p[0x58]; int v; };
struct o5C_int { char p[0x5C]; int v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o88_int { char p[0x88]; int v; };
struct o90_int { char p[0x90]; int v; };
struct o90_uint { char p[0x90]; unsigned int v; };
struct o98_int { char p[0x98]; int v; };
struct o98_uchar { char p[0x98]; unsigned char v; };
struct o98_uint { char p[0x98]; unsigned int v; };
struct o9C_uint { char p[0x9C]; unsigned int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int thunk_mwRnaGetTime(int, int, int);
int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int ADXSJD_Start(int);
int ADX_GetCoefficient(int, int, int, int);
int CalcShadow2Matrix(int);
int FUN_0c01e6f0(void);
int FUN_0c020ae8(void);
int FUN_0c026ce6(void);
int FUN_0c031e86(int, int, int, int);
int FUN_0c032436(int, int, int, int, int);
int FUN_0c058ca6(int, int);
int FUN_0c058f64(int, int, int, int);
int FUN_0c059074(int);
int FUN_0c05a338(void);
int FUN_0c05ab5e(void);
int FUN_0c05cd80(void);
int FUN_0c05f434(void);
int FUN_0c05f470(int, int, float, float);
int FUN_0c05f4c8(int);
int FUN_0c05f6fe(int);
int FUN_0c05f834(void);
int FUN_0c0605e2(void);
int FUN_0c061f7e(int, int, int, int, int, int, int);
int FUN_0c069d2c(int);
int FUN_0c069e54(void);
int FUN_0c06cb24(void);
int FUN_0c06cd00(void);
int FUN_0c06e700(int, int, float);
int FUN_0c0721f0(int, int);
int FUN_0c072290(int, int);
int FUN_0c073a30(float, float, float);
int FUN_0c073a40(int);
int FUN_0c073c40(int, int, float);
float FUN_0c073c80(int);
int FUN_0c074070(void);
int FUN_0c076230(float, float, float);
extern int FUN_0c07ada0();
int FUN_0c07b706(void);
int FUN_0c07b734(void);
int FUN_0c07b760(void);
int FUN_0c07b786(void);
int FUN_0c07b7e0(int, int, int);
int FUN_0c07b864(int, int, int);
int FUN_0c07b97e(int, int, int, int);
int FUN_0c07ba56(int);
int FUN_0c07bab0(int, int, int);
int FUN_0c07c5b8(int, int, int);
int FUN_0c07c8be(int);
int FUN_0c07e42c(int);
int FUN_0c07e4cc(int);
int FUN_0c07e598(int);
int FUN_0c07e6ea(int, int);
int FUN_0c07e7e2(void);
int FUN_0c07f936(int, int);
int FUN_0c07f950(int, int, int);
int FUN_0c07ff00(void);
int FUN_0c14ce88(int);
int FUN_0c14dc2c(int);
int FUN_0c14e8e4(int);
int FUN_0c161ad4(int, int);
int FUN_0c161fe2(int);
int FUN_0c161ffa(int);
int FUN_0c16201e(int);
int Voice_ShutUp(int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
extern float _builtin_sqrtf(float);
int cvFsError(int, int, int, int);
int gdFsCreateHnG(int, int, int, int);
int gdFsSearchName(int, int, int);
int gdFsSetGlobalErrG(int);
int gdc_FileLoad(int, int, int);
int kmFreeTexture(int);
int kmProcessVertexRenderState(int);
int kmSetBorderColor(int, ...);
int kmSetVertexRenderState(int);
int memcpy(int, int, int);
int memset(int, int, int);
int mpvvlc_InitMbai(void);
int mwRnaGetTime(void);
int nlAddVector(int, int);
int nlFree(int);
int nlInitEvent(void);
int nlInitHeapMemory(int, int);
int nlLdexpf(int, float);
float nlLength(int, int);
int nlLineSendVertex(int, int, int);
int nlMalloc(int);
int nlMatrixMode(int);
int nlMultiMatrix(int);
int nlObjPutUseViewMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScaleUnitVector(int, int, float);
int nlSetTextureParameter(int, int);
int nlSubVector3op(int, int, int);
int nlTransposeMatrix(void);
int nlUnitMatrix(void);
int ntInfExit(void);
int setObjGroupOpen(int, int, int, int, int, int, int);
int strlen(int);
int strncmp(int, int, int);
int strncpy(int, int, int);
int syExtChkClearG2TimeOut(void);
int syG2Read(int, int, int, int, int, int);
int syRtcDateToCount(void);
int FUN_0c14e7ba(int a4, int a5, int a6, int a7);
float FUN_0c01b93e(int a4, int a5, int a6, float f4);
int FUN_0c01c468(void);
void FUN_0c055dce(void);
int FUN_0c067494(int a4, int a5);
int FUN_0c069e78(int a4);
int nlInvLightVectorUseViewMatrix(void);
int FUN_0c07c006(int a4, int a5, int a6, int a7);
int FUN_0c07c804(int a4, int a5, int a6);
int nlstripSetVertexContext(int a4);
int FUN_0c07f98c(int a4, int a5, int a6, int a7);
int FUN_0c08e924(int a4, int a5, int a6, int a7);
int syRtcMakeAgeOfMoon(void);
int syExtChkConnectSyncDev(int a4);
int FUN_0c030eee(float f4, float f5, float f6);
int FUN_0c032942(int a4, int a5, int a6, int a7, int a8);
int FUN_0c034320(int a4, int a5);
int FUN_0c05ccce(int a4, int a5, int a6, int a7);
int FUN_0c07d4bc(int a4, int a5, int a6);
int ntLDBrowser(int a4, int a5, int a6, int a7);
int gdFsOpenG(int a4, int a5);
int ADXPD_Create(void);
int nlFreeTextureAll(void);
float nlLog(float f4);
int nlScreenPoint(int a4, int a5, int a6, float f4, float f5, float f6);
int buCalcCRC(int a4, int a5);
int nlLineSendQuadC(int a4, int a5, int a6, int a7, float f4, float f5);
int nlLineSendQuadE(int a4, int a5, int a6, float f4);
int FUN_0c07c4d0(int a4);
int FUN_0c080600(void);
int _sub(int a4, int a5, int a6, int a7);
int syRtcGetAndCheckCount(int a4, int a5, int a6, int a7);
int kmChangeContextZWriteDisable(int a4);
int FUN_0c02fe92(void);
int FUN_0c03e792(int a4, int a5);
int CarSel_Camera(void);
int FUN_0c053f6a(void);
int FUN_0c05c00c(int a4, int a5, float f4);
int FUN_0c069b10(int a4);
int nlSetVertexMode(int a4);
int nlSpriteSetGarbagedTextureOnce_Sub(int a4, int a5, int a6);
int syTmrGenMicroToCount(int a4, int a5);
int cvFsDelDev(int a4, int a5, int a6, int a7);
int FUN_0c048dfc(void);
int FUN_0c056d8e(void);
int FUN_0c0604d0(void);
int FUN_0c067eee(int a4, float f4);
void nlFatalErrorTrap(int a4);
int nlExp(float f4);
int FUN_0c07f13c(int a4, int a5);
int FUN_0c08f6b4(int a4, int a5, int a6, int a7);
int kmChangeLatencyModel(int a4, int a5, int a6, int a7);
int FUN_0c14e936(int a4, int a5, int a6);
int kmiCheckRenderTexture(int a4);
int kmChangeContextFogMode(int a4);

int FUN_0c14e7ba(int a4, int a5, int a6, int a7)
{
    register int t3;
    register int t8;
    register int t2;

    FUN_0c14e8e4(a4);
    ADXCRS_Lock();
    t3 = 0x0;
    for (;;) {
        if ((int)t3 >= (int)(*(signed char *)((a4 + 0x3)))) {
            break;
        }
        t2 = t3;
        t2 = (t2 << 2);
        t2 = (t2 + (a4 + 0x18));
        t2 = (*(int *)((t2 + 0x0)));
        t8 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t2 + 0x0))) + 0x14)))))(t2, a5, a6, a7);
        t3 = (t3 + 0x1);
    }
    FUN_0c161ad4((*(int *)((a4 + 0x4))), a5);
    *(unsigned int *)((a4 + 0x14)) = a5;
    ADXSJD_Start((*(int *)((a4 + 0x4))));
    *(unsigned char *)((a4 + 0x1)) = 0x1;
    *(unsigned char *)((a4 + 0x2)) = 0x3;
    (((struct o4C_uint *)(a4))->v) = 0x0;
    (((struct o98_uchar *)(a4))->v) = 0x1;
    (((struct o9C_uint *)(a4))->v) = 0x0;
    (((struct oA0_uint *)(a4))->v) = (*(int *)0xC173D68);
    return ADXCRS_Unlock();
}

float FUN_0c01b93e(int a4, int a5, int a6, float f4)
{
    int stk[3];
    register float t1;
    register float u2;
    register float u3;
    register float u6;
    register float u7;
    register float u9;
    register float u10;
    register float u11;
    register float u12;
    register float u13;
    register float u14;
    register float u15;
    register float u16;
    register float u17;

    nlSubVector3op(((int)stk + 0), a5, a6);
    t1 = FUN_0c073c80(a4);
    u2 = *(float *)(((int)stk + 0));
    u3 = *(float *)(((int)stk + 4));
    u6 = *(float *)(((int)stk + 8));
    u7 = (((((struct o4_float *)(a4))->v)) * u3);
    u7 = u7 + u2 * (*(float *)((a4 + 0x0)));
    u9 = u7;
    u9 = u9 + u6 * ((((struct o8_float *)(a4))->v));
    u10 = (u3 * u3);
    u10 = u10 + u2 * u2;
    u11 = u10;
    u11 = u11 + u6 * u6;
    u12 = (f4 * f4);
    u13 = (u9 * u9);
    u14 = (t1 * (u11 - u12));
    u15 = -1.0f;
    u16 = u9;
    u17 = (u13 - u14);
    if (!(0.0f > (u13 - u14))) {
        u15 = (((-u9) - _builtin_sqrtf((u13 - u14))) / t1);
        u16 = (((-u9) - _builtin_sqrtf((u13 - u14))) / t1);
        u17 = _builtin_sqrtf((u13 - u14));
    }
    return u15;
}


void FUN_0c055dce(void)
{
    if ((int)((((struct o4_int *)0xC2B310C)->v)) > (int)0x2A) {
        FUN_0c076230(0.75f, 0.75f, 0.75f);
        (((struct o8_uint *)0xC2B310C)->v) = (*(int *)(((((((struct o0_int *)0xC2B310C)->v)) << 2) + 0xC10CCC4)));
        (((struct o3C_uint *)0xC2B310C)->v) = 0x200A;
        (((struct oC_float *)0xC2B310C)->v) = 556.0f;
        (((struct o10_float *)0xC2B310C)->v) = (float)(((((struct o0_int *)0xC2B3164)->v)) + 0x118);
        (((struct o18_float *)0xC2B310C)->v) = (((((struct o10_float *)0xC2B3164)->v)) + 1.0f);
        (((struct o1C_float *)0xC2B310C)->v) = (((((struct o10_float *)0xC2B3164)->v)) + 1.0f);
        (((struct o24_float *)0xC2B310C)->v) = 0.0f;
        (((struct o2C_float *)0xC2B310C)->v) = 1.0f;
        (((struct o30_uint *)0xC2B310C)->v) = 0x0;
        FUN_0c07ada0(0xC2B3114, 0xC2B3174, 1.0f);
        FUN_0c026ce6();
    return;
    }
}

int FUN_0c067494(int a4, int a5)
{
    register int t10;
    register int t11;

    nlPushMatrix((a4 + 0x40));
    FUN_0c05f4c8(a4);
    if (a5 != 0) {
        CalcShadow2Matrix((0x90 + a4));
        FUN_0c073a30(0.0f, 0.100000001f, 0.0f);
        nlObjPutUseViewMatrix(0xC4F4988);
    }
    nlPopMatrix(0x1);
    t10 = *(signed char *)((a4 + 0xFE));
    if ((t10 & 8) != 0) {
        t11 = FUN_0c05f434();
        nlPushMatrix((0x80 + t11));
        nlObjPutUseViewMatrix(0xC3BC430);
        return nlPopMatrix(0x1);
    }
    return t10;
}


int nlInvLightVectorUseViewMatrix(void)
{
    nlMatrixMode(0x2);
    nlTransposeMatrix();
    FUN_0c072290(0xC1474F0, 0xC2BF8B0);
    nlTransposeMatrix();
    nlMatrixMode(0x1);
    nlTransposeMatrix();
    FUN_0c072290(0xC1474D0, 0xC2BF8C0);
    (((struct o0_float *)0xC2BF8B0)->v) = (((((struct o0_float *)0xC2BF8B0)->v)) + ((((struct o0_float *)0xC1474D0)->v)));
    (((struct o4_float *)0xC2BF8B0)->v) = (((((struct o4_float *)0xC2BF8B0)->v)) + ((((struct o4_float *)0xC1474D0)->v)));
    (((struct o8_float *)0xC2BF8B0)->v) = (((((struct o8_float *)0xC2BF8B0)->v)) + ((((struct o8_float *)0xC1474D0)->v)));
    FUN_0c072290(0xC2BF8B0, 0xC2BF8B0);
    nlScaleUnitVector(0xC2BF8B0, 0xC2BF8B0, 436.5f);
    return (nlTransposeMatrix());
}

int FUN_0c07c006(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t24;
    register int t1;
    register int t3;
    register int t4;
    register int t6;

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    t24 = 0xFFFFFFFA;
    if (a7 == 0) {
    } else {
        t1 = FUN_0c07b864(a4, (*(int *)(((int)stk + 4))), a7);
        t24 = t1;
        if (t1 != 0) {
        } else {
            t3 = *(int *)0xC2C3EA4;
            t4 = *(int *)0xC2C3EA4;
            t6 = FUN_0c07b97e((*(int *)(((int)stk + 4))), (*(int *)((a4 + 0x4))), a7, ((int)stk + 0));
            *(unsigned int *)(((t3 + 0x1C) + 0x0)) = t6;
            *(unsigned int *)(((t4 + 0x18) + 0x0)) = t6;
            *(unsigned int *)(((*(int *)0xC2C3EA4) + 0x14)) = a4;
            *(unsigned int *)(((*(int *)0xC2C3EA4) + 0x0)) = 0x8001;
            *(unsigned int *)(((*(int *)0xC2C3EA4) + 0x4)) = (*(int *)(((int)stk + 8)));
            *(unsigned int *)(((*(int *)0xC2C3EA4) + 0x8)) = a7;
            *(unsigned int *)(((*(int *)0xC2C3EA4) + 0xC)) = (*(int *)((a4 + 0x8)));
            *(unsigned int *)(((*(int *)0xC2C3EA4) + 0x10)) = (*(int *)(((int)stk + 0)));
            t24 = 0x0;
        }
    }
    return t24;
}

int FUN_0c07c804(int a4, int a5, int a6)
{
    register int t0;

    if (a5 != 0xA4) {
        if (a5 != 0x10A4) {
            if (a5 != 0x20A4) {
                return 0xFFFFFFFE;
            }
            return FUN_0c07c8be(((((a4 & 0xF) << 8) + a5) + (((a6 + 0x40) & 0x7F) << 16)));
        }
        return FUN_0c07c8be(((((a4 & 0xF) << 8) + a5) + ((a6 & 0xF) << 16)));
    }
    t0 = FUN_0c07c8be((((0x7F00 & a6) << 8) + 0x70A4));
    if (t0 != 0) {
        return t0;
    }
    return FUN_0c07c8be((((0x7F & a6) << 16) + 0xA4));
}

int nlstripSetVertexContext(int a4)
{
    register int t0;

    *(unsigned int *)(((*(int *)0xC2BF728) + 0x0)) = 0x600608;
    *(unsigned int *)(((*(int *)0xC2BF728) + 0x8)) = (*(int *)((a4 + 0x0)));
    *(unsigned int *)(((*(int *)0xC2BF728) + 0xC)) = (*(int *)(((a4 + 0x4) + 0x0)));
    *(unsigned int *)(((*(int *)0xC2BF728) + 0x20)) = (*(int *)((((a4 + 0x4) + 0x4) + 0x0)));
    (((struct o44_uint *)((*(int *)0xC2BF728)))->v) = (*(int *)(((((a4 + 0x4) + 0x4) + 0x4) + 0x0)));
    (((struct o40_uint *)((*(int *)0xC2BF728)))->v) = (*(int *)((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x0)));
    kmProcessVertexRenderState((*(int *)0xC2BF728));
    t0 = *(int *)0xC2BF728;
    (((struct o90_uint *)(t0))->v) = (((((struct o90_int *)(t0))->v)) & 0xFFFCFF3F);
    t0 = *(int *)0xC2BF728;
    (((struct o90_uint *)(t0))->v) = (((((struct o90_int *)(t0))->v)) | ((((struct o0_int *)0xC2C4140)->v)));
    t0 = *(int *)0xC2BF728;
    (((struct o98_uint *)(t0))->v) = (((((struct o98_int *)(t0))->v)) & 0x31FF0FF);
    t0 = *(int *)0xC2BF728;
    (((struct o98_uint *)(t0))->v) = (((((struct o98_int *)(t0))->v)) | (((((*(int *)0xC2BB4A8) ^ 0xFC) << 16) << 8) | ((((struct o4_int *)0xC2C4140)->v))));
    return kmSetVertexRenderState((*(int *)0xC2BF728));
}

int FUN_0c07f98c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = FUN_0c07f936(a4, 0x28);
    t1 = FUN_0c07f950(a4, 0x2C, t0);
    t2 = t0;
    t3 = a4;
    if (t1 != 0) {
        strncpy(a5, a4, (t1 - a4));
        t2 = (t0 - ((t1 - a4) + 0x1));
        t3 = (t1 + 0x1);
    }
    t0 = FUN_0c07f950(t3, 0x20, t2);
    t1 = t2;
    t4 = t3;
    if (t0 != 0) {
        strncpy(a6, t3, (t0 - t3));
        t1 = (t2 - ((t0 - t3) + 0x1));
        t4 = (t0 + 0x1);
    }
    return (strncpy(a7, t4, t1));
}

int FUN_0c08e924(int a4, int a5, int a6, int a7)
{
    int stk[7];
    register int t0;
    register int t12;

    *(unsigned int *)(((int)stk + 20)) = a4;
    *(unsigned int *)(((int)stk + 16)) = a5;
    t0 = *(int *)(((int)stk + 20));
    *(unsigned int *)(((int)stk + 0)) = ((t0 * 0x154) + 0xC2C8D2C);
    *(unsigned int *)(((int)stk + 4)) = (*(int *)((((t0 * 0x154) + 0xC2C8D2C) + 0x28)));
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 12))) >= (int)(*(int *)(((*(int *)(((*(int *)(((int)stk + 0))) + 0x1C))) + 0x30)))) {
            return 0x0;
        }
        *(unsigned char *)(((int)stk + 11)) = (*(signed char *)(((*(int *)(((int)stk + 4))) + 0x0)));
        if ((*(signed char *)(((int)stk + 11))) != 0) {
            t12 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC2C8D28) + 0xC)))))((*(int *)(((int)stk + 4))), 0x2, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
            if ((unsigned short)t12 == (*(int *)(((int)stk + 16)))) {
                break;
            }
            *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x1);
            *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x20);
            continue;
        }
        *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x1);
        *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x20);
    }
    return (*(int *)(((int)stk + 4)));
}

int syRtcMakeAgeOfMoon(void)
{
    int stk[1];
    register int t9;

    syRtcDateToCount();
    if ((unsigned int)(*(int *)(((int)stk + 0))) >= (unsigned int)0x5CB417D1) {
        t9 = ((int)((unsigned int)((*(int *)(((int)stk + 0))) + 0xA34BE82F) % (unsigned int)0x26EE7F));
    } else {
        t9 = (0x26EE7F - ((int)((unsigned int)(0x5CB417D1 - (*(int *)(((int)stk + 0)))) % (unsigned int)0x26EE7F)));
    }
    return ((int)((unsigned int)t9 / (unsigned int)0x15180));
}

int syExtChkConnectSyncDev(int a4)
{
    int stk[4];
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    *(unsigned int *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 8)) = 0x0;
    syExtChkClearG2TimeOut();
    t1 = *(int *)(((int)stk + 12));
    *(int *)((int)stk + 4) = 0x1;
    *(int *)((int)stk + 0) = 0x1;
    t2 = syG2Read(t1, (((int)stk + 0) + 0x8), 0x4, 0x1, 0x1, 0x1);
    if (t2 == 0) {
        t3 = _builtin_get_imask();
        _builtin_set_imask(0xF);
        t4 = *(int *)0xA05F6908;
        _builtin_set_imask(((unsigned int)(((t3 & 0xF) << 2) << 2) >> 4));
        if ((t4 & 0x8000000) != 0) {
            syExtChkClearG2TimeOut();
            return 0x0;
        }
        if ((*(int *)(((int)stk + 8))) == 0x53504147) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x0;
}

int FUN_0c030eee(float f4, float f5, float f6)
{
    register float u0;
    register float u1;

    u0 = 0.0f;
    if (0.0f > f4) {
    } else {
        u1 = f4;
        if (f4 > 1.0f) {
            u1 = 1.0f;
        }
        u0 = u1;
    }
    (((struct o0_float *)0xC12A5F4)->v) = u0;
    u0 = 0.0f;
    if (0.0f > f5) {
    } else {
        u1 = f5;
        if (f5 > 1.0f) {
            u1 = 1.0f;
        }
        u0 = u1;
    }
    (((struct o4_float *)0xC12A5F4)->v) = u0;
    u0 = 0.0f;
    if (0.0f > f6) {
    } else {
        u1 = f6;
        if (f6 > 1.0f) {
            u1 = 1.0f;
        }
        u0 = u1;
    }
    (((struct o8_float *)0xC12A5F4)->v) = u0;
    u0 = *(float *)0xC0310A0;
    (((struct oC_uint *)0xC12A5F4)->v) = ((((int)(((((struct o0_float *)0xC12A5F4)->v)) * u0) << 16) | ((int)(((((struct o4_float *)0xC12A5F4)->v)) * u0) << 8)) | (int)(((((struct o8_float *)0xC12A5F4)->v)) * u0));
    return 0xC0310A0;
}

int FUN_0c032942(int a4, int a5, int a6, int a7, int a8)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = (((struct o5C_int *)(a6))->v);
    if (a7 == 1) {
        t1 = FUN_0c031e86(0x1, (((((struct o58_int *)(a6))->v)) + a8), 0x0, (((((struct o5C_int *)(a6))->v)) - a8));
        t2 = 0xFFFFFFFF;
        if ((int)t1 <= 0) {
        } else {
            (((struct o5C_uint *)(a6))->v) = (t1 + a8);
            t1 = FUN_0c032436(a4, a5, a6, 0x0, 0x0);
            if (a7 == 1) {
                FUN_0c031e86(0xFFFFFFFF, (((((struct o58_int *)(a6))->v)) + a8), (t0 - a8), (((((struct o5C_int *)(a6))->v)) - a8));
            }
            t2 = t1;
        }
        t1 = t2;
    } else {
        t2 = FUN_0c032436(a4, a5, a6, 0x0, 0x0);
        if (a7 == 1) {
            FUN_0c031e86(0xFFFFFFFF, (((((struct o58_int *)(a6))->v)) + a8), (t0 - a8), (((((struct o5C_int *)(a6))->v)) - a8));
        }
        t1 = t2;
    }
    return t1;
}

/* manual: returns what the original leaves in r0 (r7): 0 when nothing happens, 2 after the countdown at +0x28 steps, 1 when it
   went below zero and was reset to a5, 3 when it reached zero (retcheck: a caller reads it) */
int FUN_0c034320(int a4, int a5)
{
    int t0;
    int r = 0;

    if ((((*(int *)0xC2A46E0) != 1) || (a4 != 0)) && (t0 = *(int *)((((a4 * 0x2C) + 0xC2A4680) + 0x1C)), (t0 & 2) != 0)) {
        r = 2;
        t0 = *(int *)((((a4 * 0x2C) + 0xC2A4680) + 0x28));
        *(unsigned int *)((((a4 * 0x2C) + 0xC2A4680) + 0x28)) = (t0 - 1);
        if ((int)(t0 - 1) < 0) {
            r = 1;
            *(unsigned int *)((((a4 * 0x2C) + 0xC2A4680) + 0x28)) = a5;
        }
        if ((*(int *)((((a4 * 0x2C) + 0xC2A4680) + 0x28))) == 0) {
            r = 3;
            *(unsigned int *)((((a4 * 0x2C) + 0xC2A4680) + 0x1C)) = (((*(int *)((((a4 * 0x2C) + 0xC2A4680) + 0x1C))) & 0xFFFFFFF4) | 0x4);
        }
        if (a4 == 0) {
            t0 = (((struct o0_int *)0xC2A585C)->v);
            (((struct o0_uint *)0xC2A585C)->v) = (t0 - 64);
            if ((int)(t0 - 64) < 0) {
                (((struct o0_uint *)0xC2A585C)->v) = 0x0;
            }
            if ((int)(*(int *)((((a4 * 0x2C) + 0xC2A4680) + 0x28))) < (int)0xF) {
                t0 = (((struct o4_int *)0xC2A585C)->v);
                (((struct o4_uint *)0xC2A585C)->v) = (t0 - 64);
                if ((int)(t0 - 64) < 0) {
                    (((struct o4_uint *)0xC2A585C)->v) = 0x0;
                }
            }
        }
    }
    return r;
}


int FUN_0c07d4bc(int a4, int a5, int a6)
{
    int stk[2];
    register int t0;
    register int t2;
    register int t3;

    *(unsigned short *)(((int)stk + 0)) = a5;
    t0 = *(signed char *)(((unsigned char)((unsigned short)a4 * (unsigned short)0x1C) + 0xC2C3EA8));
    if (t0 == 1) {
        *(unsigned int *)(((int)stk + 4)) = ((((short)a4 << 8) << 2) << 2);
        FUN_0c07c8be(((((((short)a4 << 8) << 2) << 2) | ((short)a6 << 16)) | 0x2A2));
        t2 = *(short *)(((int)stk + 0));
        t3 = *(int *)(((int)stk + 4));
        FUN_0c07c8be((((t2 << 16) | t3) | 0x3A2));
        if ((*(int *)(((unsigned char)((unsigned short)a4 * (unsigned short)0x1C) + 0xC2C3EB0))) != 0) {
            FUN_0c07c8be((((((((short)a4 << 8) << 2) << 2) | ((short)a6 << 16)) | 0x2A2) + 0x800));
            return FUN_0c07c8be(((((t2 << 16) | t3) | 0x3A2) + 0x800));
        }
        return 0xC2C3EB0;
    }
    return t0;
}

int ntLDBrowser(int a4, int a5, int a6, int a7)
{
    return ((int (*)(int, int, int, int))(0xC07FA0C))(0xC114140, 0x8C008300, 0x1, a7);
}

int gdFsOpenG(int a4, int a5)
{
    register int t2;
    register int t5;
    register int t7;
    register int t9;
    register int t10;
    register int t19;

    t2 = a5;
    if (a5 == 0) {
        t2 = (*(int *)(((*(int *)0xC1737EC) + 0x10)));
    }
    t5 = gdFsSearchName(a4, t2, 0x0);
    if (t5 == 0) {
        gdFsSetGlobalErrG(0xFFFFFFF8);
        t19 = 0x0;
    } else {
        t7 = *(int *)0xC1737EC;
        t9 = 0x0;
        t10 = (*(int *)((t7 + 0x18)));
        for (;;) {
            if ((int)t9 >= (int)(*(int *)((t7 + 0x0)))) {
                t9 = 0xFFFFFFF7;
                gdFsSetGlobalErrG(t9);
                return 0x0;
            }
            if (((((struct o4C_short *)(t10))->v)) == 0) {
                break;
            }
            t10 = (t10 + 0x54);
            t9 = (t9 + 0x1);
        }
        gdFsCreateHnG(t10, t5, ((*(int *)((((t2 + 0x10) + ((t5 - 1) * 0x2C)) + 0x0))) + 0x96), (*(int *)((((t2 + 0x10) + ((t5 - 1) * 0x2C)) + 0x4))));
        gdFsSetGlobalErrG(0x0);
        t19 = t10;
    }
    return t19;
}

int ADXPD_Create(void)
{
    register int t0;
    register int t10;

    t0 = 0x0;
    for (;;) {
        if ((*(int *)((((t0 * 0x34) + 0xC30BA64) + 0x0))) != 0) {
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x8) {
                break;
            }
            continue;
        }
        break;
    }
    if (t0 == 8) {
        t10 = 0x0;
    } else {
        memset(((t0 * 0x34) + 0xC30BA64), 0x0, 0x34);
        *(unsigned int *)((((t0 * 0x34) + 0xC30BA64) + 0x0)) = 0x1;
        *(unsigned int *)((((t0 * 0x34) + 0xC30BA64) + 0x4)) = t0;
        *(unsigned int *)((((t0 * 0x34) + 0xC30BA64) + 0x8)) = 0x0;
        *(unsigned int *)((((t0 * 0x34) + 0xC30BA64) + 0xC)) = 0x0;
        ADX_GetCoefficient(0x1F4, 0xAC44, (((t0 * 0x34) + 0xC30BA64) + 0x30), ((((t0 * 0x34) + 0xC30BA64) + 0x30) + 0x2));
        memset((((t0 * 0x34) + 0xC30BA64) + 0x28), 0x0, 0x8);
        t10 = ((t0 * 0x34) + 0xC30BA64);
    }
    return t10;
}

int nlFreeTextureAll(void)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;

    t1 = 0x0;
    t2 = ((((struct o0_int *)0xC2BF120)->v));
    for (;;) {
        if ((int)t1 >= (int)((((struct o4_int *)0xC2BF120)->v))) {
            break;
        }
        if (((*(int *)((t2 + 0x2C))) != 0) && (t0 = *(int *)((t2 + 0x28)), t0 == 0)) {
            t3 = (kmFreeTexture(t2));
        }
        t1 = (t1 + 0x1);
        t2 = (t2 + 0x3C);
    }
    t0 = ((((struct o0_int *)0xC2BF120)->v));
    t1 = 0x0;
    for (;;) {
        if ((int)t1 >= (int)((((struct o4_int *)0xC2BF120)->v))) {
            break;
        }
        *(unsigned int *)((t0 + 0x28)) = 0xFFFFFFFF;
        t1 = (t1 + 0x1);
        *(unsigned int *)((t0 + 0x2C)) = 0x0;
        *(unsigned int *)((t0 + 0x38)) = 0xFFFFFFFF;
        t0 = (t0 + 0x3C);
    }
    (((struct o8_uint *)0xC2BF8DC)->v) = 0x0;
    (((struct o0_uint *)0xC2BF8DC)->v) = 0x0;
    return t3;
}

float nlLog(float f4)
{
    register int t0;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;

    if (!(0.0f > f4) && (f4 != 0.0f)) {
        u0 = *(float *)0xC070DD8;
        u1 = f4;
        u2 = 0.0f;
        if (!((1.0f + 1.0f) > f4)) {
            u3 = f4;
            u4 = 0.0f;
            for (;;) {
                u3 = (u3 / (1.0f + 1.0f));
                u4 = (u4 + u0);
                if ((1.0f + 1.0f) > u3) {
                    break;
                }
            }
            u1 = u3;
            u2 = u4;
        }
        u3 = u1;
        u4 = u2;
        if (1.0f > u1) {
            u5 = u1;
            u1 = u2;
            for (;;) {
                u5 = (u5 * (1.0f + 1.0f));
                u1 = (u1 - u0);
                if (!(1.0f > u5)) {
                    break;
                }
            }
            u3 = u5;
            u4 = u1;
        }
        t0 = 0x1;
        u0 = (((u3 + -1.0f) / (u3 + 1.0f)) * (1.0f + 1.0f));
        u1 = u4;
        for (;;) {
            u2 = (((u3 + -1.0f) / (u3 + 1.0f)) * ((u3 + -1.0f) / (u3 + 1.0f)));
            u4 = u0;
            u0 = (u0 * u2);
            u2 = u1;
            u1 = (u1 + (u4 / (float)t0));
            t0 = (t0 + 0x2);
            if (u1 == u2) {
                break;
            }
        }
        return u1;
    }
    return 0.0f;
}

int nlScreenPoint(int a4, int a5, int a6, float f4, float f5, float f6)
{
    int stk[13];
    register float u6;

    *(float *)(((int)stk + 20)) = f4;
    *(float *)(((int)stk + 8)) = f5;
    *(float *)(((int)stk + 16)) = f6;
    *(unsigned int *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 0)) = a6;
    nlPushMatrix(0xC2BFB70);
    nlMultiMatrix(0xC2BFB30);
    *(float *)(((int)stk + 40)) = (*(float *)(((int)stk + 20)));
    *(float *)(((int)stk + 44)) = (*(float *)(((int)stk + 8)));
    *(float *)(((int)stk + 48)) = (*(float *)(((int)stk + 16)));
    FUN_0c0721f0((((int)stk + 0) + 0x28), (((int)stk + 0) + 0x18));
    u6 = *(float *)(((int)stk + 36));
    *(float *)(((*(int *)(((int)stk + 12))) + 0x0)) = ((*(float *)(((int)stk + 24))) * (1.0f / u6));
    *(float *)(((*(int *)(((int)stk + 4))) + 0x0)) = ((*(float *)(((int)stk + 28))) * (1.0f / u6));
    *(float *)(((*(int *)(((int)stk + 0))) + 0x0)) = (1.0f / u6);
    return (nlPopMatrix(0x1));
}

int buCalcCRC(int a4, int a5)
{
    int stk[6];
    int t1;
    register int t4;

    *(unsigned int *)(((int)stk + 20)) = a4;
    *(unsigned int *)(((int)stk + 16)) = a5;
    *(unsigned int *)(((int)stk + 0)) = (*(int *)(((int)stk + 20)));
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    t1 = 0x0;
    for (;;) {
        if ((unsigned int)(*(int *)(((int)stk + 12))) >= (unsigned int)(*(int *)(((int)stk + 16)))) {
            break;
        }
        t4 = *(int *)(((int)stk + 0));
        *(unsigned int *)(((int)stk + 0)) = (t4 + 0x1);
        t1 = (*(signed char *)((((t4 + 0x1) - 1) + 0x0)));
        t1 = (t1 << 8);
        *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) ^ t1);
        t1 = 0x0;
        *(unsigned int *)(((int)stk + 8)) = t1;
        for (;;) {
            if ((int)(*(int *)(((int)stk + 8))) >= (int)0x8) {
                break;
            }
            t1 = 0x8000;
            if (((*(int *)(((int)stk + 4))) & t1) != 0) {
                *(unsigned int *)(((int)stk + 4)) = (((*(int *)(((int)stk + 4))) << 1) ^ 0x1021);
            } else {
                *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) << 1);
            }
            t1 = (*(int *)(((int)stk + 8)));
            t1 = (t1 + 0x1);
            *(unsigned int *)(((int)stk + 8)) = t1;
        }
        t1 = (*(int *)(((int)stk + 12)));
        t1 = (t1 + 0x1);
        *(unsigned int *)(((int)stk + 12)) = t1;
    }
    return (*(int *)(((int)stk + 4)));
}

int nlLineSendQuadC(int a4, int a5, int a6, int a7, float f4, float f5)
{
    int stk[13];

    *(unsigned int *)(((int)stk + 0)) = a7;
    (((struct o4_float *)(((int)stk + 0)))->v) = ((*(float *)((a5 + 0x0))) + f5);
    (((struct o4_float *)((((int)stk + 0) + 0x4)))->v) = (((((struct o4_float *)(a5))->v)) - f4);
    (((struct o8_float *)((((int)stk + 0) + 0x4)))->v) = ((((struct o8_float *)(a5))->v));
    (((struct oC_float *)((((int)stk + 0) + 0x4)))->v) = ((*(float *)((a5 + 0x0))) - f5);
    (((struct o4_float *)(((((int)stk + 0) + 0x4) + 0xC)))->v) = (((((struct o4_float *)(a5))->v)) + f4);
    (((struct o8_float *)(((((int)stk + 0) + 0x4) + 0xC)))->v) = ((((struct o8_float *)(a5))->v));
    (((struct o18_float *)((((int)stk + 0) + 0x4)))->v) = ((*(float *)((a6 + 0x0))) + f5);
    (((struct o4_float *)(((((int)stk + 0) + 0x4) + 0x18)))->v) = (((((struct o4_float *)(a6))->v)) - f4);
    (((struct o8_float *)(((((int)stk + 0) + 0x4) + 0x18)))->v) = ((((struct o8_float *)(a6))->v));
    (((struct o24_float *)((((int)stk + 0) + 0x4)))->v) = ((*(float *)((a6 + 0x0))) - f5);
    (((struct o4_float *)(((((int)stk + 0) + 0x4) + 0x24)))->v) = (((((struct o4_float *)(a6))->v)) + f4);
    (((struct o8_float *)(((((int)stk + 0) + 0x4) + 0x24)))->v) = ((((struct o8_float *)(a6))->v));
    return (nlLineSendVertex(a4, (((int)stk + 0) + 0x4), (*(int *)(((int)stk + 0)))));
}

int nlLineSendQuadE(int a4, int a5, int a6, float f4)
{
    int stk[13];

    *(unsigned int *)(((int)stk + 0)) = a6;
    (((struct o4_float *)(((int)stk + 0)))->v) = ((*(float *)((a5 + 0x0))) - f4);
    (((struct o4_float *)((((int)stk + 0) + 0x4)))->v) = (((((struct o4_float *)(a5))->v)) - f4);
    (((struct o8_float *)((((int)stk + 0) + 0x4)))->v) = ((((struct o8_float *)(a5))->v));
    (((struct oC_float *)((((int)stk + 0) + 0x4)))->v) = ((*(float *)((a5 + 0x0))) + f4);
    (((struct o4_float *)(((((int)stk + 0) + 0x4) + 0xC)))->v) = (((((struct o4_float *)(a5))->v)) - f4);
    (((struct o8_float *)(((((int)stk + 0) + 0x4) + 0xC)))->v) = ((((struct o8_float *)(a5))->v));
    (((struct o18_float *)((((int)stk + 0) + 0x4)))->v) = ((*(float *)((a5 + 0x0))) - f4);
    (((struct o4_float *)(((((int)stk + 0) + 0x4) + 0x18)))->v) = (((((struct o4_float *)(a5))->v)) + f4);
    (((struct o8_float *)(((((int)stk + 0) + 0x4) + 0x18)))->v) = ((((struct o8_float *)(a5))->v));
    (((struct o24_float *)((((int)stk + 0) + 0x4)))->v) = ((*(float *)((a5 + 0x0))) + f4);
    (((struct o4_float *)(((((int)stk + 0) + 0x4) + 0x24)))->v) = (((((struct o4_float *)(a5))->v)) + f4);
    (((struct o8_float *)(((((int)stk + 0) + 0x4) + 0x24)))->v) = ((((struct o8_float *)(a5))->v));
    return (nlLineSendVertex(a4, (((int)stk + 0) + 0x4), (*(int *)(((int)stk + 0)))));
}

int FUN_0c07c4d0(int a4)
{
    int stk[1];
    register int t0;
    register int t30;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t7;
    register int t8;
    register int t9;
    register int t18;

    t0 = FUN_0c07ba56(a4);
    t30 = t0;
    if (t0 == 0) {
        t2 = *(int *)(((signed char)(((a4 << 1) + a4) << 2) + 0xC2C3F90));
        t3 = FUN_0c07bab0(a4, t2, ((int)stk + 0));
        t4 = FUN_0c07b706();
        t30 = t4;
        if (t4 == 0) {
            t5 = FUN_0c07b734();
            t30 = t5;
            if (t5 == 0) {
                if (t3 != 0) {
                    t7 = FUN_0c07b7e0(t3, (t3 - t2), (*(int *)(((int)stk + 0))));
                    t30 = t7;
                    if (t7 == 0) {
                        t8 = FUN_0c07b760();
                        t30 = t8;
                        if (t8 == 0) {
                            t9 = FUN_0c07b786();
                            t30 = 0x0;
                            if (t9 != 0) {
                                t30 = t9;
                            }
                        }
                    }
                } else {
                    t18 = FUN_0c07b786();
                    t30 = 0x0;
                    if (t18 != 0) {
                        t30 = t18;
                    }
                }
            }
        }
    }
    return t30;
}

int FUN_0c080600(void)
{
    register int t1;
    register int t2;
    register int t8;
    register int t0;

    *(unsigned int *)0xC147748 = 0x0;
    t1 = 0x0;
    t2 = 0x1;
    for (;;) {
        (((struct o14_float *)(((t1 * 0xB0) + 0xC2C4148)))->v) = (*(float *)(((((t1 << 2) << 2) + 0xC2C4C98) + 0x0)));
        (((struct o18_float *)(((t1 * 0xB0) + 0xC2C4148)))->v) = ((((struct o4_float *)((((t1 << 2) << 2) + 0xC2C4C98)))->v));
        (((struct o1C_float *)(((t1 * 0xB0) + 0xC2C4148)))->v) = ((((struct o8_float *)((((t1 << 2) << 2) + 0xC2C4C98)))->v));
        (((struct o20_float *)(((t1 * 0xB0) + 0xC2C4148)))->v) = ((((struct oC_float *)((((t1 << 2) << 2) + 0xC2C4C98)))->v));
        *(unsigned short *)((((t1 * 0xB0) + 0xC2C4148) + 0x0)) = (*(int *)((0xC2C4C58 + (t1 << 2))));
        t8 = *(short *)((((t1 * 0xB0) + 0xC2C4148) + 0x0));
        t1 = (t1 + 0x1);
        if (t8 == 1) {
            t0 = (*(int *)0xC147748);
            t0 = (t0 | t2);
            *(unsigned int *)0xC147748 = t0;
        }
        t2 = (t2 << 1);
        if ((int)t1 >= (int)0x10) {
            break;
        }
    }
    return t8;
}

int _sub(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t16;
    register int t17;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t24;

    *(unsigned int *)(((int)stk + 4)) = ((a7 - 1) + a5);
    t2 = *(int *)(((int)stk + 4));
    t16 = 0x1;
    t17 = 0x0;
    if ((unsigned int)t2 >= (unsigned int)a5) {
        t1 = (((a7 - 1) + a5) + 0x1);
        t3 = ((a7 - 1) + a6);
        t4 = 0x1;
        t5 = 0x0;
        for (;;) {
            t6 = *(signed char *)((t3 + 0x0));
            t7 = *(signed char *)((t2 + 0x0));
            *(unsigned int *)(((int)stk + 0)) = (((unsigned char)t7 - (unsigned char)t6) - t5);
            if ((int)(((unsigned char)t7 - (unsigned char)t6) - t5) < 0) {
                t8 = (((unsigned char)t7 - (unsigned char)t6) - t5);
                t5 = 0x100;
                t5 = (t5 + t8);
                *(unsigned int *)(((int)stk + 0)) = t5;
                t5 = 0x1;
            } else {
                t5 = 0x0;
            }
            if ((*(int *)(((int)stk + 0))) != 0) {
                t4 = 0x0;
            }
            t2 = (t2 - 1);
            *(unsigned char *)(((t1 - 0x1) + 0x0)) = (*(int *)(((int)stk + 0)));
            t1 = (t1 - 0x1);
            t3 = (t3 - 1);
            if ((unsigned int)t2 < (unsigned int)a5) {
                break;
            }
        }
        t16 = t4;
        t17 = t5;
    }
    t24 = 0xFFFFFFFF;
    if ((t17 != 1) || (a4 != 0)) {
        t24 = 0x1;
        if (t16 == 1) {
            t24 = 0x0;
        }
    }
    return t24;
}

int syRtcGetAndCheckCount(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t1;
    register int t2;
    register int t18;
    register int t8;
    register int t9;
    register int t22;
    register int t0;

    *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x4);
    t1 = (((int)stk + 0) + 0x4);
    t2 = (((int)stk + 0) + 0x4);
    for (;;) {
        if ((unsigned int)t2 >= (unsigned int)((((int)stk + 0) + 0x4) + 0x8)) {
            break;
        }
        t0 = (FUN_0c14ce88(t2));
        if (t0 != 0) {
            *(unsigned int *)((t1 + 0x0)) = a4;
        }
        t2 = (t2 + 0x4);
        t1 = (t1 + 0x4);
    }
    t8 = *(int *)(((int)stk + 0));
    t18 = 0x0;
    if ((unsigned int)t8 < (unsigned int)((((int)stk + 0) + 0x4) + 0x4)) {
        t9 = ((((int)stk + 0) + 0x4) + 0x4);
        for (;;) {
            if ((*(int *)((t8 + 0x0))) != (*(int *)((t9 + 0x0)))) {
                break;
            }
            t8 = (t8 + 0x4);
            t9 = (t9 + 0x4);
            if ((unsigned int)t8 >= (unsigned int)((((int)stk + 0) + 0x4) + 0x4)) {
                if (0x0 == 0) {
                    return (*(int *)(((*(int *)(((int)stk + 0))) + 0x0)));
                }
                return a4;
            }
        }
        t18 = 0x1;
    }
    t22 = a4;
    if (t18 == 0) {
        t22 = (*(int *)(((*(int *)(((int)stk + 0))) + 0x0)));
    }
    return t22;
}

int kmChangeContextZWriteDisable(int a4)
{
    if (a4 != 0) {
        *(unsigned int *)0xC300DFC = ((*(int *)0xC300DFC) | 0x4000000);
    } else {
        *(unsigned int *)0xC300DFC = ((*(int *)0xC300DFC) & 0xFBFFFFFF);
    }
    *(unsigned int *)0xC174138 = (*(int *)0xC300DFC);
    return 0x0;
}

int FUN_0c02fe92(void)
{
    int stk[6];
    register int t0;
    register int t3;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register float u29;
    register float t17;
    register int t2;
    register int t4;
    register float u9;
    int t16;
    register int t25;
    register int t28;
    register float u23;

    t0 = (((struct o8_int *)0xC279060)->v);
    t3 = (((t0 << 2) << 2) << 1);
    t5 = t0;
    t6 = (((t0 << 2) << 2) << 1);
    t7 = (((t0 << 2) << 2) << 1);
    t8 = (((t0 << 2) << 2) << 1);
    for (;;) {
        if ((int)t5 >= (int)((((struct oC_int *)0xC279060)->v))) {
            break;
        }
        t4 = (*(int *)0xC1296AC);
        t3 = t6;
        t3 = (t3 + t4);
        t2 = (*(short *)((t3 + 0x10)));
        u29 = u9;
        if (((int)t2 > 0) && (t16 = *(int *)((t3 + 0x1C)), t16 == 0)) {
            t3 = t8;
            t3 = (t3 + t4);
            t17 = nlLength(t3, 0xC175930);
            u9 = ((((struct o0_float *)0xC279060)->v));
            if (u9 > t17) {
                t3 = (*(int *)0xC1296AC);
                t3 = (t3 + t7);
                t2 = (setObjGroupOpen(t3, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8)));
                t25 = t2;
            } else {
                u23 = u9;
            }
            u29 = u23;
        } else {
            t25 = t2;
            t28 = t3;
        }
        u9 = u29;
        t2 = t25;
        t8 = (t8 + 0x20);
        t3 = t28;
        t6 = (t6 + 0x20);
        t5 = (t5 + 0x1);
        t7 = (t7 + 0x20);
    }
    return t2;
}

int FUN_0c03e792(int a4, int a5)
{
    register int t4;

    t4 = 0x0;
    if (a5 == 0) {
    } else {
        t4 = (signed char)(int)(((float)(unsigned char)(*(signed char *)0xC28ED9E) / ((((struct o0_float *)0xC03E880)->v))) * ((((struct o4_float *)0xC03E880)->v)));
    }
    return FUN_0c07c5b8(a4, 0x10A0, t4);
}


int FUN_0c053f6a(void)
{
    register int t0;
    int t1;
    int t4;

    t0 = (((struct o20_int *)0xC2B2DC4)->v);
    if ((t0 != 3) && (t1 = (((struct o24_int *)0xC2B2DC4)->v), t1 != 3)) {
        if ((t0 == 1) && (t4 = (((struct o24_int *)0xC2B2DC4)->v), t4 == 1)) {
            (((struct o14_uint *)0xC2B2DC4)->v) = 0x0;
            (((struct o14_uint *)0xC2B2DC4)->v) = (0x0 + (*(int *)0xC1ECCD4));
            *(unsigned int *)0xC1ECCD4 = 0x0;
            (((struct o20_uint *)0xC2B2DC4)->v) = 0x2;
        } else {
            (((struct o14_uint *)0xC2B2DC4)->v) = 0x0;
            (((struct o14_uint *)0xC2B2DC4)->v) = (0x0 + (*(int *)0xC1ECCD4));
            *(unsigned int *)0xC1ECCD4 = 0x0;
            (((struct o20_uint *)0xC2B2DC4)->v) = 0x2;
            (((struct o24_uint *)0xC2B2DC4)->v) = 0x1;
        }
    } else {
        (((struct o14_uint *)0xC2B2DC4)->v) = 0x0;
        (((struct o14_uint *)0xC2B2DC4)->v) = (0x0 + (*(int *)0xC1ECCD4));
        *(unsigned int *)0xC1ECCD4 = 0x0;
        (((struct o20_uint *)0xC2B2DC4)->v) = 0x2;
        (((struct o24_uint *)0xC2B2DC4)->v) = 0x1;
        (((struct o0_float *)0xC2B2DC4)->v) = 0.0f;
    }
    return FUN_0c058ca6(0xE04A9, 0x0);
}

int FUN_0c05c00c(int a4, int a5, float f4)
{
    register float u0;
    register float u1;

    u0 = ((1.0f - f4) * (1.0f - f4));
    FUN_0c073c40(a5, a4, ((1.0f - f4) * u0));
    u0 = ((1.0f - f4) * (1.0f - f4));
    u1 = (f4 * u0);
    FUN_0c06e700(a5, (a4 + 0xC), (u1 * (*(float *)0xC05C0BC)));
    u0 = (f4 * f4);
    u1 = ((1.0f - f4) * u0);
    FUN_0c06e700(a5, ((a4 + 0xC) + 0xC), (u1 * (*(float *)0xC05C0BC)));
    u0 = (f4 * f4);
    return (FUN_0c06e700(a5, (((a4 + 0xC) + 0xC) + 0xC), (f4 * u0)));
}

int FUN_0c069b10(int a4)
{
    int stk[3];
    register float t0;
    register int t23;
    register float u4;
    register float u19;
    register float u12;
    float s1;

    t0 = nlLength((a4 + 0x54), 0xC175930);
    if (t0 > 750.0f) {
        (((struct o7C_uint *)(a4))->v) = 0x5;
    }
    t23 = 0xC069BDC;
    if (50.0f > t0) {
        u4 = *(float *)0xC175A14;
        t23 = 0xC069BE0;
        s1 = _builtin_fabsf(u4);
        u19 = s1;
        if (!(s1 > 0.150000006f)) {
            t23 = 0x3C8;
            if ((*(int *)0xC175C7C) != 0) {
                *(unsigned int *)0xC175908 = 0x0;
                FUN_0c061f7e((a4 + 0x14), 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8));
                (((struct o7C_uint *)(a4))->v) = (((((struct o7C_int *)(a4))->v)) + 0x1);
                t23 = 0x7C;
            } else {
                u12 = s1;
            }
            u19 = u12;
        }
    }
    if ((*(int *)0xC2AC2F4) == 0) {
        return FUN_0c069d2c(a4);
    }
    return t23;
}

int nlSetVertexMode(int a4)
{
    *(unsigned int *)(((*(int *)0xC2BF728) + 0x0)) = 0x600608;
    *(unsigned int *)(((*(int *)0xC2BF728) + 0x8)) = (*(int *)((((((a4 << 2) + a4) << 2) + 0xC113A20) + 0x0)));
    *(unsigned int *)(((*(int *)0xC2BF728) + 0xC)) = (*(int *)(((((((a4 << 2) + a4) << 2) + 0xC113A20) + 0x4) + 0x0)));
    *(unsigned int *)(((*(int *)0xC2BF728) + 0x20)) = (*(int *)(((((((a4 << 2) + a4) << 2) + 0xC113A20) + 0x8) + 0x0)));
    (((struct o44_uint *)((*(int *)0xC2BF728)))->v) = (*(int *)(((((((a4 << 2) + a4) << 2) + 0xC113A20) + 0xC) + 0x0)));
    (((struct o40_uint *)((*(int *)0xC2BF728)))->v) = (*(int *)(((((((a4 << 2) + a4) << 2) + 0xC113A20) + 0x10) + 0x0)));
    (((struct o0_uint *)0xC2BB50C)->v) = (*(int *)((((((a4 << 2) + a4) << 2) + 0xC113A20) + 0x0)));
    (((struct o4_uint *)0xC2BB50C)->v) = (*(int *)(((((((a4 << 2) + a4) << 2) + 0xC113A20) + 0x4) + 0x0)));
    (((struct o8_uint *)0xC2BB50C)->v) = (*(int *)(((((((a4 << 2) + a4) << 2) + 0xC113A20) + 0x8) + 0x0)));
    (((struct oC_uint *)0xC2BB50C)->v) = (*(int *)(((((((a4 << 2) + a4) << 2) + 0xC113A20) + 0xC) + 0x0)));
    (((struct o10_uint *)0xC2BB50C)->v) = (*(int *)(((((((a4 << 2) + a4) << 2) + 0xC113A20) + 0x10) + 0x0)));
    return kmProcessVertexRenderState((*(int *)0xC2BF728));
}

int nlSpriteSetGarbagedTextureOnce_Sub(int a4, int a5, int a6)
{
    int stk[5];
    register int t1;
    register int t3;
    register int t4;
    register int t22;
    register int t7;
    register int t10;
    register int t12;
    register int t16;
    register int t17;

    t1 = a5;
    if (a6 == 1) {
        t1 = (*(int *)(((int)stk + 12)));
    }
    t3 = *(int *)0xC2BF8E4;
    t4 = *(int *)0xC2BB3E8;
    t22 = 0xFFFFFFFF;
    if ((*(int *)((((((t1 + t3) << 2) << 1) + t4) + 0x0))) == 0) {
    } else {
        t7 = *(int *)((((((t1 + t3) << 2) << 1) + t4) + 0x4));
        t10 = *(short *)((((t1 + t3) << 1) + ((((struct o0_int *)0xC2C3E30)->v))));
        *(unsigned int *)(((int)stk + 4)) = (((t10 << 2) << 2) << 1);
        t12 = (((struct o10_int *)0xC2C3E30)->v);
        *(unsigned int *)(((int)stk + 8)) = ((((t10 << 2) << 2) << 1) + t12);
        *(unsigned int *)(((int)stk + 0)) = ((*(int *)((((((t10 << 2) << 2) << 1) + t12) + 0xC))) & 0x7E00000);
        nlSetTextureParameter((*(int *)(((int)stk + 8))), t7);
        t16 = *(int *)(((int)stk + 4));
        t17 = (((struct o10_int *)0xC2C3E30)->v);
        *(unsigned int *)(((t16 + t17) + 0xC)) = ((*(int *)(((t16 + t17) + 0xC))) | (*(int *)(((int)stk + 0))));
        t22 = 0x0;
    }
    return t22;
}

int syTmrGenMicroToCount(int a4, int a5)
{
    register int t6;

    t6 = 0x8;
    if ((unsigned short)a5 != 0) {
        t6 = 0x20;
        if ((unsigned short)a5 != 1) {
            t6 = 0x200;
            if ((unsigned short)a5 != 3) {
                t6 = 0x800;
                if ((unsigned short)a5 != 4) {
                    t6 = 0x80;
                }
            }
        }
    }
    return ((((int)((unsigned int)a4 / (unsigned int)t6)) * 0x64) + ((int)((unsigned int)(((int)((unsigned int)a4 % (unsigned int)t6)) * 0x64) / (unsigned int)t6)));
}

int cvFsDelDev(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t4;
    register int t1;
    register int t2;
    register int t3;

    if (a4 == 0) {
        return cvFsError(0xC172404, a5, a6, a7);
    }
    t0 = strlen(a4);
    t4 = t0;
    if ((unsigned int)0xC30B854 < (unsigned int)0xC30BA54) {
        t1 = 0xC30B854;
        t2 = 0xC30B854;
        for (;;) {
            t3 = strncmp(a4, (t2 + 0x4), t0);
            if (t3 == 0) {
                break;
            }
            t2 = (t2 + 0x10);
            t1 = (t1 + 0x10);
            if ((unsigned int)t2 >= (unsigned int)0xC30BA54) {
                return t3;
            }
        }
        *(unsigned char *)((t1 + 0x4)) = 0x0;
        t4 = 0x0;
    }
    return t4;
}

int FUN_0c048dfc(void)
{
    register int t2;
    register int t3;
    register int t6;

    *(unsigned int *)0xC177EF0 = 0xC177EF4;
    nlInitHeapMemory(0xC177EF4, 0x30000);
    nlInitEvent();
    t2 = nlMalloc(0xAC8);
    t3 = nlMalloc(0x4000);
    FUN_0c07e6ea(t2, t3);
    *(unsigned int *)0xC12FDC0 = (FUN_0c07e7e2());
    t6 = FUN_0c14dc2c(0x1);
    *(unsigned int *)0xC2ADA84 = t6;
    if (t6 == -1) {
        *(unsigned int *)0xC2ADA84 = (FUN_0c14dc2c(0x4));
    }
    ntInfExit();
    nlFree(t2);
    return nlFree(t3);
}

int FUN_0c056d8e(void)
{
    register int t5;

    FUN_0c076230(0.0f, 0.0f, 0.0f);
    (((struct o34_uint *)0xC2B3114)->v) = 0x200A;
    (((struct o8_float *)0xC2B3114)->v) = (float)(((((struct o0_int *)0xC2B3164)->v)) + 0x19D);
    (((struct o10_float *)0xC2B3114)->v) = (((((struct o10_float *)0xC2B3164)->v)) + 1.0f);
    (((struct o14_float *)0xC2B3114)->v) = (((((struct o10_float *)0xC2B3164)->v)) + 1.0f);
    (((struct o1C_float *)0xC2B3114)->v) = 0.0f;
    (((struct o24_float *)0xC2B3114)->v) = 1.0f;
    (((struct o28_uint *)0xC2B3114)->v) = 0x0;
    (((struct o0_uint *)0xC2B3114)->v) = 0x155;
    (((struct o4_float *)0xC2B3114)->v) = ((((struct o0_float *)0xC056E58)->v));
    t5 = ((int (*)(int, float))(FUN_0c07ada0))(0xC2B3114, 1.0f);
    (((struct o0_uint *)0xC2B3114)->v) = 0x156;
    (((struct o4_float *)0xC2B3114)->v) = ((((struct o4_float *)0xC056E58)->v));
    return ((int (*)(int))(FUN_0c07ada0))(0xC2B3114);
}

int FUN_0c0604d0(void)
{
    int t0;
    register int t1;

    FUN_0c05f6fe(0xC2B9C1C);
    t1 = FUN_0c06cd00();
    FUN_0c05f470(0xC2B9C1C, t1, 0.0f, 0.0f);
    (((struct o0_float *)0xC2B9C24)->v) = 0.0f;
    (((struct o4_uint *)0xC2B9C24)->v) = 0x0;
    t1 = *(int *)0xC175C80;
    if (((int)t1 >= 0) && (t0 = *(int *)0xC175C80, (int)t0 <= (int)0x3)) {
        (((struct oC_uint *)0xC2B9CA0)->v) = (*(int *)(((t1 << 2) + 0xC10E870)));
    } else {
        (((struct oC_uint *)0xC2B9CA0)->v) = (((*(int *)0xC1ECD14) - (*(int *)(((FUN_0c06cd00()) + 0x0)))) - 90);
    }
    FUN_0c0605e2();
    (((struct o0_uint *)0xC2B9CA0)->v) = (((((struct o0_int *)0xC2B9CA0)->v)) + 0x1);
    return 0x84;
}


void nlFatalErrorTrap(int a4)
{
    int stk[3];
    register int t1;
    register int t4;
    register int t7;
    register int t10;
    register int t13;

    *(unsigned int *)(((int)stk + 4)) = a4;
    if (a4 != 1) {
        if (a4 != 2) {
            if (a4 != 3) {
                if (a4 != 4) {
                    t1 = (*(int *)(((((int)stk + 4) + 0x4) + 0x0)));
                    *(int *)((int)stk + 0) = t1;
                    kmSetBorderColor(t1);
                    for (;;) {
                    }
                }
                *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = 0xFFFF00FF;
                t4 = (*(int *)(((((int)stk + 4) + 0x4) + 0x0)));
                *(int *)((int)stk + 0) = t4;
                kmSetBorderColor(t4);
                for (;;) {
                }
            }
            *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = 0xFF00FF00;
            t7 = (*(int *)(((((int)stk + 4) + 0x4) + 0x0)));
            *(int *)((int)stk + 0) = t7;
            kmSetBorderColor(t7);
            for (;;) {
            }
        }
        *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = 0xFFFF0000;
        t10 = (*(int *)(((((int)stk + 4) + 0x4) + 0x0)));
        *(int *)((int)stk + 0) = t10;
        kmSetBorderColor(t10);
        for (;;) {
        }
    }
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = 0xFF0000FF;
    t13 = (*(int *)(((((int)stk + 4) + 0x4) + 0x0)));
    *(int *)((int)stk + 0) = t13;
    kmSetBorderColor(t13);
    for (;;) {
    }
}

int nlExp(float f4)
{
    register float u0;
    register float u7;
    register int t8;
    register float u9;
    register int t10;
    register float u11;
    register float u4;

    u0 = (((struct o0_float *)0xC070CA8)->v);
    if (!(0.0f > f4)) {
        u4 = ((((struct o4_float *)0xC070CA8)->v));
    } else {
        u4 = ((((struct o8_float *)0xC070CA8)->v));
    }
    u7 = ((float)(int)(u4 + (f4 / u0)) * u0);
    t8 = 0xA;
    u9 = (((f4 - u7) * (f4 - u7)) / ((((struct oC_float *)0xC070CA8)->v)));
    for (;;) {
        t10 = t8;
        t8 = (t8 - 4);
        u11 = ((float)t10 + u9);
        u9 = ((f4 - u7) * (f4 - u7));
        u9 = (u9 / u11);
        if ((int)t8 < (int)0x6) {
            break;
        }
    }
    return nlLdexpf((int)(u4 + (f4 / u0)), ((((f4 - u7) + u9) + (1.0f + 1.0f)) / ((u9 - (f4 - u7)) + (1.0f + 1.0f))));
}

int FUN_0c07f13c(int a4, int a5)
{
    int stk[3];
    register int t0;
    register int t7;
    register int t14;

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 0)) = a4;
    t0 = FUN_0c07e42c(a4);
    if (t0 == 0) {
        FUN_0c07e598(((int)stk + 0));
        if ((*(int *)(((int)stk + 0))) == 3) {
            memcpy((*(int *)(((int)stk + 4))), ((*(int *)0xC147740) + 0x788), 0x4);
            return 0x0;
        }
        t7 = FUN_0c07e4cc((*(int *)(((int)stk + 0))));
        if (t7 != 0) {
            return t7;
        }
        if ((*(int *)(((int)stk + 0))) == 1) {
            t14 = (0x2D0 + (*(int *)0xC147740));
        } else {
            t14 = (0x528 + (*(int *)0xC147740));
        }
        *(unsigned int *)(((int)stk + 8)) = t14;
        memcpy((*(int *)(((int)stk + 4))), (t14 + 0x8), 0x4);
        return 0x0;
    }
    return t0;
}

int FUN_0c08f6b4(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t0;
    register int t11;

    *(unsigned int *)(((int)stk + 16)) = a4;
    *(unsigned short *)(((((int)stk + 0) + 0xE) + 0x0)) = a5;
    t0 = *(int *)(((int)stk + 16));
    *(unsigned int *)(((int)stk + 0)) = ((t0 * 0x154) + 0xC2C8D2C);
    *(unsigned int *)(((int)stk + 4)) = (*(int *)(((*(int *)((((t0 * 0x154) + 0xC2C8D2C) + 0x1C))) + 0x30)));
    *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 4))) - 1);
    for (;;) {
        if ((int)(*(int *)(((int)stk + 8))) < 0) {
            return 0xFFFFFFFF;
        }
        t11 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC2C8D28) + 0xC)))))((*(int *)(((*(int *)(((int)stk + 0))) + 0x24))), ((*(int *)(((int)stk + 8))) << 1), a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
        if ((unsigned short)t11 == (unsigned short)(*(short *)(((int)stk + 14)))) {
            break;
        }
        *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) - 1);
    }
    return (*(int *)(((int)stk + 8)));
}

int kmChangeLatencyModel(int a4, int a5, int a6, int a7)
{
    register int t3;
    int t5;

    (((struct o2C_uint *)0xC300C14)->v) = 0x0;
    if ((*(int *)0xC300ADC) != 0) {
        for (;;) {
            t3 = ((int (*)(int, int, int, int))(((((struct o0_int *)0xC300B38)->v))))(((((struct o4_int *)0xC300B38)->v)), a5, a6, a7);
            if (((unsigned int)((((struct o2C_int *)0xC300C14)->v)) <= (unsigned int)0xA) && (t5 = *(int *)0xC300ADC, t5 != 0)) continue;
            break;
        }
    }
    (((struct o0_uint *)0xC300C14)->v) = a4;
    (((struct o0_uint *)0xC300CF0)->v) = a5;
    (((struct o4_uint *)0xC300CF0)->v) = (a5 & 0xF);
    (((struct o8_uint *)0xC300C14)->v) = 0x0;
    (((struct oC_uint *)0xC300C14)->v) = 0xFFFFFFFF;
    (((struct o10_uint *)0xC300C14)->v) = 0xFFFFFFFF;
    (((struct o14_uint *)0xC300C14)->v) = 0xFFFFFFFF;
    (((struct o18_uint *)0xC300C14)->v) = 0x0;
    (((struct o1C_uint *)0xC300C14)->v) = 0x0;
    (((struct o20_uint *)0xC300C14)->v) = 0x0;
    return 0x0;
}

int FUN_0c14e936(int a4, int a5, int a6)
{
    int t0;

    t0 = *(signed char *)((a4 + 0x1));
    if ((t0 != 3) && (t0 != 4)) {
        if ((*(signed char *)((a4 + 0x1))) == 5) {
            *(unsigned int *)((a5 + 0x0)) = (FUN_0c16201e((*(int *)((a4 + 0x4)))));
            *(unsigned int *)((a6 + 0x0)) = (FUN_0c161fe2((*(int *)((a4 + 0x4)))));
            *(unsigned int *)((a5 + 0x0)) = ((*(int *)((a5 + 0x0))) * ((int)((int)0x10 / (int)(FUN_0c161ffa((*(int *)((a4 + 0x4))))))));
        } else {
            *(unsigned int *)((a5 + 0x0)) = 0x0;
            *(unsigned int *)((a6 + 0x0)) = 0x1;
        }
    } else {
        thunk_mwRnaGetTime((*(int *)((a4 + 0xC))), a5, a6);     /* manual: the arguments the original passes (the generator had dropped them) */
    }
    *(unsigned int *)((a5 + 0x0)) = ((*(int *)((a5 + 0x0))) + ((((struct o88_int *)(a4))->v)));
    return 0x88;
}

int kmiCheckRenderTexture(int a4)
{
    register int t5;
    register int t12;

    if (((*(int *)((a4 + 0x18))) & 4) == 0) {
        if ((*(int *)((a4 + 0x4))) != 1) {
            return 0x4;
        }
        t5 = *(int *)((a4 + 0x8));
        t12 = 0x3;
        if ((t5 & 0x38000000) != 0) {
            t12 = 0x1;
            if ((t5 & 0x38000000) != 0x8000000) {
                t12 = 0x2;
                if ((t5 & 0x38000000) != 0x10000000) {
                    t12 = a4;
                }
            }
        }
        *(unsigned int *)0xC300DD4 = (((*(int *)0xC300B9C) & 0xFFFFFFF8) | t12);
        return 0x0;
    }
    return 0x4;
}

int kmChangeContextFogMode(int a4)
{
    *(unsigned int *)0xC300E00 = (((*(int *)0xC300E00) & 0xFF3FFFFF) | (a4 << 22));
    *(unsigned int *)0xC17413C = (*(int *)0xC300E00);
    return 0x0;
}
