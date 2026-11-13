/* Straight-line functions with calls and guards (batch gen_a): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o10C0_int { char p[0x10C0]; int v; };
struct o10C0_uint { char p[0x10C0]; unsigned int v; };
struct o10C4_uint { char p[0x10C4]; unsigned int v; };
struct o10E0_uint { char p[0x10E0]; unsigned int v; };
struct o10E4_uint { char p[0x10E4]; unsigned int v; };
struct o10F4_uint { char p[0x10F4]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o20_float { char p[0x20]; float v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o30_float { char p[0x30]; float v; };
struct o31_uchar { char p[0x31]; unsigned char v; };
struct o32_uchar { char p[0x32]; unsigned char v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_int { char p[0x40]; int v; };
struct o40_ushort { char p[0x40]; unsigned short v; };
struct o44_int { char p[0x44]; int v; };
struct o48_int { char p[0x48]; int v; };
struct o4C_short { char p[0x4C]; short v; };
struct o50_int { char p[0x50]; int v; };
struct o50_short { char p[0x50]; short v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o54_int { char p[0x54]; int v; };
struct o58_int { char p[0x58]; int v; };
struct o63_uchar { char p[0x63]; unsigned char v; };
struct o74_int { char p[0x74]; int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o90_float { char p[0x90]; float v; };
struct o94_int { char p[0x94]; int v; };
struct o9D8_int { char p[0x9D8]; int v; };
struct oAC_int { char p[0xAC]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oFC0_uint { char p[0xFC0]; unsigned int v; };
struct oFCC_int { char p[0xFCC]; int v; };
int ADXB_GetFormat(int);
int ADXB_GetNumChan(int);
int ADXB_GetNumLoop(int);
int ADXB_GetOutBps(int);
int ADX_GetCoefficient(int, int, int, int);
int BigOneRotate(int, int, int);
int ConvertSwitch2(void);
int FUN_0c018b00(int);
int FUN_0c01a0a4(void);
int FUN_0c01a166(int);
int FUN_0c01a1a0(int);
int FUN_0c01eea6(void);
int FUN_0c026b80(int, int);
int FUN_0c02f698(void);
int FUN_0c03b1ec(int, int);
int FUN_0c040bec(int, int);
int FUN_0c046466(void);
int FUN_0c04e64e(void);
int FUN_0c04ede4(void);
int FUN_0c04ef02(int);
int FUN_0c04f41c(void);
int FUN_0c04f45c(void);
int FUN_0c04f494(void);
int FUN_0c04f4d8(void);
int FUN_0c05004e(void);
int FUN_0c052eca(void);
int FUN_0c052f8c(void);
int FUN_0c053158(float);
int FUN_0c0551a0(void);
int FUN_0c058ca6(int, int);
int FUN_0c058f64(int, int, int, int);
int FUN_0c05ac3a(int);
int FUN_0c068c14(int, int, float);
int FUN_0c0702b0(void);
int FUN_0c0702d0(int, int);
int FUN_0c070e60(void);
int FUN_0c071ae0(int, int);
int FUN_0c071b20(int, int, int, int);
int FUN_0c071b40(int, ...);
int FUN_0c072b60(int, int, int, int);
int FUN_0c072fe0(void);
int FUN_0c075000(int, ...);
int FUN_0c075450(int, ...);
int FUN_0c075c90(int, int);
int FUN_0c076130(float);
int FUN_0c076230(float, float, float);
int FUN_0c07ada0(int, int, int, int, float, float, float, float, float);
int FUN_0c07b6e6(int);
int FUN_0c07ced8(int);
int FUN_0c07cef8(int);
int FUN_0c07d2aa(int, int, int);
int FUN_0c07dfb0(int, int, int);
int FUN_0c07ff00(void);
int FUN_0c07ffbc(int, int, int);
int FUN_0c14e15c(int, int, int);
int FUN_0c14e8e4(int);
int FUN_0c14e916(int);
int FUN_0c14ee68(int, int);
int FUN_0c15ef5c(void);
int FUN_0c15ef9c(void);
int FUN_0c16197a(int);
int FUN_0c161b18(int);
int FUN_0c162560(int);
int FUN_0c165b86(int);
int FUN_0c165de2(int);
int FUN_0c16a8d2(int);
int FUN_0c16f238(void);
int Init_Adv_Global_Parm(void);
extern float _builtin_fipr(float *, float *);
extern void _builtin_ftrv(float *, float *);
extern int _builtin_get_imask(void);
extern void _builtin_ld_ext(float (*)[4]);
extern void _builtin_set_imask(int);
extern float _builtin_sqrtf(float);
extern void _builtin_st_ext(float (*)[4]);
int _slow_strcmp1(int, int);
int adxamp_extract(int);
int adxsjd_decode_exec(int);
int buExit(void);
int buFbrDestroyServer(int, int, int, int);
int buFbrEndFiber(int, int, int, int, float, float, float, float, float, float, float, float);
int buFbrExecFiberServer(int, int, int, int, float, float, float, float, float, float, float, float);
int buFbrSleepFiber(int, int, int, int, float, float, float, float, float, float, float, float);
int buMount(int);
int camSnapToCar(int);
int gdFsOpenG(int, int);
int gdFsStopRd(int);
int kdGetDriverMode(int);
int kmFlipFrameBuffer(void);
int kmGetCurrentScanline(int);
int kmGetFreeTextureMem(int, int);
int kmRender(void);
int kmSetPaletteMode(int);
int kmfSetFatalErrorCallback(int);
int kmfSetTimeOutCount(int, int);
int kmiDiscardRenderPipeline(int, int, int, int);
int kmiFBGarbageCollect(void);
int kmiFBSortQueue(void);
int kmiQueryFinishDMA(int);
int kmiResetBoard(void);
int memset(int, int, int);
int mpdrv_get_device(int);
int mwRnaDestroy(int);
int mwRnaSetOutVol(void);
int mwRnaSetStmHdInfo(int, int, int);
int mwRnaStop(int);
int nlCloseEvent(int);
float nlFloor(float);
int nlLength(int, int);
float nlLog(float);
int nlMultiMatrix(int);
int nlMultiMatrix8(int);
int nlMultiMatrixRevOrder8(int);
int nlObjPutSetSpecularEyeDirectionF(float, float, float);
int nlPushMatrix(int);
int nlSin(int);
int nlSinf(float);
int nlstripSetVertexContext(int);
int pdVibIsReady(int);
int set_event(int, int);
int syChainDeleteHandler(int);
int syChainInit(void);
int syExtChkInit(void);
int syG2SysInit(void);
int texLoadIndexed(int, int);
int vmsfs_c_dispatch(int, int, int, int);
int vmsfs_c_setcallbackparam(int);
int vmsfs_c_setcompletecallback(int);
int vmsfs_c_setprogresscallback(int);
int vmsfs_isformat(int);
int vmsfs_ismount(int);
int FUN_0c016cb2(int a4);
int FUN_0c01ec32(int a4);
int FUN_0c026c02(void);
int FUN_0c01edbc(int a4, int a5);
int FUN_0c030c9c(void);
int FUN_0c048d70(int a4);
int FUN_0c04edcc(void);
void FUN_0c04fc7a(void);
void FUN_0c04feca(void);
void FUN_0c05bb64(int a4);
int FUN_0c05a902(void);
int FUN_0c062258(int a4);
int FUN_0c06eab0(void);
int FUN_0c06ead0(void);
int FUN_0c06f240(void);
void FUN_0c06f940(void);
int FUN_0c070430(int a4);
float FUN_0c070870(float f4);
int FUN_0c070a10(int a4);
void FUN_0c0721f0(int a4, int a5);
void FUN_0c072230(int a4, int a5);
void FUN_0c072290(int a4, int a5);
float FUN_0c073b40(int a4, int a5);
int FUN_0c0767c0(void);
int FUN_0c07ad70(float f4, float f5);
int FUN_0c07e4b4(void);
int FUN_0c07dc80(int a4, int a5);
int FUN_0c07dbf0(int a4, int a5);
int kmSetGlobalClipping(int a4, int a5);
int kmChangeVertexOffset(int a4, int a5);
void FUN_0c149c00(int a4);
int gdFsOpenRange(void);
int gdFsOpenFast(void);
int FUN_0c14b460(void);
int FUN_0c14b478(void);
int kmChangeContextColorType(int a4);
int gdFsGetStat(int a4);
int FUN_0c1606d4(int a4, int a5, int a6, int a7);
int FUN_0c164b24(void);
int SJRBF_Lock(void);
int SJUNI_Lock(void);
int mpdrv_get_version(int a4, int a5);
void FUN_0c16ad54(int a4);
void FUN_0c16ba68(int a4);
void FUN_0c16ba98(int a4, int a5);
int cvFsCallUsrErrFn(int a4, int a5, int a6, int a7);
void cvFsEntryErrFunc(int a4, int a5);
int ADXPD_SetCoef(int a4, int a5, int a6);
int FUN_0c01a7a4(void);
void FUN_0c01bde2(int a4);
float FUN_0c046498(void);
float FUN_0c04e6a0(void);
void FUN_0c03f164(int a4);
int FUN_0c054052(void);
int FUN_0c054068(void);
int FUN_0c058000(int a4);
void FUN_0c05b3d4(int a4, int a5);
int FUN_0c06ea00(int a4, int a5, int a6);
int FUN_0c06f170(int a4);
int FUN_0c070a60(float f4);
float FUN_0c070e80(void);
void FUN_0c075a00(int a4, float f4, float f5, float f6);
int FUN_0c075ad0(int a4, int a5);
int buSetCompleteCallback(int a4);
int buSetProgressCallback(int a4);
int buGetVersion(void);
int buSetCallbackParam(int a4);
int buIsReady(int a4);
int buIsFormat(int a4);
void FUN_0c07a2c0(void);
void FUN_0c07d1ce(int a4);
int vmsfs_c_exit(void);
int FUN_0c093fc6(int a4);
void FUN_0c149c18(int a4);
void gdFsLockDir(int a4);
int gdFsSetGlobalErr(void);
int gdFsOpenFastG(int a4, int a5);
int FUN_0c14b394(void);
int gdFsOpen(void);
int gdFsGetSysHn(void);
int gdFsGetWorkHn(void);
void gdFsEntryErrFuncAll(void);
void gdFsExecServer(void);
int kmiWaitForFinishDMA(int a4);
int kmiCopyToPVRMemory(int a4, int a5, int a6);
int kmiCopyFromPVRMemory(int a4, int a5, int a6);
int gdFsTell(int a4);
int gdFsGetNumRd(int a4);
int ADXSJD_Start(int a4);
void SJMEM_Unlock(int a4, int a5);
void SJRBF_Unlock(int a4, int a5);
void SJUNI_Unlock(int a4, int a5);
int mpdrv_frame_recv_post(void);
void FUN_0c16ad6c(int a4);
int mwSbGetSfreq(int a4);
int mwSbGetBitPerSmpl(int a4);
void FUN_0c16ba80(int a4);
int gdCiStopTr(int a4);
int ADXPD_Stop(int a4);
void FUN_0c010092(void);
void FUN_0c01e9e2(int a4, int a5);
void FUN_0c028058(void);
int FUN_0c03155a(void);
void FUN_0c031aee(void);
int FUN_0c03e806(int a4, int a5);
int FUN_0c05072c(void);
int FUN_0c053fde(void);
int FUN_0c05304a(float f4);
int FUN_0c05a3b0(float f4);
int FUN_0c05b3fc(void);
int FUN_0c0621e0(int a4);
int FUN_0c06fa70(void);
int FUN_0c0702f0(void);
int FUN_0c070310(void);
float FUN_0c073c60(int a4);
int buRemount(int a4);
int FUN_0c07cba2(void);
int kmResetRenderer(int a4, int a5, int a6, int a7);
int syMallocChangeIF(int a4);
int syHwInit2(void);
int kmiBGPlanePutWord(int a4, int a5, int a6);
int kmGarbageCollectTexture(void);
int gdFsToUpper(int a4);
void fmMngClearBuf(int a4, int a5);
int ADXRNA_SetStmHdInfo(int a4, int a5);
int FUN_0c16195c(void);
int ADXSJD_ExecHndl(int a4);
int mpdrv_set_end_ns(void);
int FUN_0c16a548(void);
void memcpy2(int a4, int a5, int a6);
void gdCiEntryErrFunc(int a4, int a5);
int FUN_0c16dacc(int a4, int a5);
int ADXB_CheckSpsd(int a4);
int FUN_0c010080(void);
int FUN_0c018c78(int a4);
int FUN_0c018c18(int a4);
int FUN_0c018de0(void);
int FUN_0c01efc0(void);
int FUN_0c026bd6(int a4);
void FUN_0c0281a4(int a4);
int FUN_0c0293f2(int a4);
int FUN_0c0318a2(void);
int FUN_0c03e700(void);
int FUN_0c0464de(int a4);
int FUN_0c0503d4(void);
int FUN_0c04f40a(void);
int FUN_0c050448(void);
int FUN_0c051844(int a4, int a5, int a6);
int FUN_0c05b3ea(void);
int FUN_0c05f43a(int a4);
int FUN_0c061bae(void);
int FUN_0c062004(int a4);
int FUN_0c06989a(void);
void FUN_0c06cd06(int a4, int a5);
float FUN_0c0709f0(float f4);
int FUN_0c074dc0(int a4, int a5, int a6, int a7);
int FUN_0c075bd0(int a4);
int FUN_0c075c20(int a4);
int FUN_0c075c40(int a4);
int FUN_0c075c60(int a4);
int FUN_0c076170(int a4);
void FUN_0c07d298(int a4, int a5);
int vmsfb_exec(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
int vmsfb_exit(int a4, int a5, int a6, int a7);
int syCfgInit(int a4);
int ADXT_SetOutVol(int a4, int a5);
void VQEnQueueTop(int a4, int a5);
int syCblCheckCable(void);
int ADXRNA_Destroy(int a4);
int mpdrv_get_deviceinfo(int a4);
int mwlSbGetStreamParam(int a4, int a5, int a6);
void ADXPD_Start(int a4);
int FUN_0c01e42c(void);
int FUN_0c026c1a(float f4, float f5, float f6);
int FUN_0c026c2a(float f4, float f5, float f6);
void kmDbgCloseLog(void);
void FUN_0c02802a(float f4);
int FUN_0c0293da(int a4, int a5);
int FUN_0c030e54(void);
void FUN_0c030eb4(void);
int FUN_0c0436f6(int a4);
int FUN_0c05b586(int a4);
int FUN_0c0605e2(void);
int FUN_0c0702c0(int a4);
float FUN_0c070d90(float f4);
float FUN_0c070da0(float f4);
int FUN_0c071b30(void);
void FUN_0c072600(int a4);
void FUN_0c0739a0(int a4);
void FUN_0c073a30(float f4, float f5, float f6);
float FUN_0c073c80(int a4);
int FUN_0c075310(void);
int FUN_0c0752c0(void);
int FUN_0c0755e0(void);
int FUN_0c0767b0(void);
void FUN_0c077998(int a4);
void FUN_0c07d1e4(int a4, int a5, int a6);
int FUN_0c0800c8(int a4, int a5);
int strlen(int a4);
int vmsfs_setretry(int a4);
int FUN_0c093fb6(int a4);
int syHwCacheFinish(int a4, int a5, int a6, int a7);
int FUN_0c14e0be(int a4);
int kmiMemCopy4(int a4, int a5, int a6);
void kmiWaitVlank(void);
int gdDcfDaPause_(void);
int syTmrGenStart(void);
int kdSetHandler(int a4, int a5);
void fmMngMcpy_tail_0c1708b2(int a4, int a5, int a6, int a7);
int FUN_0c161fe2(int a4, int a5, int a6, int a7);
int FUN_0c162006(int a4, int a5, int a6, int a7);
int FUN_0c16204e(int a4, int a5, int a6, int a7);
int FUN_0c16205a(int a4, int a5, int a6, int a7);
int FUN_0c162066(int a4, int a5, int a6, int a7);
int FUN_0c162072(int a4, int a5, int a6, int a7);
int mpdrv_recognize(int a4);
int mpdrv_ischanged(int a4);
int mpdrv_get_timeout(void);
int mpdrv_optimize(int a4);
void vmsfs_memcpyl(int a4, int a5, int a6);
int FUN_0c01e6f8(int a4);
int FUN_0c01ec7a(int a4);
void FUN_0c028196(void);
void FUN_0c0503fa(float f4, float f5, float f6);
int FUN_0c052dba(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8);
int mpvvlc_InitMbai(void);
int FUN_0c059d92(void);
int FUN_0c05b55e(int a4);
int FUN_0c05d1bc(int a4, int a5, int a6, int a7);
int FUN_0c05edbe(int a4, int a5, int a6, int a7);
int FUN_0c069e54(void);
int FUN_0c0702e0(void);
int FUN_0c0704a0(int a4, int a5);
int FUN_0c073000(void);
int FUN_0c075c00(int a4);
int FUN_0c076250(float f4, float f5, float f6);
int FUN_0c076260(float f4, float f5, float f6);
int FUN_0c07cdf4(int a4, int a5);
int FUN_0c07ffac(int a4);
int vmsfs_c_synch(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
int vmsfs_c_fiber1(int a4, int a5, int a6, int a7);
int vmsfs_c_fiber3(int a4, int a5, int a6, int a7);
int vmsfs_c_fiber4(int a4, int a5, int a6, int a7);
int vmsfs_c_fiber5(int a4, int a5, int a6, int a7);
int vmsfs_c_fiber6(int a4, int a5, int a6, int a7);
int vmsfs_c_fiber7(int a4, int a5, int a6, int a7);
int FUN_0c08faa8(int a4, int a5);
int vmsfs_c_fiber0(int a4, int a5, int a6, int a7);
int vmsfs_c_fiber2(int a4, int a5, int a6, int a7);
int vmsfb_sleep(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
int vmsfb_end(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
int buFbrSleepVFiber(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
int FUN_0c09402c(int a4, int a5);
int pdGetOptimize(void);
int pdGunGetFlashColor(void);
int syRtcFinish(void);
int FUN_0c14e13e(int a4);
int FUN_0c15ca90(int a4, int a5);
int gdDcfSvr_(int a4, int a5);
int kdGetDeviceInfo(int a4);
int kdGetPortStatus(int a4);
int FUN_0c1611f4(int a4);
int FUN_0c1626d0(int a4);
void SJRBF_Reset(int a4);
int mpdrv_get_portstatus(int a4);
int mpdrv_swapmode(int a4);
int mwlSbGetPitch(int a4, int a5, int a6);
int cvFsError(int a4, int a5, int a6, int a7);
int syG2AicaFifoIsEmpty(int a4);
int syG2FifoIsEmpty(int a4);
int ADXPD_Reset(int a4);
int FUN_0c018c2a(float f4, float f5);
int FUN_0c018c8a(float f4, float f5);
int FUN_0c018ce0(float f4, float f5);
void FUN_0c022794(int a4);
void FUN_0c026be8(int a4, int a5);
int FUN_0c02708a(void);
int FUN_0c02803a(int a4, int a5, int a6, int a7);
void FUN_0c02f096(void);
int FUN_0c03b318(int a4);
int FUN_0c0464ae(void);
float FUN_0c048fd6(int a4, float f4, float f5);
int FUN_0c04b586(void);
void FUN_0c04c5b0(void);
void FUN_0c05045a(void);
void FUN_0c0504ea(void);
void FUN_0c050538(void);
void FUN_0c050596(void);
void FUN_0c05063e(void);
void FUN_0c050720(void);
void FUN_0c050740(void);
void FUN_0c05909c(void);
void FUN_0c05f72a(int a4);
int FUN_0c066cba(int a4);
void FUN_0c0787d0(int a4);
void FUN_0c07d222(int a4, int a5, int a6);
void FUN_0c07d22e(int a4, int a5, int a6);
void FUN_0c07d9d0(void);
void FUN_0c087f40(float f4, float f5, float f6, float f7, float f8, float f9, float f10);
int kmiAddSysConfigFlag(int a4);
int pdGetPeripheral(int a4);
int kmfSetVertexBufferBaseAddress(int a4, int a5);
int gdFsCreateDirhn(int a4, int a5);
void kdGetGunPosition(int a4, int a5);
int FUN_0c15f004(void);
int syCblCheckCableType(void);
int FUN_0c160584(int a4, int a5);
int FUN_0c160598(int a4, int a5);
int FUN_0c1605ac(int a4, int a5);
int FUN_0c1605c0(int a4, int a5);
int FUN_0c1605d4(int a4, int a5);
int FUN_0c1605fc(int a4, int a5);
int FUN_0c160610(int a4, int a5);
int FUN_0c161fd6(int a4);
int FUN_0c161fee(int a4);
int FUN_0c161ffa(int a4);
int FUN_0c16201e(int a4);
int FUN_0c162036(int a4);
int FUN_0c162084(int a4, int a5, int a6, int a7);
int mpdrv_timeout(int a4);
int mpdrv_init_memory(void);
int gdCiGetNumTr(int a4);
void FUN_0c018cd6(int a4, int a5, int a6);
int FUN_0c018d02(void);
int FUN_0c019e34(void);
int FUN_0c03f154(int a4);
void FUN_0c0503e6(float f4, float f5);
void FUN_0c0503f0(float f4, float f5);
int FUN_0c0584ea(void);
int FUN_0c059954(void);
int FUN_0c05995e(void);
void FUN_0c05cac6(float f4);
int FUN_0c0656b6(int a4);

int FUN_0c016cb2(int a4)
{
    register int t1;

    camSnapToCar(a4);
    t1 = FUN_0c02f698();
    *(unsigned int *)0xC11CE70 = 0x1;
    return t1;
}

int FUN_0c01ec32(int a4)
{
    return (FUN_0c14e916((*(int *)(((a4 << 2) + 0xC1ECD54)))));
}

int FUN_0c026c02(void)
{
    FUN_0c026b80(((((struct o0_int *)0xC270B38)->v)), ((((struct o4_int *)0xC270B38)->v)));
    return FUN_0c076130(((((struct o20_float *)0xC270B38)->v)));
}

int FUN_0c01edbc(int a4, int a5)
{
    return FUN_0c14e15c((*(int *)(((a4 << 2) + 0xC1ECD54))), 0x2, a5);
}

int FUN_0c030c9c(void)
{
    FUN_0c071ae0(0xC289C88, 0x2);
    return FUN_0c071b20(0x0, 0x68, 0x200, 0x200);
}

int FUN_0c048d70(int a4)
{
    register int t2;

    (((struct o0_uint *)0xC2ADA7C)->v) = (*(int *)(((((a4 << 2) << 1) + 0xC0F82D0) + 0x0)));
    t2 = *(int *)(((((a4 << 2) << 1) + 0xC0F82D0) + 0x4));
    (((struct o4_uint *)0xC2ADA7C)->v) = t2;
    return t2;
}

int FUN_0c04edcc(void)
{
    if (((((struct o0_int *)0xC2B1CF8)->v)) == 0) {
        FUN_0c04ede4();
    }
    return FUN_0c04ef02((*(int *)((((((struct o8_int *)0xC2B1CF8)->v)) + 0x0))));
}

void FUN_0c04fc7a(void)
{
    if ((*(int *)0xC1ECD10) == 0) {
        *(unsigned int *)0xC2B1E0C = 0x1;
        FUN_0c0551a0();
    return;
    }
    *(unsigned int *)0xC2B1E0C = 0x0;
}

void FUN_0c04feca(void)
{
    (((struct o14_uint *)0xC2B29E4)->v) = 0x0;
    (((struct o0_uint *)0xC2B29E4)->v) = 0x0;
    (((struct o4_uint *)0xC2B29E4)->v) = 0x0;
    (((struct o8_uint *)0xC2B29E4)->v) = 0x0;
    (((struct oC_uint *)0xC2B29E4)->v) = 0x0;
}

void FUN_0c05bb64(int a4)
{
    if (a4 != 0) {
        nlCloseEvent((a4 - 20));
    return;
    }
}

int FUN_0c05a902(void)
{
    register int t2;

    FUN_0c05ac3a(0x0);
    FUN_0c05ac3a(0x1);
    t2 = FUN_0c05ac3a(0x2);
    *(unsigned int *)0xC2B9688 = 0x0;
    return t2;
}

int FUN_0c062258(int a4)
{
    register int t3;

    t3 = 0x0;
    if ((int)(*(int *)((((((struct oAC_int *)((*(int *)((a4 + 0x0)))))->v)) + 0x8))) > (int)0x1) {
        t3 = 0x1;
    }
    return t3;
}

int FUN_0c06eab0(void)
{
    int stk[2];

    kmGetFreeTextureMem(((int)stk + 0), (((int)stk + 0) + 0x4));
    return (*(int *)(((int)stk + 0)));
}

int FUN_0c06ead0(void)
{
    int stk[2];

    kmGetFreeTextureMem((((int)stk + 0) + 0x4), ((int)stk + 0));
    return (*(int *)(((int)stk + 0)));
}

int FUN_0c06f240(void)
{
    *(unsigned int *)0xC2BBAC4 = 0x1;
    kmRender();
    *(unsigned int *)0xC2BBAC4 = 0x0;
    return kmFlipFrameBuffer();
}

void FUN_0c06f940(void)
{
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t1 = 0x5;
    t2 = 0xC2BB52C;
    t3 = (*(int *)0xC2D0C3C);
    for (;;) {
        t4 = *(int *)((t3 + 0x0));
        t3 = (t3 + 0x4);
        t1 = (t1 - 1);
        *(unsigned int *)((t2 + 0x0)) = t4;
        t2 = (t2 + 0x4);
        if (t1 == 0) {
            break;
        }
    }
}

int FUN_0c070430(int a4)
{
    register int t0;

    t0 = 0xC070420;
    if (a4 == 0) {
        t0 = 0xC070390;
    }
    return kmfSetFatalErrorCallback(t0);
}

float FUN_0c070870(float f4)
{
    if (0.0f > f4) {
        return (-_builtin_sqrtf((-f4)));
    }
    return _builtin_sqrtf(f4);
}

int FUN_0c070a10(int a4)
{
    register int t1;

    t1 = (unsigned short)a4;
    if ((int)(unsigned short)a4 > (int)0x8000) {
        t1 = (0x10000 - (unsigned short)a4);
    }
    return nlSin((0x4000 - t1));
}

void FUN_0c0721f0(int a4, int a5)
{
    float u3[4];

    u3[0] = (*(float *)((a4 + 0x0)));
    u3[1] = ((((struct o4_float *)(a4))->v));
    u3[2] = ((((struct o4_float *)((a4 + 0x4)))->v));
    u3[3] = 1.0f;
    _builtin_ftrv(u3, u3);
    *(float *)((((a5 + 0x10) - 0x4) + 0x0)) = u3[3];
    *(float *)(((((a5 + 0x10) - 0x4) - 0x4) + 0x0)) = u3[2];
    *(float *)((((((a5 + 0x10) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[1];
    *(float *)(((((((a5 + 0x10) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[0];
}

void FUN_0c072230(int a4, int a5)
{
    float u3[4];

    u3[0] = (*(float *)((a4 + 0x0)));
    u3[1] = ((((struct o4_float *)(a4))->v));
    u3[2] = ((((struct o4_float *)((a4 + 0x4)))->v));
    u3[3] = 1.0f;
    _builtin_ftrv(u3, u3);
    *(float *)((((a5 + 0xC) - 0x4) + 0x0)) = u3[2];
    *(float *)(((((a5 + 0xC) - 0x4) - 0x4) + 0x0)) = u3[1];
    *(float *)((((((a5 + 0xC) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[0];
}

void FUN_0c072290(int a4, int a5)
{
    float u3[4];

    u3[0] = (*(float *)((a4 + 0x0)));
    u3[1] = ((((struct o4_float *)(a4))->v));
    u3[2] = ((((struct o4_float *)((a4 + 0x4)))->v));
    u3[3] = 0.0f;
    _builtin_ftrv(u3, u3);
    *(float *)((((a5 + 0xC) - 0x4) + 0x0)) = u3[2];
    *(float *)(((((a5 + 0xC) - 0x4) - 0x4) + 0x0)) = u3[1];
    *(float *)((((((a5 + 0xC) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[0];
}

float FUN_0c073b40(int a4, int a5)
{
    float u6[4];
    float u7[4];

    u6[0] = (*(float *)((a4 + 0x0)));
    u6[1] = ((((struct o4_float *)(a4))->v));
    u6[2] = ((((struct o4_float *)((a4 + 0x4)))->v));
    u6[3] = 0.0f;
    u7[0] = (*(float *)((a5 + 0x0)));
    u7[1] = ((((struct o4_float *)(a5))->v));
    u7[2] = ((((struct o4_float *)((a5 + 0x4)))->v));
    u7[3] = 0.0f;
    return (_builtin_fipr(u6, u7));
}

int FUN_0c0767c0(void)
{
    nlPushMatrix(0xC2BFC08);
    nlMultiMatrix((*(int *)0xC2BF960));
    return FUN_0c072fe0();
}

int FUN_0c07ad70(float f4, float f5)
{
    (((struct o0_float *)0xC2C3E44)->v) = (1.0f / f4);
    (((struct o4_float *)0xC2C3E44)->v) = (1.0f / f5);
    (((struct o8_float *)0xC2C3E44)->v) = f4;
    (((struct oC_float *)0xC2C3E44)->v) = f5;
    return 0x4;
}

int FUN_0c07e4b4(void)
{
    if (((((struct o9D8_int *)((*(int *)0xC147740)))->v)) == 0x41474553) {
        return 0x0;
    }
    return 0xFFFFFFFD;
}

int FUN_0c07dc80(int a4, int a5)
{
    nlstripSetVertexContext(0xC1476C4);
    return FUN_0c07dfb0(a4, 0x0, a5);
}

int FUN_0c07dbf0(int a4, int a5)
{
    nlstripSetVertexContext(0xC14769C);
    return FUN_0c07dfb0(a4, 0x0, a5);
}

int kmSetGlobalClipping(int a4, int a5)
{
    (((struct o8_uint *)0xC300A90)->v) = 0x1;
    (((struct oC_uint *)0xC300A90)->v) = a4;
    (((struct o10_uint *)0xC300A90)->v) = a5;
    (((struct o0_uint *)0xC300A90)->v) = 0x3;
    return 0x0;
}

int kmChangeVertexOffset(int a4, int a5)
{
    *(unsigned int *)((((*(int *)0xC2D0C3C) + (a4 << 2)) + 0x0)) = ((*(int *)(((a4 << 2) + 0xC2D0C88))) + (a5 << 2));
    return 0x0;
}

void FUN_0c149c00(int a4)
{
    *(unsigned int *)((a4 + 0x0)) = (_builtin_get_imask());
    _builtin_set_imask(0xF);
}

int gdFsOpenRange(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC1737F8;
    if (t0 != 0) {
        t1 = (((struct o44_int *)(t0))->v);
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}

int gdFsOpenFast(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC1737F8;
    if (t0 != 0) {
        t1 = (((struct o40_int *)(t0))->v);
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}

int FUN_0c14b460(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC1737F8;
    if (t0 != 0) {
        t1 = (((struct o54_int *)(t0))->v);
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}

int FUN_0c14b478(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC1737F8;
    if (t0 != 0) {
        t1 = (((struct o58_int *)(t0))->v);
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}

int kmChangeContextColorType(int a4)
{
    register int t0;

    t0 = *(int *)0xC300DEC;
    *(unsigned int *)0xC300DEC = ((t0 & 0xFFFFFFCF) | ((a4 << 2) << 2));
    *(unsigned int *)0xC174134 = ((t0 & 0xFFFFFFCF) | ((a4 << 2) << 2));
    return 0x0;
}

int gdFsGetStat(int a4)
{
    if (a4 != 0) {
        if (((((struct o4C_short *)(a4))->v)) == 0) {
            return 0xFFFFFFF6;
        }
        return ((((struct o50_short *)(a4))->v));
    }
    return 0xFFFFFFF6;
}

int FUN_0c1606d4(int a4, int a5, int a6, int a7)
{
    if ((int)a6 <= 0) {
        return 0x1;
    }
    return ((int (*)(int, int, int, int))(0xC1606C8))(a4, a5, (a6 - 1), a7);
}

int FUN_0c164b24(void)
{
    register int t0;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    return t0;
}

int SJRBF_Lock(void)
{
    register int t0;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    return t0;
}

int SJUNI_Lock(void)
{
    register int t0;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    return t0;
}

int mpdrv_get_version(int a4, int a5)
{
    register int t5;

    if (a4 != 0) {
        *(unsigned int *)((a4 + 0x0)) = ((((struct o0_int *)0xC171ABC)->v));
    }
    if (a5 != 0) {
        t5 = (((struct o4_int *)0xC171ABC)->v);
        *(unsigned int *)((a5 + 0x0)) = t5;
    }
    return t5;
}

void FUN_0c16ad54(int a4)
{
    *(unsigned int *)((a4 + 0x0)) = (_builtin_get_imask());
    _builtin_set_imask(0xF);
}

void FUN_0c16ba68(int a4)
{
    *(unsigned int *)((a4 + 0x0)) = (_builtin_get_imask());
    _builtin_set_imask(0xF);
}

void FUN_0c16ba98(int a4, int a5)
{
    if (a4 == 0) {
        (((struct o0_uint *)0xC174488)->v) = 0x0;
        (((struct o4_uint *)0xC174488)->v) = 0x0;
        return;
    }
    (((struct o0_uint *)0xC174488)->v) = a4;
    (((struct o4_uint *)0xC174488)->v) = a5;
}

int cvFsCallUsrErrFn(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t3;

    t0 = (((struct o0_int *)0xC174578)->v);
    if (t0 != 0) {
        t3 = (((int (*)(int, int, int, int))(t0))(((((struct o4_int *)0xC174578)->v)), a5, a6, a7));
    }
    return t3;
}

void cvFsEntryErrFunc(int a4, int a5)
{
    if (a4 == 0) {
        (((struct o0_uint *)0xC174578)->v) = 0x0;
        (((struct o4_uint *)0xC174578)->v) = 0x0;
        return;
    }
    (((struct o0_uint *)0xC174578)->v) = a4;
    (((struct o4_uint *)0xC174578)->v) = a5;
}

int ADXPD_SetCoef(int a4, int a5, int a6)
{
    return ADX_GetCoefficient(a6, a5, (a4 + 0x30), ((a4 + 0x30) + 0x2));
}

int FUN_0c01a7a4(void)
{
    FUN_0c01a166(0x0);
    FUN_0c01a1a0(0x0);
    FUN_0c01a166(0x2);
    ConvertSwitch2();
    return FUN_0c01a0a4();
}

void FUN_0c01bde2(int a4)
{
    if (a4 == 0) {
        *(unsigned int *)0xC11D044 = 0x0;
    } else {
        *(unsigned int *)0xC11D044 = 0x384;
    }
    *(unsigned int *)0xC2AC2F8 = 0x0;
}

float FUN_0c046498(void)
{
    register int t0;

    t0 = FUN_0c046466();
    return ((float)t0 * (*(float *)0xC04656C));
}

float FUN_0c04e6a0(void)
{
    register int t0;

    t0 = FUN_0c04e64e();
    return ((float)t0 * 3.05175781e-05f);
}

void FUN_0c03f164(int a4)
{
    if ((int)(*(int *)0xC2A4680) < (int)a4) {
        FUN_0c03b1ec(a4, 0xC2A4680);
    return;
    }
    *(unsigned int *)0xC2A4680 = ((*(int *)0xC2A4680) - a4);
}

int FUN_0c054052(void)
{
    *(unsigned int *)0xC2B2DE4 = 0x1;
    FUN_0c058ca6(0xF04A9, 0x0);
    return FUN_0c0503d4();
}

int FUN_0c054068(void)
{
    *(unsigned int *)0xC2B2DE4 = 0x1;
    FUN_0c058ca6(0xF04A9, 0x0);
    return FUN_0c0503d4();
}

int FUN_0c058000(int a4)
{
    register int t0;

    t0 = pdGetPeripheral(a4);
    *(unsigned int *)0xC2B32C0 = t0;
    return t0;
}

void FUN_0c05b3d4(int a4, int a5)
{
    register int t0;

    t0 = a4;
    for (;;) {
        if ((int)(t0 - a4) >= (int)a5) {
            break;
        }
        *(unsigned char *)((t0 + 0x0)) = 0x0;
        t0 = (t0 + 0x1);
    }
}

int FUN_0c06ea00(int a4, int a5, int a6)
{
    return texLoadIndexed(a4, (*(int *)(((((a6 << 2) << 2) + a5) + 0x8))));
}

int FUN_0c06f170(int a4)
{
    *(unsigned char *)0xC2C4DA1 = a4;
    return kmSetPaletteMode((*(int *)(((a4 << 2) + 0xC1138A8))));
}

int FUN_0c070a60(float f4)
{
    return nlSinf(((-_builtin_fabsf(f4)) + (*(float *)0xC070ADC)));
}

float FUN_0c070e80(void)
{
    register int t0;

    t0 = FUN_0c070e60();
    return ((float)t0 * (*(float *)0xC070EE4));
}

void FUN_0c075a00(int a4, float f4, float f5, float f6)
{
    (((struct o30_float *)((a4 + 0x18)))->v) = f4;
    (((struct o34_float *)((a4 + 0x18)))->v) = f5;
    (((struct o38_float *)((a4 + 0x18)))->v) = f6;
}

int FUN_0c075ad0(int a4, int a5)
{
    register int t1;

    t1 = (int)((unsigned int)a5 & 0x1);
    (((struct o50_uint *)((a4 + 0x18)))->v) = ((((((struct o50_int *)((a4 + 0x18)))->v)) & 0xFFFFFFBF) | ((unsigned int)t1 << 6));
    return t1;
}

int buSetCompleteCallback(int a4)
{
    return (vmsfs_c_setcompletecallback(a4));
}

int buSetProgressCallback(int a4)
{
    return (vmsfs_c_setprogresscallback(a4));
}

int buGetVersion(void)
{
    return (*(int *)0xC14752C);
}

int buSetCallbackParam(int a4)
{
    return (vmsfs_c_setcallbackparam(a4));
}

int buIsReady(int a4)
{
    return (vmsfs_ismount(a4));
}

int buIsFormat(int a4)
{
    return (vmsfs_isformat(a4));
}

void FUN_0c07a2c0(void)
{
    (((struct o0_uint *)0xC2C3E1C)->v) = 0x81000000;
    (((struct o4_uint *)0xC2C3E1C)->v) = 0x0;
    (((struct o8_uint *)0xC2C3E1C)->v) = 0x81000040;
    (((struct oC_uint *)0xC2C3E1C)->v) = 0x20000000;
}

void FUN_0c07d1ce(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = 0x40;
    t1 = 0xC113F64;
    t2 = a4;
    for (;;) {
        t3 = *(signed char *)((t1 + 0x0));
        t1 = (t1 + 0x1);
        t0 = (t0 - 1);
        *(unsigned char *)((t2 + 0x0)) = t3;
        t2 = (t2 + 0x1);
        if (t0 == 0) {
            break;
        }
    }
}

int vmsfs_c_exit(void)
{
    memset(0xC2C6914, 0x0, 0x400);
    return 0x0;
}

int FUN_0c093fc6(int a4)
{
    if ((*(int *)((a4 + 0x0))) == 1) {
        return 0x0;
    }
    return ((*(signed char *)((0x10 + (*(int *)((a4 + 0x4)))))) & 0x40);
}

void FUN_0c149c18(int a4)
{
    _builtin_set_imask(((unsigned int)((((*(int *)((a4 + 0x0))) & 0xF) << 2) << 2) >> 4));
}

void gdFsLockDir(int a4)
{
    int t0;

    if ((a4 != 0) && (t0 = *(int *)((a4 + 0x0)), (int)t0 >= (int)0x2)) {
        *(unsigned int *)(((a4 + 0x10) + 0x2C)) = (*(int *)(((a4 + 0x10) + 0x0)));
    }
}

int gdFsSetGlobalErr(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC1737F8;
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x20));
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}

int gdFsOpenFastG(int a4, int a5)
{
    return gdFsOpenG(a4, a5);
}

int FUN_0c14b394(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC1737F8;
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x2C));
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}

int gdFsOpen(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC1737F8;
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x3C));
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}

int gdFsGetSysHn(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC1737F8;
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x34));
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}

int gdFsGetWorkHn(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC1737F8;
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x30));
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}

void gdFsEntryErrFuncAll(void)
{
    register int t0;

    t0 = *(int *)0xC1737F8;
    if (t0 != 0) {
        ((int (*)(void))(((((struct o74_int *)(t0))->v))))();
    return;
    }
}

void gdFsExecServer(void)
{
    register int t0;

    t0 = *(int *)0xC1737F8;
    if (t0 != 0) {
        ((int (*)(void))(((((struct o48_int *)(t0))->v))))();
    return;
    }
}

int kmiWaitForFinishDMA(int a4)
{
    register int t0;

    for (;;) {
        t0 = kmiQueryFinishDMA(a4);
        if (t0 == 1) {
            break;
        }
    }
    return 0x1;
}

int kmiCopyToPVRMemory(int a4, int a5, int a6)
{
    kmiMemCopy4((a4 + 0xA5000000), a5, a6);
    return 0x1;
}

int kmiCopyFromPVRMemory(int a4, int a5, int a6)
{
    kmiMemCopy4(a4, (a5 + 0xA5000000), a6);
    return 0x1;
}

int gdFsTell(int a4)
{
    if (a4 != 0) {
        if (((((struct o4C_short *)(a4))->v)) == 0) {
            return 0x0;
        }
        return (*(int *)((a4 + 0x14)));
    }
    return 0x0;
}

int gdFsGetNumRd(int a4)
{
    if (a4 != 0) {
        if (((((struct o4C_short *)(a4))->v)) == 0) {
            return 0x0;
        }
        return (*(int *)((a4 + 0x18)));
    }
    return 0x0;
}

int ADXSJD_Start(int a4)
{
    FUN_0c16197a(a4);
    *(unsigned char *)((a4 + 0x1)) = 0x1;
    return 0x1;
}

void SJMEM_Unlock(int a4, int a5)
{
    _builtin_set_imask(((unsigned int)(((a5 & 0xF) << 2) << 2) >> 4));
}

void SJRBF_Unlock(int a4, int a5)
{
    _builtin_set_imask(((unsigned int)(((a5 & 0xF) << 2) << 2) >> 4));
}

void SJUNI_Unlock(int a4, int a5)
{
    _builtin_set_imask(((unsigned int)(((a5 & 0xF) << 2) << 2) >> 4));
}

int mpdrv_frame_recv_post(void)
{
    (((struct oFC0_uint *)((*(int *)0xC30817C)))->v) = 0x1;
    *(unsigned char *)(((*(int *)0xC16A484) + 0x0)) = 0x0;
    return 0x0;
}

void FUN_0c16ad6c(int a4)
{
    _builtin_set_imask(((unsigned int)((((*(int *)((a4 + 0x0))) & 0xF) << 2) << 2) >> 4));
}

int mwSbGetSfreq(int a4)
{
    register int t1;

    t1 = FUN_0c07ced8((*(short *)((a4 + 0x6))));
    *(unsigned int *)((a4 + 0x14)) = t1;
    return t1;
}

int mwSbGetBitPerSmpl(int a4)
{
    register int t1;

    t1 = FUN_0c07cef8((*(short *)((a4 + 0x6))));
    *(unsigned int *)((a4 + 0x10)) = t1;
    return t1;
}

void FUN_0c16ba80(int a4)
{
    _builtin_set_imask(((unsigned int)((((*(int *)((a4 + 0x0))) & 0xF) << 2) << 2) >> 4));
}

int gdCiStopTr(int a4)
{
    register int t1;

    t1 = gdFsStopRd((*(int *)((a4 + 0x4))));
    *(unsigned int *)((a4 + 0x8)) = 0x0;
    return t1;
}

int ADXPD_Stop(int a4)
{
    *(unsigned int *)((a4 + 0xC)) = 0x0;
    return memset((a4 + 0x28), 0x0, 0x8);
}

void FUN_0c010092(void)
{
    register int t0;
    register int t2;
    register int t3;

    t0 = 0xC096534;
    t2 = 0xC175420;
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0xC096534 + 1168)) < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
}

void FUN_0c01e9e2(int a4, int a5)
{
    (((struct o0_uint *)0xC2690D4)->v) = 0x1;
    (((struct o4_uint *)0xC2690D4)->v) = a4;
    (((struct o8_uint *)0xC2690D4)->v) = a5;
    (((struct oC_uint *)0xC2690D4)->v) = a5;
}

void FUN_0c028058(void)
{
    (((struct oC_uint *)0xC128ACC)->v) = 0x0;
    (((struct o8_uint *)0xC128ACC)->v) = 0x0;
    (((struct o4_uint *)0xC128ACC)->v) = 0x0;
    (((struct o0_uint *)0xC128ACC)->v) = 0x0;
    *(unsigned int *)0xC128A4C = 0x8200000A;
}

int FUN_0c03155a(void)
{
    register int t0;

    for (;;) {
        t0 = buExit();
        if (t0 == 0) {
            break;
        }
    }
    return t0;
}

void FUN_0c031aee(void)
{
    register int t0;
    register int t2;
    register int t3;

    t0 = 0xC28DD0C;
    t2 = 0xC293344;
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0xC28DD0C + 8104)) < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
}

int FUN_0c03e806(int a4, int a5)
{
    *(unsigned int *)0xC12B77C = a4;
    return FUN_0c058f64(0xC12B77C, 0x0, a5, 0x0);
}

int FUN_0c05072c(void)
{
    register int t0;

    t0 = FUN_0c05004e();
    *(unsigned int *)0xC2B1DD4 = ((*(int *)0xC2B1DD4) | 0x200000);
    return t0;
}

int FUN_0c053fde(void)
{
    register int t0;

    t0 = FUN_0c058ca6(0xE04A9, 0x0);
    *(unsigned int *)0xC2B2DE4 = 0x1;
    return t0;
}

int FUN_0c05304a(float f4)
{
    register int t0;

    t0 = *(short *)0xC2B2B58;
    if (((unsigned short)t0 & 0x1) == 1) {
        return FUN_0c053158(f4);
    }
    return ((unsigned short)t0 & 0x1);
}

int FUN_0c05a3b0(float f4)
{
    int stk[1];

    *(float *)(((int)stk + 0)) = f4;
    return (((((*(int *)((((int)stk + 0) + 0x0))) & 0x7F800000) == 0x7F800000)) ? 1 : 0);
}

int FUN_0c05b3fc(void)
{
    return FUN_0c076230(((((struct o0_float *)0xC2B968C)->v)), ((((struct o4_float *)0xC2B968C)->v)), ((((struct o8_float *)0xC2B968C)->v)));
}

int FUN_0c0621e0(int a4)
{
    if (((*(signed char *)(((a4 + 0x63) + 0x0))) & 16) != 0) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c06fa70(void)
{
    int stk[1];

    kmGetCurrentScanline(((int)stk + 0));
    return (*(int *)(((int)stk + 0)));
}

int FUN_0c0702f0(void)
{
    register int t0;
    register int t2;

    t0 = FUN_0c0702b0();
    t2 = FUN_0c0702d0((*(int *)0xC2BB60C), t0);
    return FUN_0c0702c0(t2);
}

int FUN_0c070310(void)
{
    register int t0;
    register int t2;

    t0 = FUN_0c0702b0();
    t2 = FUN_0c0702d0((*(int *)0xC2BB60C), t0);
    return FUN_0c0702c0(t2);
}

float FUN_0c073c60(int a4)
{
    register float u0;
    register float u1;
    register float u2;
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
    return _builtin_sqrtf((_builtin_fipr(u3, u4)));
}

int buRemount(int a4)
{
    return (buMount(a4));
}

int FUN_0c07cba2(void)
{
    register int t0;

    t0 = FUN_0c07b6e6(0xA0800088);
    return (t0 - (*(int *)0xC2C3E70));
}

int kmResetRenderer(int a4, int a5, int a6, int a7)
{
    kmiDiscardRenderPipeline(a4, a5, a6, a7);
    kmiResetBoard();
    return 0x0;
}

int syMallocChangeIF(int a4)
{
    register int t0;

    t0 = *(int *)0xC2D12B4;
    if (a4 == 0) {
        *(unsigned int *)0xC2D12B4 = 0xC16FF68;
    } else {
        *(unsigned int *)0xC2D12B4 = a4;
    }
    return t0;
}

int syHwInit2(void)
{
    syChainInit();
    syG2SysInit();
    return syExtChkInit();
}

int kmiBGPlanePutWord(int a4, int a5, int a6)
{
    register int t2;

    t2 = a5;
    if ((a4 & 0x1000000) != 0) {
        *(unsigned int *)(((a5 << 2) + 0xC300974)) = a6;
        t2 = (a5 + 0x1);
    }
    return t2;
}

int kmGarbageCollectTexture(void)
{
    kmiFBSortQueue();
    return (kmiFBGarbageCollect());
}

int gdFsToUpper(int a4)
{
    register int t1;

    t1 = a4;
    if (((int)(signed char)a4 >= (int)0x61) && ((int)(signed char)a4 <= (int)0x7A)) {
        t1 = (a4 - 32);
    }
    return t1;
}

void fmMngClearBuf(int a4, int a5)
{
    register int t0;
    register int t1;

    if ((int)a5 > 0) {
        t0 = a4;
        t1 = a5;
        for (;;) {
            t1 = (t1 - 1);
            *(unsigned char *)((t0 + 0x0)) = 0xFFFFFFFF;
            t0 = (t0 + 0x1);
            if ((int)t1 <= 0) {
                break;
            }
        }
    }
}

int ADXRNA_SetStmHdInfo(int a4, int a5)
{
    int stk[1];

    mwRnaSetStmHdInfo(a4, a5, ((int)stk + 0));
    return (*(int *)(((int)stk + 0)));
}

int FUN_0c16195c(void)
{
    FUN_0c16a548();
    return memset(0xC302AC0, 0x0, 0x4E0);
}

int ADXSJD_ExecHndl(int a4)
{
    register int t2;

    if ((*(signed char *)((a4 + 0x1))) != 2) {
        t2 = *(signed char *)((a4 + 0x1));
        if (t2 == 1) {
            return FUN_0c161b18(a4);
        }
        return t2;
    }
    return adxsjd_decode_exec(a4);
}

int mpdrv_set_end_ns(void)
{
    register int t1;

    t1 = (((struct oFCC_int *)((*(int *)0xC30817C)))->v);
    *(unsigned int *)((t1 + 0x0)) = ((*(int *)((t1 + 0x0))) | 0x80000000);
    return 0x0;
}

int FUN_0c16a548(void)
{
    FUN_0c16f238();
    return memset(0xC308180, 0x0, 0x560);
}

void memcpy2(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    if ((int)a6 > 0) {
        t0 = a4;
        t1 = a5;
        t2 = a6;
        for (;;) {
            t3 = *(short *)((t1 + 0x0));
            t1 = (t1 + 0x2);
            t2 = (t2 - 1);
            *(unsigned short *)((t0 + 0x0)) = t3;
            t0 = (t0 + 0x2);
            if ((int)t2 <= 0) {
                break;
            }
        }
    }
}

void gdCiEntryErrFunc(int a4, int a5)
{
    if (a4 != 0) {
        (((struct o0_uint *)0xC1744A8)->v) = a4;
    }
    if (a5 != 0) {
        (((struct o4_uint *)0xC1744A8)->v) = a5;
    }
}

int FUN_0c16dacc(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = a4;
    t1 = a5;
    for (;;) {
        t2 = *(int *)((t0 + 0x0));
        t1 = (t1 - 0x1);
        *(unsigned int *)((t0 + 0x0)) = ((((unsigned int)((((unsigned int)((((unsigned int)t2) & 0xFFFF0000) | ((((unsigned int)t2) & 0xFF) << 8) | ((((unsigned int)t2) >> 8) & 0xFF))) << 16) | (((unsigned int)((((unsigned int)t2) & 0xFFFF0000) | ((((unsigned int)t2) & 0xFF) << 8) | ((((unsigned int)t2) >> 8) & 0xFF))) >> 16))) & 0xFFFF0000) | ((((unsigned int)((((unsigned int)((((unsigned int)t2) & 0xFFFF0000) | ((((unsigned int)t2) & 0xFF) << 8) | ((((unsigned int)t2) >> 8) & 0xFF))) << 16) | (((unsigned int)((((unsigned int)t2) & 0xFFFF0000) | ((((unsigned int)t2) & 0xFF) << 8) | ((((unsigned int)t2) >> 8) & 0xFF))) >> 16))) & 0xFF) << 8) | ((((unsigned int)((((unsigned int)((((unsigned int)t2) & 0xFFFF0000) | ((((unsigned int)t2) & 0xFF) << 8) | ((((unsigned int)t2) >> 8) & 0xFF))) << 16) | (((unsigned int)((((unsigned int)t2) & 0xFFFF0000) | ((((unsigned int)t2) & 0xFF) << 8) | ((((unsigned int)t2) >> 8) & 0xFF))) >> 16))) >> 8) & 0xFF));
        t0 = (t0 + 0x4);
        if (t1 == 0) {
            break;
        }
    }
    return 0x0;
}

int ADXB_CheckSpsd(int a4)
{
    register int t0;

    t0 = FUN_0c07ffbc(a4, 0xC172F40, 0x4);
    return (((t0 == 0)) ? 1 : 0);
}

int FUN_0c010080(void)
{
    return (FUN_0c07ff00());
}

int FUN_0c018c78(int a4)
{
    return (FUN_0c07ff00());
}

int FUN_0c018c18(int a4)
{
    return (FUN_0c07ff00());
}

int FUN_0c018de0(void)
{
    register int t0;

    t0 = FUN_0c018b00(0x8);
    *(unsigned int *)0xC177E80 = 0x1;
    return t0;
}

int FUN_0c01efc0(void)
{
    (((struct o0_uint *)0xC2707D8)->v) = 0xFFFFFFFF;
    (((struct o4_uint *)0xC2707D8)->v) = 0x0;
    *(unsigned int *)0xC123E54 = 0x0;
    return FUN_0c01eea6();
}

int FUN_0c026bd6(int a4)
{
    return (FUN_0c07ff00());
}

void FUN_0c0281a4(int a4)
{
    register int t0;

    t0 = *(int *)0xC270E3C;
    *(unsigned int *)0xC270E3C = (t0 + 0x1);
    *(unsigned char *)((((t0 + 0x1) - 0x1) + 0x0)) = a4;
    *(unsigned char *)(((*(int *)0xC270E3C) + 0x0)) = 0x0;
}

int FUN_0c0293f2(int a4)
{
    (((struct o0_uint *)0xC270ED4)->v) = a4;
    (((struct o4_uint *)0xC270ED4)->v) = (*(int *)(((a4 << 2) + 0xC128BE4)));
    return 0xC128BE4;
}

int FUN_0c0318a2(void)
{
    buSetCompleteCallback(0xC0318B4);
    return buSetProgressCallback(0xC031928);
}

int FUN_0c03e700(void)
{
    register int t0;

    t0 = pdVibIsReady(0x2);
    return (((t0 == 1)) ? 1 : 0);
}

int FUN_0c0464de(int a4)
{
    if ((a4 & (*(int *)0xC2AC624)) != 0) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c0503d4(void)
{
    *(unsigned int *)0xC2B1DD4 = ((*(int *)0xC2B1DD4) & 0xFFFFFF7F);
    *(unsigned int *)0xC2B29E0 = 0x0;
    return 0xC2B29E0;
}

int FUN_0c04f40a(void)
{
    FUN_0c04f41c();
    FUN_0c04f45c();
    FUN_0c04f494();
    return FUN_0c04f4d8();
}

int FUN_0c050448(void)
{
    *(unsigned int *)0xC2B1DD4 = ((*(int *)0xC2B1DD4) | 0x100);
    *(unsigned int *)0xC2B29F4 = 0x0;
    return 0xC2B29F4;
}

int FUN_0c051844(int a4, int a5, int a6)
{
    (((struct o14_float *)(a4))->v) = 100.0f;
    *(unsigned int *)((a4 + 0x18)) = a5;
    *(unsigned int *)((a4 + 0x1C)) = a6;
    *(unsigned int *)((a4 + 0x20)) = 0x0;
    return 0x14;
}

int FUN_0c05b3ea(void)
{
    return (FUN_0c07ff00());
}

int FUN_0c05f43a(int a4)
{
    return (FUN_0c07ff00());
}

int FUN_0c061bae(void)
{
    if ((*(int *)0xC2B9CA4) != 0) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c062004(int a4)
{
    (((struct o63_uchar *)(a4))->v) = ((*(signed char *)(((a4 + 0x63) + 0x0))) | 0x8);
    return FUN_0c040bec(0x3, 0x2);
}

int FUN_0c06989a(void)
{
    if (((*(signed char *)0xC2BA6A7) & 8) != 0) {
        return 0x1;
    }
    return 0x0;
}

void FUN_0c06cd06(int a4, int a5)
{
    *(unsigned int *)((a4 + 0x0)) = 0xC8AFE18;
    *(unsigned int *)((a5 + 0x0)) = 0x2901E8;
    *(unsigned int *)0xC1ECC88 = 0xFFFFFFFF;
}

float FUN_0c0709f0(float f4)
{
    register float t0;

    t0 = nlFloor((-f4));
    return (-t0);
}

int FUN_0c074dc0(int a4, int a5, int a6, int a7)
{
    FUN_0c072b60(0xC2BFB70, a5, a6, a7);
    return nlMultiMatrix(0xC2BFB30);
}

int FUN_0c075bd0(int a4)
{
    register int t0;

    t0 = a4;
    if (a4 != 2) {
        t0 = 0x1;
    }
    *(unsigned int *)0xC2BFCCC = (t0 << 29);
    return a4;
}

int FUN_0c075c20(int a4)
{
    FUN_0c0767b0();
    return FUN_0c075c90(a4, 0x0);
}

int FUN_0c075c40(int a4)
{
    FUN_0c0767b0();
    return FUN_0c075c90(a4, 0xFFFFFFFF);
}

int FUN_0c075c60(int a4)
{
    FUN_0c0767c0();
    return FUN_0c075c90(a4, 0x0);
}

int FUN_0c076170(int a4)
{
    return nlObjPutSetSpecularEyeDirectionF((*(float *)((a4 + 0x0))), ((((struct o4_float *)(a4))->v)), ((((struct o8_float *)(a4))->v)));
}

void FUN_0c07d298(int a4, int a5)
{
    register int t0;
    register int t1;

    t0 = 0x4;
    t1 = (a4 + 0x30);
    for (;;) {
        t0 = (t0 - 0x1);
        *(unsigned char *)((t1 + 0x0)) = a5;
        t1 = (t1 + 0x4);
        if (t0 == 0) {
            break;
        }
    }
}

int vmsfb_exec(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    return (buFbrExecFiberServer((*(int *)0xC2CF09C), a5, a6, a7, f4, f5, f6, f7, f8, f9, f10, f11));
}

int vmsfb_exit(int a4, int a5, int a6, int a7)
{
    return (buFbrDestroyServer((*(int *)0xC2CF09C), a5, a6, a7));
}

int syCfgInit(int a4)
{
    if (a4 == 0) {
        return 0xFFFFFFFF;
    }
    *(unsigned int *)0xC173808 = a4;
    return 0x0;
}

int ADXT_SetOutVol(int a4, int a5)
{
    (((struct o40_ushort *)(a4))->v) = a5;
    *(volatile int *)((a4 + 0xC));
    return thunk_mwRnaSetOutVol();
}

void VQEnQueueTop(int a4, int a5)
{
    register int t2;

    t2 = 0x0;
    if ((*(int *)((a4 + 0x0))) == 0) {
    } else {
        t2 = (*(int *)((a4 + 0x0)));
    }
    *(unsigned int *)((a5 + 0x4)) = t2;
    *(unsigned int *)((a4 + 0x0)) = a5;
}

int syCblCheckCable(void)
{
    register int t0;

    t0 = syCblCheckCableType();
    return (0x3 & ((unsigned int)t0 >> 8));
}

int ADXRNA_Destroy(int a4)
{
    mwRnaStop(a4);
    return mwRnaDestroy(a4);
}

int mpdrv_get_deviceinfo(int a4)
{
    return (((*(int *)0xC30817C) + 0x44C) + (a4 * 0x78));
}

int mwlSbGetStreamParam(int a4, int a5, int a6)
{
    return FUN_0c07d2aa((*(int *)(((*(int *)((a4 + 0x1C))) + 0x4))), a5, a6);
}

void ADXPD_Start(int a4)
{
    if ((*(int *)((a4 + 0xC))) == 0) {
        *(unsigned int *)((a4 + 0x10)) = 0x0;
        *(unsigned int *)((a4 + 0xC)) = 0x1;
    }
}

int FUN_0c01e42c(void)
{
    register int t1;

    t1 = 0x0;
    if (((*(int *)0xC1EC75C) & 8) != 0) {
        t1 = 0x1;
    }
    return t1;
}

int FUN_0c026c1a(float f4, float f5, float f6)
{
    (((struct o0_float *)0xC270B40)->v) = f4;
    (((struct o4_float *)0xC270B40)->v) = f5;
    (((struct o8_float *)0xC270B40)->v) = f6;
    return 0x10;
}

int FUN_0c026c2a(float f4, float f5, float f6)
{
    (((struct o0_float *)0xC270B4C)->v) = f4;
    (((struct o4_float *)0xC270B4C)->v) = f5;
    (((struct o8_float *)0xC270B4C)->v) = f6;
    return 0x1C;
}

void kmDbgCloseLog(void)
{
    (((struct o4_uint *)0xC270D08)->v) = 0x0;
    (((struct o8_uint *)0xC270D08)->v) = 0x0;
    (((struct o0_uint *)0xC270D08)->v) = 0x0;
}

void FUN_0c02802a(float f4)
{
    (((struct oC_float *)0xC270D20)->v) = f4;
    (((struct o0_float *)0xC270D20)->v) = (((((struct o8_float *)0xC270D20)->v)) * f4);
}

int FUN_0c0293da(int a4, int a5)
{
    *(unsigned int *)(((a5 << 2) + 0xC128BF4)) = a4;
    *(unsigned int *)(((a5 << 2) + 0xC128BE4)) = 0xFFFFFFFF;
    return 0xC128BE4;
}

int FUN_0c030e54(void)
{
    register int t0;

    t0 = *(int *)0xC12A5EC;
    if (t0 != 2) {
        *(unsigned int *)0xC12A5EC = 0x1;
    }
    return t0;
}

void FUN_0c030eb4(void)
{
    if ((int)(*(int *)0xC12A5EC) > 0) {
        *(unsigned int *)0xC12A5EC = 0xFFFFFFFF;
    }
}

int FUN_0c0436f6(int a4)
{
    return ((((*(float *)0xC043794) > ((((struct o90_float *)(a4))->v)))) ? 1 : 0);
}

int FUN_0c05b586(int a4)
{
    register int t0;

    t0 = FUN_0c05b55e(a4);
    return nlMultiMatrix8(t0);
}

int FUN_0c0605e2(void)
{
    return (set_event(0x14, 0xC0605F2));
}

int FUN_0c0702c0(int a4)
{
    return (int)((float)a4 * (*(float *)0xC2BB524));
}

float FUN_0c070d90(float f4)
{
    register float t0;

    t0 = nlLog(f4);
    return (t0 / (*(float *)0xC070DDC));
}

float FUN_0c070da0(float f4)
{
    register float t0;

    t0 = nlLog(f4);
    return (t0 / (*(float *)0xC070DD8));
}

int FUN_0c071b30(void)
{
    return (FUN_0c071b40(0x0));
}

void FUN_0c072600(int a4)
{
    float u0[16];
    float u1[16];

    _builtin_st_ext((float (*)[4])u0);
    *(float *)((((a4 + 0xC) - 0x4) + 0x0)) = u0[14];
    *(float *)(((((a4 + 0xC) - 0x4) - 0x4) + 0x0)) = u0[13];
    *(float *)((((((a4 + 0xC) - 0x4) - 0x4) - 0x4) + 0x0)) = u0[12];
    _builtin_st_ext((float (*)[4])u1);
    u1[0] = u0[0];
    u1[1] = u0[1];
    u1[2] = u0[2];
    u1[3] = u0[3];
    u1[4] = u0[4];
    u1[5] = u0[5];
    u1[6] = u0[6];
    u1[7] = u0[7];
    u1[8] = u0[8];
    u1[9] = u0[9];
    u1[10] = u0[10];
    u1[11] = u0[11];
    u1[12] = u0[12];
    u1[13] = u0[13];
    u1[14] = u0[14];
    u1[15] = u0[15];
    _builtin_ld_ext((float (*)[4])u1);
}

void FUN_0c0739a0(int a4)
{
    register float u0;
    register float u1;
    register float u2;
    float u3[16];

    u0 = *(float *)((a4 + 0x0));
    u1 = (((struct o4_float *)(a4))->v);
    u2 = (((struct o4_float *)((a4 + 0x4)))->v);
    _builtin_st_ext((float (*)[4])u3);
    u3[12] = u0;
    u3[13] = u1;
    u3[14] = u2;
    _builtin_ld_ext((float (*)[4])u3);
}

void FUN_0c073a30(float f4, float f5, float f6)
{
    float u0[4];
    float u1[16];

    u0[0] = f4;
    u0[1] = f5;
    u0[2] = f6;
    u0[3] = 1.0f;
    _builtin_ftrv(u0, u0);
    _builtin_st_ext((float (*)[4])u1);
    u1[12] = u0[0];
    u1[13] = u0[1];
    u1[14] = u0[2];
    u1[15] = u0[3];
    _builtin_ld_ext((float (*)[4])u1);
}

float FUN_0c073c80(int a4)
{
    register float u0;
    register float u1;
    register float u2;
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
    return (_builtin_fipr(u3, u4));
}

int FUN_0c075310(void)
{
    return (FUN_0c075000(0x1));
}

int FUN_0c0752c0(void)
{
    return (FUN_0c075000(0x0));
}

int FUN_0c0755e0(void)
{
    return (FUN_0c075450(0x1));
}

int FUN_0c0767b0(void)
{
    nlPushMatrix(0x0);
    return nlMultiMatrixRevOrder8(0xC2BFC08);
}

void FUN_0c077998(int a4)
{
    *(unsigned int *)0xC14781C = a4;
}

void FUN_0c07d1e4(int a4, int a5, int a6)
{
    (((struct o22_ushort *)(a4))->v) = (((((short)a5 << 8) << 2) << 1) | a6);
}

int FUN_0c0800c8(int a4, int a5)
{
    register int t0;

    for (t0 = 0; ; t0++) { *(unsigned char *)(a4 + t0) = *(unsigned char *)(a5 + t0); if (*(unsigned char *)(a5 + t0) == 0) break; }
    return a4;
}

int strlen(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = a4;
    t1 = 0x0;
    for (;;) {
        t2 = *(signed char *)((t0 + 0x0));
        t0 = (t0 + 0x1);
        if (t2 == 0) {
            break;
        }
        t1 = (t1 + 0x1);
    }
    return t1;
}

int vmsfs_setretry(int a4)
{
    *(unsigned int *)0xC2C68F0 = a4;
    return a4;
}

int FUN_0c093fb6(int a4)
{
    register int t0;

    t0 = *(int *)((a4 + 0x0));
    if (t0 == 1) {
        *(unsigned char *)(((*(int *)((a4 + 0x4))) + 0x0)) = 0x0;
    }
    return t0;
}

int syHwCacheFinish(int a4, int a5, int a6, int a7)
{
    return ((int (*)(int, int, int, int))(0xAC14D0D8))(0xAC14D0D8, a5, a6, a7);
}

int FUN_0c14e0be(int a4)
{
    return FUN_0c165de2(((((struct o94_int *)(a4))->v)));
}

int kmiMemCopy4(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = a4;
    t1 = a5;
    t2 = ((unsigned int)a6 >> 2);
    for (;;) {
        t3 = *(int *)((t1 + 0x0));
        t1 = (t1 + 0x4);
        t2 = (t2 - 0x1);
        *(unsigned int *)((t0 + 0x0)) = t3;
        t0 = (t0 + 0x4);
        if (t2 == 0) {
            break;
        }
    }
    return t3;
}

void kmiWaitVlank(void)
{
    register int t0;

    t0 = *(int *)0xC300C40;
    for (;;) {
        if (t0 != (*(int *)0xC300C40)) {
            break;
        }
    }
}

int gdDcfDaPause_(void)
{
    return (FUN_0c160584(0x16, 0x0));
}

int syTmrGenStart(void)
{
    register int t0;

    (((struct o0_uchar *)0xFFD80000)->v) = 0x0;
    t0 = *(signed char *)0xFFD80004;
    (((struct o4_uchar *)0xFFD80000)->v) = (t0 | 0x4);
    return (t0 | 0x4);
}

int kdSetHandler(int a4, int a5)
{
    register int t0;

    if ((unsigned int)a4 <= (unsigned int)0x1F) {
        *(unsigned int *)(((a4 << 2) + 0xC3021E4)) = a5;
        t0 = 0xC3021E4;
    }
    return t0;
}

void fmMngMcpy_tail_0c1708b2(int a4, int a5, int a6, int a7)
{
    if ((int)a6 <= 0) {
        return;
    }
    ((int (*)(int, int, int, int))(0xC160700))(a4, a5, (a6 - 1), a7);
}

int FUN_0c161fe2(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(int *)((a4 + 0x4));
    return ((int (*)(int, int, int, int))(0xC16A882))(t0, a5, a6, a7);
}

int FUN_0c162006(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(int *)((a4 + 0x4));
    return ((int (*)(int, int, int, int))(0xC16A8CA))(t0, a5, a6, a7);
}

int FUN_0c16204e(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(int *)((a4 + 0x4));
    return ((int (*)(int, int, int, int))(0xC16A8E4))(t0, a5, a6, a7);
}

int FUN_0c16205a(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(int *)((a4 + 0x4));
    return ((int (*)(int, int, int, int))(0xC16A8E8))(t0, a5, a6, a7);
}

int FUN_0c162066(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(int *)((a4 + 0x4));
    return ((int (*)(int, int, int, int))(0xC16A8EC))(t0, a5, a6, a7);
}

int FUN_0c162072(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(int *)((a4 + 0x4));
    return ((int (*)(int, int, int, int))(0xC16A8F0))(t0, a5, a6, a7);
}

int mpdrv_recognize(int a4)
{
    *(unsigned char *)(((mpdrv_get_device(a4)) + 0xD)) = 0x1;
    return 0x1;
}

int mpdrv_ischanged(int a4)
{
    return (unsigned char)(*(signed char *)(((mpdrv_get_device(a4)) + 0xC)));
}

int mpdrv_get_timeout(void)
{
    return (unsigned short)(short)((unsigned int)((((struct o10C0_int *)((*(int *)0xC30817C)))->v)) >> 16);
}

int mpdrv_optimize(int a4)
{
    (((struct o10E0_uint *)((*(int *)0xC30817C)))->v) = a4;
    (((struct o10E4_uint *)((*(int *)0xC30817C)))->v) = a4;
    return 0x10E4;
}

void vmsfs_memcpyl(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = a4;
    t1 = a5;
    t2 = ((unsigned int)a6 >> 2);
    for (;;) {
        t3 = *(int *)((t1 + 0x0));
        t1 = (t1 + 0x4);
        t2 = (t2 - 0x1);
        *(unsigned int *)((t0 + 0x0)) = t3;
        t0 = (t0 + 0x4);
        if (t2 == 0) {
            break;
        }
    }
}

int FUN_0c01e6f8(int a4)
{
    return FUN_0c14ee68((*(int *)0xC1ECD64), a4);
}

int FUN_0c01ec7a(int a4)
{
    return FUN_0c14e8e4((*(int *)(((a4 << 2) + 0xC1ECD54))));
}

void FUN_0c028196(void)
{
    *(unsigned int *)0xC270E3C = 0xC270D3C;
    *(unsigned char *)0xC270D3C = 0x0;
}

void FUN_0c0503fa(float f4, float f5, float f6)
{
    (((struct o0_float *)0xC2B296C)->v) = f4;
    (((struct o4_float *)0xC2B296C)->v) = f5;
    (((struct o8_float *)0xC2B296C)->v) = f6;
}

int FUN_0c052dba(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8)
{
    *(unsigned int *)((a4 + 0x0)) = a5;
    (((struct o4_float *)(a4))->v) = f4;
    (((struct o8_float *)(a4))->v) = f5;
    return FUN_0c07ada0(a4, a5, a6, a7, f4, f5, f6, f7, f8);
}

int mpvvlc_InitMbai(void)
{
    FUN_0c052eca();
    Init_Adv_Global_Parm();
    return FUN_0c052f8c();
}

int FUN_0c059d92(void)
{
    (((struct o0_uint *)0xC2B8A28)->v) = 0xC132EA8;
    (((struct o4_uint *)0xC2B8A28)->v) = 0xC132FA0;
    return 0xC2B8A2C;
}

int FUN_0c05b55e(int a4)
{
    return BigOneRotate((*(int *)((a4 + 0x0))), (*(int *)((a4 + 0x4))), (*(int *)((a4 + 0x8))));
}

int FUN_0c05d1bc(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(int *)(((a4 << 2) + 0xC10DCE4));
    return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, a7);
}

int FUN_0c05edbe(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(int *)(((a4 << 2) + 0xC10E49C));
    return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, a7);
}

int FUN_0c069e54(void)
{
    register int t1;

    t1 = *(int *)((0xC110374 + ((*(int *)0xC1EC740) << 2)));
    return ((int (*)(void))(t1))();
}

int FUN_0c0702e0(void)
{
    register int t0;

    t0 = FUN_0c0702b0();
    *(unsigned int *)0xC2BB60C = t0;
    return t0;
}

int FUN_0c0704a0(int a4, int a5)
{
    return kmfSetTimeOutCount(a4, a5);
}

int FUN_0c073000(void)
{
    nlPushMatrix((*(int *)0xC2BF960));
    return FUN_0c072fe0();
}

int FUN_0c075c00(int a4)
{
    register int t0;

    t0 = a4;
    if (a4 != -1) {
        t0 = 0x1;
    }
    *(unsigned int *)0xC2BFCD0 = t0;
    return a4;
}

int FUN_0c076250(float f4, float f5, float f6)
{
    (((struct o0_float *)0xC147500)->v) = f4;
    (((struct o4_float *)0xC147500)->v) = f5;
    (((struct o8_float *)0xC147500)->v) = f6;
    return 0x8;
}

int FUN_0c076260(float f4, float f5, float f6)
{
    (((struct o0_float *)0xC147510)->v) = f4;
    (((struct o4_float *)0xC147510)->v) = f5;
    (((struct o8_float *)0xC147510)->v) = f6;
    return 0x8;
}

int FUN_0c07cdf4(int a4, int a5)
{
    *(unsigned int *)((a5 + 0x0)) = (((unsigned char)(*(signed char *)((a4 + 0x7))) << 2) << 2);
    return a4;
}

int FUN_0c07ffac(int a4)
{
    if ((int)a4 > 0) {
        return a4;
    }
    return (-a4);
}

int vmsfs_c_synch(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    return (vmsfb_exec(a4, a5, a6, a7, f4, f5, f6, f7, f8, f9, f10, f11));
}

int vmsfs_c_fiber1(int a4, int a5, int a6, int a7)
{
    return (vmsfs_c_dispatch(0x1, a5, a6, a7));
}

int vmsfs_c_fiber3(int a4, int a5, int a6, int a7)
{
    return (vmsfs_c_dispatch(0x3, a5, a6, a7));
}

int vmsfs_c_fiber4(int a4, int a5, int a6, int a7)
{
    return (vmsfs_c_dispatch(0x4, a5, a6, a7));
}

int vmsfs_c_fiber5(int a4, int a5, int a6, int a7)
{
    return (vmsfs_c_dispatch(0x5, a5, a6, a7));
}

int vmsfs_c_fiber6(int a4, int a5, int a6, int a7)
{
    return (vmsfs_c_dispatch(0x6, a5, a6, a7));
}

int vmsfs_c_fiber7(int a4, int a5, int a6, int a7)
{
    return (vmsfs_c_dispatch(0x7, a5, a6, a7));
}

int FUN_0c08faa8(int a4, int a5)
{
    return 0x0;
}

int vmsfs_c_fiber0(int a4, int a5, int a6, int a7)
{
    return (vmsfs_c_dispatch(0x0, a5, a6, a7));
}

int vmsfs_c_fiber2(int a4, int a5, int a6, int a7)
{
    return (vmsfs_c_dispatch(0x2, a5, a6, a7));
}

int vmsfb_sleep(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    return (buFbrSleepVFiber(a4, a5, a6, a7, f4, f5, f6, f7, f8, f9, f10, f11));
}

int vmsfb_end(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    return (buFbrEndFiber(a4, a5, a6, a7, f4, f5, f6, f7, f8, f9, f10, f11));
}

int buFbrSleepVFiber(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    return (buFbrSleepFiber(0x1, a5, a6, a7, f4, f5, f6, f7, f8, f9, f10, f11));
}

int FUN_0c09402c(int a4, int a5)
{
    return (_slow_strcmp1(a4, a5));
}

int pdGetOptimize(void)
{
    return (kdGetDriverMode(0x0));
}

int pdGunGetFlashColor(void)
{
    return (kdGetDriverMode(0x9));
}

int syRtcFinish(void)
{
    (((struct o0_uint *)0xC2D12E8)->v) = 0x0;
    return syChainDeleteHandler(((((struct o8_int *)0xC2D12E8)->v)));
}

int FUN_0c14e13e(int a4)
{
    return FUN_0c165b86(((((struct o94_int *)(a4))->v)));
}

int FUN_0c15ca90(int a4, int a5)
{
    return (FUN_0c160610(a4, a5));
}

int gdDcfSvr_(int a4, int a5)
{
    FUN_0c1605ac(a4, a5);
    return 0x1;
}

int kdGetDeviceInfo(int a4)
{
    return (mpdrv_get_deviceinfo(a4));
}

int kdGetPortStatus(int a4)
{
    return (mpdrv_get_portstatus(a4));
}

int FUN_0c1611f4(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x1));
    if (t0 == 2) {
        return adxamp_extract(a4);
    }
    return t0;
}

int FUN_0c1626d0(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x1));
    if (t0 == 2) {
        return FUN_0c162560(a4);
    }
    return t0;
}

void SJRBF_Reset(int a4)
{
    *(unsigned int *)((a4 + 0xC)) = 0x0;
    *(unsigned int *)((a4 + 0x10)) = (*(int *)((a4 + 0x20)));
    *(unsigned int *)((a4 + 0x14)) = 0x0;
    *(unsigned int *)((a4 + 0x18)) = 0x0;
}

int mpdrv_get_portstatus(int a4)
{
    return (((*(int *)0xC30817C) + 0x4) + ((a4 << 2) << 1));
}

int mpdrv_swapmode(int a4)
{
    (((struct o10C4_uint *)((*(int *)0xC30817C)))->v) = (a4 & 0x1);
    return 0x10C4;
}

int mwlSbGetPitch(int a4, int a5, int a6)
{
    *(unsigned int *)((a5 + 0x0)) = ((((struct o50_int *)(a4))->v));
    *(unsigned int *)((a6 + 0x0)) = ((((struct o54_int *)(a4))->v));
    return 0x54;
}

int cvFsError(int a4, int a5, int a6, int a7)
{
    return cvFsCallUsrErrFn(0xC17457C, a4, 0x0, a7);
}

int syG2AicaFifoIsEmpty(int a4)
{
    *(unsigned int *)((a4 + 0x0)) = (((((*(int *)0xA05F688C) & 1) == 0)) ? 1 : 0);
    return 0x0;
}

int syG2FifoIsEmpty(int a4)
{
    *(unsigned int *)((a4 + 0x0)) = (((((*(int *)0xA05F688C) & 16) == 0)) ? 1 : 0);
    return 0x0;
}

int ADXPD_Reset(int a4)
{
    register int t0;

    t0 = *(int *)((a4 + 0xC));
    if (t0 == 3) {
        *(unsigned int *)((a4 + 0xC)) = 0x0;
    }
    return t0;
}

int FUN_0c018c2a(float f4, float f5)
{
    (((struct o0_float *)0xC177E00)->v) = f4;
    (((struct o4_float *)0xC177E00)->v) = f5;
    return 0x28;
}

int FUN_0c018c8a(float f4, float f5)
{
    (((struct o0_float *)0xC177E2C)->v) = f4;
    (((struct o4_float *)0xC177E2C)->v) = f5;
    return 0x28;
}

int FUN_0c018ce0(float f4, float f5)
{
    (((struct o0_float *)0xC177E58)->v) = f4;
    (((struct o4_float *)0xC177E58)->v) = f5;
    return 0x28;
}

void FUN_0c022794(int a4)
{
    (((struct o0_uint *)0xC270994)->v) = 0x0;
    (((struct o4_uint *)0xC270994)->v) = a4;
}

void FUN_0c026be8(int a4, int a5)
{
    *(unsigned int *)((a4 + 0x0)) = ((((struct o0_int *)0xC270B38)->v));
    *(unsigned int *)((a5 + 0x0)) = ((((struct o4_int *)0xC270B38)->v));
}

int FUN_0c02708a(void)
{
    register int t0;

    t0 = *(int *)0xC270BB8;
    *(unsigned int *)0xC270BB8 = 0x0;
    return t0;
}

int FUN_0c02803a(int a4, int a5, int a6, int a7)
{
    (((struct o0_uint *)0xC128ABC)->v) = a4;
    (((struct o4_uint *)0xC128ABC)->v) = a5;
    (((struct o8_uint *)0xC128ABC)->v) = a6;
    (((struct oC_uint *)0xC128ABC)->v) = a7;
    return 0xC128ABC;
}

void FUN_0c02f096(void)
{
    (((struct o0_uint *)0xC277838)->v) = 0x0;
    (((struct o4_uint *)0xC277838)->v) = 0x0;
}

int FUN_0c03b318(int a4)
{
    if (a4 != 0) {
        *(unsigned int *)0xC12B778 = a4;
    }
    return (*(int *)0xC12B778);
}

int FUN_0c0464ae(void)
{
    return (((unsigned int)(*(int *)0xC12FAAC) >> 16) & 0x7FFF);
}

float FUN_0c048fd6(int a4, float f4, float f5)
{
    register float u0;
    register float u2;

    u0 = *(float *)((a4 + 0x0));
    u2 = u0;
    u2 = u2 + ((f5 - u0)) * f4;
    *(float *)((a4 + 0x0)) = u2;
    return (f5 - u0);
}

int FUN_0c04b586(void)
{
    *(float *)0xC131610 = (*(float *)0xC175934);
    return 0x80;
}

void FUN_0c04c5b0(void)
{
    *(unsigned int *)0xC2ADFE8 = 0x0;
    *(unsigned int *)0xC131714 = 0x0;
}

void FUN_0c05045a(void)
{
    *(unsigned int *)0xC2B1DD4 = ((*(int *)0xC2B1DD4) & 0xFFFFFEFF);
}

void FUN_0c0504ea(void)
{
    *(unsigned int *)0xC2B1DD4 = ((*(int *)0xC2B1DD4) & 0xFFFFF7FF);
}

void FUN_0c050538(void)
{
    *(unsigned int *)0xC2B1DD4 = ((*(int *)0xC2B1DD4) & 0xFFFFFBFF);
}

void FUN_0c050596(void)
{
    *(unsigned int *)0xC2B1DD4 = ((*(int *)0xC2B1DD4) & 0xFEFFFFFF);
}

void FUN_0c05063e(void)
{
    *(unsigned int *)0xC2B1DD4 = ((*(int *)0xC2B1DD4) & 0xFDFFFFFF);
}

void FUN_0c050720(void)
{
    *(unsigned int *)0xC2B1DD4 = ((*(int *)0xC2B1DD4) & 0xFFEFFFFF);
}

void FUN_0c050740(void)
{
    *(unsigned int *)0xC2B1DD4 = ((*(int *)0xC2B1DD4) & 0xFFDFFFFF);
}

void FUN_0c05909c(void)
{
    *(unsigned int *)0xC132E94 = 0x0;
    *(unsigned int *)0xC2B8A24 = 0x0;
}

void FUN_0c05f72a(int a4)
{
    *(unsigned int *)((a4 + 0x2C)) = 0x0;
    *(unsigned int *)((a4 + 0x30)) = 0x0;
    *(unsigned int *)((a4 + 0x34)) = 0x0;
    *(unsigned int *)((a4 + 0x38)) = 0x0;
}

int FUN_0c066cba(int a4)
{
    return FUN_0c068c14(0xC10FFD4, a4, (*(float *)0xC13B004));
}

void FUN_0c0787d0(int a4)
{
    *(unsigned int *)0xC170068 = 0x80000000;
    *(unsigned int *)0xC173804 = a4;
}

void FUN_0c07d222(int a4, int a5, int a6)
{
    (((struct o31_uchar *)((((short)a5 << 2) + a4)))->v) = a6;
}

void FUN_0c07d22e(int a4, int a5, int a6)
{
    (((struct o32_uchar *)((((short)a5 << 2) + a4)))->v) = a6;
}

void FUN_0c07d9d0(void)
{
    (((struct o0_uint *)0xC2C4134)->v) = 0x0;
    (((struct o8_uint *)0xC2C4134)->v) = 0x0;
}

void FUN_0c087f40(float f4, float f5, float f6, float f7, float f8, float f9, float f10)
{
    
}

int kmiAddSysConfigFlag(int a4)
{
    register int t0;

    t0 = *(int *)0xC1737E4;
    *(unsigned int *)0xC1737E4 = (t0 | a4);
    return (t0 | a4);
}

int pdGetPeripheral(int a4)
{
    return ((a4 * 0x34) + 0xC2D0D28);
}

int kmfSetVertexBufferBaseAddress(int a4, int a5)
{
    (((struct o0_uint *)0xC300D10)->v) = a4;
    (((struct o4_uint *)0xC300D10)->v) = a5;
    return 0x0;
}

int gdFsCreateDirhn(int a4, int a5)
{
    *(unsigned int *)((a4 + 0x0)) = 0x0;
    *(unsigned int *)((a4 + 0x4)) = a5;
    *(unsigned int *)((a4 + 0x8)) = 0x0;
    return a4;
}

void kdGetGunPosition(int a4, int a5)
{
    *(unsigned int *)((a4 + 0x0)) = ((((struct o0_int *)0xC302740)->v));
    *(unsigned int *)((a5 + 0x0)) = ((((struct o4_int *)0xC302740)->v));
}

int FUN_0c15f004(void)
{
    FUN_0c15ef9c();
    return FUN_0c15ef5c();
}

int syCblCheckCableType(void)
{
    return ((unsigned short)(*(short *)0xFF800030) & 0x300);
}

int FUN_0c160584(int a4, int a5)
{
    register int t0;

    t0 = *(int *)0x8C0000BC;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, 0x0, 0x0);
}

int FUN_0c160598(int a4, int a5)
{
    register int t0;

    t0 = *(int *)0x8C0000BC;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, 0x0, 0x1);
}

int FUN_0c1605ac(int a4, int a5)
{
    register int t0;

    t0 = *(int *)0x8C0000BC;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, 0x0, 0x2);
}

int FUN_0c1605c0(int a4, int a5)
{
    register int t0;

    t0 = *(int *)0x8C0000BC;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, 0x0, 0x3);
}

int FUN_0c1605d4(int a4, int a5)
{
    register int t0;

    t0 = *(int *)0x8C0000BC;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, 0x0, 0x4);
}

int FUN_0c1605fc(int a4, int a5)
{
    register int t0;

    t0 = *(int *)0x8C0000BC;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, 0x0, 0x6);
}

int FUN_0c160610(int a4, int a5)
{
    register int t0;

    t0 = *(int *)0x8C0000BC;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, 0x0, 0x7);
}

int FUN_0c161fd6(int a4)
{
    return ADXB_GetFormat((*(int *)((a4 + 0x4))));
}

int FUN_0c161fee(int a4)
{
    return ADXB_GetNumChan((*(int *)((a4 + 0x4))));
}

int FUN_0c161ffa(int a4)
{
    return ADXB_GetOutBps((*(int *)((a4 + 0x4))));
}

int FUN_0c16201e(int a4)
{
    return FUN_0c16a8d2((*(int *)((a4 + 0x4))));
}

int FUN_0c162036(int a4)
{
    return ADXB_GetNumLoop((*(int *)((a4 + 0x4))));
}

int FUN_0c162084(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(int *)((a4 + 0x4));
    return ((int (*)(int, int, int, int))(0xC16A88A))(t0, a5, a6, a7);
}

int mpdrv_timeout(int a4)
{
    (((struct o10C0_uint *)((*(int *)0xC30817C)))->v) = (a4 << 16);
    return 0x10C0;
}

int mpdrv_init_memory(void)
{
    (((struct o10F4_uint *)((*(int *)0xC30817C)))->v) = 0xA05F6C00;
    return 0x10F4;
}

int gdCiGetNumTr(int a4)
{
    return gdFsGetNumRd((*(int *)((a4 + 0x4))));
}

void FUN_0c018cd6(int a4, int a5, int a6)
{
    (((struct o0_uint *)0xC177E40)->v) = a4;
    (((struct o4_uint *)0xC177E40)->v) = a5;
    (((struct o8_uint *)0xC177E40)->v) = a6;
}

int FUN_0c018d02(void)
{
    return nlLength(0xC177DDC, 0xC177E08);
}

int FUN_0c019e34(void)
{
    *(unsigned int *)0xC1EC72C = 0x1;
    return FUN_0c030c9c();
}

int FUN_0c03f154(int a4)
{
    return (*(int *)(((a4 << 2) + 0xC2A4684)));
}

void FUN_0c0503e6(float f4, float f5)
{
    (((struct o0_float *)0xC2B1DF8)->v) = f4;
    (((struct o4_float *)0xC2B1DF8)->v) = f5;
}

void FUN_0c0503f0(float f4, float f5)
{
    (((struct o0_float *)0xC2B2964)->v) = f4;
    (((struct o4_float *)0xC2B2964)->v) = f5;
}

int FUN_0c0584ea(void)
{
    register int t0;

    t0 = *(int *)0xC2B337C;
    *(unsigned int *)0xC2B337C = (t0 | 0x1);
    return (t0 | 0x1);
}

int FUN_0c059954(void)
{
    *(unsigned int *)0xC132E94 = 0x1;
    return 0x1;
}

int FUN_0c05995e(void)
{
    *(unsigned int *)0xC132E94 = 0x0;
    return 0x1;
}

void FUN_0c05cac6(float f4)
{
    *(float *)0xC177D9C = ((*(float *)0xC177D9C) + f4);
}

int FUN_0c0656b6(int a4)
{
    return FUN_0c068c14(0xC10FB8C, a4, 1.0f);
}
