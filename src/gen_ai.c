/* Straight-line functions with calls and guards (batch gen_ai): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[4]; } Stk4;
typedef struct { int w[6]; } Stk6;
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o10E8_int { char p[0x10E8]; int v; };
struct o118_int { char p[0x118]; int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o160_float { char p[0x160]; float v; };
struct o164_float { char p[0x164]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_uchar { char p[0x1C]; unsigned char v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o1D_uchar { char p[0x1D]; unsigned char v; };
struct o1E_uchar { char p[0x1E]; unsigned char v; };
struct o1F_uchar { char p[0x1F]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uchar { char p[0x20]; unsigned char v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o20C_int { char p[0x20C]; int v; };
struct o20C_uint { char p[0x20C]; unsigned int v; };
struct o21_uchar { char p[0x21]; unsigned char v; };
struct o24_float { char p[0x24]; float v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o4C_short { char p[0x4C]; short v; };
struct o4C_ushort { char p[0x4C]; unsigned short v; };
struct o50_float { char p[0x50]; float v; };
struct o50_short { char p[0x50]; short v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o80_int { char p[0x80]; int v; };
struct o8A_short { char p[0x8A]; short v; };
struct o94_int { char p[0x94]; int v; };
struct oAC_int { char p[0xAC]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oF8_short { char p[0xF8]; short v; };
struct oF8_ushort { char p[0xF8]; unsigned short v; };
int ADXB_Destroy(int);
int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int ADXT_Stop(int);
int CarSel_SetLight(void);
int CheckAreaGrid(int, int);
int FUN_0c018b00(int);
int FUN_0c018c96(int, int, int, int);
int FUN_0c01ec7a(int);
int FUN_0c026b80(int, int);
int FUN_0c026bf4(float);
int FUN_0c026c02(void);
int FUN_0c026c1a(float, float, float);
int FUN_0c026c2a(float, float, float);
int FUN_0c026ce6(void);
int FUN_0c027f28(int);
int FUN_0c027fbe(float, float);
int FUN_0c02803a(int, int, int, int);
int FUN_0c028280(int);
int FUN_0c02842e(int);
int FUN_0c02f4ca(int, int, int);
int FUN_0c0339fc(int);
int FUN_0c0368b4(void);
int FUN_0c040f22(int, float, float, float);
int FUN_0c04be36(int);
int FUN_0c04bed2(int);
int FUN_0c0557f4(void);
int FUN_0c0558bc(void);
int FUN_0c055990(void);
int FUN_0c055aea(void);
int FUN_0c0576fc(void);
int FUN_0c057756(void);
int FUN_0c057aec(int, int, int);
int FUN_0c057f3c(int);
extern int FUN_0c05f37e();
int FUN_0c061bae(void);
int FUN_0c067718(int, int);
int FUN_0c068c14(int, int, float);
float FUN_0c070d90(float);
int FUN_0c07215c(int, int, int);
int FUN_0c072230(int, int);
int FUN_0c072290(int, int);
int FUN_0c073000(void);
int FUN_0c073ab0(void);
int FUN_0c073e10(int);
int FUN_0c075000(int, int, int, int, int);
int FUN_0c075450(int, int, int, int, int);
int FUN_0c075d70(int, float);
int FUN_0c076250(float, float, float);
int FUN_0c0767c0(void);
int FUN_0c07c8be(int);
int FUN_0c07d904(int);
int FUN_0c07e42c(int);
int FUN_0c07e57c(int);
int FUN_0c07ff00(void);
int FUN_0c0867b0(int, int);
int FUN_0c149c00(int);
int FUN_0c149c18(int);
int FUN_0c14e916(int);
int FUN_0c14e9a8(int, int, int);
int FUN_0c14ee68(int, int);
int FUN_0c14fbc2(void);
int FUN_0c160688(int, int, int);
int FUN_0c1606b0(void);
int FUN_0c1616ce(int);
int FUN_0c162464(int, int, int, int);
int FUN_0c165a7e(int);
int FUN_0c16ba68(int);
int FUN_0c16ba80(int);
int FUN_0c16c2e2(int);
int FUN_0c16c338(int, int, int);
int FUN_0c16c856(int);
int Result_Wobble(void);
extern int _builtin_get_imask(void);
extern void _builtin_ld_ext(float (*)[4]);
extern void _builtin_set_imask(int);
extern void _builtin_st_ext(float (*)[4]);
extern int _builtin_tas(char *);
int buIsReady(int);
int cvFsError(int, int, int, int);
int gdCiGetGdfsWork(void);
int gdCiTell(int);
int gdFsChangeDir(int);
int gdFsGetStat(int);
int gdFsReqRd32(int, int, int);
int gdFsSeek(int, int, int);
int gdFsStopRd(int);
int gdc_CourseTexFreeOnce(int);
int kdDevGetFD(int, int);
int kdRecvFrame(void);
int kmChangeLatencyModel(int, int, int, int);
int kmiErrorRecover(int, int, int, int);
int kmiFBfreeEx(int, int);
int kmiFBgetfreemem(int, int, int, int);
int kmiMemCopy8(int, int, int);
int memcpy(int, int, int);
int memset(int, int, int);
int mpdrv_dpf(int, ...);
int mpdrv_set_bread_ns(int, int, int, int, int);
int mpdrv_set_bwrite(int, int, int, int, int, int, int);
int mpdrv_set_getlerr_ns(int, ...);
int nlAddVector(int, int);
int nlArcTan2(int, int, float, float);
int nlGetMatrix8(int, float, float, float, float, float, float, float, float);
int nlLoadMatrix8(int);
int nlLoadRechangeMatrix(int);
int nlMultiMatrix8(int);
int nlMultiMatrixRevOrder8(int);
int nlMvSetWorkBuffer(int, int);
int nlObjPut(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAxe(int, int);
int nlScale(float, float, float);
int nlScaleUnitVector(int, int, float);
float nlSin(int);
int nlSubVector3op(int, int, int);
int nlTransposeMatrix(void);
int nlobjput_sub_trnsl(int);
int ovGetLibTbl(int);
int ovSearchLibByUuid(int);
int pdExecPeripheralServerUser(void);
int pdGetPeripheral(int);
int pdVibSetUnitInfo(int, int, int, int, int, int);
int pfSize(float, float);
int strlen(int);
int strncpy(int, int, int);
int syBtCfgSet(int, int, int);
int syG2DmaResume(int);
int syG2DmaSuspend(int);
int syRtcDateToCount(int, int);
int thunk_FUN_0c0765b0(void);
int vmsfs_c_getstate(int);
int vmsfs_diskfree(int, int);
int vmsfs_fgetinfo(int, int, int);
int vmsfs_findfirst(int, int);
int vmsfs_findfirst_ex(int, int, int);
int vmsfs_findnext(int, int);
int vmsfs_fisexist(int, int);
int vmsfs_getinfo(int, int);
int FUN_0c01fd5c(void);
int syCblCheckBroadcast(int a4, int a5, int a6);
int ccitt_updcrc(int a4, int a5, int a6, int a7);
int gdCiGetNumFiles(void);
int cvFsTell(int a4, int a5, int a6, int a7);
int cvFsSeek(int a4, int a5, int a6, int a7);
int cvFsReqRd(int a4, int a5, int a6, int a7);
int cvFsReqWr(int a4, int a5, int a6, int a7);
int syIntAdrChk_getchar(int a4, int a5);
int SetAdvCamera(int a4, int a5);
int pfPutSEGALogo(void);
int FUN_0c0272a6(int a4);
int FUN_0c030b34(void);
int FUN_0c040e02(int a4, int a5);
int FUN_0c040d90(int a4, int a5);
int Current_to_Target_angleY(Stk6 s);
int FUN_0c04f45c(void);
int FUN_0c050408(int a4, int a5);
int FUN_0c05407e(void);
int FUN_0c0544cc(void);
int FUN_0c054c24(void);
int ndPuru2Reset(int a4);
int FUN_0c05c242(int a4, int a5, int a6, int a7);
float FUN_0c05fcf2(void);
float FUN_0c05fd2a(void);
int FUN_0c075320(int a4, int a5);
int FUN_0c075630(int a4, int a5);
void FUN_0c076830(int a4);
void FUN_0c0767f0(int a4);
int kmChangeVertexPCW(int a4, int a5, int a6);
int ovLibClose(int a4);
int kmGetFreeTextureMem(int a4, int a5);
int gdFsClose(int a4);
int gdCiReqRd(int a4, int a5, int a6);
int FUN_0c16c90c(int a4);
int carFlipTravelDir(int a4);
int FUN_0c02d826(int a4);
int Put2DObj(int a4, float f4, float f5);
int PutCollisionEffect(int a4, int a5, int a6);
int FUN_0c03e4f4(int a4);
int FUN_0c04bd0e(void);
int Put_Adv_FreePlay(void);
int Exec_Result(void);
int FUN_0c066c84(int a4);
int FUN_0c06b370(void);
int FUN_0c072250(int a4, int a5, int a6);
int nlRotate(int a4, int a5);
int nlObjPutLoadTexture(int a4, int a5);
int FUN_0c07d42a(int a4, int a5, int a6);
int FUN_0c07d3be(int a4, int a5, int a6);
void FUN_0c07d974(void);
int FUN_0c07e598(int a4, int a5);
int strncat(int a4, int a5, int a6);
int kmDiscardVertexBuffer(void);
int syCfgSetSoundMode(int a4, int a5, int a6);
int syBtExit(int a4, int a5, int a6, int a7);
int FUN_0c14fbe8(void);
int kdDevGetVibrationInfo(int a4, int a5);
int FUN_0c01e83e(int a4);
int FUN_0c01eea6(void);
int FUN_0c01fc54(int a4, int a5);
int FUN_0c026e56(void);
float FUN_0c040cf2(int a4, int a5);
int Voice_CancelToNext(int a4);
int FUN_0c05b724(int a4, int a5, float f4);
int FUN_0c062270(void);
void FUN_0c06ac1a(int a4, int a5, int a6, int a7);
int FUN_0c06e5f2(void);
int nlReloadPalette(int a4, int a5);
int nlSysUseLatency2V(int a4, int a5, int a6, int a7);
void FUN_0c071ae0(int a4, int a5);
int nlGetMatrix(int a4);
int nlGetMatrix33on44(int a4);
int FUN_0c0755f0(int a4);
int nl_set_cnv_proj_pers(float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
int nlObjPutTrnsl(int a4, float f4);
int buFindFirstFileEx(int a4, int a5, int a6);
int buGetFileInfo(int a4, int a5, int a6);
float nlLineClipPoint(int a4, int a5, int a6);
int FUN_0c07ffbc(int a4, int a5, int a6);
int FUN_0c09431e(int a4, int a5, int a6, int a7);
int FUN_0c095b84(int a4, int a5, int a6);
void pdVibGetUnitInfoCallback(int a4, int a5, int a6, int a7);
void syExtChkClearG2TimeOut(void);
int kmiBGPlanePutColor(int a4, int a5, int a6);
int kdSetBlockWrite(int a4, int a5, int a6, int a7, int a8, int a9, int a10);
void ADXSJD_Destroy(int a4);
int FUN_0c1624b8(int a4, int a5, int a6, int a7);
int kmiErrorISR04(int a4, int a5, int a6, int a7);
int syG2DmaResumeAll(void);
int syG2DmaSuspendAll(void);
int fmcalccrc(int a4, int a5, int a6, int a7);
int gdCiGetStat(int a4);
int gdCiChangeDir(int a4);
int ADXB_CheckAiff(int a4);
int ADXB_CheckWav(int a4);
void nlInitHeapMemory(int a4, int a5);
int FUN_0c026c82(float f4, float f5, float f6);
int FUN_0c036904(void);
int FUN_0c046466(void);
int getReplayPoint(Stk4 s);
int HomingPos1(int a4, int a5, int a6, int a7, int a8, float f4);
int FUN_0c05a37e(int a4, float f4);
int FUN_0c06b3a6(int a4, int a5, int a6, int a7);
int nlInvLightVector(void);
int buGetLastError(int a4);
int FUN_0c07f2e0(int a4);
int FUN_0c07f39e(int a4);
int FUN_0c07f3d0(int a4);
int syRtcCompareDate(int a4, int a5);
void pdExecPeripheralServer(void);
int FUN_0c14e8e4(int a4, int a5, int a6, int a7);
int adxf_ChkPrmPt(int a4, int a5);
int FUN_0c165878(int a4);
int mpdrv_set_bread(int a4, int a5, int a6, int a7, int a8);
int mpdrv_set_getlerr(Stk4 s);
int gdCiSeek(int a4, int a5, int a6);
int cvFsClose(int a4, int a5, int a6, int a7);
int cvFsExecServer(int a4, int a5, int a6, int a7);
int ADXB_CheckAu(int a4);
int FUN_0c016240(void);
int FUN_0c01e742(int a4);
int gdc_GetStreamVoiceStat2(int a4);
int FUN_0c01ecaa(int a4);
int FUN_0c01ed38(int a4);
int GetRotVec(int a4, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
int FUN_0c054f24(void);
int FUN_0c05f3fe(int a4, int a5, int a6, float f4);
int FUN_0c065914(int a4, int a5, int a6, int a7);
int FUN_0c065704(int a4, int a5, int a6, int a7);
void FUN_0c06a820(int a4, int a5, int a6, int a7);
int FUN_0c06b6c8(int a4);
float nlCosec(int a4);
int buGetDiskInfo(int a4, int a5);
int buFindFirstFile(int a4, int a5);
int buFindNextFile(int a4, int a5);
int buGetDiskFree(int a4, int a5);
int buIsExistFile(int a4, int a5);

int FUN_0c01fd5c(void)
{
    register int t0;
    register int t1;
    register int t2;

    if ((*(int *)0xC123E50) != 0) {
        t0 = 0x0;
        t1 = 0x9C4;
        for (;;) {
            t2 = *(int *)(((((t0 << 2) << 2) + (*(int *)0xC123E50)) + 0x8));
            if (t2 == -1) {
                break;
            }
            gdc_CourseTexFreeOnce(t1);
            t1 = (t1 + 0x1);
            t0 = (t0 + 0x1);
        }
        t0 = t2;
    }
    return t0;
}

int syCblCheckBroadcast(int a4, int a5, int a6)
{
    register int t2;
    register int t8;

    FUN_0c160688(0x0, a5, a6);
    t2 = *(signed char *)(((FUN_0c1606b0()) + 0xC));
    t8 = 0x1;
    if (t2 != 49) {
        t8 = 0x2;
        if (t2 != 50) {
            t8 = 0x3;
            if (t2 != 51) {
                t8 = 0x0;
            }
        }
    }
    return t8;
}

int ccitt_updcrc(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t0 = a4;
    t1 = a6;
    t2 = a7;
    t3 = a5;
    for (;;) {
        t4 = (int)t1 <= 0;
        t1 = (t1 - 1);
        if (t4) {
            break;
        }
        t2 = (unsigned short)t0;
        t4 = t2;
        t5 = 0xFFFFFFF8;
        t4 = ((int)t4 << (int)t5);
        t0 = *(signed char *)((t3 + 0x0));
        t3 = (t3 + 0x1);
        t5 = t0;
        t4 = (unsigned char)t4;
        t0 = t2;
        t5 = (unsigned char)t5;
        t4 = (t4 ^ t5);
        t4 = (t4 << 1);
        t0 = (t0 << 8);
        t0 = (t0 & 0xFF00);
        t0 = (t0 ^ ((*(short *)((0xC1710C0 + t4)))));
    }
    return t0;
}

int gdCiGetNumFiles(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = gdCiGetGdfsWork();
    t1 = *(int *)((t0 + 0x10));
    t2 = t0;
    t0 = 0x0;
    t3 = 0x0;
    for (;;) {
        if ((int)t0 >= (int)(*(int *)((t1 + 0x0)))) {
            break;
        }
        t4 = (t0 * 0x2C);
        t4 = (t4 + (t1 + 0x10));
        t2 = (*(signed char *)((t4 + 0x8)));
        t2 = (unsigned char)t2;
        t0 = (t0 + 0x1);
        if ((t2 & 0x2) == 0) {
            t3 = (t3 + 0x1);
        }
    }
    return t3;
}

int cvFsTell(int a4, int a5, int a6, int a7)
{
    register int t13;

    if (a4 == 0) {
        cvFsError(0xC172560, a5, a6, a7);
        t13 = 0x0;
    } else {
        if ((*(int *)(((*(int *)((a4 + 0x0))) + 0x1C))) != 0) {
            t13 = (((int (*)(int, int, int, int))((*(int *)(((*(int *)((a4 + 0x0))) + 0x1C)))))((*(int *)((a4 + 0x4))), a5, a6, a7));
        } else {
            cvFsError(0xC17257C, a5, a6, a7);
            t13 = 0x0;
        }
    }
    return t13;
}

int cvFsSeek(int a4, int a5, int a6, int a7)
{
    register int t13;

    if (a4 == 0) {
        cvFsError(0xC172594, a5, a6, a7);
        t13 = 0x0;
    } else {
        if ((*(int *)(((*(int *)((a4 + 0x0))) + 0x18))) != 0) {
            t13 = (((int (*)(int, int, int, int))((*(int *)(((*(int *)((a4 + 0x0))) + 0x18)))))((*(int *)((a4 + 0x4))), a5, a6, a7));
        } else {
            cvFsError(0xC1725B0, a5, a6, a7);
            t13 = 0x0;
        }
    }
    return t13;
}

int cvFsReqRd(int a4, int a5, int a6, int a7)
{
    register int t13;

    if (a4 == 0) {
        cvFsError(0xC1725C8, a5, a6, a7);
        t13 = 0x0;
    } else {
        if ((*(int *)(((*(int *)((a4 + 0x0))) + 0x20))) != 0) {
            t13 = (((int (*)(int, int, int, int))((*(int *)(((*(int *)((a4 + 0x0))) + 0x20)))))((*(int *)((a4 + 0x4))), a5, a6, a7));
        } else {
            cvFsError(0xC1725E4, a5, a6, a7);
            t13 = 0x0;
        }
    }
    return t13;
}

int cvFsReqWr(int a4, int a5, int a6, int a7)
{
    register int t11;

    if (a4 == 0) {
        cvFsError(0xC1725FC, a5, a6, a7);
        return 0x0;
    }
    if ((*(int *)(((*(int *)((a4 + 0x0))) + 0x24))) != 0) {
        t11 = (((int (*)(int, int, int, int))((*(int *)(((*(int *)((a4 + 0x0))) + 0x24)))))((*(int *)((a4 + 0x4))), a5, a6, a7));
    } else {
        cvFsError(0xC172618, a5, a6, a7);
    }
    return t11;
}

int syIntAdrChk_getchar(int a4, int a5)
{
    register int t0;
    register int t1;

    t0 = (((struct o8_int *)0xC30BC04)->v);
    if (t0 != 0) {
        t1 = a5;
        if (t0 != 1) {
        } else {
            t0 = a5;
            if (((unsigned char)(*(signed char *)(((((((struct o0_int *)0xC30BC04)->v)) + 0x1C) + 0x0))) & 0x4) == 4) {
                t0 = 0xD;
            }
            t1 = t0;
        }
        t0 = t1;
    } else {
        t1 = (((struct o4_int *)0xC30BC04)->v);
        for (;;) {
            if ((unsigned char)(*(short *)((t1 + 0x1C))) != 0) {
                break;
            }
        }
        t0 = (*(signed char *)(((t1 + 0x14) + 0x0)));
    }
    return t0;
}


int pfPutSEGALogo(void)
{
    register int t0;
    register float u2;
    register float u4;
    register float u9;
    register float u6;

    t0 = (((struct o0_int *)0xC270D18)->v);
    FUN_0c027f28(0x1);
    u2 = (((struct o0_float *)0xC02886C)->v);
    (((struct o1C_float *)0xC270D18)->v) = u2;
    u4 = (((struct oC_float *)0xC270D18)->v);
    u9 = (u4 * u2);
    if (((((struct o4_int *)0xC270D18)->v)) != 0) {
        u6 = (u4 * u2);
        u9 = (u6 * ((((struct o10_float *)0xC02886C)->v)));
    }
    (((struct o18_float *)0xC270D18)->v) = u9;
    FUN_0c028280(0x7F);
    return FUN_0c027f28(t0);
}

int FUN_0c0272a6(int a4)
{
    FUN_0c026b80((*(int *)((a4 + 0x0))), (*(int *)((a4 + 0x4))));
    FUN_0c026bf4(((((struct o20_float *)(a4))->v)));
    FUN_0c026c02();
    FUN_0c026c1a(((((struct o8_float *)(a4))->v)), ((((struct oC_float *)(a4))->v)), ((((struct o10_float *)(a4))->v)));
    FUN_0c026c2a(((((struct o14_float *)(a4))->v)), ((((struct o18_float *)(a4))->v)), ((((struct o1C_float *)(a4))->v)));
    return FUN_0c026ce6();
}

int FUN_0c030b34(void)
{
    register int t0;

    t0 = *(int *)0xC1EC71C;
    switch (t0) {
    case 0:
        if ((*(int *)0xC175C84) != 1) {
            *(unsigned int *)0xC289C74 = 0x64;
        } else {
            *(unsigned int *)0xC289C74 = 0xA0;
        }
        break;
    case 1:
        *(unsigned int *)0xC289C74 = 0xA0;
        break;
    case 2:
        *(unsigned int *)0xC289C74 = 0x8C;
        break;
    }
    return nlMvSetWorkBuffer(0xC2791C0, 0xC289C64);
}

int FUN_0c040e02(int a4, int a5)
{
    register int t0;
    register float u2;
    register int t3;
    register int t4;

    t0 = a5;
    if ((int)a5 < 0) {
        t0 = 0x0;
    }
    u2 = *(float *)0xC040E90;
    t3 = FUN_0c062270();
    t4 = FUN_0c040f22(0x8, u2, ((float)(t3 + t0) * u2), 1.0f);
    *(unsigned int *)0xC2AB7D8 = ((*(int *)0xC2AB7D8) + 0x1);
    return t4;
}

int FUN_0c040d90(int a4, int a5)
{
    register int t0;
    register float u2;
    register int t3;
    register int t4;

    t0 = a5;
    if ((int)a5 < 0) {
        t0 = 0x0;
    }
    u2 = *(float *)0xC040E80;
    t3 = FUN_0c062270();
    t4 = FUN_0c040f22(0x10, u2, ((float)(t3 + t0) * u2), 1.0f);
    *(unsigned int *)0xC2AB7D8 = ((*(int *)0xC2AB7D8) + 0x1);
    return t4;
}

int Current_to_Target_angleY(Stk6 s)
{
    int stk[15];
    register float u0;
    float u2;
    register float u4;
    register float u5;

    stk[1] = s.w[0];
    stk[2] = s.w[1];
    stk[3] = s.w[2];
    stk[4] = s.w[3];
    stk[5] = s.w[4];
    stk[6] = s.w[5];
    u0 = (((struct o4_float *)(((int)stk + 4)))->v);
    u2 = (((struct o8_float *)((((int)stk + 4) + 0x4)))->v);
    u4 = (u0 - ((((struct o10_float *)(((int)stk + 4)))->v)));
    u5 = (u2 - ((((struct o8_float *)((((int)stk + 4) + 0x10)))->v)));
    if ((u0 == 0.0f) && (u2 == 0.0f)) {
        u4 = 0.0f;
        u5 = 0.0f;
    }
    return (nlArcTan2((((int)stk + 4) + 0x10), (((int)stk + 4) + 0x4), u4, u5));
}

int FUN_0c04f45c(void)
{
    (((struct o0_float *)0xC2B1C00)->v) = (*(float *)0xC04F630);
    (((struct o4_float *)0xC2B1C00)->v) = 1.0f;
    (((struct o8_float *)0xC2B1C00)->v) = 1.0f;
    (((struct oC_float *)0xC2B1C00)->v) = 0.0f;
    (((struct o10_float *)0xC2B1C00)->v) = 0.0f;
    (((struct o14_float *)0xC2B1C00)->v) = 1.0f;
    (((struct o18_float *)0xC2B1C00)->v) = 1.0f;
    (((struct o1C_uint *)0xC2B1C00)->v) = 0x0;
    (((struct o28_uint *)0xC2B1C00)->v) = 0x5;
    (((struct o20_float *)0xC2B1C00)->v) = 1.0f;
    (((struct o24_uint *)0xC2B1C00)->v) = 0x2;
    return 0x2C;
}

int FUN_0c050408(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;

    (((struct o4_uint *)0xC2B29E0)->v) = 0x3;
    (((struct o0_uint *)0xC2B29E0)->v) = 0x1;
    t0 = *(int *)0xC2B2978;
    t1 = (int)((int)(*(int *)((t0 + 0x0))) % (int)0x3C);
    t2 = t1;
    if (t1 != 59) {
        t1 = *(int *)((t0 + 0x0));
        t2 = (int)((int)t1 % (int)0x3C);
        *(unsigned int *)((t0 + 0x0)) = ((t1 - t2) + 0x3B);
    }
    return t2;
}

int FUN_0c05407e(void)
{
    (((struct o0_float *)0xC2B2DF8)->v) = 0.300000012f;
    (((struct o4_float *)0xC2B2DF8)->v) = 1.0f;
    (((struct o8_float *)0xC2B2DF8)->v) = 1.0f;
    (((struct oC_float *)0xC2B2DF8)->v) = 0.0f;
    (((struct o10_float *)0xC2B2DF8)->v) = 0.0f;
    (((struct o14_float *)0xC2B2DF8)->v) = 1.0f;
    (((struct o18_float *)0xC2B2DF8)->v) = 1.0f;
    (((struct o1C_uint *)0xC2B2DF8)->v) = 0x0;
    (((struct o28_uint *)0xC2B2DF8)->v) = 0xA;
    (((struct o20_float *)0xC2B2DF8)->v) = 1.0f;
    (((struct o24_uint *)0xC2B2DF8)->v) = 0x2;
    return 0x2C;
}

int FUN_0c0544cc(void)
{
    (((struct o0_float *)0xC2B2E48)->v) = (*(float *)0xC054594);
    (((struct o4_float *)0xC2B2E48)->v) = 1.0f;
    (((struct o8_float *)0xC2B2E48)->v) = 1.0f;
    (((struct oC_float *)0xC2B2E48)->v) = 0.0f;
    (((struct o10_float *)0xC2B2E48)->v) = 0.0f;
    (((struct o14_float *)0xC2B2E48)->v) = 1.0f;
    (((struct o18_float *)0xC2B2E48)->v) = 1.0f;
    (((struct o1C_uint *)0xC2B2E48)->v) = 0x0;
    (((struct o28_uint *)0xC2B2E48)->v) = 0xA;
    (((struct o20_float *)0xC2B2E48)->v) = 1.0f;
    (((struct o24_uint *)0xC2B2E48)->v) = 0x2;
    return 0x2C;
}

int FUN_0c054c24(void)
{
    (((struct o0_float *)0xC2B2E98)->v) = 0.230000004f;
    (((struct o4_float *)0xC2B2E98)->v) = 1.0f;
    (((struct o8_float *)0xC2B2E98)->v) = 1.0f;
    (((struct oC_float *)0xC2B2E98)->v) = 0.0f;
    (((struct o10_float *)0xC2B2E98)->v) = 0.0f;
    (((struct o14_float *)0xC2B2E98)->v) = 1.0f;
    (((struct o18_float *)0xC2B2E98)->v) = 1.0f;
    (((struct o1C_uint *)0xC2B2E98)->v) = 0x0;
    (((struct o28_uint *)0xC2B2E98)->v) = 0xA;
    (((struct o20_float *)0xC2B2E98)->v) = 1.0f;
    (((struct o24_uint *)0xC2B2E98)->v) = 0x2;
    return 0x2C;
}

int ndPuru2Reset(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    pdGetPeripheral(a4);
    t0 = *(signed char *)0xC1EC784;
    if ((unsigned char)t0 == 2) {
        t1 = *(int *)(((*(int *)((((((struct o0_int *)0xC2B32C0)->v)) + 0x30))) + 0x0));
        t2 = t1;
        if ((t1 & 0x100) != 0) {
            for (;;) {
                t1 = FUN_0c057f3c(a4);
                if (t1 != 0) {
                    break;
                }
            }
            (((struct o1C_uint *)0xC2B32C0)->v) = 0x0;
            t2 = t1;
        }
        t1 = t2;
    } else {
        (((struct o1C_uint *)0xC2B32C0)->v) = 0x0;
        t1 = (unsigned char)t0;
    }
    return t1;
}

int FUN_0c05c242(int a4, int a5, int a6, int a7)
{
    register int t1;
    register int t2;
    register int t3;

    t1 = (*(int *)((a4 + 0x0)));
    for (;;) {
        if (t1 == 0) {
            return 0x0;
        }
        t2 = t1;
        t1 = a5;
        t3 = ((int (*)(int, int, int, int))(a6))(t2, t1, a6, a7);
        if (t3 != 0) {
            break;
        }
        t1 = (*(int *)((t2 + 0x4)));
    }
    return t2;
}

float FUN_0c05fcf2(void)
{
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    u0 = (((struct o0_float *)0xC05FD90)->v);
    u1 = (((struct oC_float *)0xC05FD90)->v);
    u2 = (-(((float)(*(short *)0xC1759CC) * u0) / ((((struct o8_float *)0xC05FD90)->v))));
    u3 = u1;
    if ((u2 + u0) > u1) {
    } else {
        u1 = (((struct o10_float *)0xC05FD90)->v);
        u4 = (u2 + u0);
        if (u1 > (u2 + u0)) {
            u4 = u1;
        }
        u3 = u4;
    }
    return u3;
}

float FUN_0c05fd2a(void)
{
    register float u1;
    register float u5;
    register float u2;

    u1 = (-(((float)(*(short *)0xC1759CC) * 30.0f) / 4352.0f));
    u5 = 58.9000015f;
    if ((u1 + 30.0f) > 58.9000015f) {
    } else {
        u2 = (u1 + 30.0f);
        if (0.100000001f > (u1 + 30.0f)) {
            u2 = 0.100000001f;
        }
        u5 = u2;
    }
    return u5;
}

int FUN_0c075320(int a4, int a5)
{
    int stk[4];
    register int t0;
    register int t5;

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 12)) = a5;
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    t0 = 0x0;
    for (;;) {
        *(int *)((int)stk + 0) = 0x1;
        t5 = *(int *)(((int)stk + 4));
        t0 = (t0 | (FUN_0c075000((*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 12))), (*(int *)(((int)stk + 4))), (((int)stk + 0) + 0x4), 0x1)));
        if (t5 == 0) {
            break;
        }
    }
    return t0;
}

int FUN_0c075630(int a4, int a5)
{
    int stk[4];
    register int t0;
    register int t5;

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 12)) = a5;
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    t0 = 0x0;
    for (;;) {
        *(int *)((int)stk + 0) = 0x1;
        t5 = *(int *)(((int)stk + 4));
        t0 = (t0 | (FUN_0c075450((*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 12))), (*(int *)(((int)stk + 4))), (((int)stk + 0) + 0x4), 0x1)));
        if (t5 == 0) {
            break;
        }
    }
    return t0;
}

void FUN_0c076830(int a4)
{
    if ((int)(*(int *)((a4 + 0x0))) >= 0) {
        FUN_0c0767c0();
        FUN_0c0867b0(a4, 0xC2BF8B0);
        nlPopMatrix(0x1);
    return;
    }
}

void FUN_0c0767f0(int a4)
{
    if ((int)(*(int *)((a4 + 0x0))) >= 0) {
        nlPushMatrix(0x0);
        nlMultiMatrixRevOrder8(0xC2BFC08);
        FUN_0c0867b0(a4, 0xC2BF8B0);
        nlPopMatrix(0x1);
    return;
    }
}

int kmChangeVertexPCW(int a4, int a5, int a6)
{
    int stk[2];
    register int t0;
    register int t3;

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 0)) = a6;
    t0 = (((struct o0_int *)0xC2D0C3C)->v);
    (((struct o4_uint *)0xC2D0C3C)->v) = ((a4 << 2) + t0);
    kmiMemCopy8((*(int *)((((a4 << 2) + t0) + 0x0))), (((int)stk + 0) + 0x4), 0x4);
    t3 = (((struct o4_int *)0xC2D0C3C)->v);
    *(unsigned int *)((t3 + 0x0)) = ((*(int *)((t3 + 0x0))) + ((*(int *)(((int)stk + 0))) << 2));
    return 0x0;
}

int ovLibClose(int a4)
{
    int stk[4];
    register int t3;
    register int t4;

    *(unsigned int *)(((int)stk + 8)) = a4;
    FUN_0c149c00(((int)stk + 0));
    *(unsigned int *)(((int)stk + 12)) = (ovGetLibTbl((((int)stk + 0) + 0x4)));
    t3 = ovSearchLibByUuid((*(int *)(((int)stk + 8))));
    if ((int)t3 >= 0) {
        t4 = *(int *)(((int)stk + 12));
        *(unsigned int *)(((((t3 << 2) << 1) + (t4 + 0x8)) + 0x4)) = ((*(int *)(((((t3 << 2) << 1) + (t4 + 0x8)) + 0x4))) - 1);
    }
    return (FUN_0c149c18(((int)stk + 0)));
}

int kmGetFreeTextureMem(int a4, int a5)
{
    int stk[6];
    register int t0;

    *(unsigned int *)(((int)stk + 20)) = a4;
    *(unsigned int *)(((int)stk + 16)) = a5;
    t0 = kmiFBgetfreemem(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8), (((int)stk + 0) + 0xC));
    *(unsigned int *)(((*(int *)(((int)stk + 20))) + 0x0)) = (((*(int *)(((int)stk + 0))) + (*(int *)(((int)stk + 4)))) + (*(int *)(((int)stk + 8))));
    *(unsigned int *)(((*(int *)(((int)stk + 16))) + 0x0)) = (*(int *)(((int)stk + 12)));
    return t0;
}

int gdFsClose(int a4)
{
    int t0;

    if (a4 != 0) {
        if (((((struct o4C_short *)(a4))->v)) != 0) {
            t0 = (((struct o50_short *)(a4))->v);
            if ((t0 != 2) && ((t0 != 3) && (t0 != 4))) {
            } else {
                gdFsStopRd(a4);
            }
            (((struct o4C_ushort *)(a4))->v) = 0x0;
        }
        t0 = 0x4C;
    }
    return t0;
}

int gdCiReqRd(int a4, int a5, int a6)
{
    register int t1;

    t1 = gdFsReqRd32((*(int *)((a4 + 0x4))), a5, a6);
    if ((int)t1 < 0) {
        if (t1 != -13) {
            FUN_0c16c338(0xC172198, 0xC174544, 0x1);
            FUN_0c16c2e2(a4);
        }
        return 0x0;
    }
    *(unsigned int *)((a4 + 0x8)) = 0x2;
    return t1;
}

int FUN_0c16c90c(int a4)
{
    register int t0;

    t0 = strlen(0xC30BA54);
    if ((*(signed char *)0xC30BA54) == 0) {
        *(unsigned char *)((a4 + 0x0)) = 0x0;
        return t0;
    }
    return memcpy(a4, 0xC30BA54, (t0 + 0x1));
}

int carFlipTravelDir(int a4)
{
    register int t0;
    register int t1;
    register int t5;

    t0 = (((struct o8A_short *)(a4))->v);
    t1 = (((struct oF8_short *)(a4))->v);
    t5 = 0xF8;
    if (((int)(unsigned short)(t1 - t0) > (int)0x4000) && ((int)(unsigned short)(t1 - t0) < (int)0xC000)) {
        (((struct oF8_ushort *)(a4))->v) = (((((struct oF8_short *)(a4))->v)) + 0x8000);
        (((struct o164_float *)(a4))->v) = (-((((struct o164_float *)(a4))->v)));
        (((struct o160_float *)(a4))->v) = (-((((struct o160_float *)(a4))->v)));
        t5 = 0x160;
    }
    return t5;
}


int Put2DObj(int a4, float f4, float f5)
{
    FUN_0c073000();
    FUN_0c073ab0();
    nlScale(f4, f5, 1.0f);
    nlObjPut(a4);
    return nlPopMatrix(0x1);
}

int PutCollisionEffect(int a4, int a5, int a6)
{
    register int t5;

    if ((a6 & 0x1) == 0) {
        FUN_0c02f4ca(a4, a5, 0x4);
        t5 = FUN_0c057aec((unsigned char)(*(signed char *)0xC1EC784), 0x1000000, 0x0);
        (((struct o0_uint *)0xC1295A0)->v) = (((((struct o0_int *)0xC1295A0)->v)) + 0x1);
    } else {
        (((struct o8_uint *)0xC1295A0)->v) = (((((struct o8_int *)0xC1295A0)->v)) + 0x1);
    }
    return t5;
}

int FUN_0c03e4f4(int a4)
{
    register int t0;
    register int t1;
    register int t3;

    (((struct o8_uint *)0xC2A46E4)->v) = 0x0;
    t0 = (((struct o0_int *)0xC2A46E4)->v);
    if (t0 == 3) {
        t1 = *(int *)0xC2A4FAC;
        if (a4 != t1) {
            t3 = buIsReady(t1);
            if (t3 != 1) {
                (((struct o4_uint *)0xC2A46E4)->v) = 0x10;
            }
        } else {
            (((struct o4_uint *)0xC2A46E4)->v) = 0x10;
            t3 = t1;
        }
        t1 = t3;
    } else {
        (((struct o4_uint *)0xC2A46E4)->v) = 0x10;
        t1 = t0;
    }
    return t1;
}

int FUN_0c04bd0e(void)
{
    register int t0;

    t0 = (((struct o0_int *)0xC2ADEC8)->v);
    if (t0 != -1) {
        (((struct o0_uint *)0xC2ADF68)->v) = t0;
    }
    t0 = (((struct o4_int *)0xC2ADEC8)->v);
    if (t0 != -1) {
        (((struct o4_uint *)0xC2ADF68)->v) = t0;
    }
    (((struct o0_uint *)0xC2ADEC8)->v) = (FUN_0c04be36(0xC175930));
    t0 = FUN_0c04bed2(0xC175930);
    (((struct o4_uint *)0xC2ADEC8)->v) = t0;
    return t0;
}

int Put_Adv_FreePlay(void)
{
    FUN_0c027f28(0x1);
    FUN_0c02803a(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
    pfSize(1.0f, 1.0f);
    FUN_0c027fbe((*(float *)0xC2B2D40), 378.0f);
    return FUN_0c02842e(0xC10CB28);
}

int Exec_Result(void)
{
    register int t7;

    FUN_0c0557f4();
    FUN_0c0558bc();
    FUN_0c055990();
    CarSel_SetLight();
    FUN_0c0576fc();
    FUN_0c057756();
    Result_Wobble();
    t7 = FUN_0c055aea();
    *(unsigned int *)0xC2B3110 = ((*(int *)0xC2B3110) + 0x1);
    return t7;
}

int FUN_0c066c84(int a4)
{
    register int t2;
    register float u4;
    register int t8;

    t2 = 0x0;
    if ((int)(*(int *)((((((struct oAC_int *)(a4))->v)) + 0x8))) > (int)0x1) {
        t2 = 0x1;
    }
    u4 = *(float *)0xC13B004;
    t8 = 0xC10FF08;
    if (t2 != 0) {
        t8 = (*(int *)(((((*(int *)((a4 + 0x10))) - 62) << 2) + 0xC13B354)));
    }
    return FUN_0c068c14(t8, a4, u4);
}

int FUN_0c06b370(void)
{
    register int t0;
    register int t2;
    register int t3;

    t0 = 0x0;
    for (;;) {
        t2 = ((int (*)(void))((*(int *)((0xC13C2C8 + t0)))))();
        t3 = (t0 + 0xC2BA6A8);
        t0 = (t0 + 0x4);
        *(unsigned int *)((t3 + 0x0)) = t2;
        if ((unsigned int)t0 >= (unsigned int)0x10) {
            break;
        }
    }
    return t2;
}

int FUN_0c072250(int a4, int a5, int a6)
{
    int stk[3];
    register int t1;
    register int t2;
    register int t3;
    register int t0;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    for (;;) {
        t1 = *(int *)(((int)stk + 8));
        *(unsigned int *)(((int)stk + 8)) = (t1 - 1);
        if ((int)(t1 - 1) < 0) {
            break;
        }
        t2 = *(int *)(((int)stk + 4));
        *(unsigned int *)(((int)stk + 4)) = (t2 + 0xC);
        t3 = *(int *)(((int)stk + 0));
        *(unsigned int *)(((int)stk + 0)) = (t3 + 0xC);
        t0 = (FUN_0c072230(((t3 + 0xC) - 12), ((t2 + 0xC) - 12)));
    }
    return t0;
}

int nlRotate(int a4, int a5)
{
    int stk[4];

    *(unsigned int *)(((int)stk + 0)) = a5;
    *(float *)(((int)stk + 4)) = (*(float *)((a4 + 0x0)));
    *(float *)(((int)stk + 8)) = ((((struct o4_float *)(a4))->v));
    *(float *)(((int)stk + 12)) = ((((struct o8_float *)(a4))->v));
    FUN_0c073e10((((int)stk + 0) + 0x4));
    return (nlRotateAxe((((int)stk + 0) + 0x4), (*(int *)(((int)stk + 0)))));
}

int nlObjPutLoadTexture(int a4, int a5)
{
    int stk[4];
    register int t0;
    register int t5;

    *(unsigned int *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    t0 = 0x0;
    for (;;) {
        *(int *)((int)stk + 0) = 0x0;
        t5 = *(int *)(((int)stk + 4));
        t0 = (t0 | (FUN_0c075000((*(int *)(((int)stk + 12))), (*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 4))), (((int)stk + 0) + 0x4), 0x0)));
        if (t5 == 0) {
            break;
        }
    }
    return t0;
}

int FUN_0c07d42a(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(signed char *)((0xC2C3EA8 + (unsigned char)((unsigned short)a4 * (unsigned short)0x1C)));
    if (t0 == 1) {
        return FUN_0c07c8be((((((((short)a4 << 8) << 2) << 2) | ((short)a6 << 16)) | 0x1A2) + ((((short)a5 << 8) << 2) << 1)));
    }
    return t0;
}

int FUN_0c07d3be(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(signed char *)((0xC2C3EA8 + (unsigned char)((unsigned short)a4 * (unsigned short)0x1C)));
    if (t0 == 1) {
        return FUN_0c07c8be((((((((short)a4 << 8) << 2) << 2) | ((short)a6 << 16)) | 0xA2) + ((((short)a5 << 8) << 2) << 1)));
    }
    return t0;
}

void FUN_0c07d974(void)
{
    register int t0;

    t0 = *(int *)((((((struct o4_int *)0xC2C4128)->v)) + 0x0));
    *(unsigned int *)((t0 + 0x0)) = ((*(int *)((t0 + 0x0))) & 0xFFFFFCFF);
    t0 = (((struct o4_int *)0xC2C4128)->v);
    (((struct o4_uint *)0xC2C4128)->v) = (t0 + 0x4);
    if ((t0 + 0x4) == 0xC2C4128) {
        (((struct o4_uint *)0xC2C4128)->v) = 0xC2C40E8;
    }
    t0 = (((struct o4_int *)0xC2C4128)->v);
    if (((((struct o0_int *)0xC2C4128)->v)) != t0) {
        FUN_0c07d904((*(int *)((t0 + 0x0))));
    return;
    }
}

int FUN_0c07e598(int a4, int a5)
{
    register int t0;
    register int t20;
    int t8;
    register int t18;

    t0 = (((struct o4_int *)0xC147740)->v);
    if ((t0 & 4) != 0) {
        t20 = t0;
        if ((*(int *)((a4 + 0x0))) == 0) {
            t8 = *(int *)((((((struct o0_int *)0xC147740)->v)) + 0x0));
            if ((0x1000000 & t8) != 0) {
                t18 = 0x3;
                if ((0x4 & t8) != 0) {
                } else {
                    t18 = 0x1;
                    if ((0x1 & t8) != 0) {
                        t18 = 0x2;
                    }
                }
                t20 = 0x4;
            } else {
                t18 = 0x1;
                if ((0x1 & t8) != 0) {
                    t18 = 0x2;
                }
                t20 = t0;
            }
            *(unsigned int *)((a4 + 0x0)) = t18;
        }
        return t20;
    }
    return FUN_0c07e57c(a4);
}

int strncat(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = a4;
    for (;;) {
        if ((*(signed char *)((t0 + 0x0))) == 0) {
            break;
        }
        t0 = (t0 + 0x1);
    }
    t1 = t0;
    if ((unsigned int)0x0 < (unsigned int)a6) {
        t2 = a5;
        t3 = 0x0;
        t4 = t0;
        for (;;) {
            t0 = *(signed char *)((t2 + 0x0));
            t2 = (t2 + 0x1);
            *(unsigned char *)((t4 + 0x0)) = t0;
            t4 = (t4 + 0x1);
            if ((unsigned char)t0 != 0) {
                t3 = (t3 + 0x1);
                if ((unsigned int)t3 >= (unsigned int)a6) {
                    break;
                }
                continue;
            }
            break;
        }
        t0 = t3;
        t1 = t4;
    } else {
        t0 = 0x0;
    }
    if ((unsigned int)t0 >= (unsigned int)a6) {
        *(unsigned char *)((t1 + 0x0)) = 0x0;
    }
    return a4;
}

int kmDiscardVertexBuffer(void)
{
    register int t0;

    t0 = kmiFBfreeEx(((((struct o0_int *)0xC2D0CA0)->v)), ((((struct o4_int *)0xC2D0CA0)->v)));
    if (t0 != 0) {
        return t0;
    }
    t0 = 0xC2D0CA8;
    for (;;) {
        if ((unsigned int)t0 >= (unsigned int)0xC2D0CBC) {
            break;
        }
        *(unsigned int *)((t0 + 0x0)) = 0x0;
        t0 = (t0 + 0x4);
    }
    return 0x0;
}

int syCfgSetSoundMode(int a4, int a5, int a6)
{
    register int t2;

    if ((*(int *)0xC173808) != 0) {
        if ((a4 != 0) && (a4 != 1)) {
            return 0xFFFFFFFF;
        }
        *(unsigned char *)0x8C00007E = a4;
        t2 = syBtCfgSet(0x2, (*(int *)0xC173808), a6);
        if (t2 == -1) {
            return 0xFFFFFFFF;
        }
        return 0x0;
    }
    return 0xFFFFFFFF;
}

int syBtExit(int a4, int a5, int a6, int a7)
{
    register int t0;

    *(unsigned int *)0xA05F811C = 0xFF;
    if ((unsigned char)(*(signed char *)0x8C0080FC) == 1) {
        if ((unsigned char)(*(signed char *)0x8C0080FE) == 1) {
            return ((int (*)(void))(0x8C008300))();
        }
        *(unsigned int *)0x8C000064 = 0x8C008000;
        t0 = *(int *)0x8C0000E0;
        return ((int (*)(int, int, int, int))(t0))(0x3, a5, a6, a7);
    }
    t0 = *(int *)0x8C0000E0;
    return ((int (*)(int, int, int, int))(t0))(0x1, a5, a6, a7);
}

int FUN_0c14fbe8(void)
{
    register int t0;

    t0 = FUN_0c14fbc2();
    if (t0 == 0) {
        return 0x0;
    }
    *(unsigned char *)((t0 + 0x1)) = 0x1;
    *(unsigned int *)((t0 + 0x4)) = 0x0;
    *(unsigned int *)((t0 + 0x18)) = 0x0;
    *(unsigned int *)((t0 + 0x1C)) = 0x0;
    *(unsigned int *)((t0 + 0x20)) = 0x0;
    *(unsigned int *)((t0 + 0x2C)) = 0x200;
    *(unsigned char *)((t0 + 0x2)) = 0x0;
    *(unsigned int *)((t0 + 0x8)) = 0x0;
    *(unsigned char *)((t0 + 0x0)) = 0x1;
    return t0;
}

int kdDevGetVibrationInfo(int a4, int a5)
{
    register int t0;

    t0 = kdDevGetFD(a5, 0x100);
    if (t0 == 0) {
        return 0xFFFFFFFF;
    }
    *(unsigned int *)((a4 + 0x0)) = (unsigned char)(*(signed char *)((t0 + 0x0)));
    *(unsigned int *)((a4 + 0x4)) = (unsigned char)(*(signed char *)((t0 + 0x1)));
    return 0x0;
}

int FUN_0c01e83e(int a4)
{
    int stk[1];
    register int t7;
    register float t3;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t7 = 0xFFFFFC19;
    if ((*(signed char *)(((int)stk + 0))) != 0) {
        t3 = FUN_0c070d90(((float)(*(signed char *)(((int)stk + 0))) * ((((struct o0_float *)0xC01E960)->v))));
        t7 = (int)(t3 * ((((struct o8_float *)0xC01E960)->v)));
    }
    return t7;
}

int FUN_0c01eea6(void)
{
    register int t0;
    register int t1;

    t0 = 0xC26ECC0;
    t1 = 0xC640000;
    for (;;) {
        *(unsigned int *)((t0 + 0x8)) = 0x0;
        *(unsigned int *)((t0 + 0x4)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0xC)) = 0x3E8;
        *(unsigned char *)((t0 + 0x0)) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = 0x0;
        *(unsigned int *)((t0 + 0x14)) = t1;
        t1 = (t1 + 0x2000);
        t0 = (t0 + 0x18);
        if ((int)t1 >= (int)0xC880000) {
            break;
        }
    }
    *(unsigned char *)((t0 + 0x0)) = 0x4;
    *(unsigned int *)((t0 + 0x8)) = 0x0;
    *(unsigned int *)((t0 + 0xC)) = 0x0;
    *(unsigned int *)((t0 + 0x4)) = 0xFFFFFFFF;
    *(unsigned int *)((t0 + 0x10)) = 0x0;
    *(unsigned int *)((t0 + 0x14)) = 0xC640000;
    return 0xC880000;
}

int FUN_0c01fc54(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    if ((int)a5 > 0) {
        t0 = a4;
        t1 = 0x0;
        for (;;) {
            t3 = *(int *)((t0 + 0x0));
            t0 = (t0 + 0x4);
            t2 = nlObjPutLoadTexture(t3, (*(int *)0xC123E50));
            t1 = (t1 + 0x1);
            if ((int)t1 >= (int)a5) {
                break;
            }
        }
        t0 = t2;
    }
    return t0;
}

int FUN_0c026e56(void)
{
    (((struct o0_uint *)0xC270B38)->v) = 0x2200;
    (((struct o4_uint *)0xC270B38)->v) = 0x2900;
    (((struct o8_float *)0xC270B38)->v) = 1.0f;
    (((struct oC_float *)0xC270B38)->v) = 1.0f;
    (((struct o10_float *)0xC270B38)->v) = 1.0f;
    (((struct o14_float *)0xC270B38)->v) = 1.0f;
    (((struct o18_float *)0xC270B38)->v) = 1.0f;
    (((struct o1C_float *)0xC270B38)->v) = 1.0f;
    (((struct o20_float *)0xC270B38)->v) = (*(float *)0xC026EE8);
    *(unsigned int *)0xC270BB8 = 0x0;
    return 0x20;
}

float FUN_0c040cf2(int a4, int a5)
{
    register float u2;
    register float u3;

    u2 = *(float *)((((a5 & 0x3) << 2) + 0xC0C0AF8));
    u3 = (*(float *)((0xC0C0AEC + ((a5 & 0x3) << 2))));
    u3 = u3 + u2 * (float)(FUN_0c062270());
    *(float *)0xC2AB7E0 = ((*(float *)0xC2AB7E0) + u3);
    return u2;
}


int FUN_0c05b724(int a4, int a5, float f4)
{
    register int t2;

    t2 = (a5 - (int)((float)((short)a5 - (short)a4) * f4));
    if ((int)(short)(a4 - a5) < (int)(0x8000 + (short)(a4 - a5))) {
        t2 = (a5 + (int)((float)(short)(a4 - a5) * f4));
    }
    return t2;
}

int FUN_0c062270(void)
{
    register int t0;

    t0 = *(int *)0xC1EC724;
    if (t0 != 14) {
        if (t0 == 15) {
            return 0x2;
        }
        t0 = FUN_0c061bae();
        if (t0 != 0) {
            return (*(int *)(((*(int *)0xC2B9CA4) + 0x4)));
        }
        return 0x0;
    }
    return 0x2;
}

void FUN_0c06ac1a(int a4, int a5, int a6, int a7)
{
    if (((int)a5 >= 0) && ((int)a5 <= (int)0x2)) {
        ((int (*)(int, int, int, int))((*(int *)(((a5 << 2) + 0xC111D18)))))(((*(int *)0xC2B9C2C) - 1), (*(int *)((((a4 - 35) << 2) + 0xC10E5D0))), a6, a7);
    return;
    }
}


int nlReloadPalette(int a4, int a5)
{
    register int t1;
    register int t2;

    t1 = *(int *)0xC2C4DB8;
    t2 = *(short *)(((t1 + ((a4 << 2) << 1)) + 0x4));
    if (t2 != 0) {
        return FUN_0c07215c((((*(short *)(((t1 + ((a4 << 2) << 1)) + 0x0))) << 2) << 2), a5, (((unsigned char)(*(signed char *)(((t1 + ((a4 << 2) << 1)) + 0x3))) << 2) << 2));
    }
    return t2;
}

int nlSysUseLatency2V(int a4, int a5, int a6, int a7)
{
    register int t1;

    if (((((struct o14_int *)0xC2BB490)->v)) == 1) {
        (((struct o0_uint *)0xC2BB490)->v) = 0x20;
        t1 = *(int *)0xC2BB438;
        *(unsigned int *)0xC2BB438 = (t1 | 0x10);
        (((struct oC_uint *)0xC2BB490)->v) = 0x2;
        return (t1 | 0x10);
    }
    return kmChangeLatencyModel(0x1, 0x20, a6, a7);
}

void FUN_0c071ae0(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;

    (((struct o4_uint *)0xC2BF91C)->v) = ((a4 + 0x1F) & 0xFFFFFFE0);
    t0 = a5;
    if ((int)a5 < 0) {
        t0 = 0x0;
    }
    (((struct o8_uint *)0xC2BF91C)->v) = t0;
    (((struct oC_uint *)0xC2BF91C)->v) = 0xFFFFFFFF;
    t1 = t0;
    t0 = ((a4 + 0x1F) & 0xFFFFFFE0);
    for (;;) {
        t2 = (int)t1 <= 0;
        t1 = (t1 - 1);
        if (t2) {
            break;
        }
        *(unsigned int *)((t0 + 0x0)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xFFFFFFFF;
        t0 = (t0 + 0x10);
    }
    (((struct o0_uint *)0xC2BF91C)->v) = 0x1;
}

int nlGetMatrix(int a4)
{
    register int t1;
    float u3[16];
    float u4[16];

    t1 = a4;
    if (a4 == 0) {
        t1 = (*(int *)0xC2BF948);
    }
    _builtin_st_ext((float (*)[4])u3);
    *(float *)((((t1 + 0x40) - 0x4) + 0x0)) = u3[15];
    *(float *)(((((t1 + 0x40) - 0x4) - 0x4) + 0x0)) = u3[14];
    *(float *)((((((t1 + 0x40) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[13];
    *(float *)(((((((t1 + 0x40) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[12];
    *(float *)((((((((t1 + 0x40) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[11];
    *(float *)(((((((((t1 + 0x40) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[10];
    *(float *)((((((((((t1 + 0x40) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[9];
    *(float *)(((((((((((t1 + 0x40) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[8];
    *(float *)((((((((((((t1 + 0x40) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[7];
    *(float *)(((((((((((((t1 + 0x40) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[6];
    *(float *)((((((((((((((t1 + 0x40) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[5];
    *(float *)(((((((((((((((t1 + 0x40) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[4];
    *(float *)((((((((((((((((t1 + 0x40) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[3];
    *(float *)(((((((((((((((((t1 + 0x40) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[2];
    *(float *)((((((((((((((((((t1 + 0x40) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[1];
    *(float *)(((((((((((((((((((t1 + 0x40) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[0];
    _builtin_st_ext((float (*)[4])u4);
    u4[0] = u3[0];
    u4[1] = u3[1];
    u4[2] = u3[2];
    u4[3] = u3[3];
    u4[4] = u3[4];
    u4[5] = u3[5];
    u4[6] = u3[6];
    u4[7] = u3[7];
    u4[8] = u3[8];
    u4[9] = u3[9];
    u4[10] = u3[10];
    u4[11] = u3[11];
    u4[12] = u3[12];
    u4[13] = u3[13];
    u4[14] = u3[14];
    u4[15] = u3[15];
    _builtin_ld_ext((float (*)[4])u4);
    return (((((((((((((((((t1 + 0x40) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4) - 0x4);
}

int nlGetMatrix33on44(int a4)
{
    float u0[16];
    float u1[16];

    if (a4 == 0) {
        return 0x0;
    }
    _builtin_st_ext((float (*)[4])u0);
    *(float *)((((a4 + 0x2C) - 0x4) + 0x0)) = u0[10];
    *(float *)(((((a4 + 0x2C) - 0x4) - 0x4) + 0x0)) = u0[9];
    *(float *)((((((a4 + 0x2C) - 0x4) - 0x4) - 0x4) + 0x0)) = u0[8];
    *(float *)((((((((a4 + 0x2C) - 0x4) - 0x4) - 0x4) - 4) - 0x4) + 0x0)) = u0[6];
    *(float *)(((((((((a4 + 0x2C) - 0x4) - 0x4) - 0x4) - 4) - 0x4) - 0x4) + 0x0)) = u0[5];
    *(float *)((((((((((a4 + 0x2C) - 0x4) - 0x4) - 0x4) - 4) - 0x4) - 0x4) - 0x4) + 0x0)) = u0[4];
    *(float *)((((((((((((a4 + 0x2C) - 0x4) - 0x4) - 0x4) - 4) - 0x4) - 0x4) - 0x4) - 4) - 0x4) + 0x0)) = u0[2];
    *(float *)(((((((((((((a4 + 0x2C) - 0x4) - 0x4) - 0x4) - 4) - 0x4) - 0x4) - 0x4) - 4) - 0x4) - 0x4) + 0x0)) = u0[1];
    *(float *)((((((((((((((a4 + 0x2C) - 0x4) - 0x4) - 0x4) - 4) - 0x4) - 0x4) - 0x4) - 4) - 0x4) - 0x4) - 0x4) + 0x0)) = u0[0];
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
    return ((((((((((((a4 + 0x2C) - 0x4) - 0x4) - 0x4) - 4) - 0x4) - 0x4) - 0x4) - 4) - 0x4) - 0x4) - 0x4);
}

int FUN_0c0755f0(int a4)
{
    int stk[3];
    register int t0;
    register int t4;

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    t0 = 0x0;
    for (;;) {
        *(int *)((int)stk + 0) = 0x0;
        t4 = *(int *)(((int)stk + 4));
        t0 = (t0 | (FUN_0c075450((*(int *)(((int)stk + 8))), 0x0, (*(int *)(((int)stk + 4))), (((int)stk + 0) + 0x4), 0x0)));
        if (t4 == 0) {
            break;
        }
    }
    return t0;
}

int nl_set_cnv_proj_pers(float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    register int t0;

    t0 = ((int (*)(int, float, float, float, float, float, float, float, float))(nlGetMatrix8))(0xC2BFC88, f4, f5, f6, f7, f8, f9, f10, f11);
    nlLoadRechangeMatrix(0xC2BFB70);
    nlMultiMatrix8(0xC2BFC88);
    t0 = ((int (*)(int))(nlGetMatrix8))(0xC2BFC08);
    t0 = ((int (*)(int))(nlGetMatrix8))(0xC2BFC48);
    return nlLoadMatrix8(0xC2BFC88);
}

int nlObjPutTrnsl(int a4, float f4)
{
    if (((*(int *)((a4 + 0x4))) & 2) == 0) {
        nlInvLightVector();
    }
    nlPushMatrix(0x0);
    nlMultiMatrixRevOrder8(0xC2BFC08);
    return nlobjput_sub_trnsl(a4);
}

int buFindFirstFileEx(int a4, int a5, int a6)
{
    register int t0;

    t0 = vmsfs_c_getstate(a4);
    if (t0 != 0) {
        return 0xFFFFFFFF;
    }
    return (vmsfs_findfirst_ex(a4, a5, a6));
}

int buGetFileInfo(int a4, int a5, int a6)
{
    register int t0;

    t0 = vmsfs_c_getstate(a4);
    if (t0 != 0) {
        return 0xFFFFFFFF;
    }
    return (vmsfs_fgetinfo(a4, a5, a6));
}

float nlLineClipPoint(int a4, int a5, int a6)
{
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    u0 = (((struct o8_float *)(a4))->v);
    u1 = *(float *)0xC2C4DBC;
    u2 = (((struct o8_float *)(a5))->v);
    (((struct o8_float *)(a6))->v) = u1;
    u3 = *(float *)((a4 + 0x0));
    u4 = u3;
    u4 = u4 + (((u1 - u0) / (u2 - u0))) * (((*(float *)((a5 + 0x0))) - u3));
    *(float *)((a6 + 0x0)) = u4;
    u3 = (((struct o4_float *)(a4))->v);
    u4 = u3;
    u4 = u4 + (((u1 - u0) / (u2 - u0))) * ((((((struct o4_float *)(a5))->v)) - u3));
    (((struct o4_float *)(a6))->v) = u4;
    return ((u1 - u0) / (u2 - u0));
}

int FUN_0c07ffbc(int a4, int a5, int a6)
{
    register int t7;
    register int t9;
    register int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;

    if (a6 == 0) {
        return 0x0;
    }
    t7 = a4;
    t9 = a5;
    if ((unsigned int)0x0 < (unsigned int)a6) {
        t0 = a4;
        t1 = 0x0;
        t2 = a5;
        for (;;) {
            t3 = *(signed char *)((t2 + 0x0));
            t2 = (t2 + 0x1);
            t4 = *(signed char *)((t0 + 0x0));
            t0 = (t0 + 0x1);
            if ((t4 == t3) && (t1 = (t1 + 0x1), (unsigned int)t1 < (unsigned int)a6)) continue;
            break;
        }
        t7 = t0;
        t9 = t2;
    }
    return ((unsigned char)(*(signed char *)(((t7 - 1) + 0x0))) - (unsigned char)(*(signed char *)(((t9 - 1) + 0x0))));
}

int FUN_0c09431e(int a4, int a5, int a6, int a7)
{
    register int t4;

    (((struct o20C_uint *)(a4))->v) = (((((struct o20C_int *)(a4))->v)) - 1);
    *(unsigned int *)((a5 + 0xC)) = 0x0;
    t4 = 0x118;
    if (((((struct o118_int *)(a5))->v)) != 0) {
        t4 = (((int (*)(int, int, int, int))(((((struct o118_int *)(a5))->v))))(a4, a5, a6, a7));
    }
    return t4;
}

int FUN_0c095b84(int a4, int a5, int a6)
{
    register int t7;
    register int t9;
    register int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;

    if (a6 == 0) {
        return 0x0;
    }
    t7 = a4;
    t9 = a5;
    if ((unsigned int)0x0 < (unsigned int)a6) {
        t0 = a4;
        t1 = 0x0;
        t2 = a5;
        for (;;) {
            t3 = *(signed char *)((t2 + 0x0));
            t2 = (t2 + 0x1);
            t4 = *(signed char *)((t0 + 0x0));
            t0 = (t0 + 0x1);
            if ((t4 == t3) && (t1 = (t1 + 0x1), (unsigned int)t1 < (unsigned int)a6)) continue;
            break;
        }
        t7 = t0;
        t9 = t2;
    }
    return ((unsigned char)(*(signed char *)(((t7 - 1) + 0x0))) - (unsigned char)(*(signed char *)(((t9 - 1) + 0x0))));
}

void pdVibGetUnitInfoCallback(int a4, int a5, int a6, int a7)
{
    register int t3;

    if ((*(int *)((((a4 * 0x1C) + 0xC2D18FC) + 0xC))) != 0) {
        t3 = pdVibSetUnitInfo(a4, a5, a6, a7, ((*(int *)((((a4 * 0x1C) + 0xC2D18FC) + 0x4)))), 0x0);
        ((int (*)(int, int, int, int))((*(int *)((((a4 * 0x1C) + 0xC2D18FC) + 0xC)))))(t3, (*(int *)((((a4 * 0x1C) + 0xC2D18FC) + 0x8))), a6, a7);
    return;
    }
}

void syExtChkClearG2TimeOut(void)
{
    register int t0;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    *(unsigned int *)0xA05F6908 = ((*(int *)0xA05F6908) | 0x8000000);
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
}

int kmiBGPlanePutColor(int a4, int a5, int a6)
{
    register int t9;
    register int t0;
    register int t3;

    t9 = a5;
    if ((0x2000000 & a4) != 0) {
        t0 = (a5 << 2);
        t9 = (a5 + 0x1);
        t3 = a6;
        if ((a4 & 0x400000) != 0) {
        } else {
            *(unsigned int *)(((a5 << 2) + 0xC300974)) = (0xFFFF0000 & a6);
            t0 = ((a5 + 0x1) << 2);
            t9 = ((a5 + 0x1) + 0x1);
            t3 = ((unsigned short)a6 << 16);
        }
        *(unsigned int *)((t0 + 0xC300974)) = t3;
    }
    return t9;
}

/* manual: r4-r7 and the three stack arguments go on to mpdrv_set_bwrite unchanged */
int kdSetBlockWrite(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    register int t0;

    t0 = mpdrv_set_bwrite(a4, a5, a6, a7, a8, a9, a10);
    if (((((struct o10E8_int *)((*(int *)0xC30817C)))->v)) != 0) {
        kdRecvFrame();
    }
    return t0;
}

