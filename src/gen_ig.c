/* Straight-line functions with calls and guards (batch gen_ig): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_float { char p[0x20]; float v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o58_int { char p[0x58]; int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct oC_float { char p[0xC]; float v; };
int ETD_EntryRecvFunc(int, int);
int FUN_0c01e6f0(void);
int FUN_0c01ead0(int, int);
int FUN_0c01ec7a(int);
int FUN_0c01ed38(int);
int FUN_0c01edbc(int, int, int, int);
int FUN_0c01ee10(int, int);
int FUN_0c020ae8(void);
int FUN_0c027f28(int);
int FUN_0c0339fc(int);
int FUN_0c03e806(int, int);
int FUN_0c04ede4(int, int, int);
int FUN_0c04ef02(int);
int FUN_0c058be4(int);
int FUN_0c058ca6(int, int);
int FUN_0c058e82(void);
int FUN_0c058f64(int, int, int, int);
int FUN_0c05ab5e(void);
int FUN_0c05f834(void);
int FUN_0c061bae(void);
int FUN_0c06cb24(void);
int FUN_0c06f550(int, int, int, float);
int FUN_0c14b2ec(void);
int FUN_0c14b460(int);
int Voice_ShutUp(int, int);
int buStat(int);
int gdc_FileLoad(int, int, int);
int gdc_GetStreamVoiceStat2(int);
int gdc_StopStreamVoiceAll(void);
int gdc_StreamVoiceVol(int, int);
int gdc_VolStreamSong(int);
int mpvvlc_InitMbai(void);
int nlInitEvent(void);
int nlInitHeapMemory(int, int);
int nlLocate(int, int);
int nlPrintf(int, ...);
int ntLDBrowser(int);
int pfSize(float, float);
int FUN_0c06a0c0(void);
int FUN_0c058edc(int a4, int a5, int a6, int a7);
int Warning(float f4);
int FUN_0c01c468(void);
int FUN_0c06a1d0(int a4);
int FUN_0c048e74(void);
int FUN_0c03e0dc(int a4, int a5, int a6, int a7);
int InitAdvLogoSprite(void);
int FUN_0c0311b4(float f4);
int FUN_0c053c5c(void);
int FUN_0c04e92c(float f4);
int End_Adv_Title_LOGO(float f4);
int FUN_0c04edcc(int a4, int a5, int a6);
int FUN_0c14b478(void);
int FUN_0c069e54(void);
int thunk_FUN_0c14b2ec(void);

int FUN_0c06a0c0(void)
{
    register int t1;
    register int t2;

    t1 = *(int *)0xC2B9C2C;
    *(unsigned int *)0xC13B518 = (*(int *)(((*(int *)((0xC13B4F8 + ((t1 - 1) << 2)))) + (((int)((int)(FUN_0c069e54()) % (int)(*(int *)((((t1 - 1) << 2) + 0xC110964))))) << 2))));
    if (((*(int *)0xC2B9C2C) == 7) && (t2 = *(int *)0xC13B518, t2 == 0x323)) {
        t2 = *(int *)0xC2B9CA4;
        if ((*(int *)((t2 + 0x4))) == 1) {
            if (((*(signed char *)(((*(int *)((t2 + 0x0))) + 0xFE))) & 32) != 0) {
                *(unsigned int *)0xC13B518 = 0x323;
            } else {
                *(unsigned int *)0xC13B518 = 0x324;
            }
        } else {
            *(unsigned int *)0xC13B518 = 0x325;
        }
    }
    Voice_ShutUp(0x1, t2);
    return FUN_0c058f64(0xC13B518, 0x1, (*(int *)((((t1 - 1) << 2) + 0xC11037C))), 0x0);
}


int Warning(float f4)
{
    register int t12;

    FUN_0c06f550(0xFF000000, 0xFF000000, 0xFF000000, f4);
    ETD_EntryRecvFunc(0x10, 0x10);
    nlLocate(0x1, 0x4);
    nlPrintf(0xC097214);
    nlPrintf(0xC097240);
    nlPrintf(0xC09726C);
    nlPrintf(0xC097298);
    nlPrintf(0xC0972C4);
    nlPrintf(0xC0972F0);
    nlPrintf(0xC09731C);
    nlPrintf(0xC097348);
    nlPrintf(0xC097374);
    t12 = ETD_EntryRecvFunc(0x8, 0x8);
    if ((int)(*(int *)0xC1EC83C) > (int)0x3C) {
        (((struct o0_uint *)0xC1EC740)->v) = 0x0;
        (((struct o4_uint *)0xC1EC740)->v) = 0x0;
    }
    return t12;
}

int FUN_0c01c468(void)
{
    register int t7;

    *(unsigned int *)0xC177EF0 = 0xC177EF4;
    nlInitHeapMemory(0xC177EF4, 0x30000);
    nlInitEvent();
    FUN_0c01e6f0();
    mpvvlc_InitMbai();
    FUN_0c020ae8();
    FUN_0c05ab5e();
    FUN_0c05f834();
    t7 = FUN_0c06cb24();
    if (((((struct o24_int *)0xC1EC71C)->v)) == 0) {
        return gdc_FileLoad((((((struct o0_int *)0xC2AC5FC)->v)) + 0x300), (*(int *)((((((((struct o0_int *)0xC1EC71C)->v)) << 2) + (0xC11D04C + ((((int)(*(int *)0xC2AC2F8) >> 4) << 2) << 1))) + 0x0))), (((((struct o4_int *)0xC2AC5FC)->v)) - 768));
    }
    return t7;
}

int FUN_0c06a1d0(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = *(int *)0xC1ECCA8;
    if (t0 == 1) {
        t1 = *(int *)((((a4 - 35) << 2) + 0xC10E5D0));
        t2 = FUN_0c061bae();
        if (t2 != 0) {
            t2 = *(int *)(((t1 << 2) + 0xC13B558));
            t3 = ((int)((int)(FUN_0c069e54()) % (int)(*(int *)(((t1 << 2) + 0xC1109E4)))));
            t4 = t2;
        } else {
            t2 = *(int *)(((t1 << 2) + 0xC13B548));
            t3 = ((int)((int)(FUN_0c069e54()) % (int)(*(int *)(((t1 << 2) + 0xC1109E4)))));
            t4 = t2;
        }
        t1 = *(int *)((t4 + (t3 << 2)));
        if (t1 != 0) {
            return FUN_0c058ca6(t1, 0x1);
        }
        return (t3 << 2);
    }
    return t0;
}

int FUN_0c048e74(void)
{
    register int t0;
    int t1;
    register int t2;

    if ((*(int *)0xC12FDC0) != -3) {
        t1 = 0x0;
        for (;;) {
            t2 = buStat(t1);
            if (t2 != -1) {
                t1 = (t1 + 0x1);
                if ((int)t1 > (int)0x7) {
                    break;
                }
                continue;
            }
        }
        t1 = t0;
        for (;;) {
            t0 = FUN_0c14b460(t1);
            t1 = t0;
            if ((t0 != -1) && (t1 != 0)) {
                ntLDBrowser(t1);
                continue;
            }
        }
    }
    return 0xFFFFFFFF;
}

int FUN_0c03e0dc(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(int *)0xC2AC2F0;
    if (t0 != 1) {
        (((struct o0_uint *)0xC2A4F88)->v) = ((((struct o0_int *)0xC1EC740)->v));
        (((struct o4_uint *)0xC2A4F88)->v) = ((((struct o4_int *)0xC1EC740)->v));
        FUN_0c058e82();
        gdc_StopStreamVoiceAll();
        FUN_0c01e6f0();
        FUN_0c058be4(0x0);
        FUN_0c0339fc(0x2);
        return FUN_0c03e806(0x48, 0x78);
    }
    return t0;
}

int InitAdvLogoSprite(void)
{
    (((struct o0_float *)0xC2708D8)->v) = 1.0f;
    (((struct oC_float *)0xC2708D8)->v) = 0.0f;
    (((struct o10_float *)0xC2708D8)->v) = 0.0f;
    (((struct o14_float *)0xC2708D8)->v) = 1.0f;
    (((struct o18_float *)0xC2708D8)->v) = 1.0f;
    (((struct o1C_uint *)0xC2708D8)->v) = 0x0;
    (((struct o28_uint *)0xC2708D8)->v) = 0xA;
    (((struct o20_float *)0xC2708D8)->v) = 1.0f;
    (((struct o24_uint *)0xC2708D8)->v) = 0x2;
    (((struct o8_float *)0xC2708D8)->v) = 1.0f;
    (((struct o4_float *)0xC2708D8)->v) = 1.0f;
    return FUN_0c06f550(0xFFBFBFBF, 0xFFBFBFBF, 0xFFBFBFBF, 1.0f);
}

int FUN_0c0311b4(float f4)
{
    FUN_0c06f550(0x0, 0x0, 0x0, f4);
    FUN_0c027f28(0x0);
    pfSize(1.0f, 1.0f);
    FUN_0c01ead0(0x5, 0x0);
    gdc_VolStreamSong(0x6E);
    (((struct o0_uint *)0xC289D04)->v) = 0x0;
    (((struct o4_uint *)0xC289D04)->v) = 0x2;
    return 0xC289D08;
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
    return FUN_0c06f550(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 1.0f);
}

int FUN_0c04e92c(float f4)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC175C80;
    t1 = ((~(((~t0) + 0x1) & 0x7)) + 0x1);
    if ((int)t0 >= 0) {
        t1 = (t0 & 0x7);
    }
    t0 = *(int *)(((t1 << 2) + 0xC131804));
    return FUN_0c06f550(t0, t0, t0, f4);
}

int End_Adv_Title_LOGO(float f4)
{
    register int t0;

    t0 = FUN_0c06f550(0xFF000000, 0xFF000000, 0xFF000000, f4);
    *(unsigned short *)0xC2B2B58 = ((*(short *)0xC2B2B58) & 0xFFFE);
    return t0;
}

int FUN_0c04edcc(int a4, int a5, int a6)
{
    if (((((struct o0_int *)0xC2B1CF8)->v)) == 0) {
        FUN_0c04ede4(a4, a5, a6);
    }
    return FUN_0c04ef02((*(int *)((((((struct o8_int *)0xC2B1CF8)->v)) + 0x0))));
}

int FUN_0c14b478(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC1737F8;
    if (t0 != 0) {
        t1 = (((struct o58_int *)(t0))->v);
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}

int FUN_0c069e54(void)
{
    register int t1;

    t1 = *(int *)((0xC110374 + ((*(int *)0xC1EC740) << 2)));
    return ((int (*)(void))(t1))();
}

int thunk_FUN_0c14b2ec(void)
{
    return FUN_0c14b2ec();
}
