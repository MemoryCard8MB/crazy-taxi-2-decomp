/* Straight-line functions with calls and guards (batch gen_cm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o11_uchar { char p[0x11]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_float { char p[0x20]; float v; };
struct o204_uint { char p[0x204]; unsigned int v; };
struct o208_uint { char p[0x208]; unsigned int v; };
struct o20C_uint { char p[0x20C]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o30_ushort { char p[0x30]; unsigned short v; };
struct o32_ushort { char p[0x32]; unsigned short v; };
struct o34_float { char p[0x34]; float v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o34_ushort { char p[0x34]; unsigned short v; };
struct o36_ushort { char p[0x36]; unsigned short v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_int { char p[0x40]; int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o48_ushort { char p[0x48]; unsigned short v; };
struct o4A_ushort { char p[0x4A]; unsigned short v; };
struct o4C_short { char p[0x4C]; short v; };
struct o50_ushort { char p[0x50]; unsigned short v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o78_float { char p[0x78]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o8_float { char p[0x8]; float v; };
struct o84_int { char p[0x84]; int v; };
struct oAC_int { char p[0xAC]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oFC_int { char p[0xFC]; int v; };
struct oFC_uint { char p[0xFC]; unsigned int v; };
struct oFE_uchar { char p[0xFE]; unsigned char v; };
int ADXSTM_Close(int);
int BupSave(int, int, int, int);
int CalcShadow4Normal(int, int);
int ETD_EntryRecvFunc(int, int);
int FUN_0c026ce6(void);
int FUN_0c027fdc(int, int, int, float);
int FUN_0c029b12(int, float);
int FUN_0c03f4bc(int, int, int, int, float, float, float, float, float, float);
int FUN_0c040bec(int, int, float);
int FUN_0c049610(int, int, int, int, int, int);
int FUN_0c049f58(void);
int FUN_0c04b32c(void);
int FUN_0c04b432(int);
int FUN_0c04b4c4(int);
int FUN_0c04b592(void);
int FUN_0c04b73c(void);
int FUN_0c04bb7e(void);
int FUN_0c04bcce(void);
int FUN_0c04bd0e(void);
int FUN_0c04bfe0(void);
int FUN_0c04c0c4(void);
int FUN_0c04c354(void);
int FUN_0c04c544(void);
int FUN_0c04c5bc(void);
int FUN_0c04d3f8(void);
int FUN_0c058f64(int, int, int, int);
int FUN_0c05b3d4(int, int);
int FUN_0c05f44c(int, int);
int FUN_0c05f470(int, int, float, float);
int FUN_0c06e990(int);
int FUN_0c06ea00(int, int, int);
int FUN_0c06f240(void);
int FUN_0c0702f0(void);
int FUN_0c070730(float);
int FUN_0c070e60(void);
int FUN_0c072230(int, int);
int FUN_0c073360(void);
float FUN_0c073b40(int, int);
int FUN_0c073e10(int);
int FUN_0c076230(float, float, float);
int FUN_0c078800(int, int, int);
int FUN_0c078820(int, int, int);
int FUN_0c07ada0(int);
int FUN_0c07b6c0(int, int);
int FUN_0c07fdc8(void);
int FUN_0c07ff00(void);
int FUN_0c0800c8(int, int);
int FUN_0c08f204(int, int, int);
int FUN_0c08faa8(int, int);
extern int FUN_0c1616ce();
int FUN_0c162322(int, int, int);
int FUN_0c16274a(int);
int FUN_0c16c56c(int);
int FUN_0c16c828(void);
int FUN_0c16c856(int);
int FUN_0c16c85e(int, int, int);
int FUN_0c16c90c(int);
extern int KillColliObj();
int SJRBF_Create(int, int, int);
int SJRBF_Lock(void);
int SJRBF_Unlock(int, int);
int SJUNI_Lock(void);
int SJUNI_Unlock(int, int);
int SetColliObj(int, int);
int Voice_ShutUp(int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int buCalcBackupFileSize(int, int, int);
int buIsFormat(int);
int buMakeBackupFileImage(int, int);
int buStat(int);
extern int cvFsError();
int gdc_FileLoad(int, int, int);
int memcpy(int, int, int);
int memset(int, int, int);
int nlAddVector(int, int);
extern int nlFree();
float nlLength(int, int);
int nlLineBlendFunc(int, int);
int nlLineFog(int);
int nlLocate(int, int);
int nlMalloc(int);
int nlMultiMatrix(int);
int nlMultiMatrix8(int);
int nlOuterProduct(int, int, int);
int nlPopMatrix(int);
int nlPrintf(int, ...);
int nlPushMatrix(int);
int nlQuickInvertMatrix(void);
int nlScaleUnitVector(int, int, float);
int nlSubVector(int, int);
float nlTan(int);
float nlUnitVectorsd(int, int);
int setjmp(int);
int strncpy(int, int, int);
int vmsfs_c_progress(int, int, int, int);
int vmsfs_unmount(int);
int vmsio_block_read(int, int, int);
int vmsio_get_media_info(int, int);
int vmsio_ismount(int);
int vmsio_isready(int);
int FUN_0c05b288(int a4);
int FUN_0c064766(int a4, int a5, int a6);
int FUN_0c03378c(int a4, int a5, int a6, int a7, float f4);
int vmsfs_read_retry(int a4, int a5, int a6);
void gdFsReqGdRd(int a4, int a5, int a6, int a7);
int FUN_0c0331f4(int a4, int a5, int a6, int a7);
int InsertRankRecord(int a4, int a5, int a6, int a7);
int FUN_0c052866(void);
int FUN_0c0494a4(void);
int nlMirrorDouble(int a4);
int vmsfs_fsetparam(int a4, int a5, int a6);
int vmsfs_getvolume(int a4, int a5);
int buFbrCreateServer(int a4);
int pdVibSetUnitInfo(int a4, int a5, int a6, int a7, int a8, int a9);
int FUN_0c14fca6(int a4, int a5, int a6, int a7);
void SJUNI_UngetChunk(int a4, int a5, int a6, int a7);
int GetStopPosCenter(int a4, int a5, int a6);
int FUN_0c03b23e(void);
int FUN_0c06002a(int a4, int a5, float f4);
int vmsfs_c_setfname(int a4, int a5, int a6);
int vmsfs_mediainfo_retry(int a4, int a5);
int vmsfs_fgetsize(int a4, int a5);
int FUN_0c068166(int a4, int a5);
int FUN_0c07b97e(int a4, int a5, int a6, int a7);
void gdFsReqRdPio(int a4, int a5, int a6);
int FUN_0c0435e2(int a4, int a5, int a6, int a7);
int FUN_0c05e784(int a4);
int cvFsOpen(int a4, int a5, int a6, int a7);
int FUN_0c052416(int a4, int a5);
void SJRBF_UngetChunk(int a4, int a5, int a6, int a7);
void SJRBF_PutChunk(int a4, int a5, int a6, int a7);
int FUN_0c03386a(int a4);
int FUN_0c035a5e(int a4, int a5, float f4, float f5);

int FUN_0c05b288(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;

    if (a4 != ((((struct oC_int *)0xC2B967C)->v))) {
        if (((*(int *)0xC2B92AC) != 0) && (t0 = (((struct o0_int *)0xC2B967C)->v), (int)t0 > 0)) {
            for (;;) {
                nlLocate(0xA, 0x1E);
                nlPrintf(0xC10D618);
                nlPrintf(0xC10D62C);
                FUN_0c06f240();
            }
        }
        if (a4 == 0) {
            gdc_FileLoad(0xCB60000, 0xC10D6A8, 0x0);
            t0 = *(int *)0xC13F3B8;
            FUN_0c06e990(0x0);
            t1 = 0x0;
            for (;;) {
                if ((*(int *)(((((t1 << 2) << 2) + t0) + 0x8))) == -1) {
                    break;
                }
                FUN_0c06ea00((t1 + 0x5DC), t0, t1);
                t1 = (t1 + 0x1);
            }
            t0 = FUN_0c06e990(0x0);
            (((struct oC_uint *)0xC2B967C)->v) = a4;
            t1 = t0;
        } else {
            t0 = a4;
            if (a4 == 1) {
                gdc_FileLoad(0xCB60000, 0xC10D650, 0x0);
                t2 = *(int *)0xC13F3B8;
                FUN_0c06e990(0x0);
                t3 = 0x0;
                for (;;) {
                    if ((*(int *)(((((t3 << 2) << 2) + t2) + 0x8))) == -1) {
                        break;
                    }
                    FUN_0c06ea00((t3 + 0x5DC), t2, t3);
                    t3 = (t3 + 0x1);
                }
                t2 = FUN_0c06e990(0x0);
                (((struct oC_uint *)0xC2B967C)->v) = a4;
                t0 = t2;
            }
            t1 = t0;
        }
        t0 = t1;
    }
    return t0;
}

int FUN_0c064766(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    FUN_0c05b3d4(a4, 0x100);
    FUN_0c05f44c(a4, a5);
    FUN_0c05f470(a4, 0xC8D6458, 0.0f, 0.0f);
    *(unsigned int *)((a4 + 0xC)) = 0x1;
    *(unsigned int *)((a4 + 0x3C)) = ((*(int *)((a4 + 0x3C))) | 0x80000000);
    FUN_0c07fdc8();
    t1 = *(int *)(((FUN_0c029b12(a6, 18.0f)) + 0x1C));
    if (t1 != -1) {
        FUN_0c07ff00();
        if ((*(int *)((t0 + 0x1C))) == 14) {
            (((struct oFE_uchar *)(a4))->v) = ((*(signed char *)(((0xFE + a4) + 0x0))) | 0x8);
        }
    } else {
        FUN_0c07ff00();
    }
    FUN_0c07ff00();
    FUN_0c07ff00();
    t0 = 0x1;
    if (((*(int *)(((((a5 - 35) << 2) + 0xC10E5D0) + 0x0))) & 0x1) != 0) {
        t0 = 0x0;
    }
    (((struct oFC_uint *)(a4))->v) = ((((((struct oFC_int *)(a4))->v)) & 0xFFDFFFFF) | ((unsigned int)((int)((unsigned int)t0 & 0x1)) << 21));
    t0 = 0x0;
    if (((*(int *)(((((a5 - 35) << 2) + 0xC10E5D0) + 0x0))) & 2) != 0) {
        t0 = 0x1;
    }
    t1 = (int)((unsigned int)t0 & 0x1);
    (((struct oFC_uint *)(a4))->v) = ((((((struct oFC_int *)(a4))->v)) & 0xFFEFFFFF) | ((unsigned int)t1 << 20));
    return t1;
}

int FUN_0c03378c(int a4, int a5, int a6, int a7, float f4)
{
    int stk[8];
    register float t1;
    register float u2;
    register float u5;
    register float u8;
    register float u9;

    *(unsigned int *)(((int)stk + 0)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    t1 = nlTan((a6 >> 1));
    u2 = (((struct o0_float *)0xC0338A0)->v);
    u5 = f4;
    if (f4 == 0.0f) {
        u5 = ((((struct o8_float *)(a4))->v));
    }
    u8 = (((struct o4_float *)0xC0338A0)->v);
    *(float *)(((int)stk + 20)) = ((u5 * ((*(float *)((a4 + 0x0))) + u8)) / (u2 / t1));
    u9 = (((struct o8_float *)0xC0338A0)->v);
    *(float *)(((int)stk + 24)) = ((u5 * ((-((((struct o4_float *)(a4))->v))) + u9)) / (u2 / t1));
    *(float *)(((int)stk + 8)) = ((u5 * ((*(float *)(((*(int *)(((int)stk + 0))) + 0x0))) + u8)) / (u2 / t1));
    *(float *)(((int)stk + 12)) = ((u5 * ((-((((struct o4_float *)((*(int *)(((int)stk + 0)))))->v))) + u9)) / (u2 / t1));
    *(float *)(((int)stk + 16)) = (-u5);
    *(float *)(((int)stk + 28)) = (-u5);
    nlLineFog(0x0);
    FUN_0c073360();
    if ((unsigned char)(signed char)((unsigned int)((unsigned int)a7 >> 16) >> 8) == 0xFF) {
        FUN_0c078800((((int)stk + 0) + 0x14), (((int)stk + 0) + 0x8), a7);
    } else {
        nlLineBlendFunc(0x4, 0x5);
        FUN_0c078820((((int)stk + 0) + 0x14), (((int)stk + 0) + 0x8), a7);
    }
    nlPopMatrix(0x1);
    return (nlLineFog(0x1));
}

int vmsfs_read_retry(int a4, int a5, int a6)
{
    int stk[7];
    register int t4;
    register int t9;
    register int t11;
    register int t13;
    register int t16;
    register int t17;
    register int t18;
    register int t23;
    register int t24;
    register int t27;
    register int t28;
    register int t29;
    register int t34;
    int t8;
    int t12;

    *(unsigned int *)(((int)stk + 24)) = a4;
    *(unsigned int *)(((int)stk + 20)) = a5;
    *(unsigned int *)(((int)stk + 16)) = a6;
    *(unsigned int *)(((int)stk + 8)) = (*(int *)0xC2C68F0);
    for (;;) {
        t4 = vmsio_block_read((*(int *)(((int)stk + 24))), (*(int *)(((int)stk + 20))), (*(int *)(((int)stk + 16))));
        *(unsigned int *)(((int)stk + 12)) = t4;
        if (t4 == 0) {
            break;
        }
        if (((*(int *)0xC1182A4) != 0) && (t8 = *(int *)(((int)stk + 12)), t8 == 0xFFFFFF30)) {
            return 0xFFFFFF01;
        }
        t9 = *(int *)(((int)stk + 24));
        *(unsigned int *)(((int)stk + 4)) = ((t9 * 0x154) + 0xC2C8D2C);
        *(unsigned int *)((((t9 * 0x154) + 0xC2C8D2C) + 0x34)) = ((*(int *)((((t9 * 0x154) + 0xC2C8D2C) + 0x34))) + 0x1);
        t11 = *(int *)(((int)stk + 8));
        *(unsigned int *)(((int)stk + 8)) = (t11 - 1);
        if ((((t11 - 1) + 0x1) == 0) && (t12 = *(int *)0xC2C68F0, t12 != -1)) {
            t13 = *(int *)(((int)stk + 24));
            *(unsigned int *)(((int)stk + 4)) = ((t13 * 0x154) + 0xC2C8D2C);
            *(unsigned int *)(((int)stk + 0)) = ((((((*(int *)(((int)stk + 24))) << 2) << 2) << 2) << 1) + 0xC2C6914);
            t16 = *(int *)((((t13 * 0x154) + 0xC2C8D2C) + 0x34));
            t17 = *(int *)(((int)stk + 4));
            t18 = *(int *)((t17 + 0x30));
            *(unsigned int *)((t17 + 0x30)) = (t18 + 0x1);
            vmsfs_c_progress((*(int *)(((int)stk + 24))), (*(int *)(((*(int *)(((int)stk + 0))) + 0x8))), ((t18 + 0x1) - 1), t16);
            t23 = *(int *)(((int)stk + 12));
            if (t23 != 0) {
                if (t23 != 0xFFFFFF01) {
                    return 0xFFFF0000;
                }
                return 0xFFFFFF01;
            }
            return 0x0;
        }
    }
    t24 = *(int *)(((int)stk + 24));
    *(unsigned int *)(((int)stk + 4)) = ((t24 * 0x154) + 0xC2C8D2C);
    *(unsigned int *)(((int)stk + 0)) = ((((((*(int *)(((int)stk + 24))) << 2) << 2) << 2) << 1) + 0xC2C6914);
    t27 = *(int *)((((t24 * 0x154) + 0xC2C8D2C) + 0x34));
    t28 = *(int *)(((int)stk + 4));
    t29 = *(int *)((t28 + 0x30));
    *(unsigned int *)((t28 + 0x30)) = (t29 + 0x1);
    vmsfs_c_progress((*(int *)(((int)stk + 24))), (*(int *)(((*(int *)(((int)stk + 0))) + 0x8))), ((t29 + 0x1) - 1), t27);
    t34 = *(int *)(((int)stk + 12));
    if (t34 != 0) {
        if (t34 != 0xFFFFFF01) {
            return 0xFFFF0000;
        }
        return 0xFFFFFF01;
    }
    return 0x0;
}

void gdFsReqGdRd(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    if ((a4 != 0) && (t0 = (((struct o4C_short *)(a4))->v), t0 != 0)) {
        if ((*(int *)(((*(int *)((a4 + 0x0))) + 0x1C))) == 0) {
            t0 = *(int *)((a4 + 0x14));
            t1 = *(int *)((a4 + 0x8));
            t2 = *(int *)((a4 + 0x10));
            if ((int)(t0 + t1) >= (int)(t1 + t2)) {
                *(unsigned int *)((a4 + 0x18)) = 0x0;
                (((struct o50_ushort *)(a4))->v) = 0x1;
            } else {
                t3 = a5;
                if ((int)(a5 + (t0 + t1)) > (int)(t1 + t2)) {
                    t3 = ((t1 + t2) - (t0 + t1));
                }
                if (t3 == 0) {
                    *(unsigned int *)((a4 + 0x18)) = 0x0;
                    (((struct o50_ushort *)(a4))->v) = 0x1;
                } else {
                    t2 = _builtin_get_imask();
                    _builtin_set_imask(0xF);
                    t4 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)(((*(int *)((a4 + 0x0))) + 0xC))) + 0x8)))))((t0 + t1), t3, a6, a7);
                    if (t4 != 0) {
                        *(unsigned int *)(((*(int *)((a4 + 0x0))) + 0x1C)) = a4;
                        *(unsigned int *)((a4 + 0x3C)) = t4;
                        *(unsigned int *)((a4 + 0x1C)) = t3;
                        (((struct o50_ushort *)(a4))->v) = 0x2;
                        (((struct o4A_ushort *)(a4))->v) = 0x1;
                        (((struct o48_ushort *)(a4))->v) = 0x4;
                        *(unsigned int *)((a4 + 0x20)) = 0x0;
                        *(unsigned int *)((a4 + 0x18)) = 0x0;
                        t0 = ((int (*)(void))(((((struct o40_int *)((*(int *)(((*(int *)((a4 + 0x0))) + 0xC)))))->v))))();
                    } else {
                        (((struct o50_ushort *)(a4))->v) = 0x1;
                    }
                    _builtin_set_imask(((unsigned int)(((t2 & 0xF) << 2) << 2) >> 4));
                    
                }
            }
        }
    }
}

int FUN_0c0331f4(int a4, int a5, int a6, int a7)
{
    int stk[27];
    register int t5;
    register int t8;
    register int t10;
    register int t22;
    register int t11;
    register int t13;
    register int t14;
    register int t15;
    register int t16;
    register int t19;
    register int t17;

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 0)) = a6;
    *(unsigned int *)(((int)stk + 8)) = a7;
    memset((((int)stk + 0) + 0xC), 0x0, 0x60);
    FUN_0c0800c8((((int)stk + 0) + 0xC), 0xC0B3424);
    FUN_0c0800c8((((int)stk + 0) + 0x1E), 0xC0B3434);
    memcpy((((int)stk + 0) + 0x40), 0xC12A92A, 0x10);
    *(unsigned int *)(((int)stk + 80)) = 0xC12AA35;
    *(unsigned int *)(((int)stk + 84)) = 0xC12AA55;
    *(unsigned short *)(((int)stk + 88)) = 0x3;
    *(unsigned short *)(((int)stk + 90)) = 0x2;
    *(unsigned int *)(((int)stk + 92)) = 0x0;
    *(unsigned short *)(((int)stk + 96)) = 0x0;
    *(unsigned int *)(((int)stk + 100)) = (*(int *)(((int)stk + 0)));
    t5 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 104)) = t5;
    t8 = buCalcBackupFileSize((unsigned short)(*(short *)(((int)stk + 88))), (unsigned short)(*(short *)(((int)stk + 96))), t5);
    *(unsigned int *)(((int)stk + 0)) = t8;
    t10 = nlMalloc(((t8 << 8) << 1));
    t22 = 0xFFFFFFFF;
    if (t10 != 0) {
        t11 = buMakeBackupFileImage(t10, (((int)stk + 0) + 0xC));
        if ((int)t11 > 0) {
            t13 = BupSave(a4, (*(int *)(((int)stk + 4))), t10, t11);
            if (t13 != 0) {
                t14 = ((int (*)(int))(nlFree))(t10);
                t17 = 0xFFFFFFFF;
            } else {
                for (;;) {
                    t15 = buStat(a4);
                    if (t15 != -1) {
                        break;
                    }
                }
                t16 = ((int (*)(int))(nlFree))(t10);
                t17 = 0x0;
            }
            t22 = t17;
        } else {
            t19 = ((int (*)(int, int, int, int))(nlFree))(t10, 0x0, 0x0, t11);
            t22 = 0xFFFFFFFF;
        }
    }
    return t22;
}

int InsertRankRecord(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register int t12;
    register int t13;
    register int t14;
    register int t15;

    t6 = 0x0;
    if ((int)(a7 - 1) >= 0) {
        t7 = a4;
        t8 = a5;
        t9 = a6;
        t10 = (a7 - 1);
        t11 = 0x0;
        for (;;) {
            if ((int)t7 > 0) {
                t12 = *(int *)((t8 + 0x0));
                t13 = *(int *)((((((t10 << 1) + t10) << 2) + t9) + 0x0));
                if (((unsigned int)t12 <= (unsigned int)t13) && (((t12 != t13) || (t0 = *(int *)((t8 + 0x4)), t1 = *(int *)((((((t10 << 1) + t10) << 2) + t9) + 0x4)), (int)t0 >= (int)t1)) && (t2 = t13, t2 != -1))) {
                    break;
                }
                if ((int)t10 < (int)(a7 - 1)) {
                    t2 = 0xC;
                    t2 = (FUN_0c07ff00());
                } else {
                    t12 = t7;
                    t13 = t8;
                    t14 = t9;
                    t15 = t10;
                }
                t7 = t12;
                t8 = t13;
                t9 = t14;
                t10 = (t15 - 1);
                t11 = (t11 + 0x1);
                if ((int)t10 < 0) {
                    break;
                }
                continue;
            }
            t12 = *(int *)((t8 + 0x0));
            t13 = *(int *)((((((t10 << 1) + t10) << 2) + t9) + 0x0));
            if (((unsigned int)t12 >= (unsigned int)t13) && (((t12 != t13) || (t3 = *(int *)((t8 + 0x4)), t4 = *(int *)((((((t10 << 1) + t10) << 2) + t9) + 0x4)), (int)t3 >= (int)t4)) && (t2 = t13, t2 != -1))) {
                break;
            }
            if ((int)t10 < (int)(a7 - 1)) {
                t2 = 0xC;
                t2 = (FUN_0c07ff00());
            } else {
                t12 = t7;
                t13 = t8;
                t14 = t9;
                t15 = t10;
            }
            t7 = t12;
            t8 = t13;
            t9 = t14;
            t10 = (t15 - 1);
            t11 = (t11 + 0x1);
            if ((int)t10 < 0) {
                break;
            }
        }
        t6 = t11;
    }
    t0 = 0xFFFFFFFF;
    if (t6 != 0) {
        FUN_0c07ff00();
        t0 = (t5 + 0x1);
    }
    return t0;
}

int FUN_0c052866(void)
{
    register int t1;
    register int t2;
    register float u0;
    register float u1;

    if ((int)((((struct o0_int *)0xC2B2A2C)->v)) < (int)0xA) {
        (((struct o0_uint *)0xC2B2A2C)->v) = (((((struct o0_int *)0xC2B2A2C)->v)) + 0x1);
    } else {
        (((struct o0_uint *)0xC2B2A2C)->v) = 0xA;
    }
    t1 = (((struct o0_int *)0xC2B2A2C)->v);
    u0 = (((struct o0_float *)0xC0529A8)->v);
    (((struct o10_float *)0xC2B28B0)->v) = ((float)t1 / u0);
    (((struct o14_float *)0xC2B28B0)->v) = ((float)t1 / u0);
    FUN_0c076230(1.0f, 1.0f, ((((struct o4_float *)0xC0529A8)->v)));
    (((struct o0_uint *)0xC2B28B0)->v) = 0x222;
    u0 = (((struct oC_float *)0xC0529A8)->v);
    (((struct o4_float *)0xC2B28B0)->v) = (((-(((((struct o10_float *)0xC2B28B0)->v)) * ((((struct o10_float *)0xC0529A8)->v))))) + u0);
    (((struct o28_uint *)0xC2B28B0)->v) = 0x0;
    FUN_0c07ada0(0xC2B28B0);
    (((struct o0_uint *)0xC2B28B0)->v) = 0x223;
    u1 = u0;
    u1 = u1 + ((((struct o18_float *)0xC0529A8)->v)) * ((((struct o10_float *)0xC2B28B0)->v));
    (((struct o4_float *)0xC2B28B0)->v) = u1;
    FUN_0c07ada0(0xC2B28B0);
    FUN_0c026ce6();
    t1 = (((struct o0_int *)0xC2B2A2C)->v);
    t2 = t1;
    if ((t1 == 10) && (t2 = (((struct o4_int *)0xC2B2A2C)->v), t2 == 0)) {
        Voice_ShutUp(0x0);
        *(unsigned int *)0xC131FA0 = 0x87;
        t2 = FUN_0c058f64(0xC131FA0, 0x0, 0x78, 0x0);
        (((struct o4_uint *)0xC2B2A2C)->v) = 0x1;
    }
    return t2;
}

int FUN_0c0494a4(void)
{
    int stk[2];
    register int t4;
    register int t5;
    register int t20;
    register int t35;
    register int t42;

    FUN_0c04c354();
    FUN_0c0702f0();
    ETD_EntryRecvFunc(0x8, 0x8);
    FUN_0c04bfe0();
    t4 = *(int *)0xC1EC71C;
    t5 = *(int *)0xC175C84;
    if (t4 != 0) {
        if (t4 != 1) {
            t42 = t4;
            if (t4 != 2) {
            } else {
                (((struct o10_uint *)0xC2ADEB4)->v) = 0x1;
                (((struct o1C_uint *)0xC2ADEB4)->v) = 0x1;
                FUN_0c04b4c4(0xC5C3608);
                if ((int)((((struct o4_int *)0xC2ADEB4)->v)) < 0) {
                    (((struct o4_uint *)0xC2ADEB4)->v) = 0x0;
                }
                *(volatile int *)0xC2ADEB8;
                FUN_0c04d3f8();
                FUN_0c04b32c();
                t42 = (FUN_0c04bb7e());
            }
        } else {
            t20 = 0xC626438;
            if (t5 == 1) {
                t20 = 0xC628D58;
            }
            FUN_0c04b432(t20);
            FUN_0c04bcce();
            FUN_0c04bd0e();
            FUN_0c04c0c4();
            FUN_0c04c5bc();
            FUN_0c04b73c();
            t42 = (FUN_0c049f58());
        }
    } else {
        t35 = 0xC5F6008;
        if (t5 == 1) {
            t35 = 0xC5F3468;
        }
        FUN_0c04b432(t35);
        FUN_0c04bcce();
        FUN_0c04c544();
        FUN_0c04b592();
        t42 = (FUN_0c049610(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4)));
    }
    (((struct o0_uint *)0xC2ADEB4)->v) = (((((struct o0_int *)0xC2ADEB4)->v)) + 0x1);
    return t42;
}

int nlMirrorDouble(int a4)
{
    int stk[16];
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u7;
    register float u8;
    register float u11;
    register float u12;
    register float u15;
    register float u16;
    register float u19;
    register float u20;
    register float t21;

    u0 = (((struct oC_float *)(a4))->v);
    u1 = (u0 * u0);
    u2 = (u1 * (1.0f + 1.0f));
    u2 = -u2;
    *(float *)(((int)stk + 0)) = (u2 + 1.0f);
    u3 = (((struct o10_float *)(a4))->v);
    u4 = (u3 * u3);
    u5 = (u4 * (1.0f + 1.0f));
    u5 = -u5;
    *(float *)(((int)stk + 20)) = (u5 + 1.0f);
    u6 = (((struct o14_float *)(a4))->v);
    u7 = (u6 * u6);
    u8 = (u7 * (1.0f + 1.0f));
    u8 = -u8;
    *(float *)(((int)stk + 40)) = (u8 + 1.0f);
    u11 = (((((struct oC_float *)(a4))->v)) * ((((struct o10_float *)(a4))->v)));
    u12 = (u11 * (1.0f + 1.0f));
    u12 = -u12;
    (((struct o10_float *)(((int)stk + 0)))->v) = u12;
    (((struct o4_float *)(((int)stk + 0)))->v) = u12;
    u15 = (((((struct oC_float *)(a4))->v)) * ((((struct o14_float *)(a4))->v)));
    u16 = (u15 * (1.0f + 1.0f));
    u16 = -u16;
    (((struct o20_float *)(((int)stk + 0)))->v) = u16;
    (((struct o8_float *)(((int)stk + 0)))->v) = u16;
    u19 = (((((struct o10_float *)(a4))->v)) * ((((struct o14_float *)(a4))->v)));
    u20 = (u19 * (1.0f + 1.0f));
    u20 = -u20;
    (((struct o24_float *)(((int)stk + 0)))->v) = u20;
    (((struct o18_float *)(((int)stk + 0)))->v) = u20;
    t21 = FUN_0c073b40(a4, (a4 + 0xC));
    *(float *)(((int)stk + 48)) = ((t21 + t21) * ((((struct oC_float *)(a4))->v)));
    *(float *)(((int)stk + 52)) = ((t21 + t21) * ((((struct o10_float *)(a4))->v)));
    *(float *)(((int)stk + 56)) = ((t21 + t21) * ((((struct o14_float *)(a4))->v)));
    *(float *)(((int)stk + 12)) = 0.0f;
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 44)) = 0.0f;
    *(float *)(((int)stk + 60)) = 1.0f;
    return (nlMultiMatrix(((int)stk + 0)));
}

int vmsfs_fsetparam(int a4, int a5, int a6)
{
    int stk[6];
    register int t6;
    register int t12;
    register int t18;

    *(unsigned int *)(((int)stk + 20)) = a4;
    *(unsigned short *)(((((int)stk + 0) + 0x12) + 0x0)) = a5;
    (((struct o11_uchar *)(((int)stk + 0)))->v) = a6;
    if ((*(int *)(((int)stk + 20))) == 0) {
        return 0xFFFFFF00;
    }
    if ((*(signed char *)((((*(int *)(((*(int *)(((int)stk + 20))) + 0x28))) * 0x154) + 0xC2C8D2E))) == 0) {
        return 0xFFFFFF01;
    }
    t6 = vmsio_isready((*(int *)(((*(int *)(((int)stk + 20))) + 0x28))));
    if (t6 == 0) {
        vmsfs_unmount((*(int *)(((*(int *)(((int)stk + 20))) + 0x28))));
        return 0xFFFFFF01;
    }
    t12 = vmsio_ismount((*(int *)(((*(int *)(((int)stk + 20))) + 0x28))));
    if (t12 == 0) {
        return 0xFFFFFF01;
    }
    if ((*(signed char *)((((*(int *)(((*(int *)(((int)stk + 20))) + 0x28))) * 0x154) + 0xC2C8D34))) == 0) {
        return 0xFFFFFF01;
    }
    t18 = buIsFormat((*(int *)(((*(int *)(((int)stk + 20))) + 0x28))));
    if ((int)t18 < 0) {
        return 0xFFFFFF03;
    }
    *(unsigned short *)(((*(int *)(((int)stk + 20))) + 0x2)) = (*(short *)(((int)stk + 18)));
    *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x1)) = (*(signed char *)(((int)stk + 17)));
    return 0x0;
}

int vmsfs_getvolume(int a4, int a5)
{
    int stk[4];
    register int t4;
    register int t8;
    register int t13;
    register int t16;
    register int t14;

    *(unsigned int *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 0)) = (((*(int *)(((int)stk + 12))) * 0x154) + 0xC2C8D2C);
    if ((*(signed char *)(((((*(int *)(((int)stk + 12))) * 0x154) + 0xC2C8D2C) + 0x2))) == 0) {
        return 0xFFFFFF01;
    }
    t4 = vmsio_isready((*(int *)(((int)stk + 12))));
    if (t4 == 0) {
        vmsfs_unmount((*(int *)(((int)stk + 12))));
        return 0xFFFFFF01;
    }
    t8 = vmsio_ismount((*(int *)(((int)stk + 12))));
    if (t8 == 0) {
        return 0xFFFFFF01;
    }
    if ((*(signed char *)((((*(int *)(((int)stk + 12))) * 0x154) + 0xC2C8D34))) == 0) {
        return 0xFFFFFF01;
    }
    t13 = buIsFormat((*(int *)(((int)stk + 12))));
    if ((int)t13 < 0) {
        return 0xFFFFFF03;
    }
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 4))) >= (int)0x20) {
            break;
        }
        t16 = *(int *)(((int)stk + 8));
        *(unsigned int *)(((int)stk + 8)) = (t16 + 0x1);
        t13 = (*(int *)(((int)stk + 0)));
        t13 = (*(int *)((t13 + 0x20)));
        *(unsigned char *)((((t16 + 0x1) - 1) + 0x0)) = (*(signed char *)((((*(int *)(((int)stk + 4))) + 0x10) + t13)));
        t14 = (*(int *)(((int)stk + 4)));
        t14 = (t14 + 0x1);
        *(unsigned int *)(((int)stk + 4)) = t14;
    }
    return 0x0;
}

int buFbrCreateServer(int a4)
{
    int stk[4];

    *(unsigned int *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 4)) = (_builtin_get_imask());
    _builtin_set_imask(0xF);
    *(unsigned int *)(((int)stk + 0)) = 0xC2CF0A0;
    *(unsigned int *)(((int)stk + 8)) = 0x0;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 8))) >= (int)0x2) {
            if ((*(int *)(((int)stk + 8))) == 2) {
                *(unsigned int *)(((int)stk + 0)) = 0x0;
            } else {
                (((struct o208_uint *)((*(int *)(((int)stk + 0)))))->v) = (*(int *)(((int)stk + 12)));
                (((struct o20C_uint *)((*(int *)(((int)stk + 0)))))->v) = 0x0;
                (((struct o204_uint *)((*(int *)(((int)stk + 0)))))->v) = 0x0;
                memset(((*(int *)(((int)stk + 0))) + 0x210), 0x0, 0xB68);
                memset(((*(int *)(((int)stk + 0))) + 0x104), 0x0, 0x100);
                setjmp(((*(int *)(((int)stk + 0))) + 0x104));
                *(unsigned int *)(((*(int *)(((int)stk + 0))) + 0x0)) = 0x1;
                *(unsigned int *)0xC2D0BA0 = ((*(int *)0xC2D0BA0) + 0x1);
            }
            _builtin_set_imask(((unsigned int)((((*(int *)(((int)stk + 4))) & 0xF) << 2) << 2) >> 4));
            return (*(int *)(((int)stk + 0)));
        }
        if ((*(int *)(((*(int *)(((int)stk + 0))) + 0x0))) == 0) {
            break;
        }
        *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x1);
        *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0xD7C);
    }
    if ((*(int *)(((int)stk + 8))) == 2) {
        *(unsigned int *)(((int)stk + 0)) = 0x0;
    } else {
        (((struct o208_uint *)((*(int *)(((int)stk + 0)))))->v) = (*(int *)(((int)stk + 12)));
        (((struct o20C_uint *)((*(int *)(((int)stk + 0)))))->v) = 0x0;
        (((struct o204_uint *)((*(int *)(((int)stk + 0)))))->v) = 0x0;
        memset(((*(int *)(((int)stk + 0))) + 0x210), 0x0, 0xB68);
        memset(((*(int *)(((int)stk + 0))) + 0x104), 0x0, 0x100);
        setjmp(((*(int *)(((int)stk + 0))) + 0x104));
        *(unsigned int *)(((*(int *)(((int)stk + 0))) + 0x0)) = 0x1;
        *(unsigned int *)0xC2D0BA0 = ((*(int *)0xC2D0BA0) + 0x1);
    }
    _builtin_set_imask(((unsigned int)((((*(int *)(((int)stk + 4))) & 0xF) << 2) << 2) >> 4));
    return (*(int *)(((int)stk + 0)));
}

int pdVibSetUnitInfo(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;

    t1 = 0xFFFFFFFE;
    if ((((*(int *)((a7 + 0x0))) & 0x100) != 0) && (t0 = *(signed char *)((a6 + 0x4)), (unsigned char)t0 == 8)) {
        t0 = *(int *)((a6 + 0x8));
        if (a9 != 0) {
            *(unsigned int *)((a9 + 0x0)) = (((unsigned int)((unsigned int)(unsigned char)(*(signed char *)(((t0 + 0x8) + 0x0))) >> 2) >> 2) & 0xF);
        }
        t2 = *(signed char *)(((t0 + 0x8) + 0x1));
        *(unsigned char *)((a8 + 0x0)) = (((unsigned int)(unsigned char)(*(signed char *)(((t0 + 0x8) + 0x0))) >> 2) & 0x3);
        *(unsigned char *)((a8 + 0x1)) = ((*(signed char *)(((t0 + 0x8) + 0x0))) & 0x3);
        t3 = 0x0;
        if ((0x80 & (unsigned char)t2) != 0) {
            t3 = 0x1;
        }
        *(unsigned char *)((a8 + 0x2)) = t3;
        t3 = 0x0;
        if ((0x40 & (unsigned char)t2) != 0) {
            t3 = 0x1;
        }
        *(unsigned char *)((a8 + 0x3)) = t3;
        t3 = 0x0;
        if ((0x20 & (unsigned char)t2) != 0) {
            t3 = 0x1;
        }
        *(unsigned char *)((a8 + 0x4)) = t3;
        t3 = 0x0;
        if ((0x10 & (unsigned char)t2) != 0) {
            t3 = 0x1;
        }
        *(unsigned char *)((a8 + 0x5)) = t3;
        if (((unsigned char)t2 & 0xF) != 0) {
            if (((unsigned char)t2 & 0xF) != 1) {
                if (((unsigned char)t2 & 0xF) != 15) {
                    *(unsigned char *)((a8 + 0x6)) = 0xFF;
                    t2 = 0xFF;
                } else {
                    *(unsigned char *)((a8 + 0x6)) = 0x0;
                    t2 = 0x0;
                }
                t3 = t2;
            } else {
                t2 = 0xF;
                if ((int)(unsigned char)(*(signed char *)((((t0 + 0x8) + 0x2) + 0x0))) < (int)0xF) {
                } else {
                    t2 = (*(signed char *)((((t0 + 0x8) + 0x2) + 0x0)));
                }
                *(unsigned char *)((a8 + 0x6)) = t2;
                t3 = (*(signed char *)((((t0 + 0x8) + 0x2) + 0x0)));
            }
            t2 = t3;
        } else {
            t3 = 0xF;
            if ((int)(unsigned char)(*(signed char *)((((t0 + 0x8) + 0x2) + 0x0))) < (int)0xF) {
            } else {
                t3 = (*(signed char *)((((t0 + 0x8) + 0x2) + 0x0)));
            }
            *(unsigned char *)((a8 + 0x6)) = t3;
            t2 = (*(signed char *)(((t0 + 0x8) + 0x3)));
        }
        *(unsigned char *)((a8 + 0x7)) = t2;
        t1 = 0x0;
    }
    return t1;
}

int FUN_0c14fca6(int a4, int a5, int a6, int a7)
{
    int stk[10];
    register int t0;
    register int t1;
    register int t2;
    register int t4;
    register int t5;
    register int t8;
    register int t9;
    register int t13;
    register int t15;
    register int t31;

    *(unsigned int *)(((int)stk + 0)) = a6;
    if (a5 == 0) {
        t0 = ((int (*)(int, int, int, int))(FUN_0c1616ce))(0xC170814, a5, a6, a7);
        t31 = 0xFFFFFFFF;
    } else {
        t1 = SJRBF_Create((((int)stk + 0) + 0x8), 0x20, 0x0);
        if (t1 == 0) {
            t2 = ((int (*)(int))(FUN_0c1616ce))(0xC1708A8);
            t31 = 0xFFFFFFFF;
        } else {
            t4 = FUN_0c162322(a5, (*(int *)(((int)stk + 0))), t1);
            if (t4 == 0) {
                t5 = ((int (*)(int))(FUN_0c1616ce))(0xC1708D0);
                t8 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0xC)))))(t1, a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
                t31 = 0xFFFFFFFF;
            } else {
                t9 = FUN_0c16274a(t4);
                ADXSTM_Close(t4);
                t13 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0xC)))))(t1, a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
                t15 = (0x7FF + t9);
                if ((int)(0x7FF + t9) < 0) {
                    t15 = ((0x7FF + t9) + 0x7FF);
                }
                *(unsigned int *)(((int)stk + 4)) = ((int)t15 >> 11);
                strncpy((a4 + 0x34), a5, 0x28);
                (((struct o5C_uint *)(a4))->v) = (*(int *)(((int)stk + 0)));
                *(unsigned int *)((a4 + 0xC)) = (*(int *)(((int)stk + 4)));
                *(unsigned int *)((a4 + 0x10)) = t9;
                t31 = 0x0;
            }
        }
    }
    return t31;
}

void SJUNI_UngetChunk(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    if (((int)a5 >= 0) && ((int)a5 < (int)0x4)) {
        if (((int)(*(int *)((a6 + 0x4))) > 0) && (t0 = *(int *)((a6 + 0x0)), t0 != 0)) {
            t0 = SJUNI_Lock();
            t5 = *(int *)((((a5 << 2) + (a4 + 0x18)) + 0x0));
            if (((*(signed char *)((a4 + 0x5))) == 1) && ((t5 != 0) && (t1 = *(int *)((a6 + 0x0)), t2 = *(int *)((a6 + 0x4)), t3 = *(int *)((t5 + 0x8)), (t1 + t2) == t3))) {
                *(unsigned int *)((t5 + 0x8)) = (*(int *)((a6 + 0x0)));
                *(unsigned int *)((t5 + 0xC)) = ((*(int *)((t5 + 0xC))) + (*(int *)((a6 + 0x4))));
            } else {
                t1 = *(int *)((a4 + 0x14));
                if (t1 == 0) {
                    if ((*(int *)((a4 + 0x28))) != 0) {
                        t2 = ((int (*)(int, int, int, int))((*(int *)((a4 + 0x28)))))((*(int *)((a4 + 0x2C))), 0xFFFFFFFD, a6, a7);
                    }
                } else {
                    *(unsigned int *)((a4 + 0x14)) = (*(int *)((t1 + 0x0)));
                    *(unsigned int *)((t1 + 0x0)) = 0x0;
                    FUN_0c07fdc8();
                    *(unsigned int *)((t4 + 0x0)) = (*(int *)((((a4 + 0x18) + (a5 << 2)) + 0x0)));
                    *(unsigned int *)((((a4 + 0x18) + (a5 << 2)) + 0x0)) = t4;
                }
            }
            SJUNI_Unlock(a4, t0);
    return;
        }
        return;
    }
    if ((*(int *)((a4 + 0x28))) != 0) {
        ((int (*)(int, int, int, int))((*(int *)((a4 + 0x28)))))((*(int *)((a4 + 0x2C))), 0xFFFFFFFD, a6, a7);
    return;
    }
}

int GetStopPosCenter(int a4, int a5, int a6)
{
    int stk[5];
    register int t4;
    register int t6;
    register int t8;
    register int t9;
    register float u14;
    register float u15;
    register float u16;
    register float u34;
    register int t23;
    register int t24;
    register float u25;
    register float t26;

    *(unsigned int *)(((int)stk + 0)) = a6;
    t4 = *(int *)(((((((struct o4_int *)0xC1EC720)->v)) << 2) + (*(int *)((0xC1294F0 + (((((struct o0_int *)0xC1EC720)->v)) << 2))))));
    *(unsigned int *)(((int)stk + 4)) = ((a4 << 2) << 1);
    t9 = *(int *)(((t4 + ((a4 << 2) << 1)) + 0x4));
    t6 = *(int *)(((t4 + ((a4 << 2) << 1)) + 0x0));
    FUN_0c07ff00();
    if ((int)t6 > 0) {
        t8 = 0x0;
        for (;;) {
            nlAddVector((((int)stk + 0) + 0x8), t9);
            t8 = (t8 + 0x1);
            t9 = (t9 + 0xC);
            if ((int)t8 >= (int)t6) {
                break;
            }
        }
    }
    u14 = *(float *)(((int)stk + 8));
    *(float *)(((int)stk + 8)) = (u14 * (1.0f / (float)t6));
    *(float *)((a5 + 0x0)) = (u14 * (1.0f / (float)t6));
    u15 = *(float *)(((int)stk + 12));
    *(float *)(((int)stk + 12)) = (u15 * (1.0f / (float)t6));
    (((struct o4_float *)(a5))->v) = (u15 * (1.0f / (float)t6));
    u16 = *(float *)(((int)stk + 16));
    *(float *)(((int)stk + 16)) = (u16 * (1.0f / (float)t6));
    (((struct o8_float *)(a5))->v) = (u16 * (1.0f / (float)t6));
    t24 = *(int *)((((*(int *)(((((((struct o4_int *)0xC1EC720)->v)) << 2) + (*(int *)((0xC1294F0 + (((((struct o0_int *)0xC1EC720)->v)) << 2))))))) + (*(int *)(((int)stk + 4)))) + 0x4));
    u34 = 0.0f;
    if ((int)t6 > 0) {
        t23 = 0x0;
        u25 = 0.0f;
        for (;;) {
            t26 = nlLength(a5, t24);
            t24 = (t24 + 0xC);
            if (t26 > u25) {
                u25 = t26;
            }
            t23 = (t23 + 0x1);
            if ((int)t23 >= (int)t6) {
                break;
            }
        }
        u34 = u25;
    }
    *(float *)(((*(int *)(((int)stk + 0))) + 0x0)) = (u34 * 1.20000005f);
    return 0xC016394;
}

int FUN_0c03b23e(void)
{
    register int t1;
    register int t5;
    register int t6;
    register int t8;
    register int t9;
    int t10;
    int t11;

    if ((int)((((struct o0_int *)0xC1EC720)->v)) < (int)0x2) {
        *(unsigned int *)0xC2A58A8 = 0x6;
        t1 = 0x0;
        for (;;) {
            if ((int)((((struct o0_int *)0xC2AC5E0)->v)) < (int)(*(int *)((0xC0C0514 + (t1 << 2))))) {
                t1 = (t1 + 0x1);
                if ((int)t1 >= (int)0x7) {
                    break;
                }
                continue;
            }
            *(unsigned int *)0xC2A58A8 = t1;
            return (*(int *)0xC2A58A8);
        }
    } else {
        *(unsigned int *)0xC2A58A8 = 0x2;
        t5 = 0x0;
        for (;;) {
            t6 = (((struct o4_int *)0xC1EC720)->v);
            t8 = *(int *)(((t5 << 2) + ((((t6 << 1) + t6) << 2) + 0xC0C0530)));
            t9 = *(int *)((((((t6 << 1) + t6) << 2) + 0xC09C8F4) + 0x8));
            if ((((int)t9 > 0) && (t10 = (((struct o4_int *)0xC2AC5E0)->v), (int)t10 >= (int)t8)) || (((int)t9 < 0) && (t11 = (((struct o4_int *)0xC2AC5E0)->v), (int)t11 <= (int)t8))) {
                break;
            }
            t5 = (t5 + 0x1);
            if ((int)t5 >= (int)0x3) {
                return (*(int *)0xC2A58A8);
            }
        }
        *(unsigned int *)0xC2A58A8 = t5;
    }
    return (*(int *)0xC2A58A8);
}

int FUN_0c06002a(int a4, int a5, float f4)
{
    register int t46;
    register float t1;
    int t2;
    register int t15;
    register float u9;
    register int t21;
    register int t25;

    t46 = 0xFFFFFFFF;
    if ((*(int *)0xC13AFF8) != 0) {
        t1 = FUN_0c073b40(0xC17598C, 0xC2B9CBC);
        t2 = *(int *)0xC13AFF8;
        if ((t2 & 0x800FFFFE) != 0) {
            t46 = 0x2;
            if (_builtin_fabsf(t1) > 0.75f) {
            } else {
                t46 = 0x1;
                t15 = 0;
                if (_builtin_fabsf(t1) > ((((struct o0_float *)0xC06019C)->v))) {
                    t15 = (1);
                } else {
                    u9 = (((struct o4_float *)0xC06019C)->v);
                    t46 = 0xFFFFFFFF;
                    if (_builtin_fabsf(t1) > u9) {
                        t46 = 0x0;
                    }
                    t15 = ((_builtin_fabsf(t1) > u9));
                }
            }
            t21 = 0x9;
            if ((t2 & 0xFFFFE) != 0) {
                t21 = 0x8;
            }
            FUN_0c040bec(t21, t46, _builtin_fabsf(t1));
        } else {
            t46 = 0xFFFFFFFF;
            if ((0x3E00000 & t2) != 0) {
                t46 = 0x0;
                t25 = 0x7;
                if ((t2 & 0x800000) != 0) {
                    t46 = 0x1;
                    t25 = 0xA;
                }
                FUN_0c040bec(t25, 0x0, _builtin_fabsf(t1));
            } else {
                _builtin_fabsf(t1);
            }
        }
    }
    *(unsigned int *)0xC13AFF8 = (*(int *)0xC1758D4);
    return t46;
}

int vmsfs_c_setfname(int a4, int a5, int a6)
{
    int stk[5];
    register int t0;
    register int t3;
    register int t7;
    register int t9;
    register int t10;
    register int t14;
    register int t16;
    register int t32;
    register int t42;
    register int t45;
    register int t57;

    *(unsigned int *)(((int)stk + 16)) = a4;
    *(unsigned int *)(((int)stk + 12)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    t0 = *(int *)(((int)stk + 16));
    *(unsigned int *)(((int)stk + 4)) = (((((t0 << 2) << 2) << 2) << 1) + 0xC2C6914);
    *(unsigned int *)(((int)stk + 0)) = 0x0;
    t3 = (((((t0 << 2) << 2) << 2) << 1) + 0xC2C6914);
    for (;;) {
        if ((int)(*(int *)(((int)stk + 0))) >= (int)0xD) {
            break;
        }
        t9 = (*(int *)(((int)stk + 4)));
        t3 = (*(int *)(((int)stk + 0)));
        t7 = ((t9 + 0x2C) + t3);
        t9 = 0x0;
        *(unsigned char *)((t7 + 0x0)) = t9;
        t3 = (*(int *)(((int)stk + 0)));
        t3 = (t3 + 0x1);
        *(unsigned int *)(((int)stk + 0)) = t3;
    }
    *(unsigned int *)(((int)stk + 0)) = 0x0;
    t10 = 0x0;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 0))) >= (int)0xD) {
            break;
        }
        t9 = (*(int *)(((int)stk + 4)));
        t10 = (*(int *)(((int)stk + 0)));
        t14 = ((t9 + 0x3C) + t10);
        t9 = 0x0;
        *(unsigned char *)((t14 + 0x0)) = t9;
        t10 = (*(int *)(((int)stk + 0)));
        t10 = (t10 + 0x1);
        *(unsigned int *)(((int)stk + 0)) = t10;
    }
    *(unsigned int *)(((int)stk + 0)) = 0x0;
    t16 = t9;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 0))) >= (int)0xC) {
            *(unsigned int *)(((int)stk + 0)) = 0x0;
            for (;;) {
                if ((int)(*(int *)(((int)stk + 0))) >= (int)0xC) {
                    return t16;
                }
                t16 = (*(int *)(((int)stk + 0)));
                if ((signed char)(*(signed char *)(((*(int *)(((int)stk + 8))) + t16))) == 0) {
                    break;
                }
                t16 = (*(int *)(((int)stk + 4)));
                t32 = ((t16 + 0x3C) + (*(int *)(((int)stk + 0))));
                t16 = (*(int *)(((int)stk + 0)));
                *(unsigned char *)((t32 + 0x0)) = (*(signed char *)(((*(int *)(((int)stk + 8))) + t16)));
                *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0x1);
            }
            return t16;
        }
        t16 = (*(int *)(((int)stk + 0)));
        if ((signed char)(*(signed char *)(((*(int *)(((int)stk + 12))) + t16))) == 0) {
            break;
        }
        t16 = (*(int *)(((int)stk + 4)));
        t42 = ((t16 + 0x2C) + (*(int *)(((int)stk + 0))));
        t16 = (*(int *)(((int)stk + 0)));
        *(unsigned char *)((t42 + 0x0)) = (*(signed char *)(((*(int *)(((int)stk + 12))) + t16)));
        *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0x1);
    }
    *(unsigned int *)(((int)stk + 0)) = 0x0;
    t45 = t16;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 0))) >= (int)0xC) {
            return t45;
        }
        t45 = (*(int *)(((int)stk + 0)));
        if ((signed char)(*(signed char *)(((*(int *)(((int)stk + 8))) + t45))) == 0) {
            break;
        }
        t45 = (*(int *)(((int)stk + 4)));
        t57 = ((t45 + 0x3C) + (*(int *)(((int)stk + 0))));
        t45 = (*(int *)(((int)stk + 0)));
        *(unsigned char *)((t57 + 0x0)) = (*(signed char *)(((*(int *)(((int)stk + 8))) + t45)));
        *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0x1);
    }
    return t45;
}

int vmsfs_mediainfo_retry(int a4, int a5)
{
    int stk[6];
    register int t3;
    register int t8;
    register int t10;
    register int t12;
    register int t15;
    register int t16;
    register int t17;
    register int t22;
    register int t23;
    register int t26;
    register int t27;
    register int t28;
    register int t33;
    int t7;
    int t11;

    *(unsigned int *)(((int)stk + 20)) = a4;
    *(unsigned int *)(((int)stk + 16)) = a5;
    *(unsigned int *)(((int)stk + 8)) = (*(int *)0xC2C68F0);
    for (;;) {
        t3 = vmsio_get_media_info((*(int *)(((int)stk + 20))), (*(int *)(((int)stk + 16))));
        *(unsigned int *)(((int)stk + 12)) = t3;
        if (t3 == 0) {
            break;
        }
        if (((*(int *)0xC1182A4) != 0) && (t7 = *(int *)(((int)stk + 12)), t7 == 0xFFFFFF30)) {
            return 0xFFFFFF01;
        }
        t8 = *(int *)(((int)stk + 20));
        *(unsigned int *)(((int)stk + 4)) = ((t8 * 0x154) + 0xC2C8D2C);
        *(unsigned int *)((((t8 * 0x154) + 0xC2C8D2C) + 0x34)) = ((*(int *)((((t8 * 0x154) + 0xC2C8D2C) + 0x34))) + 0x1);
        t10 = *(int *)(((int)stk + 8));
        *(unsigned int *)(((int)stk + 8)) = (t10 - 1);
        if ((((t10 - 1) + 0x1) == 0) && (t11 = *(int *)0xC2C68F0, t11 != -1)) {
            t12 = *(int *)(((int)stk + 20));
            *(unsigned int *)(((int)stk + 4)) = ((t12 * 0x154) + 0xC2C8D2C);
            *(unsigned int *)(((int)stk + 0)) = ((((((*(int *)(((int)stk + 20))) << 2) << 2) << 2) << 1) + 0xC2C6914);
            t15 = *(int *)((((t12 * 0x154) + 0xC2C8D2C) + 0x34));
            t16 = *(int *)(((int)stk + 4));
            t17 = *(int *)((t16 + 0x30));
            *(unsigned int *)((t16 + 0x30)) = (t17 + 0x1);
            vmsfs_c_progress((*(int *)(((int)stk + 20))), (*(int *)(((*(int *)(((int)stk + 0))) + 0x8))), ((t17 + 0x1) - 1), t15);
            t22 = *(int *)(((int)stk + 12));
            if (t22 != 0) {
                if (t22 != 0xFFFFFF01) {
                    return 0xFFFF0000;
                }
                return 0xFFFFFF01;
            }
            return 0x0;
        }
    }
    t23 = *(int *)(((int)stk + 20));
    *(unsigned int *)(((int)stk + 4)) = ((t23 * 0x154) + 0xC2C8D2C);
    *(unsigned int *)(((int)stk + 0)) = ((((((*(int *)(((int)stk + 20))) << 2) << 2) << 2) << 1) + 0xC2C6914);
    t26 = *(int *)((((t23 * 0x154) + 0xC2C8D2C) + 0x34));
    t27 = *(int *)(((int)stk + 4));
    t28 = *(int *)((t27 + 0x30));
    *(unsigned int *)((t27 + 0x30)) = (t28 + 0x1);
    vmsfs_c_progress((*(int *)(((int)stk + 20))), (*(int *)(((*(int *)(((int)stk + 0))) + 0x8))), ((t28 + 0x1) - 1), t26);
    t33 = *(int *)(((int)stk + 12));
    if (t33 != 0) {
        if (t33 != 0xFFFFFF01) {
            return 0xFFFF0000;
        }
        return 0xFFFFFF01;
    }
    return 0x0;
}

int vmsfs_fgetsize(int a4, int a5)
{
    int stk[14];
    register int t3;
    register int t7;
    register int t11;
    register int t14;
    register int t17;

    *(unsigned int *)(((int)stk + 52)) = a4;
    *(unsigned int *)(((int)stk + 48)) = a5;
    if ((*(signed char *)((((*(int *)(((int)stk + 52))) * 0x154) + 0xC2C8D2E))) == 0) {
        return 0xFFFFFF01;
    }
    t3 = vmsio_isready((*(int *)(((int)stk + 52))));
    if (t3 == 0) {
        vmsfs_unmount((*(int *)(((int)stk + 52))));
        return 0xFFFFFF01;
    }
    t7 = vmsio_ismount((*(int *)(((int)stk + 52))));
    if (t7 == 0) {
        return 0xFFFFFF01;
    }
    if ((*(signed char *)((((*(int *)(((int)stk + 52))) * 0x154) + 0xC2C8D34))) == 0) {
        return 0xFFFFFF01;
    }
    t11 = buIsFormat((*(int *)(((int)stk + 52))));
    if ((int)t11 < 0) {
        return 0xFFFFFF03;
    }
    t14 = FUN_0c08faa8((*(int *)(((int)stk + 52))), (*(int *)(((int)stk + 48))));
    if ((int)t14 < 0) {
        return 0xFFFFFF0B;
    }
    t17 = FUN_0c08f204((*(int *)(((int)stk + 52))), (*(int *)(((int)stk + 48))), ((int)stk + 0));
    *(unsigned int *)(((int)stk + 44)) = t17;
    if ((int)t17 < 0) {
        return 0xFFFFFF05;
    }
    return (*(int *)(((int)stk + 40)));
}

int FUN_0c068166(int a4, int a5)
{
    register int t0;
    register int t1;
    register float u8;
    register float u3;
    register float u4;
    int t11;

    t0 = FUN_0c029b12(a5, 18.0f);
    t1 = (((struct oAC_int *)(a4))->v);
    u8 = 3.40282347e+38f;
    if ((*(int *)((t0 + 0x1C))) != -1) {
        u3 = (((struct o4_float *)(a5))->v);
        u4 = (((struct o4_float *)(t0))->v);
        _builtin_fabsf((u3 - u4));
        u8 = _builtin_fabsf((u3 - u4));
    }
    if (((*(int *)((t1 + 0xC))) != 3) && (t11 = *(signed char *)((a4 + 0xFE)), (t11 & 64) == 0)) {
        if (18.0f > u8) {
            FUN_0c07ff00();
            return CalcShadow4Normal((0x90 + a4), (t0 + 0xC));
        }
        return t11;
    }
    if (!(18.0f > u8)) {
        (((struct o70_float *)(a4))->v) = (*(float *)((a5 + 0x0)));
        (((struct o78_float *)(a4))->v) = ((((struct o8_float *)(a5))->v));
        return 0x78;
    }
    FUN_0c07ff00();
    return CalcShadow4Normal((0x90 + a4), (t0 + 0xC));
}

int FUN_0c07b97e(int a4, int a5, int a6, int a7)
{
    int stk[3];

    register int R0;
    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    v0_0 = a4;
    v0_1 = a5;
    v0_5 = a6;
    v0_2 = a7;
    *(unsigned int *)(((int)stk + 0)) = v0_1;
    *(unsigned int *)(((int)stk + 4)) = v0_2;
    (((struct oC_uint *)0xC2C3E64)->v) = (((((struct oC_int *)0xC2C3E64)->v)) + v0_5);
    *(unsigned int *)(((int)stk + 8)) = (signed char)(((v0_0 << 1) + v0_0) << 2);
    *(unsigned int *)((((signed char)(((v0_0 << 1) + v0_0) << 2) + 0xC2C3F88) + 0x8)) = v0_5;
    *(unsigned int *)((((signed char)(((v0_0 << 1) + v0_0) << 2) + 0xC2C3F88) + 0x0)) = (*(int *)(((int)stk + 0)));
    FUN_0c07b6c0((*(int *)(((int)stk + 0))), ((v0_0 << 2) + 0xA0800060));
    v0_7 = (int)(v0_0 - 1) < 0;
    v0_3 = (v0_5);
    v0_6 = (v0_0);
    v0_4 = (0xC2C3F88);
    v0_0 = ((v0_0 - 1));
    v0_1 = (0x0);
    v0_2 = (0x0);
    if (v0_7) goto L_C07B9F8;
    L_C07B9C8:;
    if (((*(int *)((v0_4 + (signed char)(((v0_0 << 1) + v0_0) << 2)))) == -1)) goto L_C07B9F2;
    v0_1 = (((*(int *)((((signed char)(((v0_0 << 1) + v0_0) << 2) + v0_4) + 0x4))) + (*(int *)((((signed char)(((v0_0 << 1) + v0_0) << 2) + v0_4) + 0x8)))));
    L_C07B9F8:;
    if ((v0_1 != 0)) goto L_C07BA00;
    v0_1 = (((((struct o0_int *)0xC2C3E64)->v)));
    L_C07BA00:;
    *(unsigned int *)((((*(int *)(((int)stk + 8))) + v0_4) + 0x4)) = v0_1;
    v0_0 = ((v0_6 + 0x1));
    v0_5 = (0x8);
    if (((int)(v0_6 + 0x1) >= (int)0x8)) goto L_C07BA42;
    L_C07BA10:;
    if (((*(int *)((v0_4 + (signed char)(((v0_0 << 1) + v0_0) << 2)))) == -1)) goto L_C07BA3C;
    v0_6 = *(int *)((((signed char)(((v0_0 << 1) + v0_0) << 2) + v0_4) + 0x8));
    *(unsigned int *)((((signed char)(((v0_0 << 1) + v0_0) << 2) + v0_4) + 0x4)) = ((*(int *)((((signed char)(((v0_0 << 1) + v0_0) << 2) + v0_4) + 0x4))) + v0_3);
    v0_2 = ((v0_2 + v0_6));
    L_C07BA3C:;
    v0_6 = (int)(v0_0 + 0x1) < (int)v0_5;
    v0_0 = ((v0_0 + 0x1));
    if (v0_6) goto L_C07BA10;
    L_C07BA42:;
    *(unsigned int *)(((*(int *)(((int)stk + 4))) + 0x0)) = v0_2;
    return v0_1;
    L_C07B9F2:;
    v0_5 = (int)(v0_0 - 1) >= 0;
    v0_0 = ((v0_0 - 1));
    if (v0_5) goto L_C07B9C8;
    goto L_C07B9F8;
}

void gdFsReqRdPio(int a4, int a5, int a6)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    if ((a4 != 0) && (t0 = (((struct o4C_short *)(a4))->v), t0 != 0)) {
        if ((*(int *)(((*(int *)((a4 + 0x0))) + 0x1C))) == 0) {
            t0 = *(int *)((a4 + 0x14));
            t1 = *(int *)((a4 + 0x8));
            t2 = *(int *)((a4 + 0x10));
            if ((int)(t0 + t1) < (int)(t1 + t2)) {
                t3 = a5;
                if ((int)(a5 + (t0 + t1)) > (int)(t1 + t2)) {
                    t3 = ((t1 + t2) - (t0 + t1));
                }
                if (t3 == 0) {
                    *(unsigned int *)((a4 + 0x18)) = 0x0;
                    (((struct o50_ushort *)(a4))->v) = 0x1;
                } else {
                    t2 = _builtin_get_imask();
                    _builtin_set_imask(0xF);
                    t4 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)(((*(int *)((a4 + 0x0))) + 0xC))) + 0x4)))))((t0 + t1), t3, a6, 0x0);
                    if (t4 != 0) {
                        *(unsigned int *)((a4 + 0x3C)) = t4;
                        *(unsigned int *)((a4 + 0x1C)) = t3;
                        (((struct o50_ushort *)(a4))->v) = 0x2;
                        (((struct o4A_ushort *)(a4))->v) = 0x1;
                        (((struct o48_ushort *)(a4))->v) = 0x1;
                        *(unsigned int *)((a4 + 0x18)) = 0x0;
                        *(unsigned int *)(((*(int *)((a4 + 0x0))) + 0x1C)) = a4;
                        t0 = ((int (*)(void))(((((struct o40_int *)((*(int *)(((*(int *)((a4 + 0x0))) + 0xC)))))->v))))();
                    } else {
                        (((struct o50_ushort *)(a4))->v) = 0x1;
                    }
                    _builtin_set_imask(((unsigned int)(((t2 & 0xF) << 2) << 2) >> 4));
                    
                }
            } else {
                *(unsigned int *)((a4 + 0x18)) = 0x0;
                (((struct o50_ushort *)(a4))->v) = 0x1;
            }
        }
    }
}

int FUN_0c0435e2(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    if ((a5 & 0x8) != 0) {
        if ((((((struct o84_int *)(a4))->v)) & 0x8) != 0) {
            FUN_0c07ff00();
            FUN_0c07ff00();
            *(unsigned int *)((a4 + 0x3C)) = (a4 + 0x44);
            (((struct o40_uint *)(a4))->v) = 0x0;
            FUN_0c07ff00();
            (((struct o68_uint *)(a4))->v) = t0;
            (((struct o6C_float *)(a4))->v) = 0.0f;
            (((struct o70_float *)(a4))->v) = 0.0f;
            SetColliObj((a4 + 0x14), (*(int *)(((((((struct o78_int *)(a4))->v)) * 0xA8) + 0xC0C106C))));
        } else {
            t0 = ((int (*)(int, int, int, int))(KillColliObj))((a4 + 0x14), a5, a6, a7);
        }
    } else {
        t0 = a5;
    }
    t1 = 0x1;
    if ((((((struct o84_int *)(a4))->v)) & 1) == 0) {
        if ((0x8 & ((((struct o84_int *)(a4))->v))) != 0) {
            t2 = ((int (*)(int, int))(KillColliObj))((a4 + 0x14), t0);
        }
        t1 = 0x0;
    }
    return t1;
}

int FUN_0c05e784(int a4)
{
    int stk[7];
    register float t5;
    register float u13;
    register float u16;
    register float u19;
    register float u23;
    register int t24;

    nlPushMatrix(0x0);
    nlQuickInvertMatrix();
    FUN_0c072230((a4 + 0xC), (((int)stk + 0) + 0x10));
    FUN_0c072230(a4, (((int)stk + 0) + 0x4));
    nlPopMatrix(0x1);
    t5 = nlUnitVectorsd((((int)stk + 0) + 0x4), 0xC136FF8);
    *(unsigned int *)(((int)stk + 0)) = 0xC136FF8;
    nlOuterProduct((*(int *)(((int)stk + 0))), (((int)stk + 0) + 0x10), 0xC137018);
    FUN_0c073e10(0xC137018);
    nlOuterProduct(0xC137018, 0xC136FF8, 0xC137008);
    FUN_0c073e10(0xC137008);
    nlMultiMatrix8(0xC136FF8);
    u13 = (t5 * t5);
    u16 = (t5 * ((((struct o18_float *)(a4))->v)));
    *(unsigned int *)((a4 + 0x28)) = (FUN_0c070730((((u13 + ((((struct o1C_float *)(a4))->v))) - ((((struct o24_float *)(a4))->v))) / (u16 * (1.0f + 1.0f)))));
    u19 = (t5 * t5);
    u23 = (((((struct o18_float *)(a4))->v)) * ((((struct o20_float *)(a4))->v)));
    t24 = FUN_0c070730((((u19 - ((((struct o1C_float *)(a4))->v))) - ((((struct o24_float *)(a4))->v))) / (u23 * (1.0f + 1.0f))));
    *(unsigned int *)((a4 + 0x2C)) = (-t24);
    return (-t24);
}

int cvFsOpen(int a4, int a5, int a6, int a7)
{
    int stk[20];

    register int R1;
    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    v0_2 = a4;
    v0_0 = a5;
    v0_1 = a6;
    *(unsigned int *)(((int)stk + 4)) = v0_0;
    *(unsigned int *)(((int)stk + 0)) = v0_1;
    if ((v0_2 == 0)) goto L_C16C77A;
    FUN_0c16c85e((((int)stk + 0) + 0x8), (((int)stk + 0) + 0x2C), v0_2);
    v0_2 = ((((int)stk + 0) + 0x2C));
    v0_4 = ((((int)stk + 0) + 0x8));
    if (((*(signed char *)(((((int)stk + 0) + 0x2C) + 0x0))) != 0)) goto L_C16C780;
    L_C16C77A:;
    v0_2 = (0xC172478);
    L_C16C7A2:;
    v0_0 = ((int (*)(int, int, int))(cvFsError))(v0_2, v0_0, v0_1);
    L_C16C816:;
    v0_0 = (0x0);
    L_C16C81C:;
    return v0_0;
    L_C16C780:;
    if (((*(signed char *)((v0_4 + 0x0))) != 0)) goto L_C16C796;
    FUN_0c16c90c(v0_4);
    if (((*(signed char *)((v0_4 + 0x0))) != 0)) goto L_C16C796;
    v0_2 = (0xC172498);
    L_C16C7BC:;
    v0_0 = ((int (*)(int, int, int))(cvFsError))(v0_2, v0_0, v0_1);
    goto L_C16C816;
    L_C16C796:;
    v0_5 = FUN_0c16c828();
    v0_3 = (v0_5);
    if ((v0_5 != 0)) goto L_C16C7AA;
    v0_2 = (0xC1724B8);
    goto L_C16C7A2;
    L_C16C7AA:;
    v0_4 = FUN_0c16c56c(v0_4);
    *(unsigned int *)((v0_3 + 0x0)) = v0_4;
    if ((v0_4 != 0)) goto L_C16C7C4;
    FUN_0c16c856(v0_3);
    v0_2 = (0xC1724DC);
    goto L_C16C7BC;
    L_C16C7C4:;
    if (((*(int *)(((*(int *)((v0_3 + 0x0))) + 0x10))) == 0)) goto L_C16C800;
    *(unsigned int *)((v0_3 + 0x4)) = (((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((v0_3 + 0x0))) + 0x10)))))(v0_2, (*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 0))), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
    if (((*(int *)((v0_3 + 0x4))) != 0)) goto L_C16C81A;
    FUN_0c16c856(v0_3);
    v0_0 = ((int (*)(int))(cvFsError))(0xC172514);
    goto L_C16C816;
    L_C16C81A:;
    v0_0 = (v0_3);
    goto L_C16C81C;
    L_C16C800:;
    v0_2 = (0xC1724FC);
    goto L_C16C7BC;
}

int FUN_0c052416(int a4, int a5)
{
    int stk[3];
    register int t4;
    register int t5;
    register int t9;
    register int t10;

    *(unsigned int *)((a4 + 0x14)) = a5;
    (((struct o18_float *)(a4))->v) = (float)((((struct o0_int *)0xC2B29A0)->v));
    (((struct o1C_float *)(a4))->v) = (float)((((struct o4_int *)0xC2B29A0)->v));
    (((struct o20_float *)(a4))->v) = 0.200000003f;
    (((struct o30_ushort *)(a4))->v) = 0x0;
    (((struct o32_ushort *)(a4))->v) = 0x0;
    (((struct o34_ushort *)(a4))->v) = 0x0;
    (((struct o38_float *)(a4))->v) = 0.0f;
    (((struct o3C_float *)(a4))->v) = (((float)((int)((int)(FUN_0c070e60()) % (int)0x14)) / 20.0f) + 1.5f);
    t4 = FUN_0c070e60();
    t5 = ((~(((~t4) + 0x1) & 0x7F)) + 0x1);
    if ((int)t4 >= 0) {
        t5 = (t4 & 0x7F);
    }
    *(float *)(((int)stk + 0)) = (float)(t5 + 0x1C2);
    *(float *)(((int)stk + 4)) = 120.0f;
    *(float *)(((int)stk + 8)) = 0.200000003f;
    nlSubVector(((int)stk + 0), (a4 + 0x18));
    nlScaleUnitVector((a4 + 0x24), ((int)stk + 0), 20.0f);
    t9 = FUN_0c070e60();
    t10 = ((~(((~t9) + 0x1) & 0x3)) + 0x1);
    if ((int)t9 >= 0) {
        t10 = (t9 & 0x3);
    }
    (((struct o36_ushort *)(a4))->v) = ((t10 << 8) << 2);
    return ((t10 << 8) << 2);
}

void SJRBF_UngetChunk(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;

    if (((int)(*(int *)((a6 + 0x4))) > 0) && (t0 = *(int *)((a6 + 0x0)), t0 != 0)) {
        t0 = SJRBF_Lock();
        if (a5 == 0) {
            t1 = *(int *)((a4 + 0x20));
            t2 = (int)((int)(((*(int *)((a4 + 0x14))) + t1) - (*(int *)((a6 + 0x4)))) % (int)t1);
            if (t2 == ((int)((int)((*(int *)((a6 + 0x0))) - (*(int *)((a4 + 0x1C)))) % (int)t1))) {
                *(unsigned int *)((a4 + 0x14)) = t2;
                *(unsigned int *)((a4 + 0x10)) = ((*(int *)((a4 + 0x10))) + (*(int *)((a6 + 0x4))));
            } else {
                if ((*(int *)((a4 + 0x28))) == 0) {
                } else {
                    t1 = ((int (*)(int, int, int, int))((*(int *)((a4 + 0x28)))))((*(int *)((a4 + 0x2C))), 0xFFFFFFFD, a6, a7);
                }
            }
        } else {
            if (a5 == 1) {
                t1 = *(int *)((a4 + 0x20));
                t2 = (int)((int)(((*(int *)((a4 + 0x18))) + t1) - (*(int *)((a6 + 0x4)))) % (int)t1);
                if (t2 == ((int)((int)((*(int *)((a6 + 0x0))) - (*(int *)((a4 + 0x1C)))) % (int)t1))) {
                    *(unsigned int *)((a4 + 0x18)) = t2;
                    *(unsigned int *)((a4 + 0xC)) = ((*(int *)((a4 + 0xC))) + (*(int *)((a6 + 0x4))));
                } else {
                    if ((*(int *)((a4 + 0x28))) != 0) {
                        t1 = ((int (*)(int, int, int, int))((*(int *)((a4 + 0x28)))))((*(int *)((a4 + 0x2C))), 0xFFFFFFFD, a6, a7);
                    }
                }
            } else {
                *(unsigned int *)((a6 + 0x4)) = 0x0;
                *(unsigned int *)((a6 + 0x0)) = 0x0;
                if ((*(int *)((a4 + 0x28))) != 0) {
                    t1 = ((int (*)(int, int, int, int))((*(int *)((a4 + 0x28)))))((*(int *)((a4 + 0x2C))), 0xFFFFFFFD, a6, a7);
                }
            }
        }
        SJRBF_Unlock(a4, t0);
    return;
    }
}

void SJRBF_PutChunk(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    if (((int)(*(int *)((a6 + 0x4))) > 0) && (t0 = *(int *)((a6 + 0x0)), t0 != 0)) {
        t0 = SJRBF_Lock();
        if (a5 == 1) {
            *(unsigned int *)((a4 + 0xC)) = ((*(int *)((a4 + 0xC))) + (*(int *)((a6 + 0x4))));
            t1 = *(int *)((a6 + 0x0));
            t2 = *(int *)((a4 + 0x1C));
            if ((int)(t1 - t2) < (int)(*(int *)((a4 + 0x24)))) {
                t3 = *(int *)((a4 + 0x24));
                t4 = *(int *)((a6 + 0x4));
                t5 = (t3 - (t1 - t2));
                if ((int)t4 < (int)(t3 - (t1 - t2))) {
                    t5 = t4;
                }
                memcpy((((*(int *)((a4 + 0x20))) + (t1 - t2)) + (*(int *)((a4 + 0x1C)))), (*(int *)((a6 + 0x0))), t5);
            }
            t1 = *(int *)((a6 + 0x0));
            t2 = *(int *)((a4 + 0x1C));
            t3 = *(int *)((a6 + 0x4));
            if ((int)((t1 - t2) + t3) > (int)(*(int *)((a4 + 0x20)))) {
                t4 = *(int *)((a4 + 0x20));
                t5 = *(int *)((a6 + 0x4));
                t6 = (((t1 - t2) + t3) - t4);
                if ((int)t5 < (int)(((t1 - t2) + t3) - t4)) {
                    t6 = t5;
                }
                t4 = *(int *)((a4 + 0x1C));
                memcpy(t4, (t4 + (((t1 - t2) + t3) - t6)), t6);
            }
        } else {
            if (a5 == 0) {
                *(unsigned int *)((a4 + 0x10)) = ((*(int *)((a4 + 0x10))) + (*(int *)((a6 + 0x4))));
            } else {
                *(unsigned int *)((a6 + 0x4)) = 0x0;
                *(unsigned int *)((a6 + 0x0)) = 0x0;
                if ((*(int *)((a4 + 0x28))) != 0) {
                    t1 = ((int (*)(int, int, int, int))((*(int *)((a4 + 0x28)))))((*(int *)((a4 + 0x2C))), 0xFFFFFFFD, a6, a7);
                }
            }
        }
        SJRBF_Unlock(a4, t0);
    return;
    }
}

int FUN_0c03386a(int a4)
{
    register int t0;
    register int t1;

    if (a4 != 0) {
        if (a4 != 1) {
            if (a4 != 4) {
                if (a4 != 2) {
                    if (a4 != 5) {
                        if (a4 != 3) {
                            if (a4 != 6) {
                            } else {
                                (((struct o0_float *)0xC2A5870)->v) = 0.800000012f;
                            }
                            t0 = a4;
                        } else {
                            (((struct o2C_float *)0xC2A5768)->v) = 0.800000012f;
                            (((struct o0_float *)0xC2A5870)->v) = 0.800000012f;
                            t0 = 0x2C;
                        }
                        t1 = t0;
                    } else {
                        (((struct o0_float *)0xC2A5870)->v) = 1.0f;
                        t1 = a4;
                    }
                    t0 = t1;
                } else {
                    (((struct o2C_float *)0xC2A5768)->v) = 1.0f;
                    (((struct o0_float *)0xC2A5870)->v) = 1.0f;
                    t0 = 0x2C;
                }
                t1 = t0;
            } else {
                (((struct o0_float *)0xC2A5870)->v) = 0.0f;
                t1 = a4;
            }
            t0 = t1;
        } else {
            (((struct o2C_float *)0xC2A5768)->v) = 0.0f;
            (((struct o0_float *)0xC2A5870)->v) = 0.0f;
            t0 = 0x2C;
        }
        return t0;
    }
    (((struct o0_uint *)0xC2A5768)->v) = 0x5F;
    (((struct o4_float *)0xC2A5768)->v) = 0.0f;
    (((struct o8_float *)0xC2A5768)->v) = 0.0f;
    (((struct oC_float *)0xC2A5768)->v) = 1.0f;
    (((struct o10_float *)0xC2A5768)->v) = ((((struct o0_float *)0xC0339C8)->v));
    (((struct o14_float *)0xC2A5768)->v) = ((((struct o4_float *)0xC0339C8)->v));
    (((struct o18_float *)0xC2A5768)->v) = 0.0f;
    (((struct o1C_float *)0xC2A5768)->v) = 0.0f;
    (((struct o20_float *)0xC2A5768)->v) = 1.0f;
    (((struct o24_float *)0xC2A5768)->v) = 1.0f;
    (((struct o28_uint *)0xC2A5768)->v) = 0x0;
    (((struct o34_uint *)0xC2A5768)->v) = 0x3005;
    (((struct o30_uint *)0xC2A5768)->v) = 0x2;
    (((struct o2C_float *)0xC2A5768)->v) = 0.0f;
    (((struct o0_float *)0xC2A5870)->v) = 0.0f;
    (((struct o4_float *)0xC2A5870)->v) = ((((struct o8_float *)0xC0339C8)->v));
    return FUN_0c027fdc(a4, 0xC2A5768, 0xC2A5870, ((((struct o10_float *)0xC0339C8)->v)));
}

int FUN_0c035a5e(int a4, int a5, float f4, float f5)
{
    int stk[3];
    register float u0;
    register float u2;
    register float u3;
    register float u36;
    register float u37;
    register int t43;
    register int t33;

    u0 = (((struct o10_float *)0xC035B64)->v);
    *(unsigned int *)(((int)stk + 0)) = a5;
    *(float *)0xC2A5858 = ((*(float *)0xC2A5858) + u0);
    u2 = (((struct o18_float *)0xC035B64)->v);
    u3 = (((struct o1C_float *)0xC035B64)->v);
    if (a4 != 0) {
        if (a4 != 1) {
            if (a4 != 2) {
                if (a4 != 3) {
                    if (a4 != 4) {
                        t33 = 0x1;
                        if (a4 != 5) {
                        } else {
                            (((struct o4_float *)(((int)stk + 0)))->v) = u2;
                            (((struct o4_float *)((((int)stk + 0) + 0x4)))->v) = ((((struct o0_float *)0xC035B64)->v));
                            t33 = 0x0;
                        }
                    } else {
                        (((struct o4_float *)(((int)stk + 0)))->v) = u3;
                        (((struct o4_float *)((((int)stk + 0) + 0x4)))->v) = u2;
                        t33 = 0x1;
                    }
                } else {
                    (((struct o4_float *)(((int)stk + 0)))->v) = u3;
                    (((struct o4_float *)((((int)stk + 0) + 0x4)))->v) = ((((struct o30_float *)0xC035B64)->v));
                    t33 = 0x0;
                }
            } else {
                (((struct o4_float *)(((int)stk + 0)))->v) = ((((struct o28_float *)0xC035B64)->v));
                (((struct o4_float *)((((int)stk + 0) + 0x4)))->v) = ((((struct o2C_float *)0xC035B64)->v));
                t33 = 0x2;
            }
        } else {
            (((struct o4_float *)(((int)stk + 0)))->v) = ((((struct o24_float *)0xC035B64)->v));
            (((struct o4_float *)((((int)stk + 0) + 0x4)))->v) = ((((struct o2C_float *)0xC035B64)->v));
            t33 = 0x1;
        }
    } else {
        (((struct o4_float *)(((int)stk + 0)))->v) = ((((struct o20_float *)0xC035B64)->v));
        (((struct o4_float *)((((int)stk + 0) + 0x4)))->v) = ((((struct o2C_float *)0xC035B64)->v));
        t33 = 0x0;
    }
    u36 = (((struct o34_float *)0xC035B64)->v);
    u37 = (((struct o38_float *)0xC035B64)->v);
    t43 = FUN_0c03f4bc(0x4, 0x4, t33, (*(int *)(((int)stk + 0))), f4, f5, (*(float *)0xC2A5858), (((((((struct o4_float *)(((int)stk + 0)))->v)) / u37) + u36) / (1.0f + 1.0f)), (((((((struct o4_float *)((((int)stk + 0) + 0x4)))->v)) / u37) + u36) / (1.0f + 1.0f)), ((((struct o3C_float *)0xC035B64)->v)));
    *(float *)0xC2A5858 = ((*(float *)0xC2A5858) - u0);
    return t43;
}
