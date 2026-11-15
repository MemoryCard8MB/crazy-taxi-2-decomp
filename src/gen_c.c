/* Straight-line functions with calls and guards (batch gen_c): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10C4_int { char p[0x10C4]; int v; };
struct o10C8_int { char p[0x10C8]; int v; };
struct o10C8_uint { char p[0x10C8]; unsigned int v; };
struct o10CC_int { char p[0x10CC]; int v; };
struct o10CC_uint { char p[0x10CC]; unsigned int v; };
struct o10D0_int { char p[0x10D0]; int v; };
struct o10D0_uint { char p[0x10D0]; unsigned int v; };
struct o10D8_int { char p[0x10D8]; int v; };
struct o10D8_uint { char p[0x10D8]; unsigned int v; };
struct o10DC_int { char p[0x10DC]; int v; };
struct o10DC_uint { char p[0x10DC]; unsigned int v; };
struct o10E4_int { char p[0x10E4]; int v; };
struct o3E_ushort { char p[0x3E]; unsigned short v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o6D_uchar { char p[0x6D]; unsigned char v; };
struct o88_uint { char p[0x88]; unsigned int v; };
struct o8C_uint { char p[0x8C]; unsigned int v; };
struct o98_int { char p[0x98]; int v; };
struct oA0_int { char p[0xA0]; int v; };
struct oA4_int { char p[0xA4]; int v; };
struct oFAC_uint { char p[0xFAC]; unsigned int v; };
struct oFB0_int { char p[0xFB0]; int v; };
struct oFBC_int { char p[0xFBC]; int v; };
struct oFBC_uint { char p[0xFBC]; unsigned int v; };
int FUN_0c0576fc(void);
int FUN_0c05995e(void);
int FUN_0c059e02(float);
int FUN_0c05b3d4(int, int);
int FUN_0c05d156(int, int, int, float);
int FUN_0c06f610(int, int, int);
int FUN_0c0704c0(int, int, int, float);
int FUN_0c07a6f0(int, int, int, int);
int FUN_0c080780(void);
int FUN_0c080782(int, int, float);
int FUN_0c088092(int, int, float, float, float, float, float);
int FUN_0c149e6e(int);
int FUN_0c149ec6(int);
int FUN_0c14b2ec(void);
int FUN_0c14e8e4(int);
int FUN_0c1606d4(int, int, int);
extern void _builtin_prefetch(void *);
int fmMngMcpy_tail_0c1708b2(int, int, int);
int gdFsLoadDirG(int, int);
int gdFsSetGlobalErr(int, int);
int gdFsStrcmp_tail_0c15fa1c(int, int);
static float iaFscaC(int a)
{
    float s;
    float c;

    _builtin_fsca(a, &s, &c);
    return c;
}
static float iaFscaS(int a)
{
    float s;
    float c;

    _builtin_fsca(a, &s, &c);
    return s;
}
int kdGetDriverMode(int);
int kdGetGunPosition(int, int);
int kmDiscardVertexBuffer(void);
int kmSetFogDensity(int);
int kmSetHSyncLine(int);
int kmfGetInternalSystemMetrics(int);
int memset(int, int, int);
int mpdrv_get_version(int, int);
int mpdrv_ischanged(int);
int mpdrv_recognize(int);
int mpdrv_set_hreset_ns(void);
int mpdrv_stat(int);
int mwRnaErrEntryFunc(int, int);
int mwRnaGetNumData(int);
int nlCloseEvent(int);
int nlInitInterrupt0(int);
int nlInvLightVector(void);
int nlMultiLineSub(int, int);
int nlMultiMatrix8(int);
int nlMultiMatrixRevOrder(int);
int nlMultiMatrixRevOrder8(int);
int nlPushMatrix(int);
int nlSingleLineSub(int, int, int, int);
int nlSpriteFreeTextureOnce_Sub(int, int, int, int);
int syCfgInit(int);
int syTmrInt1SetEx(int, int, int, int);
int FUN_0c069890(void);
int FUN_0c071700(void);
void ETD_EntryRecvFunc(int a4, int a5);
float FUN_0c072150(int a4, int a5, int a6);
int FUN_0c072fe0(void);
void FUN_0c076130(float f4);
void vmsio_init(void);
int kmSetWaitVsyncCount(int a4);
void ovInit(int a4, int a5);
int gdFsSetGlobalErrG(int a4);
int pdGetPeripheralError(int a4);
void pdSetThreshold(int a4, int a5);
int malloc(void);
int syMalloc(void);
int free(void);
int kmiFatalErrorEntry(int a4, int a5, int a6, int a7);
int syTmrGetCount(void);
int syTmrGenStop(void);
int syTmrGenGetCount(void);
int FUN_0c160688(int a4, int a5, int a6);
int FUN_0c1606b0(int a4, int a5, int a6);
void ADXERR_EntryErrFunc(int a4, int a5);
int FUN_0c161970(void);
int ADXSJD_EntryTrapFunc(int a4, int a5, int a6);
void adxstm_sj_internal_error(void);
void mwRnaSetupSnd(int a4, int a5);
void SJMEM_Reset(int a4);
int mpdrv_get_swapmode(void);
int mpdrv_speed(int a4);
int mpdrv_nopcount(int a4);
int mpdrv_get_nopcount(void);
int mpdrv_get_speed(void);
int mpdrv_debugmode(int a4);
int mpdrv_dreqcount(int a4);
int mpdrv_get_dreqcount(void);
int mpdrv_get_debugmode(void);
int FUN_0c169186(int a4);
int FUN_0c169172(void);
int FUN_0c16919a(int a4);
int FUN_0c169190(void);
int FUN_0c1691a4(void);
int FUN_0c1691d4(int a4);
int FUN_0c1691de(void);
int FUN_0c16a4bc(int a4, int a5, int a6);
int FUN_0c16a4d0(int a4, int a5, int a6);
int FUN_0c16a4f8(int a4, int a5, int a6);
int FUN_0c16a4e4(int a4, int a5, int a6);
int ADXB_EntryAddWrFunc(int a4, int a5, int a6);
void FUN_0c16c2d8(int a4);
int FUN_0c16f238(void);
void FUN_0c01e43c(void);
int FUN_0c01e6f0(void);
void FUN_0c020244(void);
int FUN_0c0293ea(int a4, float f4);
void FUN_0c02d3ba(void);
void FUN_0c02f698(void);
int FUN_0c031444(void);
void FUN_0c050440(void);
void FUN_0c0584da(void);
int FUN_0c05763e(void);
int FUN_0c0584e2(void);
int FUN_0c05d1b4(int a4, int a5, float f4);
void FUN_0c060022(void);
int FUN_0c06f550(int a4, int a5, int a6);
int FUN_0c070080(void);
int FUN_0c0704b0(void);
int FUN_0c071a60(int a4);
float FUN_0c072148(int a4);
int FUN_0c072ff0(void);
int FUN_0c073010(void);
int FUN_0c075d50(void);
int FUN_0c075d60(void);
int FUN_0c075d70(int a4, float f4);
int _INITLIBH(void);
int _FINISHLIBH(void);
int kmiSetSysConfigFlag(int a4);
int gdFsGetGlobalErrG(void);
int gdFsGetWorkHnG(void);
int gdFsGetSysHnG(void);
int kmSetStripLength(int a4);
void kdSetGunTrigger(int a4);
void FUN_0c160dbc(void);
void FUN_0c16125c(void);
int FUN_0c162262(int a4);
int ADXSTM_SetBufSize(int a4, int a5, int a6);
void FUN_0c16c856(int a4);
void adxpd_error(void);
void FUN_0c018b1c(int a4);
float FUN_0c018cfc(void);
void FUN_0c018cec(float f4);
void FUN_0c018d1e(float f4);
void FUN_0c027280(int a4);
void FUN_0c0293d4(int a4);
void FUN_0c029404(int a4);
void FUN_0c03341c(float f4);
void FUN_0c03393c(float f4);
void FUN_0c033942(float f4);
void FUN_0c0339c0(int a4);
void FUN_0c03f15e(int a4);
void FUN_0c046460(int a4);
int FUN_0c047aa4(void);
void FUN_0c047aaa(int a4);
int FUN_0c048e6e(void);
int thunk_FUN_0c019c6c(int a4);
void FUN_0c059908(int a4);
int FUN_0c059d8c(void);
void FUN_0c05bef8(int a4);
int FUN_0c05befe(void);
int FUN_0c05f42e(void);
int FUN_0c05f434(void);
void FUN_0c05f6f8(int a4, int a5, int a6);
int FUN_0c06cbe2(void);
int FUN_0c06cd00(void);
void FUN_0c06e990(int a4);
void FUN_0c06f1d0(int a4);
void FUN_0c06f190(int a4);
void FUN_0c06fbd0(int a4);
int FUN_0c0702b0(void);
int FUN_0c0702d0(int a4, int a5);
void FUN_0c070ea0(int a4);
void FUN_0c071920(int a4);
float FUN_0c072140(int a4);
void FUN_0c074f20(float f4);
int thunk_FUN_0c0765b0(void);
int thunk_FUN_0c155da0(int a4);
void FUN_0c078880(float f4);
void FUN_0c078890(float f4);
int kmiGetSysConfigFlag(void);
int thunk_FUN_0c14b2ec(void);
int pdGetMode(void);
int pdGunGetPosition(int a4, int a5);
int pdGunCheck(void);
void syRtcSetServerMode(int a4);
int syRtcGetStat(void);
int syCfgConvLang(int a4);
int ADXT_SetReloadSct(int a4, int a5);
int ADXT_SetAutoRcvr(int a4, int a5);
int kmiReadRegister(int a4);
int FUN_0c15cba0(void);
int gdFsChangeDir(int a4);
int syTmrDiffCount(int a4, int a5);
int kdGetStatus(int a4);
int kdIsChanged(int a4);
int kdGetVersion(int a4, int a5);
int kdGetSystemInfo(void);
int kdRecognizeChanged(int a4);
int kdGetGunLatchedPort(void);
void kdSetGunCallback(int a4);
int FUN_0c161880(void);
int thunk_FUN_0c1644d8(int a4);
int thunk_FUN_0c1643e4(void);
int FUN_0c16207e(int a4);
int ADXSJD_GetSpsdInfo(int a4);
int mwRnaIsOvrflw(int a4);
int mwRnaClearOvrflwFlg(int a4);
int mwRnaEntryErrFunc(int a4, int a5);
void SJRBF_EntryErrFunc(int a4, int a5, int a6);
void SJUNI_EntryErrFunc(int a4, int a5, int a6);
int FUN_0c16a44e(int a4);
int FUN_0c16a9ac(int a4);
int FUN_0c16a9b2(int a4);
int FUN_0c16ba4c(void);
int gdCiGetSctLen(void);
int cvFsGetDefDev(void);
void FUN_0c0272de(void);
void FUN_0c031138(void);
void FUN_0c04d3f8(void);
int thunk_FUN_0c05995e(void);
void FUN_0c059d88(void);
int FUN_0c05c080(int a4);
int FUN_0c05c0e6(int a4);
int FUN_0c05c0ea(int a4);
int FUN_0c05c0ee(int a4);
int FUN_0c05c0f2(int a4);
int FUN_0c06f840(int a4, int a5, int a6);
int FUN_0c0785a0(void);
int FUN_0c0784d0(void);
int FUN_0c078800(int a4, int a5, int a6);
int FUN_0c078820(int a4, int a5, int a6);
int FUN_0c078810(int a4, int a5, int a6);
int FUN_0c078850(int a4);
int FUN_0c078860(int a4);
int FUN_0c078870(int a4);
int FUN_0c07acb0(int a4, int a5, int a6);
int FUN_0c07a970(int a4, int a5, int a6);
void FUN_0c08072a(int a4);
void FUN_0c080770(void);
void vmsio_exit(void);
int kmSetForwardClipping(void);
void ovFinish(void);
int gdFsLoadDirFastG(int a4, int a5);
void syMallocFinish(void);
int FUN_0c14e916(int a4);
void kmiCheckRenderer(void);
void kmiUnloadDevice(void);
int kmiInitTimer(void);
void FUN_0c156d00(void);
void kmiInitRenderer(void);
int thunk_FUN_0c15cc44(int a4, int a5);
int syTmrInt1Set(int a4, int a5, int a6);
int thunk_FUN_0c1606d4(int a4, int a5, int a6);
int thunk_FUN_0c160706(int a4, int a5, int a6);
int ADXAMP_GetStat(int a4);
void FUN_0c1618dc(void);
int FUN_0c161ad0(int a4);
void FUN_0c161ad4(int a4, int a5);
int FUN_0c162436(int a4);
int FUN_0c16274a(int a4);
void FUN_0c162ff4(void);
void FUN_0c163594(void);
void mwlRnaClearBuf(void);
int mwRnaDiscardData(void);
void SJMEM_Error(void);
int SJMEM_GetUuid(int a4);
int SJMEM_GetBufPtr(int a4);
int SJMEM_GetBufSize(int a4);
void SJRBF_Error(void);
int SJRBF_GetUuid(int a4);
void SJUNI_Error(void);
int SJUNI_GetUuid(int a4);
int FUN_0c168000(void);
int FUN_0c168004(void);
int mpdrv_set_hreset(void);
int FUN_0c16a8d2(int a4);
int FUN_0c16a8f4(int a4);
void FUN_0c16ad4c(void);
void FUN_0c16bb00(void);
void FUN_0c16bb04(void);
void ADXPD_SetMode(int a4, int a5);
int FUN_0c088090(int a4, int a5, float f4, float f5, float f6, float f7, float f8);

int FUN_0c069890(void)
{
    register int t0;

    t0 = *(signed char *)0xC2BA6A7;
    *(unsigned char *)0xC2BA6A7 = (t0 | 0x40);
    return (t0 | 0x40);
}

int FUN_0c071700(void)
{
    register int t0;

    t0 = *(int *)0xC2BB820;
    *(unsigned int *)0xC2BB820 = (t0 | 0x1);
    return (t0 | 0x1);
}

void ETD_EntryRecvFunc(int a4, int a5)
{
    (((struct o0_uint *)0xC2BB82C)->v) = a4;
    (((struct o4_uint *)0xC2BB82C)->v) = a5;
}

float FUN_0c072150(int a4, int a5, int a6)
{
    register float u0;
    register float u1;

    u0 = iaFscaS(a4);
    u1 = iaFscaC(a4);
    *(float *)((a5 + 0x0)) = u0;
    *(float *)((a6 + 0x0)) = u1;
    return u0;
}

int FUN_0c072fe0(void)
{
    return nlMultiMatrix8(((*(int *)0xC2BF948) - 64));
}

void FUN_0c076130(float f4)
{
    *(float *)0xC1474C8 = f4;
    *(float *)0xC2BF8CC = f4;
}

void vmsio_init(void)
{
    *(unsigned int *)0xC1479E0 = 0x0;
}

int kmSetWaitVsyncCount(int a4)
{
    *(unsigned int *)0xC300AB4 = (a4 - 1);
    return 0x0;
}

void ovInit(int a4, int a5)
{
    (((struct o0_uint *)0x8C00FFF0)->v) = a4;
    (((struct o4_uint *)0x8C00FFF0)->v) = a5;
}

int gdFsSetGlobalErrG(int a4)
{
    *(unsigned int *)(((*(int *)0xC1737EC) + 0x30)) = a4;
    return 0x1;
}

int pdGetPeripheralError(int a4)
{
    return (*(int *)((0xC2D1208 + (a4 << 2))));
}

void pdSetThreshold(int a4, int a5)
{
    (((struct o0_uchar *)0xC2D126C)->v) = a4;
    (((struct o1_uchar *)0xC2D126C)->v) = a5;
}


int syMalloc(void)
{
    register int t1;

    t1 = *(int *)(((*(int *)0xC2D12B4) + 0x0));
    return ((int (*)(void))(t1))();
}


int kmiFatalErrorEntry(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(int *)0xC300B40;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, a7);
}

int syTmrGetCount(void)
{
    return (0xFFFFFFFF - (*(int *)0xFFD8000C));
}

int syTmrGenStop(void)
{
    register int t0;

    t0 = *(signed char *)0xFFD80004;
    *(unsigned char *)0xFFD80004 = (t0 & 0xFB);
    return (t0 & 0xFB);
}

int syTmrGenGetCount(void)
{
    return (0xFFFFFFFF - (*(int *)0xFFD80024));
}

int FUN_0c160688(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(int *)0x8C0000B0;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, 0x0);
}

int FUN_0c1606b0(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(int *)0x8C0000B0;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, 0x3);
}

void ADXERR_EntryErrFunc(int a4, int a5)
{
    (((struct o0_uint *)0xC174300)->v) = a4;
    (((struct o4_uint *)0xC174300)->v) = a5;
}

int FUN_0c161970(void)
{
    return memset(0xC302AC0, 0x0, 0x4E0);
}

int ADXSJD_EntryTrapFunc(int a4, int a5, int a6)
{
    (((struct o48_uint *)(a4))->v) = a5;
    (((struct o4C_uint *)(a4))->v) = a6;
    return 0x4C;
}

void adxstm_sj_internal_error(void)
{
    *(unsigned int *)0xC174318 = ((*(int *)0xC174318) + 0x1);
}

void mwRnaSetupSnd(int a4, int a5)
{
    (((struct o0_uint *)0xC174328)->v) = a4;
    (((struct o4_uint *)0xC174328)->v) = a5;
}

void SJMEM_Reset(int a4)
{
    *(unsigned int *)((a4 + 0xC)) = (*(int *)((a4 + 0x18)));
    *(unsigned int *)((a4 + 0x10)) = 0x0;
}

int mpdrv_get_swapmode(void)
{
    return ((((struct o10C4_int *)((*(int *)0xC30817C)))->v));
}

int mpdrv_speed(int a4)
{
    (((struct o10D0_uint *)((*(int *)0xC30817C)))->v) = a4;
    return 0x10D0;
}

int mpdrv_nopcount(int a4)
{
    (((struct o10CC_uint *)((*(int *)0xC30817C)))->v) = a4;
    return 0x10CC;
}

int mpdrv_get_nopcount(void)
{
    return ((((struct o10CC_int *)((*(int *)0xC30817C)))->v));
}

int mpdrv_get_speed(void)
{
    return ((((struct o10D0_int *)((*(int *)0xC30817C)))->v));
}

int mpdrv_debugmode(int a4)
{
    (((struct o10C8_uint *)((*(int *)0xC30817C)))->v) = a4;
    return 0x10C8;
}

int mpdrv_dreqcount(int a4)
{
    (((struct o10D8_uint *)((*(int *)0xC30817C)))->v) = a4;
    return 0x10D8;
}

int mpdrv_get_dreqcount(void)
{
    return ((((struct o10D8_int *)((*(int *)0xC30817C)))->v));
}

int mpdrv_get_debugmode(void)
{
    return ((((struct o10C8_int *)((*(int *)0xC30817C)))->v));
}

int FUN_0c169186(int a4)
{
    (((struct o10DC_uint *)((*(int *)0xC30817C)))->v) = a4;
    return 0x10DC;
}

int FUN_0c169172(void)
{
    return ((((struct o10E4_int *)((*(int *)0xC30817C)))->v));
}

int FUN_0c16919a(int a4)
{
    (((struct oFAC_uint *)((*(int *)0xC30817C)))->v) = a4;
    return 0xFAC;
}

int FUN_0c169190(void)
{
    return ((((struct o10DC_int *)((*(int *)0xC30817C)))->v));
}

int FUN_0c1691a4(void)
{
    return ((((struct oFB0_int *)((*(int *)0xC30817C)))->v));
}

int FUN_0c1691d4(int a4)
{
    (((struct oFBC_uint *)((*(int *)0xC30817C)))->v) = a4;
    return 0xFBC;
}

int FUN_0c1691de(void)
{
    return ((((struct oFBC_int *)((*(int *)0xC30817C)))->v));
}

int FUN_0c16a4bc(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(int *)0x8C0000B8;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, 0x0);
}

int FUN_0c16a4d0(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(int *)0x8C0000B8;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, 0x1);
}

int FUN_0c16a4f8(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(int *)0x8C0000B8;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, 0x3);
}

int FUN_0c16a4e4(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(int *)0x8C0000B8;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, 0x2);
}

int ADXB_EntryAddWrFunc(int a4, int a5, int a6)
{
    (((struct o88_uint *)(a4))->v) = a5;
    (((struct o8C_uint *)(a4))->v) = a6;
    return 0x8C;
}

void FUN_0c16c2d8(int a4)
{
    *(unsigned int *)((a4 + 0x0)) = 0x0;
    *(unsigned int *)((a4 + 0x4)) = 0x0;
    *(unsigned int *)((a4 + 0x8)) = 0x0;
}

int FUN_0c16f238(void)
{
    return memset(0xC30BA64, 0x0, 0x1A0);
}

void FUN_0c01e43c(void)
{
    *(unsigned int *)0xC1EC840 = 0x81;
}


void FUN_0c020244(void)
{
    *(unsigned int *)0xC2708C4 = 0x1;
}

int FUN_0c0293ea(int a4, float f4)
{
    *(float *)(((a4 << 2) + 0xC270EC4)) = f4;
    return 0xC270EC4;
}

void FUN_0c02d3ba(void)
{
    *(unsigned int *)0xC2752D8 = 0xFFFFFFFF;
}

void FUN_0c02f698(void)
{
    *(unsigned int *)0xC279058 = 0x1;
}

int FUN_0c031444(void)
{
    return syCfgInit(0xC289D0C);
}

void FUN_0c050440(void)
{
    *(unsigned int *)0xC2B29F8 = 0x1;
}

void FUN_0c0584da(void)
{
    *(unsigned int *)0xC2B33C4 = 0x0;
}

int FUN_0c05763e(void)
{
    *(float *)0xC132210 = 0.0f;
    return FUN_0c0576fc();
}

int FUN_0c0584e2(void)
{
    *(unsigned int *)0xC2B33C4 = 0x1;
    return 0xC2B33C4;
}

int FUN_0c05d1b4(int a4, int a5, float f4)
{
    *(unsigned int *)0xC136D80 = a4;
    return FUN_0c05d156(a4, a5, 0xC2B9738, f4);
}

void FUN_0c060022(void)
{
    *(unsigned int *)0xC13AFF8 = 0x0;
}


int FUN_0c070080(void)
{
    return kmfGetInternalSystemMetrics(0xC2BB540);
}

int FUN_0c0704b0(void)
{
    return kmDiscardVertexBuffer();
}

int FUN_0c071a60(int a4)
{
    return kmSetFogDensity(a4);
}

float FUN_0c072148(int a4)
{
    iaFscaS(a4);
    return (iaFscaC(a4));
}

int FUN_0c072ff0(void)
{
    return nlMultiMatrixRevOrder((*(int *)0xC2BF960));
}

int FUN_0c073010(void)
{
    return nlPushMatrix((*(int *)0xC2BF960));
}

int FUN_0c075d50(void)
{
    return nlMultiMatrixRevOrder8(0xC2BFC08);
}


int FUN_0c075d70(int a4, float f4)
{
    return FUN_0c080782(a4, 0xC2BF8B0, f4);
}

int _INITLIBH(void)
{
    return FUN_0c149e6e((*(int *)0xC16FB54));
}

int _FINISHLIBH(void)
{
    return FUN_0c149ec6((*(int *)0xC16FB54));
}

int kmiSetSysConfigFlag(int a4)
{
    *(unsigned int *)0xC1737E4 = a4;
    return a4;
}

int gdFsGetGlobalErrG(void)
{
    return (*(int *)(((*(int *)0xC1737EC) + 0x30)));
}

int gdFsGetWorkHnG(void)
{
    return (*(int *)(((*(int *)0xC1737EC) + 0x1C)));
}

int gdFsGetSysHnG(void)
{
    return (*(int *)(((*(int *)0xC1737EC) + 0x14)));
}

int kmSetStripLength(int a4)
{
    *(unsigned int *)0xC300AAC = a4;
    return 0x0;
}

void kdSetGunTrigger(int a4)
{
    *(unsigned int *)0xC302734 = (a4 + 0x1);
}

void FUN_0c160dbc(void)
{
    *(unsigned int *)0xC1742EC = 0x0;
}

void FUN_0c16125c(void)
{
    *(unsigned int *)0xC1742F8 = 0x0;
}

int FUN_0c162262(int a4)
{
    return memset(a4, 0x0, 0x68);
}

int ADXSTM_SetBufSize(int a4, int a5, int a6)
{
    *(unsigned int *)((a4 + 0x1C)) = a5;
    *(unsigned int *)((a4 + 0x18)) = a6;
    return 0x1;
}

void FUN_0c16c856(int a4)
{
    *(unsigned int *)((a4 + 0x4)) = 0x0;
    *(unsigned int *)((a4 + 0x0)) = 0x0;
}

void adxpd_error(void)
{
    *(unsigned int *)0xC174790 = 0x1;
}

void FUN_0c018b1c(int a4)
{
    *(unsigned int *)0xC177DC4 = a4;
}

float FUN_0c018cfc(void)
{
    return (*(float *)0xC11CE60);
}

void FUN_0c018cec(float f4)
{
    *(float *)0xC11CE60 = f4;
}

void FUN_0c018d1e(float f4)
{
    *(float *)0xC11CE50 = f4;
}

void FUN_0c027280(int a4)
{
    *(unsigned int *)0xC270BB8 = a4;
}

void FUN_0c0293d4(int a4)
{
    *(unsigned int *)0xC128C28 = a4;
}

void FUN_0c029404(int a4)
{
    *(unsigned int *)0xC270ED8 = a4;
}

void FUN_0c03341c(float f4)
{
    *(float *)0xC2A5858 = f4;
}

void FUN_0c03393c(float f4)
{
    *(float *)0xC2A5874 = f4;
}

void FUN_0c033942(float f4)
{
    *(float *)0xC2A5774 = f4;
}

void FUN_0c0339c0(int a4)
{
    *(unsigned int *)0xC2A46CC = a4;
}

void FUN_0c03f15e(int a4)
{
    *(unsigned int *)0xC2A4680 = a4;
}

void FUN_0c046460(int a4)
{
    *(unsigned int *)0xC12FAAC = a4;
}

int FUN_0c047aa4(void)
{
    return (*(int *)0xC12D2B4);
}

void FUN_0c047aaa(int a4)
{
    *(unsigned int *)0xC12D2B0 = a4;
}

int FUN_0c048e6e(void)
{
    return (*(int *)0xC12FDC0);
}

int thunk_FUN_0c019c6c(int a4)
{
    return nlCloseEvent(a4);
}

void FUN_0c059908(int a4)
{
    *(unsigned int *)0xC2B8604 = a4;
}

int FUN_0c059d8c(void)
{
    return FUN_0c059e02((*(float *)0xC177D9C));
}

void FUN_0c05bef8(int a4)
{
    *(unsigned int *)0xC1368A8 = a4;
}

int FUN_0c05befe(void)
{
    return (*(int *)0xC1368A8);
}

int FUN_0c05f42e(void)
{
    return 0xC2B9738;
}

int FUN_0c05f434(void)
{
    return 0xC2B981C;
}

void FUN_0c05f6f8(int a4, int a5, int a6)
{
    *(unsigned int *)((a4 + 0x24)) = a5;
    *(unsigned int *)((a4 + 0x28)) = a6;
}

int FUN_0c06cbe2(void)
{
    return (*(int *)0xC13C348);
}

int FUN_0c06cd00(void)
{
    return (*(int *)0xC13C354);
}

void FUN_0c06e990(int a4)
{
    *(unsigned int *)0xC2BF8E4 = a4;
}

void FUN_0c06f1d0(int a4)
{
    *(unsigned int *)0xC147344 = a4;
}

void FUN_0c06f190(int a4)
{
    *(unsigned int *)0xC147340 = a4;
}

void FUN_0c06fbd0(int a4)
{
    *(unsigned int *)0xC2BB450 = a4;
}

int FUN_0c0702b0(void)
{
    return (*(int *)0xFFD8000C);
}

int FUN_0c0702d0(int a4, int a5)
{
    return (a4 - a5);
}

void FUN_0c070ea0(int a4)
{
    *(unsigned int *)0xC14736C = a4;
}

void FUN_0c071920(int a4)
{
    *(unsigned int *)0xC2BB88C = a4;
}

float FUN_0c072140(int a4)
{
    register float u0;

    u0 = iaFscaS(a4);
    iaFscaC(a4);
    return u0;
}

void FUN_0c074f20(float f4)
{
    *(float *)0xC2C4DC8 = f4;
}

int thunk_FUN_0c0765b0(void)
{
    return nlInvLightVector();
}

int thunk_FUN_0c155da0(int a4)
{
    return kmSetHSyncLine(a4);
}

void FUN_0c078880(float f4)
{
    *(float *)0xC1475D0 = f4;
}

void FUN_0c078890(float f4)
{
    *(float *)0xC1475D4 = f4;
}

int kmiGetSysConfigFlag(void)
{
    return (*(int *)0xC1737E4);
}


int pdGetMode(void)
{
    return kdGetDriverMode(0x5);
}

int pdGunGetPosition(int a4, int a5)
{
    return kdGetGunPosition(a4, a5);
}

int pdGunCheck(void)
{
    return kdGetDriverMode(0x8);
}

void syRtcSetServerMode(int a4)
{
    *(unsigned int *)0xC2D12EC = a4;
}

int syRtcGetStat(void)
{
    return (*(int *)0xC2D12EC);
}

int syCfgConvLang(int a4)
{
    return (a4 - 48);
}

int ADXT_SetReloadSct(int a4, int a5)
{
    (((struct o3E_ushort *)(a4))->v) = a5;
    return 0x3E;
}

int ADXT_SetAutoRcvr(int a4, int a5)
{
    (((struct o6D_uchar *)(a4))->v) = a5;
    return 0x6D;
}

int kmiReadRegister(int a4)
{
    return (*(int *)((a4 + 0xA05F8000)));
}

int FUN_0c15cba0(void)
{
    return 0xC1712C0;
}

int gdFsChangeDir(int a4)
{
    return gdFsSetGlobalErr(a4, 0x0);
}

int syTmrDiffCount(int a4, int a5)
{
    return (a5 - a4);
}

int kdGetStatus(int a4)
{
    return mpdrv_stat(a4);
}

int kdIsChanged(int a4)
{
    return mpdrv_ischanged(a4);
}

int kdGetVersion(int a4, int a5)
{
    return mpdrv_get_version(a4, a5);
}

int kdGetSystemInfo(void)
{
    return 0xC3024A4;
}

int kdRecognizeChanged(int a4)
{
    return mpdrv_recognize(a4);
}

int kdGetGunLatchedPort(void)
{
    return (*(int *)0xC302738);
}

void kdSetGunCallback(int a4)
{
    *(unsigned int *)0xC3024E0 = a4;
}

int FUN_0c161880(void)
{
    return 0x7FFFFFFF;
}


int thunk_FUN_0c1643e4(void)
{
    return mwRnaDiscardData();
}

int FUN_0c16207e(int a4)
{
    return ((((struct o98_int *)(a4))->v));
}

int ADXSJD_GetSpsdInfo(int a4)
{
    return (a4 + 0x58);
}

int mwRnaIsOvrflw(int a4)
{
    return (unsigned char)(*(signed char *)((a4 + 0x4)));
}

int mwRnaClearOvrflwFlg(int a4)
{
    *(unsigned char *)((a4 + 0x4)) = 0x0;
    return 0x0;
}

int mwRnaEntryErrFunc(int a4, int a5)
{
    return mwRnaErrEntryFunc(a4, a5);
}

void SJRBF_EntryErrFunc(int a4, int a5, int a6)
{
    *(unsigned int *)((a4 + 0x28)) = a5;
    *(unsigned int *)((a4 + 0x2C)) = a6;
}

void SJUNI_EntryErrFunc(int a4, int a5, int a6)
{
    *(unsigned int *)((a4 + 0x28)) = a5;
    *(unsigned int *)((a4 + 0x2C)) = a6;
}

int FUN_0c16a44e(int a4)
{
    return (0xFFFFFFF & a4);
}

int FUN_0c16a9ac(int a4)
{
    return ((((struct oA4_int *)(a4))->v));
}

int FUN_0c16a9b2(int a4)
{
    return ((((struct oA0_int *)(a4))->v));
}

int FUN_0c16ba4c(void)
{
    return 0xC174414;
}

int gdCiGetSctLen(void)
{
    return 0x800;
}

int cvFsGetDefDev(void)
{
    return 0xC30BA54;
}

void FUN_0c0272de(void)
{
    
}

void FUN_0c031138(void)
{
    
}

void FUN_0c04d3f8(void)
{
    
}

int thunk_FUN_0c05995e(void)
{
    return FUN_0c05995e();
}

void FUN_0c059d88(void)
{
    
}

int FUN_0c05c080(int a4)
{
    return FUN_0c05b3d4(a4, 0xC);
}

int FUN_0c05c0e6(int a4)
{
    return (*(int *)((a4 + 0x0)));
}

int FUN_0c05c0ea(int a4)
{
    return (*(int *)((a4 + 0x4)));
}

int FUN_0c05c0ee(int a4)
{
    return (*(int *)((a4 + 0x0)));
}

int FUN_0c05c0f2(int a4)
{
    return (*(int *)((a4 + 0x4)));
}

int FUN_0c06f840(int a4, int a5, int a6)
{
    return FUN_0c06f610(a4, a5, a6);
}

int FUN_0c0785a0(void)
{
    return 0x0;
}

int FUN_0c0784d0(void)
{
    return nlInitInterrupt0(0x0);
}

int FUN_0c078800(int a4, int a5, int a6)
{
    return nlSingleLineSub(a4, a5, a6, 0x0);
}

int FUN_0c078820(int a4, int a5, int a6)
{
    return nlSingleLineSub(a4, a5, a6, 0x1);
}

int FUN_0c078810(int a4, int a5, int a6)
{
    return nlSingleLineSub(a4, a5, a6, 0x2);
}

int FUN_0c078850(int a4)
{
    return nlMultiLineSub(a4, 0x2);
}

int FUN_0c078860(int a4)
{
    return nlMultiLineSub(a4, 0x1);
}

int FUN_0c078870(int a4)
{
    return nlMultiLineSub(a4, 0x3);
}

int FUN_0c07acb0(int a4, int a5, int a6)
{
    return nlSpriteFreeTextureOnce_Sub(a4, a5, a6, 0x0);
}

int FUN_0c07a970(int a4, int a5, int a6)
{
    return FUN_0c07a6f0(a4, a5, a6, 0x0);
}

void FUN_0c08072a(int a4)
{
    _builtin_prefetch((void *)a4);
}

void FUN_0c080770(void)
{
    
}

void vmsio_exit(void)
{
    
}

int kmSetForwardClipping(void)
{
    return 0x78;
}

void ovFinish(void)
{
    
}

int gdFsLoadDirFastG(int a4, int a5)
{
    return gdFsLoadDirG(a4, a5);
}

void syMallocFinish(void)
{
    
}

int FUN_0c14e916(int a4)
{
    return (*(signed char *)((a4 + 0x1)));
}

void kmiCheckRenderer(void)
{
    
}

void kmiUnloadDevice(void)
{
    
}

int kmiInitTimer(void)
{
    return 0x0;
}

void FUN_0c156d00(void)
{
    
}

void kmiInitRenderer(void)
{
    
}

int thunk_FUN_0c15cc44(int a4, int a5)
{
    return gdFsStrcmp_tail_0c15fa1c(a4, a5);
}

int syTmrInt1Set(int a4, int a5, int a6)
{
    return syTmrInt1SetEx(a4, a5, a6, 0x2);
}

int thunk_FUN_0c1606d4(int a4, int a5, int a6)
{
    return FUN_0c1606d4(a4, a5, a6);
}

int thunk_FUN_0c160706(int a4, int a5, int a6)
{
    return fmMngMcpy_tail_0c1708b2(a4, a5, a6);
}

int ADXAMP_GetStat(int a4)
{
    return (*(signed char *)((a4 + 0x1)));
}

void FUN_0c1618dc(void)
{
    
}

int FUN_0c161ad0(int a4)
{
    return (*(signed char *)((a4 + 0x1)));
}

void FUN_0c161ad4(int a4, int a5)
{
    *(unsigned int *)((a4 + 0x8)) = a5;
}

int FUN_0c162436(int a4)
{
    return (*(signed char *)((a4 + 0x1)));
}

int FUN_0c16274a(int a4)
{
    return (*(int *)((a4 + 0x14)));
}

void FUN_0c162ff4(void)
{
    
}

void FUN_0c163594(void)
{
    
}

void mwlRnaClearBuf(void)
{
    
}

int mwRnaDiscardData(void)
{
    return 0x0;
}

void SJMEM_Error(void)
{
    for (;;) {
    }
}

int SJMEM_GetUuid(int a4)
{
    return (*(int *)((a4 + 0x8)));
}

int SJMEM_GetBufPtr(int a4)
{
    return (*(int *)((a4 + 0x14)));
}

int SJMEM_GetBufSize(int a4)
{
    return (*(int *)((a4 + 0x18)));
}

void SJRBF_Error(void)
{
    for (;;) {
    }
}

int SJRBF_GetUuid(int a4)
{
    return (*(int *)((a4 + 0x8)));
}

void SJUNI_Error(void)
{
    for (;;) {
    }
}

int SJUNI_GetUuid(int a4)
{
    return (*(int *)((a4 + 0x8)));
}

int FUN_0c168000(void)
{
    return 0x1;
}

int FUN_0c168004(void)
{
    return 0x1;
}

int mpdrv_set_hreset(void)
{
    return mpdrv_set_hreset_ns();
}

int FUN_0c16a8d2(int a4)
{
    return (*(int *)((a4 + 0x18)));
}

int FUN_0c16a8f4(int a4)
{
    return (*(int *)((a4 + 0x4)));
}

void FUN_0c16ad4c(void)
{
    
}

void FUN_0c16bb00(void)
{
    
}

void FUN_0c16bb04(void)
{
    
}

void ADXPD_SetMode(int a4, int a5)
{
    *(unsigned int *)((a4 + 0x8)) = a5;
}

int FUN_0c088090(int a4, int a5, float f4, float f5, float f6, float f7, float f8)
{
    return FUN_0c088092(a4, a5, 1.0f, f5, f6, f7, f8);
}