void ADXSJD_Destroy(int a4)
{
    if (a4 != 0) {
        if ((*(int *)((a4 + 0x4))) != 0) {
            ADXB_Destroy((*(int *)((a4 + 0x4))));
        }
        ADXCRS_Lock();
        memset(a4, 0x0, 0x9C);
        ADXCRS_Unlock();
    return;
    }
}

int FUN_0c1624b8(int a4, int a5, int a6, int a7)
{
    if ((*(int *)((a4 + 0x14))) == 0) {
        *(unsigned int *)((a4 + 0x34)) = 0x0;
        *(unsigned int *)((a4 + 0xC)) = 0x0;
        *(unsigned char *)((a4 + 0x1)) = 0x3;
    } else {
        *(unsigned char *)((a4 + 0x1)) = 0x2;
        *(unsigned int *)((a4 + 0x34)) = 0x0;
        *(unsigned int *)((a4 + 0xC)) = (FUN_0c162464(a4, a5, a6, a7));
        *(unsigned char *)((a4 + 0x3)) = 0x0;
    }
    return 0x1;
}

int kmiErrorISR04(int a4, int a5, int a6, int a7)
{
    *(unsigned int *)0xA05F6908 = 0x4;
    (((struct oC_uint *)0xC306E00)->v) = (((((struct oC_int *)0xC306E00)->v)) + 0x1);
    *(unsigned int *)((((*(int *)0xC300C34) << 2) + 0xC300C1C)) = 0xFFFFFFFD;
    if ((*(int *)0xC300D7C) == 1) {
        (((struct o0_uint *)0xC306E00)->v) = (((((struct o0_int *)0xC306E00)->v)) + 0x1);
        kmiErrorRecover(0x0, a5, a6, a7);
    }
    return 0x0;
}

