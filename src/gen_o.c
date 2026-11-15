/* Straight-line functions with calls and guards (batch gen_o): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o10C4_int { char p[0x10C4]; int v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o2_short { char p[0x2]; short v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_int { char p[0x28]; int v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_int { char p[0x30]; int v; };
struct o38_int { char p[0x38]; int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o3E_short { char p[0x3E]; short v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_int { char p[0x48]; int v; };
struct o48_ushort { char p[0x48]; unsigned short v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o50_int { char p[0x50]; int v; };
struct o50_ushort { char p[0x50]; unsigned short v; };
struct o52_short { char p[0x52]; short v; };
struct o5C_int { char p[0x5C]; int v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o64_float { char p[0x64]; float v; };
struct o68_float { char p[0x68]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_float { char p[0x78]; float v; };
struct o7C_float { char p[0x7C]; float v; };
struct o7C_int { char p[0x7C]; int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o80_float { char p[0x80]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_int { char p[0x94]; int v; };
struct o98_int { char p[0x98]; int v; };
struct o98_uchar { char p[0x98]; unsigned char v; };
struct o9C_int { char p[0x9C]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int ADXSJD_Start(int);
int ADXSTM_Close(int);
int ADXSTM_GetCurOfst(int, int);
int ADXSTM_SetReqRdSize(int, int);
int ADXT_Stop(int);
int ETD_EntryRecvFunc(int, int);
int FBfree(int, int);
int FUN_0c01ec7a(int);
int FUN_0c05f42e(void);
int FUN_0c0620ac(int);
int FUN_0c06e700(int, int, float);
int FUN_0c06f240(void);
int FUN_0c072230(int, int);
int FUN_0c072b60(int);
int FUN_0c074f20(float);
int FUN_0c07b6c0(int, int);
int FUN_0c07c8be(int);
int FUN_0c07d728(int, int, int, int);
int FUN_0c07e36e(int);
int FUN_0c07e42c(int);
extern int FUN_0c07e558();
int FUN_0c07e598(int);
int FUN_0c08f0c6(int, int);
int FUN_0c08f134(int, int);
int FUN_0c08f824(int, int, int);
int FUN_0c08f87c(int, int);
int FUN_0c14e8e4(int);
int FUN_0c14fd82(int, int);
int FUN_0c14fec0(int);
int FUN_0c14ff0c(int);
int FUN_0c1500d2(int, int, int);
int FUN_0c1503dc(int);
int FUN_0c150460(int);
int FUN_0c1505ac(int, int, int, int, int, int);
int FUN_0c1616ce(int);
int FUN_0c1616f4(int, int);
int FUN_0c1617e0(int, int, int, int);
int FUN_0c161ad4(int, int);
int FUN_0c162128(int, int, int, int, int);
int FUN_0c16226a(int, int, int, int, int);
int FUN_0c1622c6(int, int, int, int, int);
int FUN_0c1624b8(int);
int FUN_0c1624ec(int);
int FUN_0c16592e(int, int, int, int, int);
int FUN_0c165a34(int);
int FUN_0c165d48(int, int);
int FUN_0c165dc6(void);
int FUN_0c16ad54(int);
int FUN_0c16ad6c(int);
int FUN_0c16ada2(int, ...);
int FUN_0c16c5d8(int);
int FUN_0c16d160(int, int, int, int);
int FUN_0c16dacc(int, int);
int SearchUsed(int, int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int adxf_SetCmdHstry(int, int, int, int, int);
int adxt_start_stm(int);
int gdFsGetSearchID(int);
int gdFsGetStat(int);
int gdFsMemcpy(int, int, int);
int gdFsReopenHn(int, int, int, int);
int get_data(int, int);
int isPosInArea(int, int);
int kmFreeTexture(int);
int kmiCopyFromFrameBuffer(int, int, int);
int kmiCopyFromPVRMemory(int, int, int);
int kmiGetProfileInt(int, int, int);
int kmiInitializeDriver(void);
int kmiInitializeHardware(void);
int kmtex_CopyTextureFromMem(int, int, int);
int kmtex_GetTextureLevel(int, int);
int make_header(int, int);
extern int malloc();
int memcpy(int, int, int);
int memset(int, int, int);
int mpdrv_clear_deviceinfo(int);
int mpdrv_make_deviceinfo(int, int, int);
int mwRnaStop(int);
int nlCommonTextureClearTextureIndex(int);
int nlCopyMatrix(int, int, int, int, int);
int nlGetMatrix(int);
int nlLocate(int, int);
int nlObjPutTrnsl(int, float);
int nlOuterProduct(int, int, int);
int nlPopMatrix(int);
int nlPrintf(int, ...);
int nlPushMatrix(int);
int nlQuickInvertMatrix(void);
int nlScale(float, float, float);
int strlen(int);
int strncmp(int, int, int);
int syTmrDiffCount(int, int);
int syTmrGetCount(void);
int vmsfs_read_retry(int, int, int);
int vmsfs_write_retry(int, int, int);
int vmsio_bank_info(int, int, int, int);
int vmsio_bank_lock(int, int);
int FUN_0c069a62(int a4, int a5, int a6, int a7);
int mwRnaDestroy(int a4, int a5, int a6, int a7);
int gdc_FileLoad(int a4, int a5, int a6);
int ExecWindow(int a4, int a5, int a6, int a7);
int FUN_0c05fc5c(void);
int FUN_0c070890(float f4);
int FUN_0c08f204(int a4, int a5, int a6);
int vmsfs_bank_info_retry(int a4, int a5, int a6, int a7);
int gdFsDaGetInfoG(int a4, int a5, int a6, int a7);
int ADXF_Stop(int a4);
int gdFsGet1DirEnt(int a4, int a5);
int FUN_0c16bd14(int a4);
int FUN_0c16c85e(int a4, int a5, int a6);
int FUN_0c03332c(int a4, int a5, int a6, int a7);
int FUN_0c03e43c(int a4);
int FUN_0c0557f4(int a4, int a5, int a6, int a7);
int nlGetNormalCalcMatrix(int a4, int a5, int a6, int a7);
int FUN_0c07c688(int a4, int a5, int a6, int a7);
int nlDispStripFreeTexture(int a4);
int kmSetBackGroundRenderState(int a4);
int FUN_0c14e02a(int a4, int a5, int a6, int a7);
int FUN_0c150308(int a4, int a5, int a6);
int FUN_0c14ffa4(int a4, int a5, int a6);
int mpdrv_make_rootdevicedata(int a4, int a5, int a6, int a7);
int CheckAreaGrid(int a4, int a5);
int FUN_0c06017e(void);
int nlSysMetricsGetFrameBuffer(int a4);
int FUN_0c07bab0(int a4, int a5, int a6);
int FUN_0c08ec98(int a4);
int FUN_0c08f470(int a4);
int kmGetTexture(int a4, int a5);
int gdFsWaitCompleteReq(int a4, int a5, int a6, int a7);
int syMmuAddEntry(int a4, int a5, int a6);
int FUN_0c16d0bc(int a4, int a5, int a6, int a7);
int ChangeColliObj(int a4, int a5, int a6, int a7);
float FUN_0c059b62(int a4, int a5, float f4);
int FUN_0c069700(int a4);
int FUN_0c07e9ee(int a4, int a5, int a6);
int FUN_0c07e6ea(int a4, int a5, int a6);
int gdFsReqDrvStatG(int a4, int a5, int a6, int a7);
int FUN_0c14e15c(int a4, int a5, int a6);
int kmiFBfree(int a4);
int kmInitDevice(int a4);
int FUN_0c1621d2(int a4, int a5, int a6, int a7);
int nlMalloc(int a4);
int FUN_0c03f42e(int a4);
int FUN_0c055766(int a4);
int vmsfs_bank_lock_retry(int a4, int a5);
int kmtex_ConvertSmallVQFromMem(int a4, int a5, int a6, int a7);
int mwlRnaIsCopyEnd(int a4, int a5, int a6, int a7);
int mwlSbTrnsDat(int a4, int a5, int a6, int a7, int a8);
int FUN_0c057aec(int a4, int a5, int a6);

int FUN_0c069a62(int a4, int a5, int a6, int a7)
{
    register int t0;

    FUN_0c0620ac((a4 + 0x14));
    t0 = (((struct o7C_int *)(a4))->v);
    if (((int)t0 >= 0) && ((int)t0 < (int)0x6)) {
        t0 = *(int *)(((((((struct o7C_int *)(a4))->v)) << 2) + 0xC11032C));
        return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, a7);
    }
    nlLocate(0x5, 0x5);
    ETD_EntryRecvFunc(0x10, 0x10);
    nlPrintf(0xC110344);
    FUN_0c06f240();
    FUN_0c06f240();
    for (;;) {
    }
}

int mwRnaDestroy(int a4, int a5, int a6, int a7)
{
    int stk[5];
    register int t8;
    register int t10;
    register int t13;
    register int t6;
    register int t7;

    if (a4 == 0) {
        *(int *)((int)stk + 0) = 0xC171714;
        return (FUN_0c16ada2(0xC171714));
    }
    FUN_0c16ad54(((int)stk + 4));
    if ((*(signed char *)((a4 + 0x1))) != 0) {
        mwRnaStop(a4);
    }
    *(unsigned char *)((a4 + 0x0)) = 0x0;
    t8 = 0x0;
    for (;;) {
        if ((int)t8 >= (int)(unsigned char)(*(signed char *)((a4 + 0x2)))) {
            break;
        }
        t7 = a4;
        t6 = t8;
        t7 = (t7 + 0x10);
        t6 = (t6 << 2);
        t6 = (t6 + t7);
        t8 = (t8 + 0x1);
        *(unsigned int *)((t6 + 0x0)) = 0x0;
    }
    t10 = *(int *)((a4 + 0x38));
    *(unsigned int *)(((int)stk + 8)) = t10;
    t13 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t10 + 0x0))) + 0xC)))))(t10, 0x0, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
    memset(a4, 0x0, 0x90);
    return (FUN_0c16ad6c(((int)stk + 4)));
}

int gdc_FileLoad(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t11;
    register int t7;

    t0 = 0x0;
    t1 = 0x0;
    for (;;) {
        if ((int)t0 < (int)0xA) {
            for (;;) {
                t2 = FUN_0c14fd82(a5, 0x0);
                t1 = (t1 + 0x1);
                if ((int)t1 <= (int)0x78) {
                    if (t2 != 0) {
                        break;
                    }
                    continue;
                }
                t0 = (t0 + 0x1);
                if ((int)t0 < (int)0xA) continue;
                *(unsigned int *)0xC1EC718 = ((*(int *)0xC1EC718) + 0x1);
                return 0x0;
            }
            if (a6 == 0) {
                t7 = (FUN_0c1503dc(t2));
            } else {
                t7 = ((unsigned int)((unsigned int)((unsigned int)a6 >> 8) >> 2) >> 1);
            }
            FUN_0c1500d2(t2, t7, a4);
            for (;;) {
                t11 = FUN_0c150460(t2);
                if (t11 == 4) {
                    break;
                }
                if (t11 == 3) {
                    FUN_0c14ff0c(t2);
                    return t7;
                }
            }
            FUN_0c14ff0c(t2);
            t0 = (t0 + 0x1);
            continue;
        }
        *(unsigned int *)0xC1EC718 = ((*(int *)0xC1EC718) + 0x1);
        return 0x0;
    }
}

int ExecWindow(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register float u0;
    register float u1;

    if (((((struct o30_int *)0xC2A46AC)->v)) != 0) {
        u0 = *(float *)0xC033B60;
        *(float *)0xC2A5858 = u0;
        t0 = (((struct o30_int *)0xC2A46AC)->v);
        (((struct o24_uint *)0xC2A46AC)->v) = t0;
        t1 = t0;
        t0 = 0x0;
        for (;;) {
            if ((int)t0 >= (int)((((struct o0_int *)0xC2A46AC)->v))) {
                break;
            }
            t1 = 0xC2A46AC;
            t1 = (t1 + 0x4);
            t2 = (*(int *)((((t0 << 2) + t1) + 0x0)));
            t0 = (t0 + 0x1);
            t2 = (t2 << 2);
            t2 = (t2 << 1);
            t2 = (t2 + ((((struct o24_int *)0xC2A46AC)->v)));
            t1 = (*(int *)((t2 + 0x8)));
            (((struct o24_uint *)0xC2A46AC)->v) = t1;
        }
        t1 = 0xC033B60;
        t3 = t2;
        t2 = t0;
        t0 = 0x0;
        t4 = 0x0;
        u1 = u0;
        for (;;) {
            if ((int)t4 >= (int)(*(int *)((((((struct o24_int *)0xC2A46AC)->v)) + 0x4)))) {
                break;
            }
            t5 = t4;
            t5 = (t5 << 2);
            t5 = (t5 << 1);
            t5 = (t5 + ((((struct o24_int *)0xC2A46AC)->v)));
            t5 = (*(int *)((t5 + 0xC)));
            if (t5 != 0) {
                t3 = (*(int *)((((((((struct o0_int *)0xC2A46AC)->v)) << 2) + 0xC2A46B0) + 0x0)));
                if (t4 != t3) {
                    t0 = t4;
                    t2 = 0x0;
                } else {
                    t2 = 0x1;
                    t0 = t4;
                }
                t1 = (((int (*)(int, int, int, int))(t5))(t2, t0, a6, a7));
            } else {
                t5 = t3;
                t6 = t2;
                t7 = t0;
                u0 = u1;
            }
            u1 = u0;
            t3 = t5;
            t4 = (t4 + 0x1);
            t2 = t6;
            t0 = t7;
        }
        t3 = *(int *)((((((struct o24_int *)0xC2A46AC)->v)) + 0x0));
        t4 = t1;
        if (t3 != 0) {
            t4 = (((int (*)(int, int, int, int))(t3))(t2, t0, a6, a7));
        }
        t0 = t4;
    }
    return t0;
}

int FUN_0c05fc5c(void)
{
    int stk[3];
    register int t0;
    register float u6;
    register float u10;
    register float u14;
    register float u15;
    register float u19;
    register float u23;

    t0 = FUN_0c05f42e();
    nlPushMatrix(0x0);
    nlQuickInvertMatrix();
    FUN_0c072230(0xC2B9CC8, ((int)stk + 0));
    FUN_0c06e700(((int)stk + 0), 0xC10D9F8, (*(float *)0xC05FD78));
    u6 = (((struct o0_float *)0xC2B9CD4)->v);
    u10 = (((((struct o40_float *)(t0))->v)) * (1.0f - u6));
    u10 = u10 + ((((struct o0_float *)0xC2B9CD4)->v)) * (*(float *)(((int)stk + 4)));
    (((struct o40_float *)(t0))->v) = u10;
    u14 = (((((struct o44_float *)(t0))->v)) * (1.0f - u6));
    u14 = u14 + ((((struct o0_float *)0xC2B9CD4)->v)) * (*(float *)(((int)stk + 8)));
    (((struct o44_float *)(t0))->v) = u14;
    u15 = (((struct o4_float *)0xC2B9CD4)->v);
    u19 = (((((struct o64_float *)(t0))->v)) * (1.0f - u15));
    u19 = u19 + ((((struct o4_float *)0xC2B9CD4)->v)) * (*(float *)(((int)stk + 4)));
    (((struct o64_float *)(t0))->v) = u19;
    u23 = (((((struct o68_float *)(t0))->v)) * (1.0f - u15));
    u23 = u23 + ((((struct o4_float *)0xC2B9CD4)->v)) * (*(float *)(((int)stk + 8)));
    (((struct o68_float *)(t0))->v) = u23;
    return (nlPopMatrix(0x1));
}

int FUN_0c070890(float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    u0 = (1.0f / f4);
    if (!(_builtin_fabsf(f4) > 1.0f)) {
        u0 = f4;
    }
    t0 = 0xD;
    u1 = 0.0f;
    for (;;) {
        t1 = (t0 << 1);
        t2 = t0;
        t0 = (t0 - 1);
        u2 = ((float)t2 * (float)t2);
        u3 = (u2 * u0);
        u2 = (((float)t1 + u1) + 1.0f);
        u1 = (u3 * u0);
        u1 = (u1 / u2);
        if ((int)t0 < (int)0x1) {
            break;
        }
    }
    u2 = ((((u0 / (u1 + 1.0f)) + 6.28318548f) * 65536.0f) / 6.28318548f);
    if (f4 > 1.0f) {
        return (unsigned short)(0x4000 - ((int)(u2 + 0.5f) & 0xFFFF));
    }
    if (-1.0f > f4) {
        return (unsigned short)(0xC000 - ((int)(u2 + 0.5f) & 0xFFFF));
    }
    return ((int)(u2 + 0.5f) & 0xFFFF);
}

int FUN_0c08f204(int a4, int a5, int a6)
{
    int stk[7];
    register int t0;
    register int t8;
    register int t14;

    *(unsigned int *)(((int)stk + 24)) = a4;
    *(unsigned int *)(((int)stk + 20)) = a5;
    *(unsigned int *)(((int)stk + 16)) = a6;
    t0 = *(int *)(((int)stk + 24));
    *(unsigned int *)(((int)stk + 0)) = ((t0 * 0x154) + 0xC2C8D2C);
    *(unsigned int *)(((int)stk + 4)) = (*(int *)((((t0 * 0x154) + 0xC2C8D2C) + 0x28)));
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 12))) >= (int)(*(int *)(((*(int *)(((*(int *)(((int)stk + 0))) + 0x1C))) + 0x30)))) {
            return 0xFFFFFFFF;
        }
        *(unsigned char *)(((int)stk + 11)) = (*(signed char *)(((*(int *)(((int)stk + 4))) + 0x0)));
        t8 = *(signed char *)(((int)stk + 11));
        if (((unsigned char)t8 != 51) && ((unsigned char)t8 != 0xCC)) {
            
            *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x1);
            *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x20);
            continue;
        }
        t14 = FUN_0c08f0c6((*(int *)(((int)stk + 20))), ((*(int *)(((int)stk + 4))) + 0x4));
        if (t14 != 0) {
            break;
        }
        *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x1);
        *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x20);
    }
    FUN_0c08f134((*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 16))));
    return (*(int *)(((int)stk + 12)));
}

int vmsfs_bank_info_retry(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t5;
    register int t10;
    register int t12;
    register int t13;
    int t9;
    int t11;

    *(unsigned int *)(((int)stk + 20)) = a4;
    *(unsigned int *)(((int)stk + 16)) = a5;
    *(unsigned int *)(((int)stk + 12)) = a6;
    *(unsigned int *)(((int)stk + 8)) = a7;
    *(unsigned int *)(((int)stk + 0)) = (*(int *)0xC2C68F0);
    for (;;) {
        t5 = vmsio_bank_info((*(int *)(((int)stk + 20))), (*(int *)(((int)stk + 16))), (*(int *)(((int)stk + 12))), (*(int *)(((int)stk + 8))));
        *(unsigned int *)(((int)stk + 4)) = t5;
        if (t5 == 0) {
            break;
        }
        if (((*(int *)0xC1182A4) != 0) && (t9 = *(int *)(((int)stk + 4)), t9 == 0xFFFFFF30)) {
            return 0xFFFFFF01;
        }
        t10 = *(int *)(((int)stk + 0));
        *(unsigned int *)(((int)stk + 0)) = (t10 - 1);
        if ((((t10 - 1) + 0x1) == 0) && (t11 = *(int *)0xC2C68F0, t11 != -1)) {
            t12 = *(int *)(((int)stk + 4));
            if (t12 != 0) {
                if (t12 != 0xFFFFFF01) {
                    return 0xFFFF0000;
                }
                return 0xFFFFFF01;
            }
            return 0x0;
        }
    }
    t13 = *(int *)(((int)stk + 4));
    if (t13 != 0) {
        if (t13 != 0xFFFFFF01) {
            return 0xFFFF0000;
        }
        return 0xFFFFFF01;
    }
    return 0x0;
}

int gdFsDaGetInfoG(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = gdFsReopenHn((*(int *)(((*(int *)0xC1737EC) + 0x14))), 0x0, 0x0, 0x0);
    t1 = 0xFFFFFFF3;
    if (t0 != 0) {
        t2 = _builtin_get_imask();
        _builtin_set_imask(0xF);
        t3 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)(((*(int *)0xC1737EC) + 0xC))) + 0x3C)))))(0x0, 0x64, ((*(int *)0xC1737EC) + 0x40), a7);
        if (t3 != 0) {
            *(unsigned int *)((t0 + 0x3C)) = t3;
            (((struct o50_ushort *)(t0))->v) = 0x4;
            (((struct o48_ushort *)(t0))->v) = 0x7;
            *(unsigned int *)((t0 + 0x8)) = a4;
            *(unsigned int *)(((*(int *)((t0 + 0x0))) + 0x1C)) = t0;
            t0 = ((int (*)(void))(((((struct o40_int *)((*(int *)(((*(int *)0xC1737EC) + 0xC)))))->v))))();
        }
        _builtin_set_imask(((unsigned int)(((t2 & 0xF) << 2) << 2) >> 4));
        t0 = 0x0;
        if (t3 == 0) {
            t0 = 0xFFFFFFF3;
        }
        t1 = t0;
    }
    return t1;
}

int ADXF_Stop(int a4)
{
    int stk[2];

    *(int *)((int)stk + 0) = 0xFFFFFFFF;
    adxf_SetCmdHstry(0x5, 0x0, a4, 0xFFFFFFFF, 0xFFFFFFFF);
    if (a4 == 0) {
        FUN_0c1616ce(0xC170AB0);
        return 0xFFFFFFFD;
    }
    if ((*(signed char *)((a4 + 0x1))) != 1) {
        if ((*(signed char *)((a4 + 0x1))) == 3) {
            *(unsigned char *)((a4 + 0x1)) = 0x1;
            return (*(int *)((a4 + 0x14)));
        }
        if ((*(int *)((a4 + 0x4))) == 0) {
            FUN_0c1616ce(0xC170AD4);
            return 0xFFFFFFFF;
        }
        ADXCRS_Lock();
        FUN_0c1624ec((*(int *)((a4 + 0x4))));
        ADXSTM_GetCurOfst((*(int *)((a4 + 0x4))), ((int)stk + 4));
        *(unsigned int *)((a4 + 0x20)) = (*(int *)(((int)stk + 4)));
        FUN_0c14fec0(a4);
        *(unsigned char *)((a4 + 0x1)) = 0x1;
        ADXCRS_Unlock();
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        adxf_SetCmdHstry(0x5, 0x1, a4, 0xFFFFFFFF, 0xFFFFFFFF);
        return (*(int *)((a4 + 0x14)));
    }
    return (*(int *)((a4 + 0x14)));
}

int gdFsGet1DirEnt(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = 0x0;
    if ((int)(unsigned char)(*(signed char *)((a4 + 0x0))) < (int)0x22) {
    } else {
        gdFsMemcpy((a4 + 0x2), a5, 0x4);
        gdFsMemcpy((a4 + 0xA), (a5 + 0x4), 0x4);
        *(unsigned char *)((a5 + 0x8)) = (*(signed char *)((a4 + 0x19)));
        t1 = *(signed char *)((a4 + 0x20));
        t2 = (unsigned char)t1;
        if (((unsigned char)(*(signed char *)((a5 + 0x8))) & 2) == 0) {
            t2 = ((unsigned char)t1 - 2);
        }
        gdFsMemcpy((a4 + 0x21), (a5 + 0xA), t2);
        *(unsigned char *)(((t2 + (a5 + 0xA)) + 0x0)) = 0x0;
        if (((unsigned char)(*(signed char *)((a5 + 0x8))) & 2) != 0) {
            t1 = *(signed char *)((a5 + 0xA));
            if (t1 == 0) {
                *(unsigned char *)((a5 + 0xA)) = 0x2E;
            } else {
                if (t1 == 1) {
                    *(unsigned char *)((a5 + 0xA)) = 0x2E;
                    *(unsigned char *)((a5 + 0xB)) = 0x2E;
                    *(unsigned char *)((a5 + 0xC)) = 0x0;
                }
            }
        }
        *(unsigned char *)((a5 + 0x9)) = (gdFsGetSearchID((a5 + 0xA)));
        t0 = (unsigned char)(*(signed char *)((a4 + 0x0)));
    }
    return t0;
}

int FUN_0c16bd14(int a4)
{
    int stk[4];
    register int t4;
    register int t15;
    register int t16;
    register int t24;
    register int t26;
    register int t34;

    if ((*(int *)((a4 + 0x28))) != 0) {
        ADXSTM_Close((*(int *)((a4 + 0x28))));
        *(unsigned int *)((a4 + 0x28)) = 0x0;
        if ((*(signed char *)((a4 + 0x3))) == 1) {
            t4 = *(int *)((a4 + 0x20));
            memcpy(0xC30B648, (((((t4 << 2) << 2) << 2) + (a4 + 0x38)) + 0x4), 0x27);
            *(unsigned int *)(((int)stk + 4)) = (*(int *)((((((t4 << 2) << 2) << 2) + (a4 + 0x38)) + 0x2C)));
            *(unsigned int *)(((int)stk + 8)) = (*(int *)((((((t4 << 2) << 2) << 2) + (a4 + 0x38)) + 0x30)));
            *(unsigned int *)(((int)stk + 12)) = (*(int *)((((((t4 << 2) << 2) << 2) + (a4 + 0x38)) + 0x34)));
        }
        *(unsigned int *)((a4 + 0x24)) = ((*(int *)((a4 + 0x24))) - 1);
        t15 = *(int *)((a4 + 0x20));
        t16 = ((~(((~(t15 + 0x1)) + 0x1) & 0xF)) + 0x1);
        if ((int)(t15 + 0x1) >= 0) {
            t16 = ((t15 + 0x1) & 0xF);
        }
        *(unsigned int *)((a4 + 0x20)) = t16;
        if ((int)(*(int *)((a4 + 0x24))) <= 0) {
            FUN_0c165dc6();
            *(unsigned char *)((a4 + 0x1)) = 0x1;
        }
        t24 = *(signed char *)((a4 + 0x3));
        t34 = t24;
        if (t24 == 1) {
            t26 = (*(int *)(((int)stk + 12)));
            *(int *)((int)stk + 0) = t26;
            t34 = (FUN_0c16592e(a4, 0xC30B648, (*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 8))), t26));
        }
    }
    return t34;
}

int FUN_0c16c85e(int a4, int a5, int a6)
{
    register int t0;
    int t1;
    register int t2;
    register int t3;
    int t4;

    t0 = 0x0;
    for (;;) {
        t1 = *(signed char *)((a6 + t0));
        if ((t1 != 58) && (t1 != 0)) {
            t1 = t0;
            t0 = (t0 + 0x1);
            *(unsigned char *)((a4 + t1)) = ((*(signed char *)((a6 + t1))));
            if ((int)t0 >= (int)0x129) {
                break;
            }
            continue;
        }
        break;
    }
    t1 = *(signed char *)((a6 + t0));
    if (t1 == 0) {
        *(unsigned char *)(((t0 + a4) + 0x0)) = 0x0;
        t2 = strlen(a4);
        t3 = memcpy(a5, a4, (t2 + 0x1));
        *(unsigned char *)((a4 + 0x0)) = 0x0;
        return t3;
    }
    *(unsigned char *)(((t0 + a4) + 0x0)) = 0x0;
    t2 = (t0 + 0x1);
    if ((int)(t0 + 0x1) < (int)0x129) {
        t3 = t1;
        t1 = (t0 + 0x1);
        for (;;) {
            t4 = *(signed char *)((a6 + t1));
            if ((t4 != 58) && (t4 != 0)) {
                t3 = t1;
                t4 = (*(signed char *)((a6 + t1)));
                t3 = (t3 - (t0 + 0x1));
                t1 = (t1 + 0x1);
                t3 = (t3 + a5);
                *(unsigned char *)((t3 + 0x0)) = t4;
                if ((int)t1 >= (int)0x129) {
                    break;
                }
                continue;
            }
            break;
        }
        t2 = t1;
    }
    *(unsigned char *)((((t2 - (t0 + 0x1)) + a5) + 0x0)) = 0x0;
    return FUN_0c16c5d8(a4);
}

int FUN_0c03332c(int a4, int a5, int a6, int a7)
{
    int stk[1];

    register int R1;
    register int R3;
    int R6;
    int R8;
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
    v0_0 = a4;
    v0_1 = a5;
    R6 = a6;
    v0_8 = a7;
    v0_2 = (0x1);
    v0_3 = (0x0);
    v0_0 = ((v0_0 + v0_1));
    if (((0x1 & R6) != 0)) goto L_C03334C;
    *(unsigned char *)((v0_0 + 0x0)) = v0_3;
    L_C03334C:;
    *(unsigned int *)(((int)stk + 0)) = (0x4 & R6);
    v0_4 = (0x2D);
    v0_5 = (v0_3);
    v0_6 = (0xA);
    R8 = (0x2);
    v0_7 = (0x30);
    if (((int)v0_1 <= 0)) goto L_C0333AA;
    L_C033360:;
    if (((*(int *)(((int)stk + 0))) == 0)) goto L_C033370;
    v0_9 = (v0_8);
    if ((v0_8 != -1)) goto L_C033370;
    *(unsigned char *)(((v0_0 - 0x1) + 0x0)) = v0_4;
    v0_0 = ((v0_0 - 0x1));
    L_C0333A4:;
    v0_9 = (int)(v0_5 + 0x1) < (int)v0_1;
    v0_5 = ((v0_5 + 0x1));
    if (v0_9) goto L_C033360;
    L_C0333AA:;
    return v0_0;
    L_C033370:;
    if ((v0_2 == 0)) goto L_C033382;
    v0_9 = (int)((int)v0_8 % (int)v0_6);
    *(unsigned char *)(((v0_0 - 0x1) + 0x0)) = (v0_9 + 0x30);
    v0_9 = ((v0_9 + 0x30));
    v0_0 = ((v0_0 - 0x1));
    L_C033390:;
    if ((v0_8 == 0)) goto L_C03339E;
    v0_8 = (int)((int)v0_8 / (int)v0_6);
    v0_9 = (v0_8);
    v0_8 = (v0_8);
    L_C03339E:;
    if ((v0_8 != 0)) goto L_C0333A4;
    v0_2 = (v0_3);
    goto L_C0333A4;
    L_C033382:;
    if (((R6 & R8) == 0)) goto L_C03338C;
    *(unsigned char *)(((v0_0 - 0x1) + 0x0)) = v0_7;
    v0_0 = ((v0_0 - 0x1));
    goto L_C033390;
    L_C03338C:;
    *(unsigned char *)(((v0_0 - 0x1) + 0x0)) = 0x20;
    v0_0 = ((v0_0 - 0x1));
    goto L_C033390;
}

int FUN_0c03e43c(int a4)
{
    int stk[3];
    register int t0;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    int t9;
    register int t10;
    register int t14;
    register int t17;

    t0 = *(short *)(((a4 * 0x788) + 0xC28EDAC));
    *(unsigned int *)(((int)stk + 8)) = 0xC0B36E4;
    *(unsigned int *)(((int)stk + 0)) = 0xC0B36E4;
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 8))) + 0x10);
    t2 = 0xC28EDAC;
    t3 = 0xC0B36E4;
    t4 = 0x0;
    t5 = 0xC0B36E4;
    t6 = 0x0;
    t7 = 0xFFE0;
    for (;;) {
        t9 = *(int *)((t5 + 0x0));
        t5 = (t5 + 0x4);
        t6 = (t6 + t9);
        t10 = 0x0;
        for (;;) {
            if ((int)t10 >= (int)((*(int *)((t3 + 0x0))) - 1)) {
                break;
            }
            t9 = t10;
            t2 = 0x3;
            t9 = (t9 + t4);
            t2 = ((int)t2 << (int)t9);
            if ((t2 & (unsigned short)t0) == t2) {
                t9 = 0x1;
                t9 = ((int)t9 << (int)(t10 + t6));
                t9 = (~t9);
                t7 = (t7 & t9);
            }
            t10 = (t10 + 0x1);
        }
        t14 = *(int *)(((int)stk + 0));
        *(unsigned int *)(((int)stk + 0)) = (t14 + 0x4);
        t4 = (t4 + (*(int *)((((t14 + 0x4) - 4) + 0x0))));
        t3 = (t3 + 0x4);
        if ((unsigned int)t5 >= (unsigned int)(*(int *)(((int)stk + 4)))) {
            break;
        }
    }
    t17 = t7;
    if (((unsigned short)t0 & 0x4000) != 0) {
        t17 = (t7 & 0xFFFF7FFF);
    }
    return t17;
}


int nlGetNormalCalcMatrix(int a4, int a5, int a6, int a7)
{
    int stk[18];
    register int t4;
    register int t14;

    *(unsigned int *)(((int)stk + 4)) = a4;
    if (a4 == 0) {
        t4 = nlGetMatrix(0x0);
        nlGetMatrix((((int)stk + 0) + 0x8));
    } else {
        nlCopyMatrix((((int)stk + 0) + 0x8), a4, a6, a7, *(int *)((int)stk + 0));
        t4 = a4;
    }
    *(unsigned int *)(((int)stk + 0)) = t4;
    nlOuterProduct(((*(int *)(((int)stk + 0))) + 0x10), (t4 + 0x20), (((int)stk + 0) + 0x8));
    *(unsigned int *)(((int)stk + 0)) = t4;
    nlOuterProduct((t4 + 0x20), t4, (((int)stk + 0) + 0x18));
    *(unsigned int *)(((int)stk + 0)) = t4;
    nlOuterProduct((*(int *)(((int)stk + 0))), (t4 + 0x10), (((int)stk + 0) + 0x28));
    if ((*(int *)(((int)stk + 4))) == 0) {
        t14 = (FUN_0c072b60((((int)stk + 0) + 0x8)));
    } else {
        t14 = (nlCopyMatrix(t4, (((int)stk + 0) + 0x8), 0x0, 0x0, *(int *)((int)stk + 0)));
    }
    return t14;
}

int FUN_0c07c688(int a4, int a5, int a6, int a7)
{
    if ((a6 != 0x1B0) && ((a6 != 0x2B0) && (a6 != 0x7B0))) {
        if (a6 != 0xAB0) {
            if ((a6 != 0xCB0) && (a6 != 0xDB0)) {
                if (a6 != 0x27B0) {
                    if (a6 != 0x2AB0) {
                        if ((a6 != 0x2CB0) && (a6 != 0x2DB0)) {
                            if ((a6 != 0x40B0) && (a6 != 0x41B0)) {
                                if ((a6 != 0x78B0) && (a6 != 0x7BB0)) {
                                    return 0xFFFFFFFE;
                                }
                                return FUN_0c07c8be((((((a4 & 0xF) << 16) << 8) + ((a5 - 1) & 0xF)) + a6));
                            }
                            return FUN_0c07c8be(((((((a4 & 0xF) << 16) << 8) + ((a5 - 1) & 0xF)) + a6) + ((a7 & 0x7F) << 16)));
                        }
                        return FUN_0c07c8be(((((((a4 & 0xF) << 16) << 8) + ((a5 - 1) & 0xF)) + a6) + ((a7 & 0xF) << 16)));
                    }
                    return FUN_0c07c8be(((((((a4 & 0xF) << 16) << 8) + ((a5 - 1) & 0xF)) + a6) + (((a7 + 0x40) & 0x7F) << 16)));
                }
                return FUN_0c07c8be(((((((a4 & 0xF) << 16) << 8) + ((a5 - 1) & 0xF)) + a6) + ((a7 & 0x7F) << 16)));
            }
            return FUN_0c07c8be(((((((a4 & 0xF) << 16) << 8) + ((a5 - 1) & 0xF)) + a6) + ((a7 & 0xF) << 16)));
        }
        return FUN_0c07c8be(((((((a4 & 0xF) << 16) << 8) + ((a5 - 1) & 0xF)) + a6) + (((a7 + 0x40) & 0x7F) << 16)));
    }
    return FUN_0c07c8be(((((((a4 & 0xF) << 16) << 8) + ((a5 - 1) & 0xF)) + a6) + ((a7 & 0x7F) << 16)));
}

int nlDispStripFreeTexture(int a4)
{
    register int t0;
    register int t1;
    register int t3;

    if ((unsigned int)(*(int *)((((*(int *)0xC2BB3E8) + ((a4 << 2) << 1)) + 0x0))) > (unsigned int)0x0) {
        t0 = *(int *)0xC2BB3E8;
        *(unsigned int *)(((t0 + ((a4 << 2) << 1)) + 0x0)) = ((*(int *)(((t0 + ((a4 << 2) << 1)) + 0x0))) - 1);
        t1 = (t0 + ((a4 << 2) << 1));
        if ((*(int *)((((*(int *)0xC2BB3E8) + ((a4 << 2) << 1)) + 0x0))) == 0) {
            t0 = *(int *)((((*(int *)0xC2BB3E8) + ((a4 << 2) << 1)) + 0x4));
            t1 = *(int *)0xC2BF120;
            if ((*(int *)((((t0 * 0x3C) + t1) + 0x28))) == 0) {
                t3 = kmFreeTexture(((t0 * 0x3C) + t1));
                if (t3 != 0) {
                    *(unsigned int *)0xC2C4134 = 0x2;
                    for (;;) {
                    }
                }
            }
            *(unsigned int *)((((t0 * 0x3C) + t1) + 0x2C)) = 0x0;
            *(unsigned int *)((((t0 * 0x3C) + t1) + 0x38)) = 0xFFFFFFFF;
            t1 = nlCommonTextureClearTextureIndex(t0);
            *(unsigned int *)((((*(int *)0xC2BB3E8) + ((a4 << 2) << 1)) + 0x4)) = 0xFFFFFFFF;
        }
        t0 = t1;
    }
    return t0;
}

int kmSetBackGroundRenderState(int a4)
{
    (((struct o18_uint *)0xC300A70)->v) = ((((((int)(((((struct o70_float *)(a4))->v)) * 255.0f) << 16) << 8) | ((int)(((((struct o74_float *)(a4))->v)) * 255.0f) << 16)) | ((int)(((((struct o78_float *)(a4))->v)) * 255.0f) << 8)) | (int)(((((struct o7C_float *)(a4))->v)) * 255.0f));
    (((struct o1C_uint *)0xC300A70)->v) = ((((((int)(((((struct o80_float *)(a4))->v)) * 255.0f) << 16) << 8) | ((int)(((((struct o84_float *)(a4))->v)) * 255.0f) << 16)) | ((int)(((((struct o88_float *)(a4))->v)) * 255.0f) << 8)) | (int)(((((struct o8C_float *)(a4))->v)) * 255.0f));
    (((struct o0_uint *)0xC300A70)->v) = ((((struct o94_int *)(a4))->v));
    (((struct o4_uint *)0xC300A70)->v) = ((((struct o98_int *)(a4))->v));
    (((struct o8_uint *)0xC300A70)->v) = ((((struct o9C_int *)(a4))->v));
    return 0x0;
}

int FUN_0c14e02a(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = (((struct o94_int *)(a4))->v);
    ADXT_Stop(a4);
    ADXCRS_Lock();
    t1 = 0x0;
    for (;;) {
        if ((int)t1 >= (int)(*(signed char *)((a4 + 0x3)))) {
            break;
        }
        t2 = t1;
        t2 = (t2 << 2);
        t2 = (t2 + (a4 + 0x18));
        t2 = (*(int *)((t2 + 0x0)));
        t3 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t2 + 0x0))) + 0x14)))))(t2, a5, a6, a7);
        t1 = (t1 + 0x1);
    }
    t1 = *(int *)((a4 + 0x10));
    *(unsigned int *)((a4 + 0x14)) = t1;
    t2 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x14)))))(t1, a5, a6, a7);
    FUN_0c161ad4((*(int *)((a4 + 0x4))), (*(int *)((a4 + 0x14))));
    ADXSJD_Start((*(int *)((a4 + 0x4))));
    *(unsigned char *)((a4 + 0x1)) = 0x1;
    *(unsigned char *)((a4 + 0x2)) = 0x4;
    FUN_0c165d48(t0, (((((((struct o3E_short *)(a4))->v)) << 8) << 2) << 1));
    FUN_0c165a34(t0);
    (((struct o4C_uint *)(a4))->v) = 0x0;
    (((struct o98_uchar *)(a4))->v) = 0x1;
    return ADXCRS_Unlock();
}

int FUN_0c150308(int a4, int a5, int a6)
{

    register int R1;
    register int R2;
    register int R3;
    register int R7;
    register int R12;
    register int R13;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    v0_0 = a4;
    v0_1 = a5;
    v0_2 = a6;
    v0_3 = v0_2;
    adxf_SetCmdHstry(0x6, 0x0, v0_0, v0_1, v0_3);
    R12 = (v0_1);
    R13 = (v0_2);
    v0_1 = (v0_0);
    if ((v0_0 != 0)) goto L_C150330;
    v0_0 = (0xC170B00);
    L_C15035E:;
    FUN_0c1616ce(v0_0);
    v0_0 = (0xFFFFFFFD);
    L_C150392:;
    return v0_0;
    L_C150330:;
    if (((*(signed char *)((v0_1 + 0x1))) != 2)) goto L_C15033A;
    ADXF_Stop(v0_1);
    L_C15033A:;
    if ((R13 != 0)) goto L_C150342;
    *(unsigned int *)((v0_1 + 0x14)) = R12;
    L_C150368:;
    if (((int)(*(int *)((v0_1 + 0x14))) >= 0)) goto L_C150374;
    *(unsigned int *)((v0_1 + 0x14)) = 0x0;
    L_C150380:;
    v0_0 = R13;
    adxf_SetCmdHstry(0x6, 0x1, v0_1, R12, v0_0);
    v0_0 = ((*(int *)((v0_1 + 0x14))));
    goto L_C150392;
    L_C150374:;
    if (((int)(*(int *)((v0_1 + 0x14))) <= (int)(*(int *)((v0_1 + 0xC))))) goto L_C150380;
    *(unsigned int *)((v0_1 + 0x14)) = (*(int *)((v0_1 + 0xC)));
    goto L_C150380;
    L_C150342:;
    v0_0 = (R13);
    if ((R13 != 1)) goto L_C150350;
    *(unsigned int *)((v0_1 + 0x14)) = ((*(int *)((v0_1 + 0x14))) + R12);
    goto L_C150368;
    L_C150350:;
    if ((v0_0 != 2)) goto L_C15035C;
    *(unsigned int *)((v0_1 + 0x14)) = ((*(int *)((v0_1 + 0xC))) + R12);
    goto L_C150368;
    L_C15035C:;
    v0_0 = (0xC170B24);
    goto L_C15035E;
}

int FUN_0c14ffa4(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t3;

    if ((*(int *)((a4 + 0x4))) != 0) {
        FUN_0c1616ce(0xC1708F8);
        t0 = 0xFFFFFFFF;
    } else {
        ADXCRS_Lock();
        *(unsigned int *)((a4 + 0x18)) = ((*(int *)((a4 + 0x30))) + (*(int *)((a4 + 0x14))));
        t1 = *(int *)((a4 + 0xC));
        t0 = *(int *)((a4 + 0x14));
        t3 = (t1 - t0);
        if ((int)a5 < (int)(t1 - t0)) {
            t3 = a5;
        }
        *(unsigned int *)((a4 + 0x1C)) = t3;
        *(unsigned int *)((a4 + 0x20)) = 0x0;
        t1 = FUN_0c16226a((a4 + 0x34), ((((struct o5C_int *)(a4))->v)), (*(int *)((a4 + 0x18))), (*(int *)((a4 + 0x1C))), a6);
        if (t1 == 0) {
            FUN_0c1616ce(0xC17092C);
            t0 = 0xFFFFFFFF;
        } else {
            *(unsigned int *)((a4 + 0x4)) = t1;
            ADXSTM_SetReqRdSize(t1, (*(int *)((a4 + 0x2C))));
            *(unsigned char *)((a4 + 0x1)) = 0x2;
            FUN_0c1624b8((*(int *)((a4 + 0x4))));
            t0 = (*(int *)((a4 + 0x1C)));
        }
        ADXCRS_Unlock();
    }
    return t0;
}

int mpdrv_make_rootdevicedata(int a4, int a5, int a6, int a7)
{
    int t3;
    register int t4;
    register int t16;
    register int t8;

    make_header(a6, a7);
    get_data(a6, a7);
    t3 = *(signed char *)((a6 + 0x0));
    *(unsigned char *)((a6 + 0x2)) = (((*(signed char *)((a6 + 0x1))) ^ t3) & t3);
    t4 = *(signed char *)((a6 + 0x0));
    *(unsigned char *)((a6 + 0x3)) = (((*(signed char *)((a6 + 0x1))) ^ t4) & (~t4));
    if ((((((struct o10C4_int *)((*(int *)0xC30817C)))->v)) == 1) && ((t8 = *(signed char *)((a6 + 0x8)), (unsigned char)t8 != 0xFF) && ((unsigned char)t8 != 0))) {
        FUN_0c16dacc(a7, ((unsigned char)(*(int *)((a7 + 0x0))) + 0x1));
    }
    t16 = 0x1;
    if ((*(signed char *)((a6 + 0x0))) != 0) {
        t16 = 0x9;
    }
    *(unsigned char *)((a6 + 0x4)) = t16;
    *(volatile signed char *)((a6 + 0x3));
    if ((*(signed char *)((a6 + 0x2))) != 0) {
        (((struct o10_uchar *)(a5))->v) = 0x1;
        mpdrv_make_deviceinfo(a5, a6, a7);
    }
    if ((*(signed char *)((a6 + 0x3))) != 0) {
        mpdrv_clear_deviceinfo(a5);
    }
    return 0x0;
}

int CheckAreaGrid(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = 0x0;
    if (((int)a5 >= 0) && ((int)a5 < (int)0x19)) {
        t0 = a5;
    }
    t1 = (t0 + 0x1);
    if ((int)(t0 + 0x1) >= (int)0x19) {
        t1 = 0x0;
    }
    t2 = 0xD;
    t3 = t1;
    t1 = t0;
    for (;;) {
        if (t2 == 0) {
            return 0xFFFFFFFF;
        }
        t0 = isPosInArea(a4, ((((t1 << 2) << 2) << 1) + 0xC09E0F4));
        if (t0 != 0) {
            break;
        }
        t0 = isPosInArea(a4, ((((t3 << 2) << 2) << 1) + 0xC09E0F4));
        if (t0 != 0) {
            return t3;
        }
        t1 = (t1 - 1);
        t3 = (t3 + 0x1);
        if ((int)t1 < 0) {
            t1 = 0x18;
        }
        t2 = (t2 - 1);
        if ((int)t3 >= (int)0x19) {
            t3 = 0x0;
        }
    }
    return t1;
}

int FUN_0c06017e(void)
{
    register int t0;

    t0 = *(int *)0xC175C80;
    if ((int)t0 < (int)0x8) {
        (((struct o0_uint *)0xC2B9C9C)->v) = 0x1;
        (((struct o4_uint *)0xC2B9C9C)->v) = 0x0;
    } else {
        if ((int)t0 < (int)0x10) {
            (((struct o0_uint *)0xC2B9C9C)->v) = 0x9;
            (((struct o4_uint *)0xC2B9C9C)->v) = 0x0;
        } else {
            (((struct o0_uint *)0xC2B9C9C)->v) = 0xC;
            (((struct o4_uint *)0xC2B9C9C)->v) = 0x0;
        }
    }
    return 0x84;
}

int nlSysMetricsGetFrameBuffer(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t0 = *(int *)0xC2BB570;
    t1 = *(int *)0xC2BB520;
    t2 = (((struct o0_short *)0xC2BF8F0)->v);
    t3 = (t2 + t2);
    if ((int)t1 <= (int)0x3) {
    } else {
        if ((int)t1 <= (int)0x4) {
            t4 = ((t2 << 1) + t2);
        } else {
            if ((int)t1 > (int)0x5) {
                for (;;) {
                }
            }
            t4 = (t2 << 2);
        }
        t3 = t4;
    }
    t2 = (int)((int)t3 / (int)0x4);
    t3 = 0xC07FAEC;
    t4 = t1;
    t1 = 0x0;
    t5 = a4;
    t6 = (t0 + 0xA5000000);
    for (;;) {
        t0 = (((struct o2_short *)0xC2BF8F0)->v);
        if ((int)t1 >= (int)t0) {
            break;
        }
        t4 = 0x0;
        if ((int)t2 > 0) {
            for (;;) {
                t3 = *(int *)((t6 + 0x0));
                t6 = (t6 + 0x4);
                t4 = (t4 + 0x1);
                *(unsigned int *)((t5 + 0x0)) = t3;
                t5 = (t5 + 0x4);
                if ((int)t4 >= (int)t2) {
                    break;
                }
            }
        }
        t1 = (t1 + 0x1);
    }
    return t0;
}

int FUN_0c07bab0(int a4, int a5, int a6)
{
    register int t23;
    register int t24;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t15;
    register int t3;

    *(unsigned int *)0xC2C3E70 = ((*(int *)0xC2C3E70) - a5);
    *(unsigned int *)((((signed char)(((a4 << 1) + a4) << 2) + 0xC2C3F88) + 0x0)) = 0xFFFFFFFF;
    FUN_0c07b6c0(0xFFFFFFFF, ((a4 << 2) + 0xA0800060));
    t23 = 0x0;
    t24 = 0x0;
    if ((int)(a4 + 0x1) < (int)0x8) {
        t4 = (a4 + 0x1);
        t5 = 0x0;
        t6 = 0x0;
        t7 = a4;
        for (;;) {
            if ((*(int *)((0xC2C3F88 + (signed char)(((t4 << 1) + t4) << 2)))) != -1) {
                t7 = t4;
                t7 = (t7 << 1);
                t7 = (t7 + t4);
                t7 = (t7 << 2);
                t7 = (signed char)t7;
                t7 = (t7 + 0xC2C3F88);
                if (t5 == 0) {
                    t5 = (*(int *)((t7 + 0x4)));
                }
                t3 = (*(int *)((t7 + 0x4)));
                t15 = *(int *)((t7 + 0x8));
                t3 = (t3 - a5);
                *(unsigned int *)((t7 + 0x4)) = t3;
                t6 = (t6 + t15);
            }
            t4 = (t4 + 0x1);
            if ((int)t4 >= (int)0x8) {
                break;
            }
        }
        t23 = t5;
        t24 = t6;
    }
    *(unsigned int *)((a6 + 0x0)) = t24;
    return t23;
}

int FUN_0c08ec98(int a4)
{
    int stk[6];
    register int t0;
    register int t14;
    register int t17;

    *(unsigned int *)(((int)stk + 20)) = a4;
    t0 = *(int *)(((int)stk + 20));
    *(unsigned int *)(((int)stk + 0)) = ((t0 * 0x154) + 0xC2C8D2C);
    *(unsigned int *)(((int)stk + 8)) = (*(int *)(((*(int *)((((t0 * 0x154) + 0xC2C8D2C) + 0x1C))) + 0x18)));
    *(unsigned short *)(((int)stk + 6)) = (*(short *)(((*(int *)(((*(int *)(((int)stk + 0))) + 0x1C))) + 0x14)));
    *(unsigned int *)(((int)stk + 16)) = 0x0;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 16))) >= (int)(*(int *)(((int)stk + 8)))) {
            return 0x0;
        }
        t14 = vmsfs_read_retry((*(int *)(((int)stk + 20))), (unsigned short)(*(short *)(((int)stk + 6))), ((*(int *)(((*(int *)(((int)stk + 0))) + 0x28))) + (((*(int *)(((int)stk + 16))) << 8) << 1)));
        *(unsigned int *)(((int)stk + 12)) = t14;
        if ((int)t14 < 0) {
            break;
        }
        t17 = FUN_0c08f87c((*(int *)(((int)stk + 20))), (unsigned short)(*(short *)(((int)stk + 6))));
        *(unsigned short *)(((int)stk + 4)) = t17;
        if ((unsigned short)t17 == 0xFFFA) {
            return 0x0;
        }
        *(unsigned short *)(((int)stk + 6)) = (*(short *)(((int)stk + 4)));
        *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + 0x1);
    }
    return t14;
}

int FUN_0c08f470(int a4)
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
        t14 = vmsfs_write_retry((*(int *)(((int)stk + 16))), ((*(int *)(((*(int *)(((*(int *)(((int)stk + 0))) + 0x1C))) + 0xC))) + (*(int *)(((int)stk + 12)))), ((*(int *)(((*(int *)(((int)stk + 0))) + 0x24))) + (((*(int *)(((int)stk + 12))) << 8) << 1)));
        *(unsigned int *)(((int)stk + 8)) = t14;
        if ((int)t14 < 0) {
            break;
        }
        FUN_0c08f824((*(int *)(((int)stk + 16))), ((*(int *)(((*(int *)(((*(int *)(((int)stk + 0))) + 0x1C))) + 0xC))) + (*(int *)(((int)stk + 12)))), 0xFFFA);
        *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x1);
    }
    FUN_0c08f824((*(int *)(((int)stk + 16))), ((*(int *)(((*(int *)(((*(int *)(((int)stk + 0))) + 0x1C))) + 0xC))) + (*(int *)(((int)stk + 12)))), 0xFFFF);
    return (*(int *)(((int)stk + 8)));
}

int kmGetTexture(int a4, int a5)
{
    int t12;

    if (((*(int *)((a5 + 0x0))) & 0x3) == 1) {
        kmiCopyFromPVRMemory(a4, (*(int *)((a5 + 0x1C))), (*(int *)((a5 + 0x14))));
    } else {
        if ((unsigned short)(*(int *)((a5 + 0x0))) == 3) {
            kmtex_ConvertSmallVQFromMem(a4, (*(int *)((a5 + 0x1C))), (*(int *)((a5 + 0xC))), (*(int *)((a5 + 0x18))));
        } else {
            t12 = *(int *)((a5 + 0x18));
            if (((0x4 & t12) != 0) && (((0x1 & t12) != 0) && (((0x8 & t12) == 0) && ((0x20 & t12) == 0)))) {
                kmtex_CopyTextureFromMem(a4, (*(int *)((a5 + 0x1C))), (*(int *)((a5 + 0xC))));
            } else {
                kmiCopyFromFrameBuffer(a4, (*(int *)((a5 + 0x1C))), (*(int *)((a5 + 0x14))));
            }
        }
    }
    return 0x0;
}

int gdFsWaitCompleteReq(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    int t3;
    register int t4;

    t1 = t0;
    t0 = (*(int *)((a4 + 0x18)));
    t2 = (syTmrGetCount());
    for (;;) {
        t4 = ((int (*)(int, int, int, int))(((((struct o48_int *)((*(int *)(((*(int *)((a4 + 0x0))) + 0x3C)))))->v))))(t1, a5, a6, a7);
        t1 = a4;
        t3 = gdFsGetStat(t1);
        t1 = t3;
        if (t3 != 0) {
            if (t3 != 1) {
                if ((t3 != 2) && ((t3 != 3) && (t3 != 4))) {
                    break;
                }
                if (t0 != (*(int *)((a4 + 0x18)))) {
                    t2 = (syTmrGetCount());
                    t0 = (*(int *)((a4 + 0x18)));
                } else {
                    t4 = t1;
                }
                t1 = t4;
                t4 = syTmrGetCount();
                t1 = t2;
                t1 = (syTmrDiffCount(t1, t4));
                if ((unsigned int)t1 > (unsigned int)0xEE6B28) {
                    return 0xFFFFFFEB;
                }
                continue;
            }
            return 0x0;
        }
        return 0xFFFFFFE0;
    }
    t0 = 0xFFFFFFE7;
    if ((t3 == 5) || (t3 == 64)) {
        t0 = ((((struct o52_short *)(a4))->v));
    }
    return t0;
}

int syMmuAddEntry(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t26;
    int t18;
    register int t19;
    register int t8;

    t0 = *(int *)0xFF000010;
    if ((unsigned int)(0x3F & ((unsigned int)((unsigned int)t0 >> 16) >> 2)) < (unsigned int)0x40) {
        t1 = (0x3F & ((unsigned int)((unsigned int)t0 >> 16) >> 2));
        for (;;) {
            if (((*(int *)((((t1 << 8) + 0xF6000000) + 0x0))) & 0x100) == 0x100) {
                t1 = (t1 + 0x1);
                if ((unsigned int)t1 >= (unsigned int)0x40) {
                    break;
                }
                continue;
            }
            break;
        }
        t8 = t1;
    } else {
        t8 = (0x3F & ((unsigned int)((unsigned int)t0 >> 16) >> 2));
    }
    t26 = 0xFF;
    if (t8 == 64) {
    } else {
        t18 = 0x1FFFFC00;
        t19 = 0x0;
        if ((signed char)a6 != 1) {
            t18 = 0x1FFFF000;
            t19 = 0x10;
            if ((signed char)a6 != 2) {
                t18 = 0x1FFF0000;
                t19 = 0x80;
                if ((signed char)a6 != 3) {
                    t18 = 0x1FF00000;
                    t19 = 0x90;
                    if ((signed char)a6 != 4) {
                        t18 = ((a5 & 0xFFFFFC00) | 0x100);
                        t19 = a6;
                    }
                }
            }
        }
        *(unsigned int *)(((0xF6000000 + (t8 << 8)) + 0x0)) = ((a5 & 0xFFFFFC00) | 0x100);
        *(unsigned int *)((((t8 << 8) + 0xF7000000) + 0x0)) = (((a4 & t18) | t19) | 0x13E);
        t26 = t8;
    }
    return t26;
}

int FUN_0c16d0bc(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;

    t2 = strlen(a4);
    t3 = 0x0;
    if ((unsigned int)0xC30B854 < (unsigned int)0xC30BA54) {
        t4 = 0xC30B854;
        t5 = 0xC30B854;
        t6 = 0xC30B854;
        for (;;) {
            t7 = strncmp(a4, (t6 + 0x4), t2);
            if ((t7 == 0) && ((t1 = *(int *)((t5 + 0x0)), t1 != 0) && (t0 = (((struct o48_int *)(t1))->v), t0 != 0))) {
                break;
            }
            t6 = (t6 + 0x10);
            t4 = (t4 + 0x10);
            t5 = (t5 + 0x10);
            if ((unsigned int)t6 >= (unsigned int)0xC30BA54) {
                return 0x0;
            }
        }
        t0 = ((int (*)(int, int, int, int))(((((struct o48_int *)(t1))->v))))(a5, a6, a6, a7);
        FUN_0c16d160(a5, 0x0, t0, (t4 + 0x4));
        t3 = t0;
    }
    return t3;
}

int ChangeColliObj(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;

    t1 = *(int *)((a4 + 0x2C));
    if ((t1 != 0) && (t0 = *(int *)((t1 + 0x4)), t0 != a5)) {
        t0 = *(int *)((t1 + 0x4));
        if ((*(int *)((t1 + 0x8))) == 0) {
            *(unsigned int *)(((t0 << 2) + 0xC271CEC)) = (*(int *)((t1 + 0xC)));
        } else {
            *(unsigned int *)(((*(int *)((t1 + 0x8))) + 0xC)) = (*(int *)((t1 + 0xC)));
        }
        if ((*(int *)((t1 + 0xC))) == 0) {
            *(unsigned int *)(((t0 << 2) + 0xC271D58)) = (*(int *)((t1 + 0x8)));
        } else {
            *(unsigned int *)(((*(int *)((t1 + 0xC))) + 0x8)) = (*(int *)((t1 + 0x8)));
        }
        if ((*(int *)((0xC271D58 + (a5 << 2)))) == 0) {
            *(unsigned int *)((0xC271D58 + (a5 << 2))) = t1;
            *(unsigned int *)(((0xC271CEC + (a5 << 2)) + 0x0)) = t1;
            *(unsigned int *)((t1 + 0xC)) = 0x0;
            *(unsigned int *)((t1 + 0x8)) = 0x0;
        } else {
            *(unsigned int *)((t1 + 0x8)) = (*(int *)((((a5 << 2) + 0xC271D58) + 0x0)));
            *(unsigned int *)((t1 + 0xC)) = 0x0;
            *(unsigned int *)(((*(int *)((((a5 << 2) + 0xC271D58) + 0x0))) + 0xC)) = t1;
            *(unsigned int *)((((a5 << 2) + 0xC271D58) + 0x0)) = t1;
        }
        *(unsigned int *)((t1 + 0x4)) = a5;
        *(unsigned int *)((a4 + 0x24)) = 0x0;
        *(unsigned int *)((a4 + 0x20)) = 0x0;
        *(unsigned int *)((0xC271DC4 + (t0 << 2))) = ((*(int *)((0xC271DC4 + (t0 << 2)))) - 1);
        *(unsigned int *)((0xC271DC4 + (a5 << 2))) = ((*(int *)((0xC271DC4 + (a5 << 2)))) + 0x1);
        t0 = (a5 << 2);
    }
    return t0;
}

float FUN_0c059b62(int a4, int a5, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;

    t0 = 0x0;
    if ((int)(a5 - 1) > 0) {
        t1 = 0x0;
        t2 = (a5 - 1);
        for (;;) {
            t3 = (int)((unsigned int)((int)((unsigned int)(t1 + t2) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t1 + t2))) ? 1u : 0u));
            if (f4 > (*(float *)(((((((t3 >> 1) << 1) + (t3 >> 1)) << 2) + a4) + 0x0)))) {
                t1 = (t3 >> 1);
                t1 = (t1 + 0x1);
            } else {
                t2 = (t3 >> 1);
            }
            if ((int)t1 >= (int)t2) {
                break;
            }
        }
        t0 = t1;
    }
    t1 = t0;
    if ((int)t0 > 0) {
        t1 = (t0 - 1);
    }
    u0 = (((struct oC_float *)(((((t1 << 1) + t1) << 2) + a4)))->v);
    u1 = *(float *)((((((t1 << 1) + t1) << 2) + a4) + 0x0));
    u2 = (((struct o8_float *)((((((t1 << 1) + t1) << 2) + a4) + 0xC)))->v);
    u3 = (((struct o8_float *)(((((t1 << 1) + t1) << 2) + a4)))->v);
    u4 = (((struct o4_float *)(((((t1 << 1) + t1) << 2) + a4)))->v);
    u5 = (((u2 - u3) * (f4 - u1)) / (u0 - u1));
    u5 = u5 + u3 * (*(float *)0xC059C60);
    u6 = ((((((struct o4_float *)((((((t1 << 1) + t1) << 2) + a4) + 0xC)))->v)) - u4) / (u0 - u1));
    u6 = u6 + ((f4 - u1)) * u5;
    u5 = u2;
    u5 = u5 + u3 * ((1.0f + 1.0f));
    u2 = (u6 - ((u5 * (u0 - u1))));
    u0 = u4;
    u0 = u0 + ((f4 - u1)) * u2;
    return u0;
}

int FUN_0c069700(int a4)
{
    register int t0;
    register float u0;

    t0 = 0x1;
    if (((((struct o4_float *)(a4))->v)) > 0.0f) {
        (((struct o44_float *)((*(int *)((a4 + 0x0)))))->v) = 1.0f;
        nlScale(((((struct o8_float *)(a4))->v)), ((((struct oC_float *)(a4))->v)), 1.0f);
        FUN_0c074f20(((((struct oC_float *)(a4))->v)));
        nlObjPutTrnsl((*(int *)((a4 + 0x0))), ((((struct o4_float *)(a4))->v)));
        (((struct o4_float *)(a4))->v) = (((((struct o4_float *)(a4))->v)) - 0.0299999993f);
        u0 = ((((struct o8_float *)(a4))->v));
        u0 = u0 + 0.0500000007f * (((-((((struct o8_float *)(a4))->v))) + (1.0f + 1.0f)));
        (((struct o8_float *)(a4))->v) = u0;
        u0 = ((((struct oC_float *)(a4))->v));
        u0 = u0 + 0.0949999988f * (((-((((struct oC_float *)(a4))->v))) + 4.0f));
        (((struct oC_float *)(a4))->v) = u0;
        t0 = 0x0;
    }
    return t0;
}

int FUN_0c07e9ee(int a4, int a5, int a6)
{
    int stk[1];
    register int t0;
    register int t31;
    register int t3;

    *(unsigned int *)(((int)stk + 0)) = a4;
    t0 = FUN_0c07e42c(a4);
    t31 = t0;
    if (t0 == 0) {
        FUN_0c07e598(((int)stk + 0));
        t3 = *(int *)0xC147740;
        if ((*(int *)(((int)stk + 0))) == 1) {
            memcpy(a5, (0xAC + t3), 0x4);
            memcpy(a6, ((*(int *)0xC147740) + 0xB0), 0x4);
            t31 = t0;
        } else {
            if ((*(int *)(((int)stk + 0))) == 2) {
                memcpy(a5, (0x210 + t3), 0x4);
                memcpy(a6, ((*(int *)0xC147740) + 0x214), 0x4);
                t31 = t0;
            } else {
                t31 = 0xFFFFFFFD;
                if ((*(int *)(((int)stk + 0))) == 3) {
                    memcpy(a5, (0x794 + t3), 0x4);
                    memcpy(a6, ((*(int *)0xC147740) + 0x798), 0x4);
                    t31 = t0;
                }
            }
        }
    }
    return t31;
}

int FUN_0c07e6ea(int a4, int a5, int a6)
{
    int stk[1];

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
    *(unsigned int *)(((int)stk + 0)) = v0_2;
    v0_2 = (0xC147740);
    if (((*(int *)0xC147740) != 0)) goto L_C07E76C;
    v0_4 = (0xC14773C);
    v0_3 = (0xC147744);
    if ((v0_0 != 0)) goto L_C07E71A;
    v0_5 = ((int (*)(int, int, int))(malloc))(0x4000, v0_0, v0_1);
    *(unsigned int *)((v0_4 + 0x0)) = v0_5;
    if ((v0_5 == 0)) goto L_C07E740;
    L_C07E722:;
    v0_4 = (((int (*)(int, int, int))(FUN_0c07e558))((*(int *)((v0_4 + 0x0))), v0_0, v0_1)) != 0;
    if (v0_4) goto L_C07E768;
    if (((*(int *)(((int)stk + 0))) != 0)) goto L_C07E744;
    v0_0 = ((int (*)(int, int, int))(malloc))(0xAC8, v0_0, v0_1);
    *(unsigned int *)((v0_2 + 0x0)) = v0_0;
    if ((v0_0 != 0)) goto L_C07E74E;
    L_C07E740:;
    v0_0 = (0xFFFFFFFE);
    L_C07E76E:;
    return v0_0;
    L_C07E74E:;
    *(unsigned int *)((v0_3 + 0x0)) = ((*(int *)((v0_3 + 0x0))) | 0x4);
    memset((*(int *)((v0_2 + 0x0))), 0x0, 0xAC8);
    v0_0 = (FUN_0c07e36e((*(int *)((v0_2 + 0x0))))) == 0;
    if (v0_0) goto L_C07E76C;
    L_C07E768:;
    v0_0 = (0xFFFFFFFF);
    goto L_C07E76E;
    L_C07E76C:;
    v0_0 = (0x0);
    goto L_C07E76E;
    L_C07E744:;
    *(unsigned int *)((v0_2 + 0x0)) = (*(int *)(((int)stk + 0)));
    *(unsigned int *)((v0_3 + 0x0)) = ((*(int *)((v0_3 + 0x0))) | 0x2);
    goto L_C07E74E;
    L_C07E71A:;
    *(unsigned int *)((v0_4 + 0x0)) = v0_0;
    *(unsigned int *)((v0_3 + 0x0)) = ((*(int *)((v0_3 + 0x0))) | 0x1);
    goto L_C07E722;
}

int gdFsReqDrvStatG(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = gdFsReopenHn((*(int *)(((*(int *)0xC1737EC) + 0x14))), 0x0, 0x0, 0x0);
    t1 = 0xFFFFFFF3;
    if (t0 != 0) {
        t2 = _builtin_get_imask();
        _builtin_set_imask(0xF);
        t3 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)(((*(int *)0xC1737EC) + 0xC))) + 0x3C)))))(0x1, 0xE, ((*(int *)0xC1737EC) + 0x40), a7);
        if (t3 != 0) {
            *(unsigned int *)((t0 + 0x3C)) = t3;
            (((struct o50_ushort *)(t0))->v) = 0x4;
            (((struct o48_ushort *)(t0))->v) = 0xA;
            *(unsigned int *)(((*(int *)((t0 + 0x0))) + 0x1C)) = t0;
            t0 = ((int (*)(void))(((((struct o40_int *)((*(int *)(((*(int *)0xC1737EC) + 0xC)))))->v))))();
        }
        _builtin_set_imask(((unsigned int)(((t2 & 0xF) << 2) << 2) >> 4));
        t0 = 0x0;
        if (t3 == 0) {
            t0 = 0xFFFFFFF3;
        }
        t1 = t0;
    }
    return t1;
}

int FUN_0c14e15c(int a4, int a5, int a6)
{
    int stk[11];
    register int t4;
    register int t6;
    register int t10;

    *(unsigned int *)(((int)stk + 20)) = a5;
    *(unsigned int *)(((int)stk + 24)) = a6;
    FUN_0c14e8e4(a4);
    ADXCRS_Lock();
    *(int *)((int)stk + 4) = (((int)stk + 8) + 0x8);
    *(int *)((int)stk + 0) = (((int)stk + 4) + 0x8);
    t4 = FUN_0c1505ac((*(int *)(((int)stk + 20))), (*(int *)(((int)stk + 24))), 0xC2D1BC4, (((int)stk + 0) + 0x8), (((int)stk + 4) + 0x8), (((int)stk + 8) + 0x8));
    if (t4 == 0) {
        t6 = (*(int *)((a4 + 0x10)));
        *(int *)((int)stk + 4) = t6;
        t10 = FUN_0c1622c6(0xC2D1BC4, (*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 12))), (*(int *)(((int)stk + 16))), t6);
        *(unsigned int *)((a4 + 0x8)) = t10;
        if (t10 == 0) {
            ADXCRS_Unlock();
            FUN_0c1617e0((*(int *)(((int)stk + 20))), (*(int *)(((int)stk + 24))), (((int)stk + 8) + 0x14), 0x10);
            FUN_0c1616f4(0xC170468, (((int)stk + 8) + 0x14));
        } else {
            adxt_start_stm(a4);
            (((struct o98_uchar *)(a4))->v) = 0x0;
        }
    }
    return (ADXCRS_Unlock());
}

int kmiFBfree(int a4)
{
    int stk[2];
    register int t0;
    register int t39;
    register int t8;
    register int t9;
    register int t11;

    t0 = SearchUsed(a4, ((int)stk + 0));
    t39 = 0x7;
    if (t0 == 0) {
    } else {
        if (((unsigned short)(*(short *)((t0 + 0x0))) & 2) != 0) {
            t8 = *(int *)0xC173DE0;
            t9 = (a4 - t8);
            if ((*(short *)(((int)stk + 0))) == 0) {
                t9 = (t8 + a4);
            }
            t11 = SearchUsed(t9, (((int)stk + 0) + 0x4));
            if (t11 == 0) {
                FBfree((*(short *)(((int)stk + 0))), t0);
                t39 = 0x0;
            } else {
                if (((unsigned short)(*(short *)((t11 + 0x0))) & 4) != 0) {
                    *(unsigned short *)((t0 + 0x0)) = ((*(short *)((t0 + 0x0))) & 0xFFFB);
                    t39 = 0x0;
                } else {
                    FBfree((*(short *)(((int)stk + 0))), t0);
                    t39 = (FBfree((*(short *)(((int)stk + 4))), t11));
                }
            }
        } else {
            t39 = (FBfree((*(short *)(((int)stk + 0))), t0));
        }
    }
    return t39;
}

int kmInitDevice(int a4)
{
    kmiInitializeDriver();
    if (((int)a4 <= (int)0x2) && ((int)a4 >= 0)) {
        *(unsigned int *)0xC3008EC = (kmiGetProfileInt(0xC170DE8, 0xC170DF0, (0x3 & a4)));
        kmiInitializeHardware();
        return 0x0;
    }
    return 0x2;
}

int FUN_0c1621d2(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = (((struct o4_int *)0xC174310)->v);
    t1 = 0xC174314;
    t2 = 0x0;
    for (;;) {
        if ((int)t2 >= (int)t0) {
            break;
        }
        t3 = ((((struct o0_int *)0xC174310)->v));
        t3 = (t3 + t2);
        t3 = (t3 * 0x68);
        t3 = (t3 + 0xC302FA0);
        t1 = (*(signed char *)((t3 + 0x0)));
        if (t1 != 0) {
            t2 = (t2 + 0x1);
            continue;
        }
        break;
    }
    if (t2 == t0) {
        return 0x0;
    }
    FUN_0c162128(t3, a4, a5, a6, a7);
    return t3;
}

int nlMalloc(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = a4;
    if ((unsigned int)a4 < (unsigned int)0x8) {
        t0 = 0x8;
    }
    t1 = (*(int *)0xC177EEC);
    for (;;) {
        if (t1 == 0) {
            return t1;
        }
        if ((unsigned int)(*(int *)((t1 + 0x0))) >= (unsigned int)((t0 + 0x3) & 0xFFFFFFFC)) {
            break;
        }
        t1 = (*(int *)((t1 + 0x8)));
    }
    if ((unsigned int)(*(int *)((t1 + 0x0))) >= (unsigned int)(((t0 + 0x3) & 0xFFFFFFFC) + 0x10)) {
        t2 = *(int *)((t1 + 0x0));
        *(unsigned int *)((t1 + 0x0)) = (t2 - (((t0 + 0x3) & 0xFFFFFFFC) + 0x8));
        *(unsigned int *)((((t1 + 0x4) + (t2 - (((t0 + 0x3) & 0xFFFFFFFC) + 0x8))) + 0x0)) = ((t2 - (((t0 + 0x3) & 0xFFFFFFFC) + 0x8)) + 0x4);
        t2 = ((t0 + 0x3) & 0xFFFFFFFC);
        t0 = (((*(int *)((t1 + 0x0))) + t1) + 0x8);
    } else {
        if ((*(int *)((t1 + 0x4))) == 0) {
            *(unsigned int *)0xC177EEC = (*(int *)((t1 + 0x8)));
        } else {
            *(unsigned int *)(((*(int *)((t1 + 0x4))) + 0x8)) = (*(int *)((t1 + 0x8)));
        }
        if ((*(int *)((t1 + 0x8))) != 0) {
            *(unsigned int *)(((*(int *)((t1 + 0x8))) + 0x4)) = (*(int *)((t1 + 0x4)));
        }
        t2 = (*(int *)((t1 + 0x0)));
        t0 = t1;
    }
    *(unsigned int *)((t0 + 0x0)) = (-t2);
    *(unsigned int *)((((t0 + 0x4) + t2) + 0x0)) = (0xFFFFFFFC - t2);
    *(unsigned int *)((t0 + 0x4)) = 0x0;
    return (t0 + 0x4);
}

int FUN_0c03f42e(int a4)
{
    register int t0;
    register int t1;
    register float u3;
    register float u4;
    register float u5;
    register int t9;
    register int t6;
    register int t7;
    register int t8;

    t0 = (a4 + 0x1);
    t1 = a4;
    if (a4 == 3) {
        t0 = 0x3;
        t1 = 0x0;
    }
    u3 = (((struct o0_float *)0xC03F5C0)->v);
    u4 = (((struct o4_float *)0xC03F5C0)->v);
    u5 = (((struct o8_float *)0xC03F5C0)->v);
    t9 = 0xC03F5C8;
    if ((int)t1 < (int)t0) {
        t6 = (((((t1 << 2) + t1) << 2) << 2) + 0xC2A58C0);
        t7 = t1;
        t8 = ((t1 << 2) + 0xC2A59B0);
        for (;;) {
            (((struct o4_float *)(t6))->v) = u4;
            (((struct o8_float *)(t6))->v) = u5;
            (((struct oC_float *)(t6))->v) = u3;
            (((struct o10_float *)(t6))->v) = 1.0f;
            (((struct o14_float *)(t6))->v) = 1.0f;
            (((struct o18_float *)(t6))->v) = 0.0f;
            (((struct o1C_float *)(t6))->v) = 0.0f;
            (((struct o20_float *)(t6))->v) = 1.0f;
            (((struct o24_float *)(t6))->v) = 1.0f;
            t7 = (t7 + 0x1);
            *(unsigned int *)((t6 + 0x28)) = 0x0;
            *(unsigned int *)((t6 + 0x34)) = 0xA;
            (((struct o2C_float *)(t6))->v) = 1.0f;
            *(unsigned int *)((t6 + 0x30)) = 0x2;
            *(unsigned int *)((t8 + 0x0)) = 0xFFFFFFFF;
            t8 = (t8 + 0x4);
            t6 = (t6 + 0x50);
            if ((int)t7 >= (int)t0) {
                break;
            }
        }
        t9 = 0x2C;
    }
    return t9;
}

int FUN_0c055766(int a4)
{

    register int R0;
    register int R1;
    register int R2;
    register int R3;
    register int R4;
    register int R5;
    register int R6;
    register int R7;
    register int R12;
    register float F12;
    register int T_;
    R4 = a4;
    if (((int)R4 < (int)0x1E8480)) goto L_C055772;
    R4 = (0x3E7);
    L_C0557F0:;
    return R4;
    L_C055772:;
    if (((int)R4 < (int)0xF4240)) goto L_C05577C;
    R4 = (0x63);
    goto L_C0557F0;
    L_C05577C:;
    if (((int)R4 < (int)0x7A120)) goto L_C0557BC;
    R4 = (0x0);
    goto L_C0557F0;
    L_C0557BC:;
    R5 = (0x1);
    if (((int)R4 < (int)0x61A80)) goto L_C0557C8;
    R4 = (R5);
    goto L_C0557F0;
    L_C0557C8:;
    if (((int)R4 < (int)0x493E0)) goto L_C0557D2;
    R4 = (0x2);
    goto L_C0557F0;
    L_C0557D2:;
    if (((int)R4 < (int)0x30D40)) goto L_C0557DC;
    R4 = (0x3);
    goto L_C0557F0;
    L_C0557DC:;
    if (((int)R4 < (int)0x186A0)) goto L_C0557E6;
    R4 = (0x4);
    goto L_C0557F0;
    L_C0557E6:;
    if (((int)R4 < (int)R5)) goto L_C0557EE;
    R4 = (0x5);
    goto L_C0557F0;
    L_C0557EE:;
    R4 = (0x6);
    goto L_C0557F0;
}

int vmsfs_bank_lock_retry(int a4, int a5)
{
    int stk[4];
    register int t3;
    register int t8;
    register int t10;
    register int t11;
    int t7;
    int t9;

    *(unsigned int *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 0)) = (*(int *)0xC2C68F0);
    for (;;) {
        t3 = vmsio_bank_lock((*(int *)(((int)stk + 12))), (*(int *)(((int)stk + 8))));
        *(unsigned int *)(((int)stk + 4)) = t3;
        if (t3 == 0) {
            break;
        }
        if (((*(int *)0xC1182A4) != 0) && (t7 = *(int *)(((int)stk + 4)), t7 == 0xFFFFFF30)) {
            return 0xFFFFFF01;
        }
        t8 = *(int *)(((int)stk + 0));
        *(unsigned int *)(((int)stk + 0)) = (t8 - 1);
        if ((((t8 - 1) + 0x1) == 0) && (t9 = *(int *)0xC2C68F0, t9 != -1)) {
            t10 = *(int *)(((int)stk + 4));
            if (t10 != 0) {
                if (t10 != 0xFFFFFF01) {
                    return 0xFFFF0000;
                }
                return 0xFFFFFF01;
            }
            return 0x0;
        }
    }
    t11 = *(int *)(((int)stk + 4));
    if (t11 != 0) {
        if (t11 != 0xFFFFFF01) {
            return 0xFFFF0000;
        }
        return 0xFFFFFF01;
    }
    return 0x0;
}

int kmtex_ConvertSmallVQFromMem(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t6;
    register int t7;

    t0 = kmtex_GetTextureLevel(a6, a6);
    if ((a7 & 1) != 0) {
        t6 = ((*(int *)(((t0 << 2) + 0xC170FC4))) + 0xA);
        t7 = (*(int *)(((t0 << 2) + 0xC170ECC)));
    } else {
        t6 = (*(int *)(((t0 << 2) + 0xC170F98)));
        t7 = (*(int *)(((t0 << 2) + 0xC170EB0)));
    }
    kmiCopyFromFrameBuffer(a4, a5, t7);
    return kmiCopyFromFrameBuffer((a4 + t7), (a5 + 0x800), t6);
}

int mwlRnaIsCopyEnd(int a4, int a5, int a6, int a7)
{
    int stk[11];
    register int t24;
    register int t1;
    register int t3;
    register int t12;
    register int t2;
    int t17;
    register int t18;

    t24 = 0x0;
    if (((((struct o5C_int *)(a4))->v)) == 0) {
    } else {
        *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x8);
        *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 0) + 0x8) + 0x4);
        *(unsigned int *)((((((int)stk + 0) + 0x8) + 0x4) + 0x0)) = 0x1;
        *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x0)) = 0x1;
        t1 = 0x1;
        t3 = 0x0;
        for (;;) {
            if ((int)t3 >= (int)(unsigned char)(*(signed char *)((a4 + 0x3)))) {
                break;
            }
            t2 = (*(int *)((a4 + 0x38)));
            t1 = t2;
            t12 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))(((((struct o50_int *)((*(int *)((t2 + 0x0)))))->v))))(t1, t3, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
            t1 = t12;
            if (t12 != 1) {
                *(unsigned int *)(((((int)stk + 0) + 0x8) + (t3 << 2))) = 0x0;
            }
            t3 = (t3 + 0x1);
        }
        t24 = 0x0;
        if (((*(int *)(((*(int *)(((int)stk + 0))) + 0x0))) != 0) && (t17 = *(int *)(((int)stk + 4)), t18 = *(int *)((t17 + 0x0)), t18 != 0)) {
            t24 = 0x1;
        }
        if (t24 == 1) {
            (((struct o5C_uint *)(a4))->v) = 0x0;
        }
    }
    return t24;
}

int mwlSbTrnsDat(int a4, int a5, int a6, int a7, int a8)
{
    register int t0;
    register int t1;

    t0 = *(int *)((a4 + 0x10));
    t1 = FUN_0c07d728((*(int *)((((a4 + 0x2C) + (a5 << 2)) + 0x0))), a7, ((*(int *)((((a5 << 2) + (a4 + 0x20)) + 0x0))) + ((int)((int)(a6 * t0) / (int)0x8))), ((int)((int)(a8 * t0) / (int)0x8)));
    if ((int)t1 < 0) {
        if (t1 == -1) {
            return (FUN_0c16ada2(0xC171F6C));
        }
        if (t1 == -2) {
            return (FUN_0c16ada2(0xC171F9C));
        }
        if (t1 == -3) {
            return (FUN_0c16ada2(0xC171FDC));
        }
        t0 = t1;
        if (t1 == -4) {
            t0 = (FUN_0c16ada2(0xC17201C));
        }
        return t0;
    }
    return t1;
}

int FUN_0c057aec(int a4, int a5, int a6)
{

    register int R1;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    v0_1 = a5;
    v0_0 = a6;
    v0_2 = (((struct o0_int *)0xC1EC740)->v);
    v0_3 = (v0_2);
    if ((v0_2 != 1)) goto L_C057AFE;
    if ((((((struct o4_int *)0xC1EC740)->v)) == 1)) goto L_C057B0C;
    L_C057AFE:;
    v0_2 = (v0_3);
    if ((v0_3 != 3)) goto L_C057B74;
    v0_3 = (((struct o4_int *)0xC1EC740)->v);
    v0_2 = (v0_3);
    if ((v0_3 != 1)) goto L_C057B74;
    L_C057B0C:;
    v0_3 = *(int *)0xC2AC2F0;
    v0_2 = (v0_3);
    if ((v0_3 == 1)) goto L_C057B74;
    if (((*(signed char *)0xC28EDA0) == 0)) goto L_C057B74;
    if (((*(int *)0xC2A464C) == 0)) goto L_C057B2A;
    v0_2 = (v0_1);
    if ((v0_1 != 1)) goto L_C057B74;
    L_C057B2A:;
    v0_3 = (0xC2B32DC);
    if ((((((struct o28_int *)0xC2B32B4)->v)) != 0)) goto L_C057B74;
    v0_4 = (0x10000000);
    if ((v0_1 == 0x10000000)) goto L_C057B42;
    if ((((((struct o0_int *)0xC2B32B4)->v)) == 0x10000000)) goto L_C057B74;
    L_C057B42:;
    *(unsigned int *)((v0_3 + 0x0)) = ((*(int *)((v0_3 + 0x0))) | v0_1);
    if ((v0_1 != v0_4)) goto L_C057B52;
    (((struct o0_uint *)0xC132568)->v) = v0_0;
    L_C057B74:;
    return v0_2;
    L_C057B52:;
    if ((v0_1 != 0x1000000)) goto L_C057B5E;
    v0_1 = (0xC13256C);
    L_C057B66:;
    *(unsigned int *)((v0_1 + 0x0)) = v0_0;
    goto L_C057B74;
    L_C057B5E:;
    v0_2 = (0x1000);
    if ((v0_1 != 0x1000)) goto L_C057B6A;
    v0_1 = (0xC132570);
    goto L_C057B66;
    L_C057B6A:;
    if ((v0_1 != 0x10000)) goto L_C057B74;
    (((struct oC_uint *)0xC132568)->v) = v0_0;
    goto L_C057B74;
}
