/* Library code: C that behaves like this game's own bytes. */
/* Straight-line functions with calls and guards (batch gen_y): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXB_CopyExtraBufMono(int, int, int, int);
int ADXB_CopyExtraBufSte(int, int, int, int);
int ADXB_EvokeExpandMono(int, int);
int ADXB_EvokeExpandSte(int, int);
int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int ADXF_Close(int);
int ADXPD_GetNumBlk(int);
int ADXRNA_GetTime(int, int, int);
int ADXSTM_GetCurOfst(int, int);
int ADXT_SetOutVol(int, int);
int CalcShadow4Normal(int, int);
int gdc_GetStreamSongRemainTime(int);
int gdc_GetVolGainMute(int);
int gdc_PlayStreamSongDisk(void);
int ReturnBreakPinNum(void);
int ReturnBreakPin(int);
int SetScreen(int);
int SetWindow(int);
int menuChangeValue(int, int, int);
int putMenuValue(int, int, int, int);
int PutRecords(int, int, int, int, int, int, float, float);
int CheckBoxFlag(int);
int Init_Remain_Time(void);
int Init_TotalDrum(void);
int Init_Shift(void);
int End_Pass_Default2_Sprite(void);
int Start_Pass_Ranking(void);
int rankingCalcDigitRoll(int, int);
int Put_TotalDrum_SetDigits(int, int);
int Put_TotalDrum(void);
int hudUpdateFareState(void);
int hudSplitFareDigits(int, int);
int hudDrawFare(void);
int Money_Array(int, int, int);
int Result_Drop_Lowest_Rank(void);
int Init_Result_Standard_Sprite(void);
int Init_Result_Parm(void);
int Result_Insert_Rank(void);
int Start_Bowling_Message(void);
int Reset_Bowling_Timer(void);
int Start_CrazyBox_Voice(int);
int nlPrintInitFontTexture(void);
int nlInitMatrixStack(int, int, int);
int nlMatrixMode(int);
int nlsndBlockMove(int, int, int);
int nlsndBlockMoveStatus(void);
int nlsndCheckPackLoadError(int, int);
int nlsndPackLoadInit(int, int, int, int);
int nlsndSeqRequest(int);
int nlsndStreamSetHdVol(int, int, int);
int nlsndStreamChgVol(int, int, int);
int nlsndStreamTranspose(int, int);
int nlsndStreamDetune(int, int);
int memcmp(int, int, int);
int vsprintf(int, int, int);
int kmiBGPlaneSetPCW(int, int, int);
int kmiBGPlaneCountWords(int);
int kmiBGPlanePutWord(int, int, int);
int kmiBGPlanePutColor(int, int, int);
int kmiFBallocSub(int, int, int);
int kmytex_ABSalloc(int, int, int, int, int, int);
int kmiMemCopy4(int, int, int);
int kmiPurgeCache(int);
int kmiModuleInitialize(void);
int kmtex_CheckTextureFormat(int, int, int, int);
int ADXSJD_GetSfreq(int);
int ADXSJD_GetOutBps(int);
int ADXSJD_GetTotalNumSmpl(int);
int ADXSTM_GetStat(int);
int syBtFlGetInfo(int, int);
int syBtFlRead(int, int, int);
int fmMngClearBuf(int, int);
int fmMngReadSctAllData(int);
int adxb_DecodeInfoAiffSub(int, int, int, int, int);
int GetCollision2D(int, int, float);
int GetMenuMode(int);
int Sound_Request(int, int);
int Voice_Request(int, int, int, int);
int adxf_CloseSjStm(int);
int adxf_CreateAdxFs(void);
int adxf_SetAfsFileInfo(int, int, int);
int adxf_SetCmdHstry(int, int, int, int, int);
int adxf_SetFileInfo(int, int);
int buGetFileInfo(int, int, int);
int buIsFormat(int);
int buIsReady(int);
int buStat(int);
int camSetAngles(int, int, int, int);
int camSetMode(int);
int check_file_correct(int, int);
int check_isopen(int, int);
int direntry(int, int);
int extRand(void);
int gdc_StopStreamSongAll(void);
int get_fat(int, int);
int kdSetBlockWrite(int, int, int, int, int, int, int);
int kmActivateFrameBuffer(int, int, int, int);
int kmCreateFrameBufferSurface(int, int, int, int, int);
int kmCreateTABuffer(int, int);
int kmCreateTextureSurface(int);
int kmCreateVertexBuffer(int, int, int, int, int);
int kmLoadTexture(int, int, int, int);
int kmiCopyFromFrameBuffer(int, int, int);
int kmiCopyToFrameBuffer(int, int, int);
int kmiCreateRegionArray(int, int, int, int, int, int);
int kmiDMAtoTARequest(int, int, int, int, int);
int kmiDefaultInterruptHandler(int);
int kmiFBfree(int);
int kmiFBinit(void);
int kmiInitInterrupt(void);
int kmiInitializeDevice(void);
int kmiInitializeFog(void);
int kmiInitializeTA(void);
int kmiReadRegister(int);
int kmiSetTAEnvironment(int, int, int, int, int);
int kmiTXalloc(int, int);
int kmiVQFBfree(int);
int kmiVQalloc(int);
int kmiWriteRegister(int, int);
int memmove(int, int, int);
int memset(int, int, int, int);
int mwlRnaStartCopy(int, int, int, int, int);
int nlLoadDummyTexture(void);
int nlMultiMatrix8(int);
int nlOuterProduct(int, int, int);
int nlPerspective(int, float, float, float);
int nlPuts(int);
int nlUnitMatrix(void);
int nlsndStreamChgFx(int, int, int);
int nlsndStreamSetHdFx(int, int, int);
int nlsndStreamSetHdGain(int, int);
int nlsndStreamSetHdOctFns(int, int, int);
int open_file_handle(void);
int pdVibIsReady(int);
int search_dir(int, int, int);
int search_exec_file(int, int);
int search_free_dir(int);
int setTechnicalBonus(int, int, int);
int set_event(int, int);
int set_vmstime(int, int);
int setjmp(int);
int fmMngSncmp(void);
int vmsfs_c_getstate(int);
int vmsfs_c_setfunc(int, int);
int vmsfs_c_setparam(int, int, int, int, int, int, int);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int, int, int, int);
struct o40_int { char p[0x40]; int v; };
struct o44_int { char p[0x44]; int v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o50_int { char p[0x50]; int v; };
struct o50_uchar { char p[0x50]; unsigned char v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o54_int { char p[0x54]; int v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o58_int { char p[0x58]; int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o84_uint { char p[0x84]; unsigned int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_short { char p[0xA8]; short v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_int { char p[0x18]; int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };









void SEGA_LOGO_SetColor(void)
{
    int stk[45];

    *(float *)((((int)stk + 4) + 0x4)) = 0.0f;
    *(float *)((((int)stk + 4) + 0x8)) = 1.0f;
    *(float *)((((int)stk + 4) + 0xC)) = 1.0f;
    *(float *)((((int)stk + 4) + 0x10)) = 1.0f;
    *(float *)((((int)stk + 4) + 0x14)) = 0.0f;
    *(float *)((((int)stk + 4) + 0x18)) = 1.0f;
    *(float *)((((int)stk + 4) + 0x1C)) = 1.0f;
    *(float *)((((int)stk + 4) + 0x20)) = 1.0f;
}


float nlLdexpf(int a4, float f4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    float u15;
    int stk[1];

    if (f4 == 0.0f) {
        return 0.0f;
    }
    *(float *)(((int)stk + 0)) = f4;
    t0 = *(int *)((((int)stk + 0) + 0x0));
    if ((int)(a4 + (unsigned char)((int)t0 >> 23)) < (int)0x1) {
        t1 = *(int *)((((int)stk + 0) + 0x0));
        t2 = *(int *)((((int)stk + 0) + 0x0));
        *(unsigned int *)((((int)stk + 0) + 0x0)) = ((t2 & 0x80000000) | ((int)((t1 & 0x7FFFFF) | 0x800000) << (int)(-(0x1 - (a4 + (unsigned char)((int)t0 >> 23))))));
    } else {
        if ((int)(a4 + (unsigned char)((int)t0 >> 23)) > (int)0xFE) {
            t3 = *(int *)((((int)stk + 0) + 0x0));
            *(unsigned int *)((((int)stk + 0) + 0x0)) = ((t3 & 0x80000000) | 0x7F800000);
        } else {
            t4 = *(int *)((((int)stk + 0) + 0x0));
            *(unsigned int *)((((int)stk + 0) + 0x0)) = (t4 & 0x807FFFFF);
            t5 = *(int *)((((int)stk + 0) + 0x0));
            *(unsigned int *)((((int)stk + 0) + 0x0)) = (t5 | ((a4 + (unsigned char)((int)t0 >> 23)) << 23));
        }
    }
    u15 = *(float *)(((int)stk + 0));
    return u15;
}


int pdVibSetStopTime(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t21;
    int t8;
    int t3;
    int t4;
    int t5;
    int t10;
    int t11;
    int t12;
    int t13;
    int t18;
    int t19;
    int stk[12];
    int R1016;
    int R1020;
    int R1024;

    R1016 = *(int *)((int)stk + 0);
    R1020 = *(int *)((int)stk + 4);
    R1024 = *(int *)((int)stk + 8);

    R1024 = a4;
    R1020 = a5;
    R1016 = a6;
    t0 = R1024;
    t1 = pdVibIsReady(t0);
    t21 = 0xFFFFFFFE;
    if (t1 != 0) {
        *(unsigned int *)(((((int)stk + 0) + 0xC) + 0x10)) = 0x0;
        *(unsigned int *)(((((int)stk + 0) + 0xC) + 0xC)) = 0x0;
        *(unsigned int *)(((((int)stk + 0) + 0xC) + 0x8)) = 0x0;
        *(unsigned int *)(((((int)stk + 0) + 0xC) + 0x4)) = 0x0;
        *(unsigned int *)(((((int)stk + 0) + 0xC) + 0x0)) = 0x0;
        t8 = 0x0;
        if ((unsigned int)0x0 < (unsigned int)a7) {
            t8 = 0x0;
            t3 = 0x0;
            do {
                t4 = R1020;
                t3 = (t3 + 0x1);
                R1020 = (t4 + 0x1);
                t5 = *(signed char *)((((t4 + 0x1) - 1) + 0x0));
                t8 = (t8 | ((int)0x1 << (int)(unsigned char)t5));
            } while ((unsigned int)t3 < (unsigned int)a7);
        }
        *(unsigned char *)(((((int)stk + 0) + 0xC) + 0x0)) = ((unsigned int)(unsigned short)t8 >> 8);
        *(unsigned char *)((((((int)stk + 0) + 0xC) + 0x1) + 0x0)) = t8;
        if ((unsigned int)0x0 < (unsigned int)a7) {
            t10 = 0x0;
            t11 = (((((int)stk + 0) + 0xC) + 0x1) + 0x1);
            do {
                t12 = R1016;
                t10 = (t10 + 0x1);
                R1016 = (t12 + 0x1);
                t13 = *(signed char *)((((t12 + 0x1) - 1) + 0x0));
                *(unsigned char *)((t11 + 0x0)) = t13;
                t11 = (t11 + 0x1);
            } while ((unsigned int)t10 < (unsigned int)a7);
        }
        R1016 = ((unsigned int)(a7 + 0x5) >> 2);
        t18 = R1024;
        t19 = kdSetBlockWrite(t18, 0x100, 0x0, 0x0, 0x0, (((int)stk + 0) + 0xC), ((unsigned int)(a7 + 0x5) >> 2));
        t21 = 0x0;
        if ((int)t19 < 0) {
            t21 = 0xFFFFFFFF;
        }
    }
    return t21;
}


int kmiCBalloc(int a4, int a5, int a6)
{
    int t0;
    int t9;
    int t1;
    int t7;
    int t2;
    int t3;
    int t4;

    t0 = kmiFBallocSub(a4, a5, a6);
    t9 = 0x3;
    if (t0 != -1) {
        t1 = kmytex_ABSalloc(0x0, t0, a4, a5, 0x1, 0x1);
        t7 = t1;
        if (t1 == 0) {
            t2 = *(int *)0xC177FB0;
            t3 = kmytex_ABSalloc(0x1, (t2 + t0), a4, a6, 0x1, 0x1);
            if (t3 != 0) {
                t4 = *(int *)((a5 + 0x1C));
                kmiFBfree(t4);
            }
            t7 = t3;
        }
        t9 = t7;
    }
    return t9;
}


int FBmovedata(int a4, int a5, int a6)
{
    int t13;
    int t14;
    int t15;
    int t3;
    int t7;
    int t8;
    int t10;
    int t19;
    int t20;
    int t22;
    int t23;
    int stk[522];
    int R1004;

    R1004 = *(int *)((int)stk + 4);

    t13 = a6;
    t14 = a5;
    t15 = a4;
    if ((unsigned int)a6 > (unsigned int)0x800) {
        R1004 = (((int)stk + 4) + 0x4);
        t14 = a5;
        t15 = a4;
        t13 = a6;
        do {
            t3 = R1004;
            kmiCopyFromFrameBuffer(t3, t14, 0x800);
            t8 = R1004;
            t7 = 0x40;
            while (t7 != 0) {
                kmiPurgeCache(t8);
                t7 = (t7 - 1);
                t8 = (t8 + 0x20);
            }
            t10 = R1004;
            kmiCopyToFrameBuffer(t15, t10, 0x800);
            t13 = (t13 - 0x800);
            t14 = (t14 + 0x800);
            t15 = (t15 + 0x800);
        } while ((unsigned int)t13 > (unsigned int)0x800);
    }
    R1004 = (((int)stk + 4) + 0x4);
    kmiCopyFromFrameBuffer((((int)stk + 4) + 0x4), t14, t13);
    t20 = R1004;
    t19 = 0x40;
    while (t19 != 0) {
        kmiPurgeCache(t20);
        t19 = (t19 - 1);
        t20 = (t20 + 0x20);
    }
    t22 = R1004;
    t23 = kmiCopyToFrameBuffer(t15, t22, t13);
    return t23;
}


void kmytex_GetSmallVQprofile(int a4, int a5)
{
    int t0;
    int t1;
    int t5;
    int t6;
    int t7;
    int t10;
    int t11;
    int t12;
    int t16;
    int t17;
    int t18;
    int t21;
    int t22;
    int t14;

    t0 = *(int *)((a5 + 0xC));
    if (t0 != 8) {
        if (t0 != 16) {
            if (t0 != 32) {
                if (t0 != 64) {
                    return;
                }
                t1 = *(int *)((a5 + 0x18));
                if ((0x1 & t1) != 0) {
                    *(unsigned int *)((a4 + 0x0)) = 0x8000;
                    *(unsigned int *)((a4 + 0x4)) = 0x800;
                    *(unsigned int *)((a4 + 0x8)) = 0x560;
                    *(unsigned int *)((a4 + 0xC)) = 0xD60;
                } else {
                    *(unsigned int *)((a4 + 0x0)) = 0x7000;
                    *(unsigned int *)((a4 + 0x4)) = 0x400;
                    *(unsigned int *)((a4 + 0x8)) = 0x400;
                    *(unsigned int *)((a4 + 0xC)) = 0x1000;
                }
                t5 = *(int *)((a4 + 0x4));
                t6 = (int)((unsigned int)0x800 / (unsigned int)t5);
                *(unsigned int *)((a4 + 0x10)) = t6;
                return;
            }
            t7 = *(int *)((a5 + 0x18));
            if ((0x1 & t7) != 0) {
                *(unsigned int *)((a4 + 0x0)) = 0x6000;
                *(unsigned int *)((a4 + 0x4)) = 0x200;
                *(unsigned int *)((a4 + 0x8)) = 0x160;
                *(unsigned int *)((a4 + 0xC)) = 0xF60;
            } else {
                *(unsigned int *)((a4 + 0x0)) = 0x5000;
                *(unsigned int *)((a4 + 0x4)) = 0x100;
                *(unsigned int *)((a4 + 0x8)) = 0x100;
                *(unsigned int *)((a4 + 0xC)) = 0x1000;
            }
            t10 = *(int *)((a4 + 0x4));
            t11 = (int)((unsigned int)0x800 / (unsigned int)t10);
            *(unsigned int *)((a4 + 0x10)) = t11;
            return;
        }
        t12 = *(int *)((a5 + 0x18));
        if ((0x1 & t12) != 0) {
            *(unsigned int *)((a4 + 0x0)) = 0x4000;
            *(unsigned int *)((a4 + 0x4)) = 0x80;
            *(unsigned int *)((a4 + 0x8)) = 0x60;
            t14 = 0xFE0;
        } else {
            *(unsigned int *)((a4 + 0x0)) = 0x3000;
            *(unsigned int *)((a4 + 0x4)) = 0x80;
            *(unsigned int *)((a4 + 0x8)) = 0x40;
            t14 = 0xFC0;
        }
        *(unsigned int *)((a4 + 0xC)) = t14;
        t16 = *(int *)((a4 + 0x4));
        t17 = (int)((unsigned int)0x800 / (unsigned int)t16);
        *(unsigned int *)((a4 + 0x10)) = t17;
        return;
    }
    t18 = *(int *)((a5 + 0x18));
    if ((0x1 & t18) != 0) {
        *(unsigned int *)((a4 + 0x0)) = 0x2000;
        *(unsigned int *)((a4 + 0x4)) = 0x80;
        *(unsigned int *)((a4 + 0x8)) = 0x20;
        *(unsigned int *)((a4 + 0xC)) = 0xFA0;
    } else {
        *(unsigned int *)((a4 + 0x0)) = 0x1000;
        *(unsigned int *)((a4 + 0x4)) = 0x80;
        *(unsigned int *)((a4 + 0x8)) = 0x20;
        *(unsigned int *)((a4 + 0xC)) = 0xF90;
    }
    t21 = *(int *)((a4 + 0x4));
    t22 = (int)((unsigned int)0x800 / (unsigned int)t21);
    *(unsigned int *)((a4 + 0x10)) = t22;
}


int mwlSbSetPitch(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t7;

    t0 = a5;
    if ((int)a5 >= (int)0x3F) {
        t0 = 0x3F;
    }
    t1 = t0;
    if ((int)t0 <= (int)0xFFFFFFC0) {
        t1 = 0xFFFFFFC0;
    }
    (((struct o50_uint *)(a4))->v) = t1;
    t2 = a6;
    if ((int)a6 >= (int)0x63) {
        t2 = 0x63;
    }
    t3 = t2;
    if ((int)t2 <= (int)0xFFFFFF9D) {
        t3 = 0xFFFFFF9D;
    }
    (((struct o54_uint *)(a4))->v) = t3;
    t4 = (int)((int)(((t3 << 2) << 2) << 2) / (int)0x64);
    t5 = *(short *)((a4 + 0x6));
    nlsndStreamTranspose(t5, t1);
    t7 = *(short *)((a4 + 0x6));
    return nlsndStreamDetune(t7, t4);
}


int mwlSbSetGain(int a4, int a5)
{
    int t3;
    int t4;
    int t0;
    int t5;
    int t6;
    int t7;

    *(unsigned int *)((a4 + 0x5C)) = a5;
    t3 = 0x5C;
    t4 = 0x0;
    if ((int)a5 >= (int)0xFFFFFFD6) {
        t3 = 0x5C;
        t4 = 0xF;
        if ((int)a5 < 0) {
            t0 = (int)((int)a5 / (int)0x3);
            t3 = t0;
            t4 = (t0 + 0xF);
        }
    }
    t5 = *(int *)((a4 + 0x18));
    if (t5 == 0) {
        t6 = *(int *)((a4 + 0x1C));
        t7 = *(int *)((t6 + 0x4));
        return nlsndStreamSetHdGain(t7, t4);
    }
    return t3;
}


void ADX_DecodeInfoAiff(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int stk[9];

    *(unsigned int *)(((int)stk + 20)) = a4;
    *(unsigned int *)(((int)stk + 24)) = a6;
    *(unsigned int *)(((int)stk + 28)) = a7;
    if ((int)a5 < (int)0x1000) {
        t0 = *(int *)(((int)stk + 24));
        *(unsigned short *)((t0 + 0x0)) = 0x0;
        return;
    }
    t1 = *(int *)(((int)stk + 20));
    t2 = adxb_DecodeInfoAiffSub(t1, (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8), (((int)stk + 0) + 0xC), (((int)stk + 4) + 0xC));
    if (t2 != 0) {
        t3 = *(int *)(((int)stk + 20));
        t4 = *(int *)(((int)stk + 24));
        *(unsigned short *)((t4 + 0x0)) = (t2 - t3);
        if ((int)(short)(t2 - t3) <= 0) {
            return;
        }
        t5 = *(int *)(((int)stk + 4));
        *(unsigned int *)((a11 + 0x0)) = t5;
        t6 = *(int *)(((int)stk + 8));
        *(unsigned char *)((a10 + 0x0)) = t6;
        t7 = *(int *)(((int)stk + 12));
        *(unsigned char *)((a8 + 0x0)) = t7;
        t8 = *(int *)(((int)stk + 16));
        *(unsigned int *)((a12 + 0x0)) = t8;
        t9 = *(int *)(((int)stk + 28));
        *(unsigned char *)((t9 + 0x0)) = 0xFFFFFFFF;
        t10 = *(signed char *)((a10 + 0x0));
        t11 = *(signed char *)((a8 + 0x0));
        t12 = ((short)t10 * (short)t11);
        if ((int)((short)t10 * (short)t11) < 0) {
            t12 = (((short)t10 * (short)t11) + 0x7);
        }
        *(unsigned char *)((a9 + 0x0)) = (((t12 >> 1) >> 1) >> 1);
        *(unsigned int *)((a13 + 0x0)) = 0x1;
        return;
    }
}



void ADXPD_EntrySte(int a4, int a5, int a6, int a7, int a8)
{
    int t0;

    t0 = *(int *)((a4 + 0xC));
    if (t0 == 0) {
        *(unsigned int *)((a4 + 0x14)) = 0x2;
        *(unsigned int *)((a4 + 0x18)) = a5;
        *(unsigned int *)((a4 + 0x1C)) = a6;
        *(unsigned int *)((a4 + 0x20)) = a7;
        *(unsigned int *)((a4 + 0x24)) = a8;
        return;
    }
}
