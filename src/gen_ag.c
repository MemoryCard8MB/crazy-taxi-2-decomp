/* Straight-line functions with calls and guards (batch gen_ag): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o168_int { char p[0x168]; int v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_short { char p[0x1C]; short v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o1E_short { char p[0x1E]; short v; };
struct o2_short { char p[0x2]; short v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_float { char p[0x24]; float v; };
struct o24_short { char p[0x24]; short v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o24_ushort { char p[0x24]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o30_int { char p[0x30]; int v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o38_float { char p[0x38]; float v; };
struct o38_int { char p[0x38]; int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3C_int { char p[0x3C]; int v; };
struct o3C_uint { char p[0x3C]; unsigned int v; };
struct o3E_short { char p[0x3E]; short v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_uchar { char p[0x40]; unsigned char v; };
struct o41_uchar { char p[0x41]; unsigned char v; };
struct o42_ushort { char p[0x42]; unsigned short v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_int { char p[0x4C]; int v; };
struct o58_short { char p[0x58]; short v; };
struct o58_ushort { char p[0x58]; unsigned short v; };
struct o5A_short { char p[0x5A]; short v; };
struct o5A_ushort { char p[0x5A]; unsigned short v; };
struct o63_uchar { char p[0x63]; unsigned char v; };
struct o74_int { char p[0x74]; int v; };
struct o78_int { char p[0x78]; int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o80_int { char p[0x80]; int v; };
struct o84_int { char p[0x84]; int v; };
struct o84_uint { char p[0x84]; unsigned int v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
struct o9DC_int { char p[0x9DC]; int v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
struct oB_uchar { char p[0xB]; unsigned char v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uchar { char p[0xC]; unsigned char v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oFC0_uint { char p[0xFC0]; unsigned int v; };
struct oFCC_int { char p[0xFCC]; int v; };
struct oFCC_uint { char p[0xFCC]; unsigned int v; };
struct oFD8_int { char p[0xFD8]; int v; };
struct oFD8_uint { char p[0xFD8]; unsigned int v; };
struct oFDC_int { char p[0xFDC]; int v; };
struct oFDC_uint { char p[0xFDC]; unsigned int v; };
int ADXT_SetOutVol(int, int);
int FBCompQueue(int, int, int, int);
int FBSortQueue(int, int);
int FUN_0c018b00(int);
int FUN_0c018b22(int, int);
int FUN_0c018c96(int, int, int, int);
int FUN_0c01d190(void);
int FUN_0c01e83e(int);
int FUN_0c01ead0(int, int);
int FUN_0c01eaea(void);
int FUN_0c01f95a(void);
int FUN_0c02024c(void);
int FUN_0c027f28(int);
int FUN_0c027fbe(float, float);
float FUN_0c02806c(int);
int FUN_0c028196(void);
int FUN_0c02842e(int);
int FUN_0c030f66(int);
int FUN_0c03386a(int);
int FUN_0c0339fc(int);
int FUN_0c03e806(int, int);
int FUN_0c03f42e(int);
int FUN_0c040f22(int, float, float, float);
int FUN_0c040fb4(int, float, float, float);
int FUN_0c04bd7c(int);
int FUN_0c04bf14(void);
int FUN_0c04c03a(void);
int FUN_0c04e92c(float);
int FUN_0c058edc(int);
int FUN_0c058f64(int, int, int, int);
int FUN_0c05f44c(int, int);
int FUN_0c05f470(int, int, float, float);
int FUN_0c060210(int);
int FUN_0c061e7c(int);
int FUN_0c061f54(int, int);
int FUN_0c062270(void);
int FUN_0c06b3d8(int, int, int, int);
int FUN_0c06b686(int);
int FUN_0c06e5f2(void);
float FUN_0c06e7a0(int, float);
int FUN_0c06e990(int);
int FUN_0c06eab0(void);
int FUN_0c06f550(int, int, int);
int FUN_0c071730(int);
float FUN_0c072140(int);
int FUN_0c072b60(int);
extern int FUN_0c07ada0();
int FUN_0c07b6c0(int, int);
int FUN_0c07b6e6(int);
int FUN_0c07c8be(int);
int FUN_0c07d68e(int);
int FUN_0c07d864(int);
int FUN_0c07d974(void);
int FUN_0c07e42c(int);
int FUN_0c07e4b4(void);
int FUN_0c07ff00(void);
int FUN_0c080780(int, int);
int FUN_0c080782(int, int, float);
int FUN_0c14e916(int);
int FUN_0c14eb7e(int);
int FUN_0c15f33e(void);
int FUN_0c16ada2(int, ...);
int FUN_0c16ba68(int);
int FUN_0c16ba80(int);
int FUN_0c16ba98(int, int);
int FUN_0c16bb00(void);
int Init_Standard(void);
int KillColliObj(int);
int Voice_ShutUp(int);
extern float _builtin_fipr(float *, float *);
extern void _builtin_ftrv(float *, float *);
extern int _builtin_get_imask(void);
extern void _builtin_ld_ext(float (*)[4]);
extern void _builtin_set_imask(int);
extern void _builtin_st_ext(float (*)[4]);
extern int _builtin_tas(char *);
float _in_coss(float);
int buDeleteFile(int, int);
int buFbrDestroyServer(int, int, int, int);
int buGetLastError(int);
int buIsReady(int);
int buStat(int);
int camSetTarget(int, int);
int cvFsError(int, int, int, int);
int gdFsRead(int, int, int);
int gdFsReopenHn(int, int, int, int);
int gdc_FileLoad(int, int, int);
int gdc_FileLoadInit(void);
int gdc_VolStreamSong(int);
int kdDevGetFD(int, int);
int kdDevGetVibrationInfo(int, int);
int kdGetDeviceInfo(int);
int kdRecvFrame(void);
int kdSetHandler(int, int);
int kmGarbageCollectTexture(void);
int kmSetBorderColor(int, ...);
int kmSetFogTableColor(int, ...);
int kmSetFogVertexColor(int, ...);
int kmiMemCopy8(int, int, int);
int kmytex_ABSalloc(int, int, int, int, int, int);
int memset(int, int, int);
int mpdrv_dpf(int, ...);
int mpdrv_set_bwrite_ns(int, int, int, int, int, int, int);
int mwlRnaIsCopyEnd(int, int, int, int);
int mwlSbGetStreamParam(int, int, int);
int ndPuru2Check(int);
int nlAddVector(int, int);
int nlCloseEvent(int);
int nlCreateTextureParamA(int);
int nlDispStripFreeTexture(int);
float nlFraction(float);
int nlFree(int);
int nlGetAverageVector(int, int, int, float, float);
int nlGetMatrix(int);
int nlObjPutUseViewMatrix(int);
int nlPushMatrix(int);
int nlRenderTextureEnd(int, int, int, int, int, int, int, int, int);
int nlSpriteFreeTexture(int, int);
int nlSubVector3op(int, int, int);
int nlUnitMatrix(void);
int pdGetPeripheral(int);
int pdVibStart(int, int, int);
int pdVmsLcdWrite1(int, int);
int pfSize(float, float);
int strlen(int);
int strncat(int, int, int);
int strncpy(int, int, int);
int syG2DmaStop(int);
int vmsfs_c_getstate(int);
int vmsfs_xfind(int, int);
int vmsio_ismount(int);
int vsprintf(int, int, int);
int mwlRnaWaitTransEnd(int a4, int a5, int a6, int a7);
int FUN_0c048ff8(int a4);
int mwSbGetTrnsStat(int a4, int a5);
int FUN_0c16c5d8(int a4);
int FUN_0c16c70a(int a4, int a5);
int GS_GuestEject(void);
int gdc_CourseTexFreeOnce(int a4);
void FUN_0c0310f4(void);
void FUN_0c03eefe(int a4);
int FUN_0c04bcce(void);
int FUN_0c04e152(int a4, int a5, int a6);
int FUN_0c04f41c(void);
int FUN_0c04f4d8(void);
int FUN_0c04fcf4(void);
int FUN_0c052f8c(void);
int pfTextCenterPut(int a4, int a5, int a6);
int FUN_0c057f3c(int a4);
float nlMultiMatrixRevOrder(int a4);
int nlPopMatrix(int a4);
int nlobjput_sub(int a4);
int buFindExecFile(int a4, int a5);
int nlobjput_sub_trnsl(int a4, float f4);
int nlMvLoadFlatMatrix(void);
int nlMvGetFaceVerts(int a4, int a5, int a6, int a7);
int FUN_0c07c87e(int a4, int a5);
int FUN_0c07d800(int a4);
int vmsfs_c_execcallback(int a4, int a5, int a6);
int ADXT_IsIbufSafety(int a4, int a5, int a6, int a7);
int kmiFBSortQueue(void);
int kmyConvertAddress32to64(int a4);
int FUN_0c15ef5c(void);
int fmMngWrite(int a4, int a5);
int mwRnaGetPitch(int a4, int a5, int a6);
int syG2DmaSuspend(int a4);
int FUN_0c019d4a(int a4);
int FUN_0c01b9c4(void);
int FUN_0c020b54(void);
int PutAdvLogoSprite(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8);
float FUN_0c02d37c(void);
int FUN_0c031ede(int a4, int a5);
int FUN_0c0311b4(float f4);
int FUN_0c033430(int a4);
int FUN_0c035a20(int a4);
int FUN_0c0436b8(int a4);
int FUN_0c04ba04(int a4);
int FUN_0c050600(void);
int FUN_0c05a8c4(void);
int Voice_Execute(void);
float FUN_0c05d118(int a4, int a5, float f4);
int FUN_0c06ce0a(int a4);
int FUN_0c06e626(void);
int nlCommonTextureGarbageCollection(void);
void buDisableServer(void);
int FUN_0c07f484(int a4);
int strncmp(int a4, int a5, int a6);
int vmsfs_c_progress(int a4, int a5, int a6, int a7);
int gdFsReadWG(int a4, int a5, int a6);
int _pd_peripheral_set_null(int a4);
int kmiABSalloc(int a4, int a5);
void kmiDefaultFatalErrorCallback(int a4);
int kmChangeContextFilterMode(int a4);
int FUN_0c161340(int a4, int a5, int a6);
void kmiDACControl(void);
int mwlSbGetFilter(int a4, int a5, int a6);
int FUN_0c16bb08(void);
int FUN_0c16cf34(int a4, int a5, int a6, int a7);
int cvFsGetMaxByteRate(int a4, int a5, int a6, int a7);
int cvFsGetDevName(int a4, int a5, int a6, int a7);
int gdc_GetStreamSongTotalTime(int a4);
int gdc_StreamVoiceVol(int a4, int a5);
int CalcHomingVector(int a4);
int FUN_0c0331b8(int a4, int a5);
int FUN_0c036936(float f4);
int FUN_0c04b432(int a4);
int FUN_0c053c5c(void);
int lcdSync(int a4);
int FUN_0c06221c(int a4, int a5);
int FUN_0c061f7e(int a4, int a5);
int nlPrintf(Stk3 s);
void nlQuickInvertMatrix(void);
int FUN_0c07ba56(int a4);
int FUN_0c07d5da(void);
int FUN_0c07e3d0(int a4);
int FUN_0c07f8ca(int a4);
int vmsfs_ismount(int a4);
int buFbrExit(int a4, int a5, int a6, int a7);
int syRtcMakeDayOfWeek(int a4, int a5, int a6);
int pdVibGetInfo(int a4, int a5);
int SearchUsed(int a4, int a5);
int kmiFBGarbageCollect(void);
int kmiCalcTABufferSize(int a4);
int syG2DmaClose(int a4);
int cvFsGetStat(int a4, int a5, int a6, int a7);
int cvFsGetSctLen(int a4, int a5, int a6, int a7);
int FUN_0c01a166(int a4);
int FUN_0c040dc8(int a4, int a5);
int FUN_0c040ec4(int a4, int a5);
int selectLoadAxes(void);
int Put_Remain_Time_Add(int a4, int a5);
int FUN_0c0690f0(void);
int FUN_0c06b640(void);
int FUN_0c0719e0(int a4);
int FUN_0c071a20(int a4);
int FUN_0c07215c(int a4, int a5, int a6);
int nlInitMatrixStack(int a4, int a5, int a6);
int FUN_0c077bcc(int a4);
int FUN_0c07b786(void);
int vmsfs_setdevicetype(int a4);
int vmsfs_resetwork(int a4);
float cos(float f4);
int _duchek(float f4, float f5);
int kmiPutGlobalParam(void);
int syTmrGenSetClock(int a4);
int kdDevGetTimerInfo(int a4, int a5);
int FUN_0c1616f4(int a4, int a5, int a6, int a7);
int mpdrv_hreset(int a4);
int mpdrv_sdckbdisable(int a4);
int mpdrv_set_bwrite(int a4, int a5, int a6, int a7, int a8, int a9, int a10);

int mwlRnaWaitTransEnd(int a4, int a5, int a6, int a7)
{
    register int t2;
    register int t3;
    register int t0;
    register int t1;

    *(unsigned int *)0xC174330 = 0x0;
    t2 = 0x0;
    t3 = 0x0;
    for (;;) {
        if ((int)t3 >= (int)0xC8) {
            break;
        }
        t2 = a4;
        t0 = (mwlRnaIsCopyEnd(t2, a5, a6, a7));
        if (t0 != 1) {
            t2 = 0x1388;
            for (;;) {
                t2 = (t2 - 0x1);
                if (t2 == 0) {
                    break;
                }
            }
            t1 = (*(int *)0xC174330);
            t3 = (t3 + 0x1);
            t1 = (t1 + 0x1);
            *(unsigned int *)0xC174330 = t1;
            continue;
        }
        break;
    }
    return t0;
}

int FUN_0c048ff8(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t0 = strlen(a4);
    t1 = 0xC2ADA90;
    for (;;) {
        *(unsigned int *)((t1 + 0x0)) = t0;
        t1 = (t1 + 0x4);
        if ((unsigned int)t1 > (unsigned int)0xC2ADE8C) {
            break;
        }
    }
    t1 = t0;
    if ((int)(t0 - 1) > 0) {
        t2 = (t0 - 1);
        t3 = a4;
        t4 = 0x0;
        for (;;) {
            t5 = *(signed char *)((t3 + 0x0));
            t3 = (t3 + 0x1);
            t4 = (t4 + 0x1);
            *(unsigned int *)((0xC2ADA90 + (t5 << 2))) = t2;
            t2 = (t2 - 1);
            if ((int)t4 >= (int)(t0 - 1)) {
                break;
            }
        }
        t1 = (t5 << 2);
    }
    return t1;
}

int mwSbGetTrnsStat(int a4, int a5)
{
    register int t1;
    register int t11;

    t1 = FUN_0c07d864((*(int *)((((a5 << 2) + (a4 + 0x2C)) + 0x0))));
    t11 = 0x1;
    if (t1 == 0x100) {
    } else {
        t11 = 0x2;
        if (t1 == 0x101) {
        } else {
            FUN_0c16ada2(0xC17205C);
            t11 = 0x0;
        }
    }
    return t11;
}

int FUN_0c16c5d8(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t1 = strlen(a4);
    if ((int)(t1 + 0x1) > 0) {
        t2 = a4;
        t3 = 0x0;
        t4 = a4;
        for (;;) {
            t5 = *(signed char *)((t4 + 0x0));
            t4 = (t4 + 0x1);
            if (((int)t5 >= (int)0x61) && (t0 = 0x7A, (int)t5 <= (int)t0)) {
                t5 = (*(signed char *)((t2 + 0x0)));
                t5 = (t5 - 32);
                *(unsigned char *)((t2 + 0x0)) = t5;
            }
            t3 = (t3 + 0x1);
            t2 = (t2 + 0x1);
            if ((int)t3 >= (int)(t1 + 0x1)) {
                break;
            }
        }
    }
    return 0x61;
}

int FUN_0c16c70a(int a4, int a5)
{
    register int t2;
    register int t0;
    register int t1;

    t2 = 0x0;
    if ((unsigned int)0xC30B854 < (unsigned int)0xC30BA54) {
        t0 = 0xC30B854;
        for (;;) {
            t1 = strncmp(a4, (t0 + 0x4), a5);
            if (t1 == 0) {
                break;
            }
            t0 = (t0 + 0x10);
            if ((unsigned int)t0 >= (unsigned int)0xC30BA54) {
                return 0x0;
            }
        }
        t2 = 0x1;
    }
    return t2;
}

int GS_GuestEject(void)
{
    int t1;
    int t5;

    (((struct o14_uint *)0xC1ECCAC)->v) = 0x0;
    (((struct o0_uint *)0xC1ECCEC)->v) = 0x0;
    (((struct o0_uint *)0xC1ECCAC)->v) = 0x0;
    if ((((((struct o10_int *)0xC1ECCEC)->v)) != 0) && (t1 = (((struct o14_int *)0xC1ECCEC)->v), (int)t1 > 0)) {
        (((struct o14_uint *)0xC1ECCEC)->v) = (((((struct o14_int *)0xC1ECCEC)->v)) - 1);
        (((struct o10_uint *)0xC1ECCEC)->v) = 0x0;
    }
    if ((((((struct o3C_int *)0xC1ECCAC)->v)) != 0) && (t5 = (((struct o38_int *)0xC1ECCAC)->v), (int)t5 > 0)) {
        (((struct o38_uint *)0xC1ECCAC)->v) = (((((struct o38_int *)0xC1ECCAC)->v)) - 1);
        (((struct o3C_uint *)0xC1ECCAC)->v) = 0x0;
    }
    return 0x40;
}

int gdc_CourseTexFreeOnce(int a4)
{
    register int t0;
    register int t1;
    register int t3;

    t0 = FUN_0c06eab0();
    t1 = 0x64;
    for (;;) {
        nlDispStripFreeTexture(a4);
        t3 = FUN_0c06eab0();
        if ((unsigned int)t3 > (unsigned int)t0) {
            break;
        }
        t1 = (t1 - 1);
        if ((int)t1 <= 0) {
            return 0x0;
        }
    }
    return 0x1;
}

void FUN_0c0310f4(void)
{
    int stk[1];
    register int t10;
    register int t11;

    t10 = *(int *)0xC12A5EC;
    if (t10 != 0) {
        if (t10 != 2) {
            if (t10 != 1) {
                if (t10 != -1) {
                } else {
                    *(unsigned int *)0xC12A5EC = 0x0;
                }
            } else {
                *(unsigned int *)0xC12A5EC = 0x2;
            }
            t11 = 0xC12A5EC;
        } else {
            FUN_0c030f66(0x2);
        }
        nlRenderTextureEnd(t10, t11, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16));
        FUN_0c030f66(0x0);
    return;
    }
}

void FUN_0c03eefe(int a4)
{
    if (a4 == 0) {
        *(unsigned int *)0xC2A4F94 = 0x0;
        return;
    }
    if (((*(int *)0xC2A4F94) & 47) != 0) {
        FUN_0c0339fc(0xD);
    }
    if (((*(int *)0xC2A4F94) & 16) != 0) {
        Voice_ShutUp(0x0);
        FUN_0c03e806(0x68, 0x78);
        *(unsigned int *)0xC2A4F94 = ((*(int *)0xC2A4F94) & 0xFFFFFFEF);
    }
}

int FUN_0c04bcce(void)
{
    int t0;
    register int t1;

    t1 = (((struct o4_int *)0xC2ADEC0)->v);
    if (t1 != -1) {
        *(unsigned int *)0xC2ADF64 = t1;
    }
    (((struct o4_uint *)0xC2ADEC0)->v) = (FUN_0c04bd7c(0xC175930));
    FUN_0c04bf14();
    if (((*(int *)0xC1EC71C) == 0) && (t0 = (((struct o4_int *)0xC2ADEC0)->v), t0 == -1)) {
        (((struct o4_uint *)0xC2ADEC0)->v) = (*(int *)0xC2ADF64);
    }
    t0 = FUN_0c04c03a();
    (((struct o0_uint *)0xC2ADEC0)->v) = t0;
    return t0;
}

int FUN_0c04e152(int a4, int a5, int a6)
{
    if (a5 != -1) {
        (((struct o40_uchar *)(a4))->v) = a5;
    }
    if (a6 != -1) {
        (((struct o41_uchar *)(a4))->v) = a6;
    }
    (((struct o44_uint *)(a4))->v) = (*(int *)(((*(int *)((((unsigned char)(*(signed char *)(((0x41 + a4) + 0x0))) << 2) + (*(int *)((0xC131728 + ((unsigned char)(*(signed char *)((a4 + 0x40))) << 2))))))) + 0x0)));
    (((struct o48_float *)(a4))->v) = 0.0f;
    (((struct o42_ushort *)(a4))->v) = 0x300;
    return 0x42;
}

int FUN_0c04f41c(void)
{
    (((struct o8_float *)0xC2B1BA8)->v) = (*(float *)0xC04F624);
    (((struct o0_float *)0xC2B1BA8)->v) = 0.0f;
    (((struct o4_float *)0xC2B1BA8)->v) = 0.0f;
    (((struct oC_float *)0xC2B1BA8)->v) = 1.0f;
    (((struct o10_float *)0xC2B1BA8)->v) = 1.0f;
    (((struct o14_float *)0xC2B1BA8)->v) = 0.0f;
    (((struct o18_float *)0xC2B1BA8)->v) = 0.0f;
    (((struct o1C_float *)0xC2B1BA8)->v) = 1.0f;
    (((struct o20_float *)0xC2B1BA8)->v) = 1.0f;
    (((struct o24_uint *)0xC2B1BA8)->v) = 0x0;
    (((struct o30_uint *)0xC2B1BA8)->v) = 0x20005;
    (((struct o28_float *)0xC2B1BA8)->v) = 1.0f;
    (((struct o2C_uint *)0xC2B1BA8)->v) = 0x2;
    return 0x2C;
}

int FUN_0c04f4d8(void)
{
    (((struct o0_float *)0xC2B1C98)->v) = 0.0f;
    (((struct o4_float *)0xC2B1C98)->v) = 0.0f;
    (((struct o8_float *)0xC2B1C98)->v) = (*(float *)0xC04F624);
    (((struct oC_float *)0xC2B1C98)->v) = 1.0f;
    (((struct o10_float *)0xC2B1C98)->v) = 1.0f;
    (((struct o14_float *)0xC2B1C98)->v) = 0.0f;
    (((struct o18_float *)0xC2B1C98)->v) = 0.0f;
    (((struct o1C_float *)0xC2B1C98)->v) = 1.0f;
    (((struct o20_float *)0xC2B1C98)->v) = 1.0f;
    (((struct o24_uint *)0xC2B1C98)->v) = 0x0;
    (((struct o30_uint *)0xC2B1C98)->v) = 0xA;
    (((struct o28_float *)0xC2B1C98)->v) = 1.0f;
    (((struct o2C_uint *)0xC2B1C98)->v) = 0x2;
    return 0x2C;
}

int FUN_0c04fcf4(void)
{
    (((struct o0_float *)0xC2B26D4)->v) = 0.0f;
    (((struct o4_float *)0xC2B26D4)->v) = 0.0f;
    (((struct o8_float *)0xC2B26D4)->v) = 0.200000003f;
    (((struct oC_float *)0xC2B26D4)->v) = 1.0f;
    (((struct o10_float *)0xC2B26D4)->v) = 1.0f;
    (((struct o14_float *)0xC2B26D4)->v) = 0.0f;
    (((struct o18_float *)0xC2B26D4)->v) = 0.0f;
    (((struct o1C_float *)0xC2B26D4)->v) = 1.0f;
    (((struct o20_float *)0xC2B26D4)->v) = 1.0f;
    (((struct o24_uint *)0xC2B26D4)->v) = 0x0;
    (((struct o30_uint *)0xC2B26D4)->v) = 0xA;
    (((struct o28_float *)0xC2B26D4)->v) = 1.0f;
    (((struct o2C_uint *)0xC2B26D4)->v) = 0x2;
    return 0x2C;
}

int FUN_0c052f8c(void)
{
    (((struct o0_float *)0xC2B2C00)->v) = 0.0f;
    (((struct o4_float *)0xC2B2C00)->v) = 0.0f;
    (((struct o8_float *)0xC2B2C00)->v) = (*(float *)0xC0530A4);
    (((struct oC_float *)0xC2B2C00)->v) = 1.0f;
    (((struct o10_float *)0xC2B2C00)->v) = 1.0f;
    (((struct o14_float *)0xC2B2C00)->v) = 0.0f;
    (((struct o18_float *)0xC2B2C00)->v) = 0.0f;
    (((struct o1C_float *)0xC2B2C00)->v) = 1.0f;
    (((struct o20_float *)0xC2B2C00)->v) = 1.0f;
    (((struct o24_uint *)0xC2B2C00)->v) = 0x0;
    (((struct o30_uint *)0xC2B2C00)->v) = 0xA;
    (((struct o28_float *)0xC2B2C00)->v) = 1.0f;
    (((struct o2C_uint *)0xC2B2C00)->v) = 0x2;
    return 0x2C;
}

int pfTextCenterPut(int a4, int a5, int a6)
{
    register float u2;

    FUN_0c028196();
    u2 = ((FUN_0c02806c(a6)) * 0.5f);
    FUN_0c027fbe(((float)a4 - u2), (float)a5);
    return FUN_0c02842e(a6);
}

int FUN_0c057f3c(int a4)
{
    register int t0;
    register int t1;

    t0 = ndPuru2Check(a4);
    t1 = t0;
    if (t0 != 0) {
        (((struct o9_uchar *)0xC2B32B0)->v) = 0x0;
        (((struct oA_uchar *)0xC2B32B0)->v) = 0x0;
        (((struct oB_uchar *)0xC2B32B0)->v) = 0x0;
        (((struct oC_uchar *)0xC2B32B0)->v) = 0x0;
        t0 = pdVibStart(a4, 0xC2B32B8, 0x1);
        if (t0 == 0) {
            (((struct o4_uint *)0xC2B32B0)->v) = 0x0;
            (((struct o0_uint *)0xC2B32B0)->v) = 0x0;
        }
        t1 = t0;
    }
    return t1;
}

float nlMultiMatrixRevOrder(int a4)
{
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u7;
    register float u8;
    register float u9;
    register float u10;
    register float u11;
    register float u12;
    register float u13;
    register float u14;
    register float u15;
    float u16[16];
    float u17[4];
    float u18[16];
    float u19[16];
    float u20[4];
    float u21[16];
    float u22[4];
    float u23[16];
    float u24[4];
    float u25[16];

    u0 = *(float *)((a4 + 0x0));
    u1 = (((struct o4_float *)(a4))->v);
    u2 = (((struct o4_float *)((a4 + 0x4)))->v);
    u3 = (((struct o4_float *)(((a4 + 0x4) + 0x4)))->v);
    u4 = (((struct o4_float *)((((a4 + 0x4) + 0x4) + 0x4)))->v);
    u5 = (((struct o4_float *)(((((a4 + 0x4) + 0x4) + 0x4) + 0x4)))->v);
    u6 = (((struct o4_float *)((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4)))->v);
    u7 = (((struct o4_float *)(((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4)))->v);
    u8 = (((struct o4_float *)((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4)))->v);
    u9 = (((struct o4_float *)(((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4)))->v);
    u10 = (((struct o4_float *)((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4)))->v);
    u11 = (((struct o4_float *)(((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4)))->v);
    u12 = (((struct o4_float *)((((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4)))->v);
    u13 = (((struct o4_float *)(((((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4)))->v);
    u14 = (((struct o4_float *)((((((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4)))->v);
    u15 = (((struct o4_float *)(((((((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4)))->v);
    u16[0] = u0;
    u16[1] = u1;
    u16[2] = u2;
    u16[3] = u3;
    u16[4] = u4;
    u16[5] = u5;
    u16[6] = u6;
    u16[7] = u7;
    u16[8] = u8;
    u16[9] = u9;
    u16[10] = u10;
    u16[11] = u11;
    u16[12] = u12;
    u16[13] = u13;
    u16[14] = u14;
    u16[15] = u15;
    _builtin_st_ext((float (*)[4])u18);
    u17[0] = u18[0];
    u17[1] = u18[1];
    u17[2] = u18[2];
    u17[3] = u18[3];
    _builtin_ld_ext((float (*)[4])u16);
    _builtin_ftrv(u17, u17);
    u19[0] = u0;
    u19[1] = u1;
    u19[2] = u2;
    u19[3] = u3;
    u19[4] = u4;
    u19[5] = u5;
    u19[6] = u6;
    u19[7] = u7;
    u19[8] = u8;
    u19[9] = u9;
    u19[10] = u10;
    u19[11] = u11;
    u19[12] = u12;
    u19[13] = u13;
    u19[14] = u14;
    u19[15] = u15;
    u20[0] = u18[4];
    u20[1] = u18[5];
    u20[2] = u18[6];
    u20[3] = u18[7];
    _builtin_ld_ext((float (*)[4])u19);
    _builtin_ftrv(u20, u20);
    u21[0] = u0;
    u21[1] = u1;
    u21[2] = u2;
    u21[3] = u3;
    u21[4] = u4;
    u21[5] = u5;
    u21[6] = u6;
    u21[7] = u7;
    u21[8] = u8;
    u21[9] = u9;
    u21[10] = u10;
    u21[11] = u11;
    u21[12] = u12;
    u21[13] = u13;
    u21[14] = u14;
    u21[15] = u15;
    u22[0] = u18[8];
    u22[1] = u18[9];
    u22[2] = u18[10];
    u22[3] = u18[11];
    _builtin_ld_ext((float (*)[4])u21);
    _builtin_ftrv(u22, u22);
    u23[0] = u0;
    u23[1] = u1;
    u23[2] = u2;
    u23[3] = u3;
    u23[4] = u4;
    u23[5] = u5;
    u23[6] = u6;
    u23[7] = u7;
    u23[8] = u8;
    u23[9] = u9;
    u23[10] = u10;
    u23[11] = u11;
    u23[12] = u12;
    u23[13] = u13;
    u23[14] = u14;
    u23[15] = u15;
    u24[0] = u18[12];
    u24[1] = u18[13];
    u24[2] = u18[14];
    u24[3] = u18[15];
    _builtin_ld_ext((float (*)[4])u23);
    _builtin_ftrv(u24, u24);
    _builtin_st_ext((float (*)[4])u25);
    u25[0] = u17[0];
    u25[1] = u17[1];
    u25[2] = u17[2];
    u25[3] = u17[3];
    u25[4] = u20[0];
    u25[5] = u20[1];
    u25[6] = u20[2];
    u25[7] = u20[3];
    u25[8] = u22[0];
    u25[9] = u22[1];
    u25[10] = u22[2];
    u25[11] = u22[3];
    u25[12] = u24[0];
    u25[13] = u24[1];
    u25[14] = u24[2];
    u25[15] = u24[3];
    _builtin_ld_ext((float (*)[4])u25);
    return u0;
}

int nlPopMatrix(int a4)
{
    register int t0;
    register int t2;
    register int t3;
    register int t4;
    register int t6;
    float u10[16];

    t0 = a4;
    if ((int)a4 <= 0) {
        t0 = 0x1;
    }
    t2 = (((struct o0_short *)0xC2BF940)->v);
    t3 = (((struct o2_short *)0xC2BF940)->v);
    t4 = (t2 - t0);
    if ((int)t2 < (int)t0) {
        t4 = 0x0;
    }
    t6 = (((struct o4_int *)0xC2BF940)->v);
    (((struct o0_ushort *)0xC2BF940)->v) = t4;
    if ((int)t4 < (int)t3) {
        (((struct o8_uint *)0xC2BF940)->v) = (t6 + ((unsigned int)(t4 << 8) >> 2));
    }
    u10[0] = (*(float *)((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x0) + 4)));
    u10[1] = (*(float *)(((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x0)));
    u10[2] = (*(float *)(((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x0) + 4)));
    u10[3] = ((((struct o8_float *)((t6 + ((unsigned int)(t4 << 8) >> 2))))->v));
    u10[4] = (*(float *)((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x0) + 4)));
    u10[5] = ((((struct o8_float *)(((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8)))->v));
    u10[6] = (*(float *)(((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
    u10[7] = ((((struct o8_float *)((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8)))->v));
    u10[8] = (*(float *)((((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
    u10[9] = ((((struct o8_float *)(((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8)))->v));
    u10[10] = (*(float *)(((((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
    u10[11] = ((((struct o8_float *)((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8)))->v));
    u10[12] = (*(float *)((((((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
    u10[13] = ((((struct o8_float *)(((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8)))->v));
    u10[14] = (*(float *)(((((((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
    u10[15] = ((((struct o8_float *)((((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8)))->v));
    _builtin_ld_ext((float (*)[4])u10);
    return ((((int)t2 >= (int)t0)) ? 1 : 0);
}

int nlobjput_sub(int a4)
{
    register int t0;

    t0 = *(int *)((a4 + 0x0));
    if ((t0 == 0)) {
        FUN_0c080780(a4, 0xC2BF8B0);
        return (nlPopMatrix(0x1));
    }
    if (t0 == 1) {
        FUN_0c080780(a4, 0xC2BF8B0);
        return (nlPopMatrix(0x1));
    }
    return (nlPopMatrix(0x1));
}

int buFindExecFile(int a4, int a5)
{
    register int t0;

    t0 = vmsfs_c_getstate(a4);
    if (t0 != 0) {
        return 0xFFFFFFFF;
    }
    return (vmsfs_xfind(a4, a5));
}

int nlobjput_sub_trnsl(int a4, float f4)
{
    register int t0;

    t0 = *(int *)((a4 + 0x0));
    if ((t0 == 0)) {
        FUN_0c080782(a4, 0xC2BF8B0, f4);
        return (nlPopMatrix(0x1));
    }
    if (t0 == 1) {
        FUN_0c080782(a4, 0xC2BF8B0, f4);
        return (nlPopMatrix(0x1));
    }
    return (nlPopMatrix(0x1));
}

int nlMvLoadFlatMatrix(void)
{
    int stk[16];

    nlGetMatrix(((int)stk + 0));
    (((struct o8_float *)(((int)stk + 0)))->v) = ((((struct oC_float *)(((int)stk + 0)))->v));
    (((struct o18_float *)(((int)stk + 0)))->v) = ((((struct o1C_float *)(((int)stk + 0)))->v));
    (((struct o28_float *)(((int)stk + 0)))->v) = ((((struct o2C_float *)(((int)stk + 0)))->v));
    (((struct o38_float *)(((int)stk + 0)))->v) = ((((struct o3C_float *)(((int)stk + 0)))->v));
    return (FUN_0c072b60(((int)stk + 0)));
}

int nlMvGetFaceVerts(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = (0x0 + a5);
    t1 = 0x0;
    t2 = 0x0;
    for (;;) {
        t3 = *(short *)((t0 + 0x0));
        t0 = (t0 + 0x2);
        t1 = (t1 + 0x1);
        t2 = (t2 << 1);
        t4 = (*(int *)(((((t3 << 2) << 2) + a4) + 0xC)));
        t2 = (t2 | (((int)(((unsigned int)t4 << 1) | ((unsigned int)t4 >> 31))) & 0x1));
        if ((int)t1 >= (int)0x3) {
            break;
        }
    }
    t0 = ((int (*)(int, int, int, int))((*(int *)(((t2 << 2) + 0xC147674)))))(a4, a5, a6, a7);
    return t2;
}

int FUN_0c07c87e(int a4, int a5)
{
    register int t0;

    if (a4 == 0xA3) {
        t0 = FUN_0c07c8be((a4 + ((a5 & 0xF) << 16)));
        if (t0 != 0) {
            return t0;
        }
        return FUN_0c07c8be(((a4 + ((a5 & 0xF) << 16)) + 0x100));
    }
    return 0xFFFFFFFE;
}

int FUN_0c07d800(int a4)
{
    register int t3;

    if (((*(int *)((a4 + 0x0))) & 1) == 0) {
        return 0xFFFFFFFF;
    }
    if (((*(int *)((a4 + 0x0))) & 0x100) == 0) {
        return 0xFFFFFFFE;
    }
    t3 = FUN_0c07d864(a4);
    if (t3 != 0x101) {
        return 0xFFFFFFFD;
    }
    syG2DmaStop((*(int *)0xC2C4130));
    FUN_0c07d974();
    return 0x0;
}

int vmsfs_c_execcallback(int a4, int a5, int a6)
{
    register int t5;

    t5 = 0x74;
    if (((((struct o74_int *)((((((a4 << 2) << 2) << 2) << 1) + 0xC2C6914)))->v)) != 0) {
        t5 = (((int (*)(int, int, int, int))(((((struct o74_int *)((((((a4 << 2) << 2) << 2) << 1) + 0xC2C6914)))->v))))(a4, a5, a6, ((((struct o7C_int *)((((((a4 << 2) << 2) << 2) << 1) + 0xC2C6914)))->v))));
    }
    return t5;
}

int ADXT_IsIbufSafety(int a4, int a5, int a6, int a7)
{
    register int t1;
    register int t4;

    if ((*(int *)((a4 + 0x14))) != 0) {
        t1 = *(int *)((a4 + 0x14));
        t4 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x24)))))(t1, 0x1, a6, a7);
        if ((int)t4 >= (int)(((((((struct o3E_short *)(a4))->v)) << 8) << 2) << 1)) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x0;
}

int kmiFBSortQueue(void)
{
    FBSortQueue(0xC173DEC, 0xC173DF0);
    FBSortQueue(0xC173E00, 0xC173E04);
    FBSortQueue(0xC173DF4, 0xC173DF8);
    FBSortQueue(0xC173E08, 0xC173E0C);
    return 0x0;
}

int kmyConvertAddress32to64(int a4)
{
    int t0;
    register int t1;
    int t4;
    register int t5;
    register int t12;

    if ((unsigned int)a4 < (unsigned int)0x800000) {
        t0 = a4;
        t1 = 0x0;
        if ((unsigned int)a4 >= (unsigned int)0x400000) {
            t0 = (a4 - 0x400000);
            t1 = 0x4;
        }
        t12 = ((((0xFFFFFFFC & t0) << 1) + (0x3 & t0)) + t1);
    } else {
        t4 = a4;
        t5 = 0x0;
        if ((unsigned int)a4 >= (unsigned int)0xC00000) {
            t4 = (a4 - 0x400000);
            t5 = 0x4;
        }
        t12 = (((((0xFFFFFFFC & t4) << 1) + (0x3 & t4)) + t5) + 0xFF800000);
    }
    return t12;
}

int FUN_0c15ef5c(void)
{
    register int t7;

    *(unsigned int *)0xC3024AC = ((*(int *)0xC3024AC) + 0x1);
    FUN_0c15f33e();
    t7 = 0xC30275C;
    if ((unsigned int)((((struct o0_int *)0xC30275C)->v)) > (unsigned int)0x3C) {
        (((struct oFC0_uint *)((*(int *)0xC30817C)))->v) = 0x0;
        *(unsigned char *)(((*(int *)0xC16A484) + 0x0)) = 0x0;
        t7 = kdRecvFrame();
        (((struct o0_uint *)0xC30275C)->v) = 0x0;
        (((struct o4_uint *)0xC30275C)->v) = (((((struct o4_int *)0xC30275C)->v)) + 0x1);
    }
    return t7;
}

int fmMngWrite(int a4, int a5)
{
    register int t0;
    int t5;

    t0 = *(int *)0xC1742EC;
    if (t0 == 0) {
        return 0xFFFFFFF5;
    }
    if ((*(int *)((t0 + 0x1C))) != 0) {
        return 0xFFFFFFF7;
    }
    if (((int)a4 >= 0) && (t5 = *(int *)((t0 + 0x14)), (int)a4 < (int)t5)) {
        *(unsigned int *)((t0 + 0x1C)) = 0x2;
        *(unsigned int *)(((*(int *)0xC1742EC) + 0x20)) = 0x2;
        *(unsigned int *)(((*(int *)0xC1742EC) + 0x28)) = a4;
        *(unsigned int *)(((*(int *)0xC1742EC) + 0x30)) = a5;
        *(unsigned int *)(((*(int *)0xC1742EC) + 0x24)) = 0x0;
        return 0x0;
    }
    return 0xFFFFFFFB;
}

int mwRnaGetPitch(int a4, int a5, int a6)
{
    register int t0;

    if (a4 == 0) {
        t0 = FUN_0c16ada2(0xC171714);
        *(unsigned int *)((a5 + 0x0)) = 0xFFFFFFFF;
        *(unsigned int *)((a6 + 0x0)) = 0xFFFFFFFF;
        return t0;
    }
    *(unsigned int *)((a5 + 0x0)) = ((((struct o74_int *)(a4))->v));
    *(unsigned int *)((a6 + 0x0)) = ((((struct o78_int *)(a4))->v));
    return 0x78;
}

int syG2DmaSuspend(int a4)
{
    register int t0;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    *(unsigned int *)(((((((*(int *)((a4 + 0x0))) << 2) << 2) << 1) + (*(int *)(((*(int *)0xC1743EC) + 0x0)))) + 0x1C)) = 0x1;
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
    return 0x0;
}

int FUN_0c019d4a(int a4)
{
    register int t23;

    if (a4 != 0) {
        if ((*(int *)(((*(int *)((a4 + 0x8))) + 0x0))) == a4) {
            *(unsigned int *)(((*(int *)((a4 + 0x8))) + 0x0)) = (*(int *)((a4 + 0x0)));
        }
        if ((*(int *)((a4 + 0x4))) != 0) {
            *(unsigned int *)(((*(int *)((a4 + 0x4))) + 0x0)) = (*(int *)((a4 + 0x0)));
        }
        if ((*(int *)((a4 + 0x0))) != 0) {
            *(unsigned int *)(((*(int *)((a4 + 0x0))) + 0x4)) = (*(int *)((a4 + 0x4)));
        }
        t23 = nlFree(a4);
        *(unsigned int *)0xC1A7EF4 = ((*(int *)0xC1A7EF4) - 1);
    }
    return t23;
}

int FUN_0c01b9c4(void)
{
    register int t0;
    register int t1;

    (((struct o2C_uint *)0xC1EC71C)->v) = 0x0;
    t0 = *(int *)0xC1ECC84;
    if (t0 != 0) {
        t1 = t0;
        if (t0 != 1) {
        } else {
            *(unsigned int *)0xC175C80 = 0x0;
            t0 = *(int *)0xC1ECC84;
            (((struct o0_uint *)0xC1EC71C)->v) = t0;
            (((struct o4_uint *)0xC1EC71C)->v) = t0;
            *(unsigned int *)0xC1ECC84 = 0x0;
            t1 = 0xC1EC720;
        }
        t0 = t1;
    } else {
        *(unsigned int *)0xC175C80 = 0x0;
        t1 = *(int *)0xC1ECC84;
        (((struct o0_uint *)0xC1EC71C)->v) = t1;
        (((struct o4_uint *)0xC1EC71C)->v) = t1;
        *(unsigned int *)0xC1ECC84 = 0x1;
        t0 = 0xC1EC720;
    }
    return t0;
}

int FUN_0c020b54(void)
{
    register int t0;
    register int t5;

    t0 = *(int *)0xC2708C8;
    t5 = t0;
    if (t0 != 5) {
        FUN_0c06e990(0x276);
        gdc_FileLoad(0xCB60000, 0xC09B100, 0x0);
        nlSpriteFreeTexture(0xC142C64, 0xC0993AC);
        FUN_0c06e990(0x0);
        *(unsigned int *)0xC2708C8 = 0x5;
        *(unsigned int *)0xC11D048 = 0x3;
        t5 = 0xC11D048;
    }
    return t5;
}

int PutAdvLogoSprite(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8)
{
    register int t0;

    (((struct o0_uint *)0xC2708CC)->v) = 0x109;
    (((struct o4_float *)0xC2708CC)->v) = 320.0f;
    (((struct o8_float *)0xC2708CC)->v) = 384.0f;
    t0 = ((int (*)(int, int, int, int, float, float, float, float, float))(FUN_0c07ada0))(0xC2708CC, a5, a6, a7, f4, f5, f6, f7, f8);
    (((struct o0_uint *)0xC2708CC)->v) = 0x10A;
    (((struct o4_float *)0xC2708CC)->v) = 320.0f;
    (((struct o8_float *)0xC2708CC)->v) = 224.0f;
    return ((int (*)(int))(FUN_0c07ada0))(0xC2708CC);
}

float FUN_0c02d37c(void)
{
    register int t3;
    register float u6;
    register float u7;

    (((struct o0_float *)0xC1294DC)->v) = (nlFraction((((((struct o0_float *)0xC1294DC)->v)) + ((((struct o0_float *)0xC02D3C4)->v)))));
    t3 = (((struct o4_int *)0xC1294DC)->v);
    (((struct o4_uint *)0xC1294DC)->v) = (t3 + 0x800);
    u6 = (((struct o18_float *)0xC02D3C4)->v);
    u7 = ((((struct o14_float *)0xC02D3C4)->v));
    u7 = u7 + u6 * (FUN_0c072140((t3 + 0x800)));
    *(float *)0xC2752C8 = u7;
    return u6;
}

int FUN_0c031ede(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = a4;
    t1 = a5;
    t2 = 0x6;
    for (;;) {
        t3 = *(signed char *)((t1 + 0x0));
        t1 = (t1 + 0x1);
        t4 = ((((int)(unsigned char)t3 >> 4) & 0xF) + 0x37);
        if ((unsigned int)(((int)(unsigned char)t3 >> 4) & 0xF) < (unsigned int)0xA) {
            t4 = ((((int)(unsigned char)t3 >> 4) & 0xF) + 0x30);
        }
        *(unsigned char *)((t0 + 0x0)) = t4;
        t0 = (t0 + 0x1);
        t4 = (((unsigned char)t3 & 0xF) + 0x37);
        if ((unsigned int)((unsigned char)t3 & 0xF) < (unsigned int)0xA) {
            t4 = (((unsigned char)t3 & 0xF) + 0x30);
        }
        t2 = (t2 - 0x1);
        *(unsigned char *)((t0 + 0x0)) = t4;
        t0 = (t0 + 0x1);
        if (t2 == 0) {
            break;
        }
    }
    return (unsigned char)t3;
}

int FUN_0c0311b4(float f4)
{
    FUN_0c06f550(0x0, 0x0, 0x0);
    FUN_0c027f28(0x0);
    pfSize(1.0f, 1.0f);
    FUN_0c01ead0(0x5, 0x0);
    gdc_VolStreamSong(0x6E);
    (((struct o0_uint *)0xC289D04)->v) = 0x0;
    (((struct o4_uint *)0xC289D04)->v) = 0x2;
    return 0xC289D08;
}

int FUN_0c033430(int a4)
{
    (((struct o4_float *)(a4))->v) = 0.0f;
    (((struct o8_float *)(a4))->v) = 0.0f;
    (((struct oC_float *)(a4))->v) = (*(float *)0xC033564);
    (((struct o10_float *)(a4))->v) = 1.0f;
    (((struct o14_float *)(a4))->v) = 1.0f;
    (((struct o18_float *)(a4))->v) = 0.0f;
    (((struct o1C_float *)(a4))->v) = 0.0f;
    (((struct o20_float *)(a4))->v) = 1.0f;
    (((struct o24_float *)(a4))->v) = 1.0f;
    *(unsigned int *)((a4 + 0x28)) = 0x0;
    *(unsigned int *)((a4 + 0x34)) = 0x300A;
    (((struct o2C_float *)(a4))->v) = 1.0f;
    *(unsigned int *)((a4 + 0x30)) = 0xFFFFFFFF;
    return 0x2C;
}

int FUN_0c035a20(int a4)
{
    if (a4 != 0) {
        if (a4 != 1) {
            if (a4 != 2) {
                if (a4 != 3) {
                    if (a4 != 4) {
                        if (a4 != 5) {
                            return a4;
                        }
                        return FUN_0c03f42e(0x0);
                    }
                    return FUN_0c03f42e(0x1);
                }
                return FUN_0c03f42e(0x0);
            }
            return FUN_0c03f42e(0x2);
        }
        return FUN_0c03f42e(0x1);
    }
    return FUN_0c03f42e(0x0);
}

int FUN_0c0436b8(int a4)
{
    register int t0;

    t0 = (((struct o78_int *)(a4))->v);
    if ((t0 == 19) || (t0 == 17)) {
        t0 = *(int *)((a4 + 0x8));
        (((struct o84_uint *)(t0))->v) = (((((struct o84_int *)(t0))->v)) & 0xFFFFFFFE);
    }
    KillColliObj((a4 + 0x14));
    t0 = nlCloseEvent(a4);
    *(unsigned int *)0xC2AB7EC = ((*(int *)0xC2AB7EC) - 1);
    return t0;
}

int FUN_0c04ba04(int a4)
{
    register float u0;
    float u2;

    u0 = (((struct o8_float *)(a4))->v);
    if ((u0 > ((((struct o0_float *)0xC04BAD4)->v))) && (u2 = (((struct o4_float *)0xC04BAD4)->v), u2 > u0)) {
        if ((*(float *)((a4 + 0x0))) > ((((struct o8_float *)0xC04BAD4)->v))) {
            if (((((struct oC_float *)0xC04BAD4)->v)) > (*(float *)((a4 + 0x0)))) {
                if (!(((((struct o4_float *)(a4))->v)) > ((((struct o10_float *)0xC04BAD4)->v)))) {
                    return 0x1;
                }
                return 0x0;
            }
            return 0x0;
        }
        return 0x0;
    }
    return 0x0;
}

int FUN_0c050600(void)
{
    register int t0;
    register int t6;

    t0 = (((struct o0_int *)0xC1EC720)->v);
    t6 = t0;
    if (t0 != 2) {
        *(unsigned int *)0xC2B1DD4 = ((*(int *)0xC2B1DD4) | 0x2000000);
        Init_Standard();
        Voice_ShutUp(0x0);
        FUN_0c058f64(0xC131F70, 0x0, 0x78, 0x0);
        (((struct o0_uint *)0xC2B2A1C)->v) = 0x0;
        (((struct o8_uint *)0xC2B2A1C)->v) = ((((struct o30_int *)0xC1EC720)->v));
        t6 = 0xC1EC750;
    }
    return t6;
}

int FUN_0c05a8c4(void)
{
    register int t0;

    t0 = 0xC2B928C;
    for (;;) {
        if ((unsigned int)t0 >= (unsigned int)0xC2B967C) {
            break;
        }
        *(unsigned int *)((t0 + 0x0)) = 0x0;
        *(unsigned int *)((t0 + 0x4)) = 0x0;
        *(unsigned int *)((t0 + 0x8)) = 0x0;
        *(unsigned int *)((t0 + 0xC)) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = 0x0;
        *(unsigned int *)((t0 + 0x14)) = 0x0;
        *(unsigned int *)((t0 + 0x18)) = 0x0;
        *(unsigned int *)((t0 + 0x1C)) = 0x0;
        *(unsigned int *)((t0 + 0x20)) = 0xFFFFFFFF;
        t0 = (t0 + 0x24);
    }
    (((struct o0_uint *)0xC2B928C)->v) = 0x30E4000;
    (((struct o8_uint *)0xC2B928C)->v) = 0x5DC;
    (((struct o0_uint *)0xC2B967C)->v) = 0x0;
    (((struct o4_uint *)0xC2B967C)->v) = 0x0;
    (((struct o8_uint *)0xC2B967C)->v) = 0xFFFFFFFF;
    return 0xC2B967C;
}

int Voice_Execute(void)
{
    register int t0;
    int t1;
    register int t2;

    t0 = 0x0;
    for (;;) {
        if (((t0 != 0) && (t1 = *(int *)0xC1EC740, t1 != 1)) || (t2 = *(int *)(((((t0 << 2) << 2) + 0xC2B6770) + 0x0)), t2 == 0)) {
        } else {
            FUN_0c058edc(t0);
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    return 0x0;
}

float FUN_0c05d118(int a4, int a5, float f4)
{
    register float u0;
    register float u1;

    u0 = FUN_0c06e7a0(a4, f4);
    *(float *)((a5 + 0x0)) = u0;
    u1 = u0;
    if (((*(int *)((a4 + 0x4))) & 2) != 0) {
        u0 = (((struct o8_float *)0xC05D314)->v);
        *(unsigned int *)((a5 + 0x0)) = ((int)(((((*(float *)((a5 + 0x0))) * ((((struct o0_float *)0xC05D314)->v))) / ((((struct o4_float *)0xC05D314)->v)))) + u0) & 0xFFFF);
        u1 = u0;
    }
    return u1;
}

int FUN_0c06ce0a(int a4)
{
    register int t0;
    register int t3;
    int t1;

    t0 = *(int *)0xC1EC720;
    t3 = t0;
    if ((t0 != 2) && (t1 = *(int *)0xC177D58, t1 == 0)) {
        FUN_0c06e5f2();
        *(unsigned int *)0xC177D58 = 0xD;
        (((struct o0_uint *)0xC2BB3D4)->v) = 0x0;
        (((struct o4_uint *)0xC2BB3D4)->v) = 0x0;
        (((struct oC_uint *)0xC2BB3D4)->v) = 0x0;
        *(unsigned int *)0xC13C358 = a4;
        t3 = 0xC13C358;
    }
    return t3;
}

int FUN_0c06e626(void)
{
    register int t7;

    FUN_0c018b00(((((struct o0_int *)0xC2BB3AC)->v)));
    FUN_0c018b22(0xC2BB3B0, 0x0);
    camSetTarget(0xC2BB3BC, 0x0);
    t7 = FUN_0c018c96((unsigned short)((((struct o1C_short *)0xC2BB3AC)->v)), (unsigned short)((((struct o1E_short *)0xC2BB3AC)->v)), (unsigned short)((((struct o20_short *)0xC2BB3AC)->v)), 0x0);
    *(float *)0xC177D9C = ((((struct o24_float *)0xC2BB3AC)->v));
    return t7;
}

int nlCommonTextureGarbageCollection(void)
{
    register int t2;
    register int t3;
    register int t4;

    t4 = (((struct o0_int *)0xC2BF120)->v);
    t2 = (kmGarbageCollectTexture());
    t3 = 0x0;
    for (;;) {
        if ((int)t3 >= (int)((((struct o4_int *)0xC2BF120)->v))) {
            break;
        }
        if ((*(int *)((t4 + 0x28))) == 0) {
            t2 = (nlCreateTextureParamA(t4));
        }
        t4 = (t4 + 0x3C);
        t3 = (t3 + 0x1);
    }
    return t2;
}

void buDisableServer(void)
{
    register int t0;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    kdSetHandler((*(int *)0xC113E70), 0x0);
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
}

int FUN_0c07f484(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c07e42c(0x0);
    if (t0 == 0) {
        t1 = FUN_0c07e4b4();
        if (t1 != 0) {
            return t1;
        }
        strncpy(a4, ((*(int *)0xC147740) + 0x9E0), 0x34);
        return 0x0;
    }
    return t0;
}

int strncmp(int a4, int a5, int a6)
{
    register int t8;
    register int t10;
    register int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    if (a6 == 0) {
        return 0x0;
    }
    t8 = a4;
    t10 = a5;
    if ((unsigned int)0x0 < (unsigned int)a6) {
        t0 = a4;
        t1 = 0x0;
        t2 = a5;
        for (;;) {
            t3 = *(signed char *)((t2 + 0x0));
            t2 = (t2 + 0x1);
            t4 = *(signed char *)((t0 + 0x0));
            t0 = (t0 + 0x1);
            if ((t4 == t3) && ((t5 = *(signed char *)(((t0 - 1) + 0x0)), t5 != 0) && (t1 = (t1 + 0x1), (unsigned int)t1 < (unsigned int)a6))) continue;
            break;
        }
        t8 = t0;
        t10 = t2;
    }
    return ((unsigned char)(*(signed char *)(((t8 - 1) + 0x0))) - (unsigned char)(*(signed char *)(((t10 - 1) + 0x0))));
}

int vmsfs_c_progress(int a4, int a5, int a6, int a7)
{
    register int t4;

    t4 = 0x78;
    if (((((struct o78_int *)((((((a4 << 2) << 2) << 2) << 1) + 0xC2C6914)))->v)) != 0) {
        t4 = (((int (*)(int, int, int, int))(((((struct o78_int *)((((((a4 << 2) << 2) << 2) << 1) + 0xC2C6914)))->v))))(a4, a5, a6, a7));
    }
    return t4;
}

int gdFsReadWG(int a4, int a5, int a6)
{
    register int t3;

    t3 = gdFsReopenHn((*(int *)(((*(int *)0xC1737EC) + 0x14))), 0x0, a4, (((a5 << 8) << 2) << 1));
    if (t3 == 0) {
        return 0xFFFFFFF3;
    }
    return (gdFsRead(t3, a5, a6));
}

int _pd_peripheral_set_null(int a4)
{
    *(unsigned int *)((a4 + 0x0)) = 0x0;
    *(unsigned int *)((a4 + 0x4)) = 0x0;
    if ((*(int *)0xC2D1268) == 0) {
        *(unsigned int *)((a4 + 0x8)) = 0x0;
        *(unsigned int *)((a4 + 0xC)) = 0xFFFFFFFF;
        *(unsigned int *)((a4 + 0x10)) = 0x0;
        *(unsigned int *)((a4 + 0x14)) = 0x0;
    } else {
        *(unsigned int *)((a4 + 0x8)) = 0xFFFFFFFF;
        *(unsigned int *)((a4 + 0xC)) = 0x0;
        *(unsigned int *)((a4 + 0x10)) = 0xFFFFFFFF;
        *(unsigned int *)((a4 + 0x14)) = 0xFFFFFFFF;
    }
    *(unsigned short *)((a4 + 0x18)) = 0x0;
    *(unsigned short *)((a4 + 0x1A)) = 0x0;
    (((struct o22_ushort *)(a4))->v) = 0x0;
    (((struct o20_ushort *)(a4))->v) = 0x0;
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    *(unsigned int *)((a4 + 0x28)) = 0x0;
    *(unsigned int *)((a4 + 0x24)) = 0xC16FF14;
    return 0x0;
}

int kmiABSalloc(int a4, int a5)
{
    register int t1;
    register int t4;

    t1 = *(int *)((a5 + 0x1C));
    t4 = 0x1;
    if ((int)t1 < (int)(*(int *)0xC173DE4)) {
        t4 = 0x0;
    }
    return (kmytex_ABSalloc(t4, t1, a4, a5, 0x0, 0x1));
}

void kmiDefaultFatalErrorCallback(int a4)
{
    int stk[2];
    register int t1;
    register int t4;
    register int t7;
    register int t10;
    register int t13;

    if (a4 != 1) {
        if (a4 != 2) {
            if (a4 != 3) {
                if (a4 != 4) {
                    t1 = (*(int *)((((int)stk + 4) + 0x0)));
                    *(int *)((int)stk + 0) = t1;
                    kmSetBorderColor(t1);
                    for (;;) {
                    }
                }
                *(unsigned int *)((((int)stk + 4) + 0x0)) = 0xFFFF00FF;
                t4 = (*(int *)((((int)stk + 4) + 0x0)));
                *(int *)((int)stk + 0) = t4;
                kmSetBorderColor(t4);
                for (;;) {
                }
            }
            *(unsigned int *)((((int)stk + 4) + 0x0)) = 0xFF00FF00;
            t7 = (*(int *)((((int)stk + 4) + 0x0)));
            *(int *)((int)stk + 0) = t7;
            kmSetBorderColor(t7);
            for (;;) {
            }
        }
        *(unsigned int *)((((int)stk + 4) + 0x0)) = 0xFFFF0000;
        t10 = (*(int *)((((int)stk + 4) + 0x0)));
        *(int *)((int)stk + 0) = t10;
        kmSetBorderColor(t10);
        for (;;) {
        }
    }
    *(unsigned int *)((((int)stk + 4) + 0x0)) = 0xFF0000FF;
    t13 = (*(int *)((((int)stk + 4) + 0x0)));
    *(int *)((int)stk + 0) = t13;
    kmSetBorderColor(t13);
    for (;;) {
    }
}

int kmChangeContextFilterMode(int a4)
{
    int stk[4];
    register int t0;
    register int t2;

    t0 = (((struct o4_int *)0xC1710B0)->v);
    *(unsigned int *)((((int)stk + 0) + 0x0)) = ((((struct o0_int *)0xC1710B0)->v));
    *(unsigned int *)((((int)stk + 0) + 0x4)) = t0;
    t2 = (((struct oC_int *)0xC1710B0)->v);
    *(unsigned int *)((((int)stk + 0) + 0x8)) = ((((struct o8_int *)0xC1710B0)->v));
    *(unsigned int *)((((int)stk + 0) + 0xC)) = t2;
    *(unsigned int *)0xC300E00 = (((*(int *)0xC300E00) & 0xFFFF9FFF) | ((*(int *)((((int)stk + 0) + (a4 << 2)))) << 13));
    *(unsigned int *)0xC17413C = (*(int *)0xC300E00);
    return 0x0;
}

int FUN_0c161340(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t0 = 0x7FFFFFFF;
    if ((int)(a5 - 1) > 0) {
        t1 = 0x0;
        for (;;) {
            if ((*(short *)((a4 + t1))) == 0x80) {
                break;
            }
            t1 = (t1 + 0x2);
            if ((int)t1 >= (int)(a5 - 1)) {
                if (0x7FFFFFFF != 0x7FFFFFFF) {
                    *(unsigned short *)((a6 + 0x0)) = 0x7FFFFFFF;
                    t1 = 0x0;
                    return t1;
                }
                t1 = 0xFFFFFFFF;
                *(unsigned short *)((a6 + 0x0)) = 0x0;
                return t1;
            }
        }
        if ((int)t1 < (int)0x7FFFFFFF) {
            t0 = t1;
        } else {
            t0 = 0x7FFFFFFF;
        }
    }
    if (t0 != 0x7FFFFFFF) {
        *(unsigned short *)((a6 + 0x0)) = t0;
        t0 = 0x0;
    } else {
        *(unsigned short *)((a6 + 0x0)) = 0x0;
        t0 = 0xFFFFFFFF;
    }
    return t0;
}

void kmiDACControl(void)
{
    
}

int mwlSbGetFilter(int a4, int a5, int a6)
{
    (((struct o58_ushort *)(a4))->v) = (mwlSbGetStreamParam(a4, 0x9, 0x0));
    (((struct o5A_ushort *)(a4))->v) = (mwlSbGetStreamParam(a4, 0xA, 0x0));
    *(unsigned int *)((a5 + 0x0)) = ((((struct o58_short *)(a4))->v));
    *(unsigned int *)((a6 + 0x0)) = ((((struct o5A_short *)(a4))->v));
    return 0x5A;
}

int FUN_0c16bb08(void)
{
    int stk[1];

    FUN_0c16ba68(((int)stk + 0));
    if ((*(int *)0xC1744A4) == 0) {
        memset(0xC309460, 0x0, 0x21C0);
        FUN_0c16bb00();
        FUN_0c16ba98(0x0, 0x0);
    }
    *(unsigned int *)0xC1744A4 = ((*(int *)0xC1744A4) + 0x1);
    return (FUN_0c16ba80(((int)stk + 0)));
}

int FUN_0c16cf34(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t2 = 0xC30B854;
    t3 = 0x0;
    t4 = 0xC30B854;
    for (;;) {
        t5 = *(int *)((t4 + 0x0));
        if ((t5 != 0) && (t0 = 0x44, t1 = *(int *)((t5 + t0)), t1 != 0)) {
            t0 = (((int (*)(int, int, int, int))((*(int *)((t5 + t0)))))(t2, a5, a6, a7));
            t3 = (t3 + t0);
        } else {
            t5 = t2;
        }
        t4 = (t4 + 0x10);
        t2 = t5;
        if ((unsigned int)t4 >= (unsigned int)0xC30BA54) {
            break;
        }
    }
    return t3;
}

int cvFsGetMaxByteRate(int a4, int a5, int a6, int a7)
{
    register int t11;

    if (a4 == 0) {
        cvFsError(0xC1729DC, a5, a6, a7);
        return 0x0;
    }
    if (((((struct o4C_int *)((*(int *)((a4 + 0x0)))))->v)) != 0) {
        t11 = (((int (*)(int, int, int, int))(((((struct o4C_int *)((*(int *)((a4 + 0x0)))))->v))))((*(int *)((a4 + 0x4))), a5, a6, a7));
    } else {
        cvFsError(0xC172A00, a5, a6, a7);
        t11 = 0x0;
    }
    return t11;
}

int cvFsGetDevName(int a4, int a5, int a6, int a7)
{
    register int t1;

    if (a4 == 0) {
        cvFsError(0xC172BCC, a5, a6, a7);
        return 0x0;
    }
    t1 = 0x0;
    for (;;) {
        if ((*(int *)(((((t1 << 2) << 2) + 0xC30B854) + 0x0))) != (*(int *)((a4 + 0x0)))) {
            t1 = (t1 + 0x1);
            if ((int)t1 >= (int)0x20) {
                break;
            }
            continue;
        }
        break;
    }
    return ((((t1 << 2) << 2) + 0xC30B854) + 0x4);
}

int gdc_GetStreamSongTotalTime(int a4)
{
    register int t1;
    register int t7;

    t1 = FUN_0c14e916((*(int *)(((a4 << 2) + 0xC1ECD54))));
    t7 = 0x58764;
    if ((int)t1 >= (int)0x2) {
        t7 = (int)((float)(FUN_0c14eb7e((*(int *)(((a4 << 2) + 0xC1ECD54))))) * (*(float *)0xC01EE38));
    }
    return t7;
}

int gdc_StreamVoiceVol(int a4, int a5)
{
    register int t2;

    t2 = FUN_0c01e83e((int)((float)(signed char)a5 * ((float)(unsigned char)(*(signed char *)0xC28ED9E) / (*(float *)0xC01EE4C))));
    return ADXT_SetOutVol((*(int *)(((a4 << 2) + 0xC1ECD54))), t2);
}

int CalcHomingVector(int a4)
{
    int stk[3];

    nlSubVector3op(((int)stk + 0), (a4 + 0x18), a4);
    nlGetAverageVector((a4 + 0xC), ((int)stk + 0), (a4 + 0xC), ((((struct o28_float *)(a4))->v)), ((((struct o24_float *)(a4))->v)));
    return (nlAddVector(a4, (a4 + 0xC)));
}

int FUN_0c0331b8(int a4, int a5)
{
    register int t0;
    register int t1;

    t0 = buDeleteFile(a4, a5);
    t1 = t0;
    if (t0 == 0) {
        for (;;) {
            t0 = buIsReady(a4);
            if (t0 != 0) {
                t0 = buStat(a4);
                if (t0 != -1) {
                    break;
                }
                continue;
            }
            break;
        }
        t1 = (buGetLastError(a4));
    }
    return t1;
}

int FUN_0c036936(float f4)
{
    *(unsigned int *)0xC1EC744 = 0x0;
    FUN_0c04e92c(f4);
    FUN_0c02024c();
    gdc_FileLoadInit();
    FUN_0c01f95a();
    FUN_0c01d190();
    FUN_0c03386a(0x4);
    FUN_0c0339fc(0x0);
    *(unsigned int *)0xC2A4660 = 0x0;
    return FUN_0c01eaea();
}

int FUN_0c04b432(int a4)
{
    register int t1;
    int t2;

    if (((*(int *)0xC1EC71C) == 1) && ((t1 = (((struct o10_int *)0xC2ADEBC)->v), t1 == -1) && (t2 = (((struct o0_int *)0xC2ADEBC)->v), (int)t2 > 0))) {
        return t2;
    }
    nlPushMatrix(0x0);
    nlObjPutUseViewMatrix(a4);
    return nlPopMatrix(0x1);
}

int FUN_0c053c5c(void)
{
    (((struct o0_float *)0xC2B2D68)->v) = 1.0f;
    (((struct o4_float *)0xC2B2D68)->v) = 1.0f;
    (((struct o8_float *)0xC2B2D68)->v) = 1.0f;
    (((struct oC_float *)0xC2B2D68)->v) = 0.0f;
    (((struct o10_float *)0xC2B2D68)->v) = 0.0f;
    (((struct o14_float *)0xC2B2D68)->v) = 1.0f;
    (((struct o18_float *)0xC2B2D68)->v) = 1.0f;
    (((struct o1C_uint *)0xC2B2D68)->v) = 0x0;
    (((struct o20_float *)0xC2B2D68)->v) = 1.0f;
    (((struct o24_uint *)0xC2B2D68)->v) = 0x2;
    (((struct o28_uint *)0xC2B2D68)->v) = 0x5;
    return FUN_0c06f550(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
}

int lcdSync(int a4)
{
    register int t0;
    register int t2;

    t0 = (int)((unsigned int)a4 / (unsigned int)0x6);
    t2 = (int)((unsigned int)a4 % (unsigned int)0x6);
    return (pdVmsLcdWrite1(a4, ((((((((t0 << 1) + t2) - 1) << 1) + (((t0 << 1) + t2) - 1)) << 8) << 1) + 0xC2B33C8)));
}

int FUN_0c06221c(int a4, int a5)
{
    register int t0;
    int t2;
    int t10;
    register int t11;

    t0 = *(int *)((a4 + 0x0));
    if ((((*(signed char *)(((t0 + (a5 << 8)) + 0xFE))) & 64) != 0) && (t2 = (((struct o80_int *)((t0 + (a5 << 8))))->v), (int)t2 >= (int)0x2)) {
        return 0x1;
    }
    if (((*(int *)((a4 + 0xC))) == 11) && (t10 = *(int *)((a4 + 0x0)), t11 = (((struct o80_int *)(((a5 << 8) + t10)))->v), (int)t11 >= (int)0x8)) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c061f7e(int a4, int a5)
{
    register int t0;

    t0 = FUN_0c061e7c(a4);
    if (t0 != 0) {
        *(unsigned int *)((a4 + 0x10)) = 0x2;
        (((struct o63_uchar *)(a4))->v) = ((*(signed char *)(((a4 + 0x63) + 0x0))) | 0x80);
        *(unsigned int *)((a4 + 0x18)) = a5;
        return FUN_0c060210(a4);
    }
    return FUN_0c061f54(a4, a5);
}

int nlPrintf(Stk3 s)
{
    int stk[12];
    register int t0;

    stk[1] = s.w[0];
    stk[2] = s.w[1];
    stk[3] = s.w[2];
    t0 = ((((int)stk + 4) + 0x4) + 0x4);
    if ((0x3 & ((((int)stk + 4) + 0x4) + 0x4)) != 0) {
        t0 = ((((int)stk + 4) + 0x4) + 0x8);
    }
    vsprintf(0xC2BB620, s.w[0], t0);
    FUN_0c071730(0xC2BB620);
    return 0x0;
}

void nlQuickInvertMatrix(void)
{
    register float u4;
    register float u7;
    int t8;
    register float u11;
    int t13;
    int t15;
    float u0[16];
    float u2[4];
    float u3[4];
    float u5[4];
    float u6[4];
    float u9[4];
    float u10[4];
    float u16[16];

    _builtin_st_ext((float (*)[4])u0);
    u2[0] = u0[12];
    u2[1] = u0[13];
    u2[2] = u0[14];
    u2[3] = 1.0f;
    u3[0] = u0[0];
    u3[1] = u0[1];
    u3[2] = u0[2];
    u3[3] = 0.0f;
    u4 = _builtin_fipr(u2, u3);
    u5[0] = u0[12];
    u5[1] = u0[13];
    u5[2] = u0[14];
    u5[3] = 1.0f;
    u6[0] = u0[4];
    u6[1] = u0[5];
    u6[2] = u0[6];
    u6[3] = 0.0f;
    u7 = _builtin_fipr(u5, u6);
    t8 = (*(int *)&(u0[1]));
    u9[0] = u0[12];
    u9[1] = u0[13];
    u9[2] = u0[14];
    u9[3] = 1.0f;
    u10[0] = u0[8];
    u10[1] = u0[9];
    u10[2] = u0[10];
    u10[3] = (u0[11] - u0[11]);
    u11 = _builtin_fipr(u9, u10);
    t13 = (*(int *)&(u0[2]));
    t15 = (*(int *)&(u0[6]));
    _builtin_st_ext((float (*)[4])u16);
    u16[0] = u0[0];
    u16[1] = u0[4];
    u16[2] = u0[8];
    u16[3] = (u4 - u4);
    u16[4] = (*(float *)&t8);
    u16[5] = u0[5];
    u16[6] = u0[9];
    u16[7] = (u7 - u7);
    u16[8] = (*(float *)&t13);
    u16[9] = (*(float *)&t15);
    u16[10] = u0[10];
    u16[11] = (u11 - u11);
    u16[12] = (0.0f - u4);
    u16[13] = (0.0f - u7);
    u16[14] = ((u0[14] - u0[14]) - u11);
    u16[15] = 1.0f;
    _builtin_ld_ext((float (*)[4])u16);
}

int FUN_0c07ba56(int a4)
{
    if (((int)a4 >= 0) && ((int)a4 < (int)0x8)) {
        if ((*(int *)((0xC2C3F88 + (signed char)(((a4 << 1) + a4) << 2)))) == -1) {
            return 0xFFFFFFFE;
        }
        if ((*(int *)(((*(int *)0xC2C3EA4) + 0x0))) != 0) {
            return 0xFFFFFFFD;
        }
        return 0x0;
    }
    return 0xFFFFFFFF;
}

int FUN_0c07d5da(void)
{
    register int t0;
    register int t1;

    t0 = 0x10;
    for (;;) {
        if (((*(int *)0xC2C3FE8) & 0x1) != 0) {
            for (;;) {
                t1 = (FUN_0c07d68e(0xC2C3FE8));
                if (t1 == 0) {
                    break;
                }
            }
        }
        t0 = (t0 - 0x1);
        if (t0 == 0) {
            break;
        }
    }
    t0 = syG2DmaClose((*(int *)0xC2C4130));
    t1 = 0x0;
    if (t0 != 0) {
        t1 = 0xFFFFFFFF;
    }
    return t1;
}

int FUN_0c07e3d0(int a4)
{
    register int t0;

    t0 = *(int *)0xC147740;
    if (t0 != 0) {
        if (a4 != 0) {
            if (a4 == 1) {
                if ((*(int *)((t0 + 0x4))) != 0x41474553) {
                    return 0xFFFFFFFD;
                }
                return 0x0;
            }
            if (a4 == 2) {
                if (((((struct o168_int *)(t0))->v)) == 0x41474553) {
                    return 0x0;
                }
                return 0xFFFFFFFD;
            }
            return 0xFFFFFFFE;
        }
        if ((*(int *)((t0 + 0x4))) != 0x41474553) {
            return 0xFFFFFFFD;
        }
        return 0x0;
    }
    return 0xFFFFFFFF;
}

int FUN_0c07f8ca(int a4)
{
    register int t0;

    t0 = FUN_0c07e42c(0x0);
    if (t0 == 0) {
        t0 = FUN_0c07e4b4();
        if (t0 != 0) {
            return 0xFFFFFFFD;
        }
        *(unsigned int *)((a4 + 0x0)) = ((((struct o9DC_int *)((*(int *)0xC147740)))->v));
        return 0x0;
    }
    return 0xFFFFFFFD;
}

int vmsfs_ismount(int a4)
{
    register int t0;
    int t1;

    t0 = vmsio_ismount(a4);
    if ((t0 != 0) && (t1 = *(signed char *)((((a4 * 0x154) + 0xC2C8D2C) + 0x8)), t1 != 0)) {
        return 0x1;
    }
    return 0x0;
}

int buFbrExit(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t1;
    register int t0;
    register int t9;

    *(unsigned int *)(((int)stk + 4)) = 0xC2CF0A0;
    *(unsigned int *)(((int)stk + 0)) = 0x0;
    t1 = 0xC2CF0A0;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 0))) >= (int)0x2) {
            break;
        }
        t1 = (*(int *)(((int)stk + 4)));
        if ((*(int *)((t1 + 0x0))) != 0) {
            t0 = (buFbrDestroyServer((*(int *)(((int)stk + 4))), a5, a6, a7));
        } else {
            t9 = t1;
        }
        t1 = t9;
        *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0x1);
        t1 = 0xD7C;
        *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + t1);
    }
    return t0;
}

int syRtcMakeDayOfWeek(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t0 = a4;
    t1 = a5;
    if ((int)(unsigned char)a5 <= (int)0x2) {
        t0 = (a4 - 1);
        t1 = (a5 + 0xC);
    }
    return ((int)((int)(((((((unsigned short)t0 >> 1) >> 1) + ((int)((int)(((unsigned short)(unsigned char)t1 * (unsigned short)0xD) + 0x8) / (int)0x5))) + (unsigned short)t0) + (unsigned char)a6) - 15) % (int)0x7));
}

int pdVibGetInfo(int a4, int a5)
{
    int stk[4];
    register int t1;
    register int t2;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    t1 = kdGetDeviceInfo((*(int *)(((int)stk + 4))));
    t2 = kdDevGetVibrationInfo((((int)stk + 0) + 0x8), t1);
    if ((int)t2 < 0) {
        return 0xFFFFFFFE;
    }
    *(unsigned char *)(((*(int *)(((int)stk + 0))) + 0x0)) = (*(int *)(((int)stk + 8)));
    *(unsigned char *)(((*(int *)(((int)stk + 0))) + 0x1)) = (*(signed char *)(((int)stk + 12)));
    return 0x0;
}

int SearchUsed(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;

    if ((int)a4 < (int)(*(int *)0xC173DE4)) {
        *(unsigned short *)((a5 + 0x0)) = 0x0;
    } else {
        *(unsigned short *)((a5 + 0x0)) = 0x1;
    }
    t0 = *(short *)((a5 + 0x0));
    t1 = *(int *)(((((t0 << 2) + t0) << 2) + 0xC173DEC));
    t0 = 0x0;
    if (t1 != 0) {
        t2 = t1;
        t1 = 0x0;
        for (;;) {
            if ((*(int *)((t2 + 0xC))) == a4) {
                t1 = t2;
                t2 = 0x0;
            } else {
                t2 = (*(int *)((t2 + 0x8)));
            }
            if (t2 == 0) {
                break;
            }
        }
        t0 = t1;
    }
    return t0;
}

int kmiFBGarbageCollect(void)
{
    register int t0;
    register int t4;

    t0 = FBCompQueue(0xC173DF4, 0xC173DF8, 0xC173DEC, 0xC173DF0);
    t4 = t0;
    if (t0 == 0) {
        t4 = (FBCompQueue(0xC173E08, 0xC173E0C, 0xC173E00, 0xC173E04));
    }
    return t4;
}

int kmiCalcTABufferSize(int a4)
{
    return (((((((*(int *)((0xC1742D4 + (((((struct o0_int *)0xC300D80)->v)) << 2)))) + (*(int *)((0xC1742D4 + (((((struct o4_int *)0xC300D80)->v)) << 2))))) + (*(int *)((0xC1742D4 + (((((struct o8_int *)0xC300D80)->v)) << 2))))) + (*(int *)((0xC1742D4 + (((((struct oC_int *)0xC300D80)->v)) << 2))))) + (*(int *)((0xC1742D4 + (((((struct o10_int *)0xC300D80)->v)) << 2))))) * a4) << 2);
}

int syG2DmaClose(int a4)
{
    register int t0;
    register int t2;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    t2 = 0x90102;
    if ((*(int *)((a4 + 0x28))) != 1) {
    } else {
        *(unsigned int *)((a4 + 0x28)) = 0x0;
        t2 = 0x0;
    }
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
    return t2;
}

int cvFsGetStat(int a4, int a5, int a6, int a7)
{
    register int t13;

    if (a4 == 0) {
        cvFsError(0xC172668, a5, a6, a7);
        t13 = 0x3;
    } else {
        if ((*(int *)(((*(int *)((a4 + 0x0))) + 0x2C))) != 0) {
            t13 = (((int (*)(int, int, int, int))((*(int *)(((*(int *)((a4 + 0x0))) + 0x2C)))))((*(int *)((a4 + 0x4))), a5, a6, a7));
        } else {
            cvFsError(0xC172684, a5, a6, a7);
            t13 = 0x3;
        }
    }
    return t13;
}

int cvFsGetSctLen(int a4, int a5, int a6, int a7)
{
    register int t13;

    if (a4 == 0) {
        cvFsError(0xC172778, a5, a6, a7);
        t13 = 0x0;
    } else {
        if ((*(int *)(((*(int *)((a4 + 0x0))) + 0x30))) != 0) {
            t13 = (((int (*)(int, int, int, int))((*(int *)(((*(int *)((a4 + 0x0))) + 0x30)))))((*(int *)((a4 + 0x4))), a5, a6, a7));
        } else {
            cvFsError(0xC172798, a5, a6, a7);
            t13 = 0x0;
        }
    }
    return t13;
}

int FUN_0c01a166(int a4)
{
    register int t0;
    register int t1;

    if (a4 != 0) {
        if (a4 != 1) {
            if (a4 != 2) {
                t0 = pdGetPeripheral(0x0);
                (((struct o0_uint *)0xC1EC688)->v) = t0;
                t1 = t0;
            } else {
                t0 = pdGetPeripheral(0xC);
                (((struct o8_uint *)0xC1EC688)->v) = t0;
                t1 = t0;
            }
            t0 = t1;
        } else {
            t1 = pdGetPeripheral(0x12);
            (((struct o4_uint *)0xC1EC688)->v) = t1;
            t0 = t1;
        }
        t1 = t0;
    } else {
        t0 = pdGetPeripheral(0x0);
        (((struct o0_uint *)0xC1EC688)->v) = t0;
        t1 = t0;
    }
    return t1;
}

int FUN_0c040dc8(int a4, int a5)
{
    register int t0;
    register int t2;
    register int t4;

    t0 = a5;
    if ((int)a5 < 0) {
        t0 = 0x0;
    }
    t2 = FUN_0c062270();
    t4 = FUN_0c040f22(0x8, (*(float *)0xC040E8C), ((float)(t2 + t0) * 1.0f), 1.0f);
    *(unsigned int *)0xC2AB7D8 = ((*(int *)0xC2AB7D8) + 0x1);
    return t4;
}

int FUN_0c040ec4(int a4, int a5)
{
    register int t0;
    register int t1;

    t0 = 0x0;
    if ((int)a5 < 0) {
    } else {
        t1 = a5;
        if ((int)a5 > (int)0x2) {
            t1 = 0x2;
        }
        t0 = t1;
    }
    t1 = FUN_0c040fb4(0x10, ((((struct o10_float *)0xC040F84)->v)), (((((struct oC_float *)0xC040F84)->v)) - (float)t0), ((((struct o0_float *)0xC040F84)->v)));
    *(unsigned int *)0xC2AB7D8 = ((*(int *)0xC2AB7D8) + 0x1);
    return t1;
}

int selectLoadAxes(void)
{

    FUN_0c07ff00();
    FUN_0c07ff00();
    FUN_0c07ff00();
    return (FUN_0c07ff00());
}

int Put_Remain_Time_Add(int a4, int a5)
{
    register int t0;
    register int t1;

    t0 = (((struct o4_int *)0xC2B2958)->v);
    if ((int)(*(int *)((t0 + 0x0))) > 0) {
        t1 = (((struct o0_int *)0xC2B2958)->v);
        if ((int)(*(int *)((t0 + 0x0))) < (int)0x3C) {
            *(unsigned int *)((t1 + 0x0)) = ((*(int *)((t1 + 0x0))) + (*(int *)((t0 + 0x0))));
            *(unsigned int *)((((((struct o4_int *)0xC2B2958)->v)) + 0x0)) = 0x0;
            t0 = 0x0;
        } else {
            *(unsigned int *)((t1 + 0x0)) = ((*(int *)((t1 + 0x0))) + 0x3C);
            t1 = (((struct o4_int *)0xC2B2958)->v);
            *(unsigned int *)((t1 + 0x0)) = ((*(int *)((t1 + 0x0))) - 0x3C);
            t0 = t1;
        }
        t1 = t0;
    }
    return t1;
}

int FUN_0c0690f0(void)
{
    register int t2;

    FUN_0c05f44c(0xC2BA5B0, 0x41);
    FUN_0c05f470(0xC2BA5B0, 0xC889200, 0.0f, 0.0f);
    *(float *)0xC2BA5B8 = 0.0f;
    t2 = *(signed char *)0xC2BA6A7;
    *(unsigned char *)0xC2BA6A7 = (t2 | 0x4);
    return (t2 | 0x4);
}

int FUN_0c06b640(void)
{
    register int t0;
    register int t1;
    register int t2;

    FUN_0c06b3d8(0xC2BA6C0, 0x1, 0x0, 0xC06B67A);
    t0 = *(signed char *)0xC2BA6C7;
    t1 = t0;
    if ((t0 & 128) != 0) {
        t0 = 0x0;
        for (;;) {
            t2 = FUN_0c06b686((0xC2BA6C8 + t0));
            t0 = (t0 + 0x64);
            if ((unsigned int)t0 >= (unsigned int)0x258) {
                break;
            }
        }
        t1 = t2;
    }
    return t1;
}



int FUN_0c07215c(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    if ((*(signed char *)0xC2C4DA1) != 3) {
        t0 = (a4 << 2);
        t1 = a5;
        t2 = a6;
        for (;;) {
            t3 = *(short *)((t1 + 0x0));
            t1 = (t1 + 0x2);
            t2 = (t2 - 0x1);
            *(unsigned short *)((t0 + 0xC2C4E20)) = t3;
            t0 = (t0 + 0x4);
            if (t2 == 0) {
                break;
            }
        }
    } else {
        t0 = (a4 << 2);
        t1 = a5;
        t2 = a6;
        for (;;) {
            t3 = *(int *)((t1 + 0x0));
            t1 = (t1 + 0x4);
            t2 = (t2 - 0x1);
            *(unsigned int *)((t0 + 0xC2C4E20)) = t3;
            t0 = (t0 + 0x4);
            if (t2 == 0) {
                break;
            }
        }
    }
    *(unsigned char *)0xC2C4DA0 = 0x1;
    return 0x1;
}

int nlInitMatrixStack(int a4, int a5, int a6)
{
    register int t0;
    register int t2;

    t0 = a6;
    if (a5 != ((a5 + 0x1F) & 0xFFFFFFE0)) {
        t0 = (a6 - 1);
    }
    t2 = t0;
    if ((int)t0 > (int)0x7FFF) {
        t2 = 0x7FFF;
    }
    *(unsigned short *)((a4 + 0x2)) = t2;
    *(unsigned short *)((a4 + 0x0)) = 0x0;
    *(unsigned int *)((a4 + 0x8)) = ((a5 + 0x1F) & 0xFFFFFFE0);
    *(unsigned int *)((a4 + 0x4)) = ((a5 + 0x1F) & 0xFFFFFFE0);
    nlUnitMatrix();
    nlGetMatrix((*(int *)((a4 + 0x8))));
    return (*(int *)((a4 + 0x4)));
}

int FUN_0c077bcc(int a4)
{
    register int t2;

    t2 = *(int *)(((kdGetDeviceInfo((unsigned char)(*(signed char *)((a4 + 0xC113E74))))) + 0x0));
    if ((t2 & 0xE) == 0xE) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c07b786(void)
{
    register int t1;
    register int t2;

    FUN_0c07b6c0(0x1, 0xA08000B0);
    t1 = 0x0;
    for (;;) {
        t2 = FUN_0c07b6e6(0xA08000B4);
        if (t2 != 0) {
            t1 = (t1 + 0x1);
            if ((int)t1 >= (int)0x400000) {
                break;
            }
            continue;
        }
        FUN_0c07b6c0(0x0, 0xA08000B0);
        return 0x0;
    }
    return 0xFFFFFF00;
}

int vmsfs_setdevicetype(int a4)
{
    register int t5;

    *(unsigned int *)(((*(int *)0xC2C8D28) + 0x0)) = (a4 & 0x1);
    if ((a4 & 0x1) == 1) {
        *(unsigned int *)(((*(int *)0xC2C8D28) + 0xC)) = 0xC16A49C;
        *(unsigned int *)(((*(int *)0xC2C8D28) + 0x10)) = 0xC16A4AE;
        t5 = (a4 & 0x1);
    } else {
        t5 = *(int *)0xC2C8D28;
        *(unsigned int *)((t5 + 0xC)) = 0xC16A4A6;
        *(unsigned int *)(((*(int *)0xC2C8D28) + 0x10)) = 0xC16A4B6;
    }
    return t5;
}

int vmsfs_resetwork(int a4)
{
    memset(((a4 * 0x154) + 0xC2C8D2C), 0x0, 0x154);
    *(unsigned int *)((((a4 * 0x154) + 0xC2C8D2C) + 0x1C)) = ((a4 * 0x4C) + 0xC2CD7EC);
    return 0x0;
}

float cos(float f4)
{
    int stk[1];

    *(float *)(((int)stk + 0)) = (_in_coss(f4));
    if (((*(int *)((((int)stk + 0) + 0x0))) & 0x7F800000) == 0x7F800000) {
        if (((*(int *)((((int)stk + 0) + 0x0))) & 0x7FFFFF) != 0) {
            *(unsigned int *)0xC2CF098 = 0x44D;
        } else {
            *(unsigned int *)0xC2CF098 = 0x44C;
        }
    }
    return (*(float *)(((int)stk + 0)));
}

int _duchek(float f4, float f5)
{
    int stk[2];
    int t4;

    *(float *)(((int)stk + 0)) = f5;
    (((struct o4_float *)(((int)stk + 0)))->v) = f4;
    if (((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) & 0x7FF00000) != 0x7FF00000) {
        return 0x0;
    }
    if ((((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) & 0xFFFFF) == 0) && (t4 = *(int *)((((((int)stk + 0) + 0x4) - 4) + 0x0)), t4 == 0)) {
        return 0x2;
    }
    return 0x1;
}

int kmiPutGlobalParam(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC2D0C9C;
    t1 = (((struct o0_int *)0xC2D0C3C)->v);
    (((struct o4_uint *)0xC2D0C3C)->v) = ((t0 << 2) + t1);
    kmiMemCopy8((*(int *)((((t0 << 2) + t1) + 0x0))), 0xC174134, ((*(int *)0xC174130) << 2));
    t0 = (((struct o4_int *)0xC2D0C3C)->v);
    *(unsigned int *)((t0 + 0x0)) = ((*(int *)((t0 + 0x0))) + ((*(int *)0xC174130) << 2));
    return ((((struct o4_int *)0xC2D0C3C)->v));
}

int syTmrGenSetClock(int a4)
{
    register int t1;
    register int t2;
    register int t3;

    t1 = a4;
    if (((unsigned short)a4 != 0) && (((unsigned short)a4 != 1) && (((unsigned short)a4 != 2) && (((unsigned short)a4 != 3) && ((unsigned short)a4 != 4))))) {
        t1 = 0x2;
    }
    t2 = *(signed char *)0xFFD80004;
    t3 = *(signed char *)0xFFD80004;
    (((struct o0_uchar *)0xFFD80004)->v) = (t3 & 0xFB);
    (((struct o24_ushort *)0xFFD80004)->v) = ((((((struct o24_short *)0xFFD80004)->v)) & 0xFFFFFFF8) | t1);
    (((struct o0_uchar *)0xFFD80004)->v) = t2;
    return (t3 & 0xFB);
}

int kdDevGetTimerInfo(int a4, int a5)
{
    register int t0;

    t0 = kdDevGetFD(a5, 0x8);
    if (t0 == 0) {
        return 0xFFFFFFFF;
    }
    *(unsigned char *)((a4 + 0x0)) = (*(signed char *)((t0 + 0x0)));
    *(unsigned char *)((a4 + 0x1)) = (*(signed char *)((t0 + 0x1)));
    *(unsigned char *)((a4 + 0x2)) = (*(signed char *)((t0 + 0x2)));
    *(unsigned char *)((a4 + 0x3)) = (*(signed char *)((t0 + 0x3)));
    return 0x0;
}

int FUN_0c1616f4(int a4, int a5, int a6, int a7)
{
    register int t2;
    register int t5;

    strncpy(0xC3029A0, a4, 0xFF);
    t2 = (((struct o0_int *)0xC174300)->v);
    t5 = (strncat(0xC3029A0, a5, 0xFF));
    if (t2 != 0) {
        t5 = (((int (*)(int, int, int, int))(t2))(((((struct o4_int *)0xC174300)->v)), 0xC3029A0, a6, a7));
    }
    return t5;
}

int mpdrv_hreset(int a4)
{
    register int t0;

    t0 = *(int *)0xC30817C;
    (((struct oFCC_uint *)(t0))->v) = (((((struct oFCC_int *)(t0))->v)) + (((((struct oFD8_int *)(t0))->v)) << 2));
    *(unsigned int *)((((((struct oFCC_int *)((*(int *)0xC30817C)))->v)) + 0x0)) = ((a4 << 16) | 0x300);
    (((struct oFD8_uint *)((*(int *)0xC30817C)))->v) = 0x1;
    t0 = *(int *)0xC30817C;
    (((struct oFDC_uint *)(t0))->v) = (((((struct oFDC_int *)(t0))->v)) + 0x4);
    return 0x0;
}

int mpdrv_sdckbdisable(int a4)
{
    register int t0;

    t0 = *(int *)0xC30817C;
    (((struct oFCC_uint *)(t0))->v) = (((((struct oFCC_int *)(t0))->v)) + (((((struct oFD8_int *)(t0))->v)) << 2));
    *(unsigned int *)((((((struct oFCC_int *)((*(int *)0xC30817C)))->v)) + 0x0)) = ((a4 << 16) | 0x400);
    (((struct oFD8_uint *)((*(int *)0xC30817C)))->v) = 0x1;
    t0 = *(int *)0xC30817C;
    (((struct oFDC_uint *)(t0))->v) = (((((struct oFDC_int *)(t0))->v)) + 0x4);
    return 0x0;
}

/* manual: r4-r7 and the three stack arguments go on to mpdrv_set_bwrite_ns unchanged */
int mpdrv_set_bwrite(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    register int t2;

    if (_builtin_tas((char *)(*(int *)0xC16A484)) == 0) {
        mpdrv_dpf(0xC171A6C);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_bwrite_ns(a4, a5, a6, a7, a8, a9, a10);
    *(unsigned char *)(((*(int *)0xC16A484) + 0x0)) = 0x0;
    return t2;
}

int FUN_0c0719e0(int a4)
{
    int stk[2];
    register int t1;

    *(unsigned char *)((((int)stk + 4) + 0x3)) = (signed char)((unsigned int)((unsigned int)a4 >> 16) >> 8);
    *(unsigned char *)((((int)stk + 4) + 0x2)) = (short)((unsigned int)a4 >> 16);
    *(unsigned char *)((((int)stk + 4) + 0x1)) = ((int)a4 >> 8);
    *(unsigned char *)((((int)stk + 4) + 0x0)) = a4;
    t1 = (*(int *)((((int)stk + 4) + 0x0)));
    *(int *)((int)stk + 0) = t1;
    return (kmSetFogTableColor(t1));
}

int FUN_0c071a20(int a4)
{
    int stk[2];
    register int t1;

    *(unsigned char *)((((int)stk + 4) + 0x3)) = (signed char)((unsigned int)((unsigned int)a4 >> 16) >> 8);
    *(unsigned char *)((((int)stk + 4) + 0x2)) = (short)((unsigned int)a4 >> 16);
    *(unsigned char *)((((int)stk + 4) + 0x1)) = ((int)a4 >> 8);
    *(unsigned char *)((((int)stk + 4) + 0x0)) = a4;
    t1 = (*(int *)((((int)stk + 4) + 0x0)));
    *(int *)((int)stk + 0) = t1;
    return (kmSetFogVertexColor(t1));
}

