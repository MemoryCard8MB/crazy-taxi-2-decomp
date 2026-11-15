/* Straight-line functions with calls and guards (batch gen_ac): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

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
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o19_uchar { char p[0x19]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_float { char p[0x20]; float v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uchar { char p[0x20]; unsigned char v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o224_uint { char p[0x224]; unsigned int v; };
struct o24_short { char p[0x24]; short v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o24_ushort { char p[0x24]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o2D4_int { char p[0x2D4]; int v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o33_uchar { char p[0x33]; unsigned char v; };
struct o34_int { char p[0x34]; int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o3C_uint { char p[0x3C]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_short { char p[0x4]; short v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_int { char p[0x44]; int v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o48_ushort { char p[0x48]; unsigned short v; };
struct o4A_ushort { char p[0x4A]; unsigned short v; };
struct o4C_short { char p[0x4C]; short v; };
struct o4C_ushort { char p[0x4C]; unsigned short v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o50_ushort { char p[0x50]; unsigned short v; };
struct o52_ushort { char p[0x52]; unsigned short v; };
struct o52C_int { char p[0x52C]; int v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o6_short { char p[0x6]; short v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o63_uchar { char p[0x63]; unsigned char v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o70_uint { char p[0x70]; unsigned int v; };
struct o74_uint { char p[0x74]; unsigned int v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_uint { char p[0x84]; unsigned int v; };
struct o88_uint { char p[0x88]; unsigned int v; };
struct o8C_uint { char p[0x8C]; unsigned int v; };
struct o98_uchar { char p[0x98]; unsigned char v; };
struct o9DC_int { char p[0x9DC]; int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_short { char p[0xA8]; short v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oFE_uchar { char p[0xFE]; unsigned char v; };
struct oFF_uchar { char p[0xFF]; unsigned char v; };
int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int ADXF_Ocbi(int, int);
int ADXF_OpenAfs(int, int);
int ADXF_Stop(int);
int ADXSJD_SetTrapNumSmpl(int, int);
int ADXSTM_Close(int);
int ADXSTM_SetEos(int, int);
int ADXT_SetOutVol(int, int);
int FUN_0c01422e(int);
int FUN_0c01e6f0(void);
int FUN_0c01e83e(int);
int FUN_0c01ff48(int, int);
int FUN_0c0200f0(int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c020176(void);
int FUN_0c020244(void);
int FUN_0c027f28(int);
int FUN_0c02802a(float);
int FUN_0c029528(void);
int FUN_0c02bcf8(void);
int FUN_0c03332c(int, int, int, int);
int FUN_0c03386a(int);
int FUN_0c0339fc(int);
int FUN_0c03425e(int, int, int, int);
int FUN_0c034e28(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c03e776(void);
int FUN_0c03f19a(void);
int FUN_0c048d70(int);
int FUN_0c04b1e6(void);
int FUN_0c051844(int, int, int);
int FUN_0c05407e(void);
int FUN_0c0544cc(void);
int FUN_0c054c24(void);
int FUN_0c054f24(void);
int FUN_0c058000(int);
int FUN_0c058ca6(int, int);
int FUN_0c058f64(int, int, int, int);
int FUN_0c0599b0(int, int);
float FUN_0c059b62(int, int, float);
int FUN_0c05efcc(void);
int FUN_0c05f470(int, int, float, float);
int FUN_0c05f6fe(int);
int FUN_0c05f72a(int);
int FUN_0c0620ac(int);
void FUN_0c065170(int);
int FUN_0c06753c(int, int);
int FUN_0c067f60(int);
int FUN_0c068166(int, int, int, int, int, int, int, int, int, int, int, int);
float FUN_0c0683b0(int, int, float);
int FUN_0c068f8a(int);
int FUN_0c069e54(void);
int FUN_0c06ce0a(int);
float FUN_0c072140(int);
int FUN_0c072230(int, int);
int FUN_0c072290(int, int);
int FUN_0c073360(void);
float FUN_0c073b40(int, int);
int FUN_0c073e10(int);
int FUN_0c076130(float);
int FUN_0c078880(float);
int FUN_0c078890(float);
int FUN_0c07ada0(int);
int FUN_0c07c8be(int);
int FUN_0c07d1e4(int, int, int);
int FUN_0c07d22e(int, int, int);
int FUN_0c07d42a(int, int, int);
int FUN_0c07e3d0(int);
int FUN_0c07e4cc(int);
int FUN_0c07e57c(int);
int FUN_0c07e598(int);
int FUN_0c07fdc8(void);
int FUN_0c07ff00(void);
int FUN_0c07ffac(int);
int FUN_0c149c00(int);
int FUN_0c149c18(int);
int FUN_0c14cdfc(void);
int FUN_0c14e15c(int, int, int);
int FUN_0c14e8e4(int);
int FUN_0c14ff74(void);
int FUN_0c1500d2(int, int, int);
int FUN_0c160dbc(void);
int FUN_0c1616f4(int, int);
int FUN_0c16172e(int, int, int);
int FUN_0c16205a(int, int, int, int);
int FUN_0c162394(int, int);
int FUN_0c16243a(int, int);
int FUN_0c16ad54(int);
int FUN_0c16ad6c(int);
int FUN_0c16ada2(int, ...);
int FUN_0c16ba68(int);
int FUN_0c16ba80(int);
int FUN_0c16bdaa(int);
int FUN_0c16c2e2(int);
int FUN_0c16c338(int, int, int);
int Voice_ShutUp(int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int adxf_SetCmdHstry(int, int, int, int, int);
int adxt_start_stm(int);
int convert_support(int);
int free(void);
int gdFsClose(int);
int gdFsGetFileSize(int, int);
int gdFsOpen(void);
int gdFsSearchName(int, int, int);
int gdc_CoursePointLoadReq(float);
int kdDevGetFD(int, int);
int kdGetDevice(int);
int kdGetDeviceInfo(int);
int kdGetDriverMode(int);
int memset(int, int, int);
int mpdrv_memset_l(int, int, int);
int mwRnaSetPlaySw(void);
int mwRnaSetTransSw(void);
int mwlRnaClearBuf(void);
int nlCloseEvent(int);
int nlInitMatrixStack(int, int, int);
int nlLineBlendFunc(int, int);
int nlMalloc(int);
int nlObjPutSetLightDirectionV(int);
int nlPopMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
float nlRoundUp(float);
int nlSubVector3op(int, int, int);
int ovGetLibTbl(int);
int ovSearchLibByUuid(int);
int pfSize(float, float);
int strlen(int);
int strncat(int, int, int);
int syBtCfgSet(int, int, int);
int syG2Read(int, int, int, int, int, int);
int syRtcAicaSetDateHi(int);
int syRtcAicaSetDateLo(int);
int syRtcAicaSetWriteFlag(void);
int syRtcCountToDate(int, int);
int syRtcDateToCount(void);
int syRtcMakeAgeOfMoon(void);
int syRtcMakeDayOfWeek(int, int);
int thunk_FUN_0c14b2ec(void);
int vmsfs_c_getstate(int);
int vmsfs_c_setfunc(int, int);
int vmsfs_c_setparam(int, int, int, int, int, int, int);
int FUN_0c059bf2(int a4, int a5, int a6, int a7);
int vmsio_isready(int a4);
int FUN_0c147a9a(void);
int FUN_0c147aec(void);
int syRtcSetDate(void);
int ADXB_EntryData(int a4, int a5, int a6);
int mwSbSetSfreq(int a4, int a5);
int FUN_0c027ed8(int a4);
int menuItemAudio(int a4);
int FUN_0c0368b4(void);
int FUN_0c052eca(void);
int FUN_0c053d20(void);
int FUN_0c0622a4(int a4);
int FUN_0c068ddc(int a4, int a5, int a6, int a7);
int FUN_0c06aa94(int a4);
int FUN_0c077a1c(int a4, int a5, int a6);
int FUN_0c08fa24(int a4);
int ovLibEntryTbl(int a4);
int _pd_peripheral_set_id(int a4, int a5);
int FUN_0c14f292(void);
int FUN_0c14ff0c(int a4);
void syChainInit(void);
int FUN_0c162128(int a4, int a5, int a6, int a7, int a8);
int mwlRnaSetInitMember(int a4);
int mwRnaStop(int a4);
int mwRnaSetDrctLvl(int a4, int a5);
int syG2DmaSetProtect(int a4, int a5);
int mpdrv_clear_deviceinfo(int a4);
int gdCiGetFileSizeEx(int a4);
int cvFsInit(void);
int FUN_0c01b87a(int a4, int a5, float f4);
int gdc_PlayStreamSong(int a4);
int FUN_0c01ee58(void);
int FUN_0c01fb8c(int a4, int a5);
int FUN_0c031fd8(int a4, int a5);
int FUN_0c046724(int a4, int a5, float f4);
float Wobble_Record_Window(int a4);
int FUN_0c051dd4(void);
int Put_Combo_Entry(int a4, int a5);
int FUN_0c05d858(int a4, int a5);
int FUN_0c060298(int a4, int a5, int a6);
void FUN_0c064f20(int a4);
int FUN_0c067804(int a4);
int FUN_0c07e5f0(int a4);
int ntInfExit(void);
int FUN_0c07f0da(int a4, int a5);
int FUN_0c07f05e(int a4, int a5);
int syCfgGetSoundMode(int a4, int a5, int a6);
int gdFsReopenHn(int a4, int a5, int a6, int a7);
int FUN_0c161634(int a4, int a5, int a6);
int mwRnaStart(int a4);
int mwSbSetPan(int a4, int a5, int a6);
int FUN_0c01ca48(void);
int FUN_0c01f95a(void);
int FUN_0c029574(int a4);
int FUN_0c02f1bc(void);
int CarSel_SetLight(void);
int FUN_0c068304(int a4, int a5, int a6, int a7);
int nlTriPutSetPoint(int a4, int a5, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
int buDeleteFileEx(int a4, int a5, int a6);
int FUN_0c07d54c(int a4, int a5, int a6);
int FUN_0c08f824(int a4, int a5, int a6, int a7);
int syRtcGetDate(int a4);
int FUN_0c14e1ec(int a4, int a5);
int FUN_0c14fec0(int a4, int a5, int a6, int a7);
void kmiRegisterPhIntHandler(int a4);
int gdFsSeek(int a4, int a5, int a6);
int FUN_0c1617e0(int a4, int a5, int a6, int a7);
int adxt_eos_entry(int a4, int a5, int a6, int a7);
int FUN_0c165b1c(void);
int set_event(int a4, int a5);
int isPosInArea(int a4, int a5);
float colliBoxAhead(int a4, int a5, int a6);
int FUN_0c04bf14(int a4, int a5);
int FUN_0c058424(void);
int FUN_0c061fba(int a4, int a5, int a6);
void sys_init(void);
void nlInitMatrix(int a4, int a5);
int buDefragDisk(int a4, int a5);
int FUN_0c0778d8(int a4, int a5);
int FUN_0c077938(int a4, int a5);
int FUN_0c07e83e(int a4, int a5);
int _lsfts(int a4, int a5, int a6);
int _rsft(int a4, int a5);
int gdFsGetDirInfoG(int a4, int a5);
int FUN_0c14ce88(int a4);
int FUN_0c14f248(void);
void syChainMasterHandlerPVR_V(int a4, int a5, int a6, int a7);
int syG2DmaIsBusy(int a4, int a5);
int syTmrGenCancelInt(void);
int kdDevGetControllerInfo(int a4, int a5);
int kdDevGetSIPInfo(int a4, int a5);
int kdDevGetGunInfo(int a4, int a5);
int SJMEM_GetNumData(int a4, int a5, int a6, int a7);
int FUN_0c02274c(void);
int FUN_0c022884(int a4);
int Init_Standard(void);

int FUN_0c059bf2(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = FUN_0c0599b0(a4, a5);
    if ((int)a7 > 0) {
        t1 = 0x0;
        for (;;) {
            u0 = FUN_0c059b62(a4, a5, (float)t1);
            t2 = (a6 + (t1 << 2));
            t1 = (t1 + 0x1);
            *(unsigned int *)((t2 + 0x0)) = (int)u0;
            if ((int)t1 >= (int)a7) {
                break;
            }
        }
    } else {
        t1 = t0;
    }
    return t1;
}

int vmsio_isready(int a4)
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
    if (((*(int *)((t2 + 0x0))) & 2) == 0) {
        return 0x0;
    }
    return 0x1;
}

int FUN_0c147a9a(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = ((((struct o0_int *)0xC0964F4)->v));
    for (;;) {
        if ((unsigned int)t0 >= (unsigned int)((((struct o4_int *)0xC0964F4)->v))) {
            break;
        }
        t2 = (*(int *)((t0 + 0x0)));
        if (t2 != 0) {
            t1 = (*(int *)((t0 + 0x0)));
            if (t1 != -1) {
                t1 = (((int (*)(void))((*(int *)((t0 + 0x0)))))());
            } else {
                t3 = t2;
            }
            t4 = t3;
        } else {
            t4 = t2;
        }
        t2 = t4;
        t0 = (t0 + 0x4);
    }
    t0 = t1;
    t1 = t2;
    t2 = ((((struct o10_int *)0xC0964F4)->v));
    for (;;) {
        if ((unsigned int)t2 >= (unsigned int)((((struct o14_int *)0xC0964F4)->v))) {
            break;
        }
        t1 = (*(int *)((t2 + 0x0)));
        if (t1 != 0) {
            t0 = (*(int *)((t2 + 0x0)));
            if (t0 != -1) {
                t0 = (((int (*)(void))((*(int *)((t2 + 0x0)))))());
            } else {
                t3 = t1;
            }
            t4 = t3;
        } else {
            t4 = t1;
        }
        t1 = t4;
        t2 = (t2 + 0x4);
    }
    return t0;
}

int FUN_0c147aec(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = ((((struct o0_int *)0xC0964FC)->v));
    for (;;) {
        if ((unsigned int)t0 >= (unsigned int)((((struct o4_int *)0xC0964FC)->v))) {
            break;
        }
        t2 = (*(int *)((t0 + 0x0)));
        if (t2 != 0) {
            t1 = (*(int *)((t0 + 0x0)));
            if (t1 != -1) {
                t1 = (((int (*)(void))((*(int *)((t0 + 0x0)))))());
            } else {
                t3 = t2;
            }
            t4 = t3;
        } else {
            t4 = t2;
        }
        t2 = t4;
        t0 = (t0 + 0x4);
    }
    t0 = t1;
    t1 = t2;
    t2 = ((((struct o10_int *)0xC0964FC)->v));
    for (;;) {
        if ((unsigned int)t2 >= (unsigned int)((((struct o14_int *)0xC0964FC)->v))) {
            break;
        }
        t1 = (*(int *)((t2 + 0x0)));
        if (t1 != 0) {
            t0 = (*(int *)((t2 + 0x0)));
            if (t0 != -1) {
                t0 = (((int (*)(void))((*(int *)((t2 + 0x0)))))());
            } else {
                t3 = t1;
            }
            t4 = t3;
        } else {
            t4 = t1;
        }
        t1 = t4;
        t2 = (t2 + 0x4);
    }
    return t0;
}

int syRtcSetDate(void)
{
    int stk[1];
    register int t1;
    register int t23;
    register int t3;
    register int t5;
    register int t6;
    int t8;

    syRtcDateToCount();
    t1 = syRtcAicaSetWriteFlag();
    t23 = t1;
    if (t1 == 0) {
        t3 = syRtcAicaSetDateLo((unsigned short)(*(int *)(((int)stk + 0))));
        t23 = t3;
        if (t3 == 0) {
            t5 = syRtcAicaSetDateHi((unsigned short)((unsigned int)(*(int *)(((int)stk + 0))) >> 16));
            t23 = t5;
            if (t5 == 0) {
                t6 = FUN_0c14cdfc();
                t23 = 0xFFFFFFFF;
                if ((t6 != (*(int *)(((int)stk + 0)))) && (t8 = *(int *)(((int)stk + 0)), t6 != (t8 + 0x1))) {
                } else {
                    *(unsigned int *)0xC2D12E8 = t6;
                    t23 = 0x0;
                }
            }
        }
    }
    return t23;
}

int ADXB_EntryData(int a4, int a5, int a6)
{
    register int t3;
    register int t4;
    register int t11;

    if (((((struct oA8_short *)(a4))->v)) == 0) {
        (((struct o50_uint *)(a4))->v) = a5;
        t11 = ((int)((int)a6 / (int)(*(signed char *)((a4 + 0xF)))));
    } else {
        (((struct o50_uint *)(a4))->v) = a5;
        t3 = *(signed char *)((a4 + 0xD));
        t4 = t3;
        if ((int)t3 < 0) {
            t4 = (t3 + 0x7);
        }
        t11 = ((int)((int)a6 / (int)((((t4 >> 1) >> 1) >> 1) * (*(signed char *)((a4 + 0xE))))));
    }
    (((struct o54_uint *)(a4))->v) = t11;
    (((struct o84_uint *)(a4))->v) = 0x0;
    (((struct oA0_uint *)(a4))->v) = 0x0;
    (((struct oA4_uint *)(a4))->v) = 0x0;
    return 0xA4;
}

int mwSbSetSfreq(int a4, int a5)
{
    register int t1;
    register int t5;

    t1 = *(signed char *)((0xC171CC4 + ((int)((int)0xAC44 / (int)(a5 + 0x1)))));
    t5 = FUN_0c07d1e4((*(int *)(((*(int *)((a4 + 0x1C))) + 0x4))), (0xF & (-t1)), (0x3FF & ((int)((int)(((a5 - ((int)0xAC44 << (int)(-t1))) << 8) << 2) / (int)((int)0xAC44 << (int)(-t1))))));
    *(unsigned int *)((a4 + 0x14)) = a5;
    return t5;
}

int FUN_0c027ed8(int a4)
{
    (((struct o0_uint *)0xC270D1C)->v) = a4;
    *(unsigned int *)0xC128A58 = (*(int *)(((((*(int *)(((((((*(int *)0xC2BF8E4) + 0x4D) << 2) << 1) + (*(int *)0xC2BB3E8)) + 0x4))) * 0x3C) + (*(int *)0xC2BF120)) + 0x34)));
    *(unsigned int *)0xC270E3C = 0xC270D3C;
    (((struct o20_uchar *)0xC270D1C)->v) = 0x0;
    FUN_0c027f28(0x0);
    FUN_0c02802a(1.0f);
    return pfSize(1.0f, 1.0f);
}

int menuItemAudio(int a4)
{
    int stk[4];
    register int t2;
    register int t15;
    register int t16;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = (*(int *)0xC2A4654);
    if ((*(int *)(((int)stk + 4))) != 0) {
        t2 = FUN_0c03425e(0x0, ((int)stk + 0), 0x2, 0x0);
        if (t2 == 1) {
            *(unsigned int *)0xC2A4654 = (*(int *)(((int)stk + 0)));
            FUN_0c03e776();
        }
    }
    if ((*(int *)(((int)stk + 4))) != 0) {
        t15 = 0xC0213;
        t16 = (*(int *)(((int)stk + 0)));
    } else {
        t15 = 0x40213;
        t16 = (*(int *)(((int)stk + 0)));
    }
    return (FUN_0c034e28(t15, 0xC0B51F8, 0x2, t16, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28)));
}

int FUN_0c0368b4(void)
{
    register int t0;
    register int t1;

    if ((*(int *)0xC2A46CC) != 0) {
        t0 = FUN_0c0339fc((*(int *)0xC2A46CC));
        *(unsigned int *)0xC2A46CC = 0x0;
        return t0;
    }
    FUN_0c03386a(0x4);
    t0 = (((struct oC_int *)0xC2A4F88)->v);
    t1 = (FUN_0c0339fc(0x0));
    if (t0 != 0) {
        (((struct o0_uint *)0xC1EC740)->v) = ((((struct o0_int *)0xC2A4F88)->v));
        t0 = (((struct o4_int *)0xC2A4F88)->v);
        (((struct o4_uint *)0xC1EC740)->v) = t0;
        t1 = t0;
    }
    if (((((struct o0_int *)0xC1EC740)->v)) == 0) {
        return FUN_0c03f19a();
    }
    return t1;
}

int FUN_0c052eca(void)
{
    (((struct o0_float *)0xC2B2B60)->v) = 0.0f;
    (((struct o4_float *)0xC2B2B60)->v) = 0.0f;
    (((struct o8_float *)0xC2B2B60)->v) = 500.0f;
    (((struct oC_float *)0xC2B2B60)->v) = 1.0f;
    (((struct o10_float *)0xC2B2B60)->v) = 1.0f;
    (((struct o14_float *)0xC2B2B60)->v) = 0.0f;
    (((struct o18_float *)0xC2B2B60)->v) = 0.0f;
    (((struct o1C_float *)0xC2B2B60)->v) = 1.0f;
    (((struct o20_float *)0xC2B2B60)->v) = 1.0f;
    (((struct o24_uint *)0xC2B2B60)->v) = 0x0;
    (((struct o30_uint *)0xC2B2B60)->v) = 0x5;
    (((struct o28_float *)0xC2B2B60)->v) = 1.0f;
    (((struct o2C_uint *)0xC2B2B60)->v) = 0x2;
    (((struct o0_uint *)0xC2B2C50)->v) = 0x280;
    (((struct o4_uint *)0xC2B2C50)->v) = 0x0;
    (((struct o8_uint *)0xC2B2C50)->v) = 0xFFFFFFFF;
    return 0xC2B2C58;
}

int FUN_0c053d20(void)
{
    (((struct o38_uint *)0xC2B2DAC)->v) = 0x0;
    (((struct o3C_uint *)0xC2B2DAC)->v) = 0x0;
    (((struct o14_float *)0xC2B2DAC)->v) = 0.0f;
    (((struct o18_float *)0xC2B2DAC)->v) = 0.0f;
    (((struct o10_float *)0xC2B2DAC)->v) = 0.0f;
    (((struct o1C_uint *)0xC2B2DAC)->v) = 0x12C;
    (((struct o20_uint *)0xC2B2DAC)->v) = 0x0;
    (((struct o24_uint *)0xC2B2DAC)->v) = 0x0;
    (((struct o28_uint *)0xC2B2DAC)->v) = 0x0;
    (((struct o34_uint *)0xC2B2DAC)->v) = 0x0;
    (((struct o0_float *)0xC2B2DAC)->v) = 0.0f;
    (((struct o4_float *)0xC2B2DAC)->v) = 0.0f;
    (((struct o8_float *)0xC2B2DAC)->v) = 0.0f;
    (((struct oC_float *)0xC2B2DAC)->v) = 0.0f;
    FUN_0c05407e();
    FUN_0c0544cc();
    FUN_0c054c24();
    return FUN_0c054f24();
}

int FUN_0c0622a4(int a4)
{
    register int t1;
    register int t0;
    register int t2;

    t1 = 0x0;
    for (;;) {
        if ((int)t1 >= (int)(*(int *)((a4 + 0x4)))) {
            break;
        }
        t2 = t1;
        t0 = 0x80;
        t2 = (t2 << 8);
        t2 = (t2 + (*(int *)((a4 + 0x0))));
        *(unsigned int *)((t2 + t0)) = 0x0;
        t0 = (FUN_0c05f72a(t2));
        t0 = (FUN_0c05f6fe(t2));
        t1 = (t1 + 0x1);
    }
    *(unsigned int *)((a4 + 0xC)) = ((*(int *)((a4 + 0xC))) + 0x1);
    return FUN_0c067f60(a4);
}

int FUN_0c068ddc(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(int *)0xC2B9EE8;
    *(unsigned int *)0xC2B9EE8 = (FUN_0c068f8a(((((struct o7C_int *)(a4))->v))));
    FUN_0c0620ac((a4 + 0x14));
    *(unsigned int *)0xC2B9EE8 = t0;
    t0 = (((struct o78_int *)(a4))->v);
    if (((int)t0 >= 0) && ((int)t0 < (int)0x4)) {
        t0 = *(int *)(((((((struct o78_int *)(a4))->v)) << 2) + 0xC1102F8));
        return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, a7);
    }
    return 0x78;
}


int FUN_0c077a1c(int a4, int a5, int a6)
{
    register int t0;

    t0 = vmsfs_c_getstate(a4);
    if (t0 != 0) {
        return 0xFFFFFFFF;
    }
    vmsfs_c_setparam(a4, a4, a5, a6, 0x0, 0x0, 0x0);
    vmsfs_c_setfunc(a4, 0x17);
    return 0x0;
}

int FUN_0c08fa24(int a4)
{
    int stk[3];

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 0)) = 0xC2CDA4C;
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 4))) >= (int)((((struct o0_int *)0xC2CDC8C)->v))) {
            (((struct o4_uint *)0xC2CDC8C)->v) = 0xFFFFFF07;
            return 0x0;
        }
        if ((*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) == 0) {
            break;
        }
        *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x1);
        *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0x48);
    }
    *(unsigned char *)(((*(int *)(((int)stk + 0))) + 0x0)) = 0x1;
    *(unsigned int *)(((*(int *)(((int)stk + 0))) + 0xC)) = (*(int *)(((int)stk + 4)));
    return (*(int *)(((int)stk + 0)));
}

int ovLibEntryTbl(int a4)
{
    int stk[3];
    register int t1;
    register int t3;
    register int t4;

    *(unsigned int *)(((int)stk + 4)) = a4;
    FUN_0c149c00(((int)stk + 0));
    t1 = ovGetLibTbl((((int)stk + 0) + 0x8));
    t3 = ovSearchLibByUuid(((*(int *)(((int)stk + 4))) + 0x10));
    if ((int)t3 < 0) {
        t4 = *(int *)((t1 + 0x0));
        *(unsigned int *)((((t1 + 0x8) + ((t4 << 2) << 1)) + 0x0)) = (*(int *)(((int)stk + 4)));
        *(unsigned int *)(((((t4 << 2) << 1) + (t1 + 0x8)) + 0x4)) = 0x0;
        *(unsigned int *)((t1 + 0x0)) = ((*(int *)((t1 + 0x0))) + 0x1);
    }
    FUN_0c149c18(((int)stk + 0));
    return 0x0;
}

int _pd_peripheral_set_id(int a4, int a5)
{
    int stk[1];
    register int t2;
    register int t15;
    register int t23;

    if (((*(int *)((a5 + 0x0))) & 1) != 0) {
        t23 = kdDevGetControllerInfo(((int)stk + 0), a5);
        if ((int)t23 < 0) {
            *(unsigned int *)((a4 + 0x4)) = 0x0;
            *(unsigned int *)((a4 + 0x0)) = 0x0;
        } else {
            t2 = kdGetDriverMode(0x5);
            if (t2 == 1) {
                t23 = convert_support((*(int *)(((int)stk + 0))));
                *(unsigned int *)((a4 + 0x4)) = t23;
            } else {
                *(unsigned int *)((a4 + 0x4)) = (*(int *)(((int)stk + 0)));
                t23 = t2;
            }
            *(unsigned int *)((a4 + 0x0)) = (*(int *)((a4 + 0x4)));
            *(unsigned int *)((a4 + 0x24)) = (a5 + 0x14);
        }
    } else {
        t15 = kdGetDriverMode(0x5);
        if (t15 == 1) {
            t23 = convert_support((*(int *)(((int)stk + 0))));
            *(unsigned int *)((a4 + 0x4)) = t23;
        } else {
            *(unsigned int *)((a4 + 0x4)) = (*(int *)(((int)stk + 0)));
            t23 = t15;
        }
        *(unsigned int *)((a4 + 0x0)) = (*(int *)((a4 + 0x4)));
        *(unsigned int *)((a4 + 0x24)) = (a5 + 0x14);
    }
    return t23;
}

int FUN_0c14f292(void)
{
    FUN_0c14ff74();
    (((struct oC_uint *)0xC2D3618)->v) = 0xFFFFFFFF;
    (((struct o8_uint *)0xC2D3618)->v) = 0x0;
    (((struct o4_uint *)0xC2D3618)->v) = 0x0;
    *(unsigned int *)0xC2D25F4 = 0x0;
    (((struct o0_uint *)0xC2D3618)->v) = 0x0;
    memset(0xC2D35F8, 0x0, 0x20);
    memset(0xC2D25F8, 0xFF, 0x1000);
    memset(0xC2D21F4, 0x0, 0x400);
    return (memset(0xC2D1BF4, 0x0, 0x600));
}

int FUN_0c14ff0c(int a4)
{
    register int t9;

    t9 = (adxf_SetCmdHstry(0x3, 0x0, a4, 0xFFFFFFFF, 0xFFFFFFFF));
    if (a4 != 0) {
        ADXCRS_Lock();
        if ((*(signed char *)((a4 + 0x1))) == 2) {
            ADXF_Stop(a4);
        }
        memset(a4, 0x0, 0x60);
        ADXCRS_Unlock();
        t9 = (adxf_SetCmdHstry(0x3, 0x1, a4, 0xFFFFFFFF, 0xFFFFFFFF));
    }
    return t9;
}

void syChainInit(void)
{
    int stk[1];
    register int t1;
    register int t2;

    *(unsigned short *)(((int)stk + 0)) = (_builtin_get_imask());
    _builtin_set_imask(0xF);
    t1 = 0xC300E60;
    for (;;) {
        *(unsigned int *)((t1 + 0xC)) = 0x0;
        t1 = (t1 + 0x10);
        if ((unsigned int)t1 >= (unsigned int)0xC301E60) {
            break;
        }
    }
    t2 = 0xC301E60;
    for (;;) {
        *(unsigned int *)((t2 + 0x0)) = 0x0;
        t2 = (t2 + 0x4);
        if ((unsigned int)t2 >= (unsigned int)0xC302160) {
            break;
        }
    }
    _builtin_set_imask(((unsigned int)((((unsigned short)(*(short *)(((int)stk + 0))) & 0xF) << 2) << 2) >> 4));
}

int FUN_0c162128(int a4, int a5, int a6, int a7, int a8)
{
    register int t0;
    register int t1;

    *(unsigned char *)((a4 + 0x1)) = 0x1;
    *(unsigned char *)((a4 + 0x2)) = 0x0;
    *(unsigned int *)((a4 + 0x4)) = a8;
    *(unsigned int *)((a4 + 0x8)) = a5;
    *(unsigned int *)((a4 + 0xC)) = 0x0;
    *(unsigned int *)((a4 + 0x10)) = a6;
    *(unsigned int *)((a4 + 0x14)) = a7;
    *(unsigned int *)((a4 + 0x2C)) = 0x200;
    t0 = *(int *)((a4 + 0x14));
    t1 = (t0 + 0x7FF);
    if ((int)(t0 + 0x7FF) < 0) {
        t1 = ((t0 + 0x7FF) + 0x7FF);
    }
    *(unsigned int *)((a4 + 0x30)) = ((int)t1 >> 11);
    t0 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((a8 + 0x0))) + 0x24)))))(a8, 0x0, a6, a7);
    *(unsigned int *)((a4 + 0x18)) = t0;
    *(unsigned int *)((a4 + 0x1C)) = t0;
    *(unsigned char *)((a4 + 0x0)) = 0x1;
    return t0;
}

int mwlRnaSetInitMember(int a4)
{
    *(unsigned char *)((a4 + 0x1)) = 0x0;
    *(unsigned char *)((a4 + 0x4)) = 0x0;
    *(unsigned char *)((a4 + 0x5)) = 0x0;
    *(unsigned char *)((a4 + 0x6)) = 0x0;
    *(unsigned int *)((a4 + 0x34)) = 0x0;
    *(unsigned int *)((a4 + 0x2C)) = 0x0;
    *(unsigned int *)((a4 + 0x30)) = 0x0;
    (((struct o40_uint *)(a4))->v) = 0x2000;
    (((struct o44_uint *)(a4))->v) = 0x2000;
    (((struct o48_uint *)(a4))->v) = 0x0;
    (((struct o60_uint *)(a4))->v) = 0x0;
    (((struct o6C_uint *)(a4))->v) = 0x0;
    (((struct o70_uint *)(a4))->v) = 0xFFFFFFD3;
    (((struct o74_uint *)(a4))->v) = 0x0;
    (((struct o78_uint *)(a4))->v) = 0x0;
    (((struct o7C_uint *)(a4))->v) = 0x0;
    (((struct o80_uint *)(a4))->v) = 0x0;
    (((struct o84_uint *)(a4))->v) = 0x0;
    (((struct o8C_uint *)(a4))->v) = 0x0;
    *(unsigned char *)((a4 + 0x7)) = 0x0;
    (((struct o88_uint *)(a4))->v) = 0x0;
    return 0x88;
}

int mwRnaStop(int a4)
{
    int stk[2];
    register int t2;
    register int t8;

    if (a4 == 0) {
        *(int *)((int)stk + 0) = 0xC171714;
        return (FUN_0c16ada2(0xC171714));
    }
    t2 = *(signed char *)((a4 + 0x1));
    t8 = t2;
    if (t2 != 0) {
        FUN_0c16ad54(((int)stk + 4));
        mwRnaSetPlaySw();
        mwRnaSetTransSw();
        mwlRnaClearBuf();
        *(unsigned char *)((a4 + 0x7)) = 0x0;
        *(unsigned char *)((a4 + 0x1)) = 0x0;
        t8 = (FUN_0c16ad6c(((int)stk + 4)));
    }
    return t8;
}

int mwRnaSetDrctLvl(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    if (a4 == 0) {
        t0 = (FUN_0c16ada2(0xC171714));
    } else {
        t1 = 0xFFFFFFD3;
        if ((int)a5 < (int)0xFFFFFFD3) {
        } else {
            t2 = a5;
            if ((int)a5 > 0) {
                t2 = 0x0;
            }
            t1 = t2;
        }
        t2 = *(int *)((a4 + 0x38));
        t3 = ((int (*)(int, int, int, int))(((((struct o44_int *)((*(int *)((t2 + 0x0)))))->v))))(t2, 0x2, t1, 0x0);
        (((struct o84_uint *)(a4))->v) = t1;
        t0 = 0x84;
    }
    return t0;
}

int syG2DmaSetProtect(int a4, int a5)
{
    register int t0;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    *(unsigned int *)0xA05F78BC = (((((unsigned int)((unsigned int)((unsigned int)(a4 & 0x7F00000) >> 16) >> 2) >> 2) << 8) | ((unsigned int)((unsigned int)((unsigned int)(a5 & 0x7F00000) >> 16) >> 2) >> 2)) | 0x46590000);
    *(unsigned int *)0xC1743E8 = (((((unsigned int)((unsigned int)((unsigned int)(a4 & 0x7F00000) >> 16) >> 2) >> 2) << 8) | ((unsigned int)((unsigned int)((unsigned int)(a5 & 0x7F00000) >> 16) >> 2) >> 2)) | 0x46590000);
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
    return 0x0;
}

int mpdrv_clear_deviceinfo(int a4)
{
    register int t1;

    mpdrv_memset_l(a4, 0x0, 0x1E);
    (((struct o14_uchar *)(a4))->v) = 0x28;
    (((struct o15_uchar *)(a4))->v) = 0x6E;
    (((struct o16_uchar *)(a4))->v) = 0x6F;
    (((struct o17_uchar *)(a4))->v) = 0x6E;
    (((struct o18_uchar *)(a4))->v) = 0x65;
    (((struct o19_uchar *)(a4))->v) = 0x29;
    t1 = (a4 + 0x1A);
    for (;;) {
        *(unsigned char *)((t1 + 0x0)) = 0x20;
        t1 = (t1 + 0x1);
        if ((unsigned int)t1 >= (unsigned int)(a4 + 0x33)) {
            break;
        }
    }
    (((struct o33_uchar *)(a4))->v) = 0x0;
    return 0x0;
}

int gdCiGetFileSizeEx(int a4)
{
    int stk[1];
    register int t2;
    register int t3;

    if (a4 == 0) {
        FUN_0c16c338(0xC172158, 0xC17455C, 0x1);
        FUN_0c16c2e2(0x0);
        return 0x0;
    }
    t2 = gdFsOpen();
    t3 = gdFsGetFileSize(t2, ((int)stk + 0));
    if (t3 == 0) {
        FUN_0c16c338(0xC172158, 0xC17451C, 0x2);
        *(unsigned int *)(((int)stk + 0)) = 0x0;
    }
    gdFsClose(t2);
    return (*(int *)(((int)stk + 0)));
}

int cvFsInit(void)
{
    register int t0;
    register int t1;

    if ((*(int *)0xC174580) == 0) {
        t0 = 0xC30B754;
        for (;;) {
            *(unsigned int *)((t0 + 0x0)) = 0x0;
            *(unsigned int *)((t0 + 0x4)) = 0x0;
            t0 = (t0 + 0x8);
            if ((unsigned int)t0 >= (unsigned int)0xC30B854) {
                break;
            }
        }
        t0 = 0xC30B854;
        for (;;) {
            *(unsigned char *)((t0 + 0x4)) = 0x0;
            t0 = (t0 + 0x10);
            if ((unsigned int)t0 >= (unsigned int)0xC30BA54) {
                break;
            }
        }
        t0 = memset(0xC30BA54, 0x0, 0x9);
        *(unsigned char *)0xC30BA54 = 0x0;
        t1 = t0;
    }
    *(unsigned int *)0xC174580 = ((*(int *)0xC174580) + 0x1);
    return t1;
}

int FUN_0c01b87a(int a4, int a5, float f4)
{
    register int t1;

    if ((int)(unsigned short)(a4 - a5) >= (int)(unsigned short)(a5 - a4)) {
        t1 = (-(unsigned short)(a5 - a4));
    } else {
        t1 = (unsigned short)(a4 - a5);
    }
    return (int)((float)t1 * f4);
}



int FUN_0c01fb8c(int a4, int a5)
{
    register int t0;
    register int t1;

    (((struct o8_uint *)0xC2708B4)->v) = a5;
    if (((((struct o4_int *)0xC2708B4)->v)) == 1) {
        FUN_0c14ff0c(((((struct o0_int *)0xC2708B4)->v)));
    }
    t0 = ADXF_OpenAfs(0x3, a4);
    (((struct o0_uint *)0xC2708B4)->v) = t0;
    t1 = 0xFFFFFFFF;
    if (t0 != 0) {
        *(unsigned int *)0xC1ECD4C = a4;
        t0 = FUN_0c1500d2(((((struct o0_int *)0xC2708B4)->v)), 0x10, 0xCE98000);
        (((struct o4_uint *)0xC2708B4)->v) = 0x1;
        t1 = t0;
    }
    return t1;
}

int FUN_0c031fd8(int a4, int a5)
{
    FUN_0c03332c(a4, 0x6, 0x1, ((int)((unsigned int)a5 / (unsigned int)0x64)));
    *(unsigned char *)((a4 + 0x6)) = 0x2E;
    FUN_0c03332c((a4 + 0x7), 0x2, 0x3, ((int)((unsigned int)a5 % (unsigned int)0x64)));
    *(unsigned char *)((a4 + 0x9)) = 0x79;
    *(unsigned char *)((a4 + 0xA)) = 0x64;
    return 0x64;
}

int FUN_0c046724(int a4, int a5, float f4)
{
    register int t0;

    t0 = FUN_0c07ffac((a5 - a4));
    if ((int)t0 < (int)0x8000) {
        t0 = (a5 - a4);
    } else {
        if ((int)a5 > (int)a4) {
            t0 = (0xFFFF0000 + (a5 - a4));
        } else {
            t0 = (0x10000 + (a5 - a4));
        }
    }
    return (int)((float)t0 * f4);
}

float Wobble_Record_Window(int a4)
{
    register float u2;
    register float u3;
    register float t6;
    register float u7;
    register float u25;
    register float u13;

    if (((((struct o4_int *)0xC2B2A08)->v)) == 1) {
        (((struct o0_ushort *)0xC2B2A08)->v) = (((((struct o0_short *)0xC2B2A08)->v)) + 0x4000);
        u2 = (((struct o8_float *)0xC2B2A08)->v);
        u3 = (((struct o0_float *)0xC05188C)->v);
        (((struct o8_float *)0xC2B2A08)->v) = (u2 * u3);
        if (((((struct o4_float *)0xC05188C)->v)) > (u2 * u3)) {
            (((struct oC_float *)0xC2B2A08)->v) = 0.0f;
        } else {
            t6 = FUN_0c072140((unsigned short)((((struct o0_short *)0xC2B2A08)->v)));
            u7 = (u2 * u3);
            (((struct oC_float *)0xC2B2A08)->v) = (-(u7 * t6));
            u13 = t6;
        }
        u25 = u13;
    }
    return u25;
}

int FUN_0c051dd4(void)
{
    register int t2;
    register int t5;

    t2 = 0x0;
    if ((*(int *)((((((struct o0_int *)0xC2B2960)->v)) + 0x0))) != 0) {
        t2 = 0x1;
    }
    if (((((struct o34_int *)0xC2B2960)->v)) != t2) {
        t5 = 0x100A9;
        if (t2 == 0) {
            t5 = 0x200A9;
        }
        FUN_0c058ca6(t5, 0x0);
        (((struct o34_uint *)0xC2B2960)->v) = t2;
    }
    if (t2 == 0) {
        *(unsigned int *)0xC2B2860 = 0x4F;
    } else {
        *(unsigned int *)0xC2B2860 = 0x4E;
    }
    return FUN_0c07ada0(0xC2B2860);
}

int Put_Combo_Entry(int a4, int a5)
{
    register int t10;
    register int t11;

    if (((((struct o0_int *)0xC2B2A78)->v)) == 1) {
        (((struct o4_uint *)0xC2B2A78)->v) = (*(int *)((((((struct o1C_int *)0xC2B2A78)->v)) + 0x18)));
        nlCloseEvent(((((struct o1C_int *)0xC2B2A78)->v)));
        (((struct o0_uint *)0xC2B2A78)->v) = 0x0;
    }
    t10 = set_event(0x24, 0xC0518B8);
    t11 = FUN_0c051844(t10, a4, a5);
    (((struct o0_uint *)0xC2B2A78)->v) = 0x1;
    (((struct o1C_uint *)0xC2B2A78)->v) = t10;
    return t11;
}

int FUN_0c05d858(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t4;

    t0 = a5;
    for (;;) {
        t1 = *(int *)((t0 + 0x0));
        t0 = (t0 + 0x4);
        FUN_0c072230(t0, ((t1 << 2) + a4));
        t0 = (t0 + 0xC);
        *(unsigned int *)((((t1 << 2) + a4) + 0x0)) = ((*(int *)((((t1 << 2) + a4) + 0x0))) | 0x1);
        t4 = FUN_0c072290(t0, (((t1 << 2) + a4) + 0xC));
        t0 = (t0 + 0xC);
        if ((*(int *)((t0 + 0x0))) == 0) {
            break;
        }
    }
    return t4;
}

int FUN_0c060298(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t3;

    t0 = *(int *)0xC175C80;
    if ((int)t0 < (int)0x8) {
        (((struct o0_uint *)0xC2B9C9C)->v) = 0x6;
        (((struct o4_uint *)0xC2B9C9C)->v) = 0x0;
        (((struct o14_uint *)0xC2B9C9C)->v) = a4;
        (((struct o18_uint *)0xC2B9C9C)->v) = a5;
        (((struct o1C_uint *)0xC2B9C9C)->v) = a6;
        t3 = 0x9C;
    } else {
        t1 = 0xE;
        if ((int)t0 < (int)0x10) {
            t1 = 0xB;
        }
        (((struct o0_uint *)0xC2B9C9C)->v) = t1;
        (((struct o4_uint *)0xC2B9C9C)->v) = 0x0;
        t3 = 0x84;
    }
    return t3;
}

void FUN_0c064f20(int a4)
{
    int stk[2];
    register float t2;

    FUN_0c06753c(a4, 0x1);
    t2 = FUN_0c0683b0(a4, (0xE8 + a4), ((((struct o0_float *)0xC06500C)->v)));
    if (((((struct o8_float *)0xC06500C)->v)) > t2) {
        (((struct o80_uint *)(a4))->v) = 0x0;
        FUN_0c068166(a4, (0xE8 + a4), 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        (((struct oFE_uchar *)(a4))->v) = ((*(signed char *)(((0xFE + a4) + 0x0))) & 0xFB);
        (((struct oFF_uchar *)(a4))->v) = ((*(signed char *)(((0xFF + a4) + 0x0))) & 0x7F);
    }
    (void)(FUN_0c065170(a4));
    return;
}

int FUN_0c067804(int a4)
{
    register int t0;
    register int t1;

    t0 = *(int *)((a4 + 0x4));
    *(unsigned int *)((t0 + 0x0)) = ((*(int *)((t0 + 0x0))) + (*(int *)((a4 + 0x8))));
    t0 = *(int *)((a4 + 0x4));
    *(unsigned int *)((t0 + 0x0)) = ((*(int *)((t0 + 0x0))) - ((int)((int)((*(int *)(((*(int *)((a4 + 0x0))) + 0x0))) * (*(int *)((a4 + 0xC)))) / (int)0x64)));
    t0 = *(int *)((a4 + 0x4));
    t1 = (int)((int)((*(int *)((t0 + 0x0))) * (*(int *)((a4 + 0x10)))) / (int)0x64);
    *(unsigned int *)((t0 + 0x0)) = t1;
    t0 = *(int *)((a4 + 0x0));
    *(unsigned int *)((t0 + 0x0)) = ((*(int *)((t0 + 0x0))) + (*(int *)(((*(int *)((a4 + 0x4))) + 0x0))));
    return t1;
}

int FUN_0c07e5f0(int a4)
{
    register int t0;
    register int t8;

    t0 = (((struct o4_int *)0xC147740)->v);
    if ((t0 & 4) != 0) {
        if ((*(int *)((a4 + 0x0))) == 0) {
            t8 = (((struct o9DC_int *)(((((struct o0_int *)0xC147740)->v))))->v);
            if ((t8 & 0x70000) != 0x10000) {
                if ((t8 & 0x70000) != 0x20000) {
                    if ((t8 & 0x70000) != 0x30000) {
                        
                        return FUN_0c07e598(a4);
                    }
                    *(unsigned int *)((a4 + 0x0)) = 0x3;
                    return (t8 & 0x70000);
                }
                *(unsigned int *)((a4 + 0x0)) = 0x2;
                return (t8 & 0x70000);
            }
            *(unsigned int *)((a4 + 0x0)) = 0x1;
            return (t8 & 0x70000);
        }
        return t0;
    }
    return FUN_0c07e57c(a4);
}

int ntInfExit(void)
{
    register int t10;

    if (((((struct o0_int *)0xC14773C)->v)) != 0) {
        FUN_0c160dbc();
        if ((((((struct o8_int *)0xC14773C)->v)) & 1) == 0) {
            free();
        }
        (((struct o0_uint *)0xC14773C)->v) = 0x0;
    }
    t10 = (((struct o4_int *)0xC14773C)->v);
    if (t10 != 0) {
        if ((((((struct o8_int *)0xC14773C)->v)) & 2) == 0) {
            free();
        }
        (((struct o4_uint *)0xC14773C)->v) = 0x0;
    }
    (((struct o8_uint *)0xC14773C)->v) = 0x0;
    return 0x0;
}

int FUN_0c07f0da(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t3;
    register int t7;
    register int t14;

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 0)) = a4;
    t0 = FUN_0c07e3d0(a4);
    if (t0 == 0) {
        FUN_0c07e57c(((int)stk + 0));
        t3 = FUN_0c07e4cc((*(int *)(((int)stk + 0))));
        if (t3 != 0) {
            return t3;
        }
        t7 = *(int *)(((int)stk + 4));
        if ((*(int *)(((int)stk + 0))) == 1) {
            t14 = ((((struct o2D4_int *)((*(int *)0xC147740)))->v));
        } else {
            t14 = ((((struct o52C_int *)((*(int *)0xC147740)))->v));
        }
        *(unsigned int *)((t7 + 0x0)) = t14;
        return 0x0;
    }
    return t0;
}

int FUN_0c07f05e(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t3;
    register int t7;
    register int t12;

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 0)) = a4;
    t0 = FUN_0c07e3d0(a4);
    if (t0 == 0) {
        FUN_0c07e57c(((int)stk + 0));
        t3 = FUN_0c07e4cc((*(int *)(((int)stk + 0))));
        if (t3 != 0) {
            return t3;
        }
        t7 = *(int *)(((int)stk + 4));
        if ((*(int *)(((int)stk + 0))) == 1) {
            t12 = (0x2D0 + (*(int *)0xC147740));
        } else {
            t12 = (0x528 + (*(int *)0xC147740));
        }
        *(unsigned int *)((t7 + 0x0)) = t12;
        return 0x0;
    }
    return t0;
}

int syCfgGetSoundMode(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    if (a4 != 0) {
        *(unsigned int *)((a4 + 0x0)) = 0x0;
        t0 = *(int *)0xC173808;
        if (t0 != 0) {
            t1 = syBtCfgSet(0x0, t0, a6);
            if (t1 != -1) {
                t0 = *(signed char *)0x8C00007E;
                if ((signed char)t0 == 0) {
                    *(unsigned int *)((a4 + 0x0)) = 0x0;
                    return 0x0;
                }
                if ((signed char)t0 == 1) {
                    *(unsigned int *)((a4 + 0x0)) = 0x1;
                    return 0x0;
                }
                return 0xFFFFFFFF;
            }
            return 0xFFFFFFFF;
        }
        return 0xFFFFFFFF;
    }
    return 0xFFFFFFFF;
}

int gdFsReopenHn(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;

    if ((a4 != 0) && (t0 = *(int *)((a4 + 0x0)), t1 = *(int *)((t0 + 0x1C)), t1 != a4)) {
        *(unsigned int *)((a4 + 0x4)) = a5;
        *(unsigned int *)((a4 + 0x8)) = a6;
        *(unsigned int *)((a4 + 0xC)) = a7;
        *(unsigned int *)((a4 + 0x10)) = ((int)(a7 + 0x7FF) >> 11);
        *(unsigned int *)((a4 + 0x14)) = 0x0;
        *(unsigned int *)((a4 + 0x18)) = 0x0;
        *(unsigned int *)((a4 + 0x1C)) = 0x0;
        *(unsigned int *)((a4 + 0x20)) = 0x0;
        *(unsigned int *)((a4 + 0x3C)) = 0x0;
        (((struct o44_uint *)(a4))->v) = 0x0;
        (((struct o48_ushort *)(a4))->v) = 0x0;
        (((struct o4A_ushort *)(a4))->v) = 0x0;
        (((struct o4C_ushort *)(a4))->v) = 0x1;
        (((struct o50_ushort *)(a4))->v) = 0x0;
        (((struct o52_ushort *)(a4))->v) = 0x0;
        return a4;
    }
    return 0x0;
}

int FUN_0c161634(int a4, int a5, int a6)
{
    register int t0;

    if ((int)a5 < (int)0x10) {
        return 0xFFFFFFFF;
    }
    t0 = *(short *)((a4 + 0x0));
    if ((unsigned short)((unsigned char)((int)(unsigned short)t0 >> 8) | (((unsigned short)t0 << 8) & 0xFF00)) != 0x8001) {
        return 0xFFFFFFFE;
    }
    t0 = *(short *)((a4 + 0x2));
    *(unsigned short *)((a6 + 0x0)) = (((unsigned char)((int)t0 >> 8) | ((t0 << 8) & 0xFFFFFF00)) + 0x4);
    return 0x0;
}

int mwRnaStart(int a4)
{
    int stk[2];

    if (a4 == 0) {
        *(int *)((int)stk + 0) = 0xC171714;
        return (FUN_0c16ada2(0xC171714));
    }
    FUN_0c16ad54(((int)stk + 4));
    if ((*(signed char *)((a4 + 0x1))) != 0) {
        mwRnaStop(a4);
    }
    *(unsigned char *)((a4 + 0x1)) = 0x4;
    (((struct o40_uint *)(a4))->v) = ((((struct o44_int *)(a4))->v));
    mwRnaSetTransSw();
    return (FUN_0c16ad6c(((int)stk + 4)));
}

int mwSbSetPan(int a4, int a5, int a6)
{
    register int t1;

    *(unsigned int *)((((a5 << 2) + (a4 + 0x40)) + 0x0)) = a6;
    t1 = a6;
    if ((int)a6 < 0) {
        t1 = (0x10 | (-a6));
    }
    if ((*(int *)((a4 + 0x18))) == 0) {
        return FUN_0c07d22e((*(int *)(((*(int *)((a4 + 0x1C))) + 0x4))), a5, t1);
    }
    return FUN_0c07d42a((*(short *)((a4 + 0x6))), a5, t1);
}

int FUN_0c01ca48(void)
{
    int stk[2];
    register int t1;
    register int t12;

    t1 = *(int *)0xC1EC71C;
    if ((*(int *)0xC11D048) != t1) {
        *(unsigned int *)0xC11D048 = t1;
        FUN_0c01ff48((*(int *)0xC1EC71C), 0x0);
        FUN_0c048d70((*(int *)0xC1EC71C));
    } else {
        FUN_0c020244();
    }
    FUN_0c020176();
    FUN_0c0200f0((*(int *)0xC1EC71C), 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    t12 = *(int *)0xC1EC71C;
    if (t12 == 1) {
        return FUN_0c05efcc();
    }
    return t12;
}



int FUN_0c02f1bc(void)
{
    register int t0;

    t0 = 0xC2783A0;
    for (;;) {
        *(unsigned int *)((t0 + 0x18)) = 0xFFFFFFFF;
        t0 = (t0 + 0x24);
        if ((unsigned int)t0 >= (unsigned int)0xC279048) {
            break;
        }
    }
    (((struct o10_uint *)0xC279048)->v) = 0x0;
    (((struct oC_uint *)0xC279048)->v) = 0x0;
    (((struct o8_uint *)0xC279048)->v) = 0x0;
    (((struct o4_uint *)0xC279048)->v) = 0x0;
    (((struct o0_uint *)0xC279048)->v) = 0x0;
    nlLineBlendFunc(0x1, 0x4);
    FUN_0c078890((1.0f + 1.0f));
    t0 = FUN_0c078880((*(float *)0xC02F2D4));
    (((struct o14_uint *)0xC279048)->v) = 0x0;
    return t0;
}


int FUN_0c068304(int a4, int a5, int a6, int a7)
{
    register int t3;
    register int t6;

    t3 = (int)((int)(((int (*)(int, int, int, int))((*(int *)((((*(int *)0xC1EC740) << 2) + 0xC110374)))))(a4, a5, a6, a7)) % (int)0x28);
    t6 = FUN_0c05f470(a4, (*(int *)(((((*(int *)((a4 + 0x10))) - 35) << 2) + 0xC10EAD8))), (float)t3, 10.0f);
    *(unsigned int *)((a4 + 0xC)) = 0x1;
    *(unsigned int *)((a4 + 0x3C)) = ((*(int *)((a4 + 0x3C))) | 0x80000000);
    return t6;
}

int nlTriPutSetPoint(int a4, int a5, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    int stk[2];

    (((struct o4_float *)(((int)stk + 0)))->v) = f4;
    *(float *)(((int)stk + 0)) = f11;
    *(unsigned int *)((((((a5 << 2) << 2) << 1) + (a4 + 0x70)) + 0x0)) = ((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) | 0x1);
    (((struct o4_float *)(((((a5 << 2) << 2) << 1) + (a4 + 0x70))))->v) = f5;
    (((struct o8_float *)(((((a5 << 2) << 2) << 1) + (a4 + 0x70))))->v) = f6;
    (((struct oC_float *)(((((a5 << 2) << 2) << 1) + (a4 + 0x70))))->v) = f7;
    (((struct o10_float *)(((((a5 << 2) << 2) << 1) + (a4 + 0x70))))->v) = f8;
    (((struct o14_float *)(((((a5 << 2) << 2) << 1) + (a4 + 0x70))))->v) = f9;
    (((struct o18_float *)(((((a5 << 2) << 2) << 1) + (a4 + 0x70))))->v) = f10;
    *(unsigned int *)(((((((a5 << 2) << 2) << 1) + (a4 + 0x70)) + 0x1C) + 0x0)) = (0x1 | (*(int *)((((int)stk + 0) + 0x0))));
    return 0x18;
}

int buDeleteFileEx(int a4, int a5, int a6)
{
    register int t0;

    t0 = vmsfs_c_getstate(a4);
    if (t0 != 0) {
        return 0xFFFFFFFF;
    }
    vmsfs_c_setparam(a4, a4, a5, a6, 0x0, 0x0, 0x0);
    vmsfs_c_setfunc(a4, 0x11);
    return 0x0;
}

int FUN_0c07d54c(int a4, int a5, int a6)
{
    int stk[2];
    register int t0;

    *(unsigned short *)(((int)stk + 0)) = a6;
    t0 = *(signed char *)((0xC2C3EA8 + (unsigned char)((unsigned short)a4 * (unsigned short)0x1C)));
    if (t0 == 1) {
        *(unsigned int *)(((int)stk + 4)) = ((((short)a4 << 8) << 2) << 2);
        FUN_0c07c8be(((((((short)a4 << 8) << 2) << 2) | ((short)a5 << 16)) | 0xAA1));
        return FUN_0c07c8be(((((*(short *)(((int)stk + 0))) << 16) | (*(int *)(((int)stk + 4)))) | 0xBA1));
    }
    return t0;
}

int FUN_0c08f824(int a4, int a5, int a6, int a7)
{
    int stk[5];
    register int t0;
    register int t2;

    *(unsigned int *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned short *)(((((int)stk + 0) + 0x6) + 0x0)) = a6;
    t0 = *(int *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 0)) = ((t0 * 0x154) + 0xC2C8D2C);
    t2 = *(int *)(((*(int *)((((t0 * 0x154) + 0xC2C8D2C) + 0x1C))) + 0x0));
    if ((int)(*(int *)(((int)stk + 8))) > (int)t2) {
        return t2;
    }
    return (((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC2C8D28) + 0x10)))))((*(int *)(((*(int *)(((int)stk + 0))) + 0x24))), ((*(int *)(((int)stk + 8))) << 1), (*(short *)(((int)stk + 6))), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
}

int syRtcGetDate(int a4)
{
    register int t1;

    if ((((((struct o4_int *)0xC2D12E8)->v)) & 0x1) == 1) {
        t1 = FUN_0c14cdfc();
        syRtcCountToDate(t1, a4);
        (((struct o0_uint *)0xC2D12E8)->v) = t1;
    } else {
        syRtcCountToDate(((((struct o0_int *)0xC2D12E8)->v)), a4);
    }
    *(volatile signed char *)((a4 + 0x3));
    *(unsigned char *)((a4 + 0x7)) = (syRtcMakeDayOfWeek((*(short *)((a4 + 0x0))), (*(signed char *)((a4 + 0x2)))));
    *(unsigned char *)((a4 + 0x8)) = (syRtcMakeAgeOfMoon());
    return ((((struct o4_int *)0xC2D12E8)->v));
}

int FUN_0c14e1ec(int a4, int a5)
{
    register int t3;

    FUN_0c14e8e4(a4);
    ADXCRS_Lock();
    t3 = FUN_0c162394(a5, (*(int *)((a4 + 0x10))));
    *(unsigned int *)((a4 + 0x8)) = t3;
    if (t3 == 0) {
        ADXCRS_Unlock();
        FUN_0c1616f4(0xC17048C, a5);
    } else {
        adxt_start_stm(a4);
        (((struct o98_uchar *)(a4))->v) = 0x0;
    }
    return ADXCRS_Unlock();
}

int FUN_0c14fec0(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    if ((*(int *)((a4 + 0x4))) != 0) {
        t0 = ADXSTM_Close((*(int *)((a4 + 0x4))));
        *(unsigned int *)((a4 + 0x4)) = 0x0;
        t1 = t0;
    }
    t0 = t1;
    if ((*(int *)((a4 + 0x8))) != 0) {
        t1 = *(signed char *)((a4 + 0x2));
        t0 = t1;
        if (t1 == 0) {
            if ((*(int *)0xC2D25F4) == 1) {
                ADXF_Ocbi((*(int *)((a4 + 0x24))), (*(int *)((a4 + 0x28))));
            }
            t1 = *(int *)((a4 + 0x8));
            t0 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0xC)))))(t1, a5, a6, a7);
            *(unsigned int *)((a4 + 0x8)) = 0x0;
        }
    }
    return t0;
}

void kmiRegisterPhIntHandler(int a4)
{
    register int t0;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    (((struct o224_uint *)(((int)_builtin_get_vbr())))->v) = a4;
    (((struct o30_uint *)0xA05F6900)->v) = 0x0;
    (((struct o38_uint *)0xA05F6900)->v) = 0x0;
    (((struct o0_uint *)0xA05F6900)->v) = 0xFFFFFFFF;
    (((struct o8_uint *)0xA05F6900)->v) = 0xFFFFFFFF;
    (((struct o30_uint *)0xA05F6900)->v) = 0x2807EC;
    (((struct o38_uint *)0xA05F6900)->v) = 0xE;
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
}

int gdFsSeek(int a4, int a5, int a6)
{
    register int t4;
    register int t5;

    if (a4 != 0) {
        if (((((struct o4C_short *)(a4))->v)) == 0) {
            return 0xFFFFFFF6;
        }
        t4 = *(int *)((a4 + 0x10));
        if (a6 != 0) {
            if (a6 != 1) {
                if (a6 != 2) {
                    return 0xFFFFFFF0;
                }
                if (((int)(a5 + t4) >= 0) && ((int)(a5 + t4) <= (int)t4)) {
                    *(unsigned int *)((a4 + 0x14)) = (a5 + t4);
                    return 0x0;
                }
                return 0xFFFFFFEF;
            }
            t5 = *(int *)((a4 + 0x14));
            if (((int)(t5 + a5) >= 0) && ((int)(t5 + a5) <= (int)t4)) {
                *(unsigned int *)((a4 + 0x14)) = (t5 + a5);
                return 0x0;
            }
            return 0xFFFFFFEF;
        }
        if (((int)a5 >= 0) && ((int)a5 <= (int)t4)) {
            *(unsigned int *)((a4 + 0x14)) = a5;
            return 0x0;
        }
        return 0xFFFFFFEF;
    }
    return 0xFFFFFFF6;
}

int FUN_0c1617e0(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    FUN_0c16172e(a4, a6, a7);
    t0 = strlen(a6);
    strncat(a6, 0xC171560, ((a7 - t0) - 1));
    t0 = strlen(a6);
    t1 = strlen(a6);
    return FUN_0c16172e(a5, (a6 + t1), ((-t0) + 0x4));
}

int adxt_eos_entry(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t2;
    register int t8;

    t0 = *(int *)((a4 + 0x8));
    t2 = FUN_0c16205a((*(int *)((a4 + 0x4))), a5, a6, a7);
    if ((*(signed char *)((a4 + 0x6C))) == 0) {
        ADXSJD_SetTrapNumSmpl((*(int *)((a4 + 0x4))), 0xFFFFFFFF);
        return ADXSTM_SetEos((*(int *)((a4 + 0x8))), 0x7FFFFFFF);
    }
    t8 = t2;
    if ((int)t2 < 0) {
        t8 = (t2 + 0x7FF);
    }
    return FUN_0c16243a(t0, ((int)t8 >> 11));
}

int FUN_0c165b1c(void)
{
    int stk[1];
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t8;
    register int t9;

    FUN_0c16ba68(((int)stk + 0));
    t1 = 0xC309460;
    t2 = 0xC309460;
    t3 = 0xC309460;
    t4 = 0xC309460;
    for (;;) {
        if ((*(signed char *)((t4 + 0x0))) == 1) {
            t1 = t3;
            FUN_0c16bdaa(t1);
        } else {
            t8 = t1;
            t9 = t2;
        }
        t4 = (t4 + 0x438);
        t1 = t8;
        t2 = t9;
        t3 = (t3 + 0x438);
        if ((unsigned int)t4 >= (unsigned int)0xC30B620) {
            break;
        }
    }
    return (FUN_0c16ba80(((int)stk + 0)));
}

int set_event(int a4, int a5)
{
    register int t0;
    register int t1;

    t0 = a4;
    if ((unsigned int)a4 < (unsigned int)0x14) {
        t0 = 0x14;
    }
    t1 = nlMalloc(t0);
    if (t1 != 0) {
        t0 = (((struct o4_int *)0xC177ED4)->v);
        if (t0 == 0) {
            (((struct o0_uint *)0xC177ED4)->v) = t1;
        } else {
            *(unsigned int *)((t0 + 0x8)) = t1;
        }
        *(unsigned int *)((t1 + 0x4)) = ((((struct o4_int *)0xC177ED4)->v));
        *(unsigned int *)((t1 + 0x8)) = 0x0;
        *(unsigned int *)((t1 + 0xC)) = a5;
        *(unsigned int *)((t1 + 0x0)) = 0x0;
        *(unsigned int *)((t1 + 0x10)) = 0xC097164;
        (((struct o4_uint *)0xC177ED4)->v) = t1;
        *(unsigned int *)0xC1A7EF8 = ((*(int *)0xC1A7EF8) + 0x1);
    }
    return t1;
}

int isPosInArea(int a4, int a5)
{
    register int t4;
    register int t5;
    register float u6;
    register float u7;
    register float u8;
    register float u9;
    register float u10;
    register float u11;

    t4 = a5;
    t5 = 0x4;
    u6 = (((((struct o4_float *)((a5 + 0x18)))->v)) - ((((struct o8_float *)(a4))->v)));
    u7 = (((((struct o18_float *)(a5))->v)) - (*(float *)((a4 + 0x0))));
    for (;;) {
        if (t5 == 0) {
            return 0x1;
        }
        u8 = *(float *)((t4 + 0x0));
        u9 = *(float *)((a4 + 0x0));
        u10 = (((struct o8_float *)(a4))->v);
        u11 = (((struct o4_float *)(t4))->v);
        u6 = (u6 * (u8 - u9));
        u7 = (u7 * (u11 - u10));
        u7 = (u7 - u6);
        if (0.0f > u7) {
            break;
        }
        t4 = (t4 + 0x8);
        u7 = (u8 - u9);
        t5 = (t5 - 1);
        u6 = (u11 - u10);
    }
    return 0x0;
}

float colliBoxAhead(int a4, int a5, int a6)
{
    int stk[6];
    register float t5;

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 0)) = a6;
    *(unsigned int *)(((int)stk + 8)) = (*(int *)((a4 + 0x28)));
    nlSubVector3op((((int)stk + 0) + 0xC), (*(int *)(((int)stk + 4))), a4);
    FUN_0c073e10((((int)stk + 0) + 0xC));
    t5 = FUN_0c073b40((((int)stk + 0) + 0xC), (*(int *)(((int)stk + 8))));
    if (t5 > (*(float *)0xC02B390)) {
        *(unsigned int *)((a4 + 0x24)) = ((*(int *)((a4 + 0x24))) | ((int)0x1 << (int)(*(int *)(((int)stk + 0)))));
    }
    return t5;
}

int FUN_0c04bf14(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = (((struct o0_int *)0xC2ADEC4)->v);
    if ((int)t0 < 0) {
        (((struct oC_uint *)0xC2ADEC4)->v) = 0xFFFFFFFF;
    } else {
        t1 = *(int *)(((t0 << 2) + (*(int *)0xC2ADF18)));
        t0 = 0xC2ADED0;
        for (;;) {
            *(unsigned int *)((t0 + 0x0)) = 0xFFFFFFFF;
            t0 = (t0 + 0x4);
            if ((unsigned int)t0 > (unsigned int)0xC2ADF08) {
                break;
            }
        }
        t0 = 0xC2ADEC4;
        t2 = 0x0;
        t3 = t1;
        for (;;) {
            t4 = *(short *)((t3 + 0x0));
            if (t4 == -1) {
                t1 = t4; break;
            }
            t4 = t2;
            t2 = (t2 + 0x1);
            t0 = (*(short *)((t3 + 0x0)));
            t3 = (t3 + 0x2);
            *(unsigned int *)((0xC2ADED0 + (t4 << 2))) = t0;
            if ((int)t2 < (int)0xE) continue;
            t1 = (t4 << 2); break;
        }
        t0 = t1;
    }
    return t0;
}

int FUN_0c058424(void)
{
    register int t8;
    register int t0;
    register int t1;

    t8 = 0xFFFFFFFF;
    if ((unsigned int)0xC10CE5C < (unsigned int)0xC10CE6C) {
        t0 = 0xC10CE5C;
        t1 = 0xC10CE5C;
        for (;;) {
            FUN_0c058000((*(int *)((t1 + 0x0))));
            if (((*(int *)(((*(int *)(((*(int *)0xC2B32C0) + 0x30))) + 0x0))) & 0x1) != 0) {
                break;
            }
            t1 = (t1 + 0x4);
            t0 = (t0 + 0x4);
            if ((unsigned int)t1 >= (unsigned int)0xC10CE6C) {
                return 0xFFFFFFFF;
            }
        }
        t8 = (*(int *)((t0 + 0x0)));
    }
    return t8;
}

int FUN_0c061fba(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    *(unsigned int *)((a4 + 0x10)) = 0x8;
    (((struct o63_uchar *)(a4))->v) = ((*(signed char *)(((a4 + 0x63) + 0x0))) | 0x80);
    *(unsigned int *)((a4 + 0x14)) = (0x2 - a5);
    *(unsigned int *)((a4 + 0x18)) = a6;
    t0 = *(signed char *)(((a4 + 0x63) + 0x0));
    (((struct o63_uchar *)(a4))->v) = (t0 & 0xEF);
    t1 = (t0 & 0xEF);
    t0 = (a4 + 0x63);
    t2 = 0x0;
    for (;;) {
        if ((int)t2 >= (int)(*(int *)((a4 + 0x4)))) {
            break;
        }
        t0 = t2;
        t3 = 0xFE;
        t0 = (t0 << 8);
        t0 = (t0 + (*(int *)((a4 + 0x0))));
        t3 = (t3 + t0);
        t1 = (*(signed char *)((t3 + 0x0)));
        t2 = (t2 + 0x1);
        t1 = (t1 & 0xFE);
        *(unsigned char *)((t3 + 0x0)) = t1;
    }
    return FUN_0c06ce0a(a4);
}

void sys_init(void)
{
    int stk[2];
    register int t0;
    register int t1;

    (((struct o0_uint *)0xFFA00020)->v) = 0x0;
    (((struct oC_uint *)0xFFA00020)->v) = 0x1201;
    (((struct o20_uint *)0xFFA00020)->v) = 0x8201;
    t0 = 0x1201;
    for (;;) {
        t1 = (((struct o20_int *)0xFFA00020)->v);
        *(unsigned int *)(((int)stk + 4)) = t1;
        if (t1 == 0x8201) {
            break;
        }
        *(unsigned int *)(((int)stk + 0)) = 0x0;
        for (;;) {
            if ((int)(*(int *)(((int)stk + 0))) >= (int)0x10000) {
                break;
            }
            t0 = (*(int *)(((int)stk + 0)));
            t0 = (t0 + 0x1);
            *(unsigned int *)(((int)stk + 0)) = t0;
        }
        (((struct o20_uint *)0xFFA00020)->v) = 0x8201;
    }
}


int buDefragDisk(int a4, int a5)
{
    register int t0;

    t0 = vmsfs_c_getstate(a4);
    if (t0 != 0) {
        return 0xFFFFFFFF;
    }
    vmsfs_c_setparam(a4, a4, a5, 0x0, 0x0, 0x0, 0x0);
    vmsfs_c_setfunc(a4, 0x9);
    return 0x0;
}

int FUN_0c0778d8(int a4, int a5)
{
    register int t0;

    t0 = vmsfs_c_getstate(a4);
    if (t0 != 0) {
        return 0xFFFFFFFF;
    }
    vmsfs_c_setparam(a4, a4, a5, 0x0, 0x0, 0x0, 0x0);
    vmsfs_c_setfunc(a4, 0xF);
    return 0x0;
}

int FUN_0c077938(int a4, int a5)
{
    register int t0;

    t0 = vmsfs_c_getstate(a4);
    if (t0 != 0) {
        return 0xFFFFFFFF;
    }
    vmsfs_c_setparam(a4, a4, a5, 0x0, 0x0, 0x0, 0x0);
    vmsfs_c_setfunc(a4, 0x10);
    return 0x0;
}

int FUN_0c07e83e(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t19;
    register int t3;

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 0)) = a4;
    t0 = FUN_0c07e3d0(a4);
    t19 = t0;
    if (t0 == 0) {
        FUN_0c07e57c(((int)stk + 0));
        t3 = *(int *)0xC147740;
        if ((*(int *)(((int)stk + 0))) == 1) {
            *(unsigned int *)(((*(int *)(((int)stk + 4))) + 0x0)) = (t3 + 0x4);
            t19 = t0;
        } else {
            t19 = 0xFFFFFFFD;
            if ((*(int *)(((int)stk + 0))) == 2) {
                *(unsigned int *)(((*(int *)(((int)stk + 4))) + 0x0)) = (0x168 + t3);
                t19 = t0;
            }
        }
    }
    return t19;
}

int _lsfts(int a4, int a5, int a6)
{
    register int t10;
    register int t0;
    register int t1;
    register int t3;

    if ((short)(0x8 - a6) != 0) {
        t10 = 0x0;
        if ((unsigned int)((a5 - 1) + a4) >= (unsigned int)a4) {
            t0 = ((a5 - 1) + a4);
            t1 = 0x0;
            for (;;) {
                t3 = *(signed char *)((t0 + 0x0));
                *(unsigned char *)((t0 + 0x0)) = ((unsigned int)(*(signed char *)((t0 + 0x0))) << (int)(short)a6);
                *(unsigned char *)((t0 + 0x0)) = ((*(signed char *)((t0 + 0x0))) | t1);
                t0 = (t0 - 1);
                t1 = (unsigned char)(t3 & ((int)0xFF << (int)(short)(0x8 - a6)));
                t1 = ((unsigned int)t1 << (int)(-(short)(0x8 - a6)));
                if ((unsigned int)t0 < (unsigned int)a4) {
                    break;
                }
            }
            t10 = t1;
        }
        if ((unsigned char)t10 != 0) {
            return 0x1;
        }
        return 0x0;
    }
    return 0;
}

int _rsft(int a4, int a5)
{
    register int t17;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t6;
    register int t0;

    t17 = 0x0;
    if ((int)a5 > 0) {
        t1 = (0x0 + a4);
        t2 = (0x0 + a4);
        t3 = 0x0;
        t4 = 0x0;
        for (;;) {
            t6 = *(signed char *)((t1 + 0x0));
            *(unsigned char *)((t1 + 0x0)) = ((unsigned int)(unsigned char)(*(signed char *)((t1 + 0x0))) >> 1);
            if (t3 != 0) {
                t0 = (*(signed char *)((t2 + 0x0)));
                t0 = (t0 | 0x80);
                *(unsigned char *)((t2 + 0x0)) = t0;
            }
            t4 = (t4 + 0x1);
            t3 = ((unsigned char)t6 & 0x1);
            t2 = (t2 + 0x1);
            t1 = (t1 + 0x1);
            if ((int)t4 >= (int)a5) {
                break;
            }
        }
        t17 = t3;
    }
    return t17;
}

int gdFsGetDirInfoG(int a4, int a5)
{
    register int t2;
    register int t4;

    t2 = gdFsSearchName(a4, (*(int *)(((*(int *)0xC1737EC) + 0x10))), 0x0);
    if (t2 == 0) {
        return 0xFFFFFFF8;
    }
    t4 = *(int *)(((*(int *)0xC1737EC) + 0x10));
    *(unsigned int *)((a5 + 0x0)) = ((*(int *)((((t4 + 0x10) + ((t2 - 1) * 0x2C)) + 0x0))) + 0x96);
    *(unsigned int *)((a5 + 0x4)) = (*(int *)((((t4 + 0x10) + ((t2 - 1) * 0x2C)) + 0x4)));
    *(unsigned char *)((a5 + 0x8)) = (*(signed char *)((((t4 + 0x10) + ((t2 - 1) * 0x2C)) + 0x8)));
    return 0x0;
}

int FUN_0c14ce88(int a4)
{
    int stk[5];
    register int t0;

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(int *)((int)stk + 4) = 0x1;
    *(int *)((int)stk + 0) = 0x1;
    t0 = syG2Read(0xA0710000, (((int)stk + 8) + 0x4), 0x4, 0x2, 0x1, 0x1);
    if (t0 != 0) {
        return 0xFFFFFFFF;
    }
    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x0)) = ((((*(int *)(((((int)stk + 8) + 0x4) + 0x0))) << 16) & 0xFFFF0000) | (unsigned short)(*(int *)(((((int)stk + 8) + 0x4) + 0x4))));
    return 0x0;
}

int FUN_0c14f248(void)
{
    memset(0xC2D1BF4, 0x0, 0x600);
    memset(0xC2D21F4, 0x0, 0x400);
    memset(0xC2D25F8, 0xFF, 0x1000);
    memset(0xC2D35F8, 0x0, 0x20);
    (((struct o0_uint *)0xC2D3618)->v) = 0x0;
    *(unsigned int *)0xC2D25F4 = 0x0;
    (((struct o4_uint *)0xC2D3618)->v) = 0x0;
    (((struct o8_uint *)0xC2D3618)->v) = 0x0;
    (((struct oC_uint *)0xC2D3618)->v) = 0xFFFFFFFF;
    return 0xFFFFFFFF;
}

void syChainMasterHandlerPVR_V(int a4, int a5, int a6, int a7)
{
    register int t2;
    register int t5;

    _builtin_set_imask(0x6);
    t2 = (*(int *)0xC3020A0);
    for (;;) {
        if (t2 == 0) {
            break;
        }
        t5 = ((int (*)(int, int, int, int))((*(int *)((t2 + 0x0)))))((*(int *)((t2 + 0x8))), a5, a6, a7);
        t2 = (*(int *)((t2 + 0x4)));
    }
}

int syG2DmaIsBusy(int a4, int a5)
{
    register int t0;
    register int t6;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    t6 = 0x0;
    if (((*(int *)(((((((*(int *)((a4 + 0x0))) << 2) << 2) << 1) + (*(int *)(((*(int *)0xC1743EC) + 0x0)))) + 0x18))) & 1) != 0) {
        t6 = 0x1;
    }
    *(unsigned int *)((a5 + 0x0)) = t6;
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
    return 0x0;
}

int syTmrGenCancelInt(void)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)0xFFD80004;
    t1 = *(signed char *)0xFFD80004;
    (((struct o0_uchar *)0xFFD80004)->v) = (t1 & 0xFB);
    (((struct o24_ushort *)0xFFD80004)->v) = (((((struct o24_short *)0xFFD80004)->v)) & 0xFFFFFFDF);
    (((struct o0_uchar *)0xFFD80004)->v) = t0;
    return (t1 & 0xFB);
}

int kdDevGetControllerInfo(int a4, int a5)
{
    register int t0;

    t0 = kdDevGetFD(a5, 0x1);
    if (t0 == 0) {
        return 0xFFFFFFFF;
    }
    *(unsigned int *)((a4 + 0x0)) = (((((unsigned char)(*(signed char *)((t0 + 0x1))) << 16) | ((unsigned char)(*(signed char *)((t0 + 0x2))) << 8)) | (((unsigned char)(*(signed char *)((t0 + 0x0))) << 16) << 8)) | (unsigned char)(*(signed char *)((t0 + 0x3))));
    return 0x0;
}

int kdDevGetSIPInfo(int a4, int a5)
{
    register int t0;

    t0 = kdDevGetFD(a5, 0x10);
    if (t0 == 0) {
        return 0xFFFFFFFF;
    }
    *(unsigned int *)((a4 + 0x0)) = (((((unsigned char)(*(signed char *)((t0 + 0x1))) << 16) | ((unsigned char)(*(signed char *)((t0 + 0x2))) << 8)) | (((unsigned char)(*(signed char *)((t0 + 0x0))) << 16) << 8)) | (unsigned char)(*(signed char *)((t0 + 0x3))));
    return 0x0;
}

int kdDevGetGunInfo(int a4, int a5)
{
    register int t0;

    t0 = kdDevGetFD(a5, 0x20);
    if (t0 == 0) {
        return 0xFFFFFFFF;
    }
    *(unsigned int *)((a4 + 0x0)) = (((((unsigned char)(*(signed char *)((t0 + 0x1))) << 16) | ((unsigned char)(*(signed char *)((t0 + 0x2))) << 8)) | (((unsigned char)(*(signed char *)((t0 + 0x0))) << 16) << 8)) | (unsigned char)(*(signed char *)((t0 + 0x3))));
    return 0x0;
}

int SJMEM_GetNumData(int a4, int a5, int a6, int a7)
{
    int t0;

    if (a5 == 1) {
        return (*(int *)((a4 + 0xC)));
    }
    if ((a5 != 0) && (t0 = *(int *)((a4 + 0x1C)), t0 != 0)) {
        t0 = ((int (*)(int, int, int, int))((*(int *)((a4 + 0x1C)))))((*(int *)((a4 + 0x20))), 0xFFFFFFFD, a6, a7);
    }
    return 0x0;
}

int FUN_0c02274c(void)
{
    (((struct o0_float *)0xC270948)->v) = ((((struct o0_float *)0xC02284C)->v));
    (((struct o4_float *)0xC270948)->v) = ((((struct o4_float *)0xC02284C)->v));
    (((struct o8_float *)0xC270948)->v) = ((((struct o8_float *)0xC02284C)->v));
    (((struct oC_float *)0xC270948)->v) = 1.0f;
    (((struct o10_float *)0xC270948)->v) = 1.0f;
    (((struct o14_float *)0xC270948)->v) = 0.0f;
    (((struct o18_float *)0xC270948)->v) = 0.0f;
    (((struct o1C_float *)0xC270948)->v) = 1.0f;
    (((struct o20_float *)0xC270948)->v) = 1.0f;
    (((struct o24_uint *)0xC270948)->v) = 0x0;
    (((struct o30_uint *)0xC270948)->v) = 0x200A;
    (((struct o28_float *)0xC270948)->v) = 1.0f;
    (((struct o2C_uint *)0xC270948)->v) = 0x2;
    return 0x2C;
}

int FUN_0c022884(int a4)
{
    register float t2;
    register int t3;

    t2 = nlRoundUp((((float)a4 / ((((struct o0_float *)0xC022974)->v))) * ((((struct o4_float *)0xC022974)->v))));
    t3 = (int)((int)(int)t2 / (int)0x1770);
    return ((t3 * 0x2710) + ((int)t2 - (t3 * 0x1770)));
}

int Init_Standard(void)
{
    (((struct o0_float *)0xC2B2684)->v) = ((((struct o0_float *)0xC04FDA4)->v));
    (((struct o4_float *)0xC2B2684)->v) = ((((struct o4_float *)0xC04FDA4)->v));
    (((struct o8_float *)0xC2B2684)->v) = ((((struct o8_float *)0xC04FDA4)->v));
    (((struct oC_float *)0xC2B2684)->v) = 1.0f;
    (((struct o10_float *)0xC2B2684)->v) = 1.0f;
    (((struct o1C_float *)0xC2B2684)->v) = 1.0f;
    (((struct o20_float *)0xC2B2684)->v) = 1.0f;
    (((struct o28_float *)0xC2B2684)->v) = 1.0f;
    (((struct o14_float *)0xC2B2684)->v) = 0.0f;
    (((struct o18_float *)0xC2B2684)->v) = 0.0f;
    (((struct o24_uint *)0xC2B2684)->v) = 0x0;
    (((struct o30_uint *)0xC2B2684)->v) = 0xA;
    (((struct o2C_uint *)0xC2B2684)->v) = 0x2;
    return 0x1C;
}
