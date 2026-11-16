/* Straight-line functions with calls and guards (batch gen_ak): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[4]; } Stk4;
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o10_float { char p[0x10]; float v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o10E8_int { char p[0x10E8]; int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_float { char p[0x20]; float v; };
struct o204_int { char p[0x204]; int v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2B_uchar { char p[0x2B]; unsigned char v; };
struct o2C_uchar { char p[0x2C]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o40_float { char p[0x40]; float v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o50_int { char p[0x50]; int v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o54_int { char p[0x54]; int v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o58_float { char p[0x58]; float v; };
struct o58_int { char p[0x58]; int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o784_int { char p[0x784]; int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o8_ushort { char p[0x8]; unsigned short v; };
struct o80_int { char p[0x80]; int v; };
struct o94_int { char p[0x94]; int v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA4_float { char p[0xA4]; float v; };
struct oAA_short { char p[0xAA]; short v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oC_ushort { char p[0xC]; unsigned short v; };
int thunk_mwRnaSetOutPan(int, int, int);
int ADXB_ExecOneWav16(int);
int ADXB_ExecOneWav4(int);
int ADXB_ExecOneWav8(int);
int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int ADXPD_ExecHndl(int);
int ADXSJD_ExecHndl(int);
int ADXT_Destroy(int);
int ADXT_SetLpFlg(int, int);
int Check2DAreaDX(int, int, int);
int ExecRenderTexture1st(float);
int FUN_0c018b1c(int);
int FUN_0c018c8a(float, float);
int FUN_0c01d7b0(void);
int FUN_0c01e6f0(void);
int FUN_0c01ec7a(int);
int FUN_0c01f4ca(int, int, float);
int FUN_0c01fd5c(void);
int FUN_0c02274c(void);
int FUN_0c02842e(int);
int FUN_0c0310f4(void);
int FUN_0c0311f2(void);
int FUN_0c03332c(int, int, int, int);
int FUN_0c03346e(int, int, int, int, float, float, float, float, float);
int FUN_0c033948(void);
int FUN_0c0339fc(int);
int FUN_0c0345ec(int, int, int, float, float, float);
int FUN_0c03e4f4(int);
int FUN_0c048262(int, int, int, int, int, int, int, int, int);
int FUN_0c05304a(void);
int FUN_0c0584ea(void);
int FUN_0c0586bc(void);
int FUN_0c058ca6(int, int);
int FUN_0c05b0dc(void);
int FUN_0c05b3d4(int, int);
int FUN_0c05be8a(int, float);
int FUN_0c05beaa(int, float);
int FUN_0c05bf7e(void);
int FUN_0c05cac6(float);
int FUN_0c05d858(int, int);
int FUN_0c06e5f2(void);
int FUN_0c06e990(int);
int FUN_0c06f550(int, int, int);
int FUN_0c070e60(void);
int FUN_0c072fe0(void);
int FUN_0c073220(int);
int FUN_0c073e10(int);
int FUN_0c075d60(void);
int FUN_0c076250(float, float, float);
int FUN_0c076260(float, float, float);
int FUN_0c07acd0(int, int);
int FUN_0c07b6e6(int);
int FUN_0c07c5b8(int, int, int);
int FUN_0c07c8be(int);
int FUN_0c07d5da(void);
int FUN_0c07de10(int, int, int, int);
int FUN_0c07e210(int, int);
int FUN_0c07e42c(int);
int FUN_0c07e598(int);
int FUN_0c07fdc8(void);
int FUN_0c07ff00(void);
extern int FUN_0c09402c();
int FUN_0c14bc20(int);
int FUN_0c14cdfc(void);
int FUN_0c14dfa0(int, int);
int FUN_0c14e02a(int);
int FUN_0c14e1ec(int, int);
int FUN_0c14e9a8(int, int, int);
int FUN_0c14ff0c(int);
int FUN_0c150254(int);
int FUN_0c1616ce(int);
int FUN_0c162262(int);
int FUN_0c1626d0(int);
int FUN_0c165a7e(int);
int FUN_0c168004(void);
int FUN_0c16ada2(int, ...);
int FUN_0c16cf34(int, int, int, int);
int FUN_0c16cf72(int);
int FUN_0c16f700(int, int, int, int);
int FUN_0c16f752(int, int);
int Init_TimeUp(void);
int Put_Time_Spark(int, float);
extern int _builtin_get_imask(void);
extern void _builtin_ld_ext(float (*)[4]);
extern void _builtin_set_imask(int);
extern void _builtin_st_ext(float (*)[4]);
extern int _builtin_tas(char *);
int camSetTarget(int, int);
int cvFsAddDev(int, int, int, int, int, int);
int cvFsClose(int, int, int, int, int, int, int, int);
int cvFsError(int);
int cvFsGetFileSize(int);
int cvFsInit(void);
int cvFsSeek(int, int, int, int);
int cvFsSetDefDev(int, int, int, int, int, int, int, int, int, int, int, int);
int cvFsStopTr(int, int, int, int, int, int);
int cvFsTell(int);
int gdc_FileLoad(int, int, int);
int kdGetDeviceInfo(int);
int kdRecvFrame(void);
int kdSetHandler(int, int);
int kmiCopyFromFrameBuffer(int, int, int);
int kmiCopyToFrameBuffer(int, int, int);
int kmiErrorRecover(int, int, int, int);
int kmiPurgeCache(int);
int kmiRegisterCallback(int, int, int, int);
int kmtex_GetTextureLevel(int, int);
int memcpy(int, int, int);
int memset(int, int, int);
int mpdrv_dpf(int, ...);
int mpdrv_set_allstatreq_ns(int);
int mpdrv_set_arctrl_ns(int, int);
int mpdrv_set_bread(int, ...);
int mpdrv_set_dkill_ns(int);
int mpdrv_set_dreq_ns(int);
int mpdrv_set_dreset_ns(int);
int mpdrv_set_end_ns(void);
int mpdrv_set_ft4ctrl_ns(int, int);
int mpdrv_set_getcond_ns(int, int);
int mpdrv_set_getlerr(int, ...);
int mpdrv_set_getminfo_ns(int, int, int);
int mpdrv_set_setcond_ns(int, int, int, int);
int mpdrv_set_transagain_ns(int);
int mpdrv_setcmd(int, int, int, int, int, int);
int mwRnaSetOutPan(void);
int nlCloseEvent(int);
int nlCreateTextureParamA(int, int, int, int, float, float, float, float, float);
int nlCreateVertexBuffer_clx16(int, int, int, int, float, float, float, float, float, float);
int nlCreateVertexBuffer_clx22(int, int, int, int);
int nlInvLightVector(void);
int nlMultiMatrix(int);
int nlMultiMatrixRevOrder8(int);
int nlMvSendTriangle(int, int, int);
int nlPopMatrix(int);
int nlProjectScreen3D(int, int);
int nlPushMatrix(int);
int nlQuickInvertMatrix(void);
int nldispstripTexSub(int, int);
int nlobjput_sub(int);
int ovInit(int, int);
int pdVmsLcdBltAsm(int, int);
int pdVmsLcdBltAsmFlipH(int, int);
int pdVmsLcdBltAsmFlipHV(int, int);
int pdVmsLcdBltAsmFlipV(int, int);
int set_event(int, int);
int syChainAddHandler(int, int, int, int);
int syG2Write(int, int, int, int, int, int);
int syIntInit(int, int);
int syRtcGetAndCheckCount(int);
int sySqInit(void);
int syTmrInit(void);
int thunk_FUN_0c019c6c(int);
int thunk_FUN_0c0765b0(void);
int vmsfs_c_exit(void);
int vmsfs_c_getstate(int);
int vmsfs_exit(void);
int vmsfs_read_retry(int, int, int);
int vmsfs_unmount(int);
int vmsfs_write_retry(int, int, int);
int gameState13(float f4);
int FUN_0c07cf18(int a4);
int FUN_0c07f906(int a4);
int vmsfs_c_setcompletecallback(int a4);
int vmsfs_c_setprogresscallback(int a4);
int vmsfs_c_setcallbackparam(int a4);
int FUN_0c08f87c(int a4, int a5, int a6, int a7);
int FUN_0c08fc00(int a4);
int FUN_0c14ff74(void);
int ADXF_ExecServer(void);
int FUN_0c150414(int a4, int a5);
int FUN_0c1624ec(int a4);
int mwlRnaAddFlshPos(int a4);
int mwRnaGetOutPan(int a4, int a5);
int mpdrv_set_bwrite_ns(int a4, int a5, int a6, int a7, int a8, int a9, int a10);
int FUN_0c01e474(void);
int gdc_InitStreamSongDisk(void);
void TrafficLevelChange(int a4, int a5, int a6);
int FUN_0c05be5c(int a4, float f4);
int FUN_0c05beca(int a4, float f4);
int FUN_0c06cd60(void);
void nlCreateTextureParam(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8);
int FUN_0c07b706(void);
int FUN_0c07d1f4(int a4, int a5);
int FUN_0c07d48e(int a4, int a5);
int FUN_0c07d460(int a4, int a5);
int FUN_0c07f0ac(int a4);
int FUN_0c07f2b2(int a4);
int vmsfs_c_settime(int a4, int a5);
int buFbrWakeupFiber(int a4, int a5);
int hwInit(void);
int FUN_0c14e6be(void);
int FUN_0c161f64(void);
int FUN_0c1620f0(void);
int mpdrv_set_getlerr_ns(int a4, int a5, int a6, int a7, int a8);
int FUN_0c16c828(void);
int FUN_0c01c4e2(void);
int FUN_0c01e5cc(int a4, int a5, int a6);
int pfSize(float f4, float f5);
int FUN_0c02d694(int a4, int a5);
int FUN_0c04e92c(float f4);
float FUN_0c05b77e(int a4, int a5, int a6, float f4);
int FUN_0c05bb38(int a4);
int FUN_0c05d8a6(int a4, int a5, int a6);
int FUN_0c05f6fe(int a4);
int FUN_0c05fdac(void);
int FUN_0c068be8(int a4, int a5, int a6);
int FUN_0c0696a0(int a4);
int FUN_0c069864(int a4);
int nlInitTextureSurface(int a4, int a5);
int nlGetMatrix8(int a4);
void nlScaleV(int a4);
void nlTransposeMatrix(void);
int nlObjPutSetVtxColorMode(int a4);
int nlObjPut(int a4);
int buUnmount(int a4);
int FUN_0c07b734(void);
int FUN_0c07ceac(int a4, int a5, int a6);
int FUN_0c07f402(int a4);
int FUN_0c08f3b8(int a4);
int FUN_0c08f37a(int a4);
int kmytex_FBAllocEntry(void);
int VQAllocEntry(void);
int kmiGetProfileInt(int a4, int a5, int a6);
int kdSetBlockRead(Stk4 s);
int kdSetGetLastError(Stk4 s);
void ADXAMP_Destroy(int a4);
int mpdrv_set_getcond(int a4, int a5);
int mpdrv_set_allstatreq(int a4);
int mpdrv_set_dreq(int a4);
int mpdrv_set_getminfo(int a4, int a5, int a6);
int mpdrv_set_dkill(int a4);
int mpdrv_set_dreset(int a4);
int mpdrv_set_arctrl(int a4, int a5);
int mpdrv_set_transagain(int a4);
int mpdrv_set_setcond(int a4, int a5, int a6, int a7);
int mpdrv_set_end(void);
int mpdrv_set_ft4ctrl(int a4, int a5);
int FUN_0c16f6d4(int a4, int a5, int a6, int a7);
int FUN_0c16f726(int a4, int a5);
int FUN_0c01c200(int a4, int a5, int a6, int a7);
int FUN_0c01eaea(void);
int FUN_0c020ae8(void);
int FUN_0c022cc4(void);
void FUN_0c022d30(void);
int FUN_0c026ce6(void);
void SetMotionBlurStrength(float f4, float f5);
int BupProgressCallback(int a4, int a5, int a6, int a7);
int FUN_0c03f9d0(int a4, int a5, int a6, int a7);
int FUN_0c04b0ba(int a4);
int FUN_0c05251c(int a4, float f4);
int FUN_0c058490(void);
int FUN_0c05d1ca(int a4, int a5, int a6, int a7);
int FUN_0c06032a(int a4, int a5, int a6);
int FUN_0c061f54(int a4, int a5);
int FUN_0c06531c(int a4, int a5, int a6, int a7);
int FUN_0c066246(int a4, int a5, int a6, int a7);
int FUN_0c066d08(int a4, int a5, int a6, int a7);
void FUN_0c068bbe(int a4);
int FUN_0c06bd3c(int a4);
int FUN_0c06ce48(int a4);
int nlCreateVertexBuffer(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9);
int FUN_0c07bd10(void);
int FUN_0c07cacc(void);
int FUN_0c07d254(int a4, int a5);
int buFbrInit(void);
int syRtcExecServer(void);
int syRtcInit(void);
int pdVmsLcdBlt(int a4, int a5, int a6);
int syHwInit(void);
int FUN_0c14e110(int a4, int a5);
int ADXT_GetTimeReal(int a4);
int kmiBGPlaneSetPCW(int a4, int a5, int a6);
int kmSetHSyncCallback(int a4, int a5);
int kmtex_CopyTextureToMem(int a4, int a5, int a6);
int FUN_0c16243a(int a4, int a5, int a6, int a7);
int mwRnaGetAutoSw(int a4);
int FUN_0c16f7aa(int a4, int a5, int a6, int a7, int a8);
int FUN_0c019d88(int a4, int a5, int a6, int a7);
int ConvertSwitch2(void);
int FUN_0c031f1c(int a4, int a5, int a6);
int FUN_0c03457c(float f4, float f5, float f6, float f7, float f8);
int gdc_CourseAdvLoadSub(int a4, int a5, float f4);
int Start_TimeUp(void);
int FUN_0c05a356(int a4);
int FUN_0c05ac12(void);
int FUN_0c05d0d8(float f4);
int FUN_0c05cad0(float f4);
void nlLoadMatrix8(int a4);
int nlMakeModelViewProjectMatrix(void);
int nlMakeFastModelProjectMatrixVM(void);
int nlObjPutSetSpecularEyeDirectionF(float f4, float f5, float f6);
int nlMvSendFan3(int a4, int a5, int a6, int a7, int a8);
int FUN_0c07dcc0(int a4, int a5, int a6, int a7);
int FUN_0c07dcf0(int a4, int a5, int a6, int a7);
int FUN_0c07dd20(int a4, int a5, int a6, int a7);
int FUN_0c07dd50(int a4, int a5, int a6, int a7);
int FUN_0c080270(int a4, float f4, float f5, float f6);
int FUN_0c080440(int a4, int a5);
int FUN_0c08f9f6(int a4, int a5);
int ovGetLibTbl(int a4);
int gdFsGetDrvStatG(int a4, int a5, int a6, int a7);
int kmiWaitAccurate(float f4);
int kmiPurgeMemory(int a4, int a5);
int kmtex_CopyTextureFromMem(int a4, int a5, int a6);
void ADXSTM_Close(int a4);
int FUN_0c162784(int a4, int a5);
int ADXAMP_ExecServer(void);
int mwRnaFlush(int a4);
int mwRnaGetPlaySw(int a4);
int mwRnaGetFilter(int a4, int a5, int a6);
int FUN_0c1657b4(void);
int kmiErrorISR08(int a4, int a5, int a6, int a7);
int mwlSbFreeWork(int a4);
int cvFsGetNumFiles(int a4, int a5, int a6, int a7);
int ADXB_ExecOneWav(int a4);
int ADXPD_ExecServer(void);
int nlExecuteEvent(int a4, int a5, int a6, int a7);
int FUN_0c03e358(int a4, int a5);
int Voice_ShutUp(int a4);
int FUN_0c05bfe6(void);
int nlSetTextureParameter(int a4, int a5);
int buExitForce(void);
int buStat(int a4);
int FUN_0c07b6c0(int a4, int a5);
int FUN_0c07d668(void);
int FUN_0c07f950(int a4, int a5, int a6);
int FUN_0c080324(int a4, float f4, float f5);
int FUN_0c08f9c4(int a4, int a5);
int FUN_0c08fc40(int a4);
int kmUseAnotherModifier(int a4);
int gdFsGetLE4(int a4);
int FUN_0c14c464(void);
int syRtcAicaSetDateLo(int a4);
int pdVibIsReady(int a4);
int FUN_0c14ec14(int a4, int a5, int a6);

int gameState13(float f4)
{
    int stk[2];
    register int t2;

    *(unsigned int *)0xC1EC74C = ((*(int *)0xC1EC74C) + 0x1);
    ExecRenderTexture1st(f4);
    t2 = FUN_0c048262(0x3, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16));
    if (t2 == 0) {
        *(unsigned int *)(((int)stk + 0)) = 0xC01D7B0;
        FUN_0c01d7b0();
    }
    FUN_0c0310f4();
    return FUN_0c0311f2();
}

int FUN_0c07cf18(int a4)
{
    register int t4;
    int t1;

    t4 = 0x0;
    if (((*(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x1C) + 0xC2C3EA8) + 0x0))) == 1) && (t1 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x1C) + 0xC2C3EA8) + 0x1)), t1 != 0)) {
        t4 = (FUN_0c07b6e6((*(int *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x1C) + 0xC2C3EA8) + 0x10)))));
    }
    return t4;
}

int FUN_0c07f906(int a4)
{
    register int t0;

    t0 = FUN_0c07e42c(0x0);
    if (t0 != 0) {
        return 0xFFFFFFFD;
    }
    *(unsigned int *)((a4 + 0x0)) = (0x9D8 + (*(int *)0xC147740));
    return 0x0;
}

int vmsfs_c_setcompletecallback(int a4)
{
    int stk[2];
    register int t1;
    register int t0;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = 0x0;
    t1 = 0x0;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 0))) >= (int)0x8) {
            break;
        }
        t0 = 0xC2C6988;
        *(unsigned int *)(((((((*(int *)(((int)stk + 0))) << 2) << 2) << 2) << 1) + t0)) = (*(int *)(((int)stk + 4)));
        t1 = (*(int *)(((int)stk + 0)));
        t1 = (t1 + 0x1);
        *(unsigned int *)(((int)stk + 0)) = t1;
    }
    return t0;
}

int vmsfs_c_setprogresscallback(int a4)
{
    int stk[2];
    register int t0;
    register int t1;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = 0x0;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 0))) >= (int)0x8) {
            break;
        }
        t0 = 0xC2C698C;
        *(unsigned int *)(((((((*(int *)(((int)stk + 0))) << 2) << 2) << 2) << 1) + t0)) = (*(int *)(((int)stk + 4)));
        t1 = (*(int *)(((int)stk + 0)));
        t1 = (t1 + 0x1);
        *(unsigned int *)(((int)stk + 0)) = t1;
    }
    return t0;
}

int vmsfs_c_setcallbackparam(int a4)
{
    int stk[2];
    register int t0;
    register int t1;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = 0x0;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 0))) >= (int)0x8) {
            break;
        }
        t0 = 0xC2C6990;
        *(unsigned int *)(((((((*(int *)(((int)stk + 0))) << 2) << 2) << 2) << 1) + t0)) = (*(int *)(((int)stk + 4)));
        t1 = (*(int *)(((int)stk + 0)));
        t1 = (t1 + 0x1);
        *(unsigned int *)(((int)stk + 0)) = t1;
    }
    return t0;
}

int FUN_0c08f87c(int a4, int a5, int a6, int a7)
{
    return (((int (*)(int, int, int, int))((*(int *)(((*(int *)0xC2C8D28) + 0xC)))))((*(int *)((((a4 * 0x154) + 0xC2C8D2C) + 0x24))), (a5 << 1), a6, a7));
}

int FUN_0c08fc00(int a4)
{
    int stk[3];

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 4)) = ((int)((unsigned int)(*(int *)(((int)stk + 8))) / (unsigned int)0xA));
    *(unsigned int *)(((int)stk + 0)) = ((int)((unsigned int)(*(int *)(((int)stk + 8))) % (unsigned int)0xA));
    return ((((*(signed char *)(((int)stk + 4))) << 2) << 2) + (*(int *)(((int)stk + 0))));
}

int FUN_0c14ff74(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t0 = 0xC2D1BF4;
    t1 = 0xC2D1BF4;
    t2 = 0xC2D1BF4;
    t3 = 0xC2D1BF4;
    for (;;) {
        t5 = *(signed char *)((t3 + 0x0));
        t4 = t5;
        if (t5 == 1) {
            t0 = t2;
            t4 = (FUN_0c14ff0c(t0));
        } else {
            t5 = t0;
            t6 = t1;
        }
        t3 = (t3 + 0x60);
        t0 = t5;
        t1 = t6;
        t2 = (t2 + 0x60);
        if ((unsigned int)t3 >= (unsigned int)0xC2D21F4) {
            break;
        }
    }
    return t4;
}

int ADXF_ExecServer(void)
{
    register int t1;

    ADXCRS_Lock();
    t1 = 0xC2D1BF4;
    for (;;) {
        if ((*(signed char *)((t1 + 0x0))) == 1) {
            FUN_0c150254(t1);
        }
        t1 = (t1 + 0x60);
        if ((unsigned int)t1 >= (unsigned int)0xC2D21F4) {
            break;
        }
    }
    return ADXCRS_Unlock();
}

int FUN_0c150414(int a4, int a5)
{
    if (a4 == 0) {
        FUN_0c1616ce(0xC170BC8);
        *(unsigned int *)((a5 + 0x0)) = 0x0;
        return 0xFFFFFFFD;
    }
    *(unsigned int *)((a5 + 0x0)) = (*(int *)((a4 + 0x18)));
    return (*(int *)((a4 + 0x1C)));
}

int FUN_0c1624ec(int a4)
{
    int stk[2];
    int t2;

    ADXCRS_Lock();
    if (((*(signed char *)((a4 + 0x2))) == 1) && (t2 = *(int *)((a4 + 0x8)), t2 != 0)) {
        cvFsStopTr((*(int *)((a4 + 0x8))), 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4));
        *(unsigned char *)((a4 + 0x2)) = 0x0;
    }
    ADXCRS_Unlock();
    *(unsigned char *)((a4 + 0x1)) = 0x1;
    return 0x1;
}

int mwlRnaAddFlshPos(int a4)
{
    (((struct o50_uint *)(a4))->v) = ((int)((int)(((((struct o50_int *)(a4))->v)) + ((((struct o58_int *)(a4))->v))) % (int)(*(int *)((a4 + 0x28)))));
    (((struct o54_uint *)(a4))->v) = (((((struct o54_int *)(a4))->v)) + ((((struct o58_int *)(a4))->v)));
    (((struct o58_uint *)(a4))->v) = 0x0;
    return 0x58;
}

int mwRnaGetOutPan(int a4, int a5)
{
    if (a4 == 0) {
        FUN_0c16ada2(0xC171714);
        return 0xFFFFFFFF;
    }
    return (*(int *)(((a4 + 0x64) + (a5 << 2))));
}

int mpdrv_set_bwrite_ns(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    int stk[4];

    *(unsigned int *)((((int)stk + 8) + 0x0)) = a5;
    *(unsigned int *)((((int)stk + 8) + 0x4)) = ((((a6 << 16) << 8) | (a7 << 16)) | a8);
    *(int *)((int)stk + 4) = a10;
    *(int *)((int)stk + 0) = a9;
    return (mpdrv_setcmd(a4, 0xC, ((int)stk + 8), 0x2, a9, a10));
}

int FUN_0c01e474(void)
{
    int t1;

    if ((((((struct o0_int *)0xC1EC740)->v)) == 0) && (t1 = (((struct o4_int *)0xC1EC740)->v), t1 == 1)) {
        return t1;
    }
    return FUN_0c0345ec(0x224, 0xF, 0x0, ((((struct o8_float *)0xC01E544)->v)), ((((struct o4_float *)0xC01E544)->v)), ((((struct o0_float *)0xC01E544)->v)));
}

int gdc_InitStreamSongDisk(void)
{
    *(unsigned char *)0xC1ECD50 = (int)(((float)(unsigned char)(*(signed char *)0xC28ED9D) / ((((struct o0_float *)0xC01EB7C)->v))) * ((((struct o4_float *)0xC01EB7C)->v)));
    (((struct o4_uint *)0xC2690E4)->v) = 0x0;
    (((struct o8_uint *)0xC2690E4)->v) = 0x0;
    (((struct o0_uint *)0xC2690E4)->v) = 0x0;
    return 0xC01EB80;
}

void TrafficLevelChange(int a4, int a5, int a6)
{
    register int t1;
    register int t3;

    if ((int)((((struct oC_int *)0xC2AB7C0)->v)) > 0) {
        t1 = *(int *)0xC2A5A10;
        *(unsigned int *)0xC2A5A10 = (t1 + a4);
        if ((int)(t1 + a4) > (int)0x17) {
            *(unsigned int *)0xC2A5A10 = 0x17;
        } else {
            t3 = (((struct o0_int *)0xC2AB7C0)->v);
            if ((int)(t1 + a4) < (int)t3) {
                *(unsigned int *)0xC2A5A10 = t3;
            }
        }
        (((struct oC_uint *)0xC2AB7C0)->v) = 0xFFFFFF4C;
    }
}

int FUN_0c05be5c(int a4, float f4)
{
    int stk[5];

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(float *)(((int)stk + 0)) = f4;
    nlPushMatrix(0xC2B9698);
    nlProjectScreen3D((*(int *)(((int)stk + 4))), (((int)stk + 0) + 0x8));
    nlPopMatrix(0x1);
    return (FUN_0c05be8a((((int)stk + 0) + 0x8), (*(float *)(((int)stk + 0)))));
}

int FUN_0c05beca(int a4, float f4)
{
    int stk[5];

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(float *)(((int)stk + 0)) = f4;
    nlPushMatrix(0xC2B9698);
    nlProjectScreen3D((*(int *)(((int)stk + 4))), (((int)stk + 0) + 0x8));
    nlPopMatrix(0x1);
    return (FUN_0c05beaa((((int)stk + 0) + 0x8), (*(float *)(((int)stk + 0)))));
}

int FUN_0c06cd60(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC1ECC88;
    t1 = t0;
    if (t0 == -1) {
        t0 = *(int *)0xC1EC724;
        t1 = t0;
        if (t0 != 14) {
            t0 = *(int *)0xC1EC724;
            t1 = t0;
            if (t0 != 15) {
                t0 = gdc_FileLoad(0xC880000, 0xC112A4C, 0x0);
                *(unsigned int *)0xC1ECC88 = 0x1;
                t1 = t0;
            }
        }
    }
    return t1;
}

void nlCreateTextureParam(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8)
{
    register int t0;

    t0 = *(int *)0xC2BF120;
    if ((*(int *)((((a4 * 0x3C) + t0) + 0x28))) == 0) {
        nlCreateTextureParamA(((a4 * 0x3C) + t0), a5, a6, a7, f4, f5, f6, f7, f8);
    return;
    }
    *(unsigned int *)((((a4 * 0x3C) + t0) + 0x30)) = ((((struct o0_int *)0xC2BB420)->v));
    *(unsigned int *)((((a4 * 0x3C) + t0) + 0x34)) = ((((struct o4_int *)0xC2BB420)->v));
}

int FUN_0c07b706(void)
{
    register int t0;
    register int t1;

    t0 = 0x0;
    for (;;) {
        t1 = FUN_0c07c8be(0x18A0);
        if (t1 == 0) {
            break;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x400000) {
            return 0xFFFFFF00;
        }
    }
    return 0x0;
}

int FUN_0c07d1f4(int a4, int a5)
{
    register int t0;

    if ((short)a5 != 1) {
        if ((short)a5 != 2) {
            if ((short)a5 != 4) {
                return (short)a5;
            }
            t0 = *(signed char *)(((a4 + 0x9) + 0x0));
            *(unsigned char *)(((a4 + 0x9) + 0x0)) = ((t0 & 0x80) | 0x2);
            return ((t0 & 0x80) | 0x2);
        }
        t0 = *(signed char *)(((a4 + 0x9) + 0x0));
        *(unsigned char *)(((a4 + 0x9) + 0x0)) = ((t0 & 0x80) | 0x1);
        return ((t0 & 0x80) | 0x1);
    }
    t0 = *(signed char *)(((a4 + 0x9) + 0x0));
    *(unsigned char *)(((a4 + 0x9) + 0x0)) = (t0 & 0x80);
    return (t0 & 0x80);
}

int FUN_0c07d48e(int a4, int a5)
{
    register int t0;

    t0 = *(signed char *)((0xC2C3EA8 + (unsigned char)((unsigned short)a4 * (unsigned short)0x1C)));
    if (t0 == 1) {
        return FUN_0c07c8be((0x9A1 | ((((short)a5 + 0x40) << 16) | ((((short)a4 << 8) << 2) << 2))));
    }
    return t0;
}

int FUN_0c07d460(int a4, int a5)
{
    register int t0;

    t0 = *(signed char *)((0xC2C3EA8 + (unsigned char)((unsigned short)a4 * (unsigned short)0x1C)));
    if (t0 == 1) {
        return FUN_0c07c8be((0x8A1 | ((((short)a5 + 0x40) << 16) | ((((short)a4 << 8) << 2) << 2))));
    }
    return t0;
}

int FUN_0c07f0ac(int a4)
{
    register int t0;

    t0 = FUN_0c07e42c(0x3);
    if (t0 != 0) {
        return 0xFFFFFFFD;
    }
    *(unsigned int *)((a4 + 0x0)) = (0x780 + (*(int *)0xC147740));
    return 0x0;
}

int FUN_0c07f2b2(int a4)
{
    register int t0;

    t0 = FUN_0c07e42c(0x3);
    if (t0 != 0) {
        return 0xFFFFFFFD;
    }
    *(unsigned int *)((a4 + 0x0)) = ((((struct o784_int *)((*(int *)0xC147740)))->v));
    return 0x0;
}

int vmsfs_c_settime(int a4, int a5)
{
    return (memcpy(((((((a4 << 2) << 2) << 2) << 1) + 0xC2C6914) + 0x6C), a5, 0x8));
}

int buFbrWakeupFiber(int a4, int a5)
{
    register int t2;

    if ((*(int *)((((a5 * 0x124) + (a4 + 0x210)) + 0xC))) != 0) {
        *(unsigned int *)((((a5 * 0x124) + (a4 + 0x210)) + 0x14)) = ((((struct o204_int *)(a4))->v));
        t2 = 0x204;
    }
    return t2;
}

int hwInit(void)
{
    register int t0;
    register int t1;

    (((struct o0_ushort *)0xFFD00000)->v) = 0x0;
    (((struct o4_ushort *)0xFFD00000)->v) = 0x0;
    (((struct o8_ushort *)0xFFD00000)->v) = 0x0;
    (((struct oC_ushort *)0xFFD00000)->v) = 0x0;
    *(unsigned short *)0xFFE80020 = 0xC0;
    t0 = 0xC0;
    t1 = 0xC17006C;
    for (;;) {
        if ((*(int *)((t1 + 0x0))) != 0) {
            t0 = (*(int *)((t1 + 0x0)));
            *(unsigned int *)((t0 + 0x0)) = (*(int *)((t1 + 0x4)));
            t1 = (t1 + 0x8);
            continue;
        }
        break;
    }
    return 0xFFE80020;
}

int FUN_0c14e6be(void)
{
    register int t0;
    register int t1;
    register int t3;

    t0 = 0xC173844;
    for (;;) {
        t1 = *(signed char *)((t0 + 0x0));
        t3 = t1;
        if (t1 == 1) {
            t3 = (ADXT_Destroy(t0));
        }
        t0 = (t0 + 0xA4);
        if ((unsigned int)t0 >= (unsigned int)0xC173D64) {
            break;
        }
    }
    return t3;
}

int FUN_0c161f64(void)
{
    register int t0;
    register int t1;
    register int t3;

    t0 = 0xC302AC0;
    for (;;) {
        t1 = *(signed char *)((t0 + 0x0));
        t3 = t1;
        if (t1 == 1) {
            t3 = (ADXSJD_ExecHndl(t0));
        }
        t0 = (t0 + 0x9C);
        if ((unsigned int)t0 >= (unsigned int)0xC302FA0) {
            break;
        }
    }
    return t3;
}

int FUN_0c1620f0(void)
{
    int stk[2];

    cvFsInit();
    *(unsigned int *)(((int)stk + 0)) = 0xC171564;
    cvFsAddDev(0xC171564, 0xC16BE28, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4));
    cvFsSetDefDev((*(int *)(((int)stk + 0))), 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    memset(0xC302FA0, 0x0, 0xD00);
    return 0x1;
}

int mpdrv_set_getlerr_ns(int a4, int a5, int a6, int a7, int a8)
{
    int stk[4];

    *(unsigned int *)((((int)stk + 8) + 0x0)) = a5;
    *(unsigned int *)((((int)stk + 8) + 0x4)) = ((((a6 << 16) << 8) | (a7 << 16)) | a8);
    *(int *)((int)stk + 4) = 0x0;
    *(int *)((int)stk + 0) = 0x0;
    return (mpdrv_setcmd(a4, 0xD, ((int)stk + 8), 0x2, 0x0, 0x0));
}

int FUN_0c16c828(void)
{
    register int t0;

    t0 = 0x0;
    for (;;) {
        if ((*(int *)(((((t0 << 2) << 1) + 0xC30B754) + 0x4))) != 0) {
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x20) {
                break;
            }
            continue;
        }
        break;
    }
    if (t0 == 32) {
        return 0x0;
    }
    return (((t0 << 2) << 1) + 0xC30B754);
}

int FUN_0c01c4e2(void)
{
    register int t1;
    register int t0;

    t1 = 0x0;
    for (;;) {
        if ((int)t1 >= (int)(*(int *)0xC11D094)) {
            break;
        }
        t0 = (FUN_0c02842e(0xC09753C));
        t1 = (t1 + 0x1);
    }
    return t0;
}

int FUN_0c01e5cc(int a4, int a5, int a6)
{
    if (a4 == 1) {
        return FUN_0c14e1ec((*(int *)(((a5 << 2) + 0xC1ECD54))), a6);
    }
    return FUN_0c14e1ec((*(int *)(((a5 << 2) + 0xC1ECD64))), a6);
}

int pfSize(float f4, float f5)
{
    register float u2;
    register int t5;
    register float u7;
    register float u4;

    (((struct oC_float *)0xC270D1C)->v) = f4;
    (((struct o4_float *)0xC270D1C)->v) = (((((struct o10_float *)0xC270D1C)->v)) * f4);
    (((struct o8_float *)0xC270D1C)->v) = f5;
    u2 = (((struct o18_float *)0xC270D1C)->v);
    t5 = 0xC270D1C;
    u7 = (u2 * f5);
    if (((((struct o0_int *)0xC270D1C)->v)) != 0) {
        u4 = (u2 * f5);
        t5 = 0xC028104;
        u7 = (u4 * (*(float *)0xC028104));
    }
    (((struct o14_float *)0xC270D1C)->v) = u7;
    return t5;
}

int FUN_0c02d694(int a4, int a5)
{
    register int t4;

    t4 = *(int *)(((((((struct o4_int *)0xC1EC720)->v)) << 2) + (*(int *)((0xC1294F0 + (((((struct o0_int *)0xC1EC720)->v)) << 2))))));
    return Check2DAreaDX(a4, (*(int *)(((t4 + ((a5 << 2) << 1)) + 0x4))), (*(int *)(((t4 + ((a5 << 2) << 1)) + 0x0))));
}


float FUN_0c05b77e(int a4, int a5, int a6, float f4)
{
    register float u0;
    register float u1;

    u0 = (f4 * (*(float *)((a5 + 0x0))));
    u0 = u0 + (*(float *)((a4 + 0x0))) * ((1.0f - f4));
    *(float *)((a6 + 0x0)) = u0;
    u0 = (f4 * ((((struct o4_float *)(a5))->v)));
    u0 = u0 + ((((struct o4_float *)(a4))->v)) * ((1.0f - f4));
    (((struct o4_float *)(a6))->v) = u0;
    u0 = (((struct o8_float *)(a4))->v);
    u1 = (f4 * ((((struct o8_float *)(a5))->v)));
    u1 = u1 + u0 * ((1.0f - f4));
    (((struct o8_float *)(a6))->v) = u1;
    return u0;
}

int FUN_0c05bb38(int a4)
{
    register int t0;

    t0 = set_event((a4 + 0x14), 0xC05BB34);
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x10)) = 0xC10DA1C;
        return (t0 + 0x14);
    }
    return 0x0;
}

int FUN_0c05d8a6(int a4, int a5, int a6)
{
    nlPushMatrix(0x0);
    nlQuickInvertMatrix();
    nlMultiMatrix(a5);
    FUN_0c05d858(a4, a6);
    return nlPopMatrix(0x1);
}

int FUN_0c05f6fe(int a4)
{
    register int t0;

    *(unsigned int *)((a4 + 0x24)) = 0x0;
    *(unsigned int *)((a4 + 0x28)) = 0x0;
    t0 = *(int *)((a4 + 0x10));
    *(unsigned int *)(((*(int *)((0xC13AC90 + (t0 << 2)))) + 0x28)) = (*(int *)(((*(int *)((0xC13ADD8 + (t0 << 2)))) + 0x0)));
    t0 = *(int *)((a4 + 0x10));
    (((struct o40_uint *)((*(int *)(((0xC13AC90 + (t0 << 2)) + 0x0)))))->v) = (*(int *)(((*(int *)((0xC13ADD8 + (t0 << 2)))) + 0x10)));
    return (t0 << 2);
}


int FUN_0c068be8(int a4, int a5, int a6)
{
    register int t0;

    t0 = set_event(0x20, 0xC068BBE);
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x14)) = a4;
        *(unsigned int *)((t0 + 0x18)) = a5;
        *(unsigned int *)((t0 + 0x1C)) = a6;
    }
    return t0;
}

int FUN_0c0696a0(int a4)
{
    *(unsigned int *)((a4 + 0x0)) = (*(int *)((0xC13B378 + (((FUN_0c070e60()) & 0x3) << 2))));
    (((struct o4_float *)(a4))->v) = 1.0f;
    (((struct o8_float *)(a4))->v) = 1.0f;
    (((struct oC_float *)(a4))->v) = (1.0f + 1.0f);
    return 0xC;
}

int FUN_0c069864(int a4)
{
    register int t0;
    register int t2;

    t0 = set_event(0x2C, 0xC069790);
    t2 = t0;
    if (t0 != 0) {
        t2 = FUN_0c0696a0((t0 + 0x14));
        *(unsigned int *)((t0 + 0x24)) = a4;
        *(unsigned int *)((t0 + 0x28)) = 0xB4;
    }
    return t2;
}

int nlInitTextureSurface(int a4, int a5)
{
    register int t2;
    register int t0;
    register int t1;

    (((struct o0_uint *)0xC2BF120)->v) = a4;
    (((struct o4_uint *)0xC2BF120)->v) = a5;
    (((struct o0_uint *)0xC2BF8DC)->v) = 0x0;
    (((struct o8_uint *)0xC2BF8DC)->v) = 0x0;
    t2 = 0x0;
    if ((int)a5 > 0) {
        t0 = 0x0;
        t1 = a4;
        for (;;) {
            t0 = (t0 + 0x1);
            *(unsigned int *)((t1 + 0x28)) = 0xFFFFFFFF;
            *(unsigned int *)((t1 + 0x2C)) = 0x0;
            *(unsigned int *)((t1 + 0x38)) = 0xFFFFFFFF;
            t1 = (t1 + 0x3C);
            if ((int)t0 >= (int)a5) {
                break;
            }
        }
        t2 = t0;
    }
    return t2;
}

int nlGetMatrix8(int a4)
{
    register int t1;
    float u3[16];

    t1 = a4;
    if (a4 == 0) {
        t1 = (*(int *)0xC2BF948);
    }
    _builtin_st_ext((float (*)[4])u3);
    *(float *)((((t1 + 0x40) - 0x8) + 0x0)) = u3[15];
    *(float *)(((((t1 + 0x40) - 0x8) + 0x0) + 4)) = u3[14];
    *(float *)(((((t1 + 0x40) - 0x8) - 0x8) + 0x0)) = u3[13];
    *(float *)((((((t1 + 0x40) - 0x8) - 0x8) + 0x0) + 4)) = u3[12];
    *(float *)((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) + 0x0)) = u3[11];
    *(float *)(((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = u3[10];
    *(float *)(((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0)) = u3[9];
    *(float *)((((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = u3[8];
    *(float *)((((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0)) = u3[7];
    *(float *)(((((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = u3[6];
    *(float *)(((((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0)) = u3[5];
    *(float *)((((((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = u3[4];
    *(float *)((((((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0)) = u3[3];
    *(float *)(((((((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = u3[2];
    *(float *)(((((((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0)) = u3[1];
    *(float *)((((((((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = u3[0];
    return (((((((((t1 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8);
}

void nlScaleV(int a4)
{
    register float u2;
    register float u3;
    register float u4;
    int t5;
    float u0[16];
    float u6[16];

    _builtin_st_ext((float (*)[4])u0);
    u2 = *(float *)((a4 + 0x0));
    u3 = (((struct o4_float *)(a4))->v);
    u4 = (((struct o4_float *)((a4 + 0x4)))->v);
    t5 = (*(int *)&(u0[15]));
    _builtin_st_ext((float (*)[4])u6);
    u6[0] = (u0[0] * u2);
    u6[1] = (u0[1] * u2);
    u6[2] = (u0[2] * u2);
    u6[3] = (u0[3] * u2);
    u6[4] = (u0[4] * u3);
    u6[5] = (u0[5] * u3);
    u6[6] = (u0[6] * u3);
    u6[7] = (u0[7] * u3);
    u6[8] = (u0[8] * u4);
    u6[9] = (u0[9] * u4);
    u6[10] = (u0[10] * u4);
    u6[11] = (u0[11] * u4);
    u6[12] = u0[12];
    u6[13] = u0[13];
    u6[14] = u0[14];
    u6[15] = (*(float *)&t5);
    _builtin_ld_ext((float (*)[4])u6);
}

void nlTransposeMatrix(void)
{
    int t2;
    int t4;
    int t6;
    int t8;
    int t10;
    int t12;
    float u0[16];
    float u13[16];

    _builtin_st_ext((float (*)[4])u0);
    t2 = (*(int *)&(u0[1]));
    t4 = (*(int *)&(u0[2]));
    t6 = (*(int *)&(u0[3]));
    t8 = (*(int *)&(u0[6]));
    t10 = (*(int *)&(u0[7]));
    t12 = (*(int *)&(u0[11]));
    _builtin_st_ext((float (*)[4])u13);
    u13[0] = u0[0];
    u13[1] = u0[4];
    u13[2] = u0[8];
    u13[3] = u0[12];
    u13[4] = (*(float *)&t2);
    u13[5] = u0[5];
    u13[6] = u0[9];
    u13[7] = u0[13];
    u13[8] = (*(float *)&t4);
    u13[9] = (*(float *)&t8);
    u13[10] = u0[10];
    u13[11] = u0[14];
    u13[12] = (*(float *)&t6);
    u13[13] = (*(float *)&t10);
    u13[14] = (*(float *)&t12);
    u13[15] = u0[15];
    _builtin_ld_ext((float (*)[4])u13);
}

int nlObjPutSetVtxColorMode(int a4)
{
    register int t5;

    if (a4 == 0) {
        *(unsigned int *)0xC147528 = 0x0;
    } else {
        if (a4 == 1) {
            *(unsigned int *)0xC147528 = 0xC0829EA;
        } else {
            if (a4 == 2) {
                *(unsigned int *)0xC147528 = 0xC08358A;
            }
        }
        t5 = a4;
    }
    return t5;
}

int nlObjPut(int a4)
{
    if (((*(int *)((a4 + 0x4))) & 0x2) == 0) {
        nlInvLightVector();
    }
    nlPushMatrix(0x0);
    nlMultiMatrixRevOrder8(0xC2BFC08);
    return nlobjput_sub(a4);
}

int buUnmount(int a4)
{
    register int t0;

    t0 = vmsfs_c_getstate(a4);
    if (t0 != 0) {
        return 0xFFFFFFFF;
    }
    return (vmsfs_unmount(a4));
}

int FUN_0c07b734(void)
{
    register int t0;
    register int t1;

    t0 = 0x0;
    for (;;) {
        t1 = FUN_0c07b6e6(0xA08000B4);
        if (t1 != 0) {
            break;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x400000) {
            return 0xFFFFFF00;
        }
    }
    return 0x0;
}

int FUN_0c07ceac(int a4, int a5, int a6)
{
    if ((*(signed char *)(((unsigned char)((unsigned short)a4 * (unsigned short)0x1C) + 0xC2C3EA8))) != 1) {
        return 0x0;
    }
    *(unsigned int *)((a6 + 0x0)) = (*(int *)0xC2C3E74);
    return (*(int *)(((0xC2C3EAC + (unsigned char)((unsigned short)a4 * (unsigned short)0x1C)) + ((short)a5 << 2))));
}

int FUN_0c07f402(int a4)
{
    register int t0;

    t0 = FUN_0c07e42c(0x0);
    if (t0 != 0) {
        return t0;
    }
    *(unsigned int *)((a4 + 0x0)) = 0x0;
    FUN_0c07e598(a4);
    return 0x0;
}

int FUN_0c08f3b8(int a4)
{
    return (vmsfs_write_retry(a4, (*(int *)(((*(int *)((((a4 * 0x154) + 0xC2C8D2C) + 0x1C))) + 0x8))), (*(int *)((((a4 * 0x154) + 0xC2C8D2C) + 0x20)))));
}

int FUN_0c08f37a(int a4)
{
    return (vmsfs_read_retry(a4, (*(int *)(((*(int *)((((a4 * 0x154) + 0xC2C8D2C) + 0x1C))) + 0x8))), (*(int *)((((a4 * 0x154) + 0xC2C8D2C) + 0x20)))));
}

int kmytex_FBAllocEntry(void)
{
    register int t0;
    register int t1;

    if ((unsigned int)0xC2D58CC < (unsigned int)0xC2ED8CC) {
        t0 = 0xC2D58CC;
        t1 = 0xC2D58CC;
        for (;;) {
            if (((unsigned short)(*(short *)((t0 + 0x0))) & 0x1) == 0) {
                break;
            }
            t0 = (t0 + 0x18);
            t1 = (t1 + 0x18);
            if ((unsigned int)t0 >= (unsigned int)0xC2ED8CC) {
                return 0x0;
            }
        }
        *(unsigned short *)((t1 + 0x0)) = 0x1;
        return t1;
    }
    return 0x0;
}

int VQAllocEntry(void)
{
    register int t0;
    register int t1;

    if ((unsigned int)0xC2ED8CC < (unsigned int)0xC3008CC) {
        t0 = 0xC2ED8CC;
        t1 = 0xC2ED8CC;
        for (;;) {
            if (((unsigned short)(*(short *)((t0 + 0x0))) & 0x1) == 0) {
                break;
            }
            t0 = (t0 + 0x4C);
            t1 = (t1 + 0x4C);
            if ((unsigned int)t0 >= (unsigned int)0xC3008CC) {
                return 0x0;
            }
        }
        *(unsigned short *)((t1 + 0x0)) = 0x1;
        return t1;
    }
    return 0x0;
}

int kmiGetProfileInt(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t0 = ((int (*)(int, int, int))(FUN_0c09402c))(a4, 0xC170CE0, a6);
    t1 = a6;
    if (t0 == 0) {
        t0 = ((int (*)(int, int))(FUN_0c09402c))(a5, 0xC170CEC);
        if (t0 == 0) {
            t0 = 0x0;
        }
        t1 = t0;
    }
    return t1;
}

int kdSetBlockRead(Stk4 s)
{
    register int t0;

    t0 = mpdrv_set_bread(s.w[0]);
    if (((((struct o10E8_int *)((*(int *)0xC30817C)))->v)) != 0) {
        kdRecvFrame();
    }
    return t0;
}

int kdSetGetLastError(Stk4 s)
{
    register int t0;

    t0 = mpdrv_set_getlerr(s.w[0]);
    if (((((struct o10E8_int *)((*(int *)0xC30817C)))->v)) != 0) {
        kdRecvFrame();
    }
    return t0;
}

void ADXAMP_Destroy(int a4)
{
    if (a4 != 0) {
        ADXCRS_Lock();
        memset(a4, 0x0, 0x30);
        ADXCRS_Unlock();
    return;
    }
}

int mpdrv_set_getcond(int a4, int a5)
{
    register int t2;

    if (_builtin_tas((char *)(*(int *)0xC16A484)) == 0) {
        mpdrv_dpf(0xC171A6C);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_getcond_ns(a4, a5);
    *(unsigned char *)(((*(int *)0xC16A484) + 0x0)) = 0x0;
    return t2;
}

int mpdrv_set_allstatreq(int a4)
{
    register int t2;

    if (_builtin_tas((char *)(*(int *)0xC16A484)) == 0) {
        mpdrv_dpf(0xC171A6C);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_allstatreq_ns(a4);
    *(unsigned char *)(((*(int *)0xC16A484) + 0x0)) = 0x0;
    return t2;
}

int mpdrv_set_dreq(int a4)
{
    register int t2;

    if (_builtin_tas((char *)(*(int *)0xC16A484)) == 0) {
        mpdrv_dpf(0xC171A6C);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_dreq_ns(a4);
    *(unsigned char *)(((*(int *)0xC16A484) + 0x0)) = 0x0;
    return t2;
}

int mpdrv_set_getminfo(int a4, int a5, int a6)
{
    register int t2;

    if (_builtin_tas((char *)(*(int *)0xC16A484)) == 0) {
        mpdrv_dpf(0xC171A6C);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_getminfo_ns(a4, a5, a6);
    *(unsigned char *)(((*(int *)0xC16A484) + 0x0)) = 0x0;
    return t2;
}

int mpdrv_set_dkill(int a4)
{
    register int t2;

    if (_builtin_tas((char *)(*(int *)0xC16A484)) == 0) {
        mpdrv_dpf(0xC171A6C);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_dkill_ns(a4);
    *(unsigned char *)(((*(int *)0xC16A484) + 0x0)) = 0x0;
    return t2;
}

int mpdrv_set_dreset(int a4)
{
    register int t2;

    if (_builtin_tas((char *)(*(int *)0xC16A484)) == 0) {
        mpdrv_dpf(0xC171A6C);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_dreset_ns(a4);
    *(unsigned char *)(((*(int *)0xC16A484) + 0x0)) = 0x0;
    return t2;
}

int mpdrv_set_arctrl(int a4, int a5)
{
    register int t2;

    if (_builtin_tas((char *)(*(int *)0xC16A484)) == 0) {
        mpdrv_dpf(0xC171A6C);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_arctrl_ns(a4, a5);
    *(unsigned char *)(((*(int *)0xC16A484) + 0x0)) = 0x0;
    return t2;
}

int mpdrv_set_transagain(int a4)
{
    register int t2;

    if (_builtin_tas((char *)(*(int *)0xC16A484)) == 0) {
        mpdrv_dpf(0xC171A6C);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_transagain_ns(a4);
    *(unsigned char *)(((*(int *)0xC16A484) + 0x0)) = 0x0;
    return t2;
}

int mpdrv_set_setcond(int a4, int a5, int a6, int a7)
{
    register int t2;

    if (_builtin_tas((char *)(*(int *)0xC16A484)) == 0) {
        mpdrv_dpf(0xC171A6C);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_setcond_ns(a4, a5, a6, a7);
    *(unsigned char *)(((*(int *)0xC16A484) + 0x0)) = 0x0;
    return t2;
}

int mpdrv_set_end(void)
{
    register int t2;

    if (_builtin_tas((char *)(*(int *)0xC16A484)) == 0) {
        mpdrv_dpf(0xC171A6C);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_end_ns();
    *(unsigned char *)(((*(int *)0xC16A484) + 0x0)) = 0x0;
    return t2;
}

int mpdrv_set_ft4ctrl(int a4, int a5)
{
    register int t2;

    if (_builtin_tas((char *)(*(int *)0xC16A484)) == 0) {
        mpdrv_dpf(0xC171A6C);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_ft4ctrl_ns(a4, a5);
    *(unsigned char *)(((*(int *)0xC16A484) + 0x0)) = 0x0;
    return t2;
}

int FUN_0c16f6d4(int a4, int a5, int a6, int a7)
{
    register int t2;

    if (_builtin_tas((char *)(*(int *)0xC16A484)) == 0) {
        mpdrv_dpf(0xC172F68);
        return 0xFFFFFFFE;
    }
    t2 = FUN_0c16f700(a4, a5, a6, a7);
    *(unsigned char *)(((*(int *)0xC16A484) + 0x0)) = 0x0;
    return t2;
}

int FUN_0c16f726(int a4, int a5)
{
    register int t2;

    if (_builtin_tas((char *)(*(int *)0xC16A484)) == 0) {
        mpdrv_dpf(0xC172F68);
        return 0xFFFFFFFE;
    }
    t2 = FUN_0c16f752(a4, a5);
    *(unsigned char *)(((*(int *)0xC16A484) + 0x0)) = 0x0;
    return t2;
}

int FUN_0c01c200(int a4, int a5, int a6, int a7)
{
    register int t1;
    register int t2;

    t1 = *(int *)((((*(int *)0xC1EC744) << 2) + 0xC0974B0));
    if (t1 == 0) {
        *(unsigned int *)0xC1EC744 = 0x0;
    } else {
        t2 = ((int (*)(int, int, int, int))(t1))(0xC1EC744, a5, a6, a7);
    }
    FUN_0c05304a();
    return FUN_0c033948();
}


int FUN_0c020ae8(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC2708C8;
    t1 = t0;
    if (t0 == 5) {
        FUN_0c01fd5c();
        FUN_0c06e990(0x276);
        t0 = FUN_0c07acd0(0xC142C64, 0x0);
        *(unsigned int *)0xC2708C8 = 0x2;
        t1 = t0;
    }
    return t1;
}

int FUN_0c022cc4(void)
{
    register int t2;
    register int t4;

    *(unsigned int *)0xC270924 = 0x0;
    FUN_0c02274c();
    t2 = *(int *)((((*(int *)0xC1EC724) << 2) + 0xC09C9F4));
    t4 = 0xC09C9F4;
    if (t2 != 0) {
        t4 = (((int (*)(void))(t2))());
    }
    *(unsigned int *)0xC2709A4 = 0x0;
    return t4;
}

void FUN_0c022d30(void)
{
    (((struct o0_uint *)0xC270924)->v) = 0x1;
    (((struct o4_uint *)0xC270924)->v) = 0x1;
    (((struct o8_uint *)0xC270924)->v) = 0x1;
    (((struct oC_uint *)0xC270924)->v) = 0x1;
    (((struct o14_uint *)0xC270924)->v) = 0x1;
    (((struct o18_uint *)0xC270924)->v) = 0x1;
    (((struct o1C_uint *)0xC270924)->v) = 0x1;
    (((struct o10_uint *)0xC270924)->v) = 0x0;
    *(unsigned int *)0xC177CEC = 0x0;
}

int FUN_0c026ce6(void)
{
    FUN_0c076250(((((struct o0_float *)0xC270B40)->v)), ((((struct o4_float *)0xC270B40)->v)), ((((struct o8_float *)0xC270B40)->v)));
    return FUN_0c076260(((((struct oC_float *)0xC270B40)->v)), ((((struct o10_float *)0xC270B40)->v)), ((((struct o14_float *)0xC270B40)->v)));
}

void SetMotionBlurStrength(float f4, float f5)
{
    register int t0;
    register float u6;
    register float u9;

    t0 = (((struct o0_int *)0xC12A5EC)->v);
    if (!(f4 > 0.0f)) {
        if (t0 == 0) {
        } else {
            (((struct o0_uint *)0xC12A5EC)->v) = 0xFFFFFFFF;
        }
        u9 = 0.0f;
    } else {
        u6 = f4;
        if (f4 > 1.0f) {
            if (t0 != 0) {
                (((struct o0_uint *)0xC12A5EC)->v) = 0xFFFFFFFF;
            }
            u6 = 1.0f;
        }
        u9 = u6;
    }
    (((struct o4_float *)0xC12A5EC)->v) = u9;
}

int BupProgressCallback(int a4, int a5, int a6, int a7)
{
    *(unsigned int *)((((a4 * 0x4C) + 0xC2952EC) + 0x8)) = a6;
    *(unsigned int *)((((a4 * 0x4C) + 0xC2952EC) + 0xC)) = a7;
    *(unsigned int *)((((a4 * 0x4C) + 0xC2952EC) + 0x10)) = a5;
    if (a5 == 1) {
        FUN_0c03e4f4(a4);
    }
    return 0x0;
}

int FUN_0c03f9d0(int a4, int a5, int a6, int a7)
{
    register int t1;
    register int t3;

    t1 = *(int *)((((a4 << 2) << 1) + 0xC2AA820));
    t3 = 0xC2AA820;
    if (t1 != 0) {
        *(unsigned int *)((t1 + (((int)a5 >> 5) << 2))) = ((*(int *)((t1 + (((int)a5 >> 5) << 2)))) | ((int)0x1 << (int)(0x1F & a5)));
        t3 = (((int)a5 >> 5) << 2);
    }
    return t3;
}

int FUN_0c04b0ba(int a4)
{
    register int t0;
    register int t1;

    if (((int)a4 >= (int)0x79) && ((int)a4 <= (int)0xAD)) {
        t0 = 0xC10B850;
        t1 = 0x0;
        for (;;) {
            if (a4 == (*(int *)((t0 + 0x0)))) {
                break;
            }
            t1 = (t1 + 0x1);
            t0 = (t0 + 0x4);
            if ((unsigned int)t1 >= (unsigned int)0x12) {
                return 0x0;
            }
        }
        return 0x1;
    }
    return 0x0;
}

int FUN_0c05251c(int a4, float f4)
{
    Put_Time_Spark(a4, f4);
    if ((*(float *)0xC05263C) > ((((struct o1C_float *)(a4))->v))) {
        FUN_0c058ca6(0x404A9, 0x0);
        return thunk_FUN_0c019c6c(a4);
    }
    return 0x1C;
}

int FUN_0c058490(void)
{
    register int t1;

    FUN_0c0586bc();
    t1 = 0x0;
    for (;;) {
        *(unsigned int *)((0xC2B3384 + t1)) = 0x0;
        *(unsigned int *)((0xC2B33A4 + t1)) = 0x78;
        t1 = (t1 + 0x4);
        if ((unsigned int)t1 >= (unsigned int)0x20) {
            break;
        }
    }
    *(unsigned int *)0xC2B3380 = 0x0;
    *(unsigned int *)0xC2B33C4 = 0x0;
    return FUN_0c0584ea();
}

int FUN_0c05d1ca(int a4, int a5, int a6, int a7)
{
    register int t8;
    register int t3;

    if ((*(int *)((a4 + 0x0))) != 0) {
        t3 = (FUN_0c05a356((*(int *)((a4 + 0x0)))));
    }
    if ((*(int *)((a4 + 0x4))) != 0) {
        t8 = *(int *)((a4 + 0x4));
        return ((int (*)(int, int, int, int))(t8))(0x0, 0x0, a6, a7);
    }
    return t3;
}

int FUN_0c06032a(int a4, int a5, int a6)
{
    int t0;

    if (((*(int *)0xC2AC2F4) == 0) && (t0 = *(int *)0xC175C80, (int)t0 < (int)0x8)) {
        (((struct o0_uint *)0xC2B9C9C)->v) = 0x3;
        (((struct o4_uint *)0xC2B9C9C)->v) = 0x0;
        (((struct o14_uint *)0xC2B9C9C)->v) = a4;
        t0 = 0x94;
    }
    return t0;
}

int FUN_0c061f54(int a4, int a5)
{
    register int t0;

    t0 = set_event(0x20, 0xC061EFC);
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x14)) = a4;
        *(unsigned int *)((t0 + 0x18)) = a5;
        *(unsigned int *)((t0 + 0x1C)) = 0x0;
    }
    return t0;
}

int FUN_0c06531c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(int *)((a4 + 0x0));
    t1 = (((struct o80_int *)(((a5 << 8) + t0)))->v);
    if (((int)t1 >= 0) && ((int)t1 < (int)0x6)) {
        t1 = *(int *)(((((((struct o80_int *)(((a5 << 8) + t0)))->v)) << 2) + 0xC10FB74));
        return ((int (*)(int, int, int, int))(t1))(a4, ((a5 << 8) + t0), a6, a7);
    }
    return 0x80;
}

int FUN_0c066246(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(int *)((a4 + 0x0));
    t1 = (((struct o80_int *)(((a5 << 8) + t0)))->v);
    if (((int)t1 >= 0) && ((int)t1 < (int)0x7)) {
        t1 = *(int *)(((((((struct o80_int *)(((a5 << 8) + t0)))->v)) << 2) + 0xC10FE9C));
        return ((int (*)(int, int, int, int))(t1))(((a5 << 8) + t0), a5, a6, a7);
    }
    return 0x80;
}

int FUN_0c066d08(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(int *)((a4 + 0x0));
    t1 = (((struct o80_int *)(((a5 << 8) + t0)))->v);
    if (((int)t1 >= 0) && ((int)t1 < (int)0x9)) {
        t1 = *(int *)(((((((struct o80_int *)(((a5 << 8) + t0)))->v)) << 2) + 0xC110158));
        return ((int (*)(int, int, int, int))(t1))(a4, ((a5 << 8) + t0), a6, a7);
    }
    return 0x80;
}

void FUN_0c068bbe(int a4)
{
    register int t0;

    t0 = *(int *)((a4 + 0x18));
    *(unsigned int *)((a4 + 0x18)) = (t0 - 1);
    if ((int)(t0 - 1) <= 0) {
        FUN_0c058ca6((*(int *)((a4 + 0x14))), (*(int *)((a4 + 0x1C))));
        nlCloseEvent(a4);
    return;
    }
}


int FUN_0c06ce48(int a4)
{
    register int t2;

    if ((*(int *)0xC177D58) == 0) {
        t2 = FUN_0c06e5f2();
        *(unsigned int *)0xC177D58 = 0xE;
        (((struct o0_uint *)0xC2BB3D4)->v) = 0x0;
        (((struct o4_uint *)0xC2BB3D4)->v) = 0x0;
        (((struct oC_uint *)0xC2BB3D4)->v) = 0x0;
    }
    return t2;
}

int nlCreateVertexBuffer(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9)
{
    register int t3;

    if ((*(int *)0xC2BB4A4) == 1) {
        t3 = (nlCreateVertexBuffer_clx22(a4, a5, a6, a7));
    } else {
        t3 = (nlCreateVertexBuffer_clx16(a4, a5, a6, a7, f4, f5, f6, f7, f8, f9));
    }
    return t3;
}

int FUN_0c07bd10(void)
{
    register int t2;

    FUN_0c07c5b8(0x0, 0x100A0, 0x0);
    FUN_0c07c5b8(0x0, 0x400A0, 0x0);
    t2 = FUN_0c07d5da();
    if (t2 != 0) {
        return 0xFFFFFF80;
    }
    return 0x0;
}

int FUN_0c07cacc(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC2C3E60;
    t1 = FUN_0c07b6e6((t0 + 0x10));
    if (t1 != 0) {
        FUN_0c07b6c0(0x0, (t0 + 0x10));
    }
    return t1;
}

int FUN_0c07d254(int a4, int a5)
{
    if ((short)a5 != 4) {
        if ((short)a5 != 8) {
            if ((short)a5 != 16) {
                return (short)a5;
            }
            *(unsigned char *)(((a4 + 0x8) + 0x0)) = 0x0;
            return (short)a5;
        }
        *(unsigned char *)(((a4 + 0x8) + 0x0)) = 0x1;
        return (short)a5;
    }
    *(unsigned char *)(((a4 + 0x8) + 0x0)) = 0x3;
    return (short)a5;
}

int buFbrInit(void)
{
    memset(0xC2CF0A0, 0x0, 0x1AF8);
    (((struct o0_uint *)0xC2D0B98)->v) = 0x0;
    (((struct o4_uint *)0xC2D0B98)->v) = 0x0;
    (((struct o8_uint *)0xC2D0B98)->v) = 0x0;
    return 0xC2D0B9C;
}

int syRtcExecServer(void)
{
    register int t0;
    register int t1;

    if ((((((struct o4_int *)0xC2D12E8)->v)) & 1) == 0) {
        (((struct o0_uint *)0xC2D12E8)->v) = (syRtcGetAndCheckCount(((((struct o0_int *)0xC2D12E8)->v))));
    }
    t0 = (((struct o4_int *)0xC2D12E8)->v);
    t1 = t0;
    if ((t0 & 2) != 0) {
        t0 = FUN_0c14cdfc();
        (((struct o0_uint *)0xC2D12E8)->v) = t0;
        t1 = t0;
    }
    return t1;
}

int syRtcInit(void)
{
    (((struct o0_uint *)0xC2D12E8)->v) = (FUN_0c14cdfc());
    (((struct o4_uint *)0xC2D12E8)->v) = 0x0;
    syRtcExecServer();
    (((struct o8_uint *)0xC2D12E8)->v) = (syChainAddHandler(0x900, 0xC14CA70, 0x5C, 0x0));
    return 0x0;
}

int pdVmsLcdBlt(int a4, int a5, int a6)
{
    if (a6 != 1) {
        if (a6 != 2) {
            if (a6 != 3) {
                return pdVmsLcdBltAsm(a4, a5);
            }
            return pdVmsLcdBltAsmFlipHV(a4, a5);
        }
        return pdVmsLcdBltAsmFlipV(a4, a5);
    }
    return pdVmsLcdBltAsmFlipH(a4, a5);
}

int syHwInit(void)
{
    hwInit();
    syIntInit(((((struct o4_int *)0xC170064)->v)), (*(int *)0xC173804));
    sySqInit();
    FUN_0c14bc20(((((struct o0_int *)0xC170064)->v)));
    return syTmrInit();
}

int FUN_0c14e110(int a4, int a5)
{
    FUN_0c165a7e(((((struct o94_int *)(a4))->v)));
    FUN_0c14dfa0(a4, a5);
    ADXT_SetLpFlg(a4, 0x1);
    return FUN_0c14e02a(a4);
}

int ADXT_GetTimeReal(int a4)
{
    int stk[2];

    FUN_0c14e9a8(a4, ((int)stk + 0), (((int)stk + 0) + 0x4));
    return (int)(((float)(*(int *)(((int)stk + 0))) / (float)(*(int *)(((int)stk + 4)))) * (*(float *)0xC14EC64));
}

int kmiBGPlaneSetPCW(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    *(unsigned int *)0xC300A7C = (((a4 & 0x7) << 16) << 8);
    if (a6 != 0) {
        t0 = *(int *)0xC300A7C;
        *(unsigned int *)0xC300A7C = (t0 | 0x10000000);
        t1 = (t0 | 0x10000000);
    }
    if (a5 != 0) {
        *(unsigned int *)0xC300A7C = ((*(int *)0xC300A7C) | 0x8000000);
    }
    return t1;
}

int kmSetHSyncCallback(int a4, int a5)
{
    FUN_0c168004();
    kmiRegisterCallback((*(int *)0xC174098), 0x2, a4, a5);
    return 0x0;
}

int kmtex_CopyTextureToMem(int a4, int a5, int a6)
{
    register int t1;

    t1 = *(int *)((((kmtex_GetTextureLevel(a6, a6)) << 2) + 0xC170F40));
    return kmiCopyToFrameBuffer((a4 + 0x4), a5, (t1 + 0x4));
}

int FUN_0c16243a(int a4, int a5, int a6, int a7)
{
    register int t4;

    cvFsSeek((*(int *)((a4 + 0x8))), ((*(int *)((a4 + 0x10))) + a5), 0x0, a7);
    t4 = cvFsTell((*(int *)((a4 + 0x8))));
    return (t4 - (*(int *)((a4 + 0x10))));
}

int mwRnaGetAutoSw(int a4)
{
    if (a4 == 0) {
        FUN_0c16ada2(0xC171714);
        return 0xFFFFFFFF;
    }
    return (((0x4 & (unsigned char)(*(signed char *)((a4 + 0x1)))) >> 1) >> 1);
}

int FUN_0c019d88(int a4, int a5, int a6, int a7)
{
    register int t3;
    register int t4;
    register int t1;
    register int t2;
    register int t9;
    register int t10;

    t3 = a4;
    t4 = (*(int *)((a4 + 0x0)));
    for (;;) {
        if (t4 == 0) {
            break;
        }
        t2 = (*(int *)((t4 + 0xC)));
        if (t2 != 0) {
            t3 = a4;
            t1 = (((int (*)(int, int, int, int))((*(int *)((t4 + 0xC)))))(t3, t4, a6, a7));
        } else {
            t9 = t2;
            t10 = t3;
        }
        t4 = (*(int *)((t4 + 0x0)));
        t2 = t9;
        t3 = t10;
    }
    return t1;
}

int ConvertSwitch2(void)
{
    (((struct o2C_uchar *)0xC1EC7C0)->v) = 0x2;
    (((struct o2B_uchar *)0xC1EC7C0)->v) = 0x0;
    (((struct oC_uint *)0xC1EC7C0)->v) = ((((struct o0_int *)0xC1EC7C0)->v));
    (((struct o0_uint *)0xC1EC7C0)->v) = (*(int *)(((*(int *)0xC1EC690) + 0x8)));
    (((struct o4_uint *)0xC1EC7C0)->v) = (*(int *)(((*(int *)0xC1EC690) + 0x10)));
    (((struct o8_uint *)0xC1EC7C0)->v) = (*(int *)(((*(int *)0xC1EC690) + 0x14)));
    return 0x2B;
}

int FUN_0c031f1c(int a4, int a5, int a6)
{
    if ((int)a6 >= 0) {
        *(unsigned char *)((a4 + 0x0)) = 0x2B;
    } else {
        *(unsigned char *)((a4 + 0x0)) = 0x2D;
    }
    return FUN_0c03332c((a4 + 0x1), 0x10, 0x3, a5);
}

int FUN_0c03457c(float f4, float f5, float f6, float f7, float f8)
{
    register float u0;
    register int t2;

    u0 = (((struct o0_float *)0xC2A5858)->v);
    (((struct o0_float *)0xC2A5858)->v) = 99.0f;
    t2 = FUN_0c03346e(0xC0B7BBC, 0xC2A5808, ((((struct o4_int *)0xC2A5858)->v)), 0x0, f4, f5, f6, f7, f8);
    (((struct o0_float *)0xC2A5858)->v) = u0;
    return t2;
}

int gdc_CourseAdvLoadSub(int a4, int a5, float f4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = a4;
    for (;;) {
        t1 = *(int *)((t0 + 0x0));
        if (t1 == -1) {
            break;
        }
        t2 = *(int *)((t0 + 0x0));
        t0 = (t0 + 0x4);
        FUN_0c01f4ca(t2, a5, f4);
    }
    return t1;
}

int Start_TimeUp(void)
{
    register int t3;

    Init_TimeUp();
    *(unsigned int *)0xC2B1DD4 = ((*(int *)0xC2B1DD4) & 0xFEFFFFFF);
    *(unsigned int *)0xC2B1DD4 = ((*(int *)0xC2B1DD4) & 0xFDFFFFFF);
    t3 = *(int *)0xC2B1DD4;
    *(unsigned int *)0xC2B1DD4 = ((t3 & 0xFBFFFFFF) | 0x10000000);
    return ((t3 & 0xFBFFFFFF) | 0x10000000);
}


int FUN_0c05ac12(void)
{
    register int t1;
    register int t3;

    FUN_0c05b0dc();
    t1 = *(int *)0xC2B967C;
    t3 = *(int *)((0xC2B92A8 + (((((t1 - 1) << 2) << 1) + (t1 - 1)) << 2)));
    if (t3 == 1) {
        return FUN_0c05b0dc();
    }
    return t3;
}

int FUN_0c05d0d8(float f4)
{
    int stk[1];
    int t1;

    *(float *)(((int)stk + 0)) = f4;
    if ((((*(int *)((((int)stk + 0) + 0x0))) & 0x7F800000) == 0x7F800000) && (t1 = *(int *)((((int)stk + 0) + 0x0)), (t1 & 0x7FFFFF) != 0)) {
        return 0x1;
    }
    return 0x0;
}


void nlLoadMatrix8(int a4)
{
    register int t1;
    float u5[16];

    t1 = a4;
    if (a4 == 0) {
        t1 = (*(int *)0xC2BF948);
    }
    u5[0] = (*(float *)(((t1 + 0x0) + 4)));
    u5[1] = (*(float *)((t1 + 0x0)));
    u5[2] = (*(float *)((((t1 + 0x8) + 0x0) + 4)));
    u5[3] = ((((struct o8_float *)(t1))->v));
    u5[4] = (*(float *)(((((t1 + 0x8) + 0x8) + 0x0) + 4)));
    u5[5] = ((((struct o8_float *)((t1 + 0x8)))->v));
    u5[6] = (*(float *)((((((t1 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
    u5[7] = ((((struct o8_float *)(((t1 + 0x8) + 0x8)))->v));
    u5[8] = (*(float *)(((((((t1 + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
    u5[9] = ((((struct o8_float *)((((t1 + 0x8) + 0x8) + 0x8)))->v));
    u5[10] = (*(float *)((((((((t1 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
    u5[11] = ((((struct o8_float *)(((((t1 + 0x8) + 0x8) + 0x8) + 0x8)))->v));
    u5[12] = (*(float *)(((((((((t1 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
    u5[13] = ((((struct o8_float *)((((((t1 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8)))->v));
    u5[14] = (*(float *)((((((((((t1 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
    u5[15] = ((((struct o8_float *)(((((((t1 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8)))->v));
    _builtin_ld_ext((float (*)[4])u5);
}

int nlMakeModelViewProjectMatrix(void)
{
    nlPushMatrix(((((struct oC_int *)0xC2BF960)->v)));
    nlMultiMatrix(((((struct o0_int *)0xC2BF960)->v)));
    FUN_0c072fe0();
    nlGetMatrix8(0xC2BFB30);
    return nlPopMatrix(0x1);
}

int nlMakeFastModelProjectMatrixVM(void)
{
    nlPushMatrix(0xC2BFB70);
    nlMultiMatrix(((((struct oC_int *)0xC2BF960)->v)));
    nlMultiMatrix(((((struct o0_int *)0xC2BF960)->v)));
    FUN_0c072fe0();
    return FUN_0c073220(0x1);
}

int nlObjPutSetSpecularEyeDirectionF(float f4, float f5, float f6)
{
    (((struct o10_float *)0xC1474D0)->v) = (((((struct o0_float *)0xC1474D0)->v)) + f4);
    (((struct o14_float *)0xC1474D0)->v) = (((((struct o4_float *)0xC1474D0)->v)) + f5);
    (((struct o18_float *)0xC1474D0)->v) = (((((struct o8_float *)0xC1474D0)->v)) + f6);
    (((struct o20_float *)0xC1474D0)->v) = f4;
    (((struct o24_float *)0xC1474D0)->v) = f5;
    (((struct o28_float *)0xC1474D0)->v) = f6;
    return 0x8;
}

int nlMvSendFan3(int a4, int a5, int a6, int a7, int a8)
{
    nlMvSendTriangle(a4, a5, a6);
    nlMvSendTriangle(a4, a6, a7);
    return nlMvSendTriangle(a4, a7, a8);
}

int FUN_0c07dcc0(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = FUN_0c07de10(0xC1476EC, a6, a6, a7);
    if (t0 == 0) {
        return nldispstripTexSub(a4, a5);
    }
    return t0;
}

int FUN_0c07dcf0(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = FUN_0c07de10(0xC147700, a6, a6, a7);
    if (t0 == 0) {
        return nldispstripTexSub(a4, a5);
    }
    return t0;
}

int FUN_0c07dd20(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = FUN_0c07de10(0xC147714, a6, a6, a7);
    if (t0 == 0) {
        return FUN_0c07e210(a4, a5);
    }
    return t0;
}

int FUN_0c07dd50(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = FUN_0c07de10(0xC147728, a6, a6, a7);
    if (t0 == 0) {
        return FUN_0c07e210(a4, a5);
    }
    return t0;
}

int FUN_0c080270(int a4, float f4, float f5, float f6)
{
    (((struct o40_float *)(((a4 * 0xB0) + 0xC2C4148)))->v) = f4;
    (((struct o44_float *)(((a4 * 0xB0) + 0xC2C4148)))->v) = f5;
    (((struct o48_float *)(((a4 * 0xB0) + 0xC2C4148)))->v) = f6;
    return FUN_0c073e10((((a4 * 0xB0) + 0xC2C4148) + 0x40));
}

int FUN_0c080440(int a4, int a5)
{
    (((struct o14_float *)(((a4 * 0xB0) + 0xC2C4148)))->v) = (*(float *)((a5 + 0x0)));
    (((struct o18_float *)(((a4 * 0xB0) + 0xC2C4148)))->v) = ((((struct o4_float *)(a5))->v));
    (((struct o1C_float *)(((a4 * 0xB0) + 0xC2C4148)))->v) = ((((struct o4_float *)((a5 + 0x4)))->v));
    (((struct o20_float *)(((a4 * 0xB0) + 0xC2C4148)))->v) = ((((struct o4_float *)(((a5 + 0x4) + 0x4)))->v));
    return 0x20;
}

int FUN_0c08f9f6(int a4, int a5)
{
    *(unsigned char *)(((((int)a5 >> 4) + (((a4 * 0x154) + 0xC2C8D2C) + 0x48)) + 0x0)) = 0x1;
    return 0x1;
}

int ovGetLibTbl(int a4)
{
    register int t7;

    if (((((struct o0_int *)0x8C00FFF0)->v)) == 0) {
        ovInit(0x8C00FC00, 0x78);
    }
    t7 = (((struct o0_int *)0x8C00FFF0)->v);
    *(unsigned int *)((a4 + 0x0)) = ((((struct o4_int *)0x8C00FFF0)->v));
    return t7;
}

int gdFsGetDrvStatG(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t3;

    t3 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)(((*(int *)0xC1737EC) + 0xC))) + 0x20)))))(((int)stk + 0), a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    if (t3 == 0) {
        return 0xFFFFFFFF;
    }
    return (*(int *)(((int)stk + 0)));
}

int kmiWaitAccurate(float f4)
{
    int stk[1];
    register float u0;

    *(unsigned int *)(((int)stk + 0)) = 0x0;
    u0 = *(float *)0xC155A60;
    if ((unsigned int)(*(int *)(((int)stk + 0))) < (unsigned int)(int)(f4 * u0)) {
        for (;;) {
            *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0x1);
            if ((unsigned int)(*(int *)(((int)stk + 0))) >= (unsigned int)(int)(f4 * u0)) {
                break;
            }
        }
    }
    return 0xC155A60;
}

int kmiPurgeMemory(int a4, int a5)
{
    register int t0;
    register int t1;

    if ((unsigned int)a4 <= (unsigned int)(a4 + a5)) {
        t0 = a4;
        for (;;) {
            t1 = kmiPurgeCache(t0);
            t0 = (t0 + 0x20);
            if ((unsigned int)t0 > (unsigned int)(a4 + a5)) {
                break;
            }
        }
        t0 = t1;
    }
    return t0;
}

int kmtex_CopyTextureFromMem(int a4, int a5, int a6)
{
    register int t1;

    t1 = *(int *)((((kmtex_GetTextureLevel(a6, a6)) << 2) + 0xC170F40));
    return kmiCopyFromFrameBuffer(a4, (a5 + 0x4), t1);
}

void ADXSTM_Close(int a4)
{
    int stk[2];

    if (a4 != 0) {
        FUN_0c1624ec(a4);
        if ((*(int *)((a4 + 0x8))) != 0) {
            cvFsClose((*(int *)((a4 + 0x8))), 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12));
        }
        FUN_0c162262(a4);
    return;
    }
}

int FUN_0c162784(int a4, int a5)
{
    register int t0;
    register int t2;

    t0 = cvFsGetFileSize(a4);
    t2 = (t0 + 0x7FF);
    if ((int)(t0 + 0x7FF) < 0) {
        t2 = ((t0 + 0x7FF) + 0x7FF);
    }
    *(unsigned int *)((a5 + 0x0)) = ((int)t2 >> 11);
    return 0x1;
}

int ADXAMP_ExecServer(void)
{
    register int t0;
    register int t1;
    register int t3;

    t0 = 0xC302FA0;
    for (;;) {
        t1 = *(signed char *)((t0 + 0x0));
        t3 = t1;
        if (t1 == 1) {
            t3 = (FUN_0c1626d0(t0));
        }
        t0 = (t0 + 0x68);
        if ((unsigned int)t0 >= (unsigned int)0xC303CA0) {
            break;
        }
    }
    return t3;
}

int mwRnaFlush(int a4)
{
    register int t2;
    register int t3;

    if (a4 == 0) {
        return (FUN_0c16ada2(0xC171714));
    }
    t2 = *(signed char *)((a4 + 0x6));
    t3 = (unsigned char)t2;
    if ((unsigned char)t2 != 1) {
        *(unsigned char *)((a4 + 0x6)) = 0x1;
        t3 = 0x1;
    }
    return t3;
}

int mwRnaGetPlaySw(int a4)
{
    if (a4 == 0) {
        FUN_0c16ada2(0xC171714);
        return 0xFFFFFFFF;
    }
    return ((0x2 & (unsigned char)(*(signed char *)((a4 + 0x1)))) >> 1);
}

int mwRnaGetFilter(int a4, int a5, int a6)
{
    if (a4 == 0) {
        return (FUN_0c16ada2(0xC171714));
    }
    *(unsigned int *)((a5 + 0x0)) = ((((struct o7C_int *)(a4))->v));
    *(unsigned int *)((a6 + 0x0)) = ((((struct o80_int *)(a4))->v));
    return 0x80;
}

int FUN_0c1657b4(void)
{
    register int t0;
    register int t1;

    if ((unsigned int)0xC309460 < (unsigned int)0xC30B620) {
        t0 = 0xC309460;
        t1 = 0xC309460;
        for (;;) {
            if ((*(signed char *)((t0 + 0x0))) == 0) {
                break;
            }
            t0 = (t0 + 0x438);
            t1 = (t1 + 0x438);
            if ((unsigned int)t0 >= (unsigned int)0xC30B620) {
                return 0x0;
            }
        }
        t0 = t1;
    } else {
        t0 = 0x0;
    }
    return t0;
}

int kmiErrorISR08(int a4, int a5, int a6, int a7)
{
    *(unsigned int *)0xA05F6908 = 0x8;
    (((struct oC_uint *)0xC306DFC)->v) = (((((struct oC_int *)0xC306DFC)->v)) + 0x1);
    if ((*(int *)0xC300D7C) == 1) {
        (((struct o0_uint *)0xC306DFC)->v) = (((((struct o0_int *)0xC306DFC)->v)) + 0x1);
        kmiErrorRecover(0x1, a5, a6, a7);
    }
    return 0x0;
}

int mwlSbFreeWork(int a4)
{
    register int t3;

    if (a4 != 0) {
        memset((*(int *)((a4 + 0x4))), 0x0, 0x100);
        t3 = memset(a4, 0x0, 0x8);
        *(unsigned int *)((a4 + 0x0)) = 0x0;
    }
    return t3;
}

int cvFsGetNumFiles(int a4, int a5, int a6, int a7)
{
    register int t2;

    if (a4 == 0) {
        t2 = (FUN_0c16cf34(a4, a5, a6, a7));
    } else {
        t2 = (FUN_0c16cf72(a4));
    }
    if (t2 == 0) {
        cvFsError(0xC172950);
    }
    return t2;
}

int ADXB_ExecOneWav(int a4)
{
    if (((((struct oAA_short *)(a4))->v)) == 2) {
        return ADXB_ExecOneWav4(a4);
    }
    if (((((struct oAA_short *)(a4))->v)) == 1) {
        return ADXB_ExecOneWav8(a4);
    }
    if (((((struct oAA_short *)(a4))->v)) == 0) {
        return ADXB_ExecOneWav16(a4);
    }
    return 0xAA;
}

int ADXPD_ExecServer(void)
{
    register int t0;
    register int t1;
    register int t3;

    t0 = 0xC30BA64;
    for (;;) {
        t1 = *(int *)((t0 + 0x0));
        t3 = t1;
        if (t1 == 1) {
            t3 = (ADXPD_ExecHndl(t0));
        }
        t0 = (t0 + 0x34);
        if ((unsigned int)t0 >= (unsigned int)0xC30BC04) {
            break;
        }
    }
    return t3;
}

int nlExecuteEvent(int a4, int a5, int a6, int a7)
{
    register int t2;
    register int t1;

    (((struct oC_uint *)0xC177ED4)->v) = ((((struct o0_int *)0xC177ED4)->v));
    for (;;) {
        t2 = (((struct oC_int *)0xC177ED4)->v);
        if (t2 == 0) {
            break;
        }
        (((struct oC_uint *)0xC177ED4)->v) = (*(int *)((t2 + 0x8)));
        t1 = (((int (*)(int, int, int, int))((*(int *)((t2 + 0xC)))))(t2, a5, a6, a7));
    }
    return t1;
}

int FUN_0c03e358(int a4, int a5)
{
    register int t1;

    FUN_0c0339fc(0x0);
    *(unsigned int *)0xC2A4FA0 = a5;
    t1 = 0x7;
    if (a5 != 0) {
        t1 = 0x8;
    }
    return FUN_0c0339fc(t1);
}


int FUN_0c05bfe6(void)
{
    register int t6;

    if ((int)(*(int *)0xC136CAC) >= (int)0x100) {
        FUN_0c05bf7e();
    }
    t6 = *(int *)0xC136CAC;
    *(unsigned int *)0xC136CAC = (t6 + 0x1);
    return (*(int *)((0xC1368AC + (((t6 + 0x1) - 1) << 2))));
}

int nlSetTextureParameter(int a4, int a5)
{
    register int t0;
    register int t2;

    t0 = *(int *)0xC2BF120;
    t2 = *(int *)((((a5 * 0x3C) + t0) + 0x34));
    *(unsigned int *)((a4 + 0x8)) = (((*(int *)((a4 + 0x8))) & 0xFFFFFFC0) | (*(int *)((((a5 * 0x3C) + t0) + 0x30))));
    *(unsigned int *)((a4 + 0xC)) = (0x0 | t2);
    return 0xC2BF120;
}

int buExitForce(void)
{
    *(unsigned int *)0xC147530 = 0x0;
    kdSetHandler((*(int *)0xC113E70), 0x0);
    vmsfs_c_exit();
    return (vmsfs_exit());
}

int buStat(int a4)
{
    register int t0;

    t0 = vmsfs_c_getstate(a4);
    if (t0 != 0) {
        return 0xFFFFFFFF;
    }
    return 0x0;
}

int FUN_0c07b6c0(int a4, int a5)
{
    int stk[3];

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(int *)((int)stk + 4) = 0x0;
    *(int *)((int)stk + 0) = 0x0;
    syG2Write((((int)stk + 0) + 0x8), a5, 0x4, 0x1, 0x0, 0x0);
    return 0x0;
}

int FUN_0c07d668(void)
{
    register int t0;
    register int t1;

    t0 = 0xC2C3FE8;
    t1 = 0x0;
    for (;;) {
        if ((*(int *)((t0 + 0x0))) == 0) {
            break;
        }
        t1 = (t1 + 0x1);
        t0 = (t0 + 0x10);
        if ((int)t1 >= (int)0x10) {
            return 0x0;
        }
    }
    *(unsigned int *)((t0 + 0x0)) = ((*(int *)((t0 + 0x0))) | 0x1);
    return t0;
}

int FUN_0c07f950(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t4;

    if ((int)a6 > 0) {
        t0 = a4;
        t1 = 0x0;
        for (;;) {
            if ((*(signed char *)((t0 + 0x0))) != 0) {
                t4 = *(signed char *)((t0 + 0x0));
                t0 = (t0 + 0x1);
                if (t4 == (signed char)a5) {
                    break;
                }
                t1 = (t1 + 0x1);
                if ((int)t1 >= (int)a6) {
                    return 0x0;
                }
                continue;
            }
            return 0x0;
        }
        return (t0 - 1);
    }
    return 0x0;
}

int FUN_0c080324(int a4, float f4, float f5)
{
    (((struct oA4_float *)(((a4 * 0xB0) + 0xC2C4148)))->v) = f4;
    (((struct o58_float *)(((a4 * 0xB0) + 0xC2C4148)))->v) = f5;
    (((struct o9C_float *)(((a4 * 0xB0) + 0xC2C4148)))->v) = (1.0f / (1.0f - f5));
    return 0x9C;
}

int FUN_0c08f9c4(int a4, int a5)
{
    return ((((a5 << 2) << 2) << 1) + (*(int *)((((a4 * 0x154) + 0xC2C8D2C) + 0x28))));
}

int FUN_0c08fc40(int a4)
{
    return ((((((unsigned int)((unsigned int)a4 >> 2) >> 2) << 2) + ((unsigned int)((unsigned int)a4 >> 2) >> 2)) << 1) + (a4 & 0xF));
}

int kmUseAnotherModifier(int a4)
{
    register int t2;

    if ((a4 & 0x1) != 0) {
        (((struct o14_uint *)0xC300A90)->v) = 0x1;
        (((struct o18_uint *)0xC300A90)->v) = a4;
        t2 = 0x0;
    } else {
        (((struct o14_uint *)0xC300A90)->v) = 0x0;
        t2 = 0xB;
    }
    (((struct o0_uint *)0xC300A90)->v) = 0x3;
    return t2;
}

int gdFsGetLE4(int a4)
{
    return (((((unsigned char)(*(signed char *)((a4 + 0x1))) << 8) | ((unsigned char)(*(signed char *)((a4 + 0x2))) << 16)) | (((unsigned char)(*(signed char *)((a4 + 0x3))) << 16) << 8)) | (unsigned char)(*(signed char *)((a4 + 0x0))));
}

int FUN_0c14c464(void)
{
    int stk[1];

    *(unsigned short *)(((int)stk + 0)) = (_builtin_get_imask());
    _builtin_set_imask(0xF);
    return ((int (*)(void))(0xAC14C490))();
}

int syRtcAicaSetDateLo(int a4)
{
    int stk[3];

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(int *)((int)stk + 4) = 0x0;
    *(int *)((int)stk + 0) = 0x0;
    syG2Write((((int)stk + 0) + 0x8), 0xA0710004, 0x4, 0x1, 0x0, 0x0);
    return 0x0;
}

int pdVibIsReady(int a4)
{
    register int t1;

    t1 = *(int *)(((kdGetDeviceInfo(a4)) + 0x0));
    if ((t1 & 0x100) != 0) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c14ec14(int a4, int a5, int a6)
{
    *(unsigned short *)((((a5 << 1) + (a4 + 0x42)) + 0x0)) = a6;
    if ((int)a5 < (int)(*(signed char *)((a4 + 0x3)))) {
        return thunk_mwRnaSetOutPan((*(int *)((a4 + 0xC))), a5, a6);     /* manual: the handle; a5 and a6 pass on unchanged (tail jump) */
    }
    return FUN_0c1616ce(0xC17053C);
}
