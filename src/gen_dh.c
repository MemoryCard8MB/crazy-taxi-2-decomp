/* Straight-line functions with calls and guards (batch gen_dh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o38_short { char p[0x38]; short v; };
struct o38_ushort { char p[0x38]; unsigned short v; };
struct o3A_ushort { char p[0x3A]; unsigned short v; };
struct o3C_short { char p[0x3C]; short v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int ADXB_Create(int, int, int, int);
int ADXB_EntryAddWrFunc(int, int, int);
int ETD_EntryRecvFunc(int, int);
int FUN_0c010080(void);
int FUN_0c010092(void);
int FUN_0c0100c4(int, int);
int FUN_0c019dc4(void);
int FUN_0c019e34(void);
int FUN_0c019e3e(void);
int FUN_0c019f10(void);
int FUN_0c01a848(void);
int FUN_0c01b270(void);
int FUN_0c01ee58(void);
int FUN_0c01f368(int, int, float);
int FUN_0c02022a(void);
int FUN_0c020488(void);
int FUN_0c020dbc(int, int, int, int, int);
float FUN_0c021040(int, int);
int FUN_0c026b80(int, int);
int FUN_0c026bf4(float);
int FUN_0c026e56(void);
int FUN_0c027ed8(int);
int FUN_0c030af0(void);
int FUN_0c030cb4(int);
int FUN_0c031444(void);
int FUN_0c031460(void);
int FUN_0c03e712(void);
int FUN_0c03f228(void);
int FUN_0c048d70(int);
int FUN_0c04bd7c(int, int);
int FUN_0c0579e0(void);
int FUN_0c057bb4(int);
int FUN_0c058490(void);
int FUN_0c058be4(int);
int FUN_0c058e20(void);
int FUN_0c05909c(void);
int FUN_0c0590a8(void);
int FUN_0c05a8c4(void);
int FUN_0c05a902(void);
int FUN_0c05ab5e(void);
int FUN_0c05ac3a(int, int);
int FUN_0c05f788(int, int);
int FUN_0c06e990(int);
int FUN_0c06f1d0(int);
int FUN_0c06f240(void);
int FUN_0c06f840(int, int, int);
int FUN_0c072290(int, int);
int FUN_0c073360(void);
int FUN_0c073c40(int, int, float);
int FUN_0c0784d0(void);
int FUN_0c0787d0(int);
int FUN_0c07acd0(int, int);
extern int FUN_0c07ada0();
int FUN_0c07bb42(int, int);
int FUN_0c07bd84(int, int);
int FUN_0c07c804(int, int, int);
int FUN_0c07cbbc(int, int, int);
int FUN_0c07cfd0(int);
int FUN_0c07d050(int);
int FUN_0c07d68e(int);
int FUN_0c07d9d0(void);
int FUN_0c07fdc8(void);
int FUN_0c07ff00(void);
int FUN_0c0902e8(int, int, int, int, int, int);
int FUN_0c090e4c(int, int, int, int);
int FUN_0c149c00(int);
int FUN_0c149c18(int);
int FUN_0c14a2ba(void);
int FUN_0c14de8a(void);
int FUN_0c14f248(void);
int FUN_0c14fd82(int, int);
int FUN_0c14ff0c(int);
int FUN_0c1500d2(int, int, int);
int FUN_0c1503dc(int);
int FUN_0c150460(int);
int FUN_0c15047c(int, int);
int FUN_0c15cba0(void);
int FUN_0c16197a(int);
int FUN_0c16ada2(int, ...);
int GetStopPosCenter(int, int, int);
int SJRBF_GetBufPtr(int);
int SJRBF_GetBufSize(int);
int SJRBF_GetXtrSize(int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
extern float _builtin_sqrtf(float);
int game_init(void);
int gdFsCreateDirhn(int, int);
int gdFsCreateHnG(int, int, int, int);
int gdFsEntryErrFuncAll(void);
int gdc_FileLoad(int, int, int);
int gdc_StreamInit(void);
int memset(int, int, int);
int mpvvlc_InitMbai(void);
int mwlSbFreeWork(int);
int nlAddVector(int, int);
int nlDispStripLoadTexture(int, int);
int nlFree(int);
int nlInitEvent(void);
int nlInitHeapMemory(int, int);
int nlLoadDummyTexture(void);
int nlLocate(int, int);
int nlMalloc(int);
int nlMvNotShadowObjPutPol(int);
int nlPopMatrix(int);
int nlPrintf(int, ...);
int nlRotateAY(int);
int nlSetIntrFunction(int, int);
int nlSpriteFreeTexture(int, int);
int nlSubVector3op(int, int, int);
int ovGetLibTbl(int);
int ovSearchLib(int);
int padInitAnalog(void);
int pdInitPeripheral(int, int, int);
int strncpy(int, int, int);
int syBtExit(void);
int syCblCheck(void);
int syHwInit(void);
int syHwInit2(void);
int syRtcInit(void);
int thunk_FUN_0c1616c4(int, int);
int vmsfs_diskfree(int, int);
int vmsfs_fclose(int, int);
int vmsfs_fcreate(int, int, int, int);
int vmsfs_fgetsize(int, int);
int vmsfs_fwrite1(int, int);
int vmsfs_lockbank(int, int);
int FUN_0c01aa30(void);
int FUN_0c015f28(float f4);
int FUN_0c05a938(int a4, int a5);
int FUN_0c090180(int a4, int a5, int a6, int a7, int a8, int a9);
int gdFsInitG(int a4, int a5, int a6, int a7, int a8);
int FUN_0c06991a(int a4, int a5);
int FUN_0c01eeda(int a4, int a5, int a6, int a7);
int FUN_0c16b0b6(int a4);
int FUN_0c1505ac(int a4, int a5, int a6, int a7, int a8, int a9);
int ADXSJD_Create(int a4, int a5, int a6);
int FUN_0c04afec(int a4, int a5, int a6, int a7, float f4, float f5);
int syIntAdrChk_init(void);
int FUN_0c1504e4(int a4, int a5, int a6, int a7, int a8);
int FUN_0c06cb24(void);
int ovLibDeleteTbl(int a4);
int FUN_0c01fcd0(void);
int _lsft(int a4, int a5);
int FUN_0c0962ac(int a4, int a5, int a6);
int FUN_0c0722b0(int a4, int a5, int a6);

int FUN_0c01aa30(void)
{
    int stk[22];
    register int t4;
    register int t9;
    register int t15;
    register int t26;
    register int t60;
    register int t62;
    register int t69;

    FUN_0c05909c();
    _builtin_set_imask(0xE);
    FUN_0c0787d0((*(int *)0xC0964E0));
    syHwInit();
    t4 = syCblCheck();
    if (t4 != 1) {
        if (t4 != 0) {
            if (t4 != 2) {
                for (;;) {
                }
            }
            (((struct o1C_uint *)0xC1EC718)->v) = 0x2;
        } else {
            (((struct o1C_uint *)0xC1EC718)->v) = 0x0;
        }
    } else {
        (((struct o1C_uint *)0xC1EC718)->v) = 0x1;
    }
    t9 = (((struct o1C_int *)0xC1EC718)->v);
    if (t9 == 1) {
        FUN_0c06f840(0x0, 0x80, 0x1);
    } else {
        t15 = 0x9;
        if (t9 == 2) {
            FUN_0c06f1d0(0x1);
            t15 = 0x1A;
        }
        FUN_0c06f840(t15, 0x80, 0x1);
    }
    _builtin_set_imask(0xE);
    syHwInit2();
    pdInitPeripheral(0x0, 0xC1A7F54, 0xC1B3F74);
    FUN_0c0784d0();
    nlSetIntrFunction(0x1, 0xC01A7CC);
    nlSetIntrFunction(0x0, 0xC01A832);
    _builtin_set_imask(0x0);
    syRtcInit();
    t26 = FUN_0c01ee58();
    if (t26 == 0) {
        FUN_0c01a848();
        syBtExit();
    }
    gdFsEntryErrFuncAll();
    FUN_0c019e3e();
    FUN_0c14de8a();
    FUN_0c14f248();
    thunk_FUN_0c1616c4(0xC01A9F4, 0x0);
    (((struct o0_uint *)0xC1EC718)->v) = 0x0;
    FUN_0c03e712();
    (((struct o30_uint *)0xC1EC718)->v) = 0x1;
    (((struct o0_uint *)0xC1EC83C)->v) = 0x0;
    *(unsigned int *)0xC11CFAC = 0x0;
    (((struct o0_uint *)0xC1ECC84)->v) = 0x0;
    FUN_0c010080();
    FUN_0c010092();
    padInitAnalog();
    FUN_0c031444();
    FUN_0c031460();
    FUN_0c03e712();
    FUN_0c0579e0();
    FUN_0c057bb4((unsigned char)(*(signed char *)0xC1EC784));
    if (((((struct o1C_int *)0xC1EC718)->v)) == 2) {
        FUN_0c019dc4();
        FUN_0c06f240();
        *(unsigned int *)0xC1EC6BC = 0x0;
        FUN_0c01b270();
        nlLoadDummyTexture();
        FUN_0c019e34();
    } else {
        FUN_0c019f10();
    }
    *(unsigned int *)0xC177EF0 = 0xC177EF4;
    nlInitHeapMemory(0xC177EF4, 0x30000);
    nlInitEvent();
    gdc_FileLoad(0xCB60000, 0xC097198, 0x0);
    FUN_0c06e990(0x0);
    nlSpriteFreeTexture(0xC142FC4, 0x0);
    *(unsigned int *)(((int)stk + 8)) = 0x0;
    *(float *)(((int)stk + 12)) = 256.0f;
    *(float *)(((int)stk + 16)) = 176.0f;
    *(float *)(((int)stk + 20)) = 0.300000012f;
    *(float *)(((int)stk + 24)) = 1.0f;
    *(float *)(((int)stk + 28)) = 1.0f;
    *(float *)(((int)stk + 36)) = 0.0f;
    *(float *)(((int)stk + 32)) = 0.0f;
    *(float *)(((int)stk + 44)) = 1.0f;
    *(float *)(((int)stk + 40)) = 1.0f;
    *(unsigned int *)(((int)stk + 48)) = 0x0;
    *(float *)(((int)stk + 52)) = 1.0f;
    *(unsigned int *)(((int)stk + 60)) = 0x705;
    *(unsigned int *)(((int)stk + 56)) = 0x2;
    t60 = ((int (*)(int, float))(FUN_0c07ada0))(((int)stk + 8), 1.0f);
    FUN_0c06f240();
    t62 = ((int (*)(int))(FUN_0c07ada0))(((int)stk + 8));
    FUN_0c06f240();
    FUN_0c07acd0(0xC142FC4, 0x0);
    gdc_FileLoad(0xCB60000, 0xC0971A4, 0x0);
    t69 = FUN_0c07bb42(0xCB60000, 0x0);
    if (t69 != 0) {
        ETD_EntryRecvFunc(0x10, 0x10);
        nlLocate(0xA, 0xC);
        *(int *)((int)stk + 4) = t69;
        *(int *)((int)stk + 0) = 0xC0971B0;
        nlPrintf(0xC0971B0, t69);
        FUN_0c06f240();
        FUN_0c06f240();
        ETD_EntryRecvFunc(0x8, 0x8);
        for (;;) {
        }
    }
    FUN_0c07d9d0();
    gdc_FileLoad(0xCB60000, 0xC0971C0, 0x0);
    FUN_0c07bd84(0xCB60000, 0x0);
    gdc_FileLoad(0xCB60000, 0xC0971CC, 0x0);
    FUN_0c07bd84(0xCB60000, 0x1);
    gdc_FileLoad(0xCB60000, 0xC0971D8, 0x0);
    FUN_0c07bd84(0xCB60000, 0x2);
    gdc_FileLoad(0xCB60000, 0xC0971E4, 0x0);
    FUN_0c07bd84(0xCB60000, 0x3);
    gdc_FileLoad(0xCB60000, 0xC0971F0, 0x0);
    FUN_0c07bd84(0xCB60000, 0x4);
    gdc_FileLoad(0xCB60000, 0xC0971FC, 0x0);
    FUN_0c07bd84(0xCB60000, 0x6);
    gdc_FileLoad(0xCB60000, 0xC097208, 0x0);
    FUN_0c07bd84(0xCB60000, 0x7);
    FUN_0c07c804(0x0, 0xA4, 0x0);
    FUN_0c07cbbc(0x4, 0x1, 0x0);
    gdc_StreamInit();
    FUN_0c058be4(0x0);
    FUN_0c058e20();
    *(unsigned int *)0xC11CFF8 = 0x1;
    (((struct o8_uint *)0xC1EC718)->v) = 0x0;
    (((struct o4_uint *)0xC1EC718)->v) = 0x0;
    FUN_0c026e56();
    FUN_0c05a8c4();
    FUN_0c05a902();
    FUN_0c0100c4(0x0, 0x1);
    FUN_0c05f788(0x0, 0x0);
    FUN_0c05ab5e();
    FUN_0c0100c4(0x0, 0x1);
    FUN_0c05f788(0x0, 0x0);
    FUN_0c03e712();
    FUN_0c020488();
    (((struct o4_uint *)0xC1ECC84)->v) = 0xFFFFFFFF;
    FUN_0c048d70(((((struct o4_int *)0xC1EC718)->v)));
    (((struct o0_uint *)0xC2AC5FC)->v) = 0xC318000;
    (((struct o4_uint *)0xC2AC5FC)->v) = 0x10000;
    game_init();
    (((struct o24_uint *)0xC1EC718)->v) = 0x1;
    (((struct o8_uint *)0xC1EC83C)->v) = 0x1;
    *(float *)0xC1A7EFC = 0.0f;
    FUN_0c026b80(0x2200, 0x2900);
    FUN_0c026bf4(0.400000006f);
    FUN_0c0590a8();
    FUN_0c030af0();
    mpvvlc_InitMbai();
    FUN_0c030cb4(0x0);
    FUN_0c027ed8(0x0);
    FUN_0c03f228();
    FUN_0c058490();
    return (FUN_0c0579e0());
}

int FUN_0c015f28(float f4)
{
    int stk[21];
    register int t6;
    register int t7;
    register int t8;
    register int t18;
    register int t20;
    register int t22;
    register int t24;
    register int t26;
    register int t27;
    register int t28;
    register int t29;
    register int t30;
    register float u32;
    register int t70;
    register int t72;
    register int t73;
    register int t77;
    register float t85;
    register int t89;
    register float u90;
    register int t139;
    register int t154;
    register int t140;
    register int t141;
    register int t142;
    register int t143;
    register int t144;
    register int t147;
    register int t148;
    register int t19;
    register int t21;
    register int t23;
    register int t25;
    register float u31;
    register float u33;
    register int t42;
    register int t43;
    register int t44;
    register int t45;
    register float u46;
    register float u47;
    register int t133;
    register int t134;
    register int t135;
    register int t136;
    register float u137;
    register float u129;
    int t54;
    register int t64;
    register float u67;
    register float u68;
    register int t113;
    register int t114;
    register int t115;
    register int t116;
    register float u117;
    register int t101;

    FUN_0c07fdc8();
    FUN_0c02022a();
    t6 = *(int *)((0xC129510 + (((((struct o4_int *)0xC1EC71C)->v)) << 2)));
    (((struct oC_uint *)0xC177D18)->v) = (*(int *)(((((((struct o8_int *)0xC1EC71C)->v)) << 2) + t6)));
    t7 = 0xFFFFFFFF;
    t8 = 0xC177914;
    for (;;) {
        if ((int)t7 >= (int)((((struct oC_int *)0xC177D18)->v))) {
            break;
        }
        t6 = t7;
        *(unsigned char *)((t8 + 0x0)) = t7;
        if (t6 != -1) {
            t6 = (GetStopPosCenter((*(signed char *)((t8 + 0x0))), (t8 + 0x4), (t8 + 0x18)));
            *(int *)((int)stk + 0) = 0x0;
            t6 = (FUN_0c020dbc((t8 + 0x4), (((int)stk + 0) + 0x48), (t8 + 0x10), (t8 + 0x14), 0x0));
        } else {
            t6 = 0xC;
            t6 = (FUN_0c07ff00());
            t6 = 0x18;
            *(float *)((t8 + t6)) = 0.0f;
            *(unsigned int *)((t8 + 0x10)) = 0x0;
            *(unsigned int *)((t8 + 0x14)) = 0x0;
        }
        t7 = (t7 + 0x1);
        t8 = (t8 + 0x1C);
    }
    t18 = FUN_0c02022a();
    t28 = (((struct o0_int *)0xC177D18)->v);
    t30 = (((struct o4_int *)0xC177D18)->v);
    *(unsigned int *)(((int)stk + 24)) = 0x0;
    *(unsigned int *)(((int)stk + 20)) = (((int)stk + 4) + 0x40);
    *(unsigned int *)(((int)stk + 12)) = (((int)stk + 4) + 0x30);
    *(unsigned int *)(((int)stk + 28)) = (((int)stk + 4) + 0x34);
    t20 = t19;
    t22 = t21;
    t24 = t23;
    t26 = t25;
    t27 = 0xC020DBC;
    t29 = t7;
    u32 = f4;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 24))) < (int)((((struct o8_int *)0xC177D18)->v))) {
            t18 = 0x5;
            t18 = ((int)((int)(*(int *)(((int)stk + 24))) % (int)t18));
            if (t18 == 0) {
                t18 = (FUN_0c02022a());
            } else {
                t42 = t20;
                t43 = t22;
                t44 = t24;
                t45 = t26;
                u46 = u31;
                u47 = u32;
            }
            u31 = u46;
            u32 = u47;
            t18 = (*(signed char *)((t30 + 0xC)));
            t20 = t42;
            t22 = t43;
            t24 = t44;
            t26 = t45;
            if (t18 == -1) {
                *(unsigned int *)((t28 + 0x0)) = 0xFFFFFFFF;
                t133 = t20;
                t134 = t22;
                t135 = t24;
                t136 = t26;
                u137 = u32;
            } else {
                *(unsigned int *)((t28 + 0x0)) = 0x0;
                t20 = t30;
                t18 = (FUN_0c04bd7c(t20, t22));
                *(unsigned int *)((t28 + 0x4)) = t18;
                t18 = ((((struct o0_int *)0xC1EC71C)->v));
                t18 = 0x10;
                t18 = (*(signed char *)((t30 + t18)));
                if (t18 == -1) {
                    t27 = t30;
                    *(unsigned int *)(((int)stk + 4)) = 0x0;
                    t27 = (t27 + 0xD);
                    *(unsigned int *)(((int)stk + 8)) = (t28 + 0x8);
                    t29 = 0x0;
                    for (;;) {
                        t18 = t30;
                        t18 = (t18 + 0xD);
                        t18 = (*(signed char *)(((*(int *)(((int)stk + 4))) + t18)));
                        if (t18 != -1) {
                            t22 = (*(signed char *)((t27 + 0x0)));
                            t22 = ((short)t22 * (short)0x1C);
                            t22 = (t22 + 0xC177914);
                            t22 = (t22 + 0x20);
                            t20 = t30;
                            t54 = 0x4F000000;
                            u32 = (FUN_0c021040(t20, t22));
                            *(float *)((((t28 + 0x8) + t29) + 0x0)) = u32;
                            u31 = (*(float *)&(t54));
                            if (!(u31 > u32)) {
                                u31 = (u31 + u31);
                                u32 = (u32 - u31);
                            }
                            t54 = (*(int *)((((((int)stk + 4) + 0x20) + t29) + 0x0)));
                            t54 = (t54 + (int)u32);
                            *(unsigned int *)((((((int)stk + 4) + 0x20) + t29) + 0x0)) = t54;
                            u67 = u31;
                            u68 = u32;
                        } else {
                            *(float *)(((*(int *)(((int)stk + 8))) + 0x0)) = 0.0f;
                            t64 = t18;
                        }
                        t70 = *(int *)(((int)stk + 4));
                        u31 = u67;
                        u32 = u68;
                        t18 = t64;
                        t54 = 0x3;
                        t29 = (t29 + 0x4);
                        *(unsigned int *)(((int)stk + 4)) = (t70 + 0x1);
                        *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x4);
                        t27 = (t27 + 0x1);
                        if ((int)(t70 + 0x1) >= (int)t54) {
                            break;
                        }
                    }
                    u129 = u32;
                } else {
                    *(unsigned int *)(((int)stk + 32)) = (t28 + 0x8);
                    *(unsigned int *)(((int)stk + 4)) = 0x0;
                    *(unsigned int *)(((int)stk + 16)) = 0x0;
                    t72 = 0x0;
                    t73 = (t28 + 0x8);
                    for (;;) {
                        t22 = t30;
                        t20 = (*(int *)(((int)stk + 16)));
                        t24 = 0x0;
                        t22 = (t22 + 0xD);
                        t26 = 0x0;
                        for (;;) {
                            t18 = (*(short *)((t30 + 0x12)));
                            t18 = (unsigned short)t18;
                            t26 = (t26 + 0x1);
                            if ((t18 & ((int)0x1 << (int)t20)) != 0) {
                                t73 = ((int)stk + 4);
                                t72 = (*(signed char *)((t22 + 0x0)));
                                t73 = (t73 + 0x30);
                                t72 = (t72 + 0x1);
                                t77 = ((t24 << 2) + t73);
                                t24 = (t24 + 0x1);
                                *(unsigned int *)((t77 + 0x0)) = t72;
                            }
                            t22 = (t22 + 0x1);
                            t20 = (t20 + 0x1);
                            if ((int)t26 >= (int)0x4) {
                                break;
                            }
                        }
                        t24 = (t24 << 2);
                        t24 = (t24 + (((int)stk + 4) + 0x30));
                        t73 = 0xFFFFFFFF;
                        *(unsigned int *)((t24 + 0x0)) = t73;
                        t18 = (*(int *)(((int)stk + 12)));
                        t18 = (*(int *)((t18 + 0x0)));
                        if (t18 != -1) {
                            t22 = (*(int *)(((int)stk + 12)));
                            t73 = 0xC021040;
                            t22 = (*(int *)((t22 + 0x0)));
                            t22 = (t22 * 0x1C);
                            t22 = (t22 + 0xC177914);
                            t22 = (t22 + 0x4);
                            t20 = t30;
                            t85 = FUN_0c021040(t20, t22);
                            *(unsigned int *)(((int)stk + 8)) = (*(int *)(((int)stk + 12)));
                            t27 = (*(int *)(((int)stk + 28)));
                            t89 = *(int *)(((int)stk + 20));
                            t29 = t27;
                            u33 = t85;
                            if ((unsigned int)t29 < (unsigned int)t89) {
                                u90 = t85;
                                for (;;) {
                                    t18 = (*(int *)((t29 + 0x0)));
                                    if (t18 != -1) {
                                        t22 = (*(int *)((t27 + 0x0)));
                                        t20 = (*(int *)(((int)stk + 8)));
                                        t20 = (*(int *)((t20 + 0x0)));
                                        t89 = 0xC021040;
                                        t22 = (t22 * 0x1C);
                                        t22 = (t22 + 0xC177914);
                                        t22 = (t22 + 0x4);
                                        t20 = (t20 * 0x1C);
                                        t20 = (t20 + 0xC177914);
                                        t20 = (t20 + 0x4);
                                        u90 = (FUN_0c021040(t20, t22));
                                        t73 = (*(int *)(((int)stk + 8)));
                                        u33 = (u33 + u90);
                                        t29 = (t29 + 0x4);
                                        t73 = (t73 + 0x4);
                                        *(unsigned int *)(((int)stk + 8)) = t73;
                                        t89 = (*(int *)(((int)stk + 20)));
                                        t27 = (t27 + 0x4);
                                        if ((unsigned int)t29 >= (unsigned int)t89) {
                                            t101 = t73; break;
                                        }
                                        continue;
                                    }
                                    break;
                                }
                                t73 = t101;
                            }
                            t18 = 0xC016284;
                            t73 = t28;
                            t73 = (t73 + 0x8);
                            t73 = (t73 + (*(int *)(((int)stk + 4))));
                            *(float *)((t73 + 0x0)) = u33;
                            u31 = (*(float *)((t18 + 0x0)));
                            t73 = (*(int *)(((int)stk + 4)));
                            t73 = (t73 + (((int)stk + 4) + 0x20));
                            if (!(u31 > u33)) {
                                u31 = (u31 + u31);
                                u33 = (u33 - u31);
                            }
                            t18 = (*(int *)((t73 + 0x0)));
                            t72 = (int)u33;
                            t18 = (t18 + t72);
                            *(unsigned int *)((t73 + 0x0)) = t18;
                            u117 = u31;
                        } else {
                            t72 = (*(int *)(((int)stk + 32)));
                            *(float *)((t72 + 0x0)) = 0.0f;
                            t113 = t20;
                            t114 = t22;
                            t115 = t24;
                            t116 = t26;
                        }
                        u31 = u117;
                        t20 = t113;
                        t22 = t114;
                        t24 = t115;
                        t26 = t116;
                        *(unsigned int *)(((int)stk + 32)) = ((*(int *)(((int)stk + 32))) + 0x4);
                        t73 = (*(int *)(((int)stk + 4)));
                        t73 = (t73 + 0x4);
                        *(unsigned int *)(((int)stk + 4)) = t73;
                        t72 = (*(int *)(((int)stk + 16)));
                        t72 = (t72 + 0x4);
                        *(unsigned int *)(((int)stk + 16)) = t72;
                        if ((int)t72 >= (int)0xC) {
                            break;
                        }
                    }
                    t133 = t20;
                    t134 = t22;
                    t135 = t24;
                    t136 = t26;
                }
                u137 = u129;
            }
            u32 = u137;
            t20 = t133;
            t22 = t134;
            t24 = t135;
            t26 = t136;
            t30 = (t30 + 0x14);
            t28 = (t28 + 0x18);
            *(unsigned int *)(((int)stk + 24)) = ((*(int *)(((int)stk + 24))) + 0x1);
            continue;
        }
        break;
    }
    t139 = *(int *)0xC175C84;
    t154 = t139;
    if (t139 == 1) {
        t140 = 0x0;
        t141 = 0x0;
        for (;;) {
            t142 = *(int *)(((((int)stk + 4) + 0x20) + t140));
            t143 = *(int *)((0xC11B640 + t140));
            t144 = t140;
            t140 = (t140 + 0x4);
            if (t143 != t142) {
                t141 = (t141 + 0x1);
            }
            if ((unsigned int)t140 >= (unsigned int)0x10) {
                break;
            }
        }
        if (t141 != 0) {
            t147 = ((((struct o0_int *)0xC177D18)->v));
            t148 = 0x0;
            for (;;) {
                if ((int)t148 >= (int)((((struct o8_int *)0xC177D18)->v))) {
                    break;
                }
                *(unsigned int *)((t147 + 0x0)) = 0xFFFFFFFF;
                t148 = (t148 + 0x1);
                t147 = (t147 + 0x18);
            }
        }
        t154 = t144;
    }
    return t154;
}

int FUN_0c05a938(int a4, int a5)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    if ((((((struct o0_int *)0xC2B967C)->v)) == 2) && (t0 = *(int *)0xC1EC71C, t0 != 2)) {
        FUN_0c05ac3a(0x2, a5);
    } else {
        t0 = a5;
    }
    if ((a4 != 0) && ((a4 != 1) && (a4 != 5))) {
        t1 = FUN_0c05ac3a((0x100 | a4), t0);
        t2 = t1;
        t3 = 0x0;
        t4 = t1;
        for (;;) {
            if ((int)t3 >= (int)(*(int *)(((0xC136138 + (a4 << 2)) + 0x0)))) {
                break;
            }
            t2 = (a4 << 2);
            t5 = (*(int *)((0xC13610C + t2)));
            t4 = t3;
            t4 = (t4 << 2);
            t5 = (t5 + t4);
            t5 = (*(int *)((t5 + 0x0)));
            t3 = (t3 + 0x1);
            t5 = (t5 + (t1 << 2));
            *(unsigned int *)((((*(int *)((0xC136168 + t2))) + t4) + 0x0)) = t5;
        }
    } else {
        if (((((struct o4_int *)0xC2B967C)->v)) == 0) {
            (((struct o4_uint *)0xC2B967C)->v) = (FUN_0c05ac3a(0x200, t0));
            (((struct o8_uint *)0xC2B967C)->v) = (((((struct o0_int *)0xC2B967C)->v)) - 1);
        } else {
            t1 = t0;
        }
        t0 = FUN_0c05ac3a((0x100 | a4), t1);
        t1 = 0x0;
        for (;;) {
            t2 = *(int *)((((*(int *)((0xC13610C + (a4 << 2)))) + t1) + 0x0));
            t3 = ((*(int *)((0xC136168 + (a4 << 2)))) + t1);
            t1 = (t1 + 0x4);
            *(unsigned int *)((t3 + 0x0)) = ((((((struct o4_int *)0xC2B967C)->v)) << 2) + t2);
            if ((unsigned int)t1 >= (unsigned int)0x10) {
                break;
            }
        }
        t1 = 0x10;
        for (;;) {
            t2 = *(int *)((((*(int *)((0xC13610C + (a4 << 2)))) + t1) + 0x0));
            t3 = ((*(int *)((0xC136168 + (a4 << 2)))) + t1);
            t1 = (t1 + 0x4);
            *(unsigned int *)((t3 + 0x0)) = (t2 + (t0 << 2));
            if ((unsigned int)t1 >= (unsigned int)0x24) {
                break;
            }
        }
        t1 = 0x24;
        for (;;) {
            t2 = *(int *)((((*(int *)((0xC13610C + (a4 << 2)))) + t1) + 0x0));
            t3 = ((*(int *)((0xC136168 + (a4 << 2)))) + t1);
            t1 = (t1 + 0x4);
            *(unsigned int *)((t3 + 0x0)) = ((((((struct o4_int *)0xC2B967C)->v)) << 2) + t2);
            if ((unsigned int)t1 >= (unsigned int)0x34) {
                break;
            }
        }
        *(unsigned int *)(((*(int *)((0xC136168 + (a4 << 2)))) + 0x34)) = ((t0 << 2) + (*(int *)(((*(int *)((0xC13610C + (a4 << 2)))) + 0x34))));
    }
    t0 = 0x0;
    for (;;) {
        nlMvNotShadowObjPutPol((*(int *)((t0 + (*(int *)((((a4 << 2) + 0xC136168) + 0x0)))))));
        t0 = (t0 + 0x4);
        if ((unsigned int)t0 >= (unsigned int)0x10) {
            break;
        }
    }
    *(unsigned int *)((a5 + 0x0)) = (*(int *)((0xC136168 + (a4 << 2))));
    return nlLocate(0x5, 0x14);
}

int FUN_0c090180(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int stk[15];
    register int t4;
    register int t21;
    register int t24;
    register int t27;
    register int t46;
    int R1008;

    R1008 = *(int *)((int)stk + 8);

    *(unsigned int *)(((int)stk + 56)) = a4;
    *(unsigned int *)(((int)stk + 52)) = a5;
    *(unsigned int *)(((int)stk + 48)) = a6;
    *(unsigned int *)(((int)stk + 44)) = a7;
    *(unsigned int *)(((int)stk + 32)) = (vmsfs_diskfree((*(int *)(((int)stk + 56))), 0x0));
    t4 = vmsfs_fgetsize((*(int *)(((int)stk + 56))), (*(int *)(((int)stk + 52))));
    *(unsigned int *)(((int)stk + 28)) = t4;
    if ((int)t4 > 0) {
        *(unsigned int *)(((int)stk + 32)) = ((*(int *)(((int)stk + 32))) + t4);
    }
    if ((int)(*(int *)(((int)stk + 32))) < 0) {
        return (*(int *)(((int)stk + 32)));
    }
    if ((unsigned int)(*(int *)(((int)stk + 32))) < (unsigned int)(*(int *)(((int)stk + 44)))) {
        return 0xFFFFFF04;
    }
    *(unsigned int *)(((int)stk + 24)) = (a9 & 0x80000000);
    if ((a9 & 0x80000000) != 0) {
        *(int *)((int)stk + 4) = a9;
        *(int *)((int)stk + 0) = a8;
        return (FUN_0c0902e8((*(int *)(((int)stk + 56))), (*(int *)(((int)stk + 52))), (*(int *)(((int)stk + 48))), (*(int *)(((int)stk + 44))), a8, a9));
    }
    t21 = vmsfs_fcreate((*(int *)(((int)stk + 56))), (*(int *)(((int)stk + 52))), a8, (((int)stk + 8) + 0x4));
    *(unsigned int *)(((int)stk + 36)) = t21;
    if ((int)t21 < 0) {
        return t21;
    }
    *(unsigned char *)(((*(int *)(((int)stk + 12))) + 0x1)) = a9;
    *(unsigned int *)(((int)stk + 16)) = (*(int *)(((int)stk + 48)));
    t24 = *(int *)(((int)stk + 56));
    R1008 = ((t24 * 0x154) + 0xC2C8D2C);
    *(unsigned int *)((((t24 * 0x154) + 0xC2C8D2C) + 0x30)) = 0x1;
    t27 = *(int *)(((R1008) + 0x4));
    *(unsigned int *)(((R1008) + 0x34)) = ((*(int *)(((int)stk + 44))) + (*(int *)(((((((t27 << 1) + t27) << 2) << 2) << 1) + 0xC147870))));
    FUN_0c090e4c((*(int *)(((int)stk + 56))), 0x0, (((int)stk + 8) + 0xC), 0x0);
    vmsfs_lockbank((*(int *)(((int)stk + 56))), 0x1);
    *(unsigned int *)(((int)stk + 40)) = 0x0;
    for (;;) {
        if ((unsigned int)(*(int *)(((int)stk + 40))) >= (unsigned int)(*(int *)(((int)stk + 44)))) {
            *(unsigned int *)(((int)stk + 36)) = 0x0;
            vmsfs_fclose((*(int *)(((int)stk + 12))), 0x0);
            vmsfs_lockbank((*(int *)(((int)stk + 56))), (*(int *)(((int)stk + 20))));
            return (*(int *)(((int)stk + 36)));
        }
        t46 = vmsfs_fwrite1((*(int *)(((int)stk + 12))), (*(int *)(((int)stk + 16))));
        *(unsigned int *)(((int)stk + 36)) = t46;
        if ((int)t46 < 0) {
            break;
        }
        *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + 0x200);
        *(unsigned int *)(((int)stk + 40)) = ((*(int *)(((int)stk + 40))) + 0x1);
    }
    vmsfs_fclose((*(int *)(((int)stk + 12))), 0x0);
    vmsfs_lockbank((*(int *)(((int)stk + 56))), (*(int *)(((int)stk + 20))));
    return (*(int *)(((int)stk + 36)));
}

int gdFsInitG(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;

    t1 = *(int *)0xC1737EC;
    if ((t1 != 0) && (t0 = (((struct o38_short *)(t1))->v), t0 == 1)) {
        return 0x0;
    }
    if ((a5 & 31) != 0) {
        return 0xFFFFFFF2;
    }
    t0 = FUN_0c15cba0();
    t1 = ((int (*)(void))((*(int *)((t0 + 0x0)))))();
    t1 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    *(unsigned int *)0xC1737EC = a5;
    (((struct o38_ushort *)(a5))->v) = 0x0;
    *(unsigned int *)(((*(int *)0xC1737EC) + 0x20)) = 0x0;
    *(unsigned int *)(((*(int *)0xC1737EC) + 0x0)) = a4;
    *(unsigned int *)((((*(int *)0xC1737EC) + 0x10) + 0x0)) = (gdFsCreateDirhn(a7, a6));
    *(unsigned int *)(((*(int *)0xC1737EC) + 0xC)) = t0;
    *(unsigned int *)(((*(int *)0xC1737EC) + 0x1C)) = 0x0;
    (((struct o3A_ushort *)((*(int *)0xC1737EC)))->v) = 0x0;
    *(unsigned int *)(((*(int *)0xC1737EC) + 0x24)) = 0x0;
    *(unsigned int *)(((*(int *)0xC1737EC) + 0x34)) = 0x0;
    *(unsigned int *)(((*(int *)0xC1737EC) + 0x3C)) = a8;
    t0 = 0x3A;
    t2 = ((*(int *)0xC1737EC) + 0x1080);
    t3 = 0x0;
    for (;;) {
        if ((int)t3 >= (int)((*(int *)(((*(int *)0xC1737EC) + 0x0))) + 0x1)) {
            break;
        }
        t0 = 0x4C;
        *(unsigned short *)((t2 + t0)) = 0x0;
        t3 = (t3 + 0x1);
        *(unsigned int *)((t2 + 0x0)) = (*(int *)0xC1737EC);
        t2 = (t2 + 0x54);
    }
    t0 = *(int *)0xC1737EC;
    *(unsigned int *)((t0 + 0x14)) = (0x1080 + t0);
    t0 = *(int *)0xC1737EC;
    *(unsigned int *)((t0 + 0x18)) = ((0x1080 + t0) + 0x54);
    gdFsCreateHnG((*(int *)(((*(int *)0xC1737EC) + 0x14))), 0x0, 0x0, 0x0);
    _builtin_set_imask(((unsigned int)(((t1 & 0xF) << 2) << 2) >> 4));
    return FUN_0c14a2ba();
}

int FUN_0c06991a(int a4, int a5)
{
    int stk[6];
    register int t2;
    register int t8;
    register int t25;
    register int t27;
    register int t28;
    register int t14;
    register int t17;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    int t7;
    register float u9;

    FUN_0c07ff00();
    t2 = (FUN_0c073360());
    t8 = 0x0;
    for (;;) {
        if ((int)t8 >= (int)(*(int *)((a4 + 0x4)))) {
            break;
        }
        t25 = t7;
        t27 = t3;
        t28 = t4;
        if (t8 != 0) {
            t6 = 0xC1EC740;
            t7 = 0xC110374;
            t2 = (*(int *)((t6 + 0x0)));
            t2 = (t2 << 2);
            t4 = (*(int *)((t7 + t2)));
            t2 = (((int (*)(void))(t4))());
            t14 = t2;
            t2 = 0xC069AA0;
            u9 = (*(float *)((t2 + 0x0)));
            t3 = 0xC073C40;
            t2 = 0x5;
            t2 = ((int)((int)t14 % (int)t2));
            t17 = t2;
            t2 = (t2 << 2);
            t2 = (t2 + t17);
            t2 = (FUN_0c073c40(((int)stk + 0), 0xC10D9C8, ((float)t2 + u9)));
            t2 = (*(int *)((t6 + 0x0)));
            t2 = (t2 << 2);
            t5 = (*(int *)((t7 + t2)));
            t2 = (((int (*)(void))(t5))());
            t7 = 0x1FFF;
            t6 = 0x4000;
            t5 = t2;
            t4 = 0xC073650;
            t2 = (nlRotateAY(((t2 & t7) + t6)));
            t7 = 0xC072290;
            t2 = (FUN_0c072290(((int)stk + 0), ((int)stk + 0)));
            t7 = 0xC073AD0;
            t2 = (nlAddVector((((int)stk + 0) + 0xC), ((int)stk + 0)));
            t25 = 0xC073AD0;
            t27 = 0xC073C40;
            t28 = 0xC073650;
        }
        *(volatile int *)((a4 + 0x0));
        t7 = t25;
        t3 = t27;
        t4 = t28;
        t2 = 0xC;
        t2 = (FUN_0c07ff00());
        t8 = (t8 + 0x1);
    }
    return (nlPopMatrix(0x1));
}

int FUN_0c01eeda(int a4, int a5, int a6, int a7)
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
    register int t9;
    register int t10;

    t1 = 0xC26ECC0;
    t2 = 0x0;
    t3 = a7;
    t4 = 0x0;
    t5 = 0xFFFFFFFF;
    t6 = 0xFFFFFFFF;
    for (;;) {
        if (((*(signed char *)((t1 + 0x0))) == 0) && ((int)t0 <= (int)a4)) {
            if (t6 == -1) {
                t0 = (*(int *)((t1 + 0x8)));
                t6 = t2;
                t3 = (*(int *)((t1 + 0xC)));
                t0 = (t0 + 0x1);
                t7 = 0x1;
            } else {
                t8 = (*(int *)((t1 + 0x8)));
                t7 = (t7 + 0x1);
                t8 = (t8 + 0x1);
                t3 = (t3 + (*(int *)((t1 + 0xC))));
                t0 = (t0 + t8);
            }
            t8 = (*(int *)((t1 + 0x8)));
            t2 = (t2 + t8);
            t9 = (t8 + 0x1);
            t8 = (t8 + 0x1);
            t1 = (t1 + ((((t9 << 1) + t8) << 2) << 1));
        } else {
            if (t6 != -1) {
                t9 = t8;
                if ((int)t0 >= (int)a4) {
                    t8 = 0xC07FAEC;
                    t10 = t3;
                    t3 = ((int)((int)t10 / (int)t7));
                    if ((t5 == -1) || ((int)t3 > (int)t4)) {
                        t4 = t3;
                        t5 = t6;
                    }
                    t9 = 0xC07FAEC;
                } else {
                    t7 = t10;
                }
                t10 = t7;
                t0 = 0x0;
                t8 = t9;
                t6 = 0xFFFFFFFF;
            }
            if ((*(signed char *)((t1 + 0x0))) != 0) {
                t10 = (*(int *)((t1 + 0x8)));
                t8 = (t10 + 0x1);
                t1 = (t1 + (((((t10 + 0x1) << 1) + t8) << 2) << 1));
                t2 = (t2 + t10);
            } else {
                t2 = (t2 - 1);
            }
        }
        t8 = 0x120;
        t2 = (t2 + 0x1);
        if ((int)t2 > (int)t8) {
            break;
        }
    }
    return t5;
}

int FUN_0c16b0b6(int a4)
{
    register int t0;
    register int t1;

    if (a4 != 0) {
        if ((*(int *)((a4 + 0x18))) != 0) {
            t0 = (FUN_0c07d050((*(short *)((a4 + 0x6)))));
        }
        t1 = t0;
        t0 = 0x0;
        for (;;) {
            if ((int)t0 >= (int)(*(int *)((a4 + 0x8)))) {
                break;
            }
            t1 = (FUN_0c07d68e((*(int *)((((t0 << 2) + (a4 + 0x2C)) + 0x0)))));
            if ((int)t1 < 0) {
                t1 = (FUN_0c16ada2(0xC171EF8));
            }
            t0 = (t0 + 0x1);
        }
        t0 = t1;
        t1 = 0x0;
        for (;;) {
            if ((int)t1 >= (int)(*(int *)((a4 + 0x8)))) {
                break;
            }
            t0 = (FUN_0c07d68e((*(int *)((((t1 << 2) + (a4 + 0x34)) + 0x0)))));
            if ((int)t0 < 0) {
                t0 = (FUN_0c16ada2(0xC171EF8));
            }
            t1 = (t1 + 0x1);
        }
        FUN_0c07cfd0((*(short *)((a4 + 0x6))));
        mwlSbFreeWork((*(int *)((a4 + 0x1C))));
        *(unsigned int *)((a4 + 0x8)) = 0x0;
        *(unsigned int *)((a4 + 0xC)) = 0x0;
        memset(a4, 0x0, 0x68);
        *(unsigned char *)((a4 + 0x4)) = 0x0;
        t0 = 0x0;
    }
    return t0;
}

int FUN_0c1505ac(int a4, int a5, int a6, int a7, int a8, int a9)
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
    register int t9;

    t0 = FUN_0c15047c(a4, a5);
    if ((int)t0 < 0) {
        *(unsigned int *)((a7 + 0x0)) = 0x0;
        *(unsigned int *)((a8 + 0x0)) = 0xFFFFFFFF;
        *(unsigned int *)((a9 + 0x0)) = 0xFFFFFFFF;
    } else {
        t1 = *(int *)(((a4 << 2) + 0xC2D21F4));
        for (;;) {
            t4 = *(int *)((t1 + 0x0));
            if (t4 == 0) {
                t5 = (((struct o3C_short *)(t1))->v);
                if ((int)a5 > 0) {
                    t6 = 0x0;
                    t7 = ((t1 + 0x3C) + 0x2);
                    t8 = (unsigned short)t5;
                    for (;;) {
                        t9 = *(short *)((t7 + 0x0));
                        t7 = (t7 + 0x2);
                        t6 = (t6 + 0x1);
                        t8 = (t8 + (unsigned short)t9);
                        if ((int)t6 >= (int)a5) {
                            break;
                        }
                    }
                    strncpy(a6, (t1 + 0x10), 0x28);
                    *(unsigned int *)((a7 + 0x0)) = (*(int *)((t1 + 0x38)));
                    *(unsigned int *)((a8 + 0x0)) = t8;
                } else {
                    strncpy(a6, (t1 + 0x10), 0x28);
                    *(unsigned int *)((a7 + 0x0)) = (*(int *)((t1 + 0x38)));
                    *(unsigned int *)((a8 + 0x0)) = (unsigned short)t5;
                }
                *(unsigned int *)((a9 + 0x0)) = (unsigned short)(*(short *)(((a5 << 1) + ((t1 + 0x3C) + 0x2))));
                return t0;
            }
            t5 = t4;
            t4 = 0x0;
            t6 = (t1 + 0x3C);
            t2 = t1;
            for (;;) {
                if ((int)t4 >= (int)(unsigned short)(*(short *)((t2 + 0xC)))) {
                    t2 = (*(int *)((t2 + 0x0)));
                    t5 = (*(int *)((t2 + 0x0)));
                    if (t5 == 0) {
                        t4 = t2;
                        t4 = (t4 + 0x3C);
                        t3 = (*(short *)((t4 + 0x0)));
                        t4 = (t4 + 0x2);
                        t7 = t4;
                        t4 = 0x0;
                        t3 = (unsigned short)t3;
                        t6 = t7;
                        if ((int)a5 > 0) {
                            for (;;) {
                                t8 = (*(short *)((t6 + 0x0)));
                                t6 = (t6 + 0x2);
                                t4 = (t4 + 0x1);
                                t8 = (unsigned short)t8;
                                t3 = (t3 + t8);
                                if ((int)t4 >= (int)a5) {
                                    break;
                                }
                            }
                        }
                        t6 = 0x28;
                        t4 = a6;
                        strncpy(t4, (t2 + 0x10), t6);
                        t8 = (*(int *)((t2 + 0x38)));
                        *(unsigned int *)((a7 + 0x0)) = t8;
                        *(unsigned int *)((a8 + 0x0)) = t3;
                        t8 = (*(short *)(((a5 << 1) + t7)));
                        t8 = (unsigned short)t8;
                        *(unsigned int *)((a9 + 0x0)) = t8;
                        return t0;
                    }
                    t6 = t2;
                    t6 = (t6 + 0x3C);
                    t4 = 0x0;
                    continue;
                }
                t3 = t4;
                t3 = (t3 << 2);
                t3 = (t3 << 1);
                t3 = (t3 + t6);
                t8 = (*(short *)((t3 + 0x0)));
                t8 = (unsigned short)t8;
                if (t8 == a5) {
                    break;
                }
                t4 = (t4 + 0x1);
            }
            break;
        }
        strncpy(a6, (t2 + 0x10), 0x28);
        *(unsigned int *)((a7 + 0x0)) = (*(int *)((t2 + 0x38)));
        *(unsigned int *)((a8 + 0x0)) = (*(int *)((t3 + 0x4)));
        *(unsigned int *)((a9 + 0x0)) = (unsigned short)(*(short *)((t3 + 0x2)));
    }
    return t0;
}

int ADXSJD_Create(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t0 = *(int *)((a6 + 0x0));
    t1 = 0x0;
    for (;;) {
        if ((*(signed char *)((((t1 * 0x9C) + 0xC302AC0) + 0x0))) != 0) {
            t1 = (t1 + 0x1);
            if ((int)t1 >= (int)0x8) {
                break;
            }
            continue;
        }
        break;
    }
    t2 = 0x0;
    if (t1 != 8) {
        t3 = SJRBF_GetBufPtr(t0);
        t4 = SJRBF_GetBufSize(t0);
        t5 = SJRBF_GetXtrSize(t0);
        t0 = ADXB_Create(a5, t3, ((unsigned int)t4 >> 1), (((unsigned int)t4 >> 1) + ((unsigned int)t5 >> 1)));
        *(unsigned int *)((((t1 * 0x9C) + 0xC302AC0) + 0x4)) = t0;
        ADXB_EntryAddWrFunc(t0, 0xC161C04, ((t1 * 0x9C) + 0xC302AC0));
        if ((*(int *)((((t1 * 0x9C) + 0xC302AC0) + 0x4))) == 0) {
            t0 = 0x0;
        } else {
            *(unsigned int *)((((t1 * 0x9C) + 0xC302AC0) + 0x8)) = a4;
            *(unsigned char *)((((t1 * 0x9C) + 0xC302AC0) + 0x2)) = a5;
            if ((int)a5 > 0) {
                t3 = 0x0;
                t4 = 0x0;
                for (;;) {
                    t4 = (t4 + 0x1);
                    *(unsigned int *)((((((t1 * 0x9C) + 0xC302AC0) + 0xC) + t3) + 0x0)) = (*(int *)((a6 + t3)));
                    t3 = (t3 + 0x4);
                    if ((int)t4 >= (int)a5) {
                        break;
                    }
                }
            }
            *(unsigned char *)((((t1 * 0x9C) + 0xC302AC0) + 0x1)) = 0x0;
            FUN_0c16197a(((t1 * 0x9C) + 0xC302AC0));
            (((struct o48_uint *)(((t1 * 0x9C) + 0xC302AC0)))->v) = 0x0;
            (((struct o4C_uint *)(((t1 * 0x9C) + 0xC302AC0)))->v) = 0x0;
            (((struct o50_uint *)(((t1 * 0x9C) + 0xC302AC0)))->v) = 0x0;
            (((struct o54_uint *)(((t1 * 0x9C) + 0xC302AC0)))->v) = 0x0;
            *(unsigned char *)((((t1 * 0x9C) + 0xC302AC0) + 0x0)) = 0x1;
            t0 = ((t1 * 0x9C) + 0xC302AC0);
        }
        t2 = t0;
    }
    return t2;
}

int FUN_0c04afec(int a4, int a5, int a6, int a7, float f4, float f5)
{
    int stk[3];
    register float u0;
    register int t1;
    register int t2;
    register int t3;
    register float u4;
    register float u5;
    register float u6;
    register float u12;
    register float u19;
    register int t20;
    register int t21;
    register int t22;
    register float u24;
    register float u25;
    register float u26;
    register float u27;
    register float u33;
    register float u7;
    register float u15;
    register float u16;
    register float u17;
    register float u23;
    register float u37;
    register float u38;
    register float u39;
    register float u40;

    u0 = (((struct o0_float *)0xC04B104)->v);
    t1 = 0x0;
    t2 = a4;
    t3 = 0x0;
    u4 = (float)a7;
    u5 = f4;
    u6 = f5;
    for (;;) {
        if ((*(int *)((t2 + 0x10))) == -1) {
            break;
        }
        nlSubVector3op(((int)stk + 0), (t2 + 0x4), a6);
        u6 = (*(float *)(((int)stk + 0)));
        u5 = (*(float *)(((int)stk + 8)));
        u4 = u5;
        u4 = (u4 * u5);
        u12 = u4;
        u12 = u12 + u6 * u6;
        u4 = u12;
        u7 = u4;
        if ((float)a7 > u7) {
            u7 = _builtin_sqrtf(u7);
            u5 = u7;
            FUN_0c01f368(t1, 0x0, u5);
            t3 = (t3 + 0x1);
        } else {
            u15 = u4;
            u16 = u5;
            u17 = u6;
        }
        u4 = u15;
        u5 = u16;
        u6 = u17;
        t1 = (t1 + 0x1);
        t2 = (t2 + 0x14);
    }
    u19 = (((struct oC_float *)0xC04B104)->v);
    t20 = 0x0;
    t21 = t3;
    t22 = a5;
    u24 = u4;
    u25 = u5;
    u26 = u6;
    u27 = u7;
    for (;;) {
        if ((*(int *)((t22 + 0x10))) == -1) {
            break;
        }
        nlSubVector3op(((int)stk + 0), (t22 + 0x4), a6);
        u26 = (*(float *)(((int)stk + 0)));
        u25 = (*(float *)(((int)stk + 8)));
        u23 = (*(float *)((t22 + 0x0)));
        u24 = u25;
        u24 = (u24 * u25);
        u33 = u24;
        u33 = u33 + u26 * u26;
        u24 = u33;
        u27 = u24;
        if (u23 > u19) {
            u25 = u0;
        } else {
            u25 = (float)a7;
        }
        if (u25 > u27) {
            u27 = _builtin_sqrtf(u27);
            u25 = u27;
            FUN_0c01f368(t20, 0x1, u25);
            t21 = (t21 + 0x1);
        } else {
            u37 = u23;
            u38 = u24;
            u39 = u25;
            u40 = u26;
        }
        u23 = u37;
        u24 = u38;
        u25 = u39;
        u26 = u40;
        t20 = (t20 + 0x1);
        t22 = (t22 + 0x14);
    }
    return t21;
}

int syIntAdrChk_init(void)
{
    int stk[3];
    register int t16;
    register int t24;
    register int t2;

    *(unsigned char *)0xFFC00004 = ((*(signed char *)0xFFC00004) & 0xFE);
    *(unsigned int *)(((int)stk + 0)) = (unsigned char)(*(signed char *)0xFFC00004);
    *(unsigned int *)(((int)stk + 0)) = 0x0;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 0))) >= (int)0x50000) {
            break;
        }
        t2 = (*(int *)(((int)stk + 0)));
        t2 = (t2 + 0x1);
        *(unsigned int *)(((int)stk + 0)) = t2;
    }
    if (((unsigned char)(*(signed char *)(((((((struct o0_int *)0xC30BC04)->v)) + 0x1C) + 0x0))) & 4) != 0) {
        (((struct o8_uint *)0xC30BC04)->v) = 0x0;
    } else {
        (((struct o8_uint *)0xC30BC04)->v) = 0x1;
    }
    if (((((struct o8_int *)0xC30BC04)->v)) != 0) {
        
        (((struct o0_uint *)0xC30BC04)->v) = 0xFFE00000;
        *(unsigned char *)0xFFE00008 = 0x0;
        *(unsigned char *)(((((((struct o0_int *)0xC30BC04)->v)) + 0x8) + 0x0)) = 0x0;
        *(unsigned char *)((((((struct o0_int *)0xC30BC04)->v)) + 0x0)) = 0x0;
        *(unsigned char *)(((((((struct o0_int *)0xC30BC04)->v)) + 0x4) + 0x0)) = 0x28;
        *(unsigned int *)(((int)stk + 4)) = 0x0;
        t16 = 0xFFE00008;
        for (;;) {
            if ((int)(*(int *)(((int)stk + 4))) >= (int)0x80000) {
                break;
            }
            t16 = (*(int *)(((int)stk + 4)));
            t16 = (t16 + 0x1);
            *(unsigned int *)(((int)stk + 4)) = t16;
        }
        *(unsigned char *)(((((((struct o0_int *)0xC30BC04)->v)) + 0x8) + 0x0)) = 0x30;
    } else {
        (((struct o4_uint *)0xC30BC04)->v) = 0xFFE80000;
        *(unsigned short *)0xFFE80008 = 0x0;
        *(unsigned short *)(((((((struct o4_int *)0xC30BC04)->v)) + 0x18) + 0x0)) = 0x6;
        *(unsigned short *)(((((((struct o4_int *)0xC30BC04)->v)) + 0x8) + 0x0)) = 0x0;
        *(unsigned short *)((((((struct o4_int *)0xC30BC04)->v)) + 0x0)) = 0x0;
        *(unsigned char *)(((((((struct o4_int *)0xC30BC04)->v)) + 0x4) + 0x0)) = 0x28;
        *(unsigned int *)(((int)stk + 8)) = 0x0;
        t24 = 0xFFE80008;
        for (;;) {
            if ((int)(*(int *)(((int)stk + 8))) >= (int)0x80000) {
                break;
            }
            t24 = (*(int *)(((int)stk + 8)));
            t24 = (t24 + 0x1);
            *(unsigned int *)(((int)stk + 8)) = t24;
        }
        *(unsigned short *)(((((((struct o4_int *)0xC30BC04)->v)) + 0x18) + 0x0)) = 0x308;
        *(unsigned short *)(((((((struct o4_int *)0xC30BC04)->v)) + 0x8) + 0x0)) = 0x30;
    }
    return ((((struct o8_int *)0xC30BC04)->v));
}

int FUN_0c1504e4(int a4, int a5, int a6, int a7, int a8)
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
    register int t9;

    t0 = FUN_0c15047c(a4, a5);
    if ((int)t0 < 0) {
        *(unsigned int *)((a7 + 0x0)) = 0xFFFFFFFF;
        *(unsigned int *)((a8 + 0x0)) = 0xFFFFFFFF;
    } else {
        t1 = *(int *)(((a4 << 2) + 0xC2D21F4));
        for (;;) {
            t4 = *(int *)((t1 + 0x0));
            if (t4 == 0) {
                t5 = (((struct o3C_short *)(t1))->v);
                if ((int)a5 > 0) {
                    t6 = 0x0;
                    t7 = ((t1 + 0x3C) + 0x2);
                    t8 = (unsigned short)t5;
                    for (;;) {
                        t9 = *(short *)((t7 + 0x0));
                        t7 = (t7 + 0x2);
                        t6 = (t6 + 0x1);
                        t8 = (t8 + (unsigned short)t9);
                        if ((int)t6 >= (int)a5) {
                            break;
                        }
                    }
                    strncpy(a6, (t1 + 0x10), 0x28);
                    *(unsigned int *)((a7 + 0x0)) = t8;
                } else {
                    strncpy(a6, (t1 + 0x10), 0x28);
                    *(unsigned int *)((a7 + 0x0)) = (unsigned short)t5;
                }
                *(unsigned int *)((a8 + 0x0)) = (unsigned short)(*(short *)(((a5 << 1) + ((t1 + 0x3C) + 0x2))));
                return t0;
            }
            t5 = t4;
            t4 = 0x0;
            t6 = (t1 + 0x3C);
            t2 = t1;
            for (;;) {
                if ((int)t4 >= (int)(unsigned short)(*(short *)((t2 + 0xC)))) {
                    t2 = (*(int *)((t2 + 0x0)));
                    t5 = (*(int *)((t2 + 0x0)));
                    if (t5 == 0) {
                        t4 = t2;
                        t4 = (t4 + 0x3C);
                        t3 = (*(short *)((t4 + 0x0)));
                        t4 = (t4 + 0x2);
                        t7 = t4;
                        t4 = 0x0;
                        t3 = (unsigned short)t3;
                        t6 = t7;
                        if ((int)a5 > 0) {
                            for (;;) {
                                t8 = (*(short *)((t6 + 0x0)));
                                t6 = (t6 + 0x2);
                                t4 = (t4 + 0x1);
                                t8 = (unsigned short)t8;
                                t3 = (t3 + t8);
                                if ((int)t4 >= (int)a5) {
                                    break;
                                }
                            }
                        }
                        t6 = 0x28;
                        t4 = a6;
                        strncpy(t4, (t2 + 0x10), t6);
                        *(unsigned int *)((a7 + 0x0)) = t3;
                        t8 = (*(short *)(((a5 << 1) + t7)));
                        t8 = (unsigned short)t8;
                        *(unsigned int *)((a8 + 0x0)) = t8;
                        return t0;
                    }
                    t6 = t2;
                    t6 = (t6 + 0x3C);
                    t4 = 0x0;
                    continue;
                }
                t3 = t4;
                t3 = (t3 << 2);
                t3 = (t3 << 1);
                t3 = (t3 + t6);
                t8 = (*(short *)((t3 + 0x0)));
                t8 = (unsigned short)t8;
                if (t8 == a5) {
                    break;
                }
                t4 = (t4 + 0x1);
            }
            break;
        }
        strncpy(a6, (t2 + 0x10), 0x28);
        *(unsigned int *)((a7 + 0x0)) = (*(int *)((t3 + 0x4)));
        *(unsigned int *)((a8 + 0x0)) = (unsigned short)(*(short *)((t3 + 0x2)));
    }
    return t0;
}

int FUN_0c06cb24(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = 0x0;
    for (;;) {
        if ((int)t0 < (int)0xA) {
            t1 = 0x0;
            for (;;) {
                t2 = (FUN_0c14fd82(0xC1129D4, 0x0));
                t1 = (t1 + 0x1);
                if ((int)t1 <= (int)0x78) {
                    if (t2 != 0) {
                        break;
                    }
                    continue;
                }
                t0 = (t0 + 0x1);
                if ((int)t0 < (int)0xA) {
                    t1 = 0x0;
                    continue;
                }
                return t2;
            }
            t1 = t2;
            t2 = (FUN_0c1503dc(t2));
            t3 = t2;
            t2 = (nlMalloc(((((t2 << 8) << 2) << 1) + 0x40)));
            (((struct o0_uint *)0xC13C344)->v) = t2;
            if (t2 != 0) {
                (((struct o4_uint *)0xC13C344)->v) = ((t2 + 0x20) & 0xFFFFFFE0);
                t2 = (FUN_0c1500d2(t1, t3, ((t2 + 0x20) & 0xFFFFFFE0)));
                for (;;) {
                    t2 = (FUN_0c150460(t1));
                    if (t2 == 3) {
                        t2 = (FUN_0c14ff0c(t1));
                        return t2;
                    }
                    if (t2 == 4) {
                        break;
                    }
                }
                t2 = (FUN_0c14ff0c(t1));
                t2 = (nlFree(((((struct o0_int *)0xC13C344)->v))));
                t0 = (t0 + 0x1);
                continue;
            }
            return t2;
        }
        return t2;
    }
}

int ovLibDeleteTbl(int a4)
{
    int stk[3];
    register int t1;
    register int t22;
    register int t4;
    register int t6;
    register int t7;
    register int t8;
    register int t10;
    register int t12;
    register int t14;
    register int t5;
    register int t9;
    register int t11;

    *(unsigned int *)(((int)stk + 8)) = a4;
    FUN_0c149c00(((int)stk + 0));
    t1 = ovGetLibTbl((((int)stk + 0) + 0x4));
    t8 = ovSearchLib((*(int *)(((int)stk + 8))));
    t22 = 0xFFFFFFFE;
    if ((int)t8 >= 0) {
        t4 = *(int *)((t1 + 0x0));
        *(unsigned int *)((t1 + 0x0)) = (t4 - 1);
        t6 = (t4 - 1);
        t7 = t8;
        t10 = t9;
        t12 = t11;
        for (;;) {
            if ((int)t7 >= (int)(*(int *)((t1 + 0x0)))) {
                break;
            }
            t10 = t7;
            t10 = (t10 + 0x1);
            t12 = t1;
            t10 = (t10 << 2);
            t12 = (t12 + 0x8);
            t8 = t7;
            t8 = (t8 << 2);
            t6 = t12;
            t14 = t12;
            t12 = t1;
            t8 = (t8 << 1);
            t10 = (t10 << 1);
            t5 = (*(int *)(((t14 + t10) + 0x0)));
            t12 = (t12 + 0x8);
            t6 = (t6 + t8);
            t10 = (t10 + t12);
            *(unsigned int *)((t6 + 0x0)) = t5;
            t6 = (*(int *)((t10 + 0x4)));
            t8 = (t8 + t12);
            t7 = (t7 + 0x1);
            *(unsigned int *)((t8 + 0x4)) = t6;
        }
        *(unsigned int *)((((t1 + 0x8) + ((t7 << 2) << 1)) + 0x0)) = 0x0;
        *(unsigned int *)(((((t7 << 2) << 1) + (t1 + 0x8)) + 0x4)) = 0x0;
        t22 = 0x0;
    }
    FUN_0c149c18(((int)stk + 0));
    return t22;
}

int FUN_0c01fcd0(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t4;

    t0 = 0x0;
    t1 = 0x0;
    t2 = 0x9C4;
    for (;;) {
        t4 = *(int *)(((((t0 << 2) << 2) + (*(int *)0xC123E50)) + 0x8));
        if (t4 == -1) {
            break;
        }
        nlDispStripLoadTexture(t2, ((*(int *)0xC123E50) + t1));
        t1 = (t1 + 0x10);
        t2 = (t2 + 0x1);
        t0 = (t0 + 0x1);
    }
    return t4;
}

int _lsft(int a4, int a5)
{
    register int t15;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t0;

    t15 = 0x0;
    if ((unsigned int)((a5 - 1) + a4) >= (unsigned int)a4) {
        t1 = ((a5 - 1) + a4);
        t2 = ((a5 - 1) + a4);
        t3 = 0x0;
        for (;;) {
            t4 = *(signed char *)((t1 + 0x0));
            *(unsigned char *)((t1 + 0x0)) = ((*(signed char *)((t1 + 0x0))) << 1);
            if (t3 != 0) {
                t0 = (*(signed char *)((t2 + 0x0)));
                t0 = (t0 | 0x1);
                *(unsigned char *)((t2 + 0x0)) = t0;
            }
            t1 = (t1 - 1);
            t3 = ((unsigned char)t4 & 0x80);
            t2 = (t2 - 1);
            if ((unsigned int)t1 < (unsigned int)a4) {
                break;
            }
        }
        t15 = t3;
    }
    if (t15 != 0) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c0962ac(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    if ((unsigned int)((a6 - 1) + a4) >= (unsigned int)a4) {
        t0 = ((a6 - 1) + a4);
        t1 = ((a6 - 1) + a5);
        t2 = 0x0;
        for (;;) {
            t4 = *(signed char *)((t1 + 0x0));
            t5 = *(signed char *)((t0 + 0x0));
            *(unsigned char *)((t0 + 0x0)) = (((unsigned char)t5 + (unsigned char)t4) + t2);
            t3 = (int)((int)(((unsigned char)t5 + (unsigned char)t4) + t2) / (int)0x100);
            t0 = (t0 - 1);
            t2 = t3;
            t1 = (t1 - 1);
            if ((unsigned int)t0 < (unsigned int)a4) {
                break;
            }
        }
        t0 = t3;
    }
    return t0;
}

int FUN_0c0722b0(int a4, int a5, int a6)
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
        t0 = (FUN_0c072290(((t3 + 0xC) - 12), ((t2 + 0xC) - 12)));
    }
    return t0;
}
