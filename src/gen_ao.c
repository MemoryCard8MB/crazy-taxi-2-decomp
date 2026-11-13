/* Straight-line functions with calls and guards (batch gen_ao): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o4C_short { char p[0x4C]; short v; };
struct o6_ushort { char p[0x6]; unsigned short v; };
struct o8_float { char p[0x8]; float v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oD78_int { char p[0xD78]; int v; };
int ADXERR_EntryErrFunc(int, int);
int BigOneRotate(int, int, int);
int CarSel_SetLight(void);
int FUN_0c01f098(void);
int FUN_0c01fbda(void);
int FUN_0c072b60(int);
int FUN_0c073a30(float, float, float);
int FUN_0c076130(float);
int FUN_0c07b6e6(int);
int FUN_0c07d1f4(int, int);
int FUN_0c07dfb0(int, int, int);
int FUN_0c160584(int, int);
int FUN_0c160688(int, int, int);
int FUN_0c1606b0(int);
extern float _builtin_sqrtf(float);
int buFbrCreateServer(int);
int buFbrInit(void);
int buFbrSleepFiber(int, int, int, int, float, float, float, float, float, float, float, float);
int cvFsGetFileSize(int);
int gdc_GetStreamVoiceStat2(int);
int kmSetBorderColor(int, ...);
int kmSetFogTableColor(int, ...);
int kmSetFogVertexColor(int, ...);
int kmiRegisterCallback(int, int, int, int);
int memcpy(int, int, int);
int memset(int, int, int);
int mpdrv_get_device(int);
int nlGetMatrix(int);
int nlMultiMatrix8(int);
int nlPushMatrix(int);
int nlUnitMatrix(void);
int nlstripSetVertexContext(int);
int FUN_0c15c8e6(int a4, int a5);
int FUN_0c02022a(void);
int FUN_0c0273b6(void);
int FUN_0c04fc92(void);
int FUN_0c04feb0(void);
int FUN_0c057624(void);
int FUN_0c059074(int a4);
int FUN_0c05b56c(int a4, int a5, int a6);
void FUN_0c06f960(int a4);
int FUN_0c06f920(int a4);
float FUN_0c070c40(float f4);
int FUN_0c0722f0(void);
int FUN_0c073360(void);
int FUN_0c073a40(int a4);
void FUN_0c076270(int a4, int a5);
int FUN_0c07b84a(void);
void FUN_0c07d27e(int a4, int a5, int a6);
int FUN_0c07dca0(int a4, int a5, int a6);
int FUN_0c07dc10(int a4, int a5, int a6);
int FUN_0c07f936(int a4, int a5);
int FUN_0c08fa8a(int a4);
int FUN_0c091ae0(void);
int vmsfb_init(void);
int buFbrEndFiber(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
int FUN_0c095a90(int a4, int a5);
int syCfgGetIDAddress(int a4, int a5, int a6);
int kmfSetFatalErrorCallback(int a4);
int kmSetPALEXTCallback(int a4);
int gdFsGetFileSize(int a4, int a5);
int gdFsGetFileSctSize(int a4, int a5);
int gdFsGetFileFad(int a4, int a5);
int syTmrMicroToCount(int a4);
int syTmrGenSetCount(int a4);
int FUN_0c161690(void);
int FUN_0c1616aa(void);
int mwGscGetStat(int a4, int a5);
int SJUNI_GetNumChainPool(int a4);
int kmiDefaultInterruptHandler(int a4, int a5, int a6, int a7);
int mpdrv_stat(int a4, int a5);
int mwSbSetNumChan(int a4, int a5);
int gdCiExecServer(void);
int syG2DmaResume(int a4);
int FUN_0c06f860(int a4);
int FUN_0c06f880(int a4);
int FUN_0c073a60(int a4);
int FUN_0c026bf4(float f4);
int thunk_FUN_0c1616c4(int a4, int a5);

int FUN_0c15c8e6(int a4, int a5)
{
    int stk[2];

    *(unsigned int *)((((int)stk + 0) + 0x0)) = a4;
    *(unsigned int *)((((int)stk + 0) + 0x4)) = a5;
    return (FUN_0c160584(0x1C, ((int)stk + 0)));
}

int FUN_0c02022a(void)
{
    register int t0;

    t0 = *(int *)0xC2708C4;
    if (t0 == 1) {
        FUN_0c01f098();
        return FUN_0c01fbda();
    }
    return t0;
}

int FUN_0c0273b6(void)
{
    (((struct o0_uint *)0xC12423C)->v) = 0x0;
    (((struct o4_uint *)0xC12423C)->v) = 0x0;
    (((struct o0_uint *)0xC270CFC)->v) = 0x0;
    (((struct o4_uint *)0xC270CFC)->v) = 0x0;
    (((struct o8_uint *)0xC12423C)->v) = 0x1;
    return 0xC124244;
}

int FUN_0c04fc92(void)
{
    *(unsigned int *)0xC2B1DD4 = 0x0;
    (((struct o0_uint *)0xC2B2988)->v) = 0x0;
    (((struct o8_uint *)0xC2B2988)->v) = 0x0;
    (((struct o0_uint *)0xC2B2A78)->v) = 0x0;
    (((struct o4_uint *)0xC2B2A78)->v) = 0x63;
    return 0xC2B2A7C;
}

int FUN_0c04feb0(void)
{
    (((struct o14_uint *)0xC2B29E4)->v) = 0x0;
    (((struct o0_uint *)0xC2B29E4)->v) = 0x1;
    (((struct o4_uint *)0xC2B29E4)->v) = 0x0;
    (((struct o8_uint *)0xC2B29E4)->v) = 0x0;
    (((struct oC_uint *)0xC2B29E4)->v) = 0x0;
    return 0xC2B29E8;
}

int FUN_0c057624(void)
{
    (((struct o4_ushort *)0xC2B3190)->v) = 0xEB00;
    (((struct o6_ushort *)0xC2B3190)->v) = 0xF200;
    (((struct o0_float *)0xC2B3190)->v) = (*(float *)0xC0576CC);
    (((struct o10_uint *)0xC2B3190)->v) = 0x8;
    return CarSel_SetLight();
}

int FUN_0c059074(int a4)
{
    register int t0;

    t0 = gdc_GetStreamVoiceStat2(a4);
    if (t0 != 0) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c05b56c(int a4, int a5, int a6)
{
    register int t0;

    t0 = BigOneRotate(a4, a5, a6);
    return nlMultiMatrix8(t0);
}

void FUN_0c06f960(int a4)
{
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t1 = a4;
    t2 = 0x5;
    t3 = 0xC2BB52C;
    t4 = (*(int *)0xC2D0C3C);
    for (;;) {
        t5 = *(int *)((t4 + 0x0));
        t4 = (t4 + 0x4);
        t2 = (t2 - 0x1);
        t6 = *(int *)((t3 + 0x0));
        t3 = (t3 + 0x4);
        *(unsigned int *)((t1 + 0x0)) = (t5 - t6);
        t1 = (t1 + 0x4);
        if (t2 == 0) {
            break;
        }
    }
}

int FUN_0c06f920(int a4)
{
    return (kmSetBorderColor((a4 | 0xFF000000)));
}

float FUN_0c070c40(float f4)
{
    if (f4 == 0.0f) {
        return (*(float *)0xC070CBC);
    }
    return (1.0f / _builtin_sqrtf(f4));
}

int FUN_0c0722f0(void)
{
    nlGetMatrix(0x0);
    (((struct o8_uint *)0xC2BF940)->v) = ((((struct o4_int *)0xC2BF940)->v));
    (((struct o0_ushort *)0xC2BF940)->v) = 0x0;
    return FUN_0c072b60(0x0);
}

int FUN_0c073360(void)
{
    register int t0;

    t0 = nlPushMatrix(0x0);
    nlUnitMatrix();
    return t0;
}

int FUN_0c073a40(int a4)
{
    return FUN_0c073a30((-(*(float *)((a4 + 0x0)))), (-((((struct o4_float *)(a4))->v))), (-((((struct o8_float *)(a4))->v))));
}

void FUN_0c076270(int a4, int a5)
{
    *(unsigned int *)0xC2BB4A8 = ((((((~a4) & 0x7) << 2) << 2) << 1) + (((~a5) & 0x7) << 2));
}

int FUN_0c07b84a(void)
{
    register int t0;

    t0 = FUN_0c07b6e6(0xA0800098);
    if (t0 != 0) {
        return 0x1;
    }
    return 0x0;
}

void FUN_0c07d27e(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t0 = (a4 + 0x33);
    t1 = 0x4;
    for (;;) {
        t1 = (t1 - 0x1);
        *(unsigned char *)((t0 + 0x0)) = ((((short)a6 << 2) << 2) | (short)a5);
        t0 = (t0 + 0x4);
        if (t1 == 0) {
            break;
        }
    }
}

int FUN_0c07dca0(int a4, int a5, int a6)
{
    nlstripSetVertexContext(0xC1476D8);
    return FUN_0c07dfb0(a4, a5, a6);
}

int FUN_0c07dc10(int a4, int a5, int a6)
{
    nlstripSetVertexContext(0xC1476B0);
    return FUN_0c07dfb0(a4, a5, a6);
}

int FUN_0c07f936(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    if ((int)a5 > 0) {
        t0 = a4;
        t1 = 0x0;
        t2 = 0x0;
        for (;;) {
            t3 = *(signed char *)((t0 + 0x0));
            t0 = (t0 + 0x1);
            if (t3 != 0) {
                t1 = (t1 + 0x1);
                t2 = (t2 + 0x1);
                if ((int)t1 >= (int)a5) {
                    break;
                }
                continue;
            }
            break;
        }
        t0 = t2;
    } else {
        t0 = 0x0;
    }
    return t0;
}

int FUN_0c08fa8a(int a4)
{
    return (memset(a4, 0x0, 0x48));
}

int FUN_0c091ae0(void)
{
    register int t0;

    t0 = *(int *)0xC147528;
    if (t0 != 0) {
        return ((int (*)(void))(t0))();
    }
    return ((int (*)(void))(0xC091AFA))();
}

int vmsfb_init(void)
{
    register int t1;

    buFbrInit();
    t1 = buFbrCreateServer(0x8);
    *(unsigned int *)0xC2CF09C = t1;
    return t1;
}

int buFbrEndFiber(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    *(unsigned int *)((((((struct oD78_int *)((*(int *)0xC2D0B98)))->v)) + 0xC)) = 0x3;
    return (buFbrSleepFiber(0x0, a5, a6, a7, f4, f5, f6, f7, f8, f9, f10, f11));
}

int FUN_0c095a90(int a4, int a5)
{
    return memcpy(a5, (((a4 << 2) << 1) + 0xC118580), 0x8);
}

int syCfgGetIDAddress(int a4, int a5, int a6)
{
    register int t0;

    t0 = FUN_0c160688(0x0, a5, a6);
    if (t0 != 0) {
        return 0x0;
    }
    return FUN_0c1606b0(t0);
}

int kmfSetFatalErrorCallback(int a4)
{
    kmiRegisterCallback((*(int *)0xC174098), 0x8, a4, 0x0);
    return 0x0;
}

int kmSetPALEXTCallback(int a4)
{
    kmiRegisterCallback((*(int *)0xC174098), 0x9, a4, 0x0);
    return 0x0;
}

int gdFsGetFileSize(int a4, int a5)
{
    if (a4 != 0) {
        if (((((struct o4C_short *)(a4))->v)) == 0) {
            return 0x0;
        }
        *(unsigned int *)((a5 + 0x0)) = (*(int *)((a4 + 0xC)));
        return 0x1;
    }
    return 0x0;
}

int gdFsGetFileSctSize(int a4, int a5)
{
    if (a4 != 0) {
        if (((((struct o4C_short *)(a4))->v)) == 0) {
            return 0x0;
        }
        *(unsigned int *)((a5 + 0x0)) = (*(int *)((a4 + 0x10)));
        return 0x1;
    }
    return 0x0;
}

int gdFsGetFileFad(int a4, int a5)
{
    if (a4 != 0) {
        if (((((struct o4C_short *)(a4))->v)) == 0) {
            return 0x0;
        }
        *(unsigned int *)((a5 + 0x0)) = (*(int *)((a4 + 0x8)));
        return 0x1;
    }
    return 0x0;
}

int syTmrMicroToCount(int a4)
{
    return (((unsigned int)((0x7F & a4) * 0x64) >> 7) + (((unsigned int)a4 >> 7) * 0x64));
}

int syTmrGenSetCount(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)0xFFD80004;
    t1 = *(signed char *)0xFFD80004;
    (((struct o0_uchar *)0xFFD80004)->v) = (t1 & 0xFB);
    (((struct o1C_uint *)0xFFD80004)->v) = 0xFFFFFFFF;
    (((struct o20_uint *)0xFFD80004)->v) = (-a4);
    (((struct o0_uchar *)0xFFD80004)->v) = t0;
    return (t1 & 0xFB);
}

int FUN_0c161690(void)
{
    register int t0;

    t0 = memset(0xC3029A0, 0x0, 0x100);
    (((struct o0_uint *)0xC174300)->v) = 0x0;
    (((struct o4_uint *)0xC174300)->v) = 0x0;
    return t0;
}

int FUN_0c1616aa(void)
{
    register int t0;

    t0 = memset(0xC3029A0, 0x0, 0x100);
    (((struct o0_uint *)0xC174300)->v) = 0x0;
    (((struct o4_uint *)0xC174300)->v) = 0x0;
    return t0;
}

int mwGscGetStat(int a4, int a5)
{
    *(unsigned int *)((a5 + 0x0)) = (cvFsGetFileSize(a4));
    return 0x1;
}

int SJUNI_GetNumChainPool(int a4)
{
    register int t1;
    register int t2;

    t1 = (*(int *)((a4 + 0x14)));
    t2 = 0x0;
    for (;;) {
        if (t1 == 0) {
            break;
        }
        t1 = (*(int *)((t1 + 0x0)));
        t2 = (t2 + 0x1);
    }
    return t2;
}

int kmiDefaultInterruptHandler(int a4, int a5, int a6, int a7)
{
    register int t1;
    register int t2;

    t1 = *(int *)((((a4 << 2) << 1) + 0xC300B00));
    t2 = *(int *)(((0xC300B00 + ((a4 << 2) << 1)) + 0x4));
    return ((int (*)(int, int, int, int))(t1))(t2, a5, a6, a7);
}

int mpdrv_stat(int a4, int a5)
{
    register int t1;

    t1 = *(int *)(((mpdrv_get_device(a4)) + 0x20));
    return (((t1 == a5)) ? 1 : 0);
}

int mwSbSetNumChan(int a4, int a5)
{
    *(unsigned int *)((a4 + 0xC)) = a5;
    return FUN_0c07d1f4((*(int *)(((*(int *)((a4 + 0x1C))) + 0x4))), a5);
}

int gdCiExecServer(void)
{
    register int t1;
    register int t2;
    register int t0;

    t1 = 0xC30B670;
    t2 = 0xC30B670;
    for (;;) {
        if ((unsigned int)t1 >= (unsigned int)0xC30B6D0) {
            break;
        }
        t2 = t1;
        t0 = (*(int *)((t2 + 0x0)));
        t1 = (t1 + 0xC);
    }
    return t0;
}

int syG2DmaResume(int a4)
{
    *(unsigned int *)(((((((*(int *)((a4 + 0x0))) << 2) << 2) << 1) + (*(int *)(((*(int *)0xC1743EC) + 0x0)))) + 0x1C)) = 0x0;
    return 0x0;
}

int FUN_0c06f860(int a4)
{
    return (kmSetFogTableColor(a4));
}

int FUN_0c06f880(int a4)
{
    return (kmSetFogVertexColor(a4));
}

int FUN_0c073a60(int a4)
{
    return FUN_0c073a30((*(float *)((a4 + 0x0))), ((((struct o4_float *)(a4))->v)), ((((struct o8_float *)(a4))->v)));
}

int FUN_0c026bf4(float f4)
{
    *(float *)0xC270B58 = f4;
    return FUN_0c076130(f4);
}

int thunk_FUN_0c1616c4(int a4, int a5)
{
    return ADXERR_EntryErrFunc(a4, a5);
}