int syG2DmaResumeAll(void)
{
    register int t0;

    t0 = 0x0;
    for (;;) {
        syG2DmaResume((((*(int *)0xC1743EC) + 0x4) + t0));
        t0 = (t0 + 0x34);
        if ((unsigned int)t0 >= (unsigned int)0xD0) {
            break;
        }
    }
    *(unsigned int *)0xC306F7C = 0x0;
    return 0x0;
}

int syG2DmaSuspendAll(void)
{
    register int t0;

    t0 = 0x0;
    for (;;) {
        syG2DmaSuspend((((*(int *)0xC1743EC) + 0x4) + t0));
        t0 = (t0 + 0x34);
        if ((unsigned int)t0 >= (unsigned int)0xD0) {
            break;
        }
    }
    *(unsigned int *)0xC306F7C = 0x1;
    return 0x0;
}

int fmcalccrc(int a4, int a5, int a6, int a7)
{
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t0;
    register int t3;

    t4 = a4;
    t5 = a5;
    t6 = 0xFFFF;
    t7 = a7;
    for (;;) {
        t4 = (t4 - 1);
        if ((int)t4 < 0) {
            break;
        }
        t7 = (unsigned short)t6;
        t0 = t7;
        t3 = 0xFFFFFFF8;
        t0 = ((int)t0 << (int)t3);
        t3 = (*(signed char *)((t5 + 0x0)));
        t5 = (t5 + 0x1);
        t6 = t7;
        t6 = (t6 << 8);
        t3 = (unsigned char)t3;
        t0 = (t0 ^ t3);
        t0 = (t0 << 1);
        t6 = (t6 ^ ((*(short *)((0xC171AC4 + t0)))));
    }
    return (unsigned short)(~(unsigned short)t6);
}

