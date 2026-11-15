/* Straight-line functions with calls and guards (batch gen_g): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_float { char p[0x20]; float v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2C_int { char p[0x2C]; int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o34_int { char p[0x34]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o3A_short { char p[0x3A]; short v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_int { char p[0x40]; int v; };
struct o48_ushort { char p[0x48]; unsigned short v; };
struct o50_int { char p[0x50]; int v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o50_ushort { char p[0x50]; unsigned short v; };
struct o54_int { char p[0x54]; int v; };
struct o58_int { char p[0x58]; int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5C_int { char p[0x5C]; int v; };
struct o60_float { char p[0x60]; float v; };
struct o64_float { char p[0x64]; float v; };
struct o68_float { char p[0x68]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o8_ushort { char p[0x8]; unsigned short v; };
struct o80_int { char p[0x80]; int v; };
struct o88_int { char p[0x88]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int ADXB_CheckAiff(int);
int ADXB_CheckAu(int);
int ADXB_CheckSpsd(int);
int ADXB_CheckWav(int);
int ADXB_DecodeHeaderAdx(int, int, int);
int ADXB_DecodeHeaderAiff(int, int, int);
int ADXB_DecodeHeaderAu(int, int, int);
int ADXB_DecodeHeaderSpsd(int, int, int);
int ADXB_DecodeHeaderWav(int, int, int);
int ADXB_EvokeExpandMono(int, int);
int ADXB_EvokeExpandSte(int, int);
int CompBackupBuffer(void);
int FUN_0c01e9e2(int, int);
int FUN_0c01ead0(int, int);
int FUN_0c027f28(int);
int FUN_0c0284f6(int);
int FUN_0c02cf88(int);
int FUN_0c031aee(void);
int FUN_0c033578(int, int, float, float, float);
int FUN_0c0339fc(int);
int FUN_0c03425e(int, int, int, int);
int FUN_0c034e28(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c03ea54(void);
int FUN_0c040bec(int, int);
int FUN_0c04c138(int, int);
int FUN_0c050408(void);
int FUN_0c052d5c(int, int, int, int, float);
int FUN_0c055604(int, int);
int FUN_0c055766(int, int);
int FUN_0c057624(void);
int FUN_0c05763e(void);
int FUN_0c058ca6(int, int);
int FUN_0c05a938(int, int);
int FUN_0c05b3fc(void);
int FUN_0c05b410(void);
int FUN_0c05d1b4(int, int, float);
int FUN_0c05edbe(int);
int FUN_0c05f470(int, int, float, float);
int FUN_0c05f6fe(int);
int FUN_0c05f72a(int);
int FUN_0c05ff5c(int);
int FUN_0c0623b8(int);
int FUN_0c062466(int, int);
int FUN_0c062554(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c062bda(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c06cda4(int);
int FUN_0c06e990(int);
int FUN_0c070730(float);
int FUN_0c073a30(float, float, float);
float FUN_0c073b40(int, int);
float FUN_0c073e10(int);
int FUN_0c07acd0(int, int);
int FUN_0c07b6e6(int);
int FUN_0c07bd84(int, int);
int FUN_0c07c4d0(int);
int FUN_0c07c8be(int);
int FUN_0c07d222(int, int, int);
int FUN_0c07d3be(int, int, int);
int FUN_0c07fdc8(void);
int FUN_0c07ff00(void);
int FUN_0c16a4e4(int, int, int);
int FUN_0c16ad54(int);
int FUN_0c16ad6c(int);
int FUN_0c16ada2(int, ...);
int FUN_0c16c56c(int);
int FUN_0c16c85e(int, int, int, int, int, int, int);
int FUN_0c16c90c(int);
int PutGridPoly(int, int, float, float, float);
int Start_Pass_Judgement(int);
extern float _builtin_fipr(float *, float *);
extern int _builtin_get_imask(void);
extern void _builtin_prefetch(void *);
extern void _builtin_set_imask(int);
extern float _builtin_sqrtf(float);
int buAnalyzeBackupFileImage(int, int);
int buGetFileInfo(int, int, int);
int buGetFileSize(int, int);
int buGetLastError(int);
int buIsReady(int);
int buLoadFile(int, int, int, int);
int buStat(int);
extern int cvFsError();
int fmMngChkEmptyData(int, int);
int fmMngNum2Bit(int, int, int);
int gdFsReopenHn(int, int, int, int);
int gdc_FadeManStreamSong(int, int, int, int, int, int);
int gdc_FileLoad(int, int, int);
int gdc_PlayStreamSong(int);
static float iaFsrra(float x)
{
    return _builtin_fsrra(x);
}
int kmSetEORCallback(int, int);
int kmSetTexOverflowCallback(int, int);
int memcpy(int, int, int);
int mwRnaGetTransSw(int);
int mwlRnaAddFlshPos(int);
int mwlRnaAddWrPos(int);
int mwlRnaStartCopy(int, int, int, int, int);
int nlCloseEvent(int);
float nlFloor(float);
int nlGetMatrix(int);
int nlMultiMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlSetIntrFunction(int, int);
int nlSetIntrPriority(int, int, int, int);
int nlSubVector3op(int, int, int);
int nlSynchFunction(int);
int strlen(int);
int syCacheOCWB(int, int);
int syChainAddHandler(int, int, int, int);
int syG2DmaIsBusy(int, int);
int thunk_FUN_0c155da0(int);
int vmsfs_fclose(int, int);
int vmsfs_fgetsize(int, int);
int vmsfs_fopen(int, int, int);
int vmsfs_fread1(int, int);
int vmsfs_fseek(int, int, int);
int vmsfs_load_file_ex(int a4, int a5, int a6, int a7, int a8);
int FUN_0c058782(int a4, int a5, int a6, int a7, int a8);
int FUN_0c0622fa(int a4);
int FUN_0c16b372(int a4, int a5);
int PutCollisionObj(int a4, int a5);
int FUN_0c055548(int a4, int a5, int a6, int a7, float f4);
int FUN_0c066b3a(int a4);
int gdFsDaPauseG(void);
int syG2DmaTrigger(int a4, int a5);
int fmMngSctRefresh(int a4);
int mwlRnaInsrtSlntDat(int a4);
int ADXB_EvokeDecode(int a4);
int FUN_0c04bd7c(int a4, int a5);
int FUN_0c059f6c(int a4);
int FUN_0c05d254(int a4);
int FUN_0c0673da(int a4);
int nlInitInterrupt0(int a4);
int FUN_0c085350(int a4, int a5, int a6, float f4, float f5, float f6, float f7, float f8, float f9);
int FUN_0c0866e0(int a4, int a5, int a6, float f4, float f5, float f6, float f7, float f8, float f9);
int ADXB_DecodeHeader(int a4, int a5, int a6);
int FUN_0c0100c4(int a4, int a5);
int FUN_0c0367bc(int a4, int a5);
int FUN_0c03e2a0(int a4);
int FUN_0c047624(int a4);
int FUN_0c060e82(int a4, float f4);
int FUN_0c065080(int a4);
int FUN_0c073520(int a4, float f4, float f5);
int FUN_0c07b864(int a4, int a5, int a6, int a7);
int mwRnaAdjustBuf(int a4, int a5, int a6, int a7);
int cvFsDeleteFile(int a4, int a5, int a6, int a7);
void nlFree(int a4, int a5, int a6, int a7);
int FUN_0c01df4a(int a4, int a5, int a6);
int FUN_0c0336c8(int a4, int a5, float f4, float f5, float f6, float f7);
int nlMvChgIndexPolAttr(int a4, int a5, int a6);
int FUN_0c020176(void);
int FUN_0c020388(void);
int FUN_0c0286c6(int a4);
int FUN_0c03209c(int a4, int a5, int a6, int a7, int a8, int a9);
int FUN_0c047bda(int a4, int a5, int a6, int a7);
int FUN_0c07c738(int a4, int a5, int a6);

int vmsfs_load_file_ex(int a4, int a5, int a6, int a7, int a8)
{
    int stk[20];
    register int t2;
    register int t8;
    register int t10;
    register int t21;
    register int t29;
    register int t31;
    register int t42;
    register int t5;

    stk[11] = a8;
    *(unsigned int *)(((int)stk + 40)) = a4;
    *(unsigned int *)(((int)stk + 36)) = a5;
    *(unsigned int *)(((int)stk + 32)) = a6;
    *(unsigned int *)(((int)stk + 28)) = a7;
    if (a8 == 0) {
        t2 = vmsfs_fgetsize((*(int *)(((int)stk + 40))), (*(int *)(((int)stk + 36))));
        *(unsigned int *)(((int)stk + 16)) = t2;
        if ((int)t2 < 0) {
            return t2;
        }
        t5 = ((*(int *)(((int)stk + 16))) - (*(int *)(((int)stk + 28))));
        *(unsigned int *)(((int)stk + 44)) = t5;
        t8 = vmsfs_fopen((*(int *)(((int)stk + 40))), (*(int *)(((int)stk + 36))), (((int)stk + 4) + 0x4));
        *(unsigned int *)(((int)stk + 20)) = t8;
        if ((int)t8 < 0) {
            return t8;
        }
        *(unsigned int *)(((int)stk + 12)) = (*(int *)(((int)stk + 32)));
        t10 = *(int *)(((int)stk + 40));
        *(unsigned int *)(((int)stk + 4)) = ((t10 * 0x154) + 0xC2C8D2C);
        *(unsigned int *)((((t10 * 0x154) + 0xC2C8D2C) + 0x30)) = 0x1;
        *(unsigned int *)(((*(int *)(((int)stk + 4))) + 0x34)) = t5;
        vmsfs_fseek((*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 28))), 0x0);
        *(unsigned int *)(((int)stk + 24)) = 0x0;
        for (;;) {
            if ((unsigned int)(*(int *)(((int)stk + 24))) >= (unsigned int)t5) {
                *(unsigned int *)(((int)stk + 20)) = 0x0;
                vmsfs_fclose((*(int *)(((int)stk + 8))), 0x0);
                return (*(int *)(((int)stk + 20)));
            }
            t21 = vmsfs_fread1((*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 12))));
            *(unsigned int *)(((int)stk + 20)) = t21;
            if ((int)t21 < 0) {
                break;
            }
            *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x200);
            *(unsigned int *)(((int)stk + 24)) = ((*(int *)(((int)stk + 24))) + 0x1);
        }
    } else {
        t29 = vmsfs_fopen((*(int *)(((int)stk + 40))), (*(int *)(((int)stk + 36))), (((int)stk + 4) + 0x4));
        *(unsigned int *)(((int)stk + 20)) = t29;
        if ((int)t29 < 0) {
            return t29;
        }
        *(unsigned int *)(((int)stk + 12)) = (*(int *)(((int)stk + 32)));
        t31 = *(int *)(((int)stk + 40));
        *(unsigned int *)(((int)stk + 4)) = ((t31 * 0x154) + 0xC2C8D2C);
        *(unsigned int *)((((t31 * 0x154) + 0xC2C8D2C) + 0x30)) = 0x1;
        *(unsigned int *)(((*(int *)(((int)stk + 4))) + 0x34)) = a8;
        vmsfs_fseek((*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 28))), 0x0);
        *(unsigned int *)(((int)stk + 24)) = 0x0;
        for (;;) {
            if ((unsigned int)(*(int *)(((int)stk + 24))) >= (unsigned int)a8) {
                *(unsigned int *)(((int)stk + 20)) = 0x0;
                vmsfs_fclose((*(int *)(((int)stk + 8))), 0x0);
                return (*(int *)(((int)stk + 20)));
            }
            t42 = vmsfs_fread1((*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 12))));
            *(unsigned int *)(((int)stk + 20)) = t42;
            if ((int)t42 < 0) {
                break;
            }
            *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x200);
            *(unsigned int *)(((int)stk + 24)) = ((*(int *)(((int)stk + 24))) + 0x1);
        }
    }
    vmsfs_fclose((*(int *)(((int)stk + 8))), 0x0);
    return (*(int *)(((int)stk + 20)));
}

int FUN_0c058782(int a4, int a5, int a6, int a7, int a8)
{
    register int t0;
    register int t2;
    register int t3;
    register int t5;
    register int t6;
    register int t8;
    register int t9;
    register int t10;
    int t11;
    register int t12;
    register int t13;
    register int t14;

    t0 = (int)((unsigned int)a8 / (unsigned int)0x6);
    t2 = (int)((unsigned int)a8 % (unsigned int)0x6);
    t3 = *(signed char *)((a4 + 0x1));
    t5 = *(signed char *)((a4 + 0x0));
    t6 = *(signed char *)((a4 + 0x2));
    t8 = *(signed char *)((a4 + 0x3));
    t9 = (unsigned char)t8;
    t10 = 0xC2B33C8;
    t11 = (((unsigned char)t5 << 8) + (unsigned char)t3);
    t12 = (a4 + 0x4);
    t13 = a6;
    t14 = a6;
    for (;;) {
        if ((int)t14 >= (int)(a6 + (((unsigned char)t6 << 8) + (unsigned char)t8))) {
            break;
        }
        t9 = t14;
        t9 = (t9 << 1);
        t11 = t14;
        t9 = (t9 + t11);
        t13 = a5;
        t9 = (t9 << 2);
        t9 = (t9 << 2);
        if ((int)t13 < (int)(a5 + (((unsigned char)t5 << 8) + (unsigned char)t3))) {
            for (;;) {
                if (((int)t13 >= 0) && ((t10 = 0x30, (int)t13 < (int)t10) && (((int)t14 >= 0) && (t11 = 0x20, (int)t14 < (int)t11)))) {
                    t11 = (*(signed char *)((t12 + 0x0)));
                    t9 = (t9 + t13);
                    *(unsigned char *)((((((((((t0 << 1) + t2) - 1) << 1) + (((t0 << 1) + t2) - 1)) << 8) << 1) + 0xC2B33C8) + t9)) = t11;
                }
                t13 = (t13 + 0x1);
                t12 = (t12 + 0x1);
                if ((int)t13 >= (int)(a5 + (((unsigned char)t5 << 8) + (unsigned char)t3))) {
                    break;
                }
            }
        }
        t14 = (t14 + 0x1);
    }
    return t9;
}

int FUN_0c0622fa(int a4)
{
    int stk[10];
    register int t1;
    register int t17;
    register int t0;
    register int t2;
    int t10;

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
    FUN_0c0623b8(a4);
    FUN_0c062466(a4, ((int)stk + 0));
    if (((int)(*(int *)((a4 + 0x4))) > (int)0x1) && (t10 = *(int *)((a4 + 0x14)), t10 == 0)) {
        FUN_0c062554(a4, ((int)stk + 0), 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    } else {
        FUN_0c062bda(a4, ((int)stk + 0), 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    }
    (((struct o58_uint *)(a4))->v) = 0x1C2;
    *(unsigned int *)((a4 + 0xC)) = ((*(int *)((a4 + 0xC))) + 0x1);
    FUN_0c06cda4(a4);
    t17 = 0x0;
    if (((*(signed char *)(((a4 + 0x63) + 0x0))) & 32) != 0) {
        t17 = 0x1;
    }
    return (FUN_0c040bec(0x2, (t17 + (*(int *)((a4 + 0x14))))));
}

int FUN_0c16b372(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    *(unsigned int *)((a4 + 0x3C)) = a5;
    t0 = 0x0;
    if ((int)a5 > (int)0xFFFFFC41) {
        t1 = 0x7F;
        if ((int)a5 < 0) {
            t2 = (int)((int)(((a5 << 8) - a5) - 128) / (int)0xFFFFFC41);
            t3 = 0x7F;
            if ((int)(0x7F - (t2 << 1)) > (int)0x7F) {
            } else {
                t4 = (0x7F - (t2 << 1));
                if ((int)(0x7F - (t2 << 1)) < 0) {
                    t4 = 0x0;
                }
                t3 = t4;
            }
            t4 = t2;
            t1 = t3;
        }
        t2 = t4;
        t0 = t1;
    }
    if ((*(int *)((a4 + 0x18))) == 0) {
        t1 = t2;
        t3 = 0x0;
        for (;;) {
            if ((int)t3 >= (int)(*(int *)((a4 + 0xC)))) {
                break;
            }
            t1 = (FUN_0c07d222((*(int *)(((*(int *)((a4 + 0x1C))) + 0x4))), t3, t0));
            t3 = (t3 + 0x1);
        }
        t3 = t1;
    } else {
        t1 = t2;
        t2 = 0x0;
        for (;;) {
            if ((int)t2 >= (int)(*(int *)((a4 + 0xC)))) {
                break;
            }
            t1 = (*(short *)((a4 + 0x6)));
            t1 = (FUN_0c07d3be(t1, t2, t0));
            t2 = (t2 + 0x1);
        }
        t3 = t1;
    }
    return t3;
}

int PutCollisionObj(int a4, int a5)
{
    register int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register float u0;
    register float u1;

    u0 = nlFloor(((*(float *)((a4 + 0x0))) / ((((struct o20_float *)0xC270F2C)->v))));
    u1 = nlFloor((((((struct o8_float *)(a4))->v)) / ((((struct o20_float *)0xC270F2C)->v))));
    t3 = (((struct o8_int *)0xC270F2C)->v);
    t4 = (((struct o14_int *)0xC270F2C)->v);
    t5 = (((struct o4_int *)0xC270F2C)->v);
    t6 = 0x0;
    if (((int)((t4 * ((int)u1 - t3)) + ((int)u0 - t5)) >= 0) && ((t0 = (((struct o1C_int *)0xC270F2C)->v), (int)((t4 * ((int)u1 - t3)) + ((int)u0 - t5)) < (int)t0) && (t1 = (((struct o0_int *)0xC270F2C)->v), t2 = *(int *)(((((t4 * ((int)u1 - t3)) + ((int)u0 - t5)) << 2) + t1)), t2 != 0))) {
        t0 = *(int *)(((((t4 * ((int)u1 - t3)) + ((int)u0 - t5)) << 2) + ((((struct o0_int *)0xC270F2C)->v))));
        PutGridPoly((((((struct o4_int *)0xC270F2C)->v)) + ((int)u0 - t5)), (((((struct o8_int *)0xC270F2C)->v)) + ((int)u1 - t3)), (*(float *)((t0 + 0x0))), ((((struct o4_float *)(t0))->v)), ((((struct o20_float *)0xC270F2C)->v)));
        t0 = *(int *)(((((t4 * ((int)u1 - t3)) + ((int)u0 - t5)) << 2) + ((((struct o0_int *)0xC270F2C)->v))));
        t1 = *(short *)((t0 + 0x8));
        *(unsigned int *)((a5 + 0x0)) = t1;
        t2 = (t0 + 0xC);
        t0 = t1;
        for (;;) {
            if (t0 == 0) {
                break;
            }
            t1 = *(int *)((t2 + 0x0));
            t2 = (t2 + 0x4);
            FUN_0c02cf88(t1);
            t0 = (t0 - 1);
        }
        t6 = ((*(int *)(((((t4 * ((int)u1 - t3)) + ((int)u0 - t5)) << 2) + ((((struct o0_int *)0xC270F2C)->v))))) + 0xC);
    }
    return t6;
}

int FUN_0c055548(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;

    (((struct o4_uint *)0xC2B31A4)->v) = 0x0;
    t0 = 0xC2B31C8;
    for (;;) {
        *(unsigned int *)((t0 + 0x0)) = 0x0;
        t0 = (t0 + 0x4);
        if ((unsigned int)t0 >= (unsigned int)0xC2B31E8) {
            break;
        }
    }
    FUN_0c052d5c(0xC2B31C8, (*(int *)(((*(int *)0xC2B1DF4) + 0x0))), 0x8, a7, f4);
    if ((int)(*(int *)0xC177CF0) > (int)0x3E7) {
        *(unsigned int *)0xC177CF0 = 0x3E7;
    }
    t0 = FUN_0c055766((*(int *)(((*(int *)0xC2B1DF4) + 0x0))), 0xC177CF0);
    (((struct o0_uint *)0xC2B31F4)->v) = t0;
    if ((int)t0 <= (int)0x6) {
        (((struct o20_uint *)0xC2B31A4)->v) = (((((0x6 - t0) << 2) + (0x6 - t0)) << 1) + 0x109);
    } else {
        (((struct o20_uint *)0xC2B31A4)->v) = 0x145;
    }
    FUN_0c055604(t0, 0xC2B31C4);
    FUN_0c057624();
    FUN_0c05763e();
    *(unsigned int *)0xC2B3110 = 0x0;
    (((struct o0_uint *)0xC2B31A4)->v) = 0x0;
    (((struct o8_uint *)0xC2B31F4)->v) = 0x0;
    (((struct oC_uint *)0xC2B31F4)->v) = 0x0;
    t0 = 0x6;
    for (;;) {
        t0 = (t0 - 0x1);
        if (t0 == 0) {
            break;
        }
    }
    (((struct o10_uint *)0xC2B31F4)->v) = 0x0;
    (((struct o4_uint *)0xC2B3268)->v) = 0x0;
    (((struct o8_uint *)0xC2B3268)->v) = 0x0;
    (((struct o0_uint *)0xC2B3268)->v) = 0x0;
    (((struct o0_uint *)0xC2B3164)->v) = 0x0;
    (((struct o10_float *)0xC2B3164)->v) = 0.0f;
    (((struct o4_float *)0xC2B3164)->v) = (*(float *)0xC055684);
    (((struct o8_ushort *)0xC2B3164)->v) = 0x0;
    (((struct oC_uint *)0xC2B3164)->v) = 0x0;
    return 0xC055684;
}


int gdFsDaPauseG(void)
{
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t2 = gdFsReopenHn((*(int *)(((*(int *)0xC1737EC) + 0x14))), 0x0, 0x0, 0x0);
    t3 = 0xFFFFFFF3;
    if (t2 != 0) {
        t4 = _builtin_get_imask();
        _builtin_set_imask(0xF);
        t5 = ((int (*)(void))((*(int *)(((*(int *)(((*(int *)0xC1737EC) + 0xC))) + 0x30)))))();
        if (t5 != 0) {
            *(unsigned int *)((t2 + 0x3C)) = t5;
            (((struct o50_ushort *)(t2))->v) = 0x4;
            if ((((((struct o3A_short *)((*(int *)0xC1737EC)))->v)) != 0) && (t3 = *(int *)0xC1737EC, t1 = *(int *)((t3 + 0x2C)), (int)t1 >= (int)0x10001)) {
                *(unsigned int *)((t2 + 0x4)) = 0xC2D0D18;
                (((struct o48_ushort *)(t2))->v) = 0x8;
            } else {
                (((struct o48_ushort *)(t2))->v) = 0x6;
            }
            *(unsigned int *)(((*(int *)((t2 + 0x0))) + 0x1C)) = t2;
            t3 = ((int (*)(void))(((((struct o40_int *)((*(int *)(((*(int *)0xC1737EC) + 0xC)))))->v))))();
        }
        _builtin_set_imask(((unsigned int)(((t4 & 0xF) << 2) << 2) >> 4));
        t3 = 0x0;
        if (t5 == 0) {
            t3 = 0xFFFFFFF3;
        }
    }
    return t3;
}

int syG2DmaTrigger(int a4, int a5)
{
    int stk[3];
    register int t1;
    register int t3;
    register int t23;
    register int t15;
    register int t18;
    register int t19;

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 8)) = (_builtin_get_imask());
    _builtin_set_imask(0xF);
    t1 = *(int *)((a4 + 0x0));
    t3 = *(int *)(((*(int *)0xC1743EC) + 0x0));
    syG2DmaIsBusy(a4, ((int)stk + 0));
    t23 = 0x90180;
    if ((*(int *)(((int)stk + 0))) == 1) {
    } else {
        syCacheOCWB((((*(int *)((a4 + 0x8))) & 0x1FFFFFFF) | 0xA0000000), ((*(int *)((a4 + 0xC))) & 0x7FFFFFE0));
        *(unsigned int *)(((t3 + (((t1 << 2) << 2) << 1)) + 0x14)) = 0x0;
        *(unsigned int *)(((t3 + (((t1 << 2) << 2) << 1)) + 0x0)) = (*(int *)((a4 + 0x4)));
        *(unsigned int *)(((t3 + (((t1 << 2) << 2) << 1)) + 0x4)) = (*(int *)((a4 + 0x8)));
        *(unsigned int *)(((t3 + (((t1 << 2) << 2) << 1)) + 0x8)) = (*(int *)((a4 + 0xC)));
        *(unsigned int *)(((t3 + (((t1 << 2) << 2) << 1)) + 0xC)) = (*(int *)((a4 + 0x10)));
        t15 = 0x2;
        if ((*(int *)(((int)stk + 4))) == 0) {
            t15 = 0x0;
        }
        *(unsigned int *)(((t3 + (((t1 << 2) << 2) << 1)) + 0x10)) = (t15 | (*(int *)((a4 + 0x14))));
        *(unsigned int *)(((t3 + (((t1 << 2) << 2) << 1)) + 0x14)) = 0x1;
        *(unsigned int *)((a4 + 0x2C)) = 0x1;
        t18 = *(int *)((a4 + 0x0));
        t19 = *(int *)0xC1743EC;
        *(unsigned int *)((((t18 << 2) + (0xDC + t19)) + 0x0)) = ((*(int *)((((t18 << 2) + (0xDC + t19)) + 0x0))) + 0x1);
        *(unsigned int *)(((t3 + (((t1 << 2) << 2) << 1)) + 0x18)) = 0x1;
        t23 = 0x0;
    }
    _builtin_set_imask(((unsigned int)((((*(int *)(((int)stk + 8))) & 0xF) << 2) << 2) >> 4));
    return t23;
}

int fmMngSctRefresh(int a4)
{
    int stk[1];

    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    v0_6 = a4;
    v0_0 = (v0_6);
    v0_1 = ((*(int *)((v0_6 + 0x4))));
    if (((*(short *)((v0_6 + 0x2))) != 0)) goto L_C160986;
    v0_3 = *(int *)((v0_0 + 0xC));
    v0_4 = FUN_0c16a4e4(v0_1, v0_3, 0x40);
    v0_2 = (0xC16A4E4);
    v0_2 = (v0_1);
    v0_3 = ((v0_3 + 0x40));
    v0_6 = (v0_4);
    if ((v0_4 != 64)) goto L_C16097C;
    v0_6 = *(int *)((v0_0 + 0x14));
    v0_4 = (0x0);
    v0_2 = ((v0_2 + 0x40));
    v0_5 = (v0_6);
    if (((int)v0_6 <= 0)) goto L_C16094A;
    L_C16091C:;
    v0_6 = (0xFFFF);
    if (((unsigned short)(*(short *)((v0_3 + 0x0))) == 0xFFFF)) goto L_C160942;
    v0_6 = (fmMngChkEmptyData(v0_0, v0_3)) != 0;
    if (v0_6) goto L_C160942;
    v0_7 = FUN_0c16a4e4(v0_2, v0_3, 0x40);
    v0_6 = (v0_7);
    if ((v0_7 != 64)) goto L_C16097C;
    v0_4 = ((v0_4 + 0x1));
    v0_2 = ((v0_2 + 0x40));
    L_C160942:;
    v0_6 = (int)(v0_5 - 1) > 0;
    v0_3 = ((v0_3 + 0x40));
    v0_5 = ((v0_5 - 1));
    if (v0_6) goto L_C16091C;
    L_C16094A:;
    *(unsigned int *)(((int)stk + 0)) = (((((*(int *)((v0_0 + 0x14))) + 0x1) << 2) << 2) << 2);
    fmMngNum2Bit(v0_4, v0_3, (*(int *)((v0_0 + 0x18))));
    v0_1 = (FUN_0c16a4e4(((*(int *)(((int)stk + 0))) + v0_1), v0_3, ((((*(int *)((v0_0 + 0x18))) << 2) << 2) << 2))) == ((((*(int *)((v0_0 + 0x18))) << 2) << 2) << 2);
    if (!(v0_1)) goto L_C16097C;
    *(unsigned int *)((v0_0 + 0x10)) = v0_4;
    v0_0 = (0x0);
    goto L_C160988;
    L_C16097C:;
    v0_0 = (0xFFFFFFFE);
    L_C160988:;
    return v0_0;
    L_C160986:;
    v0_0 = (0xFFFFFFFA);
    goto L_C160988;
}

int mwlRnaInsrtSlntDat(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t0 = *(int *)((a4 + 0x28));
    t1 = *(int *)((a4 + 0x8));
    t2 = (int)((int)0x20 / (int)t1);
    t3 = (int)((int)((t0 - (*(int *)((a4 + 0x34)))) - ((((struct o54_int *)(a4))->v))) / (int)((t2 << 2) << 1));
    t4 = (((struct o50_int *)(a4))->v);
    t5 = (t0 - t4);
    if ((int)(t3 * ((t2 << 2) << 1)) < (int)(t0 - t4)) {
        t5 = (t3 * ((t2 << 2) << 1));
    }
    t0 = (int)((int)0x800 / (int)t1);
    t1 = t5;
    if ((int)t5 >= (int)((t0 << 2) << 1)) {
        t1 = ((t0 << 2) << 1);
    }
    t0 = (int)((int)t1 / (int)((t2 << 2) << 1));
    t1 = 0x0;
    if ((int)(t0 * ((t2 << 2) << 1)) > 0) {
        t3 = 0xC304120;
        if ((*(int *)((a4 + 0x8))) == 4) {
            t3 = 0xC304940;
        }
        t4 = t3;
        t5 = 0x0;
        for (;;) {
            if ((int)t5 >= (int)(unsigned char)(*(signed char *)((a4 + 0x3)))) {
                break;
            }
            t4 = a4;
            t6 = mwlRnaStartCopy(t4, t5, ((((struct o50_int *)(a4))->v)), ((t3 + 0x20) & 0xFFFFFFE0), (t0 * ((t2 << 2) << 1)));
            t5 = (t5 + 0x1);
            t4 = t6;
        }
        (((struct o58_uint *)(a4))->v) = t4;
        t1 = t4;
    }
    return t1;
}

int ADXB_EvokeDecode(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;

    t1 = (int)((int)(*(int *)(((a4 + 0x50) + 0x4))) / (int)(*(int *)(((a4 + 0x50) + 0x8))));
    t2 = *(int *)(((a4 + 0x50) + 0x28));
    t3 = *(int *)(((a4 + 0x50) + 0x10));
    t4 = *(int *)(((a4 + 0x50) + 0x20));
    t5 = *(int *)(((a4 + 0x50) + 0x24));
    t6 = (int)((int)((t2 + t3) - 1) / (int)t3);
    t7 = (int)((int)((t2 + t3) - 1) % (int)t3);
    t8 = (int)((int)((((*(int *)(((a4 + 0x50) + 0x18))) - t4) + t3) - 1) / (int)t3);
    t9 = t8;
    if (((int)t6 < (int)t8) && (t0 = *(int *)(((a4 + 0x50) + 0x18)), (int)(((t8 * t3) - ((t3 - t7) - 1)) + t4) < (int)t0)) {
        t9 = (t8 + 0x1);
    }
    t0 = t5;
    if ((int)t2 < (int)t5) {
        t0 = (t5 + ((t3 - t7) - 1));
    }
    t2 = (int)((int)t0 / (int)t3);
    t0 = t1;
    if ((int)t1 > (int)t2) {
        t0 = t2;
    }
    t1 = t0;
    if ((int)t0 > (int)t6) {
        t1 = t6;
    }
    t0 = *(int *)(((a4 + 0x50) + 0x8));
    t2 = t1;
    if ((int)t1 > (int)t9) {
        t2 = t9;
    }
    if (t0 == 2) {
        return ADXB_EvokeExpandSte(a4, t2);
    }
    return ADXB_EvokeExpandMono(a4, t2);
}

int FUN_0c04bd7c(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;
    register float u2;

    t0 = 0xFFFFFFFF;
    if (((((struct o0_int *)0xC2ADF10)->v)) != 0) {
        u0 = *(float *)((a4 + 0x0));
        u1 = (((struct o28_float *)0xC2ADF10)->v);
        u2 = (((struct o30_float *)0xC2ADF10)->v);
        (((struct o18_uint *)0xC2ADF10)->v) = (int)((u0 - u1) / u2);
        if ((int)(int)((u0 - u1) / u2) < 0) {
            (((struct o18_uint *)0xC2ADF10)->v) = 0x0;
        } else {
            t1 = (((struct o20_int *)0xC2ADF10)->v);
            if ((int)(int)((u0 - u1) / u2) >= (int)t1) {
                (((struct o18_uint *)0xC2ADF10)->v) = (t1 - 1);
            }
        }
        u0 = (((struct o8_float *)(a4))->v);
        u1 = (((struct o2C_float *)0xC2ADF10)->v);
        u2 = (((struct o34_float *)0xC2ADF10)->v);
        (((struct o1C_uint *)0xC2ADF10)->v) = (int)((u0 - u1) / u2);
        t1 = (((struct o24_int *)0xC2ADF10)->v);
        if ((int)(int)((u0 - u1) / u2) < 0) {
            (((struct o1C_uint *)0xC2ADF10)->v) = 0x0;
        } else {
            if ((int)(int)((u0 - u1) / u2) >= (int)t1) {
                (((struct o1C_uint *)0xC2ADF10)->v) = (t1 - 1);
            }
        }
        t1 = (*(int *)(((((((((struct o18_int *)0xC2ADF10)->v)) * ((((struct o24_int *)0xC2ADF10)->v))) << 2) + (((((struct o1C_int *)0xC2ADF10)->v)) << 2)) + ((((struct o4_int *)0xC2ADF10)->v)))));
        for (;;) {
            if ((*(short *)((t1 + 0x0))) == -1) {
                return 0xFFFFFFFF;
            }
            t2 = FUN_0c04c138(a4, (((((*(short *)((t1 + 0x0))) << 2) << 1) << 2) + ((((struct o0_int *)0xC2ADF10)->v))));
            if (t2 != 0) {
                break;
            }
            t1 = (t1 + 0x2);
        }
        t0 = (*(short *)((t1 + 0x0)));
    }
    return t0;
}

int FUN_0c059f6c(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    *(unsigned int *)((a4 + 0x1C)) = 0x0;
    t1 = 0x0;
    for (;;) {
        if ((*(int *)((((((t1 << 2) + t1) << 2) + (*(int *)((a4 + 0x28)))) + 0x0))) != 0) {
            t1 = (t1 + 0x1);
            if ((int)t1 >= (int)0xFF) {
                break;
            }
            continue;
        }
        break;
    }
    if ((int)t1 >= (int)0xFF) {
        *(unsigned int *)((a4 + 0x10)) = 0xFFFFFFFF;
    } else {
        *(unsigned int *)((a4 + 0x10)) = (t1 - 1);
    }
    *(unsigned int *)((a4 + 0x18)) = 0x0;
    *(unsigned int *)((a4 + 0x20)) = 0x0;
    t1 = strlen((*(int *)((a4 + 0x24))));
    *(unsigned int *)((a4 + 0x14)) = (t1 - 3);
    t2 = (t1 - 3);
    t1 = t0;
    t0 = 0x0;
    for (;;) {
        if ((int)t0 > (int)(*(int *)((a4 + 0x10)))) {
            break;
        }
        t1 = t0;
        t1 = (t1 << 2);
        t1 = (t1 + t0);
        t1 = (t1 << 2);
        t1 = (t1 + (*(int *)((a4 + 0x28))));
        t1 = (*(int *)((t1 + 0x0)));
        t2 = (strlen(t1));
        t1 = t2;
        t0 = (t0 + 0x1);
        if ((int)t1 > (int)(*(int *)((a4 + 0x14)))) {
            *(unsigned int *)((a4 + 0x14)) = t1;
        }
    }
    if ((int)(*(int *)((a4 + 0x0))) <= 0) {
        *(unsigned int *)((a4 + 0x0)) = (((-(*(int *)((a4 + 0x14)))) - (*(int *)((a4 + 0x0)))) + 0x4E);
    }
    if ((int)(*(int *)((a4 + 0x4))) <= 0) {
        *(unsigned int *)((a4 + 0x4)) = (((-(*(int *)((a4 + 0x10)))) - (*(int *)((a4 + 0x4)))) + 0x38);
    }
    if ((int)(*(int *)((a4 + 0x8))) <= 0) {
        *(unsigned int *)((a4 + 0x8)) = ((*(int *)((a4 + 0x14))) + 0x4);
    }
    if ((int)(*(int *)((a4 + 0xC))) <= 0) {
        *(unsigned int *)((a4 + 0xC)) = ((*(int *)((a4 + 0x10))) + 0x3);
    }
    return t2;
}

int FUN_0c05d254(int a4)
{
    int stk[28];
    register float t2;
    register float t3;
    register int t4;
    register float t5;
    register int t6;
    register float u10;
    register float u13;
    register float u16;
    register float u20;
    register int t21;

    nlGetMatrix((((int)stk + 0) + 0x30));
    nlSubVector3op((((int)stk + 0) + 0x24), a4, (((int)stk + 0) + 0x60));
    t2 = FUN_0c073e10((((int)stk + 0) + 0x24));
    t3 = FUN_0c073b40((((int)stk + 0) + 0x24), (((int)stk + 0) + 0x30));
    t4 = FUN_0c070730(t3);
    t5 = FUN_0c073b40((((int)stk + 0) + 0x24), (((int)stk + 0) + 0x40));
    t6 = t4;
    if (0.0f > t5) {
        t6 = (-t4);
    }
    nlRotateAZ(t6);
    u10 = (t2 * t2);
    u13 = (t2 * ((((struct oC_float *)(a4))->v)));
    *(unsigned int *)((a4 + 0x1C)) = (FUN_0c070730((((u10 + ((((struct o10_float *)(a4))->v))) - ((((struct o18_float *)(a4))->v))) / (u13 * (1.0f + 1.0f)))));
    u16 = (t2 * t2);
    u20 = (((((struct oC_float *)(a4))->v)) * ((((struct o14_float *)(a4))->v)));
    t21 = FUN_0c070730((((u16 - ((((struct o10_float *)(a4))->v))) - ((((struct o18_float *)(a4))->v))) / (u20 * (1.0f + 1.0f))));
    *(unsigned int *)((a4 + 0x20)) = (-t21);
    return (-t21);
}

int FUN_0c0673da(int a4)
{
    register int t1;

    t1 = *(int *)0xC175C80;
    if ((int)t1 < (int)0x10) {
        FUN_0c073a30(((*(float *)((((((t1 << 1) + t1) << 2) + 0xC10E9B8) + 0x0))) + (*(float *)((((((a4 << 1) + a4) << 2) + 0xC10E970) + 0x0)))), (((((struct o4_float *)(((((t1 << 1) + t1) << 2) + 0xC10E9B8)))->v)) + ((((struct o4_float *)(((((a4 << 1) + a4) << 2) + 0xC10E970)))->v))), (((((struct o8_float *)(((((t1 << 1) + t1) << 2) + 0xC10E9B8)))->v)) + ((((struct o8_float *)(((((a4 << 1) + a4) << 2) + 0xC10E970)))->v))));
        return nlRotateAY(0x8000);
    }
    return FUN_0c073a30(((*(float *)((((((t1 << 1) + t1) << 2) + 0xC10E9B8) + 0x0))) - (*(float *)((((((a4 << 1) + a4) << 2) + 0xC10E970) + 0x0)))), (((((struct o4_float *)(((((t1 << 1) + t1) << 2) + 0xC10E9B8)))->v)) + ((((struct o4_float *)(((((a4 << 1) + a4) << 2) + 0xC10E970)))->v))), (((((struct o8_float *)(((((t1 << 1) + t1) << 2) + 0xC10E9B8)))->v)) + ((((struct o8_float *)(((((a4 << 1) + a4) << 2) + 0xC10E970)))->v))));
}

int nlInitInterrupt0(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = _builtin_get_cr();
    _builtin_set_cr((_builtin_get_cr() & 0xFFFFFFFF) | 0x10000000);
    t1 = 0x0;
    for (;;) {
        *(unsigned int *)((0xC2C3D30 + t1)) = 0x0;
        *(unsigned int *)((0xC2C3D64 + t1)) = 0xFFFFFFFF;
        t1 = (t1 + 0x4);
        if ((unsigned int)t1 >= (unsigned int)0x34) {
            break;
        }
    }
    t1 = 0x0;
    t2 = 0xC113E8A;
    for (;;) {
        nlSetIntrPriority((*(short *)((t2 + 0x0))), (*(short *)((t2 + 0x2))), 0xFFFFFFFF, 0xC2C3D30);
        t1 = (t1 + 0x1);
        t2 = (t2 + 0x4);
        if ((int)t1 >= (int)0xC) {
            break;
        }
    }
    t1 = 0x0;
    for (;;) {
        nlSetIntrFunction(t1, 0x0);
        t1 = (t1 + 0x1);
        if ((int)t1 >= (int)0xD) {
            break;
        }
    }
    nlSynchFunction(0x0);
    kmSetEORCallback(0xC0782F0, 0x0);
    (((struct o0_uint *)0xC2C3D68)->v) = (syChainAddHandler(0x900, 0xC078310, 0x58, 0x0));
    (((struct o4_uint *)0xC2C3D68)->v) = (syChainAddHandler(0x920, 0xC078330, 0x0, 0x0));
    if (a4 != 0) {
        (((struct o8_uint *)0xC2C3D68)->v) = (syChainAddHandler(0xA40, 0xC078350, 0x0, 0x0));
        (((struct oC_uint *)0xC2C3D68)->v) = (syChainAddHandler(0xB00, 0xC078380, 0x0, 0x0));
    }
    kmSetTexOverflowCallback(0xC0783B0, 0x0);
    t1 = thunk_FUN_0c155da0(0x0);
    _builtin_set_cr((t0 & 0xFFFFFFFF));
    return t1;
}

int FUN_0c085350(int a4, int a5, int a6, float f4, float f5, float f6, float f7, float f8, float f9)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
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
    float u30[4];
    float u31[4];
    float u38[4];
    float u39[4];

    u0 = *(float *)(((a4 - 64) + 0x0));
    u1 = (((struct o4_float *)((a4 - 64)))->v);
    u2 = (((struct o4_float *)(((a4 - 64) + 0x4)))->v);
    u3 = (((struct o4_float *)((((a4 - 64) + 0x4) + 0x4)))->v);
    *(unsigned int *)0xC2C62B0 = 0x0;
    t0 = *(int *)0xC147748;
    t1 = (int)(((unsigned int)t0) & 1);
    t2 = 0xC2C62B0;
    t3 = a6;
    t4 = 0x0;
    t5 = 0x1;
    t6 = ((unsigned int)t0 >> 1);
    t0 = 0xC2C4148;
    u4 = f8;
    u5 = f9;
    for (;;) {
        if (t1 != 0) {
            t2 = (*(short *)((t0 + 0x2)));
            t3 = t0;
            t3 = (t3 + 0x74);
            t7 = 0xA0;
            if (t2 != 2) {
                u6 = (*(float *)((t3 + 0x0)));
                t3 = (t3 + 0x4);
                u6 = (u6 - u0);
                t8 = 0;
                if (t2 != 3) {
                    t8 = ((t2 == 4));
                } else {
                    t8 = (1);
                }
                u7 = (*(float *)((t3 + 0x0)));
                t3 = (t3 + 0x4);
                u5 = u6;
                if (t8) {
                    u5 = (u5 * u5);
                    u8 = (*(float *)((t3 + 0x0)));
                    t3 = (t3 + 0x4);
                    t7 = (t7 + t0);
                    u7 = (u7 - u1);
                    _builtin_prefetch((void *)t7);
                    u8 = (u8 - u2);
                    u9 = 0.0f;
                    u4 = (*(float *)((t7 + 0x0)));
                    u4 = (u4 + u3);
                    u30[0] = u6;
                    u30[1] = u7;
                    u30[2] = u8;
                    u30[3] = u9;
                    u31[0] = u6;
                    u31[1] = u7;
                    u31[2] = u8;
                    u31[3] = u9;
                    u9 = (_builtin_fipr(u30, u31));
                    u4 = (u4 * u4);
                    if ((t2 != 3)) {
                        u10 = 0.0f;
                        if (!(u9 > u4)) {
                            t2 = 0xFFFFFF80;
                            u5 = u9;
                            t2 = (unsigned char)t2;
                            u5 = (iaFsrra(u5));
                            t2 = (t2 + t0);
                            if (!(u3 > u9)) {
                                u11 = (*(float *)((t2 + 0x0)));
                                t2 = (t2 + 0x4);
                                u12 = (*(float *)((t2 + 0x0)));
                                t2 = (t2 + 0x4);
                                u9 = 0.0f;
                                u13 = (*(float *)((t2 + 0x0)));
                                t2 = (t2 + 0x4);
                                u38[0] = u6;
                                u38[1] = u7;
                                u38[2] = u8;
                                u38[3] = u9;
                                u39[0] = u11;
                                u39[1] = u12;
                                u39[2] = u13;
                                u39[3] = u10;
                                u10 = (_builtin_fipr(u38, u39));
                                u10 = (-u10);
                                if (!(u9 > u10)) {
                                    t2 = (t2 - 52);
                                    u10 = (u10 * u5);
                                    u11 = (*(float *)((t2 + 0x0)));
                                    t2 = (t2 + 0x4C);
                                    u12 = (*(float *)((t2 + 0x0)));
                                    t2 = (t2 + 0x4);
                                    if (u11 > u10) {
                                        u5 = (u5 * u3);
                                        u12 = (u12 * u5);
                                        u13 = 1.0f;
                                        u5 = (u5 * u5);
                                        u13 = (u13 - u5);
                                        u13 = _builtin_sqrtf(u13);
                                        u11 = (u11 * u13);
                                        u11 = (u11 - u12);
                                        if (!(u11 > u10)) {
                                            t4 = (t4 | t5);
                                        }
                                    } else {
                                        t4 = (t4 | t5);
                                    }
                                }
                            } else {
                                t4 = (t4 | t5);
                            }
                        }
                    } else {
                        if (!(u9 > u4)) {
                            t4 = (t4 | t5);
                        }
                    }
                }
            } else {
                t4 = (t4 | t5);
            }
        }
        t5 = (t5 << 1);
        t0 = (t0 + 0xB0);
        t7 = t6 == 0;
        t6 = ((unsigned int)t6 >> 1);
        if (t7) {
            break;
        }
    }
    *(unsigned int *)0xC2C62B0 = t4;
    return 0xC2C62B0;
}

int FUN_0c0866e0(int a4, int a5, int a6, float f4, float f5, float f6, float f7, float f8, float f9)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
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
    float u30[4];
    float u31[4];
    float u38[4];
    float u39[4];

    u0 = *(float *)(((a4 - 64) + 0x0));
    u1 = (((struct o4_float *)((a4 - 64)))->v);
    u2 = (((struct o4_float *)(((a4 - 64) + 0x4)))->v);
    u3 = (((struct o4_float *)((((a4 - 64) + 0x4) + 0x4)))->v);
    *(unsigned int *)0xC2C6550 = 0x0;
    t0 = *(int *)0xC147748;
    t1 = (int)(((unsigned int)t0) & 1);
    t2 = 0xC2C6550;
    t3 = a6;
    t4 = 0x0;
    t5 = 0x1;
    t6 = ((unsigned int)t0 >> 1);
    t0 = 0xC2C4148;
    u4 = f8;
    u5 = f9;
    for (;;) {
        if (t1 != 0) {
            t2 = (*(short *)((t0 + 0x2)));
            t3 = t0;
            t3 = (t3 + 0x74);
            t7 = 0xA0;
            if (t2 != 2) {
                u6 = (*(float *)((t3 + 0x0)));
                t3 = (t3 + 0x4);
                u6 = (u6 - u0);
                t8 = 0;
                if (t2 != 3) {
                    t8 = ((t2 == 4));
                } else {
                    t8 = (1);
                }
                u7 = (*(float *)((t3 + 0x0)));
                t3 = (t3 + 0x4);
                u5 = u6;
                if (t8) {
                    u5 = (u5 * u5);
                    u8 = (*(float *)((t3 + 0x0)));
                    t3 = (t3 + 0x4);
                    t7 = (t7 + t0);
                    u7 = (u7 - u1);
                    _builtin_prefetch((void *)t7);
                    u8 = (u8 - u2);
                    u9 = 0.0f;
                    u4 = (*(float *)((t7 + 0x0)));
                    u4 = (u4 + u3);
                    u30[0] = u6;
                    u30[1] = u7;
                    u30[2] = u8;
                    u30[3] = u9;
                    u31[0] = u6;
                    u31[1] = u7;
                    u31[2] = u8;
                    u31[3] = u9;
                    u9 = (_builtin_fipr(u30, u31));
                    u4 = (u4 * u4);
                    if ((t2 != 3)) {
                        u10 = 0.0f;
                        if (!(u9 > u4)) {
                            t2 = 0xFFFFFF80;
                            u5 = u9;
                            t2 = (unsigned char)t2;
                            u5 = (iaFsrra(u5));
                            t2 = (t2 + t0);
                            if (!(u3 > u9)) {
                                u11 = (*(float *)((t2 + 0x0)));
                                t2 = (t2 + 0x4);
                                u12 = (*(float *)((t2 + 0x0)));
                                t2 = (t2 + 0x4);
                                u9 = 0.0f;
                                u13 = (*(float *)((t2 + 0x0)));
                                t2 = (t2 + 0x4);
                                u38[0] = u6;
                                u38[1] = u7;
                                u38[2] = u8;
                                u38[3] = u9;
                                u39[0] = u11;
                                u39[1] = u12;
                                u39[2] = u13;
                                u39[3] = u10;
                                u10 = (_builtin_fipr(u38, u39));
                                u10 = (-u10);
                                if (!(u9 > u10)) {
                                    t2 = (t2 - 52);
                                    u10 = (u10 * u5);
                                    u11 = (*(float *)((t2 + 0x0)));
                                    t2 = (t2 + 0x4C);
                                    u12 = (*(float *)((t2 + 0x0)));
                                    t2 = (t2 + 0x4);
                                    if (u11 > u10) {
                                        u5 = (u5 * u3);
                                        u12 = (u12 * u5);
                                        u13 = 1.0f;
                                        u5 = (u5 * u5);
                                        u13 = (u13 - u5);
                                        u13 = _builtin_sqrtf(u13);
                                        u11 = (u11 * u13);
                                        u11 = (u11 - u12);
                                        if (!(u11 > u10)) {
                                            t4 = (t4 | t5);
                                        }
                                    } else {
                                        t4 = (t4 | t5);
                                    }
                                }
                            } else {
                                t4 = (t4 | t5);
                            }
                        }
                    } else {
                        if (!(u9 > u4)) {
                            t4 = (t4 | t5);
                        }
                    }
                }
            } else {
                t4 = (t4 | t5);
            }
        }
        t5 = (t5 << 1);
        t0 = (t0 + 0xB0);
        t7 = t6 == 0;
        t6 = ((unsigned int)t6 >> 1);
        if (t7) {
            break;
        }
    }
    *(unsigned int *)0xC2C6550 = t4;
    return 0xC2C6550;
}

int ADXB_DecodeHeader(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(short *)((a5 + 0x0));
    if ((unsigned short)((unsigned char)((int)(unsigned short)t0 >> 8) | (((unsigned short)t0 << 8) & 0xFF00)) == 0x8000) {
        return ADXB_DecodeHeaderAdx(a4, a5, a6);
    }
    t0 = ADXB_CheckSpsd(a5);
    if (t0 != 0) {
        return ADXB_DecodeHeaderWav(a4, a5, a6);
    }
    t0 = ADXB_CheckWav(a5);
    if (t0 != 0) {
        return ADXB_DecodeHeaderSpsd(a4, a5, a6);
    }
    t0 = ADXB_CheckAiff(a5);
    if (t0 != 0) {
        return ADXB_DecodeHeaderAiff(a4, a5, a6);
    }
    t0 = ADXB_CheckAu(a5);
    if (t0 != 0) {
        return ADXB_DecodeHeaderAu(a4, a5, a6);
    }
    return 0x0;
}

int FUN_0c0100c4(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t33;
    register int t25;
    register int t35;

    *(unsigned int *)(((int)stk + 4)) = a5;
    if (a4 != 0) {
        if (a4 != 1) {
            if (a4 != 2) {
                if (a4 != 3) {
                    if (a4 != 4) {
                        if (a4 != 5) {
                            if (a4 != 6) {
                                if (a4 != 7) {
                                    t0 = 0xA;
                                    if ((int)a4 < (int)0x10) {
                                        t0 = 0x9;
                                    }
                                    t25 = (FUN_0c05a938(t0, ((int)stk + 0)));
                                } else {
                                    t25 = (FUN_0c05a938(0x3, ((int)stk + 0)));
                                }
                            } else {
                                t25 = (FUN_0c05a938(0x2, ((int)stk + 0)));
                            }
                        } else {
                            t25 = (FUN_0c05a938(0x1, ((int)stk + 0)));
                        }
                    } else {
                        t25 = (FUN_0c05a938(0x0, ((int)stk + 0)));
                    }
                } else {
                    t25 = (FUN_0c05a938(0x8, ((int)stk + 0)));
                }
            } else {
                t25 = (FUN_0c05a938(0x7, ((int)stk + 0)));
            }
        } else {
            t25 = (FUN_0c05a938(0x6, ((int)stk + 0)));
        }
    } else {
        t25 = (FUN_0c05a938(0x5, ((int)stk + 0)));
    }
    if ((*(int *)(((int)stk + 4))) == 0) {
        if ((int)a4 < (int)0x8) {
            *(unsigned int *)((0xC175C90 + (a4 << 2))) = (*(int *)(((int)stk + 0)));
            t35 = (a4 << 2);
        } else {
            *(unsigned int *)0xC175CB0 = (*(int *)(((int)stk + 0)));
            t35 = t25;
        }
    } else {
        t33 = 0xC175C90;
        for (;;) {
            *(unsigned int *)((t33 + 0x0)) = (*(int *)(((int)stk + 0)));
            t33 = (t33 + 0x4);
            if ((unsigned int)t33 >= (unsigned int)0xC175CB4) {
                break;
            }
        }
        t35 = t25;
    }
    return t35;
}

int FUN_0c0367bc(int a4, int a5)
{
    int stk[5];
    register int t3;
    int t7;
    register int t49;
    register int t50;
    register int t56;
    register int t57;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = ((((struct o0_int *)0xC2A4668)->v));
    if ((*(int *)(((int)stk + 4))) != 0) {
        t3 = FUN_0c03425e(0x0, ((int)stk + 0), 0x4, 0x0);
        if (t3 == 1) {
            (((struct o0_uint *)0xC2A4668)->v) = (*(int *)(((int)stk + 0)));
        }
        t7 = (((struct o8_int *)0xC2A4668)->v);
        if ((0x2 & t7) != 0) {
            if ((0x4 & ((((struct o34_int *)0xC2A4668)->v))) != 0) {
                *(unsigned int *)0xC12B9DC = 0x258;
                FUN_0c01ead0(((((struct o0_int *)0xC2A4668)->v)), 0x0);
                FUN_0c01e9e2(((*(int *)0xC12B9DC) - 120), 0x78);
            } else {
                t49 = t7;
                t50 = 0x4;
            }
        } else {
            if ((t7 & 0x4) != 0) {
                *(unsigned int *)0xC12B9DC = 0x0;
            }
            t49 = t7;
            t50 = 0x4;
        }
        if ((int)(*(int *)0xC12B9DC) > 0) {
            *(unsigned int *)0xC12B9DC = ((*(int *)0xC12B9DC) - 1);
        }
    } else {
        if ((int)(*(int *)0xC12B9DC) > 0) {
            *(unsigned int *)0xC12B9DC = 0x0;
        }
        t49 = a4;
        t50 = a5;
    }
    if ((*(int *)0xC12B9DC) == 0) {
        *(unsigned int *)0xC12B9DC = 0xFFFFFFFF;
        gdc_PlayStreamSong(0x0);
    } else {
    }
    gdc_FadeManStreamSong(t49, t50, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4));
    if ((*(int *)(((int)stk + 4))) != 0) {
        t56 = 0x80213;
        t57 = (*(int *)(((int)stk + 0)));
    } else {
        t56 = 0x213;
        t57 = (*(int *)(((int)stk + 0)));
    }
    return (FUN_0c034e28(t56, 0xC0B4FBC, 0x4, t57, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28)));
}

int FUN_0c03e2a0(int a4)
{
    int t0;
    register int t1;
    register int t2;

    if (a4 == 0) {
        (((struct o0_uint *)0xC2A4F80)->v) = 0x3;
    } else {
        (((struct o0_uint *)0xC2A4F80)->v) = 0x1;
    }
    if ((a4 == 0) && (t0 = *(int *)0xC2A46E4, t0 == 0)) {
        *(unsigned int *)0xC2A46E4 = 0x1;
    }
    (((struct o8_uint *)0xC2A4F80)->v) = ((((struct o0_int *)0xC1EC740)->v));
    (((struct oC_uint *)0xC2A4F80)->v) = ((((struct o4_int *)0xC1EC740)->v));
    if (((((struct o0_int *)0xC1EC740)->v)) != 3) {
        (((struct o0_uint *)0xC1EC740)->v) = 0x3;
        (((struct o4_uint *)0xC1EC740)->v) = 0x0;
    }
    if ((*(int *)0xC175C84) == 1) {
        (((struct o0_uint *)0xC2A4F80)->v) = 0x3;
        (((struct o28_uint *)0xC2A4F80)->v) = ((((struct o2C_int *)0xC2A4F80)->v));
        return FUN_0c0339fc(0x12);
    }
    t0 = FUN_0c03ea54();
    if ((*(int *)0xC2A46E4) == 0) {
        return FUN_0c031aee();
    }
    if (a4 != 0) {
        t1 = CompBackupBuffer();
        if (t1 != 1) {
            return FUN_0c0339fc(0x0);
        }
        if ((int)((((struct o0_int *)0xC2A4F80)->v)) <= (int)0x1) {
            t2 = (((struct o2C_int *)0xC2A4F80)->v);
            if ((int)t2 >= 0) {
                (((struct o28_uint *)0xC2A4F80)->v) = t2;
                return FUN_0c0339fc(0x6);
            }
            return t1;
        }
        return FUN_0c0339fc(0x6);
    }
    if ((int)((((struct o0_int *)0xC2A4F80)->v)) <= (int)0x1) {
        t1 = (((struct o2C_int *)0xC2A4F80)->v);
        if ((int)t1 >= 0) {
            (((struct o28_uint *)0xC2A4F80)->v) = t1;
            return FUN_0c0339fc(0x6);
        }
        return t0;
    }
    return FUN_0c0339fc(0x6);
}


int FUN_0c060e82(int a4, float f4)
{
    int stk[3];
    register int t2;
    register float u5;
    register int t23;
    register int t32;
    register int t48;
    register int t64;
    register int t76;
    int t29;
    int t45;
    int t61;

    if (((*(signed char *)0xC2B9C5B) & 32) == 0) {
        t2 = FUN_0c05ff5c(((*(int *)((a4 + 0x0))) + 0x70));
        u5 = 11686.0f;
        if (((((struct o0_int *)0xC2B9C1C)->v)) == 0xC8C0734) {
            u5 = 15045.0f;
        }
        if (!(0.0f > ((float)((*(int *)((((((struct o0_int *)0xC2B9C1C)->v)) + 0x0))) * t2) / u5))) {
            *(volatile int *)(((int)stk + 0));
        }
    }
    t23 = *(int *)((a4 + 0xC));
    if (t23 == 3) {
        if ((int)((((struct o80_int *)((*(int *)((a4 + 0x0)))))->v)) < (int)0x4) {
            t76 = 0x80;
            if ((int)t23 > (int)0x3) {
                t32 = 0xC8C15D4;
                if ((((((struct o0_int *)0xC2B9C1C)->v)) != 0xC8C0734) && (t29 = (((struct o14_int *)0xC2B9C1C)->v), t29 != 0xC8C0734)) {
                    t32 = 0xC8C1E8C;
                }
                FUN_0c05f470(0xC2B9C1C, t32, 0.0f, 0.0f);
                (((struct o8_float *)0xC2B9C1C)->v) = 1.0f;
                (((struct oC_uint *)0xC2B9C1C)->v) = 0x0;
                *(unsigned int *)0xC2B9CA0 = ((*(int *)0xC2B9CA0) + 0x1);
                t76 = 0xC2B9CA0;
            }
        } else {
            t48 = 0xC8C15D4;
            if ((((((struct o0_int *)0xC2B9C1C)->v)) != 0xC8C0734) && (t45 = (((struct o14_int *)0xC2B9C1C)->v), t45 != 0xC8C0734)) {
                t48 = 0xC8C1E8C;
            }
            FUN_0c05f470(0xC2B9C1C, t48, 0.0f, 0.0f);
            (((struct o8_float *)0xC2B9C1C)->v) = 1.0f;
            (((struct oC_uint *)0xC2B9C1C)->v) = 0x0;
            *(unsigned int *)0xC2B9CA0 = ((*(int *)0xC2B9CA0) + 0x1);
            t76 = 0xC2B9CA0;
        }
    } else {
        t76 = t23;
        if ((int)t23 > (int)0x3) {
            t64 = 0xC8C15D4;
            if ((((((struct o0_int *)0xC2B9C1C)->v)) != 0xC8C0734) && (t61 = (((struct o14_int *)0xC2B9C1C)->v), t61 != 0xC8C0734)) {
                t64 = 0xC8C1E8C;
            }
            FUN_0c05f470(0xC2B9C1C, t64, 0.0f, 0.0f);
            (((struct o8_float *)0xC2B9C1C)->v) = 1.0f;
            (((struct oC_uint *)0xC2B9C1C)->v) = 0x0;
            *(unsigned int *)0xC2B9CA0 = ((*(int *)0xC2B9CA0) + 0x1);
            t76 = 0xC2B9CA0;
        }
    }
    return t76;
}


int FUN_0c073520(int a4, float f4, float f5)
{
    int stk[16];
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u5;
    register float u6;
    register float u7;
    register float u8;
    register float u10;
    register float u12;
    register float u14;
    register float u16;
    register float u18;
    register float u19;
    register float u21;
    register float u23;
    register float u25;
    register float u26;

    u0 = *(float *)((a4 + 0x0));
    u1 = (((struct o4_float *)(a4))->v);
    u2 = (((struct o8_float *)(a4))->v);
    u3 = ((1.0f - f5) * u0);
    u5 = ((1.0f - f5) * u1);
    u6 = ((1.0f - f5) * u0);
    u7 = (1.0f - ((u0 * u0)));
    u8 = (u0 * u0);
    u8 = u8 + f5 * u7;
    *(float *)(((int)stk + 0)) = u8;
    u10 = (u3 * u1);
    u12 = (f4 * u2);
    *(float *)(((int)stk + 4)) = (((f4 * u2)) + u10);
    u14 = (f4 * u1);
    u16 = (u6 * u2);
    *(float *)(((int)stk + 8)) = (((u6 * u2)) - u14);
    *(float *)(((int)stk + 16)) = (((u3 * u1)) - u12);
    u18 = (1.0f - ((u1 * u1)));
    u19 = (u1 * u1);
    u19 = u19 + f5 * u18;
    u21 = (u5 * u2);
    u23 = (f4 * u0);
    *(float *)(((int)stk + 20)) = u19;
    *(float *)(((int)stk + 24)) = (((f4 * u0)) + u21);
    *(float *)(((int)stk + 32)) = (((f4 * u1)) + u16);
    *(float *)(((int)stk + 36)) = (((u5 * u2)) - u23);
    u25 = (1.0f - ((u2 * u2)));
    u26 = (u2 * u2);
    u26 = u26 + f5 * u25;
    *(float *)(((int)stk + 40)) = u26;
    (((struct o38_float *)(((int)stk + 0)))->v) = 0.0f;
    (((struct o34_float *)(((int)stk + 0)))->v) = 0.0f;
    (((struct o30_float *)(((int)stk + 0)))->v) = 0.0f;
    (((struct o2C_float *)(((int)stk + 0)))->v) = 0.0f;
    (((struct o1C_float *)(((int)stk + 0)))->v) = 0.0f;
    (((struct oC_float *)(((int)stk + 0)))->v) = 0.0f;
    *(float *)(((int)stk + 60)) = 1.0f;
    return (nlMultiMatrix(((int)stk + 0)));
}

int FUN_0c07b864(int a4, int a5, int a6, int a7)
{
    register int t30;
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t30 = 0xFFFFFFFF;
    if (((int)a5 >= 0) && ((int)a5 < (int)0x8)) {
        t0 = a4;
        t1 = 0x0;
        t2 = 0xC114028;
        for (;;) {
            t3 = *(signed char *)((t2 + 0x0));
            t2 = (t2 + 0x1);
            t4 = *(signed char *)((t0 + 0x0));
            t0 = (t0 + 0x1);
            if (t4 != t3) {
                break;
            }
            t1 = (t1 + 0x1);
            if ((int)t1 >= (int)0x4) {
                t0 = a5;
                t0 = (t0 << 1);
                t0 = (t0 + a5);
                t0 = (t0 << 2);
                t0 = (signed char)t0;
                t0 = (*(int *)((0xC2C3F88 + t0)));
                if (t0 != -1) {
                    t0 = 0xFFFFFFFD;
                    return t0;
                }
                t2 = (*(int *)((a4 + 0x8)));
                t0 = (FUN_0c07b6e6(0xA0800088));
                if (a6 != 0) {
                    if (((0x3 & a6) == 0) && ((int)a6 >= (int)t2)) {
                        t2 = a6;
                        t2 = (t2 + ((((struct o0_int *)0xC2C3E70)->v)));
                        if ((int)t2 > (int)t0) {
                            t0 = 0xFFFFFFFC;
                            return t0;
                        }
                        if ((*(int *)((((((struct o34_int *)0xC2C3E70)->v)) + 0x0))) != 0) {
                            t0 = 0xFFFFFFFB;
                            return t0;
                        }
                        t0 = 0x0;
                        return t0;
                    }
                    t0 = 0xFFFFFFFA;
                    return t0;
                }
                t2 = (t2 + ((((struct o0_int *)0xC2C3E70)->v)));
                if ((int)t2 > (int)t0) {
                    t0 = 0xFFFFFFFC;
                    return t0;
                }
                if ((*(int *)((((((struct o34_int *)0xC2C3E70)->v)) + 0x0))) != 0) {
                    t0 = 0xFFFFFFFB;
                    return t0;
                }
                t0 = 0x0;
                return t0;
            }
        }
        t30 = 0xFFFFFFFE;
    }
    return t30;
}

int mwRnaAdjustBuf(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t3;
    register int t12;
    register int t13;
    register int t16;
    register int t18;
    register int t29;
    int t11;

    if (a4 == 0) {
        *(int *)((int)stk + 0) = 0xC171714;
        return (FUN_0c16ada2(0xC171714));
    }
    FUN_0c16ad54((((int)stk + 4) + 0x4));
    if ((unsigned char)(*(signed char *)((a4 + 0x5))) == 1) {
        t3 = mwRnaGetTransSw(a4);
        if (t3 == 1) {
            mwlRnaAddWrPos(a4);
        } else {
            mwlRnaAddFlshPos(a4);
        }
        *(unsigned char *)((a4 + 0x5)) = 0x0;
    }
    if (((*(int *)((a4 + 0x30))) != 0) && (t11 = *(int *)((a4 + 0x34)), (int)t11 > 0)) {
        t12 = *(int *)((a4 + 0x38));
        t13 = *(int *)((a4 + 0x30));
        *(unsigned int *)(((int)stk + 12)) = t12;
        t16 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))(((((struct o54_int *)((*(int *)((t12 + 0x0)))))->v))))(t12, t13, ((int)stk + 4), a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
        if (((((struct o88_int *)(a4))->v)) == 2) {
            t18 = *(int *)((a4 + 0x28));
            (((struct o50_uint *)(a4))->v) = ((int)((int)((((((struct o50_int *)(a4))->v)) + t18) - (*(int *)(((int)stk + 4)))) % (int)t18));
        }
        t29 = *(int *)((a4 + 0x28));
        *(unsigned int *)((a4 + 0x2C)) = ((int)((int)(((*(int *)((a4 + 0x2C))) + t29) - (*(int *)(((int)stk + 4)))) % (int)t29));
        *(unsigned int *)((a4 + 0x30)) = (((*(int *)((a4 + 0x30))) + t16) - (*(int *)(((int)stk + 4))));
        *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) - t16);
    }
    return (FUN_0c16ad6c((((int)stk + 4) + 0x4)));
}

int cvFsDeleteFile(int a4, int a5, int a6, int a7)
{
    int stk[18];

    register int R1;
    register int R2;
    register int R3;
    register int R9;
    register int R10;
    register int R11;
    register int R12;
    register float F15;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    v0_3 = a4;
    v0_0 = a5;
    v0_1 = a6;
    v0_2 = a7;
    if ((v0_3 == 0)) goto L_C16D31C;
    FUN_0c16c85e((((int)stk + 0) + 0x24), ((int)stk + 0), v0_3, v0_2, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8));
    v0_3 = (((int)stk + 0));
    v0_4 = ((((int)stk + 0) + 0x24));
    if (((*(signed char *)((((int)stk + 0) + 0x0))) != 0)) goto L_C16D326;
    L_C16D31C:;
    v0_0 = ((int (*)(int, int, int, int))(cvFsError))(0xC172B3C, v0_0, v0_1, v0_2);
    L_C16D3A4:;
    v0_5 = (0xFFFFFFFF);
    L_C16D3AA:;
    return v0_5;
    L_C16D326:;
    if (((*(signed char *)((v0_4 + 0x0))) != 0)) goto L_C16D378;
    FUN_0c16c90c(v0_4);
    if (((*(signed char *)((v0_4 + 0x0))) != 0)) goto L_C16D378;
    v0_0 = ((int (*)(int, int, int, int))(cvFsError))(0xC172B60, v0_0, v0_1, v0_2);
    goto L_C16D3A4;
    L_C16D378:;
    v0_5 = FUN_0c16c56c(v0_4);
    v0_4 = (v0_5);
    if ((v0_5 != 0)) goto L_C16D38C;
    v0_0 = ((int (*)(int, int, int, int))(cvFsError))(0xC172B88, v0_0, v0_1, v0_2);
    goto L_C16D3A4;
    L_C16D38C:;
    v0_5 = (0x58);
    if ((((((struct o58_int *)(v0_4))->v)) == 0)) goto L_C16D39E;
    v0_3 = ((((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)((v0_4 + v0_5)))))(v0_3, v0_0, v0_1, v0_2, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24))));
    v0_5 = (v0_3);
    goto L_C16D3AA;
    L_C16D39E:;
    v0_0 = ((int (*)(int, int, int, int))(cvFsError))(0xC172BAC, v0_0, v0_1, v0_2);
    goto L_C16D3A4;
}

void nlFree(int a4, int a5, int a6, int a7)
{
    register int t1;
    register int t2;
    register int t3;
    register int t5;

    if (a4 != 0) {
        t1 = *(int *)(((a4 - 4) + 0x0));
        t2 = (a4 - 4);
        t3 = t1;
        if ((int)t1 < 0) {
            if (((a4 - 4) != ((((struct o0_int *)0xC177EE4)->v))) && (t3 = *(int *)((((a4 - 4) - 4) + 0x0)), (int)t3 >= 0)) {
                if ((*(int *)(((((a4 - 4) - t3) - 4) + 0x4))) == 0) {
                    (((struct o8_uint *)0xC177EE4)->v) = (*(int *)(((((a4 - 4) - t3) - 4) + 0x8)));
                } else {
                    *(unsigned int *)(((*(int *)(((((a4 - 4) - t3) - 4) + 0x4))) + 0x8)) = (*(int *)(((((a4 - 4) - t3) - 4) + 0x8)));
                }
                if ((*(int *)(((((a4 - 4) - t3) - 4) + 0x8))) != 0) {
                    *(unsigned int *)(((*(int *)(((((a4 - 4) - t3) - 4) + 0x8))) + 0x4)) = (*(int *)(((((a4 - 4) - t3) - 4) + 0x4)));
                }
                t2 = (((a4 - 4) - t3) - 4);
                t5 = ((-t1) + (t3 + 0x4));
            } else {
                t2 = (a4 - 4);
                t5 = (-t1);
            }
            t3 = t5;
            if (((t2 + 0x4) + t5) != ((((struct o4_int *)0xC177EE4)->v))) {
                t1 = *(int *)((((t2 + 0x8) + t5) + 0x0));
                t3 = t5;
                if ((int)t1 >= 0) {
                    if ((*(int *)((((t2 + 0x8) + t5) + 0x4))) == 0) {
                        (((struct o8_uint *)0xC177EE4)->v) = (*(int *)((((t2 + 0x8) + t5) + 0x8)));
                    } else {
                        *(unsigned int *)(((*(int *)((((t2 + 0x8) + t5) + 0x4))) + 0x8)) = (*(int *)((((t2 + 0x8) + t5) + 0x8)));
                    }
                    if ((*(int *)((((t2 + 0x8) + t5) + 0x8))) != 0) {
                        *(unsigned int *)(((*(int *)((((t2 + 0x8) + t5) + 0x8))) + 0x4)) = (*(int *)((((t2 + 0x8) + t5) + 0x4)));
                    }
                    t3 = (t5 + (t1 + 0x8));
                }
            }
        }
        *(unsigned int *)((t2 + 0x0)) = t3;
        *(unsigned int *)((((t2 + 0x4) + t3) + 0x0)) = (t3 + 0x4);
        *(unsigned int *)((t2 + 0x4)) = 0x0;
        *(unsigned int *)((t2 + 0x8)) = ((((struct o8_int *)0xC177EE4)->v));
        if (((((struct o8_int *)0xC177EE4)->v)) != 0) {
            *(unsigned int *)((((((struct o8_int *)0xC177EE4)->v)) + 0x4)) = t2;
        }
        (((struct o8_uint *)0xC177EE4)->v) = t2;
    }
}

int FUN_0c01df4a(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t0 = 0x1;
    if ((*(int *)0xC1EC720) != 2) {
        t1 = (((struct o0_int *)0xC1ECCEC)->v);
        t0 = 0x0;
        if ((int)t1 <= (int)((((struct o8_int *)0xC1ECCEC)->v))) {
        } else {
            if ((int)t1 < (int)((((struct oC_int *)0xC1ECCEC)->v))) {
                if (((((struct o24_int *)0xC1ECCEC)->v)) == 0) {
                    (((struct oC_uint *)0xC1ECCAC)->v) = (((((struct oC_int *)0xC1ECCAC)->v)) + 0x78);
                }
                t1 = 0x1;
            } else {
                if (((((struct o24_int *)0xC1ECCEC)->v)) == 0) {
                    (((struct oC_uint *)0xC1ECCAC)->v) = (((((struct oC_int *)0xC1ECCAC)->v)) + 0x12C);
                }
                t1 = 0x2;
            }
            t0 = t1;
        }
    }
    (((struct o0_uint *)0xC1ECCAC)->v) = 0x0;
    (((struct o10_uint *)0xC1ECCAC)->v) = (((((struct o10_int *)0xC1ECCAC)->v)) + 0x1);
    (((struct o10_uint *)0xC1ECCEC)->v) = 0x1;
    (((struct o14_uint *)0xC1ECCEC)->v) = (((((struct o14_int *)0xC1ECCEC)->v)) + 0x1);
    t1 = (((struct o0_int *)0xC1ECCEC)->v);
    (((struct o24_uint *)0xC1ECCAC)->v) = (((t1 << 2) + t1) << 1);
    (((struct o14_uint *)0xC1ECCAC)->v) = 0x0;
    (((struct o0_uint *)0xC1ECCEC)->v) = 0x0;
    FUN_0c050408();
    Start_Pass_Judgement(t0);
    (((struct o1C_uint *)0xC1ECCEC)->v) = 0x384;
    (((struct o2C_uint *)0xC1ECCEC)->v) = 0x0;
    return t0;
}

int FUN_0c0336c8(int a4, int a5, float f4, float f5, float f6, float f7)
{
    int stk[2];
    register int t1;
    register float u4;
    register float u7;
    register int t22;
    register int t15;
    register int t16;
    register int t17;
    register float u18;
    register int t19;
    register int t21;
    register float u11;

    FUN_0c027f28((0xF & a4));
    t1 = 0x0;
    for (;;) {
        if ((*(signed char *)((a5 + t1))) == 0) {
            break;
        }
        t1 = (t1 + 0x1);
    }
    if ((a4 & 0x200) != 0) {
        u4 = ((float)(t1 - 1) * f6);
        u11 = (f4 - ((u4 * 0.5f)));
    } else {
        u7 = f4;
        if ((0x400 & a4) != 0) {
            u7 = (f4 - (((float)(t1 - 1) * f6)));
        }
        u11 = u7;
    }
    *(unsigned char *)(((((int)stk + 0) + 0x4) + 0x1)) = 0x0;
    *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x4);
    t22 = 0x0;
    if ((int)t1 > 0) {
        t15 = (0x0 + a5);
        t16 = 0x0;
        t17 = a4;
        u18 = u11;
        for (;;) {
            t19 = *(signed char *)((t15 + 0x0));
            t15 = (t15 + 0x1);
            t17 = (t17 & 0xFFFFFBFF);
            t17 = (t17 | 0x200);
            *(unsigned char *)(((*(int *)(((int)stk + 0))) + 0x0)) = t19;
            t21 = FUN_0c033578(t17, (((int)stk + 0) + 0x4), u18, f5, f7);
            t16 = (t16 + 0x1);
            u18 = (u18 + f6);
            if ((int)t16 >= (int)t1) {
                break;
            }
        }
        t22 = t21;
    }
    return t22;
}

int nlMvChgIndexPolAttr(int a4, int a5, int a6)
{
    register int t3;
    register int t14;
    register int t18;
    register int t19;

    register int R0;
    register int R1;
    register int R3;
    register int R4;
    int R5;
    register int R6;
    register int R7;
    int R13;
    register int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R13 = ((~R5));
    R4 = ((*(int *)((R4 + 0xC))));
    L_C07A576:;
    t3 = *(short *)((R4 + 0x0));
    R4 = ((R4 + 0x2));
    R7 = (t3);
    if (((int)t3 < 0)) goto L_C07A620;
    R0 = ((unsigned char)R7);
    if (((unsigned int)(unsigned char)R7 >= (unsigned int)0x1E)) goto L_C07A610;
    switch (((R0 << 1))) { case 0: goto L_C07A5CE; case 2: goto L_C07A610; case 4: goto L_C07A5E0; case 6: goto L_C07A5E0; case 8: goto L_C07A5E0; case 10: goto L_C07A5E0; case 12: goto L_C07A5E0; case 14: goto L_C07A5E0; case 16: goto L_C07A5CC; case 18: goto L_C07A5CC; case 20: goto L_C07A5CC; case 22: goto L_C07A5CC; case 24: goto L_C07A600; case 26: goto L_C07A600; case 28: goto L_C07A600; case 30: goto L_C07A600; case 32: goto L_C07A600; case 34: goto L_C07A600; case 36: goto L_C07A600; case 38: goto L_C07A600; case 40: goto L_C07A600; case 42: goto L_C07A600; case 44: goto L_C07A610; case 46: goto L_C07A610; case 48: goto L_C07A600; case 50: goto L_C07A600; case 52: goto L_C07A600; case 54: goto L_C07A600; case 56: goto L_C07A600; case 58: goto L_C07A600; }
    L_C07A610:;
    return 0xFFFFFFFF;
    L_C07A600:;
    R4 = (((R4 + 0x2) + (unsigned short)(*(short *)((R4 + 0x0)))));
    goto L_C07A576;
    L_C07A5E0:;
    t14 = *(int *)(((R4 + 0x2) + 0x0));
    t18 = (R4 + 0x2);
    R3 = ((t14 & R5));
    R4 = (((R4 + 0x2) + (unsigned short)(*(short *)((R4 + 0x0)))));
    R7 = t18;
    if (((t14 & R5) == R5)) goto L_C07A576;
    t19 = *(int *)((R7 + 0x0));
    *(unsigned int *)((R7 + 0x0)) = ((t19 & R13) | R6);
    R3 = (((t19 & R13) | R6));
    goto L_C07A576;
    L_C07A5CE:;
    goto L_C07A576;
    L_C07A5CC:;
    R4 = ((R4 + 0x2));
    goto L_C07A5CE;
    L_C07A620:;
    return 0x0;
}

int FUN_0c020176(void)
{
    int t0;
    register int t1;

    FUN_0c07c4d0(0x7);
    FUN_0c07c4d0(0x6);
    t0 = *(int *)0xC1EC71C;
    if ((t0 != 0) && (t0 != 1)) {
        if (t0 != 2) {
        } else {
            gdc_FileLoad(0xCB60000, 0xC09AFE0, 0x0);
        }
    } else {
        gdc_FileLoad(0xCB60000, 0xC09AFD4, 0x0);
    }
    FUN_0c07bd84(0xCB60000, 0x6);
    t0 = *(int *)0xC175C80;
    if ((int)t0 < (int)0x8) {
        t1 = ((~(((~t0) + 0x1) & 0x3)) + 0x1);
        if ((int)t0 >= 0) {
            t1 = (t0 & 0x3);
        }
        switch (t1) {
        case 0:
            gdc_FileLoad(0xCB60000, 0xC09AFEC, 0x0);
            break;
        case 1:
            gdc_FileLoad(0xCB60000, 0xC09AFF8, 0x0);
            break;
        case 2:
            gdc_FileLoad(0xCB60000, 0xC09B004, 0x0);
            break;
        case 3:
            gdc_FileLoad(0xCB60000, 0xC09B010, 0x0);
            break;
        }
    } else {
        t1 = 0xC09B028;
        if ((int)t0 < (int)0x10) {
            t1 = 0xC09B01C;
        }
        gdc_FileLoad(0xCB60000, t1, 0x0);
    }
    return FUN_0c07bd84(0xCB60000, 0x7);
}

int FUN_0c020388(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    FUN_0c06e990(0x29E);
    FUN_0c07acd0(0xC141084, 0xC098058);
    t0 = *(int *)0xC2A4658;
    if (t0 == 0) {
        FUN_0c06e990(0x3AC);
        t1 = (FUN_0c07acd0(0xC141F14, 0xC0993AC));
    } else {
        if (t0 != 2) {
            if (t0 != 3) {
                if (t0 != 4) {
                    FUN_0c06e990(0x410);
                    t0 = 0xC1423C4;
                    t2 = 0xC0993AC;
                } else {
                    FUN_0c06e990(0x410);
                    FUN_0c07acd0(0xC142544, 0xC0993AC);
                    FUN_0c06e990(0x4D8);
                    t0 = 0xC142A14;
                    t2 = 0xC098700;
                }
                t3 = t0;
                t0 = t2;
            } else {
                FUN_0c06e990(0x410);
                FUN_0c07acd0(0xC142544, 0xC0984D0);
                FUN_0c06e990(0x474);
                t3 = 0xC142554;
                t0 = 0xC098700;
            }
            t2 = t3;
            t3 = t0;
        } else {
            FUN_0c06e990(0x410);
            FUN_0c07acd0(0xC142544, 0xC0984D0);
            FUN_0c06e990(0x4A6);
            t2 = 0xC1427B4;
            t3 = 0xC098700;
        }
        t1 = (FUN_0c07acd0(t2, t3));
    }
    return t1;
}

int FUN_0c0286c6(int a4)
{
    register int t0;
    int t1;
    register int t2;
    register int t3;

    t0 = a4;
    for (;;) {
        if ((*(signed char *)((t0 + 0x0))) == 0) {
            break;
        }
        t1 = (*(signed char *)((t0 + 0x0)));
        if (t1 == 92) {
            t1 = ((((struct o4_int *)0xC270D14)->v));
            t2 = ((((struct o0_int *)0xC270D14)->v));
            if ((t1 != 5) && (t1 != 9)) {
                if ((t1 != 6) && (t1 != 10)) {
                    if ((t1 == 7) || (t1 == 11)) {
                        (((struct o0_uint *)0xC270D14)->v) = (((((struct o0_int *)0xC270D14)->v)) + 0x1200);
                        t0 = (t0 + 0x1);
                    }
                } else {
                    (((struct o0_uint *)0xC270D14)->v) = (((((struct o0_int *)0xC270D14)->v)) + 0xC00);
                    t0 = (t0 + 0x1);
                }
            } else {
                (((struct o0_uint *)0xC270D14)->v) = (((((struct o0_int *)0xC270D14)->v)) + 0x600);
                t0 = (t0 + 0x1);
            }
            t3 = *(signed char *)((t0 + 0x0));
            t0 = (t0 + 0x1);
            t1 = (FUN_0c0284f6(t3));
            (((struct o0_uint *)0xC270D14)->v) = t2;
        } else {
            t2 = *(signed char *)((t0 + 0x0));
            t0 = (t0 + 0x1);
            t1 = (FUN_0c0284f6(t2));
        }
    }
    return t1;
}

int FUN_0c03209c(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int stk[7];
    int t5;
    register int t6;
    register int t0;
    register int t13;
    register int t56;
    register int t14;
    register int t15;
    register int t28;
    register int t40;

    *(unsigned int *)(((int)stk + 0)) = a6;
    *(unsigned int *)(((int)stk + 4)) = a7;
    t5 = 0x0;
    t6 = 0x0;
    if (a8 != 0) {
        t0 = buGetFileSize(a4, a5);
        t5 = 0x0;
        t6 = t0;
        if ((int)a8 < (int)t0) {
            t5 = 0x1;
            t6 = a8;
        }
    }
    t13 = buLoadFile(a4, a5, (*(int *)(((int)stk + 4))), t6);
    t56 = t13;
    if (t13 == 0) {
        for (;;) {
            t14 = buIsReady(a4);
            if (t14 != 0) {
                t15 = buStat(a4);
                if (t15 != -1) {
                    break;
                }
                continue;
            }
            break;
        }
        t40 = buGetLastError(a4);
        t56 = t40;
        if (t40 == 0) {
            if (((*(int *)(((int)stk + 0))) != 0) && (t5 == 0)) {
                t28 = buAnalyzeBackupFileImage((*(int *)(((int)stk + 0))), (*(int *)(((int)stk + 4))));
                t56 = t28;
                if (t28 == 0) {
                    if (a9 != 0) {
                        t28 = buGetFileInfo(a4, a5, (((int)stk + 0) + 0x8));
                        if (t28 == 0) {
                            memcpy(a9, (((int)stk + 0) + 0x12), 0x8);
                        }
                    }
                    t56 = t28;
                }
            } else {
                if (a9 != 0) {
                    t40 = buGetFileInfo(a4, a5, (((int)stk + 0) + 0x8));
                    if (t40 == 0) {
                        memcpy(a9, (((int)stk + 0) + 0x12), 0x8);
                    }
                }
                t56 = t40;
            }
        }
    }
    return t56;
}


int FUN_0c07c738(int a4, int a5, int a6)
{
    register int t1;

    if (a5 != 0xA5) {
        if (a5 != 0xA6) {
            if (a5 != 0xA7) {
                if (a5 != 0x10A5) {
                    if ((a5 != 0x10A7) && ((a5 != 0x20A5) && ((a5 != 0x30A5) && (a5 != 0x40A5)))) {
                        if (a5 != 0x50A5) {
                            return 0xFFFFFFFE;
                        }
                        return FUN_0c07c8be(((((a4 & 0xF) << 8) + a5) + ((a6 & 0xF) << 16)));
                    }
                    return FUN_0c07c8be(((((a4 & 0xF) << 8) + a5) + (((a6 + 0x40) & 0x7F) << 16)));
                }
                return FUN_0c07c8be(((((a4 & 0xF) << 8) + a5) + ((a6 & 0x7F) << 16)));
            }
            return FUN_0c07c8be(((((a4 & 0xF) << 8) + a5) + (((a6 + 0x40) & 0x7F) << 16)));
        }
        return FUN_0c07c8be(((((a4 & 0xF) << 8) + a5) + (((a6 & 0x7F) << 16) + ((((a6 & 0x80) << 2) << 2) << 1))));
    }
    t1 = FUN_0c07c8be(((((0x7F00 & a6) << 8) + ((a4 & 0xF) << 8)) + 0x70A5));
    if (t1 != 0) {
        return t1;
    }
    return FUN_0c07c8be(((((a4 & 0xF) << 8) + ((a6 & 0x7F) << 16)) + 0xA5));
}
