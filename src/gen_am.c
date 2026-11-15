/* Straight-line functions with calls and guards (batch gen_am): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o10_ushort { char p[0x10]; unsigned short v; };
struct o10E8_int { char p[0x10E8]; int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o30_float { char p[0x30]; float v; };
struct o34_ushort { char p[0x34]; unsigned short v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_int { char p[0x40]; int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o60_int { char p[0x60]; int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_int { char p[0x84]; int v; };
struct o94_int { char p[0x94]; int v; };
struct o98_uint { char p[0x98]; unsigned int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oFC0_int { char p[0xFC0]; int v; };
struct oFF_uchar { char p[0xFF]; unsigned char v; };
int ADXPD_Destroy(int);
int FUN_0c016240(void);
int FUN_0c018d1e(float);
int FUN_0c01bde2(int);
int FUN_0c01e990(int, int, int);
int FUN_0c01eea6(void);
int FUN_0c01efc0(void);
int FUN_0c01f9ca(int);
int FUN_0c02802a(float);
int FUN_0c028924(void);
int FUN_0c02897a(int);
int FUN_0c02f698(void);
int FUN_0c030f66(int);
int FUN_0c040f22(int, float, float, float);
int FUN_0c040fb4(int, float, float, float);
int FUN_0c04c138(int, int);
int FUN_0c04c5da(void);
int FUN_0c04ca94(void);
int FUN_0c04cba6(void);
int FUN_0c04cbf8(void);
int FUN_0c04cde4(void);
int FUN_0c04ce28(void);
int FUN_0c04d28a(void);
int FUN_0c04fdfc(void);
int FUN_0c04feb0(void);
int FUN_0c05072c(void);
int FUN_0c053f6a(void);
int FUN_0c058be4(int);
int FUN_0c05b3d4(int, int);
int FUN_0c05f4c8(int);
int FUN_0c05f788(int, int);
int FUN_0c05ff5c(int);
int FUN_0c064f92(int);
int FUN_0c067494(int, int);
int FUN_0c06753c(int, int);
int FUN_0c06823e(int, int, int, int);
int FUN_0c068304(int, int, int, int);
int FUN_0c06f550(int, int, int);
int FUN_0c0702f0(void);
float FUN_0c070a10(int);
float FUN_0c070a60(float);
int FUN_0c070ea0(int);
int FUN_0c072230(int, int);
int FUN_0c072fe0(void);
int FUN_0c073010(void);
int FUN_0c073520(int, float, float);
int FUN_0c075450(int, int, int, int, int);
int FUN_0c075d50(void);
int FUN_0c077b3c(int);
int FUN_0c07b84a(void);
int FUN_0c07bf7a(int, int, int);
int FUN_0c07c006(int, int, int, int);
int FUN_0c07c080(int, int, int);
int FUN_0c07c5b8(int, int, int);
int FUN_0c07d254(int, int);
int FUN_0c07e3d0(int);
int FUN_0c07e42c(int);
int FUN_0c07e6ea(int, int);
int FUN_0c07ff00(void);
int FUN_0c07ffbc(int, int, int);
int FUN_0c080324(int, float, float);
int FUN_0c14e8e4(int);
int FUN_0c14ec14(int, int, int);
int FUN_0c14ff0c(int);
int FUN_0c160584(int, int);
int FUN_0c1616f4(int, int);
int FUN_0c161fe2(int, int, int, int);
int FUN_0c161fee(int);
int FUN_0c16201e(int);
int FUN_0c16207e(int);
int FUN_0c162084(int, int, int, int);
int FUN_0c1622c6(int, int, int, int, int);
int FUN_0c162464(int, int, int, int);
int FUN_0c1658d0(int, int);
int FUN_0c168000(void);
int FUN_0c16ada2(int, ...);
int FUN_0c16bab0(int, ...);
int FUN_0c16c2d8(int);
int Init_Pass_Time(void);
int Init_Shift(void);
int Voice_ShutUp(int);
extern float _builtin_fipr(float *, float *);
extern int _builtin_get_imask(void);
extern void _builtin_ld_ext(float (*)[4]);
extern void _builtin_prefetch(void *);
extern void _builtin_set_imask(int);
extern void _builtin_st_ext(float (*)[4]);
int buFbrCreateFiber(int, int, int, int);
int cvFsError(int, int, int, int);
int cvFsGetStat(int, int, int, int);
int fmMngExecServer(void);
int fmMngFormat(int);
int fmMngInit(int, int, int);
int gdCiStopTr(int);
int gdFsClose(int);
int gdFsGetStatG(void);
int gdFsOpen(void);
int gdFsToUpper(int);
static float iaFsrra(float x)
{
    return _builtin_fsrra(x);
}
int kdGetGunLatchedPort(void);
int kdRecvFrame(void);
int kdSetDriverMode(int, int);
int kdSetHandler(int, int);
int kmSetColorClampValue(int, ...);
int kmiCopyToPVRMemory(int, int, int);
int kmiFBfree(int);
int kmiMemCopy4(int, int, int);
int kmiPurgeMemory(int, int);
int kmiQueryFinishDMA(int);
int kmiRegisterCallback(int, int, int, int);
int kmiUnloadDevice(void);
int kmiVQFBfree(int);
int memcpy(int, int, int);
int memset(int, int, int);
int mpdrv_set_allstatreq(void);
int mpdrv_set_arctrl(void);
int mpdrv_set_dkill(void);
int mpdrv_set_dreq(void);
int mpdrv_set_dreset(void);
int mpdrv_set_ft4ctrl(void);
int mpdrv_set_getcond(void);
int mpdrv_set_getminfo(void);
int mpdrv_set_hreset(void);
int mpdrv_set_setcond(void);
int mpdrv_set_transagain(void);
int mpdrv_setcmd(int, int, int, int, int, int);
int nlArcTan2(int, float, float);
int nlFree(int);
int nlGetMatrix(int);
int nlGetMatrix8(int);
int nlMalloc(int);
int nlMultiMatrix(int);
int nlMvSendTriangle(int, int, int);
int nlPopMatrix(int);
int nlPrintSetGarbagedTexture(void);
int nlPushMatrix(int);
int nlRenderTextureBegin(int, float);
int nlRenderTextureEnd(void);
int nlRotateXSC(float, float);
float nlSin(int);
float nlSinf(float);
int ntInfExit(void);
int pdGetPeripheralInfo(int);
int strncpy(int, int, int);
int syG2Read(int, int, int, int, int, int);
int syG2Write(int, int, int, int, int, int);
int syRtcDateToCount(void);
int syRtcGetDate(int);
int vmsio_exit(void);
int FUN_0c031b94(int a4, int a5, int a6, int a7);
int FUN_0c07b760(void);
int pdGunLeave(void);
int syRtcAicaSetDateHi(int a4);
int FUN_0c14dfa0(int a4, int a5);
int FUN_0c14fbc2(void);
void kmytex_FBFreeEntry(int a4);
void kmytex_VQFreeEntry(int a4);
int gdFsGetSearchID(int a4);
void syChainMasterHandlerPVR_H(int a4, int a5, int a6, int a7);
int syTmrInit(void);
int kdSetDeviceRequest(void);
int kdSetDeviceReset(void);
int kdSetAllStatusRequest(void);
int kdSetDeviceKill(void);
int kdSetGetCondition(void);
int kdSetGetMediaInfo(void);
int kdSetARControl(void);
int kdSetSetCondition(void);
int kdSetResetPattern(void);
int kdSetTransmitAgain(void);
int kdSetFT4Control(void);
void ADXCRS_Unlock(void);
int FUN_0c1616ce(int a4, int a5, int a6, int a7);
int FUN_0c163288(void);
int mwRnaGetTransSw(int a4);
void syMmuDeleteEntry(int a4, int a5, int a6);
int mpdrv_set_getminfo_ns(int a4, int a5, int a6);
int mwlSbAlloc(void);
int cvFsStopTr(int a4, int a5, int a6, int a7);
int cvFsSetSctLen(int a4, int a5, int a6, int a7);
int FUN_0c16f700(int a4, int a5, int a6, int a7);
int FUN_0c16f752(int a4, int a5);
int game_init(void);
int GS_GuestResult(void);
int exec_GameSystem(void);
int FUN_0c01f9a6(void);
int FUN_0c0228cc(void);
int FUN_0c03e4d0(int a4);
int Pause_ExecRenderTexture2nd(void);
int FUN_0c040efe(int a4, int a5);
void FUN_0c044940(int a4, int a5, int a6, int a7);
float usedCpuPowerCheck(void);
int FUN_0c04e43a(int a4);
int FUN_0c0586bc(void);
int FUN_0c05f6d4(int a4, float f4);
int FUN_0c05f44c(int a4, int a5);
int FUN_0c05f98c(void);
int FUN_0c067352(int a4, int a5, int a6, int a7);
int FUN_0c06b5b0(void);
int FUN_0c06ccdc(void);
int nlCommonTextureClearTextureIndex(int a4, int a5);
int nlIntrHandlerEventA40(void);
int nlIntrHandlerEventB00(void);
int FUN_0c077ba0(int a4);
void nlIntrClearEvent(int a4, int a5, int a6, int a7);
int FUN_0c07e558(int a4, int a5, int a6);
int kmSetBackGroundPlane(int a4, int a5, int a6, int a7);
int kmQueryFinishLastTextureDMA(void);
int gdFsExecServerG(void);
int pdGunEnter(int a4);
void kmytex_FBEnQueueTop(int a4, int a5, int a6, int a7);
int kmiCopyFromFrameBuffer(int a4, int a5, int a6);
int kmFreeTexture(int a4);
int kmiCreateDummyRegionforAvoidCacheBug(int a4);
int syChainMasterHandler(int a4, int a5, int a6, int a7);
int kdSetCallback(int a4, int a5, int a6);
int FUN_0c165ae0(int a4, int a5);
int ADXB_Destroy(int a4);
int gdc_StopStreamVoiceAll(void);
int FUN_0c027fdc(int a4, int a5, int a6, float f4);
int saveBufferInit(int a4);
int FUN_0c03e52a(void);
int FUN_0c040e3a(int a4, int a5);
void FUN_0c048f04(int a4, int a5, int a6, int a7, int a8);
int FUN_0c050386(int a4, int a5, int a6, int a7, int a8);
void FUN_0c05c198(int a4, int a5, int a6);
int FUN_0c064936(int a4);
int nlPrintInitFontTexture(void);
int FUN_0c07c142(int a4, int a5, int a6);
int FUN_0c07c184(int a4, int a5, int a6);
int FUN_0c07cfd0(int a4);
int FUN_0c07e8a0(int a4);
int FUN_0c080370(int a4, int a5);
int vmsfb_create(int a4, int a5, int a6);
int gdFsCheckMedia(int a4);
int convert_support(int a4);
int kmSetVSyncCallback(int a4, int a5);
int pdVmsLcdBltAsm(int a4, int a5);
int FUN_0c160f20(void);
int FUN_0c16197a(int a4);
int ADXSTM_GetCurOfst(int a4, int a5, int a6, int a7);
int mwRnaGetNumRoom(int a4);
int SJMEM_Init(void);
int SJRBF_Init(void);
int SJUNI_Init(void);
int FUN_0c16c2b6(void);
int FUN_0c16c2e2(int a4, int a5, int a6, int a7);
int FUN_0c019446(void);
int FUN_0c019466(void);
int gdc_FileLoadInit(void);
int colliNodeAlloc(void);
void ExecRenderTexture1st(float f4);
int CompBackupBuffer(void);
int rtcGetSeconds(void);
int FUN_0c03f19a(void);
int GotoMenu(void);
int FUN_0c0503b4(int a4);
int End_Adv_Title_LOGO(float f4);
int FUN_0c05be8a(int a4, float f4);
int FUN_0c05beaa(int a4, float f4);
int FUN_0c05c0f6(int a4);
int FUN_0c06030a(int a4, int a5);
int FUN_0c060354(int a4, int a5, int a6);
int FUN_0c066226(int a4);
int FUN_0c065346(int a4, int a5);
int FUN_0c06b484(void);
int FUN_0c06cbc2(void);
int nlRotateAxe(int a4, int a5);
float nlAddVector3op(int a4, int a5, int a6);
int nlProjectScreen3D(int a4, int a5);
int FUN_0c074070(void);
int FUN_0c074020(void);
int nlSynchFunction(int a4);
int FUN_0c07b6e6(int a4);
int FUN_0c07c164(int a4, int a5, int a6, int a7);
int FUN_0c07ced8(int a4);
int FUN_0c07cef8(int a4);
int FUN_0c07e7fe(int a4);
int FUN_0c07e81e(int a4);
void vmsfs_c_setfunc(int a4, int a5);
float _app_sins(float f4);
int mwRnaIsPause(int a4);
int mwRnaGetStat(int a4);
int mwRnaSetStartSmpl(int a4, int a5);
int mwRnaGetOutVol(int a4);
int mwRnaGetDrctLvl(int a4);
int FUN_0c165de2(int a4, int a5);
int gdCiGetGdfsWork(void);
int FUN_0c0164de(void);
int FUN_0c01b920(int a4, float f4, float f5);
int FUN_0c01e000(int a4);
int FUN_0c01e13c(float f4);
int FUN_0c027fbe(float f4, float f5);
void FUN_0c0281b6(int a4);
int FUN_0c0423c8(int a4);
int FUN_0c04e64e(void);
int FUN_0c04c5bc(void);
int FUN_0c05a338(void);
int FUN_0c05bf60(void);
int FUN_0c05f834(void);
int FUN_0c06027a(int a4, int a5);
int FUN_0c061e50(int a4);
void FUN_0c06ce72(void);
void FUN_0c06db2e(void);
void FUN_0c06e460(void);
int FUN_0c070e60(void);
int FUN_0c0737d0(float f4);
int FUN_0c076230(float f4, float f5, float f6);
int FUN_0c078310(void);
int FUN_0c078330(void);
int FUN_0c0783b0(void);
int FUN_0c07b650(int a4);
int FUN_0c07d616(int a4);
int _ntInfWaitDone(void);
int FUN_0c088000(int a4, int a5, int a6, float f4, float f5, float f6, float f7);
int strcat(int a4, int a5);
int _allzero(int a4, int a5);
int _mvsto2b(int a4, int a5);
int kmGetCurrentVertexOffset(int a4);
int FUN_0c14ebba(int a4);
int FUN_0c14eb7e(int a4);
int FUN_0c14eb9c(int a4, int a5, int a6, int a7);
int FUN_0c14ebd8(int a4);
int FUN_0c14ebf6(int a4, int a5, int a6, int a7);
int kmiBGPlaneCountWords(int a4);
int kmChangeContextDepthMode(int a4);
int kmChangeContextCullingMode(int a4);
int kmChangeContextFlipUV(int a4);
int kmChangeContextClampUV(int a4);
int gdFsStrcmp_tail_0c15fa1c(int a4, int a5, int a6, int a7);
int FUN_0c15ca22(int a4);
int FUN_0c1623f0(int a4, int a5, int a6, int a7);
int mwRnaGetNumData(int a4);
int mwRnaGetBitPerSmpl(int a4);
int mwRnaGetSfreq(int a4);
int SJUNI_GetNumChunk(int a4, int a5);
int FUN_0c165b68(int a4);
int FUN_0c165b86(int a4);
int FUN_0c165d86(int a4);
int kmiErrorISR02(void);
int mpdrv_set_getcond_ns(int a4, int a5);
int mwRnaErrEntryFunc(int a4, int a5);
int mwSbSetBitPerSmpl(int a4, int a5);
int gdCiClose(int a4);
int ADXPD_EntryMono(int a4, int a5, int a6, int a7);
int FUN_0c16f81c(int a4, int a5, int a6, int a7, int a8, int a9);
int FUN_0c018b00(int a4);
int FUN_0c01ee10(int a4, int a5);
int FUN_0c020368(int a4);
void FUN_0c02877a(int a4);
int FUN_0c03e776(void);
int FUN_0c03fbbc(int a4);
int FUN_0c04c11c(void);
int FUN_0c0506c2(void);
void FUN_0c058688(int a4);
int FUN_0c058e82(void);
int FUN_0c060006(int a4);
int FUN_0c067376(int a4, int a5, int a6, int a7);
float FUN_0c06e700(int a4, int a5, float f4);
int FUN_0c06eea0(int a4);
int FUN_0c070330(int a4, int a5);
void FUN_0c073ab0(void);
float FUN_0c073c40(int a4, int a5, float f4);
void FUN_0c073e90(int a4);
int FUN_0c0755c0(int a4, int a5, int a6);
int FUN_0c07a380(int a4, int a5, int a6, int a7);
int FUN_0c07e57c(int a4);
int FUN_0c07e7e2(void);
int vmsfs_c_getstate(int a4);
int vmsfs_exit(void);
float _app_coss(float f4);
int _mvito4b(int a4, int a5);
int kmQueryFinishFlushVertexBuffer(void);
int pdGunGetLatchedPort(void);
int FUN_0c14f85c(void);
int kmiBGPlanePutColor2(int a4, int a5, int a6, int a7);
int kmiReleaseHardware(void);
int kmSetEORCallback(int a4, int a5);
int kmSetEndOfVertexCallback(int a4, int a5);
int kmSetTexOverflowCallback(int a4, int a5);
int kmSetStripOverRunCallback(int a4, int a5);
int kmSetEndOfYUVCallback(int a4, int a5);
int kmSetWaitVsyncCallback(int a4, int a5);
int ADXSTM_GetGdfsStat(int a4, int a5, int a6, int a7);
void SJMEM_Finish(void);
void SJRBF_Finish(void);
void SJUNI_Finish(void);
int FUN_0c165dc6(int a4, int a5, int a6, int a7);
int FUN_0c01ead0(int a4, int a5);

int FUN_0c031b94(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t2;
    register int t4;

    t0 = 0x1601D;
    t2 = a6;
    for (;;) {
        t4 = t2 == 0;
        t2 = (t2 - 1);
        if (t4) {
            break;
        }
        t0 = (t0 + ((*(int *)((a5 + 0x0)))));
    }
    if (a4 == 0) {
        *(unsigned int *)((a7 + 0x0)) = t0;
        return 0x1;
    }
    if ((*(int *)((a7 + 0x0))) == t0) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c07b760(void)
{
    register int t0;
    register int t1;

    t0 = 0x0;
    for (;;) {
        t1 = FUN_0c07b84a();
        if (t1 == 0) {
            break;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x1000000) {
            return 0xFFFFFF00;
        }
    }
    return 0x0;
}

int pdGunLeave(void)
{
    register int t3;

    kdSetDriverMode(0x8, 0x0);
    kdSetDriverMode(0x9, 0x0);
    t3 = kdSetHandler((*(int *)0xC16FF0C), 0x0);
    *(unsigned int *)0xC2D0D24 = 0x0;
    return t3;
}

int syRtcAicaSetDateHi(int a4)
{
    int stk[3];

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(int *)((int)stk + 4) = 0x0;
    *(int *)((int)stk + 0) = 0x0;
    syG2Write((((int)stk + 0) + 0x8), 0xA0710000, 0x4, 0x1, 0x0, 0x0);
    return 0x0;
}

int FUN_0c14dfa0(int a4, int a5)
{
    register int t1;

    t1 = FUN_0c1658d0(((((struct o94_int *)(a4))->v)), a5);
    if ((int)t1 < 0) {
        return FUN_0c1616f4(0xC170424, a5);
    }
    return t1;
}

int FUN_0c14fbc2(void)
{
    register int t0;
    register int t1;

    if ((unsigned int)0xC2D1BF4 < (unsigned int)0xC2D21F4) {
        t0 = 0xC2D1BF4;
        t1 = 0xC2D1BF4;
        for (;;) {
            if ((*(signed char *)((t0 + 0x0))) == 0) {
                break;
            }
            t0 = (t0 + 0x60);
            t1 = (t1 + 0x60);
            if ((unsigned int)t0 >= (unsigned int)0xC2D21F4) {
                return 0x0;
            }
        }
        t0 = t1;
    } else {
        t0 = 0x0;
    }
    return t0;
}

void kmytex_FBFreeEntry(int a4)
{
    register int t1;
    register int t2;
    register int t0;

    t1 = 0xC2D58CC;
    t2 = 0xC2D58CC;
    for (;;) {
        if (t1 == a4) {
            t0 = (*(short *)((t2 + 0x0)));
            t0 = (t0 & 0xFFFE);
            *(unsigned short *)((t2 + 0x0)) = t0;
        }
        t1 = (t1 + 0x18);
        t2 = (t2 + 0x18);
        if ((unsigned int)t1 >= (unsigned int)0xC2ED8CC) {
            break;
        }
    }
}

void kmytex_VQFreeEntry(int a4)
{
    register int t1;
    register int t2;
    register int t0;

    t1 = 0xC2ED8CC;
    t2 = 0xC2ED8CC;
    for (;;) {
        if (t1 == a4) {
            t0 = (*(short *)((t2 + 0x0)));
            t0 = (t0 & 0xFFFE);
            *(unsigned short *)((t2 + 0x0)) = t0;
        }
        t1 = (t1 + 0x4C);
        t2 = (t2 + 0x4C);
        if ((unsigned int)t1 >= (unsigned int)0xC3008CC) {
            break;
        }
    }
}

int gdFsGetSearchID(int a4)
{
    register int t1;
    register int t2;
    register int t4;
    register int t0;

    t1 = 0xDA;
    t2 = a4;
    for (;;) {
        if ((*(signed char *)((t2 + 0x0))) == 0) {
            break;
        }
        t4 = *(signed char *)((t2 + 0x0));
        t2 = (t2 + 0x1);
        t0 = (gdFsToUpper(t4));
        t0 = (unsigned char)t0;
        t1 = (t1 + t0);
    }
    return (unsigned char)((unsigned int)t1 >> 2);
}

void syChainMasterHandlerPVR_H(int a4, int a5, int a6, int a7)
{
    register int t2;
    register int t5;

    _builtin_set_imask(0x6);
    t2 = (*(int *)0xC3020A8);
    for (;;) {
        if (t2 == 0) {
            break;
        }
        t5 = ((int (*)(int, int, int, int))((*(int *)((t2 + 0x0)))))((*(int *)((t2 + 0x8))), a5, a6, a7);
        t2 = (*(int *)((t2 + 0x4)));
    }
}

int syTmrInit(void)
{
    register int t1;

    (((struct o0_uchar *)0xFFD80000)->v) = 0x0;
    (((struct o4_uchar *)0xFFD80000)->v) = ((*(signed char *)0xFFD80004) & 0xFE);
    (((struct o10_ushort *)0xFFD80000)->v) = 0x2;
    (((struct o8_uint *)0xFFD80000)->v) = 0xFFFFFFFF;
    (((struct oC_uint *)0xFFD80000)->v) = 0xFFFFFFFF;
    t1 = *(signed char *)0xFFD80004;
    (((struct o4_uchar *)0xFFD80000)->v) = (t1 | 0x1);
    return (t1 | 0x1);
}

int kdSetDeviceRequest(void)
{
    register int t0;

    t0 = mpdrv_set_dreq();
    if (((((struct o10E8_int *)((*(int *)0xC30817C)))->v)) != 0) {
        kdRecvFrame();
    }
    return t0;
}

int kdSetDeviceReset(void)
{
    register int t0;

    t0 = mpdrv_set_dreset();
    if (((((struct o10E8_int *)((*(int *)0xC30817C)))->v)) != 0) {
        kdRecvFrame();
    }
    return t0;
}

int kdSetAllStatusRequest(void)
{
    register int t0;

    t0 = mpdrv_set_allstatreq();
    if (((((struct o10E8_int *)((*(int *)0xC30817C)))->v)) != 0) {
        kdRecvFrame();
    }
    return t0;
}

int kdSetDeviceKill(void)
{
    register int t0;

    t0 = mpdrv_set_dkill();
    if (((((struct o10E8_int *)((*(int *)0xC30817C)))->v)) != 0) {
        kdRecvFrame();
    }
    return t0;
}

int kdSetGetCondition(void)
{
    register int t0;

    t0 = mpdrv_set_getcond();
    if (((((struct o10E8_int *)((*(int *)0xC30817C)))->v)) != 0) {
        kdRecvFrame();
    }
    return t0;
}

int kdSetGetMediaInfo(void)
{
    register int t0;

    t0 = mpdrv_set_getminfo();
    if (((((struct o10E8_int *)((*(int *)0xC30817C)))->v)) != 0) {
        kdRecvFrame();
    }
    return t0;
}

int kdSetARControl(void)
{
    register int t0;

    t0 = mpdrv_set_arctrl();
    if (((((struct o10E8_int *)((*(int *)0xC30817C)))->v)) != 0) {
        kdRecvFrame();
    }
    return t0;
}

int kdSetSetCondition(void)
{
    register int t0;

    t0 = mpdrv_set_setcond();
    if (((((struct o10E8_int *)((*(int *)0xC30817C)))->v)) != 0) {
        kdRecvFrame();
    }
    return t0;
}

int kdSetResetPattern(void)
{
    register int t0;

    t0 = mpdrv_set_hreset();
    if (((((struct o10E8_int *)((*(int *)0xC30817C)))->v)) != 0) {
        kdRecvFrame();
    }
    return t0;
}

int kdSetTransmitAgain(void)
{
    register int t0;

    t0 = mpdrv_set_transagain();
    if (((((struct o10E8_int *)((*(int *)0xC30817C)))->v)) != 0) {
        kdRecvFrame();
    }
    return t0;
}

int kdSetFT4Control(void)
{
    register int t0;

    t0 = mpdrv_set_ft4ctrl();
    if (((((struct o10E8_int *)((*(int *)0xC30817C)))->v)) != 0) {
        kdRecvFrame();
    }
    return t0;
}

void ADXCRS_Unlock(void)
{
    register int t0;

    t0 = (((struct o0_int *)0xC1742F8)->v);
    (((struct o0_uint *)0xC1742F8)->v) = (t0 - 1);
    if ((t0 - 1) == 0) {
        _builtin_set_imask(((unsigned int)(((((((struct o4_int *)0xC1742F8)->v)) & 0xF) << 2) << 2) >> 4));
    }
}

int FUN_0c1616ce(int a4, int a5, int a6, int a7)
{
    register int t1;
    register int t4;

    t1 = (((struct o0_int *)0xC174300)->v);
    t4 = (strncpy(0xC3029A0, a4, 0xFF));
    if (t1 != 0) {
        t4 = (((int (*)(int, int, int, int))(t1))(((((struct o4_int *)0xC174300)->v)), 0xC3029A0, a6, a7));
    }
    return t4;
}

int FUN_0c163288(void)
{
    int stk[1];

    *(unsigned short *)(((int)stk + 0)) = (_builtin_get_imask());
    _builtin_set_imask(0xF);
    return ((int (*)(void))(0xAC1632B4))();
}

int mwRnaGetTransSw(int a4)
{
    if (a4 == 0) {
        FUN_0c16ada2(0xC171714);
        return 0xFFFFFFFF;
    }
    return (0x1 & (unsigned char)(*(signed char *)((a4 + 0x1))));
}

void syMmuDeleteEntry(int a4, int a5, int a6)
{
    if ((unsigned int)a4 < (unsigned int)0x40) {
        *(unsigned int *)(((0xF6000000 + (a4 << 8)) + 0x0)) = ((*(int *)((((a4 << 8) + 0xF6000000) + 0x0))) & 0xFFFFFEFF);
        *(unsigned int *)((((a4 << 8) + 0xF7000000) + 0x0)) = 0x0;
    }
}

int mpdrv_set_getminfo_ns(int a4, int a5, int a6)
{
    int stk[4];

    *(unsigned int *)((((int)stk + 8) + 0x0)) = a5;
    *(unsigned int *)((((int)stk + 8) + 0x4)) = ((a6 << 16) << 8);
    *(int *)((int)stk + 4) = 0x0;
    *(int *)((int)stk + 0) = 0x0;
    return (mpdrv_setcmd(a4, 0xA, ((int)stk + 8), 0x2, 0x0, 0x0));
}

int mwlSbAlloc(void)
{
    register int t0;
    register int t1;

    if ((unsigned int)0xC3087E0 < (unsigned int)0xC308B20) {
        t0 = 0xC3087E0;
        t1 = 0xC3087E0;
        for (;;) {
            if ((*(signed char *)((t0 + 0x4))) == 0) {
                break;
            }
            t0 = (t0 + 0x68);
            t1 = (t1 + 0x68);
            if ((unsigned int)t0 >= (unsigned int)0xC308B20) {
                return 0x0;
            }
        }
        t0 = t1;
    } else {
        t0 = 0x0;
    }
    return t0;
}

int cvFsStopTr(int a4, int a5, int a6, int a7)
{
    register int t5;
    register int t6;

    if (a4 == 0) {
        return cvFsError(0xC172630, a5, a6, a7);
    }
    if ((*(int *)(((*(int *)((a4 + 0x0))) + 0x28))) != 0) {
        t5 = *(int *)((a4 + 0x4));
        t6 = *(int *)(((*(int *)((a4 + 0x0))) + 0x28));
        return ((int (*)(int, int, int, int))(t6))(t5, a5, a6, a7);
    }
    return cvFsError(0xC17264C, a5, a6, a7);
}

int cvFsSetSctLen(int a4, int a5, int a6, int a7)
{
    register int t5;
    register int t6;

    if (a4 == 0) {
        return cvFsError(0xC1727B4, a5, a6, a7);
    }
    if ((*(int *)(((*(int *)((a4 + 0x0))) + 0x34))) != 0) {
        t5 = *(int *)((a4 + 0x4));
        t6 = *(int *)(((*(int *)((a4 + 0x0))) + 0x34));
        return ((int (*)(int, int, int, int))(t6))(t5, a5, a6, a7);
    }
    return cvFsError(0xC1727D4, a5, a6, a7);
}

int game_init(void)
{
    register int t0;

    *(unsigned char *)0xC1EC87C = 0x1;
    (((struct o0_uint *)0xC175C80)->v) = 0x0;
    (((struct o4_uint *)0xC175C80)->v) = 0x0;
    t0 = FUN_0c070ea0(0x3039);
    *(unsigned int *)0xC2AC2F4 = 0x0;
    return t0;
}

int GS_GuestResult(void)
{
    register int t0;

    t0 = (((struct o0_int *)0xC1ECCEC)->v);
    if ((int)t0 <= (int)((((struct o8_int *)0xC1ECCEC)->v))) {
        return 0x0;
    }
    if ((int)t0 < (int)((((struct oC_int *)0xC1ECCEC)->v))) {
        return 0x1;
    }
    return 0x2;
}

int exec_GameSystem(void)
{
    register int t2;
    register int t4;

    t2 = *(int *)(((((int)((int)(*(int *)0xC1ECD0C) % (int)0x3)) << 2) + 0xC097750));
    t4 = 0xC097750;
    if (t2 != 0) {
        t4 = (((int (*)(void))(t2))());
    }
    return t4;
}

int FUN_0c01f9a6(void)
{
    register int t0;

    t0 = FUN_0c028924();
    (((struct o0_uint *)0xC1ECD48)->v) = 0xFFFFFFFF;
    (((struct o4_uint *)0xC1ECD48)->v) = 0x0;
    (((struct o4_uint *)0xC2708B8)->v) = 0x0;
    (((struct o0_uint *)0xC2708B8)->v) = 0x0;
    *(unsigned int *)0xC123E5C = 0x0;
    return t0;
}

int FUN_0c0228cc(void)
{
    register int t1;

    *(unsigned int *)0xC270994 = 0x0;
    (((struct o0_uint *)0xC1ECCA8)->v) = 0x3;
    (((struct oC_uint *)0xC1ECCA8)->v) = (((((struct oC_int *)0xC1ECCA8)->v)) + 0x1);
    t1 = *(int *)0xC2AC2F0;
    if (t1 == 1) {
        return FUN_0c05072c();
    }
    return t1;
}

int FUN_0c03e4d0(int a4)
{
    register int t1;

    t1 = *(int *)(((pdGetPeripheralInfo(a4)) + 0x0));
    if (t1 == 0) {
        return 0x0;
    }
    return 0x1;
}

int Pause_ExecRenderTexture2nd(void)
{
    register int t0;

    t0 = *(int *)0xC2A464C;
    if (t0 == 1) {
        nlRenderTextureEnd();
        FUN_0c02802a(1.0f);
        return FUN_0c030f66(0x3);
    }
    return t0;
}

int FUN_0c040efe(int a4, int a5)
{
    register int t4;

    t4 = FUN_0c040fb4(0x8, ((((struct o14_float *)0xC040F84)->v)), 0.0f, ((((struct o0_float *)0xC040F84)->v)));
    *(unsigned int *)0xC2AB7D8 = ((*(int *)0xC2AB7D8) + 0x1);
    return t4;
}

void FUN_0c044940(int a4, int a5, int a6, int a7)
{
    register int t0;

    if (a4 == 0) {
        (((struct o0_uint *)0xC2AC2C8)->v) = 0x0;
        (((struct o24_uint *)0xC2AC2C8)->v) = 0x0;
        t0 = 0xC12D274;
        for (;;) {
            *(unsigned int *)((t0 + 0x0)) = 0x12C;
            t0 = (t0 + 0xC);
            if ((unsigned int)t0 >= (unsigned int)0xC12D28C) {
                break;
            }
        }
    }
}

float usedCpuPowerCheck(void)
{
    register int t0;
    register float u1;

    t0 = FUN_0c0702f0();
    u1 = *(float *)0xC12FAB4;
    *(float *)0xC12FAB4 = (float)t0;
    return (((float)t0 - u1) / (*(float *)0xC046578));
}

int FUN_0c04e43a(int a4)
{
    register int t1;

    if ((int)(*(int *)((a4 + 0x38))) >= 0) {
        t1 = *(int *)((a4 + 0x38));
        *(unsigned short *)(((t1 * 0x1C) + 0xC2B12E6)) = ((*(short *)(((t1 * 0x1C) + 0xC2B12E6))) - 1);
    }
    *(unsigned int *)((a4 + 0x38)) = 0xFFFFFFFF;
    (((struct o34_ushort *)(a4))->v) = 0xFFFFFFFF;
    return 0x34;
}

int FUN_0c0586bc(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = 0xC2B33C8;
    for (;;) {
        t1 = 0x0;
        t2 = t0;
        for (;;) {
            t1 = (t1 + 0x1);
            *(unsigned char *)((t2 + 0x0)) = 0x0;
            t2 = (t2 + 0x1);
            if ((int)t1 >= (int)0x600) {
                break;
            }
        }
        t0 = (t0 + 0x600);
        if ((unsigned int)t0 >= (unsigned int)0xC2B63C8) {
            break;
        }
    }
    return t1;
}

int FUN_0c05f6d4(int a4, float f4)
{
    register float u0;
    register int t1;
    register int t2;
    register float u3;

    u0 = *(float *)0xC05F778;
    t1 = 0xC05F778;
    t2 = a4;
    for (;;) {
        u3 = *(float *)((t2 + 0x0));
        if (!(u0 > u3)) {
            t1 = 0x0;
            return t1;
        }
        if (!(u3 > f4)) {
            t1 = 0x8;
            if ((*(float *)((t2 + t1))) > f4) {
                break;
            }
            t2 = (t2 + 0x8);
            continue;
        }
        t2 = (t2 + 0x8);
    }
    return (*(int *)((t2 + 0x4)));
}

int FUN_0c05f44c(int a4, int a5)
{
    FUN_0c05b3d4(a4, 0x40);
    (((struct o8_float *)(a4))->v) = 1.0f;
    *(unsigned int *)((a4 + 0x10)) = a5;
    return 0x8;
}

int FUN_0c05f98c(void)
{
    nlPushMatrix(0xC17596C);
    nlMultiMatrix(0xC2B9C5C);
    FUN_0c05f4c8(0xC2B9C1C);
    return nlPopMatrix(0x1);
}

int FUN_0c067352(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = (((struct o80_int *)(a4))->v);
    if (((int)t0 >= 0) && ((int)t0 < (int)0x3)) {
        t0 = *(int *)(((((((struct o80_int *)(a4))->v)) << 2) + 0xC11017C));
        return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, a7);
    }
    return 0x80;
}

int FUN_0c06b5b0(void)
{
    if ((*(int *)0xC1EC71C) == 1) {
        FUN_0c05b3d4(0xC2BA6C0, 0x260);
        return 0xC06B640;
    }
    return 0x0;
}

int FUN_0c06ccdc(void)
{
    register int t0;
    register int t1;

    t0 = (((struct o0_int *)0xC13C34C)->v);
    if (t0 != 0) {
        t1 = nlFree(t0);
        (((struct o8_uint *)0xC13C34C)->v) = 0x0;
        (((struct o4_uint *)0xC13C34C)->v) = 0x0;
        (((struct o0_uint *)0xC13C34C)->v) = 0x0;
        t0 = t1;
    }
    return t0;
}

int nlCommonTextureClearTextureIndex(int a4, int a5)
{
    register int t2;

    if ((int)a4 >= 0) {
        t2 = *(int *)0xC2BB3EC;
        *(unsigned int *)(((((int)a4 >> 5) << 2) + t2)) = ((*(int *)(((((int)a4 >> 5) << 2) + t2))) & (~((int)0x1 << (int)(0x1F & a4))));
    }
    return t2;
}

int nlIntrHandlerEventA40(void)
{
    register int t0;
    register int t1;

    *(unsigned int *)0xC2C3D98 = 0x3;
    t0 = *(int *)0xC2C3D3C;
    if (t0 != 0) {
        t1 = ((int (*)(void))(t0))();
    }
    *(unsigned int *)0xA05F6900 = 0x4000;
    return 0x0;
}

int nlIntrHandlerEventB00(void)
{
    register int t0;
    register int t1;

    *(unsigned int *)0xC2C3D98 = 0x5;
    t0 = *(int *)0xC2C3D40;
    if (t0 != 0) {
        t1 = ((int (*)(void))(t0))();
    }
    *(unsigned int *)0xA05F705C = 0x3;
    return 0x0;
}

int FUN_0c077ba0(int a4)
{
    register int t0;

    t0 = FUN_0c077b3c(a4);
    if (t0 == 4) {
        return 0x1;
    }
    return 0x0;
}

void nlIntrClearEvent(int a4, int a5, int a6, int a7)
{
    if ((int)a4 < (int)0x6) {
        ((int (*)(int, int, int, int))((*(int *)(((a4 << 2) + 0xC147588)))))(a4, a5, a6, a7);
    return;
    }
}

int FUN_0c07e558(int a4, int a5, int a6)
{
    register int t0;
    register int t3;

    t0 = fmMngInit(0x2, a4, a6);
    t3 = t0;
    if (t0 == -8) {
        t3 = (fmMngFormat(0x0));
    }
    return t3;
}

int kmSetBackGroundPlane(int a4, int a5, int a6, int a7)
{
    register int t1;

    t1 = ((int (*)(int, int, int, int))((*(int *)(((a5 << 2) + 0xC173D8C)))))(a4, a5, a6, a7);
    *(unsigned int *)0xC300974 = ((*(int *)0xC300974) & 0xFFF00000);
    return t1;
}

int kmQueryFinishLastTextureDMA(void)
{
    register int t2;

    if (((((struct o4_int *)0xC300CFC)->v)) != 1) {
        t2 = kmiQueryFinishDMA(((((struct o0_int *)0xC300CFC)->v)));
        if (t2 == 1) {
            return 0x0;
        }
        return 0x11;
    }
    return 0x0;
}

int gdFsExecServerG(void)
{
    register int t3;

    t3 = ((int (*)(void))(((((struct o40_int *)((*(int *)(((*(int *)0xC1737EC) + 0xC)))))->v))))();
    if ((*(int *)(((*(int *)0xC1737EC) + 0x1C))) != 0) {
        return gdFsGetStatG();
    }
    return t3;
}

int pdGunEnter(int a4)
{
    register int t2;

    if (a4 != 0) {
        kdSetDriverMode(0x8, a4);
        t2 = kdSetDriverMode(0x9, 0xFFFFFFFF);
        *(unsigned int *)0xC2D0D24 = a4;
    }
    return t2;
}

void kmytex_FBEnQueueTop(int a4, int a5, int a6, int a7)
{
    register int t1;

    if ((*(int *)((a4 + 0x0))) == 0) {
        *(unsigned int *)((a6 + 0x4)) = 0x0;
        *(unsigned int *)((a6 + 0x8)) = 0x0;
        *(unsigned int *)((a4 + 0x0)) = a6;
        *(unsigned int *)((a5 + 0x0)) = a6;
    } else {
        t1 = *(int *)((a4 + 0x0));
        *(unsigned int *)((a6 + 0x4)) = (*(int *)((t1 + 0x4)));
        *(unsigned int *)((a6 + 0x8)) = (*(int *)((a4 + 0x0)));
        *(unsigned int *)((t1 + 0x4)) = a6;
        *(unsigned int *)((a4 + 0x0)) = a6;
    }
}

int kmiCopyFromFrameBuffer(int a4, int a5, int a6)
{
    kmiMemCopy4(a4, (a5 + 0xA4000000), a6);
    kmiPurgeMemory(a4, a6);
    return 0x1;
}

int kmFreeTexture(int a4)
{
    register int t4;

    if ((unsigned short)(*(int *)((a4 + 0x0))) == 3) {
        t4 = (kmiVQFBfree(a4));
    } else {
        t4 = (kmiFBfree((*(int *)((a4 + 0x1C)))));
    }
    return t4;
}

int kmiCreateDummyRegionforAvoidCacheBug(int a4)
{
    int stk[6];

    *(unsigned int *)(((int)stk + 0)) = 0x10000000;
    *(unsigned int *)(((int)stk + 4)) = 0x80000000;
    *(unsigned int *)(((int)stk + 8)) = 0x80000000;
    *(unsigned int *)(((int)stk + 12)) = 0x80000000;
    *(unsigned int *)(((int)stk + 16)) = 0x80000000;
    *(unsigned int *)(((int)stk + 20)) = 0x80000000;
    return (kmiCopyToPVRMemory(a4, ((int)stk + 0), 0x18));
}

int syChainMasterHandler(int a4, int a5, int a6, int a7)
{
    register int t1;
    register int t2;

    t1 = 0xC301E60;
    t2 = (*(int *)(((((int)(short)a4 >> 4) << 2) + 0xC301E60)));
    for (;;) {
        if (t2 == 0) {
            break;
        }
        t1 = (((int (*)(int, int, int, int))((*(int *)((t2 + 0x0)))))((*(int *)((t2 + 0x8))), a5, a6, a7));
        t2 = (*(int *)((t2 + 0x4)));
    }
    return t1;
}

int kdSetCallback(int a4, int a5, int a6)
{
    register int t2;

    t2 = (((struct oFC0_int *)((*(int *)0xC30817C)))->v);
    *(unsigned int *)((((((((a4 << 1) + t2) << 1) + ((a4 << 1) + t2)) << 2) + 0xC3024E4) + 0x8)) = a5;
    *(unsigned int *)((((((((a4 << 1) + t2) << 1) + ((a4 << 1) + t2)) << 2) + 0xC3024E4) + 0x4)) = a6;
    *(unsigned int *)((((((((a4 << 1) + t2) << 1) + ((a4 << 1) + t2)) << 2) + 0xC3024E4) + 0x0)) = a4;
    return 0x0;
}

int FUN_0c165ae0(int a4, int a5)
{
    if (a4 == 0) {
        return (FUN_0c16bab0(0xC1718DC));
    }
    *(unsigned char *)((a4 + 0x4)) = (((a5 == 1)) ? 1 : 0);
    return (((a5 == 1)) ? 1 : 0);
}

int ADXB_Destroy(int a4)
{
    register int t3;

    if (a4 != 0) {
        ADXPD_Destroy((*(int *)((a4 + 0x8))));
        t3 = memset(a4, 0x0, 0xAC);
        *(unsigned short *)((a4 + 0x0)) = 0x0;
    }
    return t3;
}

int gdc_StopStreamVoiceAll(void)
{
    FUN_0c14e8e4(((((struct o0_int *)0xC1ECD54)->v)));
    FUN_0c14e8e4(((((struct o4_int *)0xC1ECD54)->v)));
    FUN_0c14e8e4(((((struct o8_int *)0xC1ECD54)->v)));
    return (FUN_0c14e8e4(((((struct oC_int *)0xC1ECD54)->v))));
}

int FUN_0c027fdc(int a4, int a5, int a6, float f4)
{
    register int t0;

    if (f4 > 0.0f) {
        t0 = 0xC128A6C;
        for (;;) {
            (((struct o8_float *)(t0))->v) = (1.0f / f4);
            t0 = (t0 + 0x14);
            if ((unsigned int)t0 >= (unsigned int)0xC128ABC) {
                break;
            }
        }
        t0 = 0x8;
    }
    return t0;
}

int saveBufferInit(int a4)
{
    memcpy(a4, 0xC0B33C8, 0x4);
    *(unsigned int *)((a4 + 0x4)) = 0x0;
    return memset((a4 + 0x8), 0xFFFFFFFF, 0xB40);
}

int FUN_0c03e52a(void)
{
    register int t1;

    if ((int)((((struct o4_int *)0xC2A46E4)->v)) > 0) {
        t1 = (((struct o4_int *)0xC2A46E4)->v);
        (((struct o4_uint *)0xC2A46E4)->v) = (t1 - 1);
        if ((t1 - 1) == 0) {
            (((struct o0_uint *)0xC2A46E4)->v) = 0x1;
            t1 = ((((struct o0_int *)0xC2A46E4)->v));
        }
    } else {
        t1 = ((((struct o0_int *)0xC2A46E4)->v));
    }
    return t1;
}

int FUN_0c040e3a(int a4, int a5)
{
    register int t3;

    t3 = FUN_0c040f22(0x10, 1.0f, 0.0f, (*(float *)0xC040E94));
    *(unsigned int *)0xC2AB7D8 = ((*(int *)0xC2AB7D8) + 0x1);
    return t3;
}

void FUN_0c048f04(int a4, int a5, int a6, int a7, int a8)
{
    int stk[2];

    *(unsigned short *)((((int)stk + 0) + 0x0)) = a4;
    *(unsigned short *)((((int)stk + 0) + 0x2)) = a5;
    *(unsigned short *)((((int)stk + 0) + 0x4)) = a6;
    *(unsigned char *)((a8 + 0x0)) = (*(signed char *)((((int)stk + 0) + 0x0)));
    *(unsigned char *)((a8 + 0x1)) = (*(signed char *)((((int)stk + 0) + 0x1)));
    *(unsigned char *)((a8 + 0x2)) = (*(signed char *)((((int)stk + 0) + 0x2)));
    *(unsigned char *)((a8 + 0x3)) = (*(signed char *)((((int)stk + 0) + 0x3)));
    *(unsigned char *)((a8 + 0x4)) = (*(signed char *)((((int)stk + 0) + 0x4)));
    *(unsigned char *)((a8 + 0x5)) = (*(signed char *)((((int)stk + 0) + 0x5)));
}

int FUN_0c050386(int a4, int a5, int a6, int a7, int a8)
{
    (((struct o0_uint *)0xC2B2958)->v) = a4;
    (((struct o4_uint *)0xC2B2958)->v) = a5;
    (((struct o20_uint *)0xC2B1DD4)->v) = a6;
    (((struct o8_uint *)0xC2B2958)->v) = a8;
    (((struct o0_uint *)0xC2B1DD4)->v) = (((((struct o0_int *)0xC2B1DD4)->v)) | 0x20);
    FUN_0c04fdfc();
    return Init_Shift();
}

void FUN_0c05c198(int a4, int a5, int a6)
{
    if ((*(int *)((a5 + 0x0))) != 0) {
        *(unsigned int *)(((*(int *)((a5 + 0x0))) + 0x4)) = a6;
        *(unsigned int *)((a6 + 0x0)) = (*(int *)((a5 + 0x0)));
        *(unsigned int *)((a5 + 0x0)) = a6;
        *(unsigned int *)((a6 + 0x4)) = a5;
    } else {
        *(unsigned int *)((a5 + 0x0)) = a6;
        *(unsigned int *)((a6 + 0x4)) = a5;
        *(unsigned int *)((a4 + 0x0)) = a6;
    }
    *(unsigned int *)((a4 + 0x8)) = ((*(int *)((a4 + 0x8))) + 0x1);
}

int FUN_0c064936(int a4)
{
    FUN_0c064f92(a4);
    FUN_0c06823e(a4, 0xC175930, 0x1, 0x14);
    return FUN_0c06753c(a4, 0x1);
}

int nlPrintInitFontTexture(void)
{
    register int t0;

    (((struct o0_uint *)0xC2BB87C)->v) = 0xA2000009;
    (((struct o4_uint *)0xC2BB87C)->v) = 0x80000000;
    (((struct o8_uint *)0xC2BB87C)->v) = 0x949004C7;
    t0 = nlPrintSetGarbagedTexture();
    (((struct o10_uint *)0xC2BB87C)->v) = 0xFFFFFFFF;
    (((struct o14_uint *)0xC2BB87C)->v) = 0x0;
    return t0;
}

int FUN_0c07c142(int a4, int a5, int a6)
{
    register int t0;

    t0 = FUN_0c07bf7a(a4, a5, a6);
    if (t0 != 0) {
        return t0;
    }
    *(unsigned int *)(((*(int *)0xC2C3EA4) + 0x0)) = 0x1001;
    return 0x0;
}

int FUN_0c07c184(int a4, int a5, int a6)
{
    register int t0;

    t0 = FUN_0c07c080(a4, a5, a6);
    if (t0 != 0) {
        return t0;
    }
    *(unsigned int *)(((*(int *)0xC2C3EA4) + 0x0)) = 0x9001;
    return 0x0;
}

int FUN_0c07cfd0(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x1C) + 0xC2C3EA8) + 0x0));
    t1 = t0;
    if (t0 == 1) {
        t0 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x1C) + 0xC2C3EA8) + 0x1));
        if (t0 == 0) {
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x1C) + 0xC2C3EA8) + 0x0)) = 0x0;
        }
        t1 = t0;
    }
    return t1;
}

int FUN_0c07e8a0(int a4)
{
    register int t0;

    t0 = FUN_0c07e42c(0x0);
    if (t0 == 0) {
        *(unsigned int *)((a4 + 0x0)) = (*(int *)(((*(int *)0xC147740) + 0x0)));
    }
    return t0;
}

int FUN_0c080370(int a4, int a5)
{
    register float t0;
    register float t1;

    t0 = FUN_0c070a10(a5);
    t1 = nlSin(a5);
    return FUN_0c080324(a4, t1, t0);
}

int vmsfb_create(int a4, int a5, int a6)
{
    return (buFbrCreateFiber((*(int *)0xC2CF09C), a4, a5, a6));
}

int gdFsCheckMedia(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = 0x0;
    t1 = (a4 + 0x1);
    t2 = 0xC16FEAC;
    for (;;) {
        t3 = *(signed char *)((t1 + 0x0));
        t1 = (t1 + 0x1);
        t4 = *(signed char *)((t2 + 0x0));
        t2 = (t2 + 0x1);
        if (t4 != t3) {
            break;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x5) {
            return 0x1;
        }
    }
    return 0x0;
}

int convert_support(int a4)
{
    register int t1;
    register int t4;

    t1 = (((unsigned int)((unsigned int)a4 >> 8) >> 2) & 0x3FFF00);
    if ((0x20000 & a4) != 0) {
        t1 = ((((unsigned int)((unsigned int)a4 >> 8) >> 2) & 0x3FFF00) | 0xF0);
    }
    t4 = t1;
    if ((a4 & 0x10000) != 0) {
        t4 = (t1 | 0xF);
    }
    return t4;
}

int kmSetVSyncCallback(int a4, int a5)
{
    FUN_0c168000();
    kmiRegisterCallback((*(int *)0xC174098), 0x1, a4, a5);
    return 0x0;
}

int pdVmsLcdBltAsm(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t0 = 0xC0;
    t1 = a4;
    t2 = a5;
    for (;;) {
        t3 = 0x80;
        t4 = 0x0;
        t5 = 0x8;
        for (;;) {
            t6 = *(signed char *)((t2 + 0x0));
            t2 = (t2 + 0x1);
            if ((t6 & 8) != 0) {
                t4 = (t4 | t3);
            }
            t3 = ((unsigned int)t3 >> 1);
            t5 = (t5 - 0x1);
            if (t5 == 0) {
                break;
            }
        }
        *(unsigned char *)((t1 + 0x0)) = t4;
        t0 = (t0 - 0x1);
        t1 = (t1 + 0x1);
        if (t0 == 0) {
            break;
        }
    }
    return t6;
}

int FUN_0c160f20(void)
{
    register int t2;

    if ((*(int *)0xC1742F4) == 0) {
        t2 = (memset(0xC302820, 0x0, 0x180));
    }
    *(unsigned int *)0xC1742F4 = ((*(int *)0xC1742F4) + 0x1);
    return t2;
}

int FUN_0c16197a(int a4)
{
    (((struct o98_uint *)(a4))->v) = 0x0;
    *(unsigned int *)((a4 + 0x2C)) = 0x0;
    *(unsigned int *)((a4 + 0x30)) = 0x0;
    *(unsigned int *)((a4 + 0x34)) = 0x0;
    *(unsigned int *)((a4 + 0x38)) = 0x7FFFFFFF;
    *(unsigned int *)((a4 + 0x3C)) = 0xFFFFFFFF;
    (((struct o40_uint *)(a4))->v) = 0x0;
    (((struct o44_uint *)(a4))->v) = 0x0;
    *(unsigned char *)((a4 + 0x3)) = 0x0;
    return 0x0;
}

int ADXSTM_GetCurOfst(int a4, int a5, int a6, int a7)
{
    *(unsigned int *)((a5 + 0x0)) = ((FUN_0c162464(a4, a5, a6, a7)) - (*(int *)((a4 + 0xC))));
    return 0x1;
}

int mwRnaGetNumRoom(int a4)
{
    if (a4 == 0) {
        FUN_0c16ada2(0xC171714);
        return 0xFFFFFFFF;
    }
    return ((*(int *)((a4 + 0x28))) - (*(int *)((a4 + 0x34))));
}

int SJMEM_Init(void)
{
    register int t2;

    if ((*(int *)0xC174368) == 0) {
        t2 = (memset(0xC305168, 0x0, 0x480));
    }
    *(unsigned int *)0xC174368 = ((*(int *)0xC174368) + 0x1);
    return t2;
}

int SJRBF_Init(void)
{
    register int t2;

    if ((*(int *)0xC1743A0) == 0) {
        t2 = (memset(0xC3055E8, 0x0, 0xC00));
    }
    *(unsigned int *)0xC1743A0 = ((*(int *)0xC1743A0) + 0x1);
    return t2;
}

int SJUNI_Init(void)
{
    register int t2;

    if ((*(int *)0xC1743D4) == 0) {
        t2 = (memset(0xC3061E8, 0x0, 0xC00));
    }
    *(unsigned int *)0xC1743D4 = ((*(int *)0xC1743D4) + 0x1);
    return t2;
}

int FUN_0c16c2b6(void)
{
    register int t0;

    t0 = 0xC30B670;
    for (;;) {
        if ((unsigned int)t0 >= (unsigned int)0xC30B6D0) {
            return 0x0;
        }
        if ((*(int *)((t0 + 0x0))) == 0) {
            break;
        }
        t0 = (t0 + 0xC);
    }
    return t0;
}

int FUN_0c16c2e2(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t3;

    t0 = (((struct o0_int *)0xC1744A8)->v);
    if (t0 != 0) {
        t3 = (((int (*)(int, int, int, int))(t0))(((((struct o4_int *)0xC1744A8)->v)), 0xC30B6D0, a4, a7));
    }
    return t3;
}



int gdc_FileLoadInit(void)
{
    register int t1;

    (((struct o0_uint *)0xC2707D8)->v) = 0xFFFFFFFF;
    (((struct o4_uint *)0xC2707D8)->v) = 0x0;
    FUN_0c01eea6();
    t1 = FUN_0c01f9a6();
    *(unsigned int *)0xC2708C4 = 0x1;
    return t1;
}

int colliNodeAlloc(void)
{
    register int t0;
    register int t1;

    t0 = 0xC2727BC;
    t1 = 0x100;
    for (;;) {
        if (t1 == 0) {
            return 0x0;
        }
        if ((*(int *)((t0 + 0x4))) == -1) {
            break;
        }
        t0 = (t0 + 0x10);
        t1 = (t1 - 1);
    }
    return t0;
}

void ExecRenderTexture1st(float f4)
{
    if ((*(int *)0xC12A5EC) != 0) {
        nlRenderTextureBegin(0x0, f4);
        FUN_0c018d1e(1.06666672f);
    return;
    }
}

int CompBackupBuffer(void)
{
    register int t0;

    t0 = FUN_0c07ffbc(0xC28DD0C, 0xC293344, 0x1FA8);
    if (t0 != 0) {
        return 0x1;
    }
    return 0x0;
}

int rtcGetSeconds(void)
{
    int stk[4];

    syRtcGetDate((((int)stk + 0) + 0x4));
    syRtcDateToCount();
    return (*(int *)(((int)stk + 0)));
}

int FUN_0c03f19a(void)
{
    (((struct o4_uint *)0xC1EC71C)->v) = 0x0;
    (((struct o8_uint *)0xC1EC71C)->v) = 0x0;
    (((struct o0_uint *)0xC1EC71C)->v) = 0x0;
    *(unsigned int *)0xC2AC2F0 = 0x0;
    (((struct o0_uint *)0xC2AC5FC)->v) = 0xC318000;
    (((struct o4_uint *)0xC2AC5FC)->v) = 0x10000;
    return 0xC2AC5FC;
}

int GotoMenu(void)
{
    (((struct o0_uint *)0xC2A4F88)->v) = ((((struct o0_int *)0xC1EC740)->v));
    (((struct o4_uint *)0xC2A4F88)->v) = ((((struct o4_int *)0xC1EC740)->v));
    (((struct o0_uint *)0xC1EC740)->v) = 0x3;
    (((struct o4_uint *)0xC1EC740)->v) = 0x0;
    return FUN_0c01bde2(0x0);
}

int FUN_0c0503b4(int a4)
{
    *(unsigned int *)0xC2B2978 = a4;
    *(unsigned int *)0xC2B1DD4 = ((*(int *)0xC2B1DD4) | 0x80);
    Init_Pass_Time();
    FUN_0c04feb0();
    *(unsigned int *)0xC2B29E0 = 0x0;
    return FUN_0c053f6a();
}


int FUN_0c05be8a(int a4, float f4)
{
    register float u4;

    u4 = (-((((struct o8_float *)(a4))->v)));
    u4 = u4 + f4 * ((((struct o0_float *)0xC136898)->v));
    return (((u4 > (_builtin_fabsf((*(float *)((a4 + 0x0)))) * ((((struct o4_float *)0xC136898)->v))))) ? 1 : 0);
}

int FUN_0c05beaa(int a4, float f4)
{
    register float u4;

    u4 = (-((((struct o8_float *)(a4))->v)));
    u4 = u4 + f4 * ((((struct o0_float *)0xC1368A0)->v));
    return (((u4 > (_builtin_fabsf((*(float *)((a4 + 0x0)))) * ((((struct o4_float *)0xC1368A0)->v))))) ? 1 : 0);
}

int FUN_0c05c0f6(int a4)
{
    register int t0;

    t0 = nlMalloc(a4);
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x4)) = 0x0;
        *(unsigned int *)((t0 + 0x0)) = 0x0;
    }
    return t0;
}

int FUN_0c06030a(int a4, int a5)
{
    register int t1;

    t1 = 0x88;
    if ((int)(*(int *)0xC175C80) < (int)0x8) {
        *(unsigned int *)0xC2B9C9C = 0x7;
        t1 = 0x84;
    }
    *(unsigned int *)((0xC2B9C1C + t1)) = 0x0;
    return t1;
}

int FUN_0c060354(int a4, int a5, int a6)
{
    register int t1;

    if ((int)(*(int *)0xC175C80) < (int)0x8) {
        (((struct o0_uint *)0xC2B9C9C)->v) = 0x8;
        (((struct o4_uint *)0xC2B9C9C)->v) = 0x0;
        (((struct o14_uint *)0xC2B9C9C)->v) = a4;
        t1 = 0x94;
    }
    return t1;
}

int FUN_0c066226(int a4)
{
    register int t2;

    (((struct oFF_uchar *)(a4))->v) = ((*(signed char *)(((0xFF + a4) + 0x0))) & 0xF7);
    (((struct oFF_uchar *)(a4))->v) = ((*(signed char *)(((0xFF + a4) + 0x0))) & 0xFB);
    t2 = *(signed char *)(((0xFF + a4) + 0x0));
    (((struct oFF_uchar *)(a4))->v) = (t2 & 0xFE);
    return (t2 & 0xFE);
}

int FUN_0c065346(int a4, int a5)
{
    FUN_0c067494(a5, 0x1);
    (((struct o80_uint *)(a5))->v) = (((((struct o80_int *)(a5))->v)) + 0x1);
    return 0x80;
}

int FUN_0c06b484(void)
{
    if ((*(int *)0xC1EC71C) == 0) {
        (((struct o0_uint *)0xC2BA6B8)->v) = 0x0;
        (((struct o4_float *)0xC2BA6B8)->v) = 0.0f;
        return 0xC06B4C8;
    }
    return 0x0;
}

int FUN_0c06cbc2(void)
{
    register int t0;
    register int t1;

    t0 = (((struct o0_int *)0xC13C344)->v);
    if (t0 != 0) {
        t1 = nlFree(t0);
        (((struct o4_uint *)0xC13C344)->v) = 0x0;
        (((struct o0_uint *)0xC13C344)->v) = 0x0;
        t0 = t1;
    }
    return t0;
}

int nlRotateAxe(int a4, int a5)
{
    register float t0;
    register float t1;

    t0 = FUN_0c070a10(a5);
    t1 = nlSin(a5);
    return FUN_0c073520(a4, t1, t0);
}

float nlAddVector3op(int a4, int a5, int a6)
{
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;

    u0 = *(float *)((a5 + 0x0));
    u1 = *(float *)((a6 + 0x0));
    u2 = (((struct o4_float *)(a5))->v);
    u3 = (((struct o4_float *)(a6))->v);
    u4 = (((struct o4_float *)((a5 + 0x4)))->v);
    u5 = (((struct o4_float *)((a6 + 0x4)))->v);
    *(float *)((a4 + 0x0)) = (u0 + u1);
    (((struct o4_float *)(a4))->v) = (u2 + u3);
    (((struct o4_float *)((a4 + 0x4)))->v) = (u4 + u5);
    return (u0 + u1);
}

int nlProjectScreen3D(int a4, int a5)
{
    nlPushMatrix(0xC2BFAF0);
    FUN_0c072230(a4, a5);
    return nlPopMatrix(0x1);
}

int FUN_0c074070(void)
{
    nlPushMatrix((*(int *)0xC2BF960));
    FUN_0c072fe0();
    nlGetMatrix(0xC2BFAF0);
    return nlPopMatrix(0x1);
}

int FUN_0c074020(void)
{
    nlPushMatrix((*(int *)0xC2BF96C));
    FUN_0c072fe0();
    nlGetMatrix8(0xC2BFB30);
    return nlPopMatrix(0x1);
}

int nlSynchFunction(int a4)
{
    register int t1;

    t1 = _builtin_get_cr();
    _builtin_set_cr((_builtin_get_cr() & 0xFFFFFFFF) | 0x10000000);
    kmSetWaitVsyncCallback(a4, 0x0);
    _builtin_set_cr((t1 & 0xFFFFFFFF));
    return 0x0;
}

int FUN_0c07b6e6(int a4)
{
    int stk[3];

    *(int *)((int)stk + 4) = 0x0;
    *(int *)((int)stk + 0) = 0x0;
    syG2Read(a4, (((int)stk + 0) + 0x8), 0x4, 0x1, 0x0, 0x0);
    return (*(int *)(((int)stk + 8)));
}

int FUN_0c07c164(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t2;

    t0 = FUN_0c07c006(a4, a5, a6, a7);
    t2 = t0;
    if (t0 == 0) {
        *(unsigned int *)(((*(int *)0xC2C3EA4) + 0x0)) = 0x9001;
        t2 = 0x0;
    }
    return t2;
}

int FUN_0c07ced8(int a4)
{
    if ((*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x1C) + 0xC2C3EA8) + 0x0))) != 1) {
        return 0x0;
    }
    return (*(int *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x1C) + 0xC2C3EA8) + 0xC)));
}

int FUN_0c07cef8(int a4)
{
    if ((*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x1C) + 0xC2C3EA8) + 0x0))) != 1) {
        return 0x0;
    }
    return (*(short *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x1C) + 0xC2C3EA8) + 0x2)));
}

int FUN_0c07e7fe(int a4)
{
    register int t0;

    t0 = FUN_0c07e3d0(0x0);
    if (t0 == 0) {
        *(unsigned int *)((a4 + 0x0)) = (*(int *)0xC147740);
    }
    return t0;
}

int FUN_0c07e81e(int a4)
{
    register int t0;

    t0 = FUN_0c07e42c(0x0);
    if (t0 == 0) {
        *(unsigned int *)((a4 + 0x0)) = (*(int *)0xC147740);
    }
    return t0;
}

void vmsfs_c_setfunc(int a4, int a5)
{
    *(unsigned int *)(((((((a4 << 2) << 2) << 2) << 1) + 0xC2C6914) + 0x8)) = a5;
}

float _app_sins(float f4)
{
    register int t1;
    register int t2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;

    t1 = 0x6;
    t2 = 0xC11847C;
    u3 = (*(float *)0xC118478);
    for (;;) {
        u4 = *(float *)((t2 + 0x0));
        t2 = (t2 + 0x4);
        t1 = (t1 - 1);
        u5 = (f4 * f4);
        u6 = u4;
        u6 = u6 + u5 * u3;
        u3 = u6;
        if ((int)t1 <= 0) {
            break;
        }
    }
    return (f4 * u3);
}

int mwRnaIsPause(int a4)
{
    if (a4 == 0) {
        FUN_0c16ada2(0xC171714);
        return 0x0;
    }
    return (unsigned char)(*(signed char *)((a4 + 0x7)));
}

int mwRnaGetStat(int a4)
{
    if (a4 == 0) {
        FUN_0c16ada2(0xC171714);
        return 0xFFFFFFFF;
    }
    return (unsigned char)(*(signed char *)((a4 + 0x1)));
}

int mwRnaSetStartSmpl(int a4, int a5)
{
    if (a4 == 0) {
        return (FUN_0c16ada2(0xC171714));
    }
    (((struct o44_uint *)(a4))->v) = a5;
    return 0x44;
}

int mwRnaGetOutVol(int a4)
{
    if (a4 == 0) {
        FUN_0c16ada2(0xC171714);
        return 0xFFFFFFFF;
    }
    return ((((struct o60_int *)(a4))->v));
}

int mwRnaGetDrctLvl(int a4)
{
    if (a4 == 0) {
        FUN_0c16ada2(0xC171714);
        return 0xFFFFFFFF;
    }
    return ((((struct o84_int *)(a4))->v));
}

int FUN_0c165de2(int a4, int a5)
{
    if (a4 == 0) {
        return (FUN_0c16bab0(0xC1718DC));
    }
    *(unsigned char *)((a4 + 0x3)) = a5;
    return a5;
}

int gdCiGetGdfsWork(void)
{
    register int t0;

    t0 = gdFsOpen();
    *(unsigned int *)0xC1744B0 = (*(int *)((t0 + 0x0)));
    gdFsClose(t0);
    return (*(int *)0xC1744B0);
}

int FUN_0c0164de(void)
{
    (((struct o1C_uint *)0xC177D0C)->v) = 0x0;
    (((struct o28_uint *)0xC177D0C)->v) = 0x0;
    FUN_0c016240();
    (((struct o0_uint *)0xC177D0C)->v) = 0x0;
    return FUN_0c02897a(0x4);
}

int FUN_0c01b920(int a4, float f4, float f5)
{
    register int t0;

    t0 = nlArcTan2(a4, (-f4), f5);
    *(unsigned short *)((a4 + 0x0)) = t0;
    return t0;
}


int FUN_0c01e13c(float f4)
{
    (((struct o0_float *)0xC1ECCDC)->v) = (((((struct o0_float *)0xC1ECCDC)->v)) + ((f4 * 0.100000001f)));
    (((struct o4_float *)0xC1ECCDC)->v) = (((((struct o4_float *)0xC1ECCDC)->v)) + ((f4 * 0.100000001f)));
    return 0x38;
}

int FUN_0c027fbe(float f4, float f5)
{
    register int t3;
    register float u5;

    (((struct o0_float *)0xC128ADC)->v) = (((((struct o10_float *)0xC270D1C)->v)) * f4);
    t3 = 0xC270D1C;
    u5 = f5;
    if (((((struct o0_int *)0xC270D1C)->v)) != 0) {
        t3 = 0xC028104;
        u5 = (f5 * (*(float *)0xC028104));
    }
    (((struct o4_float *)0xC128ADC)->v) = u5;
    return t3;
}

void FUN_0c0281b6(int a4)
{
    register int t1;
    register int t3;
    register int t0;

    t1 = a4;
    for (;;) {
        if ((*(signed char *)((t1 + 0x0))) == 0) {
            break;
        }
        t3 = *(int *)0xC270E3C;
        *(unsigned int *)0xC270E3C = (t3 + 0x1);
        t0 = (*(signed char *)((t1 + 0x0)));
        t1 = (t1 + 0x1);
        *(unsigned char *)((((t3 + 0x1) - 0x1) + 0x0)) = t0;
    }
    *(unsigned char *)(((*(int *)0xC270E3C) + 0x0)) = 0x0;
}

int FUN_0c0423c8(int a4)
{
    register int t1;
    register int t2;

    if ((unsigned int)(*(int *)0xC2AB814) < (unsigned int)0x3C) {
        t1 = *(int *)0xC2AB814;
        *(unsigned int *)0xC2AB814 = (t1 + 0x1);
        *(unsigned int *)(((0xC2AB818 + (((t1 + 0x1) - 1) << 2)) + 0x0)) = a4;
        t2 = (((t1 + 0x1) - 1) << 2);
    }
    return t2;
}

int FUN_0c04e64e(void)
{
    register int t0;

    t0 = *(int *)0xC1317DC;
    *(unsigned int *)0xC1317DC = ((t0 * 0x41C64E6D) + 0x3039);
    return (((unsigned int)((t0 * 0x41C64E6D) + 0x3039) >> 16) & 0x7FFF);
}

int FUN_0c04c5bc(void)
{
    FUN_0c04c5da();
    FUN_0c04ca94();
    FUN_0c04cba6();
    FUN_0c04cbf8();
    FUN_0c04cde4();
    FUN_0c04ce28();
    return FUN_0c04d28a();
}

int FUN_0c05a338(void)
{
    FUN_0c073010();
    FUN_0c075d50();
    nlGetMatrix8(0xC2B8A30);
    return nlPopMatrix(0x1);
}

int FUN_0c05bf60(void)
{
    register int t0;

    t0 = *(int *)0xC1368A8;
    *(unsigned int *)0xC1368A8 = ((t0 * 0x41C64E6D) + 0x3039);
    return (((unsigned int)((t0 * 0x41C64E6D) + 0x3039) >> 16) & 0x7FFF);
}

int FUN_0c05f834(void)
{
    register int t0;
    register int t1;

    t0 = 0x0;
    for (;;) {
        t1 = FUN_0c05f788(t0, 0x1);
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x8) {
            break;
        }
    }
    return t1;
}

int FUN_0c06027a(int a4, int a5)
{
    register int t1;

    if ((int)(*(int *)0xC175C80) < (int)0x8) {
        (((struct o0_uint *)0xC2B9C9C)->v) = 0x5;
        (((struct o4_uint *)0xC2B9C9C)->v) = 0x0;
        t1 = 0x84;
    }
    return t1;
}

int FUN_0c061e50(int a4)
{
    register int t3;

    if ((*(int *)((a4 + 0x0))) != 0) {
        t3 = nlFree((*(int *)((a4 + 0x0))));
        *(unsigned int *)((a4 + 0x0)) = 0x0;
        *(unsigned int *)((a4 + 0x4)) = 0x0;
    }
    return t3;
}




int FUN_0c070e60(void)
{
    register int t0;

    t0 = *(int *)0xC14736C;
    *(unsigned int *)0xC14736C = ((t0 * 0x41C64E6D) + 0x3039);
    return (((unsigned int)((t0 * 0x41C64E6D) + 0x3039) >> 16) & 0x7FFF);
}

int FUN_0c0737d0(float f4)
{
    register float t0;
    register float t1;

    t0 = FUN_0c070a60(f4);
    t1 = nlSinf(f4);
    return nlRotateXSC(t1, t0);
}


int FUN_0c078310(void)
{
    register int t0;
    register int t1;

    *(unsigned int *)0xC2C3D98 = 0x1;
    t0 = *(int *)0xC2C3D34;
    if (t0 != 0) {
        t1 = ((int (*)(void))(t0))();
    }
    return 0x0;
}

int FUN_0c078330(void)
{
    register int t0;
    register int t1;

    *(unsigned int *)0xC2C3D98 = 0x2;
    t0 = *(int *)0xC2C3D38;
    if (t0 != 0) {
        t1 = ((int (*)(void))(t0))();
    }
    return 0x0;
}

int FUN_0c0783b0(void)
{
    register int t0;
    register int t1;

    (((struct o38_uint *)0xC2C3D60)->v) = 0x4;
    t0 = (((struct o0_int *)0xC2C3D60)->v);
    if (t0 != 0) {
        t1 = ((int (*)(void))(t0))();
    }
    return 0x0;
}

int FUN_0c07b650(int a4)
{
    register int t0;

    t0 = *(int *)0xC2C3E3C;
    *(unsigned int *)(((((int)a4 >> 5) << 2) + t0)) = ((*(int *)(((((int)a4 >> 5) << 2) + t0))) & (~((int)0x1 << (int)(0x1F & a4))));
    return t0;
}

int FUN_0c07d616(int a4)
{
    if ((a4 != 0) && (a4 != 1)) {
        return 0xFFFFFFFF;
    }
    *(unsigned int *)0xC2C3E78 = a4;
    return 0x0;
}

int _ntInfWaitDone(void)
{
    int t0;

    for (;;) {
        t0 = fmMngExecServer();
        if ((t0 != 1) && (t0 != 3)) continue;
        break;
    }
    return t0;
}

int FUN_0c088000(int a4, int a5, int a6, float f4, float f5, float f6, float f7)
{
    _builtin_prefetch((void *)a6);
    *(float *)((((a6 - 4) - 0x4) + 0x0)) = f7;
    *(float *)(((((a6 - 4) - 0x4) - 0x4) + 0x0)) = (f6 * f7);
    *(float *)((((((a6 - 4) - 0x4) - 0x4) - 0x4) + 0x0)) = (f5 * f7);
    _builtin_prefetch((void *)((((a6 - 4) - 0x4) - 0x4) - 0x4));
    return ((((a6 - 4) - 0x4) - 0x4) - 0x4);
}

int strcat(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = a4;
    for (;;) {
        if ((*(signed char *)((t0 + 0x0))) == 0) {
            break;
        }
        t0 = (t0 + 0x1);
    }
    t1 = t0;
    t0 = a5;
    for (;;) {
        t2 = *(signed char *)((t0 + 0x0));
        t0 = (t0 + 0x1);
        *(unsigned char *)((t1 + 0x0)) = t2;
        t1 = (t1 + 0x1);
        if ((unsigned char)t2 == 0) {
            break;
        }
    }
    return a4;
}

int _allzero(int a4, int a5)
{
    register int t0;
    register int t1;

    if ((int)a5 > 0) {
        t0 = a4;
        t1 = 0x0;
        for (;;) {
            if ((*(signed char *)((t0 + 0x0))) != 0) {
                break;
            }
            t1 = (t1 + 0x1);
            t0 = (t0 + 0x1);
            if ((int)t1 >= (int)a5) {
                return 0x1;
            }
        }
        return 0x0;
    }
    return 0x1;
}

int _mvsto2b(int a4, int a5)
{
    register int t0;
    register int t1;

    t0 = a4;
    t1 = 0x8;
    for (;;) {
        *(unsigned char *)((t0 + 0x0)) = ((unsigned int)(unsigned short)(*(short *)((a5 + 0x0))) << (int)(-t1));
        t0 = (t0 + 0x1);
        t1 = (t1 - 8);
        if ((unsigned int)t0 >= (unsigned int)(a4 + 0x2)) {
            break;
        }
    }
    return (a4 + 0x2);
}

int kmGetCurrentVertexOffset(int a4)
{
    register int t1;
    register int t2;
    register int t3;

    t1 = *(int *)(((a4 << 2) + (*(int *)0xC2D0C3C)));
    t2 = *(int *)(((a4 << 2) + 0xC2D0C88));
    t3 = (t1 - t2);
    if ((int)(t1 - t2) < 0) {
        t3 = ((t1 - t2) + 0x3);
    }
    return ((t3 >> 1) >> 1);
}

int FUN_0c14ebba(int a4)
{
    if ((int)(*(signed char *)((a4 + 0x1))) >= (int)0x2) {
        return FUN_0c161fee((*(int *)((a4 + 0x4))));
    }
    return 0x0;
}

int FUN_0c14eb7e(int a4)
{
    if ((int)(*(signed char *)((a4 + 0x1))) >= (int)0x2) {
        return FUN_0c16201e((*(int *)((a4 + 0x4))));
    }
    return 0x0;
}

int FUN_0c14eb9c(int a4, int a5, int a6, int a7)
{
    if ((int)(*(signed char *)((a4 + 0x1))) >= (int)0x2) {
        return FUN_0c161fe2((*(int *)((a4 + 0x4))), a5, a6, a7);
    }
    return 0x0;
}

int FUN_0c14ebd8(int a4)
{
    if ((int)(*(signed char *)((a4 + 0x1))) >= (int)0x2) {
        return FUN_0c16207e((*(int *)((a4 + 0x4))));
    }
    return 0x0;
}

int FUN_0c14ebf6(int a4, int a5, int a6, int a7)
{
    if ((int)(*(signed char *)((a4 + 0x1))) >= (int)0x2) {
        return FUN_0c162084((*(int *)((a4 + 0x4))), a5, a6, a7);
    }
    return 0x0;
}

int kmiBGPlaneCountWords(int a4)
{
    register int t5;
    register int t0;

    t5 = 0x1;
    if ((0x2000000 & a4) != 0) {
        t0 = 0x2;
        if ((0x1000000 & a4) != 0) {
            t0 = 0x3;
        }
        t5 = t0;
        if ((a4 & 0x400000) == 0) {
            t5 = (t0 + 0x1);
        }
    }
    return t5;
}

int kmChangeContextDepthMode(int a4)
{
    *(unsigned int *)0xC300DFC = (((*(int *)0xC300DFC) & 0x1FFFFFFF) | (a4 << 29));
    *(unsigned int *)0xC174138 = (*(int *)0xC300DFC);
    return 0x0;
}

int kmChangeContextCullingMode(int a4)
{
    *(unsigned int *)0xC300DFC = (((*(int *)0xC300DFC) & 0xE7FFFFFF) | (a4 << 27));
    *(unsigned int *)0xC174138 = (*(int *)0xC300DFC);
    return 0x0;
}

int kmChangeContextFlipUV(int a4)
{
    *(unsigned int *)0xC300E00 = (((*(int *)0xC300E00) & 0xFFF9FFFF) | ((a4 << 16) << 1));
    *(unsigned int *)0xC17413C = (*(int *)0xC300E00);
    return 0x0;
}

int kmChangeContextClampUV(int a4)
{
    *(unsigned int *)0xC300E00 = (((*(int *)0xC300E00) & 0xFFFE7FFF) | (a4 << 15));
    *(unsigned int *)0xC17413C = (*(int *)0xC300E00);
    return 0x0;
}

int gdFsStrcmp_tail_0c15fa1c(int a4, int a5, int a6, int a7)
{
    if ((*(signed char *)((a4 + 0x0))) == 0) {
        if ((*(signed char *)((a5 + 0x0))) != 0) {
            return 0x0;
        }
        return 0x1;
    }
    return ((int (*)(int, int, int, int))(0xC15CC3C))(a4, a5, a6, a7);
}

int FUN_0c15ca22(int a4)
{
    int stk[2];

    *(unsigned int *)((((int)stk + 0) + 0x0)) = a4;
    *(unsigned int *)((((int)stk + 0) + 0x4)) = 0x0;
    return (FUN_0c160584(0x1B, ((int)stk + 0)));
}

int FUN_0c1623f0(int a4, int a5, int a6, int a7)
{
    return (FUN_0c1622c6(a4, 0x0, a5, a6, a7));
}

int mwRnaGetNumData(int a4)
{
    if (a4 == 0) {
        FUN_0c16ada2(0xC171714);
        return 0xFFFFFFFF;
    }
    return (*(int *)((a4 + 0x34)));
}

int mwRnaGetBitPerSmpl(int a4)
{
    if (a4 == 0) {
        FUN_0c16ada2(0xC171714);
        return 0xFFFFFFFF;
    }
    return (*(int *)((a4 + 0x8)));
}

int mwRnaGetSfreq(int a4)
{
    if (a4 == 0) {
        FUN_0c16ada2(0xC171714);
        return 0xFFFFFFFF;
    }
    return (*(int *)((a4 + 0xC)));
}

int SJUNI_GetNumChunk(int a4, int a5)
{
    register int t1;
    register int t2;

    t1 = (*(int *)((((a5 << 2) + (a4 + 0x18)) + 0x0)));
    t2 = 0x0;
    for (;;) {
        if (t1 == 0) {
            break;
        }
        t1 = (*(int *)((t1 + 0x0)));
        t2 = (t2 + 0x1);
    }
    return t2;
}

int FUN_0c165b68(int a4)
{
    if (a4 == 0) {
        FUN_0c16bab0(0xC1718DC);
        return 0xFFFFFFFF;
    }
    return (*(signed char *)((a4 + 0x1)));
}

int FUN_0c165b86(int a4)
{
    if (a4 == 0) {
        FUN_0c16bab0(0xC1718DC);
        return 0xFFFFFFFF;
    }
    return (*(int *)((a4 + 0x24)));
}

int FUN_0c165d86(int a4)
{
    if (a4 == 0) {
        FUN_0c16bab0(0xC1718DC);
        return 0xFFFFFFFF;
    }
    return (*(int *)((a4 + 0x14)));
}

int kmiErrorISR02(void)
{
    *(unsigned int *)0xA05F6908 = 0x2;
    if ((*(int *)0xC306E40) == 0) {
        *(unsigned int *)0xC300B80 = ((*(int *)0xC300B80) | 0x10);
    }
    *(unsigned int *)0xC306E40 = 0x0;
    return 0x0;
}

int mpdrv_set_getcond_ns(int a4, int a5)
{
    int stk[3];

    *(unsigned int *)(((int)stk + 8)) = a5;
    *(int *)((int)stk + 4) = 0x0;
    *(int *)((int)stk + 0) = 0x0;
    return (mpdrv_setcmd(a4, 0x9, (((int)stk + 0) + 0x8), 0x1, 0x0, 0x0));
}

int mwRnaErrEntryFunc(int a4, int a5)
{
    if (a4 == 0) {
        (((struct o0_uint *)0xC174408)->v) = 0x0;
        (((struct o4_uint *)0xC174408)->v) = 0x0;
    } else {
        (((struct o0_uint *)0xC174408)->v) = a4;
        (((struct o4_uint *)0xC174408)->v) = a5;
    }
    return memset(0xC3086E0, 0x0, 0x100);
}

int mwSbSetBitPerSmpl(int a4, int a5)
{
    register int t2;

    t2 = FUN_0c07d254((*(int *)(((*(int *)((a4 + 0x1C))) + 0x4))), a5);
    *(unsigned int *)((a4 + 0x10)) = a5;
    return t2;
}

int gdCiClose(int a4)
{
    if ((*(int *)((a4 + 0x8))) != 0) {
        gdCiStopTr(a4);
    }
    gdFsClose((*(int *)((a4 + 0x4))));
    return FUN_0c16c2d8(a4);
}

int ADXPD_EntryMono(int a4, int a5, int a6, int a7)
{
    if ((*(int *)((a4 + 0xC))) == 0) {
        *(unsigned int *)((a4 + 0x14)) = 0x1;
        *(unsigned int *)((a4 + 0x18)) = a5;
        *(unsigned int *)((a4 + 0x1C)) = a6;
        *(unsigned int *)((a4 + 0x20)) = a7;
        *(unsigned int *)((a4 + 0x24)) = 0x0;
        return 0x1;
    }
    return 0x0;
}

int FUN_0c16f81c(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int stk[3];

    *(unsigned char *)(((int)stk + 8)) = a5;
    *(int *)((int)stk + 4) = a9;
    *(int *)((int)stk + 0) = a8;
    return (mpdrv_setcmd(a4, (*(signed char *)(((int)stk + 8))), a6, a7, a8, a9));
}

int FUN_0c018b00(int a4)
{
    register int t2;

    if ((*(int *)0xC177D58) != a4) {
        *(unsigned int *)0xC177D58 = a4;
        t2 = FUN_0c02f698();
        *(unsigned int *)0xC11CE70 = 0x1;
    }
    return t2;
}


int FUN_0c020368(int a4)
{
    register int t1;

    FUN_0c01efc0();
    t1 = FUN_0c01f9ca(a4);
    *(unsigned int *)0xC2708C4 = 0x1;
    return t1;
}

void FUN_0c02877a(int a4)
{
    if (a4 != 0) {
        *(unsigned int *)0xC128A54 = ((*(int *)0xC128A54) | 0x2000);
    } else {
        *(unsigned int *)0xC128A54 = ((*(int *)0xC128A54) & 0xFFFF9FFF);
    }
}

int FUN_0c03e776(void)
{
    if ((*(int *)0xC2A4654) == 1) {
        return FUN_0c07c5b8(0x0, 0x900A0, 0x0);
    }
    return FUN_0c07c5b8(0x0, 0x800A0, 0x0);
}

int FUN_0c03fbbc(int a4)
{
    if ((*(int *)((((((a4 << 2) << 2) << 1) + (*(int *)0xC2AB7B4)) + 0x0))) == 0) {
        return 0x0;
    }
    return 0x1;
}

int FUN_0c04c11c(void)
{
    register int t0;

    t0 = FUN_0c04c138(0xC175930, 0xC10C5E8);
    if (t0 != 0) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c0506c2(void)
{
    register int t1;

    FUN_0c058be4(0x0);
    t1 = FUN_0c058e82();
    *(unsigned int *)0xC2B1DD4 = ((*(int *)0xC2B1DD4) & 0xEFFFFFFF);
    return t1;
}

void FUN_0c058688(int a4)
{
    if (a4 != 0) {
        *(unsigned int *)0xC2B337C = ((*(int *)0xC2B337C) & 0xFFFFFFFB);
    } else {
        *(unsigned int *)0xC2B337C = ((*(int *)0xC2B337C) & 0xFFFFFFFD);
    }
}

int FUN_0c058e82(void)
{
    register int t0;
    register int t1;

    t0 = 0x0;
    for (;;) {
        t1 = Voice_ShutUp(t0);
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    return t1;
}

int FUN_0c060006(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c05ff5c(a4);
    t1 = (unsigned short)(t0 + 0x1000);
    if ((int)(unsigned short)(t0 + 0x1000) < 0) {
        t1 = ((unsigned short)(t0 + 0x1000) + 0x1FFF);
    }
    return ((int)t1 >> 13);
}

int FUN_0c067376(int a4, int a5, int a6, int a7)
{
    FUN_0c068304(a4, a5, a6, a7);
    FUN_0c06753c(a4, 0x1);
    (((struct o80_uint *)(a4))->v) = (((((struct o80_int *)(a4))->v)) + 0x1);
    return 0x80;
}

float FUN_0c06e700(int a4, int a5, float f4)
{
    register float u2;
    register float u5;
    register float u8;

    u2 = (*(float *)((a4 + 0x0)));
    u2 = u2 + f4 * (*(float *)((a5 + 0x0)));
    u5 = ((((struct o4_float *)(a4))->v));
    u5 = u5 + f4 * ((((struct o4_float *)(a5))->v));
    u8 = ((((struct o4_float *)((a4 + 0x4)))->v));
    u8 = u8 + f4 * ((((struct o4_float *)((a5 + 0x4)))->v));
    *(float *)((((((a4 + 0x4) + 0x4) + 0x4) - 0x4) + 0x0)) = u8;
    *(float *)(((((((a4 + 0x4) + 0x4) + 0x4) - 0x4) - 0x4) + 0x0)) = u5;
    *(float *)((((((((a4 + 0x4) + 0x4) + 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u2;
    return f4;
}

int FUN_0c06eea0(int a4)
{
    register int t2;
    register int t3;

    t2 = *(int *)((a4 + 0xC));
    t3 = (((struct o4_int *)0xC2BB420)->v);
    *(unsigned int *)((a4 + 0x8)) = (((*(int *)((a4 + 0x8))) & 0xFFFFFFC0) | ((((struct o0_int *)0xC2BB420)->v)));
    *(unsigned int *)((a4 + 0xC)) = ((t2 & 0xF8000000) | t3);
    return t3;
}


void FUN_0c073ab0(void)
{
    float u0[16];

    _builtin_st_ext((float (*)[4])u0);
    u0[0] = 1.0f;
    u0[1] = 0.0f;
    u0[2] = 0.0f;
    u0[4] = 0.0f;
    u0[5] = 1.0f;
    u0[6] = 0.0f;
    u0[8] = 0.0f;
    u0[9] = 0.0f;
    u0[10] = 1.0f;
    _builtin_ld_ext((float (*)[4])u0);
}

float FUN_0c073c40(int a4, int a5, float f4)
{
    register float u0;
    register float u1;
    register float u2;

    u0 = *(float *)((a5 + 0x0));
    u1 = (((struct o4_float *)(a5))->v);
    u2 = (((struct o4_float *)((a5 + 0x4)))->v);
    *(float *)(((a4 + 0x4) + 0xFFFFFFFC)) = (u0 * f4);
    (((struct o4_float *)(a4))->v) = (u1 * f4);
    (((struct o4_float *)((a4 + 0x4)))->v) = (u2 * f4);
    return (u0 * f4);
}

void FUN_0c073e90(int a4)
{
    register float u0;
    register float u1;
    register float u2;
    register float u6;
    float u3[4];
    float u4[4];

    u0 = *(float *)((a4 + 0x0));
    u1 = (((struct o4_float *)(a4))->v);
    u2 = (((struct o4_float *)((a4 + 0x4)))->v);
    u3[0] = u0;
    u3[1] = u1;
    u3[2] = u2;
    u3[3] = 0.0f;
    u4[0] = u0;
    u4[1] = u1;
    u4[2] = u2;
    u4[3] = 0.0f;
    u6 = iaFsrra((_builtin_fipr(u3, u4)));
    *(float *)((((((a4 + 0x4) + 0x4) + 0x4) - 0x4) + 0x0)) = (u2 * u6);
    *(float *)(((((((a4 + 0x4) + 0x4) + 0x4) - 0x4) - 0x4) + 0x0)) = (u1 * u6);
    *(float *)((((((((a4 + 0x4) + 0x4) + 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = (u0 * u6);
}

int FUN_0c0755c0(int a4, int a5, int a6)
{
    return (FUN_0c075450(a4, 0x0, a5, a6, 0x0));
}

int FUN_0c07a380(int a4, int a5, int a6, int a7)
{
    nlMvSendTriangle(a4, a5, a6);
    return nlMvSendTriangle(a4, a6, a7);
}

int FUN_0c07e57c(int a4)
{
    register int t0;
    register int t1;

    if ((*(int *)((a4 + 0x0))) == 0) {
        t0 = *(int *)(((*(int *)0xC147740) + 0x0));
        t1 = 0x1;
        if ((t0 & 1) != 0) {
            t1 = 0x2;
        }
        *(unsigned int *)((a4 + 0x0)) = t1;
        t1 = t0;
    }
    return t1;
}

int FUN_0c07e7e2(void)
{
    register int t1;

    FUN_0c07e6ea(0x0, 0x0);
    t1 = FUN_0c07e42c(0x0);
    ntInfExit();
    return t1;
}

int vmsfs_c_getstate(int a4)
{
    return (*(int *)(((((((a4 << 2) << 2) << 2) << 1) + 0xC2C6914) + 0x4)));
}

int vmsfs_exit(void)
{
    memset(0xC2C8D2C, 0x0, 0xAA0);
    vmsio_exit();
    return 0x0;
}

float _app_coss(float f4)
{
    register int t1;
    register int t2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;

    t1 = 0x6;
    t2 = 0xC118460;
    u3 = (*(float *)0xC11845C);
    for (;;) {
        u4 = *(float *)((t2 + 0x0));
        t2 = (t2 + 0x4);
        t1 = (t1 - 1);
        u5 = (f4 * f4);
        u6 = u4;
        u6 = u6 + u5 * u3;
        u3 = u6;
        if ((int)t1 <= 0) {
            break;
        }
    }
    return u3;
}

int _mvito4b(int a4, int a5)
{
    register int t0;
    register int t1;

    t0 = a4;
    t1 = 0x18;
    for (;;) {
        *(unsigned char *)((t0 + 0x0)) = ((unsigned int)(*(int *)((a5 + 0x0))) << (int)(-t1));
        t0 = (t0 + 0x1);
        t1 = (t1 - 8);
        if ((unsigned int)t0 >= (unsigned int)(a4 + 0x4)) {
            break;
        }
    }
    return (a4 + 0x4);
}

int kmQueryFinishFlushVertexBuffer(void)
{
    register int t1;

    t1 = kmiQueryFinishDMA((*(int *)0xC300CF8));
    if (t1 != 1) {
        return 0xD;
    }
    return 0x0;
}

int pdGunGetLatchedPort(void)
{
    register int t0;
    register int t4;

    t0 = kdGetGunLatchedPort();
    t4 = t0;
    if ((int)t0 > 0) {
        t4 = (*(int *)(((t0 << 2) + 0xC16FF20)));
    }
    return t4;
}

int FUN_0c14f85c(void)
{
    FUN_0c14ff0c(((((struct o4_int *)0xC2D361C)->v)));
    (((struct o4_uint *)0xC2D361C)->v) = 0x0;
    (((struct o8_uint *)0xC2D361C)->v) = 0xFFFFFFFF;
    (((struct o0_uint *)0xC2D361C)->v) = 0x0;
    return 0xC2D361C;
}

int kmiBGPlanePutColor2(int a4, int a5, int a6, int a7)
{
    register int t3;

    t3 = a5;
    if ((a4 & 0x2000000) != 0) {
        *(unsigned int *)(((a5 << 2) + 0xC300974)) = a6;
        *(unsigned int *)((((a5 + 0x1) << 2) + 0xC300974)) = a7;
        t3 = ((a5 + 0x1) + 0x1);
    }
    return t3;
}

int kmiReleaseHardware(void)
{
    register int t2;

    if ((*(int *)0xC174098) != 0) {
        t2 = kmiUnloadDevice();
        *(unsigned int *)0xC174098 = 0x0;
    }
    return t2;
}

int kmSetEORCallback(int a4, int a5)
{
    kmiRegisterCallback((*(int *)0xC174098), 0x0, a4, a5);
    return 0x0;
}

int kmSetEndOfVertexCallback(int a4, int a5)
{
    kmiRegisterCallback((*(int *)0xC174098), 0x5, a4, a5);
    return 0x0;
}

int kmSetTexOverflowCallback(int a4, int a5)
{
    kmiRegisterCallback((*(int *)0xC174098), 0x3, a4, a5);
    return 0x0;
}

int kmSetStripOverRunCallback(int a4, int a5)
{
    kmiRegisterCallback((*(int *)0xC174098), 0x4, a4, a5);
    return 0x0;
}

int kmSetEndOfYUVCallback(int a4, int a5)
{
    kmiRegisterCallback((*(int *)0xC174098), 0x6, a4, a5);
    return 0x0;
}

int kmSetWaitVsyncCallback(int a4, int a5)
{
    kmiRegisterCallback((*(int *)0xC174098), 0x7, a4, a5);
    return 0x0;
}

int ADXSTM_GetGdfsStat(int a4, int a5, int a6, int a7)
{
    register int t1;

    t1 = cvFsGetStat((*(int *)((a4 + 0x8))), a5, a6, a7);
    *(unsigned int *)((a5 + 0x0)) = t1;
    return t1;
}

void SJMEM_Finish(void)
{
    register int t0;

    t0 = *(int *)0xC174368;
    *(unsigned int *)0xC174368 = (t0 - 1);
    if ((t0 - 1) == 0) {
        memset(0xC305168, 0x0, 0x480);
    return;
    }
}

void SJRBF_Finish(void)
{
    register int t0;

    t0 = *(int *)0xC1743A0;
    *(unsigned int *)0xC1743A0 = (t0 - 1);
    if ((t0 - 1) == 0) {
        memset(0xC3055E8, 0x0, 0xC00);
    return;
    }
}

void SJUNI_Finish(void)
{
    register int t0;

    t0 = *(int *)0xC1743D4;
    *(unsigned int *)0xC1743D4 = (t0 - 1);
    if ((t0 - 1) == 0) {
        memset(0xC3061E8, 0x0, 0xC00);
    return;
    }
}

int FUN_0c165dc6(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t4;

    t0 = (((struct o0_int *)0xC1743D8)->v);
    if (t0 != 0) {
        t4 = (((int (*)(int, int, int, int))(t0))(((((struct o4_int *)0xC1743D8)->v)), ((((struct o8_int *)0xC1743D8)->v)), a6, a7));
    }
    return t4;
}

int FUN_0c01ead0(int a4, int a5)
{
    return FUN_0c01e990(((((a4 << 2) << 2) << 1) + 0xC0997C5), 0x1, a5);
}

int FUN_0c070330(int a4, int a5)
{
    return (kmSetColorClampValue(a4, a5));
}