int gdCiGetStat(int a4)
{
    int t1;

    t1 = gdFsGetStat((*(int *)((a4 + 0x4))));
    if (t1 != 2) {
        if (t1 == 1) {
            *(unsigned int *)((a4 + 0x8)) = 0x1;
        } else {
            if ((t1 != 0) && (t1 == 5)) {
                *(unsigned int *)((a4 + 0x8)) = 0x3;
            }
        }
    }
    return (*(int *)((a4 + 0x8)));
}

int gdCiChangeDir(int a4)
{
    register int t2;

    if (a4 == 0) {
        FUN_0c16c338(0xC1721A4, 0xC17454C, 0x1);
        FUN_0c16c2e2(0x0);
        return 0xFFFFFFFF;
    }
    t2 = gdFsChangeDir(a4);
    if (t2 != 0) {
        FUN_0c16c338(0xC1721A4, 0xC174554, 0x2);
        FUN_0c16c2e2(0x0);
        return 0xFFFFFFFF;
    }
    return 0x0;
}

int ADXB_CheckAiff(int a4)
{
    register int t0;

    t0 = FUN_0c07ffbc(a4, 0xC172F24, 0x4);
    if (t0 == 0) {
        t0 = FUN_0c07ffbc((a4 + 0x8), 0xC172F2C, 0x4);
        if (t0 == 0) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x0;
}

int ADXB_CheckWav(int a4)
{
    register int t0;

    t0 = FUN_0c07ffbc(a4, 0xC172F48, 0x4);
    if (t0 == 0) {
        t0 = FUN_0c07ffbc((a4 + 0x8), 0xC172F58, 0x4);
        if (t0 == 0) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x0;
}

void nlInitHeapMemory(int a4, int a5)
{
    (((struct oC_uint *)0xC177ED4)->v) = 0x0;
    (((struct o8_uint *)0xC177ED4)->v) = 0x0;
    (((struct o4_uint *)0xC177ED4)->v) = 0x0;
    (((struct o0_uint *)0xC177ED4)->v) = 0x0;
    (((struct o18_uint *)0xC177ED4)->v) = a4;
    (((struct o10_uint *)0xC177ED4)->v) = a4;
    (((struct o14_uint *)0xC177ED4)->v) = ((a4 + (a5 & 0xFFFFFFFC)) - 4);
    *(unsigned int *)((a4 + 0x0)) = ((a5 & 0xFFFFFFFC) - 8);
    *(unsigned int *)((a4 + 0x8)) = 0x0;
    *(unsigned int *)((a4 + 0x4)) = 0x0;
    *(unsigned int *)((((a4 + (a5 & 0xFFFFFFFC)) - 0x4) + 0x0)) = ((a5 & 0xFFFFFFFC) - 4);
}

int FUN_0c026c82(float f4, float f5, float f6)
{
    return FUN_0c076250((((((struct o0_float *)0xC270B40)->v)) * f4), (((((struct o4_float *)0xC270B40)->v)) * f5), (((((struct o8_float *)0xC270B40)->v)) * f6));
}

int FUN_0c036904(void)
{
    register int t0;

    if (((((struct o20_int *)0xC2A46AC)->v)) != 0) {
        t0 = FUN_0c0339fc(((((struct o20_int *)0xC2A46AC)->v)));
        (((struct o20_uint *)0xC2A46AC)->v) = 0x0;
        return t0;
    }
    if ((int)((((struct o0_int *)0xC2A46AC)->v)) <= (int)0x1) {
        return FUN_0c0368b4();
    }
    t0 = (((struct o0_int *)0xC2A46AC)->v);
    (((struct o0_uint *)0xC2A46AC)->v) = (t0 - 2);
    return (t0 - 2);
}

int FUN_0c046466(void)
{
    register int t1;

    (((struct o0_uint *)0xC12FAAC)->v) = ((((((struct o0_int *)0xC12FAAC)->v)) * 0x41C64E6D) + 0x3039);
    t1 = (((struct o4_int *)0xC12FAAC)->v);
    (((struct o4_uint *)0xC12FAAC)->v) = (t1 + 0x1);
    if ((int)(t1 + 0x1) > (int)0x64) {
        (((struct o4_uint *)0xC12FAAC)->v) = 0x0;
    }
    return (((unsigned int)((((struct o0_int *)0xC12FAAC)->v)) >> 16) & 0x7FFF);
}


int HomingPos1(int a4, int a5, int a6, int a7, int a8, float f4)
{
    int stk[12];

    stk[3] = a8;
    *(float *)(((int)stk + 8)) = f4;
    *(unsigned int *)(((int)stk + 4)) = a4;
    nlSubVector3op(0xC2ADE90, (((int)stk + 4) + 0xC), a4);
    nlScaleUnitVector(0xC2ADEA8, 0xC2ADE90, (*(float *)(((int)stk + 8))));
    return (nlAddVector((*(int *)(((int)stk + 4))), 0xC2ADEA8));
}

int FUN_0c05a37e(int a4, float f4)
{
    nlPushMatrix(0x0);
    thunk_FUN_0c0765b0();
    nlMultiMatrixRevOrder8(0xC2B8A30);
    FUN_0c075d70(a4, f4);
    return nlPopMatrix(0x1);
}

int FUN_0c06b3a6(int a4, int a5, int a6, int a7)
{
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t0;
    register int t9;
    register int t10;

    t1 = 0xC2BA6A8;
    t2 = 0xC2BA6A8;
    t3 = 0xC2BA6A8;
    t4 = 0xC2BA6A8;
    for (;;) {
        if ((*(int *)((t4 + 0x0))) != 0) {
            t0 = (((int (*)(int, int, int, int))((*(int *)((t3 + 0x0)))))(t1, t2, a6, a7));
        } else {
            t9 = t1;
            t10 = t2;
        }
        t4 = (t4 + 0x4);
        t1 = t9;
        t2 = t10;
        t3 = (t3 + 0x4);
        if ((unsigned int)t4 >= (unsigned int)0xC2BA6B8) {
            break;
        }
    }
    return t0;
}

int nlInvLightVector(void)
{
    nlTransposeMatrix();
    FUN_0c072290(0xC1474D0, 0xC2BF8C0);
    FUN_0c072290(0xC1474E0, 0xC2BF8B0);
    nlScaleUnitVector(0xC2BF8B0, 0xC2BF8B0, (*(float *)0xC076680));
    return nlTransposeMatrix();
}

int buGetLastError(int a4)
{
    register int t0;

    t0 = vmsfs_c_getstate(a4);
    if (t0 != 0) {
        return 0xFFFFFFFF;
    }
    return (*(int *)((0xC2C68F4 + (a4 << 2))));
}

int FUN_0c07f2e0(int a4)
{
    register int t0;

    t0 = FUN_0c07e42c(0x3);
    if (t0 != 0) {
        return 0xFFFFFFFD;
    }
    memcpy(a4, ((*(int *)0xC147740) + 0x78C), 0x4);
    return 0x0;
}

int FUN_0c07f39e(int a4)
{
    register int t0;

    t0 = FUN_0c07e42c(0x3);
    if (t0 != 0) {
        return 0xFFFFFFFD;
    }
    strncpy(a4, ((*(int *)0xC147740) + 0x7A4), 0x20);
    return 0x0;
}

int FUN_0c07f3d0(int a4)
{
    register int t0;

    t0 = FUN_0c07e42c(0x3);
    if (t0 != 0) {
        return 0xFFFFFFFD;
    }
    strncpy(a4, ((*(int *)0xC147740) + 0x7C4), 0x40);
    return 0x0;
}

int syRtcCompareDate(int a4, int a5)
{
    int stk[3];
    register int t4;
    register int t10;

    *(unsigned int *)(((int)stk + 8)) = a5;
    /* manual: each date is converted into a count on the stack (the original: a4 -> r15+4, a5 -> r15); the generator had dropped
       both calls' arguments */
    syRtcDateToCount(a4, ((int)stk + 4));
    syRtcDateToCount((*(int *)(((int)stk + 8))), ((int)stk + 0));
    t4 = *(int *)(((int)stk + 0));
    t10 = 0x0;
    if ((*(int *)(((int)stk + 4))) == t4) {
    } else {
        t10 = 0xFFFFFFFF;
        if ((unsigned int)(*(int *)(((int)stk + 4))) > (unsigned int)t4) {
            t10 = 0x1;
        }
    }
    return t10;
}

void pdExecPeripheralServer(void)
{
    if ((*(int *)0xC16FF10) == 0) {
        return;
    }
    pdExecPeripheralServerUser();
}

int FUN_0c14e8e4(int a4, int a5, int a6, int a7)
{
    register int t4;
    register int t7;

    if ((*(signed char *)((a4 + 0x2))) == 4) {
        FUN_0c165a7e(((((struct o94_int *)(a4))->v)));
        if ((*(int *)((a4 + 0x14))) != 0) {
            t4 = *(int *)((a4 + 0x14));
            t7 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t4 + 0x0))) + 0x14)))))(t4, a5, a6, a7);
        }
    }
    return ADXT_Stop(a4);
}

