/* Library code: C that behaves like this game's own bytes. */
/* Straight-line functions with calls and guards (batch gen_ao): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXAMP_Destroy(int);
int ADXAMP_ExecHndl(int);
int ADXB_EndDecode(int);
int ADXB_EvokeDecode(int);
int ADXB_GetNumChan(int);
int ADXB_GetPcmBuf(int);
int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int ADXERR_CallErrFunc(void);
int ADXPD_ExecHndl(int);
int ADXPD_GetStat(int);
int ADXPD_Reset(int);
int ADXRNA_Destroy(void);
int ADXRNA_GetNumData(void);
int ADXRNA_GetNumRoom(void);
int ADXRNA_SetPlaySw(void);
int ADXRNA_SetTransSw(void);
int ADXSJD_Destroy(int);
int ADXSJD_GetStat(int);
int ADXSJD_Stop(int);
int ADXSTM_Close(int);
int ADXSTM_Seek(int, int);
int ADXSTM_Start(int);
int ADXSTM_Stop(int);
int ADXT_GetNumChan(int);
int ADXT_Stop(void);
int gdc_FadeManStreamSong(void);
int pfOffsetColor(int, int, int, int);
int pfOffsetOff(void);
int PutNameEntryScreen(void);
int PutNameEntryRank(int);
int PutNameEntryDrum(int, float);
int PutNameEntryName(void);
int nlArcSin(float);
int nlCalcPoint(int, int);
int nlCalcVector(int, int);
int nlMvClipEdge(int, int, int);
int nlsndCheckPackLoadError(int, int);
int nlsndPackLoadInit(int, int, int, int);
int nlsndSeqRequest(void);
int prefetch(int);
int vsprintf(int, int, int);
int kmtex_CheckTextureFormat(int, int, int, int);
int ADXSJD_GetNumChan(int);
int ADXSJD_GetBlkSmpl(int);
int ADXF_Ocbi(int, int);
int SJMEM_Lock(void);
int syBtFlRead(void);
int fmMngMcpy4(int, int, int);
int fmMngBit2Num(int, int);
int adxb_DecodeInfoAuSub(int, int, int, int, int, int, int);
int SJMEM_Unlock(int, int);
int SJRBF_Create(void);
int SJRBF_GetBufPtr(int);
int SJRBF_Lock(void);
int SJRBF_Unlock(int, int);
int adxf_SetCmdHstry(int, int, int, int, int);
int adxf_read_sj32(int, int, int);
int adxt_start_sj(int, int);
int buIsFormat(void);
int close_file_handle(void);
int direntry(int, int);
int direntry_dirty(int, int);
int fmcalccrc(int, int);
int kdGetDeviceInfo(void);
int kdSetSetCondition(void);
int kmSetBackGroundPlane(int, int);
int kmSetUserClipping(int, int, int, int, int, int);
int kmiABSalloc(int, int);
int kmiDefaultInterruptHandler(int);
int kmiFBfree(int);
int kmiReadRegister(int);
int kmiTXalloc(int, int);
int memmove(int, int, int);
int memset(int, int, int);
int mwRnaGetPlaySw(int);
int mwRnaGetTransSw(int);
int mwRnaSetPlaySw(int, int);
int mwRnaSetTransSw(int, int);
int mwlRnaAddFlshPos(int);
int mwlRnaAddRdPos(int);
int mwlRnaAddWrPos(int);
int mwlRnaClearBuf(void);
int mwlRnaInsrtSlntDat(int);
int mwlRnaIsCopyEnd(int);
int mwlRnaStartTrans(int);
int nlCommonTextureGetNextTextureIndex(void);
int nlCreateTextureParam(int);
int nlInitTextureSurface(int, int);
int nlLdexpf(float);
int nlLoadTextureMem(int, int, int);
int nlScaleUnitVector(int, int, float);
int nlSpriteSetImaginaryScreenSize(float, float);
int nlSubVector3op(int, int, int);
int pdVibIsReady(void);
int vmsfs_init_work_new(int);
int vmsfs_init_work_normal(int, int, int);
int vmsfs_setdevicetype(int);
int vmsfs_setretry(int);
int vmsfs_unmount(int);
int vmsio_init(void);
int vmsio_ismount(int);
int vmsio_isready(int);
int write_dir(int);
int write_fat(int);
struct o10C4_int { char p[0x10C4]; int v; };
struct o11_uchar { char p[0x11]; unsigned char v; };
struct o12_uchar { char p[0x12]; unsigned char v; };
struct o13_uchar { char p[0x13]; unsigned char v; };
struct o32_uchar { char p[0x32]; unsigned char v; };
struct o33_uchar { char p[0x33]; unsigned char v; };
struct o40_int { char p[0x40]; int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o50_int { char p[0x50]; int v; };
struct o54_int { char p[0x54]; int v; };
struct o70_uchar { char p[0x70]; unsigned char v; };
struct o74_int { char p[0x74]; int v; };
struct o74_ushort { char p[0x74]; unsigned short v; };
struct o76_ushort { char p[0x76]; unsigned short v; };
struct o88_int { char p[0x88]; int v; };
struct o8C_int { char p[0x8C]; int v; };
struct o90_int { char p[0x90]; int v; };
struct o94_int { char p[0x94]; int v; };
struct oA0_int { char p[0xA0]; int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct oA4_int { char p[0xA4]; int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o2_short { char p[0x2]; short v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o6_short { char p[0x6]; short v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };


int nlLineSendVertex(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;

    t0 = *(int *)((a6 + 0x0));
    t1 = 0x0;
    t2 = a5;
    t3 = a4;
    do {
        if (t1 == 3) {
            *(unsigned int *)((t3 + 0x0)) = 0xF0000000;
        } else {
            *(unsigned int *)((t3 + 0x0)) = 0xE0000000;
        }
        t4 = *(int *)((t2 + 0x0));
        t2 = (t2 + 0x4);
        t3 = (t3 + 0x4);
        *(unsigned int *)((t3 + 0x0)) = t4;
        t3 = (t3 + 0x4);
        t5 = *(int *)((t2 + 0x0));
        t2 = (t2 + 0x4);
        *(unsigned int *)((t3 + 0x0)) = t5;
        t3 = (t3 + 0x4);
        t6 = *(int *)((t2 + 0x0));
        t2 = (t2 + 0x4);
        *(unsigned int *)((t3 + 0x0)) = t6;
        t3 = (t3 + 0x4);
        *(unsigned int *)((t3 + 0x0)) = t0;
        t3 = (t3 + 0x4);
        *(unsigned int *)((t3 + 0x0)) = 0x0;
        t3 = (t3 + 0x4);
        *(unsigned int *)((t3 + 0x0)) = t0;
        t3 = (t3 + 0x4);
        *(unsigned int *)((t3 + 0x0)) = 0x0;
        t7 = prefetch(t3);
        t1 = (t1 + 0x1);
        t3 = (t3 + 0x4);
    } while ((int)t1 < (int)0x4);
    return t7;
}


int adxsjd_get_wr(int a4, int a5, int a6, int a7)
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
    int t13;
    int t14;
    int t15;
    int t19;

    t0 = *(int *)((a4 + 0xC));
    t1 = 0x0;
    for (;;) {
        t2 = *(int *)((a4 + 0x4));
        t3 = ADXB_GetNumChan(t2);
        if ((int)t1 >= (int)t3) break;
        t4 = *(int *)((((t1 << 2) + (a4 + 0xC)) + 0x0));
        t5 = *(int *)((t4 + 0x0));
        t6 = *(int *)((t5 + 0x18));
        t7 = ((int (*)(int, int, int, int))(t6))(t4, 0x0, 0x4000, (((t1 << 2) << 1) + (a4 + 0x1C)));
        t1 = (t1 + 0x1);
    }
    t8 = SJRBF_GetBufPtr(t0);
    t9 = *(int *)((a4 + 0x1C));
    *(unsigned int *)((a5 + 0x0)) = ((unsigned int)(t9 - t8) >> 1);
    t10 = *(int *)((a4 + 0x20));
    t11 = *(int *)((a4 + 0x38));
    t12 = t11;
    if ((int)((unsigned int)t10 >> 1) < (int)t11) {
        t12 = ((unsigned int)t10 >> 1);
    }
    *(unsigned int *)((a6 + 0x0)) = t12;
    t13 = *(int *)((a4 + 0x3C));
    if ((int)t13 >= 0) {
        t14 = *(int *)((a4 + 0x3C));
        t15 = (((struct o40_int *)(a4))->v);
        *(unsigned int *)((a7 + 0x0)) = (t14 - t15);
    } else {
        *(unsigned int *)((a7 + 0x0)) = 0x1FFFFFFF;
    }
    t19 = *(int *)((a4 + 0x4));
    return ADXB_GetPcmBuf(t19);
}


int SJUNI_GetNumData(int a4, int a5)
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

    if ((int)a5 >= 0) {
        if ((int)a5 >= (int)0x4) {
            t0 = *(int *)((a4 + 0x28));
            if (t0 != 0) {
                t1 = *(int *)((a4 + 0x28));
                t2 = *(int *)((a4 + 0x2C));
                t3 = ((int (*)(int, int))(t1))(t2, 0xFFFFFFFD);
            }
            return 0x0;
        }
        t4 = (a4 + 0x18);
        t5 = ((a5 << 2) + (a4 + 0x18));
        t6 = 0x0;
        for (;;) {
            t7 = *(int *)((t5 + 0x0));
            t5 = t7;
            if (t5 == 0) break;
            t8 = *(int *)((t5 + 0xC));
            t4 = t8;
            t6 = (t6 + t4);
        }
        return t6;
    }
    t9 = *(int *)((a4 + 0x28));
    if (t9 != 0) {
        t10 = *(int *)((a4 + 0x28));
        t11 = *(int *)((a4 + 0x2C));
        t12 = ((int (*)(int, int))(t10))(t11, 0xFFFFFFFD);
    }
    return 0x0;
}


void mpdrv_make_deviceinfo(int a4, int a5, int a6)
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
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    int t30;
    int t31;
    int t32;
    int t33;
    int t34;
    int t40;
    int t41;
    int t42;
    int t43;
    int t44;
    int t45;
    int t46;
    int t47;
    int t37;
    int t38;

    t0 = *(signed char *)(((a6 + 0x4) + 0x1));
    t1 = *(signed char *)(((a6 + 0x4) + 0x2));
    t2 = *(signed char *)(((a6 + 0x4) + 0x0));
    t3 = *(signed char *)(((a6 + 0x4) + 0x3));
    *(unsigned int *)((a4 + 0x0)) = ((((((unsigned char)t0 << 16) & 0xFF0000) | (((unsigned char)t1 << 8) & 0xFF00)) | ((((unsigned char)t2 << 16) << 8) & 0xFF000000)) | (unsigned char)t3);
    t4 = 0xFF000000;
    t5 = ((a6 + 0x4) + 0x4);
    t6 = (a4 + 0x4);
    while ((unsigned int)t6 < (unsigned int)(a4 + 0x8)) {
        t7 = *(signed char *)((t5 + 0x0));
        t4 = t7;
        t5 = (t5 + 0x1);
        *(unsigned char *)((t6 + 0x0)) = t4;
        t6 = (t6 + 0x1);
    }
    t8 = t4;
    t9 = t5;
    t10 = (a4 + 0x8);
    while ((unsigned int)t10 < (unsigned int)(a4 + 0xC)) {
        t11 = *(signed char *)((t9 + 0x0));
        t8 = t11;
        t9 = (t9 + 0x1);
        *(unsigned char *)((t10 + 0x0)) = t8;
        t10 = (t10 + 0x1);
    }
    t12 = t8;
    t13 = t9;
    t14 = (a4 + 0xC);
    while ((unsigned int)t14 < (unsigned int)(a4 + 0x10)) {
        t15 = *(signed char *)((t13 + 0x0));
        t12 = t15;
        t13 = (t13 + 0x1);
        *(unsigned char *)((t14 + 0x0)) = t12;
        t14 = (t14 + 0x1);
    }
    t16 = *(signed char *)((t13 + 0x0));
    (((struct o11_uchar *)(a4))->v) = t16;
    t17 = *(signed char *)((a4 + 0x10));
    if (t17 != 0) {
        t18 = *(signed char *)(((t13 + 0x1) + 0x0));
        (((struct o12_uchar *)(a4))->v) = (t18 & 0x3);
        t19 = *(signed char *)(((t13 + 0x1) + 0x0));
        (((struct o13_uchar *)(a4))->v) = (((unsigned int)(unsigned char)t19 >> 2) & 0x3);
    } else {
        t20 = *(signed char *)(((t13 + 0x1) + 0x0));
        t21 = *(signed char *)((0xC17870C + ((unsigned char)t20 & 0xF)));
        (((struct o12_uchar *)(a4))->v) = t21;
        (((struct o13_uchar *)(a4))->v) = 0x0;
    }
    t25 = *(int *)0xC2FA538;
    t26 = (((struct o10C4_int *)(t25))->v);
    if (t26 == 1) {
        t27 = 0xC2FA538;
        t28 = (t13 + 0x1);
        t29 = (a4 + 0x14);
        while ((unsigned int)t29 < (unsigned int)(a4 + 0x33)) {
            t30 = *(signed char *)((t28 + 0x0));
            t27 = t30;
            t28 = (t28 + 0x1);
            *(unsigned char *)((t29 + 0x0)) = t27;
            t29 = (t29 + 0x1);
        }
        t37 = t27;
        t38 = t28;
    } else {
        t31 = 0xC2FA538;
        t32 = ((t13 + 0x1) + 0x1);
        t33 = (a4 + 0x14);
        while ((unsigned int)t33 < (unsigned int)(a4 + 0x32)) {
            t34 = *(signed char *)((t32 + 0x0));
            t31 = t34;
            t32 = (t32 + 0x1);
            *(unsigned char *)((t33 + 0x0)) = t31;
            t33 = (t33 + 0x1);
        }
        (((struct o32_uchar *)(a4))->v) = 0x0;
        t37 = t31;
        t38 = t32;
    }
    (((struct o33_uchar *)(a4))->v) = 0x0;
    t40 = t37;
    t41 = t38;
    t42 = (a4 + 0x34);
    while ((unsigned int)t42 < (unsigned int)(a4 + 0x70)) {
        t43 = *(signed char *)((t41 + 0x0));
        t40 = t43;
        t41 = (t41 + 0x1);
        *(unsigned char *)((t42 + 0x0)) = t40;
        t42 = (t42 + 0x1);
    }
    (((struct o70_uchar *)(a4))->v) = 0x0;
    t44 = *(signed char *)((t41 + 0x1));
    t45 = *(signed char *)((t41 + 0x0));
    (((struct o74_ushort *)(a4))->v) = (((unsigned char)t44 << 8) | (unsigned char)t45);
    t46 = *(signed char *)((t41 + 0x3));
    t47 = *(signed char *)((t41 + 0x2));
    (((struct o76_ushort *)(a4))->v) = (((unsigned char)t46 << 8) | (unsigned char)t47);
}


int ADXB_ExecOneAdx(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t9;
    int t23;
    int t10;
    int t12;
    int t13;
    int t15;
    int t17;
    int t18;
    int t19;
    int t20;

    t0 = *(int *)((a4 + 0x4));
    if (t0 == 1) {
        t1 = *(int *)((a4 + 0x8));
        t2 = ADXPD_GetStat(t1);
        if (t2 == 0) {
            t3 = (((struct o88_int *)(a4))->v);
            t4 = (((struct o8C_int *)(a4))->v);
            t5 = ((int (*)(int, int, int, int))(t3))(t4, ((a4 + 0x50) + 0x20), ((a4 + 0x50) + 0x24), ((a4 + 0x50) + 0x28));
            ADXB_EvokeDecode(a4);
            *(unsigned int *)((a4 + 0x4)) = 0x2;
        }
    }
    t9 = *(int *)((a4 + 0x4));
    t23 = t9;
    if (t9 == 2) {
        t10 = *(int *)((a4 + 0x8));
        ADXPD_ExecHndl(t10);
        t12 = *(int *)((a4 + 0x8));
        t13 = ADXPD_GetStat(t12);
        t23 = t13;
        if (t13 == 3) {
            ADXB_EndDecode(a4);
            t15 = *(int *)((a4 + 0x8));
            ADXPD_Reset(t15);
            t17 = (((struct o90_int *)(a4))->v);
            t18 = (((struct oA0_int *)(a4))->v);
            t19 = (((struct oA4_int *)(a4))->v);
            t20 = (((struct o94_int *)(a4))->v);
            t23 = ((int (*)(int, int, int))(t17))(t20, t19, t18);
            *(unsigned int *)((a4 + 0x4)) = 0x3;
        }
    }
    return t23;
}


int ADXB_ExecOneAiff16(int a4)
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
    int t12;
    int t13;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t34;
    int t35;
    int t36;
    int t51;
    int t56;
    int t62;
    int t57;
    int t58;
    int t59;
    int t60;

    t0 = *(int *)((a4 + 0x4));
    t1 = (((struct o50_int *)(a4))->v);
    if (t0 == 1) {
        t2 = *(int *)((a4 + 0x8));
        t3 = ADXPD_GetStat(t2);
        if (t3 == 0) {
            t4 = (((struct o88_int *)(a4))->v);
            t5 = (((struct o8C_int *)(a4))->v);
            t6 = ((int (*)(int, int, int, int))(t4))(t5, ((a4 + 0x50) + 0x20), ((a4 + 0x50) + 0x24), ((a4 + 0x50) + 0x28));
            t7 = *(int *)(((a4 + 0x50) + 0x18));
            t8 = *(int *)(((a4 + 0x50) + 0x20));
            t9 = *(int *)(((a4 + 0x50) + 0x24));
            t10 = *(int *)(((a4 + 0x50) + 0x4));
            t12 = (t7 - t8);
            if ((int)(t7 - t8) > (int)t9) {
                t12 = *(int *)(((a4 + 0x50) + 0x24));
            }
            t13 = *(int *)(((a4 + 0x50) + 0x14));
            t15 = t12;
            if ((int)t12 > (int)t10) {
                t15 = *(int *)(((a4 + 0x50) + 0x4));
            }
            t16 = *(int *)(((a4 + 0x50) + 0x20));
            t17 = *(signed char *)((a4 + 0xE));
            if (t17 == 2) {
                t18 = *(int *)(((a4 + 0x50) + 0x1C));
                t19 = *(int *)(((a4 + 0x50) + 0x20));
                if ((int)t15 > 0) {
                    t20 = 0x0;
                    t21 = 0x0;
                    t22 = 0x0;
                    do {
                        t23 = *(short *)((t1 + (t21 << 1)));
                        t22 = (t22 + 0x1);
                        *(unsigned short *)((((t16 << 1) + t13) + t20)) = (((unsigned short)t23 << 8) | ((int)(unsigned short)t23 >> 8));
                        t24 = *(short *)((t1 + ((t21 + 0x1) << 1)));
                        t25 = t20;
                        t20 = (t20 + 0x2);
                        *(unsigned short *)(((((t18 + t19) << 1) + t13) + t25)) = (((unsigned short)t24 << 8) | ((int)(unsigned short)t24 >> 8));
                        t21 = (t21 + 0x2);
                    } while ((int)t22 < (int)t15);
                }
            } else {
                if ((int)t15 > 0) {
                    t34 = 0x0;
                    t35 = 0x0;
                    do {
                        t36 = *(short *)((t1 + t34));
                        t35 = (t35 + 0x1);
                        *(unsigned short *)((((t16 << 1) + t13) + t34)) = (((unsigned short)t36 << 8) | ((int)(unsigned short)t36 >> 8));
                        t34 = (t34 + 0x2);
                    } while ((int)t35 < (int)t15);
                }
            }
            (((struct oA0_uint *)(a4))->v) = t15;
            t51 = *(signed char *)((a4 + 0xE));
            (((struct oA4_uint *)(a4))->v) = ((t15 * t51) << 1);
            *(unsigned int *)((a4 + 0x4)) = 0x2;
        }
    }
    t56 = *(int *)((a4 + 0x4));
    t62 = t56;
    if (t56 == 2) {
        t57 = (((struct o90_int *)(a4))->v);
        t58 = (((struct oA0_int *)(a4))->v);
        t59 = (((struct oA4_int *)(a4))->v);
        t60 = (((struct o94_int *)(a4))->v);
        t62 = ((int (*)(int, int, int))(t57))(t60, t59, t58);
        *(unsigned int *)((a4 + 0x4)) = 0x3;
    }
    return t62;
}


int ADXB_ExecOneAiff8(int a4)
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
    int t12;
    int t13;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t32;
    int t33;
    int t34;
    int t35;
    int t46;
    int t49;
    int t55;
    int t50;
    int t51;
    int t52;
    int t53;

    t0 = *(int *)((a4 + 0x4));
    t1 = *(int *)(((a4 + 0x50) + 0x0));
    if (t0 == 1) {
        t2 = *(int *)((a4 + 0x8));
        t3 = ADXPD_GetStat(t2);
        if (t3 == 0) {
            t4 = *(int *)((a4 + 0x88));
            t5 = *(int *)((a4 + 0x8C));
            t6 = ((int (*)(int, int, int, int))(t4))(t5, ((a4 + 0x50) + 0x20), ((a4 + 0x50) + 0x24), ((a4 + 0x50) + 0x28));
            t7 = *(int *)(((a4 + 0x50) + 0x18));
            t8 = *(int *)(((a4 + 0x50) + 0x20));
            t9 = *(int *)(((a4 + 0x50) + 0x24));
            t10 = *(int *)(((a4 + 0x50) + 0x4));
            t12 = (t7 - t8);
            if ((int)(t7 - t8) > (int)t9) {
                t12 = *(int *)(((a4 + 0x50) + 0x24));
            }
            t13 = *(int *)(((a4 + 0x50) + 0x14));
            t15 = t12;
            if ((int)t12 > (int)t10) {
                t15 = *(int *)(((a4 + 0x50) + 0x4));
            }
            t16 = *(int *)(((a4 + 0x50) + 0x20));
            t17 = *(signed char *)((a4 + 0xE));
            if (t17 == 2) {
                t18 = *(int *)(((a4 + 0x50) + 0x1C));
                t19 = *(int *)(((a4 + 0x50) + 0x20));
                if ((int)t15 > 0) {
                    t20 = 0x0;
                    t21 = 0x0;
                    t22 = 0x0;
                    do {
                        t23 = *(signed char *)((t20 + t1));
                        *(unsigned short *)(((((t16 << 1) + t13) + t21) + 0x0)) = ((unsigned char)t23 << 8);
                        t24 = *(signed char *)((((t20 + 0x1) + t1) + 0x0));
                        t22 = (t22 + 0x1);
                        t20 = (t20 + 0x2);
                        *(unsigned short *)(((((t18 + t19) << 1) + t13) + t21)) = ((unsigned char)t24 << 8);
                        t21 = (t21 + 0x2);
                    } while ((int)t22 < (int)t15);
                }
            } else {
                if ((int)t15 > 0) {
                    t32 = (0x0 + t1);
                    t33 = (0x0 + ((t16 << 1) + t13));
                    t34 = 0x0;
                    do {
                        t35 = *(signed char *)((t32 + 0x0));
                        t32 = (t32 + 0x1);
                        t34 = (t34 + 0x1);
                        *(unsigned short *)((t33 + 0x0)) = ((unsigned char)t35 << 8);
                        t33 = (t33 + 0x2);
                    } while ((int)t34 < (int)t15);
                }
            }
            *(unsigned int *)((a4 + 0xA0)) = t15;
            t46 = *(signed char *)((a4 + 0xE));
            *(unsigned int *)((a4 + 0xA4)) = (t15 * t46);
            *(unsigned int *)((a4 + 0x4)) = 0x2;
        }
    }
    t49 = *(int *)((a4 + 0x4));
    t55 = t49;
    if (t49 == 2) {
        t50 = *(int *)((a4 + 0x90));
        t51 = *(int *)((a4 + 0xA0));
        t52 = *(int *)((a4 + 0xA4));
        t53 = *(int *)((a4 + 0x94));
        t55 = ((int (*)(int, int, int))(t50))(t53, t52, t51);
        *(unsigned int *)((a4 + 0x4)) = 0x3;
    }
    return t55;
}


void ADX_DecodeInfoAu(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14)
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
    int stk[11];

    *(unsigned int *)(((int)stk + 32)) = a4;
    *(unsigned int *)(((int)stk + 28)) = a6;
    *(unsigned int *)(((int)stk + 36)) = a7;
    if ((int)a5 < (int)0x8) {
        t0 = *(int *)(((int)stk + 28));
        *(unsigned short *)((t0 + 0x0)) = 0x0;
        return;
    }
    t1 = *(int *)(((int)stk + 32));
    t2 = adxb_DecodeInfoAuSub(t1, a5, (((int)stk + 0) + 0xC), (((int)stk + 0) + 0x10), (((int)stk + 4) + 0x10), (((int)stk + 8) + 0x10), a14);
    if (t2 != 0) {
        t3 = *(int *)(((int)stk + 32));
        t4 = *(int *)(((int)stk + 28));
        *(unsigned short *)((t4 + 0x0)) = (t2 - t3);
        if ((int)(short)(t2 - t3) <= 0) {
            return;
        }
        t5 = *(int *)(((int)stk + 12));
        *(unsigned int *)((a11 + 0x0)) = t5;
        t6 = *(int *)(((int)stk + 16));
        *(unsigned char *)((a10 + 0x0)) = t6;
        t7 = *(int *)(((int)stk + 20));
        *(unsigned char *)((a8 + 0x0)) = t7;
        t8 = *(int *)(((int)stk + 24));
        *(unsigned int *)((a12 + 0x0)) = t8;
        t9 = *(int *)(((int)stk + 36));
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


int ADXB_ExecOneAu16(int a4)
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
    int t12;
    int t13;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t34;
    int t35;
    int t36;
    int t51;
    int t56;
    int t62;
    int t57;
    int t58;
    int t59;
    int t60;

    t0 = *(int *)((a4 + 0x4));
    t1 = (((struct o50_int *)(a4))->v);
    if (t0 == 1) {
        t2 = *(int *)((a4 + 0x8));
        t3 = ADXPD_GetStat(t2);
        if (t3 == 0) {
            t4 = (((struct o88_int *)(a4))->v);
            t5 = (((struct o8C_int *)(a4))->v);
            t6 = ((int (*)(int, int, int, int))(t4))(t5, ((a4 + 0x50) + 0x20), ((a4 + 0x50) + 0x24), ((a4 + 0x50) + 0x28));
            t7 = *(int *)(((a4 + 0x50) + 0x18));
            t8 = *(int *)(((a4 + 0x50) + 0x20));
            t9 = *(int *)(((a4 + 0x50) + 0x24));
            t10 = *(int *)(((a4 + 0x50) + 0x4));
            t12 = (t7 - t8);
            if ((int)(t7 - t8) > (int)t9) {
                t12 = *(int *)(((a4 + 0x50) + 0x24));
            }
            t13 = *(int *)(((a4 + 0x50) + 0x14));
            t15 = t12;
            if ((int)t12 > (int)t10) {
                t15 = *(int *)(((a4 + 0x50) + 0x4));
            }
            t16 = *(int *)(((a4 + 0x50) + 0x20));
            t17 = *(signed char *)((a4 + 0xE));
            if (t17 == 2) {
                t18 = *(int *)(((a4 + 0x50) + 0x1C));
                t19 = *(int *)(((a4 + 0x50) + 0x20));
                if ((int)t15 > 0) {
                    t20 = 0x0;
                    t21 = 0x0;
                    t22 = 0x0;
                    do {
                        t23 = *(short *)((t1 + (t21 << 1)));
                        t22 = (t22 + 0x1);
                        *(unsigned short *)((((t16 << 1) + t13) + t20)) = (((unsigned short)t23 << 8) | ((int)(unsigned short)t23 >> 8));
                        t24 = *(short *)((t1 + ((t21 + 0x1) << 1)));
                        t25 = t20;
                        t20 = (t20 + 0x2);
                        *(unsigned short *)(((((t18 + t19) << 1) + t13) + t25)) = (((unsigned short)t24 << 8) | ((int)(unsigned short)t24 >> 8));
                        t21 = (t21 + 0x2);
                    } while ((int)t22 < (int)t15);
                }
            } else {
                if ((int)t15 > 0) {
                    t34 = 0x0;
                    t35 = 0x0;
                    do {
                        t36 = *(short *)((t1 + t34));
                        t35 = (t35 + 0x1);
                        *(unsigned short *)((((t16 << 1) + t13) + t34)) = (((unsigned short)t36 << 8) | ((int)(unsigned short)t36 >> 8));
                        t34 = (t34 + 0x2);
                    } while ((int)t35 < (int)t15);
                }
            }
            (((struct oA0_uint *)(a4))->v) = t15;
            t51 = *(signed char *)((a4 + 0xE));
            (((struct oA4_uint *)(a4))->v) = ((t15 * t51) << 1);
            *(unsigned int *)((a4 + 0x4)) = 0x2;
        }
    }
    t56 = *(int *)((a4 + 0x4));
    t62 = t56;
    if (t56 == 2) {
        t57 = (((struct o90_int *)(a4))->v);
        t58 = (((struct oA0_int *)(a4))->v);
        t59 = (((struct oA4_int *)(a4))->v);
        t60 = (((struct o94_int *)(a4))->v);
        t62 = ((int (*)(int, int, int))(t57))(t60, t59, t58);
        *(unsigned int *)((a4 + 0x4)) = 0x3;
    }
    return t62;
}


int ADXB_ExecOneAu8(int a4)
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
    int t12;
    int t13;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t32;
    int t33;
    int t34;
    int t35;
    int t46;
    int t49;
    int t55;
    int t50;
    int t51;
    int t52;
    int t53;

    t0 = *(int *)((a4 + 0x4));
    t1 = *(int *)(((a4 + 0x50) + 0x0));
    if (t0 == 1) {
        t2 = *(int *)((a4 + 0x8));
        t3 = ADXPD_GetStat(t2);
        if (t3 == 0) {
            t4 = *(int *)((a4 + 0x88));
            t5 = *(int *)((a4 + 0x8C));
            t6 = ((int (*)(int, int, int, int))(t4))(t5, ((a4 + 0x50) + 0x20), ((a4 + 0x50) + 0x24), ((a4 + 0x50) + 0x28));
            t7 = *(int *)(((a4 + 0x50) + 0x18));
            t8 = *(int *)(((a4 + 0x50) + 0x20));
            t9 = *(int *)(((a4 + 0x50) + 0x24));
            t10 = *(int *)(((a4 + 0x50) + 0x4));
            t12 = (t7 - t8);
            if ((int)(t7 - t8) > (int)t9) {
                t12 = *(int *)(((a4 + 0x50) + 0x24));
            }
            t13 = *(int *)(((a4 + 0x50) + 0x14));
            t15 = t12;
            if ((int)t12 > (int)t10) {
                t15 = *(int *)(((a4 + 0x50) + 0x4));
            }
            t16 = *(int *)(((a4 + 0x50) + 0x20));
            t17 = *(signed char *)((a4 + 0xE));
            if (t17 == 2) {
                t18 = *(int *)(((a4 + 0x50) + 0x1C));
                t19 = *(int *)(((a4 + 0x50) + 0x20));
                if ((int)t15 > 0) {
                    t20 = 0x0;
                    t21 = 0x0;
                    t22 = 0x0;
                    do {
                        t23 = *(signed char *)((t20 + t1));
                        *(unsigned short *)(((((t16 << 1) + t13) + t21) + 0x0)) = ((unsigned char)t23 << 8);
                        t24 = *(signed char *)((((t20 + 0x1) + t1) + 0x0));
                        t22 = (t22 + 0x1);
                        t20 = (t20 + 0x2);
                        *(unsigned short *)(((((t18 + t19) << 1) + t13) + t21)) = ((unsigned char)t24 << 8);
                        t21 = (t21 + 0x2);
                    } while ((int)t22 < (int)t15);
                }
            } else {
                if ((int)t15 > 0) {
                    t32 = (0x0 + t1);
                    t33 = (0x0 + ((t16 << 1) + t13));
                    t34 = 0x0;
                    do {
                        t35 = *(signed char *)((t32 + 0x0));
                        t32 = (t32 + 0x1);
                        t34 = (t34 + 0x1);
                        *(unsigned short *)((t33 + 0x0)) = ((unsigned char)t35 << 8);
                        t33 = (t33 + 0x2);
                    } while ((int)t34 < (int)t15);
                }
            }
            *(unsigned int *)((a4 + 0xA0)) = t15;
            t46 = *(signed char *)((a4 + 0xE));
            *(unsigned int *)((a4 + 0xA4)) = (t15 * t46);
            *(unsigned int *)((a4 + 0x4)) = 0x2;
        }
    }
    t49 = *(int *)((a4 + 0x4));
    t55 = t49;
    if (t49 == 2) {
        t50 = *(int *)((a4 + 0x90));
        t51 = *(int *)((a4 + 0xA0));
        t52 = *(int *)((a4 + 0xA4));
        t53 = *(int *)((a4 + 0x94));
        t55 = ((int (*)(int, int, int))(t50))(t53, t52, t51);
        *(unsigned int *)((a4 + 0x4)) = 0x3;
    }
    return t55;
}


int ADXB_ExecOneAuUlaw(int a4)
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
    int t12;
    int t13;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t35;
    int t36;
    int t37;
    int t38;
    int t39;
    int t51;
    int t56;
    int t62;
    int t57;
    int t58;
    int t59;
    int t60;

    t0 = *(int *)((a4 + 0x4));
    t1 = *(int *)(((a4 + 0x50) + 0x0));
    if (t0 == 1) {
        t2 = *(int *)((a4 + 0x8));
        t3 = ADXPD_GetStat(t2);
        if (t3 == 0) {
            t4 = *(int *)((a4 + 0x88));
            t5 = *(int *)((a4 + 0x8C));
            t6 = ((int (*)(int, int, int, int))(t4))(t5, ((a4 + 0x50) + 0x20), ((a4 + 0x50) + 0x24), ((a4 + 0x50) + 0x28));
            t7 = *(int *)(((a4 + 0x50) + 0x18));
            t8 = *(int *)(((a4 + 0x50) + 0x20));
            t9 = *(int *)(((a4 + 0x50) + 0x24));
            t10 = *(int *)(((a4 + 0x50) + 0x4));
            t12 = (t7 - t8);
            if ((int)(t7 - t8) > (int)t9) {
                t12 = *(int *)(((a4 + 0x50) + 0x24));
            }
            t13 = *(int *)(((a4 + 0x50) + 0x14));
            t15 = t12;
            if ((int)t12 > (int)t10) {
                t15 = *(int *)(((a4 + 0x50) + 0x4));
            }
            t16 = *(int *)(((a4 + 0x50) + 0x20));
            t17 = *(signed char *)((a4 + 0xE));
            if (t17 == 2) {
                t18 = *(int *)(((a4 + 0x50) + 0x1C));
                t19 = *(int *)(((a4 + 0x50) + 0x20));
                if ((int)t15 > 0) {
                    t20 = 0x0;
                    t21 = 0x0;
                    t22 = 0x0;
                    do {
                        t23 = *(signed char *)((t21 + t1));
                        t24 = *(short *)((0xC1787A0 + ((unsigned char)t23 << 1)));
                        t22 = (t22 + 0x1);
                        *(unsigned short *)(((((t16 << 1) + t13) + t20) + 0x0)) = t24;
                        t25 = *(signed char *)((((t21 + 0x1) + t1) + 0x0));
                        t21 = (t21 + 0x2);
                        t26 = *(short *)(((((unsigned char)t25 << 1) + 0xC1787A0) + 0x0));
                        *(unsigned short *)(((((t18 + t19) << 1) + t13) + t20)) = t26;
                        t20 = (t20 + 0x2);
                    } while ((int)t22 < (int)t15);
                }
            } else {
                if ((int)t15 > 0) {
                    t35 = (0x0 + t1);
                    t36 = (0x0 + ((t16 << 1) + t13));
                    t37 = 0x0;
                    do {
                        t38 = *(signed char *)((t35 + 0x0));
                        t35 = (t35 + 0x1);
                        t37 = (t37 + 0x1);
                        t39 = *(short *)((0xC1787A0 + ((unsigned char)t38 << 1)));
                        *(unsigned short *)((t36 + 0x0)) = t39;
                        t36 = (t36 + 0x2);
                    } while ((int)t37 < (int)t15);
                }
            }
            *(unsigned int *)((a4 + 0xA0)) = t15;
            t51 = *(signed char *)((a4 + 0xE));
            *(unsigned int *)((a4 + 0xA4)) = (t15 * t51);
            *(unsigned int *)((a4 + 0x4)) = 0x2;
        }
    }
    t56 = *(int *)((a4 + 0x4));
    t62 = t56;
    if (t56 == 2) {
        t57 = *(int *)((a4 + 0x90));
        t58 = *(int *)((a4 + 0xA0));
        t59 = *(int *)((a4 + 0xA4));
        t60 = *(int *)((a4 + 0x94));
        t62 = ((int (*)(int, int, int))(t57))(t60, t59, t58);
        *(unsigned int *)((a4 + 0x4)) = 0x3;
    }
    return t62;
}


int ADXB_ExecOneSpsd(int a4)
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
    int t12;
    int t13;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t31;
    int t32;
    int t33;
    int t44;
    int t49;
    int t55;
    int t50;
    int t51;
    int t52;
    int t53;

    t0 = *(int *)((a4 + 0x4));
    t1 = *(int *)(((a4 + 0x50) + 0x0));
    if (t0 == 1) {
        t2 = *(int *)((a4 + 0x8));
        t3 = ADXPD_GetStat(t2);
        if (t3 == 0) {
            t4 = *(int *)((a4 + 0x88));
            t5 = *(int *)((a4 + 0x8C));
            t6 = ((int (*)(int, int, int, int))(t4))(t5, ((a4 + 0x50) + 0x20), ((a4 + 0x50) + 0x24), ((a4 + 0x50) + 0x28));
            t7 = *(int *)(((a4 + 0x50) + 0x18));
            t8 = *(int *)(((a4 + 0x50) + 0x20));
            t9 = *(int *)(((a4 + 0x50) + 0x24));
            t10 = *(int *)(((a4 + 0x50) + 0x4));
            t12 = (t7 - t8);
            if ((int)(t7 - t8) > (int)t9) {
                t12 = *(int *)(((a4 + 0x50) + 0x24));
            }
            t13 = *(int *)(((a4 + 0x50) + 0x14));
            t15 = t12;
            if ((int)t12 > (int)t10) {
                t15 = *(int *)(((a4 + 0x50) + 0x4));
            }
            t16 = *(int *)(((a4 + 0x50) + 0x20));
            t17 = *(signed char *)((a4 + 0xE));
            if (t17 == 2) {
                t18 = *(int *)(((a4 + 0x50) + 0x1C));
                t19 = *(int *)(((a4 + 0x50) + 0x20));
                if ((int)t15 > 0) {
                    t20 = 0x0;
                    t21 = 0x0;
                    t22 = 0x0;
                    do {
                        t23 = *(short *)((((t20 << 1) + t1) + 0x0));
                        t22 = (t22 + 0x1);
                        *(unsigned short *)((((t16 << 1) + t13) + t21)) = t23;
                        t24 = *(short *)(((((t20 + 0x1) << 1) + t1) + 0x0));
                        t20 = (t20 + 0x2);
                        *(unsigned short *)(((((t18 + t19) << 1) + t13) + t21)) = t24;
                        t21 = (t21 + 0x2);
                    } while ((int)t22 < (int)t15);
                }
            } else {
                if ((int)t15 > 0) {
                    t31 = 0x0;
                    t32 = 0x0;
                    do {
                        t33 = *(short *)((t1 + t31));
                        t32 = (t32 + 0x1);
                        *(unsigned short *)((((t16 << 1) + t13) + t31)) = t33;
                        t31 = (t31 + 0x2);
                    } while ((int)t32 < (int)t15);
                }
            }
            *(unsigned int *)((a4 + 0xA0)) = t15;
            t44 = *(signed char *)((a4 + 0xE));
            *(unsigned int *)((a4 + 0xA4)) = ((t15 * t44) << 1);
            *(unsigned int *)((a4 + 0x4)) = 0x2;
        }
    }
    t49 = *(int *)((a4 + 0x4));
    t55 = t49;
    if (t49 == 2) {
        t50 = *(int *)((a4 + 0x90));
        t51 = *(int *)((a4 + 0xA0));
        t52 = *(int *)((a4 + 0xA4));
        t53 = *(int *)((a4 + 0x94));
        t55 = ((int (*)(int, int, int))(t50))(t53, t52, t51);
        *(unsigned int *)((a4 + 0x4)) = 0x3;
    }
    return t55;
}


int ADXB_ExecOneWav16(int a4)
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
    int t12;
    int t13;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t31;
    int t32;
    int t33;
    int t44;
    int t49;
    int t55;
    int t50;
    int t51;
    int t52;
    int t53;

    t0 = *(int *)((a4 + 0x4));
    t1 = *(int *)(((a4 + 0x50) + 0x0));
    if (t0 == 1) {
        t2 = *(int *)((a4 + 0x8));
        t3 = ADXPD_GetStat(t2);
        if (t3 == 0) {
            t4 = *(int *)((a4 + 0x88));
            t5 = *(int *)((a4 + 0x8C));
            t6 = ((int (*)(int, int, int, int))(t4))(t5, ((a4 + 0x50) + 0x20), ((a4 + 0x50) + 0x24), ((a4 + 0x50) + 0x28));
            t7 = *(int *)(((a4 + 0x50) + 0x18));
            t8 = *(int *)(((a4 + 0x50) + 0x20));
            t9 = *(int *)(((a4 + 0x50) + 0x24));
            t10 = *(int *)(((a4 + 0x50) + 0x4));
            t12 = (t7 - t8);
            if ((int)(t7 - t8) > (int)t9) {
                t12 = *(int *)(((a4 + 0x50) + 0x24));
            }
            t13 = *(int *)(((a4 + 0x50) + 0x14));
            t15 = t12;
            if ((int)t12 > (int)t10) {
                t15 = *(int *)(((a4 + 0x50) + 0x4));
            }
            t16 = *(int *)(((a4 + 0x50) + 0x20));
            t17 = *(signed char *)((a4 + 0xE));
            if (t17 == 2) {
                t18 = *(int *)(((a4 + 0x50) + 0x1C));
                t19 = *(int *)(((a4 + 0x50) + 0x20));
                if ((int)t15 > 0) {
                    t20 = 0x0;
                    t21 = 0x0;
                    t22 = 0x0;
                    do {
                        t23 = *(short *)((((t20 << 1) + t1) + 0x0));
                        t22 = (t22 + 0x1);
                        *(unsigned short *)((((t16 << 1) + t13) + t21)) = t23;
                        t24 = *(short *)(((((t20 + 0x1) << 1) + t1) + 0x0));
                        t20 = (t20 + 0x2);
                        *(unsigned short *)(((((t18 + t19) << 1) + t13) + t21)) = t24;
                        t21 = (t21 + 0x2);
                    } while ((int)t22 < (int)t15);
                }
            } else {
                if ((int)t15 > 0) {
                    t31 = 0x0;
                    t32 = 0x0;
                    do {
                        t33 = *(short *)((t1 + t31));
                        t32 = (t32 + 0x1);
                        *(unsigned short *)((((t16 << 1) + t13) + t31)) = t33;
                        t31 = (t31 + 0x2);
                    } while ((int)t32 < (int)t15);
                }
            }
            *(unsigned int *)((a4 + 0xA0)) = t15;
            t44 = *(signed char *)((a4 + 0xE));
            *(unsigned int *)((a4 + 0xA4)) = ((t15 * t44) << 1);
            *(unsigned int *)((a4 + 0x4)) = 0x2;
        }
    }
    t49 = *(int *)((a4 + 0x4));
    t55 = t49;
    if (t49 == 2) {
        t50 = *(int *)((a4 + 0x90));
        t51 = *(int *)((a4 + 0xA0));
        t52 = *(int *)((a4 + 0xA4));
        t53 = *(int *)((a4 + 0x94));
        t55 = ((int (*)(int, int, int))(t50))(t53, t52, t51);
        *(unsigned int *)((a4 + 0x4)) = 0x3;
    }
    return t55;
}


int ADXB_ExecOneWav8(int a4)
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
    int t12;
    int t13;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t32;
    int t33;
    int t34;
    int t35;
    int t46;
    int t49;
    int t55;
    int t50;
    int t51;
    int t52;
    int t53;

    t0 = *(int *)((a4 + 0x4));
    t1 = *(int *)(((a4 + 0x50) + 0x0));
    if (t0 == 1) {
        t2 = *(int *)((a4 + 0x8));
        t3 = ADXPD_GetStat(t2);
        if (t3 == 0) {
            t4 = *(int *)((a4 + 0x88));
            t5 = *(int *)((a4 + 0x8C));
            t6 = ((int (*)(int, int, int, int))(t4))(t5, ((a4 + 0x50) + 0x20), ((a4 + 0x50) + 0x24), ((a4 + 0x50) + 0x28));
            t7 = *(int *)(((a4 + 0x50) + 0x18));
            t8 = *(int *)(((a4 + 0x50) + 0x20));
            t9 = *(int *)(((a4 + 0x50) + 0x24));
            t10 = *(int *)(((a4 + 0x50) + 0x4));
            t12 = (t7 - t8);
            if ((int)(t7 - t8) > (int)t9) {
                t12 = *(int *)(((a4 + 0x50) + 0x24));
            }
            t13 = *(int *)(((a4 + 0x50) + 0x14));
            t15 = t12;
            if ((int)t12 > (int)t10) {
                t15 = *(int *)(((a4 + 0x50) + 0x4));
            }
            t16 = *(int *)(((a4 + 0x50) + 0x20));
            t17 = *(signed char *)((a4 + 0xE));
            if (t17 == 2) {
                t18 = *(int *)(((a4 + 0x50) + 0x1C));
                t19 = *(int *)(((a4 + 0x50) + 0x20));
                if ((int)t15 > 0) {
                    t20 = 0x0;
                    t21 = 0x0;
                    t22 = 0x0;
                    do {
                        t23 = *(signed char *)((t20 + t1));
                        *(unsigned short *)(((((t16 << 1) + t13) + t21) + 0x0)) = (((unsigned char)t23 - 128) << 8);
                        t24 = *(signed char *)((((t20 + 0x1) + t1) + 0x0));
                        t22 = (t22 + 0x1);
                        t20 = (t20 + 0x2);
                        *(unsigned short *)(((((t18 + t19) << 1) + t13) + t21)) = (((unsigned char)t24 - 128) << 8);
                        t21 = (t21 + 0x2);
                    } while ((int)t22 < (int)t15);
                }
            } else {
                if ((int)t15 > 0) {
                    t32 = (0x0 + t1);
                    t33 = (0x0 + ((t16 << 1) + t13));
                    t34 = 0x0;
                    do {
                        t35 = *(signed char *)((t32 + 0x0));
                        t32 = (t32 + 0x1);
                        t34 = (t34 + 0x1);
                        *(unsigned short *)((t33 + 0x0)) = (((unsigned char)t35 - 128) << 8);
                        t33 = (t33 + 0x2);
                    } while ((int)t34 < (int)t15);
                }
            }
            *(unsigned int *)((a4 + 0xA0)) = t15;
            t46 = *(signed char *)((a4 + 0xE));
            *(unsigned int *)((a4 + 0xA4)) = (t15 * t46);
            *(unsigned int *)((a4 + 0x4)) = 0x2;
        }
    }
    t49 = *(int *)((a4 + 0x4));
    t55 = t49;
    if (t49 == 2) {
        t50 = *(int *)((a4 + 0x90));
        t51 = *(int *)((a4 + 0xA0));
        t52 = *(int *)((a4 + 0xA4));
        t53 = *(int *)((a4 + 0x94));
        t55 = ((int (*)(int, int, int))(t50))(t53, t52, t51);
        *(unsigned int *)((a4 + 0x4)) = 0x3;
    }
    return t55;
}
