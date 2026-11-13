/* Straight-line functions with calls and guards (batch gen_x): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_float { char p[0x20]; float v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_int { char p[0x28]; int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o30_float { char p[0x30]; float v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o34_float { char p[0x34]; float v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o38_float { char p[0x38]; float v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o64_float { char p[0x64]; float v; };
struct o6C_int { char p[0x6C]; int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o94_int { char p[0x94]; int v; };
struct o9C_uint { char p[0x9C]; unsigned int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oF4_uint { char p[0xF4]; unsigned int v; };
int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int ADXSTM_Close(int);
int ADXT_SetAutoRcvr(int, int);
int ADXT_SetReloadSct(int, int);
int DispCredit(int);
int FUN_0c01bde2(int);
int FUN_0c01d4ac(void);
int FUN_0c01e42c(void);
int FUN_0c01e672(void);
int FUN_0c01e6f0(void);
int FUN_0c01e6f8(int);
int FUN_0c01e990(int, int, int);
int FUN_0c01ecaa(int);
int FUN_0c01ee10(int, int);
int FUN_0c027fdc(float);
int FUN_0c030e54(void);
int FUN_0c03332c(int, int, int, int);
int FUN_0c03386a(int);
int FUN_0c0339fc(int);
int FUN_0c03e792(int, int);
int FUN_0c03f19a(void);
int FUN_0c047624(int);
int FUN_0c048262(int);
int FUN_0c0504ea(void);
int FUN_0c052dba(int, int, int, int, float, float, float, float, float);
int FUN_0c0552a8(void);
int FUN_0c058be4(int);
int FUN_0c058ca6(int, int);
int FUN_0c058e82(void);
int FUN_0c05b3d4(int, int);
int FUN_0c05b3fc(void);
int FUN_0c05b410(void);
int FUN_0c05b596(int, int, int);
int FUN_0c062258(int);
int FUN_0c067494(int, int, int, int, int, int, int);
int FUN_0c06b3d8(int, int, int, int);
int FUN_0c06bcfa(int);
int FUN_0c06e5f2(void);
float FUN_0c072140(int);
int FUN_0c073e10(int);
int FUN_0c0785a0(void);
int FUN_0c07ada0(int, int, int, int, float, float, float, float, float);
int FUN_0c07b6c0(int, int);
int FUN_0c07b6e6(int);
int FUN_0c07d27e(int, int, int);
int FUN_0c07d4bc(int, int, int);
int FUN_0c07e42c(int);
int FUN_0c07e598(int);
int FUN_0c07ff00(void);
int FUN_0c08f07e(int);
int FUN_0c14b460(void);
int FUN_0c14b478(void);
int FUN_0c14e3c8(int, int, int);
int FUN_0c14e916(int);
int FUN_0c14eb9c(int);
int FUN_0c14ebba(int);
int FUN_0c14edc8(void);
int FUN_0c14f248(void);
int FUN_0c14fbe8(void);
int FUN_0c14fca6(int, int, int);
int FUN_0c14ff0c(int);
int FUN_0c1505ac(int, int, int, int, int, int);
int FUN_0c16125c(void);
int FUN_0c161690(void);
int FUN_0c1616f4(int, int);
int FUN_0c1617e0(int, int, int, int);
int FUN_0c16195c(void);
int FUN_0c1620f0(void);
int FUN_0c1624ec(int);
int FUN_0c16592e(int, int, int, int, int);
int FUN_0c16ba68(int);
int FUN_0c16ba80(int);
int FUN_0c16bab0(int, ...);
int FUN_0c16c502(int, int);
int GotoMenu(void);
int SJMEM_Init(void);
int SJMEM_Reset(int);
int SJRBF_Init(void);
int SJRBF_Reset(int);
int SJUNI_Init(void);
int Voice_Execute(void);
extern int _builtin_get_imask(void);
extern void _builtin_ld_ext(float (*)[4]);
extern void _builtin_prefetch(void *);
extern void _builtin_set_imask(int);
extern void _builtin_st_ext(float (*)[4]);
int _ntInfWaitDone(void);
int adxf_SetCmdHstry(int, int, int, int, int);
int cvFsError(int, int, int, int);
int fmMngRead(int, int);
int gdc_InitStreamSongDisk(void);
int gdc_StopStreamVoiceAll(void);
int gdc_StreamVoiceVol(int, int);
int kdDevGetFD(int, int);
int kdGetDevice(int);
int kdGetDeviceInfo(int);
int kdIsChanged(int);
int kdSetBlockWrite(int, ...);
int kmChangeLatencyModel(int, int, int, int);
int kmiCopyToFrameBuffer(int, int, int);
int kmiMemCopy8(int, int, int);
int kmtex_ConvertSmallVQToMem(int, int, int, int);
int kmtex_CopyTextureToMem(int, int, int);
int memcpy(int, int, int);
int memset(int, int, int);
int mpdrv_exit(void);
int mwRnaEntryErrFunc(int, int);
int mwRnaGetTime(void);
int mwRnaInit(void);
int mwlSbGetDrctLvl(int);
int mwlSbGetFilter(int, int, int);
int mwlSbGetFx(int, int, int);
int mwlSbGetGain(int);
int mwlSbGetPitch(int, int, int);
int nlFree(int);
float nlLength(int, int);
int nlObjPutUseViewMatrix(int);
int nlOuterProduct(int, int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
float nlTan(int);
int pdExecPeripheralServer(void);
int pdVmsLcdBlt(int, int, int);
int pdVmsLcdIsReady(int);
int strncpy(int, int, int);
int syCfgGetLanguage(int);
int syCfgGetSoundMode(int, int, int);
int syChainDeleteHandler(int);
int syG2Write(int, int, int, int, int);
int thunk_FUN_0c1643e4(void);
int vmsfs_bank_lock_retry(int, int);
int vmsfs_c_getstate(int);
int vmsfs_c_setfname(int, int, int);
int vmsfs_c_setfunc(int, int);
int vmsfs_c_setparam(int, int, int, int, int, int, int);
int vmsfs_c_settime(int, int);
int vmsfs_c_setvolume(int, int);
int vmsfs_read_retry(int, int, int);
int FUN_0c032026(int a4, int a5);
int FUN_0c01bc3a(void);
int vmsio_ismount(int a4);
int FUN_0c01a7cc(void);
int FUN_0c0667cc(int a4);
int FUN_0c06cda4(int a4);
float FUN_0c06e7a0(int a4, float f4);
void FUN_0c072b60(int a4);
int buFormatDisk(int a4, int a5, int a6, int a7, int a8);
int FUN_0c07c93e(int a4, int a5);
int FUN_0c07e8c2(int a4, int a5);
int FUN_0c07e928(int a4, int a5);
int FUN_0c08f0c6(int a4, int a5);
int FUN_0c08f3f8(int a4);
int _fmtout_putstr(int a4, int a5, int a6, int a7);
int pdVmsLcdWrite(int a4, int a5, int a6);
float FUN_0c14ed0c(int a4, int a5, int a6, int a7);
int FUN_0c14fde2(int a4, int a5, int a6);
int kmiCreateDummyTranslucentObject(int a4, int a5);
int kmSetVertex(int a4, int a5, int a6, int a7);
void kdExitSystem(void);
int mwSbGetExPrm(int a4, int a5, int a6, int a7);
int FUN_0c03e712(int a4, int a5, int a6);
int FUN_0c04f574(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8);
int nlSysSetDirectListTypeLatency2V(int a4, int a5, int a6, int a7);
int buCloseFile(int a4);
int FUN_0c0777e8(int a4, int a5, int a6, int a7, int a8);
int FUN_0c07c44e(int a4);
int FUN_0c08e8b0(int a4, int a5, int a6, int a7);
int vmsfs_lockbank(int a4, int a5);
int FUN_0c14dfc6(int a4, int a5, int a6);
int kdDevGetStorageInfo(int a4, int a5);
void hudDrawJudgement2(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8);
int FUN_0c0583b8(void);
int FUN_0c058e20(void);
int FUN_0c05c084(int a4, int a5, int a6);
int FUN_0c06bc8c(void);
int nl_system_config_init(int a4);
int buLoadFile(int a4, int a5, int a6, int a7);
int nlSetIntrFunction(int a4, int a5, int a6, int a7);
float nlMvClipEdge(int a4, int a5, int a6, float f4, float f5, float f6);
int FUN_0c07b91c(int a4, int a5);
int FUN_0c07e36e(int a4);
int kmiInitializeDMA(void);
float kmiExCallBackFunc(int a4, int a5, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
int kmfSetCommonModifier(int a4, int a5);
int FUN_0c14efc2(int a4);
int kmLoadTexture(int a4, int a5, int a6, int a7);
int SJMEM_Create(int a4, int a5);
int SJRBF_Create(int a4, int a5, int a6);
int FUN_0c165c84(int a4, int a5);
int FUN_0c165ce6(int a4, int a5);
int FUN_0c165a7e(int a4);
int FUN_0c01e3cc(int a4);
int gdc_StreamInit(void);
int KillColliObj(int a4, int a5, int a6, int a7);
float FUN_0c030a26(int a4);
int FUN_0c03e07c(void);
int FUN_0c03e37e(void);
int FUN_0c040f22(int a4, float f4, float f5, float f6);
int FUN_0c0525d8(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8);
int FUN_0c052722(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8);
int FUN_0c053ff2(void);
int FUN_0c05d1f4(int a4, int a5, int a6, int a7);
float FUN_0c070ab0(int a4);
int buRenameFile(int a4, int a5, int a6);
int syExtChkDisableSyncDev(int a4);
int FUN_0c14de8a(void);
int FUN_0c14fd82(int a4, int a5);
int ADXF_OpenAfs(int a4, int a5);
int kmiInitializeBackGroundPlane(void);
int kmRenderDirect(void);
int mwlSbSetFx(int a4, int a5, int a6);
int cvFsAddDev(int a4, int a5, int a6, int a7);
int cvFsGetNumTr(int a4, int a5, int a6, int a7);
int FUN_0c01b81c(int a4, int a5, int a6, float f4);

int FUN_0c032026(int a4, int a5)
{
    FUN_0c03332c(a4, 0x3, 0x1, ((int)((unsigned int)a5 / (unsigned int)0x2710)));
    *(unsigned char *)((a4 + 0x3)) = 0x27;
    FUN_0c03332c((a4 + 0x4), 0x2, 0x3, ((int)((unsigned int)((int)((unsigned int)a5 / (unsigned int)0x64)) % (unsigned int)0x64)));
    *(unsigned char *)((a4 + 0x6)) = 0x22;
    return (FUN_0c03332c((a4 + 0x7), 0x2, 0x3, ((int)((unsigned int)a5 % (unsigned int)0x64))));
}

int FUN_0c01bc3a(void)
{
    FUN_0c048262(0xFFFFFFFF);
    FUN_0c01d4ac();
    (((struct o8_uint *)0xC1EC840)->v) = 0x0;
    if (((((struct o0_int *)0xC1EC71C)->v)) == 0) {
        FUN_0c047624(0x1);
    } else {
        FUN_0c047624(0x2);
        FUN_0c01e990(0xC097484, 0x1, 0x0);
    }
    *(unsigned int *)0xC177D58 = 0x7;
    FUN_0c030e54();
    *(unsigned int *)0xC1ECC90 = 0x0;
    (((struct o8_uint *)0xC1EC840)->v) = 0x0;
    (((struct o30_uint *)0xC1EC71C)->v) = 0x0;
    (((struct o28_uint *)0xC1EC71C)->v) = (((((struct o28_int *)0xC1EC71C)->v)) + 0x1);
    (((struct o0_uint *)0xC1EC840)->v) = 0x11;
    return 0x11;
}

int vmsio_ismount(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(int *)(((a4 << 2) + 0xC11833C));
    t1 = kdGetDevice(t0);
    t2 = kdGetDeviceInfo(t0);
    if ((*(signed char *)((t1 + 0x0))) == 0) {
        return 0x0;
    }
    t1 = kdIsChanged(t0);
    if (t1 != 0) {
        return 0x0;
    }
    if (((*(int *)((t2 + 0x0))) & 2) == 0) {
        return 0x0;
    }
    return 0x1;
}

int FUN_0c01a7cc(void)
{
    int t0;
    register float u18;
    register float u19;

    t0 = FUN_0c14b460();
    if ((t0 != 6) && (t0 != 0)) {
    } else {
        FUN_0c14b478();
    }
    pdExecPeripheralServer();
    if (((((struct o4_int *)0xC11CFF4)->v)) != 0) {
        Voice_Execute();
    }
    FUN_0c14edc8();
    if ((*(int *)0xC1EC734) != 2) {
        *(unsigned int *)0xC1EC848 = ((*(int *)0xC1EC848) + 0x1);
    } else {
        if ((*(int *)0xC1EC848) == 0) {
            (((struct o0_float *)0xC11CFF4)->v) = 0.0f;
        }
        u18 = (((struct o0_float *)0xC11CFF4)->v);
        u19 = *(float *)0xC01A8B0;
        (((struct o0_float *)0xC11CFF4)->v) = (u18 + u19);
        *(unsigned int *)0xC1EC848 = (int)(u18 + u19);
    }
    return 0x0;
}

int FUN_0c0667cc(int a4)
{
    int stk[3];

    (((struct o44_float *)(a4))->v) = 0.0f;
    FUN_0c073e10((a4 + 0x40));
    (((struct o64_float *)(a4))->v) = 0.0f;
    FUN_0c073e10((a4 + 0x60));
    nlOuterProduct(((a4 + 0x40) + 0x20), (a4 + 0x40), ((a4 + 0x40) + 0x10));
    FUN_0c067494(a4, 0x1, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8));
    *(volatile int *)((a4 + 0xAC));
    FUN_0c07ff00();
    (((struct oF4_uint *)(a4))->v) = 0x12C;
    (((struct o80_uint *)(a4))->v) = (((((struct o80_int *)(a4))->v)) + 0x1);
    return 0x80;
}

int FUN_0c06cda4(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(int *)0xC1EC720;
    t1 = t0;
    if (t0 != 2) {
        t0 = *(int *)0xC177D58;
        if (t0 != 0) {
            t2 = t0;
            if (t0 != 13) {
            } else {
                *(unsigned int *)0xC177D58 = 0xC;
                t0 = FUN_0c062258(a4);
                if (t0 != 0) {
                    if ((*(int *)((a4 + 0x14))) == 0) {
                        (((struct o0_uint *)0xC2BB3D4)->v) = 0x1;
                    } else {
                        (((struct o0_uint *)0xC2BB3D4)->v) = 0x2;
                    }
                } else {
                    (((struct o0_uint *)0xC2BB3D4)->v) = 0x0;
                }
                (((struct o4_uint *)0xC2BB3D4)->v) = 0x0;
                (((struct oC_uint *)0xC2BB3D4)->v) = 0x0;
                *(unsigned int *)0xC13C358 = a4;
                t2 = t0;
            }
            t0 = t2;
        } else {
            FUN_0c06e5f2();
            *(unsigned int *)0xC177D58 = 0xC;
            t2 = FUN_0c062258(a4);
            if (t2 != 0) {
                if ((*(int *)((a4 + 0x14))) == 0) {
                    (((struct o0_uint *)0xC2BB3D4)->v) = 0x1;
                } else {
                    (((struct o0_uint *)0xC2BB3D4)->v) = 0x2;
                }
            } else {
                (((struct o0_uint *)0xC2BB3D4)->v) = 0x0;
            }
            (((struct o4_uint *)0xC2BB3D4)->v) = 0x0;
            (((struct oC_uint *)0xC2BB3D4)->v) = 0x0;
            *(unsigned int *)0xC13C358 = a4;
            t0 = t2;
        }
        t1 = t0;
    }
    return t1;
}

float FUN_0c06e7a0(int a4, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;

    t0 = *(int *)((a4 + 0x0));
    t1 = (t0 << 2);
    t2 = 0x0;
    t3 = ((a4 + 0x8) + (t0 << 2));
    t4 = (a4 + 0x8);
    for (;;) {
        if ((unsigned int)0x18 <= (unsigned int)t1) {
            t1 = t3;
            t1 = (t1 - t4);
            t1 = ((unsigned int)t1 >> 1);
            t1 = (t1 & 0xFFFFFFFC);
            if (!(f4 > ((*(float *)((t4 + t1)))))) {
                t3 = t4;
                t3 = (t3 + t1);
            } else {
                t2 = (t2 + t1);
                t4 = (t4 + t1);
            }
            continue;
        }
        break;
    }
    t1 = t2;
    t2 = (t4 + 0x4);
    for (;;) {
        t4 = (unsigned int)t2 < (unsigned int)t3;
        u0 = *(float *)((t2 + 0x0));
        t2 = (t2 + 0x4);
        if (t4) {
            t1 = (t1 + 0x4);
            if (!(f4 > u0)) {
                break;
            }
            continue;
        }
        t2 = (t2 - 8);
        u0 = *(float *)((t2 + 0x0));
        t1 = (t1 << 2);
        t1 = (t1 + (((a4 + 0x8) + (t0 << 2)) + 0x4));
        u1 = ((f4 - u0) * (f4 - u0));
        u2 = *(float *)((t1 + 0x0));
        t1 = (t1 + 0x4);
        u3 = (u1 * (f4 - u0));
        u1 = *(float *)((t1 + 0x0));
        t1 = (t1 + 0x4);
        u4 = ((f4 - u0) * (f4 - u0));
        u5 = (u3 * u2);
        u5 = u5 + u1 * u4;
        u1 = *(float *)((t1 + 0x0));
        t1 = (t1 + 0x4);
        u2 = u5;
        u2 = u2 + u1 * ((f4 - u0));
        return ((*(float *)((t1 + 0x0))) + u2);
    }
    u0 = *(float *)(((t2 - 8) + 0x0));
    u1 = ((f4 - u0) * (f4 - u0));
    u2 = (u1 * (f4 - u0));
    u1 = ((f4 - u0) * (f4 - u0));
    u3 = (u2 * (*(float *)(((((t1 - 4) << 2) + (((a4 + 0x8) + (t0 << 2)) + 0x4)) + 0x0))));
    u3 = u3 + ((((struct o4_float *)((((t1 - 4) << 2) + (((a4 + 0x8) + (t0 << 2)) + 0x4))))->v)) * u1;
    u1 = u3;
    u1 = u1 + ((((struct o4_float *)(((((t1 - 4) << 2) + (((a4 + 0x8) + (t0 << 2)) + 0x4)) + 0x4)))->v)) * ((f4 - u0));
    return (((((struct o4_float *)((((((t1 - 4) << 2) + (((a4 + 0x8) + (t0 << 2)) + 0x4)) + 0x4) + 0x4)))->v)) + u1);
}

void FUN_0c072b60(int a4)
{
    register int t1;
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
    register float u16;
    register float u17;
    register float u18;
    float u19[16];

    t1 = a4;
    if (a4 == 0) {
        t1 = (*(int *)0xC2BF948);
    }
    u3 = *(float *)((t1 + 0x0));
    u4 = (((struct o4_float *)(t1))->v);
    u5 = (((struct o4_float *)((t1 + 0x4)))->v);
    u6 = (((struct o4_float *)(((t1 + 0x4) + 0x4)))->v);
    u7 = (((struct o4_float *)((((t1 + 0x4) + 0x4) + 0x4)))->v);
    u8 = (((struct o4_float *)(((((t1 + 0x4) + 0x4) + 0x4) + 0x4)))->v);
    u9 = (((struct o4_float *)((((((t1 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4)))->v);
    u10 = (((struct o4_float *)(((((((t1 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4)))->v);
    u11 = (((struct o4_float *)((((((((t1 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4)))->v);
    u12 = (((struct o4_float *)(((((((((t1 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4)))->v);
    u13 = (((struct o4_float *)((((((((((t1 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4)))->v);
    u14 = (((struct o4_float *)(((((((((((t1 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4)))->v);
    u15 = (((struct o4_float *)((((((((((((t1 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4)))->v);
    u16 = (((struct o4_float *)(((((((((((((t1 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4)))->v);
    u17 = (((struct o4_float *)((((((((((((((t1 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4)))->v);
    u18 = (((struct o4_float *)(((((((((((((((t1 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4)))->v);
    _builtin_st_ext((float (*)[4])u19);
    u19[0] = u3;
    u19[1] = u4;
    u19[2] = u5;
    u19[3] = u6;
    u19[4] = u7;
    u19[5] = u8;
    u19[6] = u9;
    u19[7] = u10;
    u19[8] = u11;
    u19[9] = u12;
    u19[10] = u13;
    u19[11] = u14;
    u19[12] = u15;
    u19[13] = u16;
    u19[14] = u17;
    u19[15] = u18;
    _builtin_ld_ext((float (*)[4])u19);
}

int buFormatDisk(int a4, int a5, int a6, int a7, int a8)
{
    register int t0;

    t0 = vmsfs_c_getstate(a4);
    if (t0 != 0) {
        return 0xFFFFFFFF;
    }
    vmsfs_c_setparam(a4, a4, a5, a6, a7, a8, 0x0);
    vmsfs_c_setvolume(a4, a5);
    vmsfs_c_settime(a4, a7);
    vmsfs_c_setfunc(a4, 0x3);
    return 0x0;
}

int FUN_0c07c93e(int a4, int a5)
{
    register int t0;
    register int t1;

    if ((unsigned int)a4 < (unsigned int)0x8) {
        t0 = FUN_0c07b6e6((*(int *)0xC2C3E60));
        if (a5 != 0x4A0) {
            if (a5 != 0x10A0) {
                return 0xFFFFFF80;
            }
            t1 = FUN_0c07b6e6(((0xA0800000 + t0) + ((((a4 << 2) << 1) + 0x5) << 2)));
            return ((int)(t1 & 0x7F00) >> 8);
        }
        t1 = FUN_0c07b6e6(((0xA0800000 + t0) + ((((a4 << 2) << 1) + 0x5) << 2)));
        return (t1 & 0x7F);
    }
    return 0xFFFFFF80;
}

int FUN_0c07e8c2(int a4, int a5)
{
    int stk[1];
    register int t0;
    register int t26;
    register int t3;

    *(unsigned int *)(((int)stk + 0)) = a4;
    t0 = FUN_0c07e42c(a4);
    t26 = t0;
    if (t0 == 0) {
        FUN_0c07e598(((int)stk + 0));
        t3 = *(int *)0xC147740;
        if ((*(int *)(((int)stk + 0))) == 1) {
            strncpy(a5, (t3 + 0x8), 0x1C);
            t26 = t0;
        } else {
            if ((*(int *)(((int)stk + 0))) == 2) {
                strncpy(a5, (0x16C + t3), 0x1C);
                t26 = t0;
            } else {
                t26 = 0xFFFFFFFD;
                if ((*(int *)(((int)stk + 0))) == 3) {
                    strncpy(a5, (0x99C + t3), 0x28);
                    t26 = t0;
                }
            }
        }
    }
    return t26;
}

int FUN_0c07e928(int a4, int a5)
{
    int stk[1];
    register int t0;
    register int t26;
    register int t3;

    *(unsigned int *)(((int)stk + 0)) = a4;
    t0 = FUN_0c07e42c(a4);
    t26 = t0;
    if (t0 == 0) {
        FUN_0c07e598(((int)stk + 0));
        t3 = *(int *)0xC147740;
        if ((*(int *)(((int)stk + 0))) == 1) {
            strncpy(a5, (t3 + 0x24), 0x10);
            t26 = t0;
        } else {
            if ((*(int *)(((int)stk + 0))) == 2) {
                strncpy(a5, (0x188 + t3), 0x10);
                t26 = t0;
            } else {
                t26 = 0xFFFFFFFD;
                if ((*(int *)(((int)stk + 0))) == 3) {
                    strncpy(a5, (0x9C4 + t3), 0x10);
                    t26 = t0;
                }
            }
        }
    }
    return t26;
}

int FUN_0c08f0c6(int a4, int a5)
{
    int stk[5];
    register int t3;

    *(unsigned int *)(((int)stk + 16)) = a4;
    *(unsigned int *)(((int)stk + 12)) = a5;
    *(unsigned int *)(((int)stk + 4)) = (FUN_0c08f07e((*(int *)(((int)stk + 16)))));
    t3 = FUN_0c08f07e((*(int *)(((int)stk + 12))));
    *(unsigned int *)(((int)stk + 0)) = t3;
    if ((*(int *)(((int)stk + 4))) != t3) {
        return 0x0;
    }
    *(unsigned int *)(((int)stk + 8)) = 0x0;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 8))) >= (int)(*(int *)(((int)stk + 4)))) {
            return 0x1;
        }
        if ((signed char)(*(signed char *)(((*(int *)(((int)stk + 16))) + (*(int *)(((int)stk + 8)))))) != (signed char)(*(signed char *)(((*(int *)(((int)stk + 12))) + (*(int *)(((int)stk + 8))))))) {
            break;
        }
        *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x1);
    }
    return 0x0;
}

int FUN_0c08f3f8(int a4)
{
    int stk[5];
    register int t0;
    register int t14;

    *(unsigned int *)(((int)stk + 16)) = a4;
    t0 = *(int *)(((int)stk + 16));
    *(unsigned int *)(((int)stk + 0)) = ((t0 * 0x154) + 0xC2C8D2C);
    *(unsigned int *)(((int)stk + 4)) = (*(int *)(((*(int *)((((t0 * 0x154) + 0xC2C8D2C) + 0x1C))) + 0x10)));
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 12))) >= (int)(*(int *)(((int)stk + 4)))) {
            return 0x0;
        }
        t14 = vmsfs_read_retry((*(int *)(((int)stk + 16))), ((*(int *)(((*(int *)(((*(int *)(((int)stk + 0))) + 0x1C))) + 0xC))) + (*(int *)(((int)stk + 12)))), ((*(int *)(((*(int *)(((int)stk + 0))) + 0x24))) + (((*(int *)(((int)stk + 12))) << 8) << 1)));
        *(unsigned int *)(((int)stk + 8)) = t14;
        if ((int)t14 < 0) {
            break;
        }
        *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x1);
    }
    return t14;
}

int _fmtout_putstr(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t0 = *(int *)((a6 + 0x0));
    if (t0 == 1) {
        t1 = memcpy((*(int *)((a6 + 0x4))), a4, a5);
        *(unsigned int *)((a6 + 0x4)) = ((*(int *)((a6 + 0x4))) + a5);
        *(unsigned int *)((a6 + 0x8)) = ((*(int *)((a6 + 0x8))) + a5);
        t2 = t1;
    } else {
        t1 = t0;
        if ((int)a5 > 0) {
            t0 = a4;
            t3 = 0x0;
            for (;;) {
                t5 = *(signed char *)((t0 + 0x0));
                t0 = (t0 + 0x1);
                t4 = ((int (*)(int, int, int, int))((*(int *)((a6 + 0xC)))))(t5, (*(int *)((a6 + 0x4))), a6, a7);
                if (t4 != -1) {
                    t3 = (t3 + 0x1);
                    *(unsigned int *)((a6 + 0x8)) = ((*(int *)((a6 + 0x8))) + 0x1);
                    if ((int)t3 >= (int)a5) {
                        break;
                    }
                    continue;
                }
                break;
            }
            t1 = t4;
        }
        t2 = t1;
    }
    return t2;
}

int pdVmsLcdWrite(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = pdVmsLcdIsReady(a4);
    t1 = 0xFFFFFFFE;
    if (t0 == 0) {
    } else {
        t0 = *(signed char *)((a4 + 0xC17148C));
        pdVmsLcdBlt((((((((unsigned char)t0 << 1) + (unsigned char)t0) << 2) << 2) << 2) + 0xC2D12FC), a5, a6);
        t2 = kdSetBlockWrite(0x0, (((((((unsigned char)t0 << 1) + (unsigned char)t0) << 2) << 2) << 2) + 0xC2D12FC), 0x30);
        t0 = 0x0;
        if ((int)t2 < 0) {
            t0 = 0xFFFFFFFF;
        }
        t1 = t0;
    }
    return t1;
}

float FUN_0c14ed0c(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register float u0;

    t1 = FUN_0c14e916(a4);
    u0 = 0.0f;
    if (((int)t1 >= (int)0x2) && (t0 = *(int *)((a4 + 0x14)), t0 != 0)) {
        t0 = *(int *)((a4 + 0x14));
        t1 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x24)))))(t0, 0x1, a6, a7);
        t0 = FUN_0c14ebba(a4);
        u0 = ((float)(((((int)((int)t1 / (int)((((t0 << 2) << 1) + t0) << 1))) << 2) << 2) << 1) / (float)(FUN_0c14eb9c(a4)));
    }
    return u0;
}

int FUN_0c14fde2(int a4, int a5, int a6)
{
    int stk[17];
    register int t2;

    *(unsigned int *)(((int)stk + 20)) = a5;
    *(unsigned int *)(((int)stk + 24)) = a6;
    *(int *)((int)stk + 4) = ((int)stk + 8);
    *(int *)((int)stk + 0) = (((int)stk + 4) + 0xC);
    t2 = FUN_0c1505ac((*(int *)(((int)stk + 20))), (*(int *)(((int)stk + 24))), (((int)stk + 0) + 0x1C), (((int)stk + 0) + 0xC), (((int)stk + 4) + 0xC), ((int)stk + 8));
    if ((int)t2 < 0) {
        return 0xFFFFFFFD;
    }
    strncpy((a4 + 0x34), (((int)stk + 8) + 0x14), 0x28);
    (((struct o5C_uint *)(a4))->v) = (*(int *)(((int)stk + 12)));
    *(unsigned int *)((a4 + 0x30)) = (*(int *)(((int)stk + 16)));
    *(unsigned int *)((a4 + 0xC)) = (*(int *)(((int)stk + 8)));
    *(unsigned int *)((a4 + 0x10)) = ((((*(int *)(((int)stk + 8))) << 8) << 2) << 1);
    return 0x0;
}

int kmiCreateDummyTranslucentObject(int a4, int a5)
{
    register float u0;

    *(unsigned int *)(((0xA5000000 | a4) + 0x0)) = ((((unsigned int)(a4 - a5) >> 2) + 0x2) | 0x80200000);
    *(unsigned int *)(((0xA5000000 | a4) + 0x4)) = 0xF0000000;
    *(unsigned int *)((((0xA5000000 | a4) + 0x8) + 0x0)) = 0x800000;
    *(unsigned int *)((((0xA5000000 | a4) + 0x8) + 0x4)) = 0x24900000;
    *(unsigned int *)((((0xA5000000 | a4) + 0x8) + 0x8)) = 0x0;
    (((struct oC_float *)(((0xA5000000 | a4) + 0x8)))->v) = 0.0f;
    (((struct o10_float *)(((0xA5000000 | a4) + 0x8)))->v) = 0.0f;
    u0 = (((struct o0_float *)0xC15BC40)->v);
    (((struct o14_float *)(((0xA5000000 | a4) + 0x8)))->v) = u0;
    *(unsigned int *)((((0xA5000000 | a4) + 0x8) + 0x18)) = 0x80FF0000;
    (((struct o1C_float *)(((0xA5000000 | a4) + 0x8)))->v) = 0.0f;
    (((struct o20_float *)(((0xA5000000 | a4) + 0x8)))->v) = ((((struct o8_float *)0xC15BC40)->v));
    (((struct o24_float *)(((0xA5000000 | a4) + 0x8)))->v) = u0;
    *(unsigned int *)((((0xA5000000 | a4) + 0x8) + 0x28)) = 0x8000FF00;
    (((struct o2C_float *)(((0xA5000000 | a4) + 0x8)))->v) = ((((struct o10_float *)0xC15BC40)->v));
    (((struct o30_float *)(((0xA5000000 | a4) + 0x8)))->v) = 0.0f;
    (((struct o34_float *)(((0xA5000000 | a4) + 0x8)))->v) = u0;
    *(unsigned int *)((((0xA5000000 | a4) + 0x8) + 0x38)) = 0x800000FF;
    return a4;
}

int kmSetVertex(int a4, int a5, int a6, int a7)
{
    register int t1;
    int t3;
    register int t7;

    *(unsigned int *)0xC2D0C30 = a6;
    t1 = *(int *)(((*(int *)((a4 + 0x8))) + 0x0));
    t3 = *(int *)(((t1 << 2) + (*(int *)((a4 + 0x0)))));
    (((struct o0_uint *)0xFF000038)->v) = ((unsigned int)((unsigned int)t3 >> 16) >> 8);
    (((struct o4_uint *)0xFF000038)->v) = ((unsigned int)((unsigned int)t3 >> 16) >> 8);
    kmiMemCopy8(((0x3FFFFFF & t3) | 0xE0000000), a5, a7);
    _builtin_prefetch((void *)((0x3FFFFFF & t3) | 0xE0000000));
    if (a7 == 64) {
        _builtin_prefetch((void *)(((0x3FFFFFF & t3) | 0xE0000000) + 0x20));
    }
    t7 = *(int *)((a4 + 0x0));
    *(unsigned int *)(((t1 << 2) + t7)) = ((*(int *)(((t1 << 2) + t7))) + (((a7 >> 1) >> 1) << 2));
    return 0x0;
}

void kdExitSystem(void)
{
    register int t0;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    *(unsigned int *)0xA05F6920 = ((*(int *)0xA05F6920) & 0xFFFFCFFF);
    syChainDeleteHandler(((((struct o8_int *)0xC3021D8)->v)));
    syChainDeleteHandler(((((struct oC_int *)0xC3021D8)->v)));
    syChainDeleteHandler(((((struct o4_int *)0xC3021D8)->v)));
    syChainDeleteHandler(((((struct o0_int *)0xC3021D8)->v)));
    mpdrv_exit();
    memset(0xC302264, 0x0, 0x240);
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
}

int mwSbGetExPrm(int a4, int a5, int a6, int a7)
{
    register int t1;

    if (a5 == 0) {
        return mwlSbGetFx(a4, a6, a7);
    }
    if (a5 == 1) {
        return mwlSbGetPitch(a4, a6, a7);
    }
    if (a5 == 2) {
        t1 = mwlSbGetGain(a4);
        *(unsigned int *)((a6 + 0x0)) = t1;
        *(unsigned int *)((a7 + 0x0)) = 0x0;
        return t1;
    }
    if (a5 == 3) {
        return mwlSbGetFilter(a4, a6, a7);
    }
    if (a5 == 4) {
        t1 = mwlSbGetDrctLvl(a4);
        *(unsigned int *)((a6 + 0x0)) = t1;
    } else {
        *(unsigned int *)((a6 + 0x0)) = 0x0;
        t1 = a5;
    }
    *(unsigned int *)((a7 + 0x0)) = 0x0;
    return t1;
}

int FUN_0c03e712(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t0 = syCfgGetSoundMode(0xC2A4654, a5, a6);
    if (t0 != 0) {
        (((struct o0_uint *)0xC2A4654)->v) = 0x0;
    }
    t0 = syCfgGetLanguage(0xC2A4658);
    if (t0 != 0) {
        (((struct o4_uint *)0xC2A4654)->v) = 0x1;
        t1 = t0;
    } else {
        t0 = (((struct o4_int *)0xC2A4654)->v);
        switch (t0) {
        case 0:
            (((struct o4_uint *)0xC2A4654)->v) = 0x0;
            break;
        case 1:
            (((struct o4_uint *)0xC2A4654)->v) = 0x1;
            break;
        case 2:
            (((struct o4_uint *)0xC2A4654)->v) = 0x2;
            break;
        case 3:
            (((struct o4_uint *)0xC2A4654)->v) = 0x3;
            break;
        case 4:
            (((struct o4_uint *)0xC2A4654)->v) = 0x4;
            break;
        default:
            (((struct o4_uint *)0xC2A4654)->v) = 0x1;
            break;
        }
        t1 = t0;
    }
    return t1;
}

int FUN_0c04f574(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8)
{
    register int t0;
    register int t1;
    register int t8;

    (((struct o28_uint *)0xC2B1BA4)->v) = 0x0;
    t0 = 0xC1317E0;
    t1 = 0x0;
    for (;;) {
        (((struct o0_uint *)0xC2B1BA4)->v) = (*(int *)((t0 + 0x0)));
        (((struct o4_float *)0xC2B1BA4)->v) = (float)(*(int *)((t0 + 0x4)));
        (((struct o8_float *)0xC2B1BA4)->v) = (float)((*(int *)((t0 + 0x8))) + 0x35);
        (((struct o38_uint *)0xC2B1BA4)->v) = (*(int *)((0xC131804 + ((*(int *)(((*(int *)0xC2B1D00) + 0x0))) << 2))));
        t0 = (t0 + 0xC);
        t8 = FUN_0c07ada0(0xC2B1BA4, a5, a6, a7, f4, f5, f6, f7, f8);
        t1 = (t1 + 0x1);
        if ((unsigned int)t1 >= (unsigned int)0x3) {
            break;
        }
    }
    return t8;
}

int nlSysSetDirectListTypeLatency2V(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = 0x20;
    if (a4 != 0) {
        t1 = 0x22;
        if (a4 != 2) {
            t1 = 0x24;
            if (a4 != 4) {
                t1 = 0x20;
            }
        }
        t0 = t1;
    }
    t1 = (((struct o14_int *)0xC2BB490)->v);
    if (t1 == 1) {
        (((struct o0_uint *)0xC2BB490)->v) = t0;
        return t1;
    }
    return kmChangeLatencyModel(0x1, t0, a6, a7);
}

int buCloseFile(int a4)
{
    register int t0;
    register int t1;

    t0 = *(int *)((a4 + 0x28));
    t1 = vmsfs_c_getstate(t0);
    if (t1 != 0) {
        return 0xFFFFFFFF;
    }
    vmsfs_c_setparam(t0, a4, 0x1, 0x0, 0x0, 0x0, 0x0);
    vmsfs_c_setfunc(t0, 0x4);
    return 0x0;
}

int FUN_0c0777e8(int a4, int a5, int a6, int a7, int a8)
{
    register int t0;

    t0 = vmsfs_c_getstate(a4);
    if (t0 != 0) {
        return 0xFFFFFFFF;
    }
    vmsfs_c_setparam(a4, a4, a5, a6, a7, a8, 0x0);
    vmsfs_c_setfname(a4, a5, a5);
    vmsfs_c_setfunc(a4, 0x14);
    return 0x0;
}

int FUN_0c07c44e(int a4)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC2C3EA4;
    t1 = 0xFFFFFFFF;
    if ((*(int *)((t0 + 0x0))) != 0) {
        t1 = 0x1;
        if ((unsigned char)(*(int *)((t0 + 0x0))) == 4) {
            t1 = 0xFFFFFFFF;
            if (((*(int *)((t0 + 0x0))) & 0x7F00) == 0x100) {
            } else {
                syG2Write(0xC113FC4, (*(int *)((t0 + 0x1C))), 0x4, 0x19, 0x1);
                FUN_0c07b6c0((*(int *)(((*(int *)0xC2C3EA4) + 0x8))), ((*(int *)(((*(int *)0xC2C3EA4) + 0x1C))) + 0x8));
                FUN_0c07b6c0(0x1, 0xA08000B0);
                t0 = *(int *)0xC2C3EA4;
                *(unsigned int *)((t0 + 0x0)) = ((*(int *)((t0 + 0x0))) + 0x1);
                t1 = 0x0;
            }
        }
    }
    return t1;
}

int FUN_0c08e8b0(int a4, int a5, int a6, int a7)
{
    int stk[5];
    register int t0;
    register int t11;

    *(unsigned int *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    t0 = *(int *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 0)) = ((t0 * 0x154) + 0xC2C8D2C);
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((*(int *)((((t0 * 0x154) + 0xC2C8D2C) + 0x1C))) + 0x30))) - 1);
    for (;;) {
        if ((int)(*(int *)(((int)stk + 4))) < (int)(*(int *)(((int)stk + 8)))) {
            return 0xFFFFFFFF;
        }
        t11 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC2C8D28) + 0xC)))))((*(int *)(((*(int *)(((int)stk + 0))) + 0x24))), ((*(int *)(((int)stk + 4))) << 1), a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
        if ((unsigned short)t11 == 0xFFFC) {
            break;
        }
        *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) - 1);
    }
    return (*(int *)(((int)stk + 4)));
}

int vmsfs_lockbank(int a4, int a5)
{
    register int t1;

    if ((*(signed char *)(((a4 * 0x154) + 0xC2C8D2E))) == 0) {
        return 0xFFFFFF01;
    }
    t1 = vmsio_ismount(a4);
    if (t1 == 0) {
        return 0xFFFFFF01;
    }
    if ((*(signed char *)(((a4 * 0x154) + 0xC2C8D34))) == 0) {
        return 0xFFFFFF01;
    }
    return (vmsfs_bank_lock_retry(a4, a5));
}

int FUN_0c14dfc6(int a4, int a5, int a6)
{
    int stk[12];
    register int t3;
    register int t5;
    register int t14;

    *(unsigned int *)(((int)stk + 24)) = a5;
    *(unsigned int *)(((int)stk + 20)) = a6;
    *(unsigned int *)(((int)stk + 28)) = ((((struct o94_int *)(a4))->v));
    *(int *)((int)stk + 4) = (((int)stk + 8) + 0x8);
    *(int *)((int)stk + 0) = (((int)stk + 4) + 0x8);
    t3 = FUN_0c1505ac((*(int *)(((int)stk + 24))), (*(int *)(((int)stk + 20))), 0xC2D1B9C, (((int)stk + 0) + 0x8), (((int)stk + 4) + 0x8), (((int)stk + 8) + 0x8));
    if (t3 == 0) {
        t5 = (*(int *)(((int)stk + 16)));
        *(int *)((int)stk + 4) = t5;
        t14 = (FUN_0c16592e((*(int *)(((int)stk + 28))), 0xC2D1B9C, (*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 12))), t5));
    } else {
        FUN_0c1617e0((*(int *)(((int)stk + 24))), (*(int *)(((int)stk + 20))), (((int)stk + 8) + 0x18), 0x10);
        t14 = (FUN_0c1616f4(0xC170440, (((int)stk + 8) + 0x18)));
    }
    return t14;
}

int kdDevGetStorageInfo(int a4, int a5)
{
    register int t0;

    t0 = kdDevGetFD(a5, 0x2);
    if (t0 == 0) {
        return 0xFFFFFFFF;
    }
    *(unsigned short *)((a4 + 0x0)) = ((unsigned char)(*(signed char *)((t0 + 0x0))) + 0x1);
    *(unsigned short *)((a4 + 0x2)) = (((((unsigned char)(*(signed char *)((t0 + 0x1))) + 0x1) << 2) << 2) << 1);
    *(unsigned short *)((a4 + 0x4)) = (((unsigned int)((unsigned int)(unsigned char)(*(signed char *)(((t0 + 0x2) + 0x0))) >> 2) >> 2) & 0xF);
    *(unsigned short *)((a4 + 0x6)) = ((unsigned char)(*(signed char *)(((t0 + 0x2) + 0x0))) & 0xF);
    *(unsigned short *)((a4 + 0x8)) = (((unsigned int)(unsigned char)(*(signed char *)((t0 + 0x3))) >> 7) & 0x1);
    return 0x0;
}

void hudDrawJudgement2(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8)
{
    register int t0;

    t0 = *(int *)0xC2B1E00;
    if ((int)t0 > (int)0xFFFFFFFE) {
        if ((int)t0 <= (int)0x2) {
            (((struct o0_uint *)0xC2B2680)->v) = (*(int *)(((t0 << 2) + 0xC131EEC)));
            (((struct o4_float *)0xC2B2680)->v) = ((((struct o0_float *)0xC051714)->v));
            (((struct o8_float *)0xC2B2680)->v) = ((((struct o4_float *)0xC051714)->v));
            (((struct o10_float *)0xC2B2680)->v) = 1.0f;
            (((struct o14_float *)0xC2B2680)->v) = 1.0f;
            (((struct o2C_float *)0xC2B2680)->v) = 1.0f;
            (((struct o28_uint *)0xC2B2680)->v) = 0x0;
            (((struct o34_uint *)0xC2B2680)->v) = 0xA;
            FUN_0c07ada0(0xC2B2680, (t0 << 2), a6, a7, 1.0f, f5, f6, f7, f8);
            t0 = *(int *)0xC2B29FC;
            *(unsigned int *)0xC2B29FC = (t0 + 0x1);
            if ((int)(t0 + 0x1) > (int)0xB4) {
                FUN_0c0504ea();
    return;
            }
            return;
        }
        return;
    }
}

int FUN_0c0583b8(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = 0x0;
    for (;;) {
        t2 = *(int *)0xC2B32C0;
        if ((*(int *)((t2 + 0x8))) != 0) {
            t3 = t2;
            if ((((int)0x1 << (int)t0) & ((*(int *)((t2 + 0x8))))) != 0) {
                if ((*(int *)((0xC2B3334 + (t0 << 2)))) == 0) {
                    *(unsigned int *)((0xC2B32EC + (t0 << 2))) = 0x0;
                    *(unsigned int *)((0xC2B3334 + (t0 << 2))) = 0x1;
                }
                *(unsigned int *)((0xC2B32EC + (t0 << 2))) = ((*(int *)((0xC2B32EC + (t0 << 2)))) + 0x1);
                t3 = (t0 << 2);
            }
            t1 = t3;
        } else {
            t2 = *(int *)((0xC2B3334 + (t0 << 2)));
            t3 = t2;
            if (t2 == 1) {
                *(unsigned int *)((0xC2B3334 + (t0 << 2))) = 0x0;
                t3 = (t0 << 2);
            }
            t1 = t3;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x12) {
            break;
        }
    }
    return t1;
}

int FUN_0c058e20(void)
{
    register int t0;

    t0 = 0x0;
    for (;;) {
        *(unsigned int *)(((((t0 << 2) << 1) + 0xC2B6750) + 0x0)) = 0x78;
        *(unsigned int *)(((((t0 << 2) << 1) + 0xC2B6750) + 0x4)) = 0x0;
        *(unsigned int *)(((((t0 << 2) << 2) + 0xC2B6770) + 0x0)) = 0x0;
        *(unsigned int *)(((((t0 << 2) << 2) + 0xC2B6770) + 0x4)) = 0x78;
        *(unsigned int *)(((((t0 << 2) << 2) + 0xC2B6770) + 0x8)) = 0x0;
        *(unsigned int *)(((((t0 << 2) << 2) + 0xC2B6770) + 0xC)) = 0x0;
        gdc_StreamVoiceVol(t0, 0x78);
        FUN_0c01ee10(t0, 0x0);
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    return gdc_StopStreamVoiceAll();
}

int FUN_0c05c084(int a4, int a5, int a6)
{
    register int t2;
    register int t3;
    register int t4;
    register int t6;

    t6 = *(int *)((a4 + 0x0));
    t2 = a4;
    t3 = t6;
    t4 = a6;
    for (;;) {
        if (t6 == 0) {
            break;
        }
        t3 = t6;
        t4 = (*(int *)((t3 + 0x4)));
        t2 = t6;
        t6 = t4;
        if (t2 != 0) {
            nlFree(t2);
        }
    }
    return (FUN_0c05b3d4(a4, 0xC));
}

int FUN_0c06bc8c(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = FUN_0c06b3d8(0xC2BA920, 0x1, 0x1, 0xC06BCEE);
    if ((t0 & 0x1) != 0) {
        *(unsigned int *)0xC2BA928 = 0x1;
    } else {
        *(unsigned int *)0xC2BA928 = 0x0;
    }
    t0 = *(signed char *)0xC2BA927;
    t1 = t0;
    if ((t0 & 128) != 0) {
        t0 = *(int *)0xC2BA928;
        t2 = 0x2;
        if (t0 != 0) {
            t2 = 0x0;
        }
        t3 = t0;
        if ((unsigned int)(t2 * 0x6C) < (unsigned int)0xA20) {
            t0 = (t2 * 0x6C);
            for (;;) {
                t2 = FUN_0c06bcfa((0xC2BA92C + t0));
                t0 = (t0 + 0x6C);
                if ((unsigned int)t0 >= (unsigned int)0xA20) {
                    break;
                }
            }
            t3 = t2;
        }
        t1 = t3;
    }
    return t1;
}

int nl_system_config_init(int a4)
{
    (((struct o0_uint *)0xC2BB434)->v) = 0x60;
    (((struct o4_uint *)0xC2BB434)->v) = 0x0;
    (((struct o4_uint *)0xC2BB490)->v) = 0xC2BB4AC;
    (((struct o8_uint *)0xC2BB490)->v) = 0xC2BB4D4;
    (((struct o8_uint *)0xC2BB434)->v) = 0xC2BB494;
    (((struct oC_uint *)0xC2BB434)->v) = 0x2;
    (((struct o10_uint *)0xC2BB434)->v) = 0x280;
    (((struct o14_uint *)0xC2BB434)->v) = 0x0;
    (((struct o18_uint *)0xC2BB434)->v) = 0x0;
    (((struct o1C_uint *)0xC2BB434)->v) = a4;
    (((struct o20_uint *)0xC2BB434)->v) = 0xC2BBAC8;
    (((struct o24_uint *)0xC2BB434)->v) = 0xACC00000;
    (((struct o28_uint *)0xC2BB434)->v) = 0x100000;
    (((struct o2C_float *)0xC2BB434)->v) = ((((struct o0_float *)0xC06FC74)->v));
    (((struct o30_float *)0xC2BB434)->v) = ((((struct o4_float *)0xC06FC74)->v));
    (((struct o34_float *)0xC2BB434)->v) = ((((struct o8_float *)0xC06FC74)->v));
    (((struct o38_float *)0xC2BB434)->v) = 0.0f;
    (((struct o3C_float *)0xC2BB434)->v) = 0.0f;
    (((struct o0_uint *)0xC2BB490)->v) = 0x0;
    (((struct oC_uint *)0xC2BB490)->v) = 0x3;
    (((struct o10_uint *)0xC2BB490)->v) = 0x0;
    return 0x5C;
}

int buLoadFile(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = vmsfs_c_getstate(a4);
    if (t0 != 0) {
        return 0xFFFFFFFF;
    }
    vmsfs_c_setparam(a4, a4, a5, a6, a7, 0x0, 0x0);
    vmsfs_c_setfname(a4, a5, a5);
    vmsfs_c_setfunc(a4, 0xB);
    return 0x0;
}

int nlSetIntrFunction(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t4;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xE);
    if ((int)a4 < (int)0xD) {
        t4 = (((int (*)(int, int, int, int))((*(int *)(((a4 << 2) + 0xC147554)))))(a4, a5, a6, a7));
    } else {
        t4 = (FUN_0c0785a0());
    }
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
    return t4;
}

float nlMvClipEdge(int a4, int a5, int a6, float f4, float f5, float f6)
{
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;

    if ((int)((*(int *)((a4 + 0xC))) ^ (*(int *)((a5 + 0xC)))) >= 0) {
        (((struct oC_float *)(a6))->v) = -1.0f;
    } else {
        u0 = *(float *)0xC2C4DBC;
        u1 = (((struct o8_float *)(a4))->v);
        u2 = (((struct o8_float *)(a5))->v);
        (((struct oC_float *)(a6))->v) = (1.0f / u0);
        (((struct o8_float *)(a6))->v) = u0;
        u3 = (((struct o8_float *)(a5))->v);
        u4 = *(float *)((a5 + 0x0));
        u5 = ((u0 - u3) * (1.0f / (u1 - u2)));
        u6 = u4;
        u6 = u6 + u5 * (((*(float *)((a4 + 0x0))) - u4));
        *(float *)((a6 + 0x0)) = u6;
        u4 = (((struct o4_float *)(a5))->v);
        u5 = ((u0 - u3) * (1.0f / (u1 - u2)));
        u6 = u4;
        u6 = u6 + u5 * ((((((struct o4_float *)(a4))->v)) - u4));
        (((struct o4_float *)(a6))->v) = u6;
        u4 = ((u0 - u3) * (1.0f / (u1 - u2)));
    }
    return u4;
}

int FUN_0c07b91c(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    if (((int)a5 >= 0) && ((int)a5 < (int)0x8)) {
        t0 = 0xC114028;
        t1 = a4;
        t2 = 0x0;
        for (;;) {
            t3 = *(signed char *)((t0 + 0x0));
            t0 = (t0 + 0x1);
            t4 = *(signed char *)((t1 + 0x0));
            t1 = (t1 + 0x1);
            if (t4 != t3) {
                break;
            }
            t2 = (t2 + 0x1);
            if ((int)t2 >= (int)0x4) {
                t2 = a5;
                t2 = (t2 << 1);
                t2 = (t2 + a5);
                t2 = (t2 << 2);
                t2 = (signed char)t2;
                t2 = (t2 + 0xC2C3F88);
                t0 = (*(int *)((t2 + 0x0)));
                if (t0 == -1) {
                    t0 = 0xFFFFFFFD;
                    return t0;
                }
                if ((int)(*(int *)((t2 + 0x8))) < (int)(*(int *)((a4 + 0x8)))) {
                    t0 = 0xFFFFFFFC;
                    return t0;
                }
                t1 = (*(int *)(((*(int *)0xC2C3EA4) + 0x0)));
                if (t1 != 0) {
                    t0 = 0xFFFFFFFB;
                    return t0;
                }
                t0 = 0x0;
                return t0;
            }
        }
        return 0xFFFFFFFE;
    }
    return 0xFFFFFFFF;
}

int FUN_0c07e36e(int a4)
{
    register int t1;
    register int t10;
    register int t3;
    register int t4;
    register int t5;
    register int t9;

    t1 = 0xCB;
    if (((*(int *)0xC147744) & 4) != 0) {
        t1 = 0xED;
    }
    t10 = 0x0;
    if ((int)0xC0 <= (int)t1) {
        t3 = 0xC0;
        for (;;) {
            t4 = fmMngRead(t3, (((t3 - 192) * 0x3C) + a4));
            if (t4 == 0) {
                t5 = _ntInfWaitDone();
                if (t5 != 1) {
                    t9 = t5; break;
                }
                t3 = (t3 + 0x1);
                if ((int)t3 > (int)t1) {
                    return 0x0;
                }
                continue;
            }
            t9 = t4; break;
        }
        t10 = t9;
    }
    return t10;
}

int kmiInitializeDMA(void)
{
    register int t1;
    register int t2;

    *(volatile int *)0xFFA0002C;
    (((struct o0_uint *)0xFFA00020)->v) = 0x0;
    (((struct o4_uint *)0xFFA00020)->v) = 0x0;
    (((struct o8_uint *)0xFFA00020)->v) = 0x0;
    (((struct oC_uint *)0xFFA00020)->v) = 0x12C0;
    (((struct o20_uint *)0xFFA00020)->v) = 0x8201;
    *(unsigned int *)0xA05F6884 = 0x0;
    (((struct o0_uint *)0xFF000038)->v) = 0x10;
    (((struct o4_uint *)0xFF000038)->v) = 0x10;
    (((struct o0_uint *)0xC2D58B0)->v) = 0x0;
    (((struct o4_uint *)0xC2D58B0)->v) = 0x0;
    (((struct oC_uint *)0xC2D58B0)->v) = 0x0;
    (((struct o10_uint *)0xC2D58B0)->v) = 0x0;
    (((struct o8_uint *)0xC2D58B0)->v) = 0x0;
    (((struct o14_uint *)0xC2D58B0)->v) = 0x7;
    (((struct o18_uint *)0xC2D58B0)->v) = 0x1;
    t1 = 0x0;
    for (;;) {
        t2 = (0xC2D56B0 + t1);
        t1 = (t1 + 0x20);
        *(unsigned int *)((t2 + 0x18)) = 0x0;
        *(unsigned int *)(((t2 + 0x100) + 0x18)) = 0x8;
        if ((unsigned int)t1 >= (unsigned int)0x100) {
            break;
        }
    }
    return 0x8;
}

float kmiExCallBackFunc(int a4, int a5, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    register int t0;
    register int t6;
    register float u2;

    t0 = _builtin_get_fpscr();
    _builtin_set_fpscr((~((~t0) | 0x100000)));
    t6 = ((int (*)(int, int, float, float, float, float, float, float, float, float))(a4))(a5, a5, f4, f5, f6, f7, f8, f9, f10, f11);
    _builtin_set_fpscr((t0));
    return u2;
}

int kmfSetCommonModifier(int a4, int a5)
{
    if (a5 == 0) {
        (((struct o0_uint *)0xC300D04)->v) = 0x0;
        return 0x0;
    }
    (((struct o0_uint *)0xC300D04)->v) = 0x1;
    if (((a4 & 0x1F) == 0) && ((a5 & 0x1F) == 0)) {
        (((struct o4_uint *)0xC300D04)->v) = a4;
        (((struct o8_uint *)0xC300D04)->v) = a5;
        return 0x0;
    }
    (((struct o0_uint *)0xC300D04)->v) = 0x0;
    return 0x7;
}

int FUN_0c14efc2(int a4)
{
    int stk[3];

    if ((*(signed char *)((a4 + 0x72))) == 0) {
        return 0x0;
    }
    *(volatile int *)((a4 + 0xC));
    *(unsigned int *)(((int)stk + 8)) = (thunk_FUN_0c1643e4());
    FUN_0c14edc8();
    *(volatile int *)((a4 + 0xC));
    mwRnaGetTime();
    (((struct o9C_uint *)(a4))->v) = (int)(((float)(*(int *)(((int)stk + 0))) / (float)(*(int *)(((int)stk + 4)))) * (float)(*(int *)0xC2D1BEC));
    (((struct oA0_uint *)(a4))->v) = (*(int *)0xC173D68);
    return (*(int *)(((int)stk + 8)));
}

int kmLoadTexture(int a4, int a5, int a6, int a7)
{
    int t10;

    if ((a6 != 1) && (a7 != 1)) {
        if ((unsigned short)(*(int *)((a4 + 0x0))) == 3) {
            kmtex_ConvertSmallVQToMem((*(int *)((a4 + 0x1C))), a5, (*(int *)((a4 + 0xC))), (*(int *)((a4 + 0x18))));
        } else {
            t10 = *(int *)((a4 + 0x18));
            if (((0x4 & t10) != 0) && (((0x1 & t10) != 0) && (((0x8 & t10) == 0) && ((0x20 & t10) == 0)))) {
                kmtex_CopyTextureToMem((*(int *)((a4 + 0x1C))), a5, (*(int *)((a4 + 0xC))));
            } else {
                kmiCopyToFrameBuffer((*(int *)((a4 + 0x1C))), a5, (*(int *)((a4 + 0x14))));
            }
        }
        return 0x0;
    }
    return 0x4;
}

int SJMEM_Create(int a4, int a5)
{
    register int t0;

    t0 = 0x0;
    for (;;) {
        if ((*(int *)(((((((t0 << 2) << 1) + t0) << 2) + 0xC305168) + 0x4))) != 0) {
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
    *(unsigned int *)(((((((t0 << 2) << 1) + t0) << 2) + 0xC305168) + 0x4)) = 0x1;
    *(unsigned int *)(((((((t0 << 2) << 1) + t0) << 2) + 0xC305168) + 0x0)) = 0xC174338;
    *(unsigned int *)(((((((t0 << 2) << 1) + t0) << 2) + 0xC305168) + 0x14)) = a4;
    *(unsigned int *)(((((((t0 << 2) << 1) + t0) << 2) + 0xC305168) + 0x18)) = a5;
    *(unsigned int *)(((((((t0 << 2) << 1) + t0) << 2) + 0xC305168) + 0x8)) = 0xC171810;
    *(unsigned int *)(((((((t0 << 2) << 1) + t0) << 2) + 0xC305168) + 0x1C)) = 0xC164B52;
    *(unsigned int *)(((((((t0 << 2) << 1) + t0) << 2) + 0xC305168) + 0x20)) = (((((t0 << 2) << 1) + t0) << 2) + 0xC305168);
    SJMEM_Reset((((((t0 << 2) << 1) + t0) << 2) + 0xC305168));
    return (((((t0 << 2) << 1) + t0) << 2) + 0xC305168);
}

int SJRBF_Create(int a4, int a5, int a6)
{
    register int t0;

    t0 = 0x0;
    for (;;) {
        if ((*(int *)(((((((t0 << 1) + t0) << 2) << 2) + 0xC3055E8) + 0x4))) != 0) {
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x40) {
                break;
            }
            continue;
        }
        break;
    }
    if (t0 == 64) {
        return 0x0;
    }
    *(unsigned int *)(((0xC3055E8 + ((((t0 << 1) + t0) << 2) << 2)) + 0x4)) = 0x1;
    *(unsigned int *)(((0xC3055E8 + ((((t0 << 1) + t0) << 2) << 2)) + 0x0)) = 0xC174370;
    *(unsigned int *)(((0xC3055E8 + ((((t0 << 1) + t0) << 2) << 2)) + 0x1C)) = a4;
    *(unsigned int *)(((0xC3055E8 + ((((t0 << 1) + t0) << 2) << 2)) + 0x20)) = a5;
    *(unsigned int *)(((0xC3055E8 + ((((t0 << 1) + t0) << 2) << 2)) + 0x24)) = a6;
    *(unsigned int *)(((0xC3055E8 + ((((t0 << 1) + t0) << 2) << 2)) + 0x8)) = 0xC171820;
    *(unsigned int *)(((0xC3055E8 + ((((t0 << 1) + t0) << 2) << 2)) + 0x28)) = 0xC164E66;
    *(unsigned int *)(((0xC3055E8 + ((((t0 << 1) + t0) << 2) << 2)) + 0x2C)) = (0xC3055E8 + ((((t0 << 1) + t0) << 2) << 2));
    SJRBF_Reset((0xC3055E8 + ((((t0 << 1) + t0) << 2) << 2)));
    return (0xC3055E8 + ((((t0 << 1) + t0) << 2) << 2));
}

int FUN_0c165c84(int a4, int a5)
{
    register int t1;

    if (a4 == 0) {
        FUN_0c16bab0(0xC1718DC);
        return 0xFFFFFFFF;
    }
    t1 = 0x0;
    for (;;) {
        if ((*(int *)((((((t1 << 2) << 2) << 2) + (a4 + 0x38)) + 0x0))) != a5) {
            t1 = (t1 + 0x1);
            if ((int)t1 >= (int)0x10) {
                break;
            }
            continue;
        }
        break;
    }
    if (t1 == 16) {
        FUN_0c16bab0(0xC171944);
        return 0xFFFFFFFF;
    }
    return (*(int *)((((((t1 << 2) << 2) << 2) + (a4 + 0x38)) + 0x38)));
}

int FUN_0c165ce6(int a4, int a5)
{
    register int t1;

    if (a4 == 0) {
        FUN_0c16bab0(0xC1718DC);
        return 0x0;
    }
    t1 = 0x0;
    for (;;) {
        if ((*(int *)((((((t1 << 2) << 2) << 2) + (a4 + 0x38)) + 0x0))) != a5) {
            t1 = (t1 + 0x1);
            if ((int)t1 >= (int)0x10) {
                break;
            }
            continue;
        }
        break;
    }
    if (t1 == 16) {
        FUN_0c16bab0(0xC171944);
        return 0x0;
    }
    return (*(int *)((((((t1 << 2) << 2) << 2) + (a4 + 0x38)) + 0x3C)));
}

int FUN_0c165a7e(int a4)
{
    int stk[2];
    register int t21;

    if (a4 == 0) {
        *(int *)((int)stk + 0) = 0xC1718DC;
        t21 = (FUN_0c16bab0(0xC1718DC));
    } else {
        t21 = (FUN_0c16ba68(((int)stk + 4)));
        if (a4 != 0) {
            if ((*(int *)((a4 + 0x28))) != 0) {
                if ((*(signed char *)((a4 + 0x2))) == 1) {
                    FUN_0c1624ec((*(int *)((a4 + 0x28))));
                    *(unsigned char *)((a4 + 0x2)) = 0x0;
                }
                ADXSTM_Close((*(int *)((a4 + 0x28))));
                *(unsigned int *)((a4 + 0x28)) = 0x0;
            }
            *(unsigned int *)((a4 + 0x2C)) = 0x0;
            *(unsigned int *)((a4 + 0x1C)) = 0x0;
            *(unsigned int *)((a4 + 0x20)) = 0x0;
            *(unsigned int *)((a4 + 0x24)) = 0x0;
            *(unsigned int *)((a4 + 0x34)) = 0x0;
            *(unsigned char *)((a4 + 0x1)) = 0x0;
            t21 = (FUN_0c16ba80(((int)stk + 4)));
        }
    }
    return t21;
}

int FUN_0c01e3cc(int a4)
{
    int t0;

    if ((*(int *)0xC1EC844) != 0) {
        DispCredit(a4);
        t0 = FUN_0c01e42c();
        if (t0 == 1) {
            t0 = (((struct o0_int *)0xC1EC744)->v);
            if ((t0 != 7) && (t0 != 9)) {
                (((struct o0_uint *)0xC1EC744)->v) = 0x8;
                FUN_0c01bde2(0x1);
                return 0x1;
            }
            if ((int)((((struct o8_int *)0xC1EC744)->v)) >= (int)0x5) {
                GotoMenu();
                return 0x1;
            }
            return 0x0;
        }
        return 0x0;
    }
    t0 = DispCredit(a4);
    if (t0 != 0) {
        t0 = (((struct o0_int *)0xC1EC744)->v);
        if ((t0 != 7) && (t0 != 9)) {
            (((struct o0_uint *)0xC1EC744)->v) = 0x8;
            FUN_0c01bde2(0x1);
            return 0x1;
        }
        if ((int)((((struct o8_int *)0xC1EC744)->v)) >= (int)0x5) {
            GotoMenu();
            return 0x1;
        }
        return 0x0;
    }
    return 0x0;
}

int gdc_StreamInit(void)
{
    register int t4;

    (((struct o0_uint *)0xC1ECD54)->v) = (FUN_0c14e3c8(0x1, 0xC1ECD68, 0x10884));
    (((struct o4_uint *)0xC1ECD54)->v) = (FUN_0c14e3c8(0x1, 0xC1FD5EC, 0x10884));
    (((struct o8_uint *)0xC1ECD54)->v) = (FUN_0c14e3c8(0x1, 0xC20DE70, 0x10884));
    (((struct oC_uint *)0xC1ECD54)->v) = (FUN_0c14e3c8(0x1, 0xC21E6F4, 0x10884));
    t4 = FUN_0c14e3c8(0x2, 0xC22EF78, 0x390C4);
    (((struct o10_uint *)0xC1ECD54)->v) = t4;
    ADXT_SetReloadSct(t4, 0x19);
    ADXT_SetAutoRcvr(((((struct o10_int *)0xC1ECD54)->v)), 0x2);
    FUN_0c01e672();
    return gdc_InitStreamSongDisk();
}

int KillColliObj(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(int *)((a4 + 0x2C));
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x4));
        if ((*(int *)((t0 + 0x8))) == 0) {
            *(unsigned int *)(((t1 << 2) + 0xC271CEC)) = (*(int *)((t0 + 0xC)));
        } else {
            *(unsigned int *)(((*(int *)((t0 + 0x8))) + 0xC)) = (*(int *)((t0 + 0xC)));
        }
        if ((*(int *)((t0 + 0xC))) == 0) {
            *(unsigned int *)(((t1 << 2) + 0xC271D58)) = (*(int *)((t0 + 0x8)));
        } else {
            *(unsigned int *)(((*(int *)((t0 + 0xC))) + 0x8)) = (*(int *)((t0 + 0x8)));
        }
        *(unsigned int *)((t0 + 0x4)) = 0xFFFFFFFF;
        *(unsigned int *)((a4 + 0x2C)) = 0x0;
        (((struct o18_float *)(a4))->v) = (*(float *)0xC02AE90);
        *(unsigned int *)((a4 + 0x24)) = 0x0;
        *(unsigned int *)((a4 + 0x20)) = 0x0;
        *(unsigned int *)(((t1 << 2) + 0xC271DC4)) = ((*(int *)(((t1 << 2) + 0xC271DC4))) - 1);
        *(unsigned int *)0xC271E30 = ((*(int *)0xC271E30) - 1);
        t0 = 0xC271DC4;
    }
    return t0;
}

float FUN_0c030a26(int a4)
{

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register float F0;
    register float F2;
    register float F3;
    register float F4;
    register int T_;
    register int v0_0;
    register int v0_1;
    register float w0_0;
    register float w0_1;
    v0_1 = a4;
    v0_0 = (0xC27909C);
    v0_0 = (v0_1);
    if (((*(int *)(((((((struct o6C_int *)(v0_1))->v)) << 2) + 0xC27909C))) != 0)) goto L_C030A80;
    w0_0 = nlLength((v0_0 + 0xC), (v0_0 + 0x58));
    F0 = (w0_0);
    if ((w0_0 > (1.0f + 1.0f))) goto L_C030A5C;
    w0_0 = (((struct o40_float *)(v0_0))->v);
    w0_1 = (w0_0);
    if ((!((*(float *)0xC030AE4) > w0_0))) goto L_C030A72;
    L_C030A5C:;
    *(unsigned int *)(((((((struct o6C_int *)(v0_0))->v)) << 2) + 0xC27909C)) = 0x1;
    *(unsigned int *)0xC2791B8 = ((*(int *)0xC2791B8) - 1);
    v0_0 = (0xC27909C);
    L_C030A80:;
    return F0;
    L_C030A72:;
    v0_0 = ((FUN_0c07ff00()));
    goto L_C030A80;
}

int FUN_0c03e07c(void)
{
    (((struct o0_uint *)0xC2A4F88)->v) = ((((struct o0_int *)0xC1EC740)->v));
    (((struct o4_uint *)0xC2A4F88)->v) = ((((struct o4_int *)0xC1EC740)->v));
    FUN_0c01e6f8(0x1);
    FUN_0c01ecaa(0x1);
    FUN_0c03e792(0x0, 0x0);
    FUN_0c03e792(0x2, 0x0);
    FUN_0c03e792(0x3, 0x0);
    FUN_0c03e792(0x4, 0x0);
    FUN_0c03e792(0x5, 0x0);
    FUN_0c03e792(0x6, 0x0);
    FUN_0c03e792(0x7, 0x0);
    if ((*(int *)0xC2AC2F0) == 1) {
        return FUN_0c0339fc(0x3);
    }
    return FUN_0c0339fc(0x1);
}

int FUN_0c03e37e(void)
{
    (((struct o0_uint *)0xC1EC740)->v) = 0x0;
    if ((*(int *)0xC2A46D8) != 0xC0B3AA4) {
        (((struct o4_uint *)0xC1EC740)->v) = 0x0;
    } else {
        (((struct o4_uint *)0xC1EC740)->v) = 0x8;
    }
    (((struct o0_uint *)0xC2A4680)->v) = 0x0;
    (((struct o4_uint *)0xC2A4680)->v) = 0x0;
    FUN_0c03386a(0x0);
    FUN_0c0339fc(0x0);
    FUN_0c058e82();
    gdc_StopStreamVoiceAll();
    FUN_0c01e6f0();
    FUN_0c058be4(0x0);
    FUN_0c027fdc(0.100000001f);
    return FUN_0c03f19a();
}

int FUN_0c040f22(int a4, float f4, float f5, float f6)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;

    t0 = (int)((int)(((((((((struct o0_int *)0xC2AB7D8)->v)) << 8) << 2) << 2) << 2) << 1) / (int)a4);
    t1 = (0xC000 + t0);
    if ((int)(0xC000 + t0) > (int)0x14000) {
        t1 = 0x14000;
    }
    u0 = (f5 * ((FUN_0c072140(t1)) + 1.0f));
    u1 = f4;
    u1 = u1 + 0.5f * u0;
    if (u1 > f6) {
        u0 = (((((struct o8_float *)0xC2AB7D8)->v)) + u1);
    } else {
        u0 = (((((struct o8_float *)0xC2AB7D8)->v)) + f6);
    }
    (((struct o8_float *)0xC2AB7D8)->v) = u0;
    return 0xC040FAC;
}

int FUN_0c0525d8(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8)
{
    register int t1;
    register int t4;

    (((struct o0_float *)0xC2B2690)->v) = 1.0f;
    (((struct o4_float *)0xC2B2690)->v) = 1.0f;
    (((struct o24_uint *)0xC2B2690)->v) = 0xA;
    (((struct o18_uint *)0xC2B2690)->v) = 0x0;
    t1 = (int)((int)(((((struct o0_int *)0xC2B2A18)->v)) + 0x1) % (int)0x78);
    (((struct o0_uint *)0xC2B2A18)->v) = t1;
    if ((int)t1 < (int)0x3C) {
        t4 = 0x26E;
        if (((((struct oC_int *)0xC2B2A18)->v)) == 0) {
            t4 = 0x263;
        }
        return FUN_0c052dba(0xC2B2680, t4, a6, a7, 320.0f, 180.0f, f6, f7, f8);
    }
    return t1;
}

int FUN_0c052722(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8)
{
    register int t1;
    register int t4;

    (((struct o0_float *)0xC2B2690)->v) = 1.0f;
    (((struct o4_float *)0xC2B2690)->v) = 1.0f;
    (((struct o24_uint *)0xC2B2690)->v) = 0xA;
    (((struct o18_uint *)0xC2B2690)->v) = 0x0;
    t1 = (int)((int)(((((struct o0_int *)0xC2B2A20)->v)) + 0x1) % (int)0x78);
    (((struct o0_uint *)0xC2B2A20)->v) = t1;
    if ((int)t1 < (int)0x3C) {
        t4 = 0x26E;
        if (((((struct o4_int *)0xC2B2A20)->v)) == 0) {
            t4 = 0x264;
        }
        return FUN_0c052dba(0xC2B2680, t4, a6, a7, 320.0f, 180.0f, f6, f7, f8);
    }
    return t1;
}

int FUN_0c053ff2(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = (((struct oC_int *)0xC2B2DCC)->v);
    t1 = (((struct o8_int *)0xC1ECCC8)->v);
    (((struct oC_uint *)0xC2B2DCC)->v) = (t0 + t1);
    t2 = (((struct o10_int *)0xC1ECCC8)->v);
    (((struct oC_uint *)0xC2B2DCC)->v) = ((t0 + t1) + t2);
    if ((int)((t0 + t1) + t2) > (int)0x98967F) {
        (((struct oC_uint *)0xC2B2DCC)->v) = 0x98967F;
    }
    (((struct o8_uint *)0xC1ECCC8)->v) = 0x0;
    (((struct o10_uint *)0xC1ECCC8)->v) = 0x0;
    t0 = (((struct oC_int *)0xC2B2DCC)->v);
    t1 = (((struct o0_int *)0xC1ECCC8)->v);
    (((struct o0_uint *)0xC1ECCC8)->v) = (t1 + t0);
    if ((int)(t1 + t0) > (int)0x5F5E0FF) {
        (((struct o0_uint *)0xC1ECCC8)->v) = 0x5F5E0FF;
    }
    (((struct o0_uint *)0xC2B2DCC)->v) = 0x0;
    (((struct o18_uint *)0xC2B2DCC)->v) = 0x3;
    t0 = *(int *)0xC1ECD10;
    if (t0 == 0) {
        FUN_0c0552a8();
        return FUN_0c058ca6(0xE04A9, 0x0);
    }
    return t0;
}

int FUN_0c05d1f4(int a4, int a5, int a6, int a7)
{
    register int t16;
    register int t10;

    if ((*(int *)((a4 + 0x0))) != 0) {
        nlObjPutUseViewMatrix((*(int *)((a4 + 0x0))));
        nlPushMatrix(0x0);
        FUN_0c05b410();
        FUN_0c05b596(0xC136D84, 0xC136D90, 0xC136D9C);
        nlObjPutUseViewMatrix((*(int *)((a4 + 0x0))));
        FUN_0c05b3fc();
        t10 = (nlPopMatrix(0x1));
    }
    if ((*(int *)((a4 + 0x4))) != 0) {
        t16 = *(int *)((a4 + 0x4));
        return ((int (*)(int, int, int, int))(t16))(0x0, 0x0, a6, a7);
    }
    return t10;
}

float FUN_0c070ab0(int a4)
{
    register float t0;

    if ((unsigned short)a4 != 0) {
        if ((unsigned short)a4 != 0x4000) {
            if ((unsigned short)a4 == 0x8000) {
                return 3.40282347e+38f;
            }
            if ((unsigned short)a4 == 0xC000) {
                return 0.0f;
            }
            t0 = nlTan((unsigned short)a4);
            return (1.0f / t0);
        }
        return 0.0f;
    }
    return 3.40282347e+38f;
}

int buRenameFile(int a4, int a5, int a6)
{
    register int t0;

    t0 = vmsfs_c_getstate(a4);
    if (t0 != 0) {
        return 0xFFFFFFFF;
    }
    vmsfs_c_setparam(a4, a4, a5, a6, 0x0, 0x0, 0x0);
    vmsfs_c_setfname(a4, a5, a6);
    vmsfs_c_setfunc(a4, 0x8);
    return 0x0;
}

int syExtChkDisableSyncDev(int a4)
{
    int stk[5];
    register int t0;
    register int t2;

    *(unsigned int *)(((int)stk + 12)) = a4;
    t0 = _builtin_get_imask();
    *(unsigned int *)(((int)stk + 8)) = (((a4 & 0xFF00) << 8) | 0x5A00A500);
    *(unsigned int *)(((int)stk + 16)) = t0;
    _builtin_set_imask(0xF);
    *(int *)((int)stk + 4) = 0x1;
    *(int *)((int)stk + 0) = 0x1;
    t2 = syG2Write((((int)stk + 0) + 0x8), ((*(int *)(((int)stk + 12))) + 0x18), 0x4, 0x1, 0x1);
    _builtin_set_imask(((unsigned int)((((*(int *)(((int)stk + 16))) & 0xF) << 2) << 2) >> 4));
    return (((t2 == 0)) ? 1 : 0);
}

int FUN_0c14de8a(void)
{
    register int t12;

    if ((*(int *)0xC173D64) == 0) {
        FUN_0c16125c();
        SJUNI_Init();
        SJRBF_Init();
        SJMEM_Init();
        FUN_0c161690();
        FUN_0c1620f0();
        FUN_0c16195c();
        FUN_0c14f248();
        mwRnaInit();
        mwRnaEntryErrFunc(0xC14DE74, 0x0);
        t12 = (memset(0xC173844, 0x0, 0x520));
    }
    *(unsigned int *)0xC173D64 = ((*(int *)0xC173D64) + 0x1);
    return t12;
}

int FUN_0c14fd82(int a4, int a5)
{
    register int t2;
    register int t10;
    register int t3;

    adxf_SetCmdHstry(0x1, 0x0, a4, a5, 0xFFFFFFFF);
    ADXCRS_Lock();
    t2 = FUN_0c14fbe8();
    t10 = t2;
    if (t2 != 0) {
        t3 = FUN_0c14fca6(t2, a4, a5);
        t10 = t2;
        if ((int)t3 < 0) {
            FUN_0c14ff0c(t2);
            t10 = 0x0;
        }
    }
    ADXCRS_Unlock();
    adxf_SetCmdHstry(0x1, 0x1, a4, a5, 0xFFFFFFFF);
    return t10;
}

int ADXF_OpenAfs(int a4, int a5)
{
    register int t2;
    register int t10;
    register int t3;

    adxf_SetCmdHstry(0x2, 0x0, a4, a5, 0xFFFFFFFF);
    ADXCRS_Lock();
    t2 = FUN_0c14fbe8();
    t10 = t2;
    if (t2 != 0) {
        t3 = FUN_0c14fde2(t2, a4, a5);
        t10 = t2;
        if ((int)t3 < 0) {
            FUN_0c14ff0c(t2);
            t10 = 0x0;
        }
    }
    ADXCRS_Unlock();
    adxf_SetCmdHstry(0x2, 0x1, a4, a5, 0xFFFFFFFF);
    return t10;
}

int kmiInitializeBackGroundPlane(void)
{
    (((struct o0_uint *)0xC300974)->v) = 0x80800000;
    (((struct o4_uint *)0xC300974)->v) = 0x20800000;
    (((struct o8_uint *)0xC300974)->v) = 0x0;
    (((struct oC_uint *)0xC300974)->v) = 0x40000000;
    (((struct o10_uint *)0xC300974)->v) = 0x43820000;
    (((struct o14_uint *)0xC300974)->v) = 0x3727C5AC;
    (((struct o18_uint *)0xC300974)->v) = 0xFF000000;
    (((struct o1C_uint *)0xC300974)->v) = 0x43160000;
    (((struct o20_uint *)0xC300974)->v) = 0x40000000;
    (((struct o24_uint *)0xC300974)->v) = 0x3727C5AC;
    (((struct o28_uint *)0xC300974)->v) = 0xFF000000;
    (((struct o2C_uint *)0xC300974)->v) = 0x440C0000;
    (((struct o30_uint *)0xC300974)->v) = 0x43820000;
    (((struct o34_uint *)0xC300974)->v) = 0x3727C5AC;
    (((struct o38_uint *)0xC300974)->v) = 0xFF000000;
    (((struct o4_uint *)0xC300A7C)->v) = ((((struct o14_int *)0xC300974)->v));
    (((struct o0_uint *)0xC300A7C)->v) = 0x1000000;
    return 0x0;
}

int kmRenderDirect(void)
{
    (((struct o0_uint *)0xC300C44)->v) = 0x1;
    (((struct o8_uint *)0xC300C44)->v) = 0x0;
    *(unsigned int *)0xC1740A8 = 0x1;
    return 0xC1740A8;
}

int mwlSbSetFx(int a4, int a5, int a6)
{
    register int t6;

    (((struct o48_uint *)(a4))->v) = a5;
    (((struct o4C_uint *)(a4))->v) = a6;
    t6 = 0x0;
    if ((int)a6 < (int)0xFFFFFFD6) {
    } else {
        t6 = 0xF;
        if ((int)a6 >= 0) {
        } else {
            t6 = (((int)((int)a6 / (int)0x3)) + 0xF);
        }
    }
    if ((*(int *)((a4 + 0x18))) == 0) {
        return FUN_0c07d27e((*(int *)(((*(int *)((a4 + 0x1C))) + 0x4))), a5, t6);
    }
    return FUN_0c07d4bc((*(short *)((a4 + 0x6))), a5, t6);
}

int cvFsAddDev(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t2;

    if (a4 == 0) {
        return cvFsError(0xC1723BC, a5, a6, a7);
    }
    if (a5 == 0) {
        return cvFsError(0xC1723E0, a5, a6, a7);
    }
    t0 = FUN_0c16c502(a4, a5);
    if ((*(int *)((t0 + 0x4))) != 0) {
        t2 = *(int *)((t0 + 0x4));
        return ((int (*)(int, int, int, int))(t2))(0xC16C3B8, 0x0, a6, a7);
    }
    return t0;
}

int cvFsGetNumTr(int a4, int a5, int a6, int a7)
{
    register int t13;

    if (a4 == 0) {
        cvFsError(0xC1727F0, a5, a6, a7);
        t13 = 0x0;
    } else {
        if ((*(int *)(((*(int *)((a4 + 0x0))) + 0x38))) != 0) {
            t13 = (((int (*)(int, int, int, int))((*(int *)(((*(int *)((a4 + 0x0))) + 0x38)))))((*(int *)((a4 + 0x4))), a5, a6, a7));
        } else {
            cvFsError(0xC172810, a5, a6, a7);
            t13 = 0x0;
        }
    }
    return t13;
}

int FUN_0c01b81c(int a4, int a5, int a6, float f4)
{
    int stk[1];
    register int t0;
    register int t1;

    t0 = *(short *)((a5 + 0x0));
    *(unsigned short *)(((int)stk + 0)) = t0;
    t1 = *(short *)(((int)stk + 0));
    if ((int)(unsigned short)(a4 - t0) >= (int)(unsigned short)(t1 - a4)) {
        if ((int)(unsigned short)(t1 - a4) < (int)(unsigned short)a6) {
            *(unsigned short *)((a5 + 0x0)) = ((*(short *)((a5 + 0x0))) - (t1 - a4));
        } else {
            *(unsigned short *)((a5 + 0x0)) = ((*(short *)((a5 + 0x0))) - (int)((float)(unsigned short)(t1 - a4) * f4));
        }
    } else {
        if ((int)(unsigned short)(a4 - t0) < (int)(unsigned short)a6) {
            *(unsigned short *)((a5 + 0x0)) = ((*(short *)((a5 + 0x0))) + (a4 - t0));
        } else {
            *(unsigned short *)((a5 + 0x0)) = ((*(short *)((a5 + 0x0))) + (int)((float)(unsigned short)(a4 - t0) * f4));
        }
    }
    return (unsigned short)(a4 - t0);
}