int adxf_ChkPrmPt(int a4, int a5)
{
    if (((int)a4 >= 0) && ((int)a4 < (int)0x100)) {
        if (a5 == 0) {
            FUN_0c1616ce(0xC1705CC);
            return 0xFFFFFFFD;
        }
        return 0x0;
    }
    FUN_0c1616ce(0xC170598);
    return 0xFFFFFFFD;
}

int FUN_0c165878(int a4)
{
    int stk[1];
    register int t4;

    if (a4 != 0) {
        FUN_0c16ba68(((int)stk + 0));
        FUN_0c165a7e(a4);
        *(unsigned char *)((a4 + 0x0)) = 0x0;
        memset(a4, 0x0, 0x438);
        t4 = (FUN_0c16ba80(((int)stk + 0)));
    }
    return t4;
}

int mpdrv_set_bread(int a4, int a5, int a6, int a7, int a8)
{
    register int t2;

    if (_builtin_tas((char *)(*(int *)0xC16A484)) == 0) {
        mpdrv_dpf(0xC171A6C);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_bread_ns(a4, a5, a6, a7, a8);
    *(unsigned char *)(((*(int *)0xC16A484) + 0x0)) = 0x0;
    return t2;
}

int mpdrv_set_getlerr(Stk4 s)
{
    register int t2;

    if (_builtin_tas((char *)(*(int *)0xC16A484)) == 0) {
        mpdrv_dpf(0xC171A6C);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_getlerr_ns(s.w[0]);
    *(unsigned char *)(((*(int *)0xC16A484) + 0x0)) = 0x0;
    return t2;
}

int gdCiSeek(int a4, int a5, int a6)
{
    int t1;

    t1 = gdFsSeek((*(int *)((a4 + 0x4))), a5, a6);
    if ((t1 != 0) && (t1 != -13)) {
        FUN_0c16c338(0xC17218C, 0xC17453C, 0x1);
        FUN_0c16c2e2(a4);
    }
    return gdCiTell(a4);
}

int cvFsClose(int a4, int a5, int a6, int a7)
{
    register int t7;

    if (a4 == 0) {
        return cvFsError(0xC17252C, a5, a6, a7);
    }
    if ((*(int *)(((*(int *)((a4 + 0x0))) + 0x14))) != 0) {
        t7 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((a4 + 0x0))) + 0x14)))))((*(int *)((a4 + 0x4))), a5, a6, a7);
        return FUN_0c16c856(a4);
    }
    return cvFsError(0xC172548, a5, a6, a7);
}

int cvFsExecServer(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t1 = 0xC30B854;
    t2 = 0xC30B854;
    for (;;) {
        t4 = *(int *)((t2 + 0x0));
        if ((t4 != 0) && (t0 = *(int *)((t4 + 0x0)), t0 != 0)) {
            t3 = (((int (*)(int, int, int, int))((*(int *)((t4 + 0x0)))))(t1, a5, a6, a7));
        } else {
            t4 = t1;
        }
        t2 = (t2 + 0x10);
        t1 = t4;
        if ((unsigned int)t2 >= (unsigned int)0xC30BA54) {
            break;
        }
    }
    return t3;
}

int ADXB_CheckAu(int a4)
{
    register int t0;

    t0 = FUN_0c07ffbc(a4, 0xC172F34, 0x4);
    if (t0 != 0) {
        t0 = FUN_0c07ffbc(a4, 0xC172F3C, 0x4);
        if (t0 == 0) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x1;
}

int FUN_0c016240(void)
{
    register int t3;
    register int t4;
    register int t5;
    register int t2;

    t3 = ((((struct o0_int *)0xC177D18)->v));
    t4 = 0x0;
    t5 = ((((struct o4_int *)0xC177D18)->v));
    for (;;) {
        if ((int)t4 >= (int)((((struct o8_int *)0xC177D18)->v))) {
            break;
        }
        t2 = (*(signed char *)((t5 + 0xC)));
        if (t2 != -1) {
            *(unsigned int *)((t3 + 0x0)) = 0x0;
        } else {
            *(unsigned int *)((t3 + 0x0)) = 0xFFFFFFFF;
        }
        t4 = (t4 + 0x1);
        t5 = (t5 + 0x14);
        t3 = (t3 + 0x18);
    }
    return t2;
}

int FUN_0c01e742(int a4)
{
    int stk[3];
    register int t2;
    register float u3;

    *(unsigned int *)(((int)stk + 8)) = a4;
    FUN_0c14e9a8((*(int *)(((a4 << 2) + 0xC1ECD64))), ((int)stk + 0), (((int)stk + 0) + 0x4));
    t2 = *(int *)(((int)stk + 0));
    u3 = *(float *)0xC01E828;
    *(unsigned int *)(((int)stk + 0)) = (int)((float)t2 * u3);
    return (int)((float)t2 * u3);
}

int gdc_GetStreamVoiceStat2(int a4)
{
    register int t1;

    t1 = FUN_0c14e916((*(int *)(((a4 << 2) + 0xC1ECD54))));
    if (((int)t1 > (int)0x1) && ((int)t1 < (int)0x5)) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c01ecaa(int a4)
{
    FUN_0c14ee68(((((struct o0_int *)0xC1ECD54)->v)), a4);
    FUN_0c14ee68(((((struct o4_int *)0xC1ECD54)->v)), a4);
    FUN_0c14ee68(((((struct o8_int *)0xC1ECD54)->v)), a4);
    return (FUN_0c14ee68(((((struct oC_int *)0xC1ECD54)->v)), a4));
}

int FUN_0c01ed38(int a4)
{
    int stk[3];
    register int t2;
    register float u3;

    *(unsigned int *)(((int)stk + 8)) = a4;
    FUN_0c14e9a8((*(int *)(((a4 << 2) + 0xC1ECD54))), ((int)stk + 0), (((int)stk + 0) + 0x4));
    t2 = *(int *)(((int)stk + 0));
    u3 = *(float *)0xC01EE38;
    *(unsigned int *)(((int)stk + 0)) = (int)((float)t2 * u3);
    return (int)((float)t2 * u3);
}


int FUN_0c054f24(void)
{
    (((struct o0_float *)0xC2B2EEC)->v) = 1.0f;
    (((struct o4_float *)0xC2B2EEC)->v) = 1.0f;
    (((struct o8_float *)0xC2B2EEC)->v) = 0.0f;
    (((struct oC_float *)0xC2B2EEC)->v) = 0.0f;
    (((struct o10_float *)0xC2B2EEC)->v) = 1.0f;
    (((struct o14_float *)0xC2B2EEC)->v) = 1.0f;
    (((struct o18_uint *)0xC2B2EEC)->v) = 0x0;
    (((struct o24_uint *)0xC2B2EEC)->v) = 0xA;
    (((struct o1C_float *)0xC2B2EEC)->v) = 1.0f;
    (((struct o20_uint *)0xC2B2EEC)->v) = 0x2;
    return 0x2C;
}

int FUN_0c05f3fe(int a4, int a5, int a6, float f4)
{
    register int t0;

    t0 = ((int (*)(int, int, int, float))(FUN_0c05f37e))(a4, a5, a6, f4);
    t0 = ((int (*)(int, int, int))(FUN_0c05f37e))(a4, (a5 + 0x1), (a6 + 0x4));
    return ((int (*)(int, int, int))(FUN_0c05f37e))(a4, (a5 + 0x2), (a6 + 0x8));
}

int FUN_0c065914(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(int *)((a4 + 0x0));
    t1 = (((struct o80_int *)(((a5 << 8) + t0)))->v);
    if (((int)t1 >= 0) && ((int)t1 < (int)0x13)) {
        t2 = ((int (*)(int, int, int, int))((*(int *)(((((((struct o80_int *)(((a5 << 8) + t0)))->v)) << 2) + 0xC10FBC4)))))(a4, ((a5 << 8) + t0), a6, a7);
    } else {
        t2 = t1;
    }
    return FUN_0c067718(((a5 << 8) + t0), t2);
}

int FUN_0c065704(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(int *)((a4 + 0x0));
    t1 = (((struct o80_int *)(((a5 << 8) + t0)))->v);
    if (((int)t1 >= 0) && ((int)t1 < (int)0x5)) {
        t1 = ((int (*)(int, int, int, int))((*(int *)(((((((struct o80_int *)(((a5 << 8) + t0)))->v)) << 2) + 0xC10FBB0)))))(((a5 << 8) + t0), a5, a6, a7);
    } else {
        t1 = a5;
    }
    return FUN_0c067718(((a5 << 8) + t0), t1);
}

void FUN_0c06a820(int a4, int a5, int a6, int a7)
{
    if (((int)a4 >= 0) && ((int)a4 < (int)0x3)) {
        ((int (*)(int, int, int, int))((*(int *)(((a4 << 2) + 0xC111478)))))((*(int *)((((a5 - 35) << 2) + 0xC10E5D0))), a6, a6, a7);
    return;
    }
}

int FUN_0c06b6c8(int a4)
{
    register int t1;

    (((struct o50_float *)(a4))->v) = (*(float *)0xC06B760);
    t1 = (int)((int)(a4 - 0xC2BA6C8) / (int)0x64);
    *(unsigned int *)((a4 + 0x4)) = ((t1 * 0x3C) + 0x78);
    *(unsigned int *)((a4 + 0x0)) = ((*(int *)((a4 + 0x0))) + 0x1);
    return ((t1 * 0x3C) + 0x78);
}

float nlCosec(int a4)
{
    register float t0;

    if (((unsigned short)a4 != 0) && ((unsigned short)a4 != 0x8000)) {
        t0 = nlSin((unsigned short)a4);
        return (1.0f / t0);
    }
    return (*(float *)0xC070AD8);
}

int buGetDiskInfo(int a4, int a5)
{
    register int t0;

    t0 = vmsfs_c_getstate(a4);
    if (t0 != 0) {
        return 0xFFFFFFFF;
    }
    return (vmsfs_getinfo(a4, a5));
}

int buFindFirstFile(int a4, int a5)
{
    register int t0;

    t0 = vmsfs_c_getstate(a4);
    if (t0 != 0) {
        return 0xFFFFFFFF;
    }
    return (vmsfs_findfirst(a4, a5));
}

int buFindNextFile(int a4, int a5)
{
    register int t0;

    t0 = vmsfs_c_getstate(a4);
    if (t0 != 0) {
        return 0xFFFFFFFF;
    }
    return (vmsfs_findnext(a4, a5));
}

int buGetDiskFree(int a4, int a5)
{
    register int t0;

    t0 = vmsfs_c_getstate(a4);
    if (t0 != 0) {
        return 0xFFFFFFFF;
    }
    return (vmsfs_diskfree(a4, a5));
}

int buIsExistFile(int a4, int a5)
{
    register int t0;

    t0 = vmsfs_c_getstate(a4);
    if (t0 != 0) {
        return 0xFFFFFFFF;
    }
    return (vmsfs_fisexist(a4, a5));
}
