/* Straight-line functions with calls and guards (batch gen_au): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o100_float { char p[0x100]; float v; };
struct o104_float { char p[0x104]; float v; };
struct o108_uchar { char p[0x108]; unsigned char v; };
struct o110_int { char p[0x110]; int v; };
struct o110_uint { char p[0x110]; unsigned int v; };
struct o124_int { char p[0x124]; int v; };
struct o130_float { char p[0x130]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o158_float { char p[0x158]; float v; };
struct o160_float { char p[0x160]; float v; };
struct o164_float { char p[0x164]; float v; };
struct o16C_float { char p[0x16C]; float v; };
struct o170_float { char p[0x170]; float v; };
struct o174_float { char p[0x174]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_int { char p[0x28]; int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_int { char p[0x2C]; int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o30_int { char p[0x30]; int v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o34_int { char p[0x34]; int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o38_int { char p[0x38]; int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o3C_int { char p[0x3C]; int v; };
struct o3C_uint { char p[0x3C]; unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o4E_uchar { char p[0x4E]; unsigned char v; };
struct o4F_uchar { char p[0x4F]; unsigned char v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5C_int { char p[0x5C]; int v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o70_uint { char p[0x70]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o80_int { char p[0x80]; int v; };
struct o84_int { char p[0x84]; int v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA4_short { char p[0xA4]; short v; };
struct oA6_short { char p[0xA6]; short v; };
struct oA8_short { char p[0xA8]; short v; };
struct oA8_ushort { char p[0xA8]; unsigned short v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oCC_float { char p[0xCC]; float v; };
struct oD4_int { char p[0xD4]; int v; };
int FUN_0c011838(int);
int FUN_0c0119a0(int);
int FUN_0c011d52(int, int);
int FUN_0c029b12(int, float);
int FUN_0c041178(int);
int FUN_0c041298(int);
int FUN_0c0415ba(int);
int FUN_0c0423c8(int);
int FUN_0c043706(int);
int FUN_0c044ba0(int);
int FUN_0c045108(int, int, int, int, int, float);
int FUN_0c046814(int);
int FUN_0c0469e2(int, int, int, int, int);
int FUN_0c046fde(int, int, int);
int FUN_0c072290(int, int);
int FUN_0c072600(int);
int FUN_0c073360(void);
int FUN_0c0739a0(int);
int FUN_0c073a30(float, float, float);
float FUN_0c073b40(int, int);
int FUN_0c073c40(int, int, float);
float FUN_0c073c60(int);
int FUN_0c073e90(int);
int FUN_0c07ff00(void);
int FUN_0c08ed3c(int);
int FUN_0c08f3b8(int);
int FUN_0c08f5d8(int);
int FUN_0c08f824(int, int, int);
int FUN_0c08f8c0(int);
int FUN_0c08fc6c(int, int);
int FUN_0c08fe18(int);
int FUN_0c090e4c(int, int, int, int);
int GetRotVec4Ang(int, int, int, int);
int KillColliObj(int, int, int);
extern float _builtin_sqrtf(float);
float carSpeedGripScale(float);
extern int gdc_CourseAdvLoadSub();
int kmChangeLatencyModel(int, int);
int kmiAllocSysConfig(int);
extern int kmiChkActiveListType();
int kmiCopyDummyGlobalData(int);
int kmiDiscardRenderPipeline(void);
int kmiFBinit(void);
int kmiGetDisplayData(int, int, int);
int kmiGetNativeRegOBPSize(int);
int kmiGetPackOBPParam(int, int, int, int, int, int);
int kmiGetProfileInt(int, int, int);
int kmiGetVertexBasePointer(int, int, int, int, int, int, int);
int kmiSetTAEnvironment(int, int, int, int, int);
int kmiTAallocEx(int, int, int);
typedef struct { int w[29]; } Stk29;
int kmiWriteFBRegister(Stk29 s);
int memset(int, int, int);
int nlAddVector(int, int);
int nlAddVector3op(int, int, int);
int nlArcTan2(float, float);
int nlCloseEvent(int);
int nlGetAverageVector(int, int, int, float, float);
float nlLength(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlRotateV(int, int);
int nlSubVector3op(int, int, int);
int vmsfs_lockbank(int, int);
int vmsfs_mediainfo_retry(int, int);
int vmsfs_write_retry(int, int, int);
int vmsio_ismount(int);
float FUN_0c0120cc(int a4);
int kmSetSystemConfiguration(int a4);
int FUN_0c045284(int a4);
int kmiFBControl(int a4, int a5, int a6, int a7, int a8, int a9);
int FUN_0c047cb6(int a4, int a5, int a6, float f4);
int FUN_0c08b634(int a4, int a5, int a6, int a7, int a8);

float FUN_0c0120cc(int a4)
{
    int stk[11];
    register int t2;
    register float u3;
    register float u4;
    int t5;
    register int t6;
    register int t8;
    register int t9;
    register float u11;
    float u12;
    register float u23;
    register int t32;
    register int t34;
    register float u41;
    register float u46;
    register float u48;
    register float u59;
    register float u61;
    register int t68;
    register int t71;
    register int t72;
    register float u84;
    register float u86;
    register float u85;
    register float u104;
    register float u107;
    register float u124;
    register float u129;
    register float u134;
    register float u224;
    register float u227;
    register float u228;
    register float u229;
    register float u230;
    register float u235;
    register float u244;
    register float u248;
    register float u264;
    register int t297;
    register int t300;
    register int t301;
    register float u311;
    register float u317;
    register float u327;
    register float u334;
    register int t7;
    register float u10;
    register float u13;
    register float u14;
    register float u17;
    register int t38;
    register float u43;
    register float u52;
    register float u141;
    register int t172;
    register int t210;
    register float u212;
    register float u208;
    register float u207;
    register float u216;
    register int t217;
    register float u231;
    float u328;
    float u329;

    FUN_0c011838(a4);
    FUN_0c0119a0(a4);
    *(float *)(((int)stk + 24)) = 0.0f;
    *(float *)(((int)stk + 20)) = 0.0f;
    *(float *)(((int)stk + 28)) = 0.0f;
    t2 = (((struct o124_int *)(a4))->v);
    u3 = *(float *)(((t2 << 2) + 0xC096E48));
    u4 = (((struct o158_float *)(a4))->v);
    *(float *)(((int)stk + 32)) = (u4 * u3);
    t5 = 0x20;
    t6 = (t2 << 2);
    t8 = 0x0;
    t9 = (0x1A4 + a4);
    u11 = (u4 * u3);
    u12 = u3;
    for (;;) {
        if ((int)t8 < (int)0x4) {
            t7 = 0x2;
            if ((int)t8 < (int)t7) {
                t5 = 0xC0121B8;
                u17 = (*(float *)((t5 + 0x0)));
            } else {
                t5 = 0xC0121BC;
                u17 = (*(float *)((t5 + 0x0)));
            }
            t5 = 0x120;
            u12 = (*(float *)((a4 + t5)));
            t5 = 0x10;
            u12 = (u12 * u17);
            u12 = (-u12);
            *(float *)((((int)stk + 0) + t5)) = u12;
            t5 = 0x3C8;
            t6 = (*(int *)((a4 + t5)));
            if (t6 != 0) {
                t5 = 0x24;
                u12 = (*(float *)((t9 + t5)));
                t5 = 0x20;
                u11 = (*(float *)((((int)stk + 0) + t5)));
                u11 = (u11 * u12);
            } else {
                t5 = 0xC0121C0;
                u23 = *(float *)((t5 + 0x0));
                t5 = 0x24;
                u12 = (*(float *)((t9 + t5)));
                t5 = 0x20;
                u11 = (*(float *)((((int)stk + 0) + t5)));
                u11 = (u11 * u12);
                u11 = (u11 * u23);
            }
            t5 = 0x1C;
            *(float *)((t9 + t5)) = u11;
            if ((int)t8 < (int)t7) {
                t5 = 0x16C;
            } else {
                t5 = 0x170;
            }
            u12 = (*(float *)((a4 + t5)));
            t5 = 0xC;
            *(float *)((((int)stk + 0) + t5)) = u12;
            t5 = 0x160;
            u12 = 0.0f;
            u11 = (*(float *)((a4 + t5)));
            if (!(u12 > u11)) {
                t5 = 0x8A;
                t6 = (*(short *)((a4 + t5)));
                t5 = (t5 - 10);
                t32 = *(short *)((t9 + t5));
                t5 = (t5 + 0x78);
                t38 = ((t32 + t6) - (*(short *)((a4 + t5))));
            } else {
                t5 = 0x80;
                t34 = *(short *)((t9 + t5));
                t5 = (t5 + 0xA);
                t6 = (*(short *)((a4 + t5)));
                t5 = (t5 + 0x6E);
                t38 = (((-t34) - t6) + (*(short *)((a4 + t5))));
            }
            t5 = (FUN_0c011d52(t9, t38));
            if ((int)t8 > (int)0x1) {
                t5 = 0xC0122CC;
                u41 = *(float *)((t5 + 0x0));
                t5 = 0x20;
                u12 = (*(float *)((t9 + t5)));
                u12 = (u12 * u41);
                *(float *)((t9 + t5)) = u12;
                u43 = u12;
            }
            u12 = u43;
            t5 = 0xC0122D0;
            u46 = *(float *)((t5 + 0x0));
            t5 = 0x160;
            u12 = (*(float *)((a4 + t5)));
            u12 = _builtin_fabsf(u12);
            if (u46 > u12) {
                t5 = 0xC0122D4;
                u48 = *(float *)((t5 + 0x0));
                t5 = 0x20;
                u11 = (*(float *)((t9 + t5)));
                u12 = ((((struct o160_float *)(a4))->v));
                u12 = _builtin_fabsf(u12);
                u12 = (u12 * u48);
                u11 = (u11 * u12);
                *(float *)((t9 + t5)) = u11;
                u52 = u11;
            }
            u11 = u52;
            t5 = 0x20;
            u11 = (*(float *)((t9 + t5)));
            u12 = ((((struct o130_float *)(a4))->v));
            u11 = (u11 * u12);
            *(float *)((t9 + t5)) = u11;
            t5 = 0x3B4;
            t5 = (*(int *)((a4 + t5)));
            if (t5 == 2) {
                t5 = 0xC0122D8;
                u59 = *(float *)((t5 + 0x0));
                t5 = 0x20;
                u12 = (*(float *)((t9 + t5)));
                u12 = (u12 * u59);
                *(float *)((t9 + t5)) = u12;
                if ((int)t8 > (int)0x1) {
                    t5 = 0xC0122DC;
                    u61 = *(float *)((t5 + 0x0));
                    t5 = 0x1C;
                    u12 = (*(float *)((t9 + t5)));
                    u12 = (u12 * u61);
                    *(float *)((t9 + t5)) = u12;
                }
            }
            t6 = 0xC0732D0;
            t5 = (nlPushMatrix(0x0));
            t5 = 0xF8;
            t68 = *(short *)((a4 + t5));
            t5 = (t5 - 110);
            t6 = (*(short *)((a4 + t5)));
            t5 = (t5 - 10);
            t6 = (unsigned short)t6;
            t71 = ((unsigned short)t68 - t6);
            t6 = (*(short *)((t9 + t5)));
            t6 = (unsigned short)t6;
            t72 = (t71 - t6);
            t6 = 0xC073650;
            t5 = (nlRotateAY(t72));
            t5 = 0x88;
            t6 = 0xC0734A0;
            t5 = (nlRotateAX((unsigned short)(*(short *)((a4 + t5)))));
            t5 = 0x8C;
            t6 = 0xC073710;
            t5 = (nlRotateAZ((unsigned short)(*(short *)((a4 + t5)))));
            t5 = 0x4;
            *(float *)((0xC1EC6A4 + t5)) = 0.0f;
            t5 = 0x164;
            (((struct o0_float *)0xC1EC6A4)->v) = 0.0f;
            u12 = (*(float *)((a4 + t5)));
            t5 = 0x8;
            *(float *)((0xC1EC6A4 + t5)) = u12;
            t5 = (FUN_0c072290(0xC1EC6A4, 0xC1EC6B0));
            t5 = 0x8;
            u12 = (*(float *)((0xC1EC6B0 + t5)));
            t5 = 0x4;
            *(float *)((((int)stk + 0) + t5)) = u12;
            u13 = ((((struct oC_float *)0xC1EC6A4)->v));
            t5 = (nlPopMatrix(0x1));
            t5 = 0xC;
            u12 = 0.0f;
            u11 = (*(float *)((((int)stk + 0) + t5)));
            if (u11 != u12) {
                u12 = 0.0f;
                t5 = 0x10;
                u84 = *(float *)((((int)stk + 0) + t5));
                u86 = (u84 * (1.0f + 1.0f));
                if (u12 > u11) {
                    u85 = (u84 * (1.0f + 1.0f));
                    u85 = -u85;
                    u86 = u85;
                }
                *(float *)(((int)stk + 0)) = u86;
            } else {
                *(float *)(((int)stk + 0)) = 0.0f;
            }
            t5 = 0x4;
            u12 = (*(float *)((((int)stk + 0) + t5)));
            t5 = 0xC;
            u14 = (*(float *)((((int)stk + 0) + t5)));
            t5 = (*(int *)((t9 + 0x0)));
            u14 = (u14 - u12);
            if ((t5 != -1) && (u12 = 0.0f, u14 != u12)) {
                if (u14 > u12) {
                    t5 = 0x130;
                    u11 = u14;
                    u12 = (*(float *)((a4 + t5)));
                    t5 = 0xC0123FC;
                    u11 = (u11 * u12);
                    u12 = (*(float *)((t5 + 0x0)));
                    u11 = (u11 * u12);
                    u11 = _builtin_fabsf(u11);
                    u10 = (carSpeedGripScale(u11));
                    t5 = 0x2C;
                    u11 = 1.0f;
                    u12 = (*(float *)((t9 + t5)));
                    u11 = (u11 + u11);
                    u12 = (u12 * u10);
                    u12 = (u12 * u11);
                    *(float *)(((int)stk + 0)) = ((*(float *)(((int)stk + 0))) - u12);
                } else {
                    t5 = 0x130;
                    u11 = u14;
                    u12 = (*(float *)((a4 + t5)));
                    t5 = 0xC0123FC;
                    u11 = (u11 * u12);
                    u12 = (*(float *)((t5 + 0x0)));
                    u11 = (u11 * u12);
                    u11 = _builtin_fabsf(u11);
                    u10 = (carSpeedGripScale(u11));
                    t5 = 0x2C;
                    u11 = (*(float *)(((int)stk + 0)));
                    u12 = (*(float *)((t9 + t5)));
                    u12 = (u12 * u10);
                    u10 = 1.0f;
                    u10 = (u10 + u10);
                    u104 = u11;
                    u104 = u104 + u10 * u12;
                    u11 = u104;
                    *(float *)(((int)stk + 0)) = u11;
                }
                t5 = 0xC012400;
                u107 = *(float *)((t5 + 0x0));
                t5 = 0x28;
                u12 = (*(float *)((t9 + t5)));
                t5 = 0x10;
                u11 = (*(float *)((t9 + t5)));
                t5 = 0x130;
                u11 = (u11 * u12);
                u12 = (*(float *)((a4 + t5)));
                t5 = 0x3B4;
                u11 = (u11 * u14);
                u11 = (u11 * u12);
                u12 = (*(float *)(((int)stk + 0)));
                u11 = (u11 * u107);
                u12 = (u12 - u11);
                *(float *)(((int)stk + 0)) = u12;
                t5 = (*(int *)((a4 + t5)));
                if (t5 == 4) {
                    t5 = 0xC012404;
                    u12 = (*(float *)(((int)stk + 0)));
                    u12 = (u12 * (*(float *)((t5 + 0x0))));
                    *(float *)(((int)stk + 0)) = u12;
                }
            }
            if ((int)t8 < (int)t7) {
                t5 = 0x1C;
                u10 = (*(float *)(((int)stk + 0)));
                u12 = (*(float *)((t9 + t5)));
                t5 = 0xC012408;
                u12 = (u12 + u10);
                u10 = (*(float *)((t5 + 0x0)));
                t5 = 0x14;
                u11 = (*(float *)((((int)stk + 0) + t5)));
                t5 = 0x14;
                u124 = u11;
                u124 = u124 + u10 * u12;
                u11 = u124;
                *(float *)((((int)stk + 0) + t5)) = u11;
            } else {
                t5 = 0x1C;
                u10 = (*(float *)(((int)stk + 0)));
                u12 = (*(float *)((t9 + t5)));
                t5 = 0xC012408;
                u12 = (u12 + u10);
                u10 = (*(float *)((t5 + 0x0)));
                t5 = 0x18;
                u11 = (*(float *)((((int)stk + 0) + t5)));
                t5 = 0x18;
                u129 = u11;
                u129 = u129 + u10 * u12;
                u11 = u129;
                *(float *)((((int)stk + 0) + t5)) = u11;
            }
            t5 = 0x3B4;
            t5 = (*(int *)((a4 + t5)));
            if (t5 == 2) {
                t5 = 0xC01240C;
                u134 = *(float *)((t5 + 0x0));
                t5 = 0x28;
                u12 = (*(float *)((t9 + t5)));
                t5 = 0x10;
                u11 = (*(float *)((t9 + t5)));
                t5 = 0x130;
                u11 = (u11 * u12);
                u12 = (*(float *)((a4 + t5)));
                t5 = 0x18;
                u11 = (u11 * u14);
                u11 = (u11 * u12);
                u11 = (u11 * u134);
                *(float *)((t9 + t5)) = u11;
            } else {
                t5 = 0x3B4;
                t5 = (*(int *)((a4 + t5)));
                if (t5 == 4) {
                    t5 = 0xC012410;
                    u141 = (*(float *)((t5 + 0x0)));
                } else {
                    t5 = 0xC01251C;
                    u141 = (*(float *)((t5 + 0x0)));
                }
                t5 = 0x28;
                u12 = (*(float *)((t9 + t5)));
                t5 = 0x10;
                u11 = (*(float *)((t9 + t5)));
                t5 = 0x130;
                u11 = (u11 * u12);
                u12 = (*(float *)((a4 + t5)));
                t5 = 0x18;
                u11 = (u11 * u14);
                u11 = (u11 * u12);
                u11 = (u11 * u141);
                *(float *)((t9 + t5)) = u11;
            }
            t5 = 0x124;
            t6 = (*(int *)((a4 + t5)));
            if (t6 == 0) {
                t5 = 0x18;
                u12 = 0.0f;
                u11 = (*(float *)((t9 + t5)));
                if (!(u11 > u12)) {
                } else {
                    t5 = 0x18;
                    *(float *)((t9 + t5)) = 0.0f;
                }
            } else {
                t5 = 0x18;
                u12 = 0.0f;
                u11 = (*(float *)((t9 + t5)));
                if (u12 > u11) {
                    t5 = 0x18;
                    *(float *)((t9 + t5)) = 0.0f;
                }
            }
            t5 = 0xC012520;
            u12 = 0.0f;
            u14 = (*(float *)((t5 + 0x0)));
            t5 = 0x4;
            u11 = (*(float *)((((int)stk + 0) + t5)));
            if (u11 != u12) {
                if (u11 > u12) {
                    t5 = 0x10;
                    u12 = (*(float *)((((int)stk + 0) + t5)));
                    t5 = 0x8;
                    *(float *)((((int)stk + 0) + t5)) = u12;
                    t5 = 0x4;
                    u12 = (*(float *)((((int)stk + 0) + t5)));
                    t5 = 0x130;
                    u12 = _builtin_fabsf(u12);
                    u11 = (*(float *)((a4 + t5)));
                    u12 = (u12 * u11);
                    u10 = (carSpeedGripScale((u12 * u14)));
                    t5 = 0x2C;
                    u12 = (*(float *)((t9 + t5)));
                    t5 = 0xC012524;
                    u11 = (*(float *)((t5 + 0x0)));
                    u12 = (u12 * u10);
                    u12 = (u12 * u11);
                    u12 = (-u12);
                } else {
                    t5 = 0x10;
                    u12 = (*(float *)((((int)stk + 0) + t5)));
                    t5 = 0x8;
                    u12 = (-u12);
                    *(float *)((((int)stk + 0) + t5)) = u12;
                    t5 = 0x4;
                    u12 = (*(float *)((((int)stk + 0) + t5)));
                    t5 = 0x130;
                    u12 = _builtin_fabsf(u12);
                    u11 = (*(float *)((a4 + t5)));
                    u12 = (u12 * u11);
                    u10 = (carSpeedGripScale((u12 * u14)));
                    t5 = 0x2C;
                    u12 = (*(float *)((t9 + t5)));
                    t5 = 0xC012524;
                    u11 = (*(float *)((t5 + 0x0)));
                    u12 = (u12 * u10);
                    u12 = (u12 * u11);
                }
                t5 = 0x24;
                *(float *)((((int)stk + 0) + t5)) = u12;
            } else {
                t5 = 0x8;
                *(float *)((((int)stk + 0) + t5)) = 0.0f;
                t5 = 0x24;
                *(float *)((((int)stk + 0) + t5)) = 0.0f;
                t172 = t6;
            }
            u12 = 0.0f;
            t6 = t172;
            if (u13 != u12) {
                t5 = 0x3B4;
                t5 = (*(int *)((a4 + t5)));
                if (t5 == 2) {
                    if (u13 > u12) {
                        t5 = 0x130;
                        u13 = _builtin_fabsf(u13);
                        u12 = (*(float *)((a4 + t5)));
                        u13 = (u13 * u12);
                        u10 = (carSpeedGripScale((u13 * u14)));
                        t5 = 0x2C;
                        u12 = (*(float *)((t9 + t5)));
                        t5 = 0xC012528;
                        u11 = (*(float *)((t5 + 0x0)));
                        u12 = (u12 * u10);
                        u12 = (u12 * u11);
                        u12 = (-u12);
                    } else {
                        t5 = 0x130;
                        u13 = _builtin_fabsf(u13);
                        u12 = (*(float *)((a4 + t5)));
                        u13 = (u13 * u12);
                        u10 = (carSpeedGripScale((u13 * u14)));
                        t5 = 0x2C;
                        u12 = (*(float *)((t9 + t5)));
                        t5 = 0xC012528;
                        u11 = (*(float *)((t5 + 0x0)));
                        u12 = (u12 * u10);
                        u12 = (u12 * u11);
                    }
                    t5 = 0x28;
                    *(float *)((((int)stk + 0) + t5)) = u12;
                    u208 = u11;
                } else {
                    t5 = 0x3B4;
                    t5 = (*(int *)((a4 + t5)));
                    if (t5 == 4) {
                        if (u13 > u12) {
                            t5 = 0x130;
                            u13 = _builtin_fabsf(u13);
                            u12 = (*(float *)((a4 + t5)));
                            u13 = (u13 * u12);
                            u10 = (carSpeedGripScale((u13 * u14)));
                            t5 = 0x2C;
                            u12 = (*(float *)((t9 + t5)));
                            u12 = (u12 * u10);
                            u12 = (u12 * 1.0f);
                            u12 = (-u12);
                        } else {
                            t5 = 0x130;
                            u13 = _builtin_fabsf(u13);
                            u12 = (*(float *)((a4 + t5)));
                            u13 = (u13 * u12);
                            u10 = (carSpeedGripScale((u13 * u14)));
                            t5 = 0x2C;
                            u12 = (*(float *)((t9 + t5)));
                            u12 = (u12 * u10);
                            u12 = (u12 * 1.0f);
                        }
                        t5 = 0x28;
                        *(float *)((((int)stk + 0) + t5)) = u12;
                    } else {
                        if (u13 > u12) {
                            t5 = 0x130;
                            u13 = _builtin_fabsf(u13);
                            u12 = (*(float *)((a4 + t5)));
                            u13 = (u13 * u12);
                            u10 = (carSpeedGripScale((u13 * u14)));
                            t5 = 0x2C;
                            u12 = (*(float *)((t9 + t5)));
                            t5 = 0xC012628;
                            u11 = (*(float *)((t5 + 0x0)));
                            u12 = (u12 * u10);
                            u12 = (u12 * u11);
                            u12 = (-u12);
                        } else {
                            t5 = 0x130;
                            u13 = _builtin_fabsf(u13);
                            u12 = (*(float *)((a4 + t5)));
                            u13 = (u13 * u12);
                            u10 = (carSpeedGripScale((u13 * u14)));
                            t5 = 0x2C;
                            u12 = (*(float *)((t9 + t5)));
                            t5 = 0xC012628;
                            u11 = (*(float *)((t5 + 0x0)));
                            u12 = (u12 * u10);
                            u12 = (u12 * u11);
                        }
                        t5 = 0x28;
                        *(float *)((((int)stk + 0) + t5)) = u12;
                        u207 = u11;
                    }
                    u208 = u207;
                }
                u212 = u208;
            } else {
                t5 = 0x28;
                *(float *)((((int)stk + 0) + t5)) = 0.0f;
                t210 = t6;
                u212 = u11;
            }
            u11 = u212;
            t5 = 0x1C;
            t6 = t210;
            u12 = 0.0f;
            u11 = (*(float *)((t9 + t5)));
            if ((u11 == u12) && (t5 = 0x20, u216 = *(float *)((t9 + t5)), t217 = (u11 == u12), u11 = u216, u11 == u12)) {
                t5 = 0x1C;
                u12 = 0.0f;
                u11 = (*(float *)((t9 + t5)));
                u224 = 0.0f;
                if (u11 == u12) {
                    t5 = 0x20;
                    u224 = (*(float *)((t9 + t5)));
                }
                u231 = u224;
            } else {
                t5 = 0x8;
                u12 = (*(float *)((((int)stk + 0) + t5)));
                t5 = 0x1C;
                u227 = *(float *)((t9 + t5));
                t5 = 0x20;
                u228 = *(float *)((t9 + t5));
                u229 = (u227 + u12);
                u12 = u228;
                u12 = (u12 * u228);
                u10 = u229;
                u230 = u12;
                u230 = u230 + u10 * u229;
                u12 = u230;
                u12 = _builtin_sqrtf(u12);
                u231 = u12;
            }
            t5 = 0x14;
            u12 = 0.0f;
            u11 = (*(float *)((t9 + t5)));
            if (u11 == u12) {
                t5 = 0x20;
                *(float *)((t9 + t5)) = 0.0f;
                t5 = 0x8;
                *(float *)((((int)stk + 0) + t5)) = 0.0f;
                t5 = 0x18;
                *(float *)((t9 + t5)) = 0.0f;
                t5 = 0x40;
                *(float *)((t9 + t5)) = 1.0f;
            } else {
                if (u231 != u11) {
                    u235 = *(float *)((t9 + t5));
                    t5 = 0x40;
                    u11 = u231;
                    u11 = (u11 - u235);
                    u11 = (u11 / u235);
                    *(float *)((t9 + t5)) = u11;
                } else {
                    t5 = 0x40;
                    *(float *)((t9 + t5)) = 1.0f;
                }
                t5 = 0x14;
                u12 = (*(float *)((t9 + t5)));
                if (u231 > u12) {
                    u12 = 0.0f;
                    if (u231 != u12) {
                        t5 = 0x3B4;
                        t5 = (*(int *)((a4 + t5)));
                        if (t5 == 2) {
                            u11 = ((((struct o14_float *)(t9))->v));
                            t5 = 0xC0126B0;
                            u244 = *(float *)((t5 + 0x0));
                            t5 = 0x18;
                            u11 = (u11 / u231);
                            u11 = (u11 * u244);
                            *(float *)((t9 + t5)) = ((*(float *)((t9 + t5))) * u11);
                            t5 = 0xC0126B4;
                            u11 = ((((struct o14_float *)(t9))->v));
                            u248 = *(float *)((t5 + 0x0));
                            t5 = 0x20;
                            u11 = (u11 / u231);
                            u11 = (u11 * u248);
                            *(float *)((t9 + t5)) = ((*(float *)((t9 + t5))) * u11);
                            t5 = 0x14;
                            u11 = (*(float *)((t9 + t5)));
                            u11 = (u11 / u231);
                            u11 = (u11 * u244);
                        } else {
                            u11 = ((((struct o14_float *)(t9))->v));
                            t5 = 0x18;
                            u11 = (u11 / u231);
                            *(float *)((t9 + t5)) = ((*(float *)((t9 + t5))) * u11);
                            t5 = 0x20;
                            u11 = ((((struct o14_float *)(t9))->v));
                            u11 = (u11 / u231);
                            *(float *)((t9 + t5)) = ((*(float *)((t9 + t5))) * u11);
                            t5 = 0x14;
                            u11 = (*(float *)((t9 + t5)));
                            u11 = (u11 / u231);
                        }
                        t5 = 0x8;
                        u264 = *(float *)((((int)stk + 0) + t5));
                        t5 = 0x8;
                        *(float *)((((int)stk + 0) + t5)) = (u264 * u11);
                    } else {
                        t5 = 0x18;
                        *(float *)((t9 + t5)) = 0.0f;
                        t5 = 0x20;
                        *(float *)((t9 + t5)) = 0.0f;
                        t5 = 0x8;
                        *(float *)((((int)stk + 0) + t5)) = 0.0f;
                    }
                }
            }
            t5 = 0x174;
            t6 = 0xC0732D0;
            u11 = (*(float *)((a4 + t5)));
            u12 = ((((struct o40_float *)(t9))->v));
            u11 = (u11 + u12);
            *(float *)((a4 + t5)) = u11;
            t5 = (nlPushMatrix(0x0));
            t5 = 0x3B4;
            t5 = (*(int *)((a4 + t5)));
            if (t5 != 2) {
                t5 = 0x80;
                t6 = 0xC073650;
                t5 = (nlRotateAY((unsigned short)(*(short *)((t9 + t5)))));
            }
            t5 = 0x88;
            t6 = 0xC0734A0;
            t5 = (nlRotateAX((unsigned short)(*(short *)((a4 + t5)))));
            t5 = 0x8C;
            t6 = 0xC073710;
            t5 = (nlRotateAZ((unsigned short)(*(short *)((a4 + t5)))));
            t5 = 0x20;
            u12 = (*(float *)((t9 + t5)));
            t5 = 0x4;
            (((struct o0_float *)0xC1EC6A4)->v) = u12;
            *(float *)((0xC1EC6A4 + t5)) = 0.0f;
            t5 = 0x18;
            u12 = (*(float *)((t9 + t5)));
            t5 = 0x8;
            *(float *)((0xC1EC6A4 + t5)) = u12;
            t5 = (FUN_0c072290(0xC1EC6A4, (t9 + 0x44)));
            t5 = (nlPopMatrix(0x1));
            t6 = 0xC0732D0;
            t5 = (nlPushMatrix(0x0));
            t5 = 0x8A;
            t297 = *(short *)((a4 + t5));
            t5 = (t5 + 0x6E);
            t6 = (*(short *)((a4 + t5)));
            t5 = (t5 - 120);
            t6 = (unsigned short)t6;
            t300 = ((unsigned short)t297 - t6);
            t6 = (*(short *)((t9 + t5)));
            t6 = (unsigned short)t6;
            t301 = (t300 + t6);
            t6 = 0xC073650;
            t5 = (nlRotateAY(t301));
            t5 = 0x88;
            t6 = 0xC0734A0;
            t5 = (nlRotateAX((unsigned short)(*(short *)((a4 + t5)))));
            t5 = 0x8C;
            t6 = 0xC073710;
            t5 = (nlRotateAZ((unsigned short)(*(short *)((a4 + t5)))));
            t5 = 0x28;
            u12 = (*(float *)((((int)stk + 0) + t5)));
            t5 = 0x20;
            u11 = (*(float *)((t9 + t5)));
            t5 = 0x4;
            u11 = (u11 + u12);
            (((struct o0_float *)0xC1EC6A4)->v) = u11;
            *(float *)((0xC1EC6A4 + t5)) = 0.0f;
            t5 = 0x24;
            u12 = (*(float *)((((int)stk + 0) + t5)));
            t5 = 0x18;
            u11 = (*(float *)((t9 + t5)));
            t5 = 0x8;
            u311 = *(float *)((((int)stk + 0) + t5));
            t5 = 0x8;
            u11 = (u11 + u12);
            u11 = (u11 + u311);
            *(float *)((0xC1EC6A4 + t5)) = u11;
            t5 = (FUN_0c072290(0xC1EC6A4, (t9 + 0x50)));
            t5 = (nlPopMatrix(0x1));
            t5 = 0xC012838;
            t6 = 0x84;
            u10 = (*(float *)((t5 + 0x0)));
            t5 = 0x58;
            u12 = (*(float *)((t9 + t5)));
            t5 = 0x1C;
            u11 = (*(float *)((((int)stk + 0) + t5)));
            t5 = 0x1C;
            t8 = (t8 + 0x1);
            u317 = u11;
            u317 = u317 + u10 * u12;
            u11 = u317;
            t9 = (t9 + t6);
            *(float *)((((int)stk + 0) + t5)) = u11;
            continue;
        }
        break;
    }
    (((struct o174_float *)(a4))->v) = (((((struct o174_float *)(a4))->v)) * 0.25f);
    if (((((struct o174_float *)(a4))->v)) > 1.0f) {
        (((struct o174_float *)(a4))->v) = 1.0f;
    }
    (((struct o16C_float *)(a4))->v) = (((((struct o16C_float *)(a4))->v)) + ((((struct o14_float *)(((int)stk + 0)))->v)));
    (((struct o170_float *)(a4))->v) = (((((struct o170_float *)(a4))->v)) + ((((struct o18_float *)(((int)stk + 0)))->v)));
    u327 = (((struct o164_float *)(a4))->v);
    (((struct o164_float *)(a4))->v) = (((((struct o164_float *)(a4))->v)) + ((((struct o1C_float *)(((int)stk + 0)))->v)));
    if (((u327 > 0.0f) && (u328 = (((struct o164_float *)(a4))->v), 0.0f > u328)) || ((0.0f > u327) && (u329 = (((struct o164_float *)(a4))->v), u329 > 0.0f))) {
        (((struct o164_float *)(a4))->v) = 0.0f;
    }
    u334 = (((((struct o164_float *)(a4))->v)) * ((((struct o130_float *)(a4))->v)));
    (((struct o160_float *)(a4))->v) = (u334 * (*(float *)0xC012980));
    return u10;
}

int kmSetSystemConfiguration(int a4)
{
    int stk[29];
    register int t30;
    register int t37;
    register int t40;
    register int t47;
    register int t56;
    register int t63;
    register int t58;
    register int t65;
    register int t67;
    register int t69;
    register int t70;
    register float u72;
    register int t74;
    register int t75;
    register int t76;
    register float u77;
    register int t79;
    register int t80;
    register int t81;
    register float u82;
    register int t88;
    int t89;
    int t90;
    register int t91;
    register int t92;
    register float u95;
    register int t109;
    register int t110;
    register int t111;
    register int t112;
    register int t113;
    register int t119;
    register int t127;
    register int t128;
    register int t131;
    register int t132;
    register int t133;
    register int t146;
    register int t155;
    register int t158;
    register int t160;
    register int t165;
    register int t172;
    register int t183;
    register int t184;
    register int t185;
    register int t188;
    register int t189;
    register int t190;
    register int t198;
    register int t202;
    register int t214;
    register int t225;
    register int t236;
    register int t276;
    register int t238;
    register int t240;
    int t241;
    register float u71;
    register int t84;
    register int t85;
    register float u87;
    register float u94;
    int t105;
    register int t199;
    register int t200;
    register int t201;

    *(unsigned int *)(((int)stk + 16)) = 0x2;
    kmiFBinit();
    kmiDiscardRenderPipeline();
    (((struct o14_uint *)0xC2D0C00)->v) = 0x0;
    if (((*(int *)((a4 + 0x4))) & 0x1) != 0) {
        *(unsigned int *)(((int)stk + 28)) = 0x1;
    } else {
        *(unsigned int *)(((int)stk + 28)) = 0x0;
    }
    if (((*(int *)((a4 + 0x4))) & 32) != 0) {
        *(unsigned int *)(((int)stk + 44)) = 0x0;
    } else {
        *(unsigned int *)(((int)stk + 44)) = 0x1;
    }
    if (((*(int *)((a4 + 0x4))) & 0x2) != 0) {
        *(unsigned int *)(((int)stk + 24)) = 0x1;
    } else {
        *(unsigned int *)(((int)stk + 24)) = 0x0;
    }
    if (((*(int *)((a4 + 0x4))) & 0x100000) != 0) {
        (((struct o0_uint *)0xC300D00)->v) = 0x0;
    } else {
        (((struct o0_uint *)0xC300D00)->v) = 0x1;
    }
    kmiGetDisplayData(0xFF, (*(int *)(((int)stk + 24))), (*(int *)((a4 + 0x14))));
    if (((*(int *)((a4 + 0x4))) & 0x10000) != 0) {
        (((struct o0_uint *)0xC300D00)->v) = 0x1;
        (((struct o4_uint *)0xC1737E4)->v) = 0x1;
        (((struct o20_uint *)0xC300C14)->v) = ((((struct o18_int *)0xC300C14)->v));
        *(unsigned int *)(((((((struct o18_int *)0xC300C14)->v)) << 2) + 0xC300C1C)) = 0x2;
        *(unsigned int *)0xC300ADC = 0x0;
        (((struct o30_uint *)0xC300C14)->v) = 0x1;
        *(unsigned int *)(((int)stk + 16)) = (((int)stk + 12) + 0x24);
        *(unsigned int *)(((((int)stk + 12) + 0x24) + 0x0)) = ((*(int *)(((*(int *)((a4 + 0x20))) + 0x10))) & 0x1);
        *(unsigned int *)((((((int)stk + 12) + 0x24) + 0x4) + 0x0)) = (0x2 & (*(int *)(((*(int *)((a4 + 0x20))) + 0x10))));
        *(unsigned int *)((((((int)stk + 12) + 0x24) + 0x8) + 0x0)) = ((*(int *)(((*(int *)((a4 + 0x20))) + 0x10))) & 0x4);
        *(unsigned int *)(((int)stk + 12)) = ((((int)stk + 12) + 0x24) + 0xC);
        *(unsigned int *)((((((int)stk + 12) + 0x24) + 0xC) + 0x0)) = ((*(int *)(((*(int *)((a4 + 0x20))) + 0x10))) & 0x8);
        *(unsigned int *)(((int)stk + 20)) = ((((int)stk + 12) + 0x24) + 0x10);
        *(unsigned int *)((((((int)stk + 12) + 0x24) + 0x10) + 0x0)) = ((*(int *)(((*(int *)((a4 + 0x20))) + 0x10))) & 0x10);
        t30 = (*(int *)(((*(int *)(((int)stk + 20))) + 0x0)));
        *(int *)((int)stk + 8) = t30;
        t37 = ((int (*)(int, int, int, int, int))(kmiChkActiveListType))((*(int *)(((*(int *)(((int)stk + 16))) + 0x0))), (*(int *)((((((int)stk + 12) + 0x24) + 0x4) + 0x0))), (*(int *)((((((int)stk + 12) + 0x24) + 0x8) + 0x0))), (*(int *)(((*(int *)(((int)stk + 12))) + 0x0))), t30);
        *(int *)((int)stk + 4) = 0x1;
        t40 = (*(int *)(((*(int *)(((int)stk + 20))) + 0x0)));
        *(int *)((int)stk + 0) = t40;
        t47 = kmiGetPackOBPParam((*(int *)(((*(int *)(((int)stk + 16))) + 0x0))), (*(int *)((((((int)stk + 12) + 0x24) + 0x4) + 0x0))), (*(int *)((((((int)stk + 12) + 0x24) + 0x8) + 0x0))), (*(int *)(((*(int *)(((int)stk + 12))) + 0x0))), t40, 0x1);
        *(unsigned int *)(((int)stk + 12)) = t47;
        kmiGetNativeRegOBPSize(t47);
    } else {
        (((struct o4_uint *)0xC1737E4)->v) = 0x0;
        if (((*(int *)((a4 + 0x4))) & 16) != 0) {
            (((struct o0_uint *)0xC300C14)->v) = 0x1;
            (((struct o0_uint *)0xC300D00)->v) = 0x1;
        } else {
            (((struct o0_uint *)0xC300C14)->v) = 0x0;
        }
        kmChangeLatencyModel(((((struct o0_int *)0xC300C14)->v)), ((((struct o5C_int *)(a4))->v)));
        t56 = *(int *)((a4 + 0x28));
        (((struct o10_uint *)0xC300D00)->v) = (*(int *)((a4 + 0x24)));
        t63 = t56;
        if ((((((struct o10_int *)0xC300D00)->v)) & 0x1F) != 0) {
            t58 = (((struct o10_int *)0xC300D00)->v);
            (((struct o10_uint *)0xC300D00)->v) = ((((((struct o10_int *)0xC300D00)->v)) + 0x1F) & 0xFFFFFFE0);
            t63 = (t56 - ((-(t58 & 0x1F)) + 0x20));
        }
        t65 = (((struct o0_int *)0xC300C14)->v);
        t67 = t63;
        if (t65 == 0) {
            t67 = ((unsigned int)t63 >> 1);
        }
        t69 = (((int)stk + 12) + 0x40);
        for (;;) {
            if ((unsigned int)t69 >= (unsigned int)((((int)stk + 12) + 0x40) + 0x14)) {
                break;
            }
            *(unsigned int *)((t69 + 0x0)) = 0x0;
            t69 = (t69 + 0x4);
        }
        t70 = (a4 + 0x2C);
        u72 = 0.0f;
        for (;;) {
            if ((unsigned int)t70 >= (unsigned int)(a4 + 0x40)) {
                break;
            }
            u71 = (*(float *)((t70 + 0x0)));
            t70 = (t70 + 0x4);
            u72 = (u72 + u71);
        }
        if (u72 > 100.0f) {
            t74 = 0xC148DA0;
            t75 = (a4 + 0x40);
            t76 = 0x0;
            u77 = u71;
            for (;;) {
                if ((unsigned int)t76 >= (unsigned int)0x14) {
                    break;
                }
                t75 = a4;
                t75 = (t75 + 0x2C);
                t75 = (t75 + t76);
                t74 = t76;
                u77 = (*(float *)((t75 + 0x0)));
                t76 = (t76 + 0x4);
                u77 = (u77 * 100.0f);
                u77 = (u77 / u72);
                *(float *)(((((int)stk + 12) + 0x54) + t74)) = u77;
            }
            t84 = t74;
            t85 = t75;
            u87 = u77;
        } else {
            t79 = 0xC148DA0;
            t80 = (a4 + 0x40);
            t81 = 0x0;
            u82 = u71;
            for (;;) {
                if ((unsigned int)t81 >= (unsigned int)0x14) {
                    break;
                }
                t80 = a4;
                t80 = (t80 + 0x2C);
                t80 = (t80 + t81);
                t79 = t81;
                u82 = (*(float *)((t80 + 0x0)));
                t81 = (t81 + 0x4);
                *(float *)(((((int)stk + 12) + 0x54) + t79)) = u82;
            }
            t84 = t79;
            t85 = t80;
            u87 = u82;
        }
        t88 = t84;
        t89 = 0xC300C14;
        t90 = t65;
        t91 = t85;
        t92 = 0x0;
        u95 = u87;
        for (;;) {
            if ((unsigned int)t92 >= (unsigned int)0x14) {
                break;
            }
            t88 = t92;
            t91 = t92;
            u95 = (*(float *)(((((int)stk + 12) + 0x54) + t88)));
            t91 = (t91 + (((int)stk + 12) + 0x40));
            u94 = (float)t67;
            if ((int)t67 < 0) {
                t90 = 0x4F800000;
                u94 = (u94 + ((*(float *)&(t90))));
            }
            u95 = (u95 * u94);
            t89 = 0x4F000000;
            u95 = (u95 / 100.0f);
            u94 = (*(float *)&(t89));
            if (!(u94 > u95)) {
                u94 = (u94 + u94);
                u95 = (u95 - u94);
            }
            t89 = 0xFFFFFFF8;
            t92 = (t92 + 0x4);
            t90 = (int)u95;
            t90 = (t90 & t89);
            *(unsigned int *)((t91 + 0x0)) = t90;
        }
        if (((((((struct o0_int *)0xC3008D4)->v)) & 64) != 0) && (t105 = (((struct o40_int *)(((int)stk + 12)))->v), (unsigned int)t105 < (unsigned int)0x38)) {
            (((struct o40_uint *)(((int)stk + 12)))->v) = (((((struct o40_int *)(((int)stk + 12)))->v)) + 0x38);
            t109 = 0x38;
        } else {
            t109 = t89;
        }
        t110 = 0xC3008D4;
        t111 = 0x0;
        t112 = 0x0;
        t113 = 0xFFFFFFFF;
        for (;;) {
            if ((unsigned int)t111 >= (unsigned int)0x5) {
                break;
            }
            *(unsigned int *)(((int)stk + 12)) = ((t111 << 2) + (((int)stk + 12) + 0x40));
            t110 = (*(int *)((((t111 << 2) + (((int)stk + 12) + 0x40)) + 0x0)));
            t109 = t110;
            t112 = (t112 + t110);
            if ((int)t109 > (int)t113) {
                *(unsigned int *)(((int)stk + 20)) = t111;
                t113 = (*(int *)(((int)stk + 12)));
                t113 = (*(int *)((t113 + 0x0)));
            }
            t111 = (t111 + 0x1);
        }
        if ((unsigned int)t112 > (unsigned int)t67) {
            t119 = *(int *)(((int)stk + 20));
            *(unsigned int *)((((t119 << 2) + (((int)stk + 12) + 0x40)) + 0x0)) = ((*(int *)((((t119 << 2) + (((int)stk + 12) + 0x40)) + 0x0))) - (t112 - t67));
            *(unsigned int *)((((t119 << 2) + (((int)stk + 12) + 0x40)) + 0x0)) = ((*(int *)((((t119 << 2) + (((int)stk + 12) + 0x40)) + 0x0))) & 0xFFFFFFE0);
        }
        t127 = (((struct o40_int *)(((int)stk + 12)))->v);
        t131 = t127;
        if (t127 != 0) {
            t128 = (((struct o40_int *)(((int)stk + 12)))->v);
            (((struct o40_uint *)(((int)stk + 12)))->v) = (t128 - 16);
            t131 = (t128 - 16);
        }
        t132 = ((((int)stk + 12) + 0x40) + 0x4);
        t133 = ((((int)stk + 12) + 0x40) + 0x4);
        for (;;) {
            if ((unsigned int)t132 >= (unsigned int)((((int)stk + 12) + 0x40) + 0x14)) {
                break;
            }
            t131 = (*(int *)((t132 + 0x0)));
            if (t131 != 0) {
                t131 = (*(int *)((t133 + 0x0)));
                t131 = (t131 - 16);
                *(unsigned int *)((t133 + 0x0)) = t131;
            }
            t132 = (t132 + 0x4);
            t133 = (t133 + 0x4);
        }
        (((struct o0_uint *)0xC2D0BC0)->v) = (*(int *)((a4 + 0x20)));
        *(unsigned int *)(((int)stk + 12)) = (((int)stk + 12) + 0x40);
        (((struct o4_uint *)0xC2D0BC0)->v) = ((((struct o40_int *)(((int)stk + 12)))->v));
        *(unsigned int *)(((int)stk + 20)) = ((((int)stk + 12) + 0x40) + 0x4);
        (((struct o8_uint *)0xC2D0BC0)->v) = (*(int *)((((((int)stk + 12) + 0x40) + 0x4) + 0x0)));
        *(unsigned int *)(((int)stk + 40)) = ((((int)stk + 12) + 0x40) + 0x8);
        (((struct oC_uint *)0xC2D0BC0)->v) = (*(int *)((((((int)stk + 12) + 0x40) + 0x8) + 0x0)));
        *(unsigned int *)(((int)stk + 36)) = ((((int)stk + 12) + 0x40) + 0xC);
        (((struct o10_uint *)0xC2D0BC0)->v) = (*(int *)((((((int)stk + 12) + 0x40) + 0xC) + 0x0)));
        *(unsigned int *)(((int)stk + 32)) = ((((int)stk + 12) + 0x40) + 0x10);
        (((struct o14_uint *)0xC2D0BC0)->v) = (*(int *)((((((int)stk + 12) + 0x40) + 0x10) + 0x0)));
        t146 = (*(int *)(((*(int *)(((int)stk + 32))) + 0x0)));
        *(int *)((int)stk + 8) = t146;
        t155 = ((int (*)(int, int, int, int, int, float))(kmiChkActiveListType))((*(int *)(((*(int *)(((int)stk + 12))) + 0x0))), (*(int *)(((*(int *)(((int)stk + 20))) + 0x0))), (*(int *)(((*(int *)(((int)stk + 40))) + 0x0))), (*(int *)(((*(int *)(((int)stk + 36))) + 0x0))), t146, 100.0f);
        *(unsigned int *)(((*(int *)((a4 + 0x20))) + 0x10)) = ((((struct o38_int *)0xC300D00)->v));
        t158 = 0xC2D0CA8;
        for (;;) {
            if ((unsigned int)t158 >= (unsigned int)0xC2D0CBC) {
                break;
            }
            *(unsigned int *)((t158 + 0x0)) = 0x0;
            t158 = (t158 + 0x4);
        }
        *(int *)((int)stk + 8) = 0x0;
        t160 = (*(int *)(((((int)stk + 12) + 0x40) + 0x10)));
        *(int *)((int)stk + 4) = t160;
        t165 = kmiGetPackOBPParam(((((struct o40_int *)(((int)stk + 12)))->v)), (*(int *)(((((int)stk + 12) + 0x40) + 0x4))), (*(int *)(((((int)stk + 12) + 0x40) + 0x8))), (*(int *)(((((int)stk + 12) + 0x40) + 0xC))), t160, 0x0);
        *(unsigned int *)(((int)stk + 12)) = t165;
        kmiGetNativeRegOBPSize(t165);
        if (((((struct o0_int *)0xC300C14)->v)) == 1) {
            *(unsigned int *)(((int)stk + 16)) = 0x1;
        }
        *(int *)((int)stk + 8) = ((*(int *)(((int)stk + 16))));
        *(int *)((int)stk + 4) = 0x0;
        t172 = (*(int *)(((((int)stk + 12) + 0x40) + 0x10)));
        *(int *)((int)stk + 0) = t172;
        t183 = kmiGetVertexBasePointer(((((struct o40_int *)(((int)stk + 12)))->v)), (*(int *)(((((int)stk + 12) + 0x40) + 0x4))), (*(int *)(((((int)stk + 12) + 0x40) + 0x8))), (*(int *)(((((int)stk + 12) + 0x40) + 0xC))), t172, 0x0, (*(int *)((int)stk + 8)));
        (((struct o28_uint *)0xC2D0C4C)->v) = ((((struct o0_int *)0xC2D0C4C)->v));
        (((struct o2C_uint *)0xC2D0C4C)->v) = ((((struct o4_int *)0xC2D0C4C)->v));
        (((struct o30_uint *)0xC2D0C4C)->v) = ((((struct o8_int *)0xC2D0C4C)->v));
        (((struct o34_uint *)0xC2D0C4C)->v) = ((((struct oC_int *)0xC2D0C4C)->v));
        t184 = (((struct o10_int *)0xC2D0C4C)->v);
        (((struct o38_uint *)0xC2D0C4C)->v) = t184;
        t185 = 0x0;
        for (;;) {
            if ((unsigned int)t185 >= (unsigned int)0x14) {
                break;
            }
            t183 = t185;
            t184 = (*(int *)((0xC2D0C74 + t183)));
            t185 = (t185 + 0x4);
            *(unsigned int *)((0xC2D0C88 + t183)) = t184;
        }
        (((struct o28_uint *)0xC2D0C00)->v) = 0x0;
        (((struct o2C_uint *)0xC2D0C00)->v) = 0x0;
        (((struct o30_uint *)0xC2D0C00)->v) = 0x0;
        (((struct o34_uint *)0xC2D0C00)->v) = 0x0;
        (((struct o38_uint *)0xC2D0C00)->v) = 0xC2D0C4C;
        (((struct o3C_uint *)0xC2D0C00)->v) = 0xC2D0C74;
        if ((unsigned int)0x0 < (unsigned int)(*(int *)(((int)stk + 16)))) {
            t188 = 0xC2D0C4C;
            t189 = 0xC2D0C44;
            t190 = 0x0;
            for (;;) {
                t190 = (t190 + 0x1);
                *(unsigned int *)((t189 + 0x0)) = t188;
                t188 = (t188 + 0x14);
                t189 = (t189 + 0x4);
                if ((unsigned int)t190 >= (unsigned int)(*(int *)(((int)stk + 16)))) {
                    break;
                }
            }
        }
        t198 = (kmiCopyDummyGlobalData((*(int *)(((int)stk + 16)))));
        t202 = 0x0;
        for (;;) {
            if ((unsigned int)t202 >= (unsigned int)0x14) {
                break;
            }
            t198 = 0xC2D0CA8;
            t200 = ((((struct o3C_int *)0xC2D0C00)->v));
            t201 = (*(int *)((t202 + t198)));
            t200 = (t200 + t202);
            t199 = (*(int *)((t200 + 0x0)));
            t201 = (t201 << 2);
            t202 = (t202 + 0x4);
            t199 = (t199 + t201);
            *(unsigned int *)((t200 + 0x0)) = t199;
        }
    }
    t214 = *(int *)((a4 + 0x1C));
    (((struct o1C_uint *)0xC2D0C00)->v) = t214;
    if ((t214 & 7) != 0) {
        (((struct o1C_uint *)0xC2D0C00)->v) = ((((((struct o1C_int *)0xC2D0C00)->v)) + 0x7) & 0xFFFFFFF8);
    }
    (((struct o18_uint *)0xC2D0C00)->v) = ((unsigned int)((((((struct o10_int *)0xC3008D4)->v)) - (((((struct o1C_int *)0xC2D0C00)->v)) << 2)) - (((((struct o20_int *)0xC2D0C00)->v)) << 1)) >> 1);
    t225 = kmiGetProfileInt(0xC16FC90, 0xC16FC9C, 0x0);
    if (t225 == 1) {
        if ((unsigned int)((((struct o18_int *)0xC2D0C00)->v)) > (unsigned int)0x400000) {
            (((struct o18_uint *)0xC2D0C00)->v) = 0x400000;
        }
    } else {
        if ((unsigned int)((((struct o18_int *)0xC2D0C00)->v)) > (unsigned int)0x200000) {
            (((struct o18_uint *)0xC2D0C00)->v) = 0x200000;
        }
    }
    t236 = (((struct o18_int *)0xC2D0C00)->v);
    t276 = 0x3;
    if ((unsigned int)t236 < (unsigned int)((((struct o24_int *)0xC2D0C00)->v))) {
    } else {
        t238 = kmiTAallocEx(t236, (((int)stk + 12) + 0x38), (((int)stk + 12) + 0x3C));
        t276 = t238;
        if (t238 == 0) {
            (((struct o28_uint *)0xC300D00)->v) = ((((struct o18_int *)0xC2D0C00)->v));
            *(int *)((int)stk + 8) = 0x0;
            t240 = *(int *)(((int)stk + 24));
            t241 = *(int *)(((int)stk + 12));
            *(int *)((int)stk + 4) = ((~t240) & t241);
            kmiSetTAEnvironment(((unsigned int)((((struct o0_int *)0xC30093C)->v)) >> 7), ((unsigned int)((((struct o4_int *)0xC30093C)->v)) >> 7), ((unsigned int)((((struct o8_int *)0xC30093C)->v)) >> 7), ((unsigned int)((((struct oC_int *)0xC30093C)->v)) >> 7), ((~t240) & t241));
            if (((*(int *)((a4 + 0x4))) & 0x10000) != 0) {
                *(unsigned int *)0xC300ADC = 0x1;
            }
            *(unsigned int *)(((*(int *)((a4 + 0x20))) + 0x0)) = 0xC2D0C74;
            *(unsigned int *)(((*(int *)((a4 + 0x20))) + 0x4)) = 0xC174134;
            *(unsigned int *)(((*(int *)((a4 + 0x20))) + 0x8)) = 0xC2D0C28;
            *(unsigned int *)(((*(int *)((a4 + 0x20))) + 0xC)) = 0xC2D0C44;
            (((struct o18_uint *)0xC2D0BC0)->v) = (*(int *)(((int)stk + 24)));
            (((struct o30_uint *)0xC3008D4)->v) = (*(int *)(((int)stk + 24)));
            (((struct o1C_uint *)0xC2D0BC0)->v) = (*(int *)(((*(int *)((a4 + 0x8))) + 0x0)));
            (((struct o20_uint *)0xC2D0BC0)->v) = (*(int *)((a4 + 0x10)));
            (((struct o24_uint *)0xC2D0BC0)->v) = (*(int *)((a4 + 0x14)));
            (((struct o28_uint *)0xC2D0BC0)->v) = (*(int *)(((int)stk + 28)));
            (((struct o2C_uint *)0xC2D0BC0)->v) = (*(int *)(((*(int *)((a4 + 0x8))) + 0x4)));
            (((struct o30_uint *)0xC2D0BC0)->v) = (*(int *)((a4 + 0x10)));
            (((struct o34_uint *)0xC2D0BC0)->v) = (*(int *)((a4 + 0x14)));
            (((struct o38_uint *)0xC2D0BC0)->v) = (*(int *)(((int)stk + 28)));
            (((struct o3C_uint *)0xC2D0BC0)->v) = (*(int *)(((*(int *)((a4 + 0x8))) + 0x0)));
            (((struct o0_uint *)0xC2D0C00)->v) = (*(int *)(((*(int *)((a4 + 0x8))) + 0x4)));
            (((struct o4_uint *)0xC2D0C00)->v) = (*(int *)(((int)stk + 44)));
            (((struct o0_uint *)0xC1737E4)->v) = 0x80000000;
            t276 = (kmiAllocSysConfig(((((struct o14_int *)0xC2D0C00)->v))));
        }
    }
    return t276;
}

int FUN_0c045284(int a4)
{
    int stk[19];
    register int t2;
    register int t4;
    register float t13;
    register float t24;
    register float u49;
    register int t63;
    register int t64;
    register int t72;
    register int t74;
    register int t76;
    register int t81;
    register int t84;
    register float t88;
    register int t90;
    register int t93;
    register float t101;
    register float u122;
    register float u123;
    register float u102;
    register float u103;
    register int t104;
    register int t105;
    register int t114;
    register int t116;
    register int t126;
    register int t127;
    register int t131;
    register int t139;
    register int t140;
    register int t192;
    register int t3;
    float u14;
    register float u26;
    register int t133;
    int R1000;

    R1000 = *(int *)((int)stk + 0);

    FUN_0c043706(a4);
    t2 = (((struct o84_int *)(a4))->v);
    if ((t2 & 1) == 0) {
        *(unsigned int *)(((int)stk + 4)) = 0x0;
        t4 = a4;
        for (;;) {
            if ((int)(*(int *)(((int)stk + 4))) >= (int)0x5) {
                break;
            }
            t2 = 0x84;
            t4 = (*(int *)((t4 + 0x8)));
            *(unsigned int *)((t4 + t2)) = ((*(int *)((t4 + t2))) & 0xFFFFFFFE);
            t3 = (*(int *)(((int)stk + 4)));
            t3 = (t3 + 0x1);
            *(unsigned int *)(((int)stk + 4)) = t3;
        }
        KillColliObj((a4 + 0x14), 0xFFFFFFFE, 0x5);
        t192 = nlCloseEvent(a4);
        *(unsigned int *)0xC2AB7EC = ((*(int *)0xC2AB7EC) - 1);
    } else {
        t13 = nlLength(((*(int *)0xC2A59D4) + 0x7C), (0x8C + a4));
        if ((800.0f > t13) && (u14 = (((struct oCC_float *)(a4))->v), u14 > 0.694444418f)) {
            *(unsigned int *)0xC2AC2E8 = ((*(int *)0xC2AC2E8) | 0x3);
        }
        FUN_0c044ba0(a4);
        FUN_0c07ff00();
        if ((((((struct o84_int *)(a4))->v)) & 8) != 0) {
            FUN_0c073c40((a4 + 0x5C), (a4 + 0x5C), 0.200000003f);
            t24 = FUN_0c073b40((a4 + 0x5C), (a4 + 0x44));
            (((struct o100_float *)(a4))->v) = t24;
            u26 = t24;
        }
        if ((((((struct o84_int *)(a4))->v)) & 4) == 0) {
        } else {
            (((struct o9C_float *)(a4))->v) = (((((struct o9C_float *)(a4))->v)) - 0.0734999999f);
            if ((int)((((struct o110_int *)(a4))->v)) > 0) {
                (((struct o110_uint *)(a4))->v) = (((((struct o110_int *)(a4))->v)) - 1);
                FUN_0c041178(a4);
                FUN_0c041298(a4);
            }
            FUN_0c073c40((0x98 + a4), (0x98 + a4), 0.999800026f);
            FUN_0c073360();
            nlRotateAZ((-(unsigned short)((((struct oA8_short *)(a4))->v))));
            nlRotateAX((-(unsigned short)((((struct oA4_short *)(a4))->v))));
            nlRotateAY((-(unsigned short)((((struct oA6_short *)(a4))->v))));
            FUN_0c072290((0x98 + a4), (((int)stk + 4) + 0x3C));
            u49 = *(float *)(((int)stk + 72));
            (((struct oCC_float *)(a4))->v) = u49;
            nlPopMatrix(0x1);
            FUN_0c073360();
            FUN_0c0739a0((0x8C + a4));
            nlRotateAY((unsigned short)((((struct oA6_short *)(a4))->v)));
            nlRotateAX((unsigned short)((((struct oA4_short *)(a4))->v)));
            nlRotateAZ((unsigned short)((((struct oA8_short *)(a4))->v)));
            FUN_0c073a30(0.0f, 0.0f, 45.0f);
            FUN_0c072600((((int)stk + 4) + 0x18));
            nlPopMatrix(0x1);
            *(unsigned int *)(((int)stk + 4)) = ((((struct oD4_int *)(a4))->v));
            R1000 = (((int)stk + 4) + 0x18);
            t63 = (((struct o80_int *)(a4))->v);
            t64 = *(int *)0xC2ADA7C;
            *(unsigned int *)(((int)stk + 12)) = ((((t63 << 1) + t63) << 2) + t64);
            FUN_0c0469e2(0x2, (*(int *)(((*(int *)(((int)stk + 12))) + 0x0))), (*(int *)(((*(int *)((((((t63 << 1) + t63) << 2) + t64) + 0x4))) + 0x0))), (((int)stk + 0) + 0x4), (((int)stk + 4) + 0x18));
            t72 = (((struct o80_int *)(a4))->v);
            t74 = *(int *)(((int)stk + 4));
            t76 = *(int *)((((((t72 << 1) + t72) << 2) + (*(int *)0xC2ADA7C)) + 0x0));
            *(unsigned int *)(((int)stk + 12)) = ((((t74 << 1) + t74) << 2) + t76);
            nlSubVector3op((((int)stk + 4) + 0x3C), ((((t74 << 1) + t74) << 2) + t76), (((int)stk + 4) + 0x18));
            *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 4))) + 0x1);
            FUN_0c046fde((0x80 + a4), (((int)stk + 4) + 0x4), 0x0);
            t81 = (((struct o80_int *)(a4))->v);
            t84 = *(int *)(((int)stk + 8));
            nlSubVector3op((((int)stk + 4) + 0x30), ((*(int *)((((((t81 << 1) + t81) << 2) + (*(int *)0xC2ADA7C)) + 0x0))) + (((t84 << 1) + t84) << 2)), (*(int *)(((int)stk + 12))));
            t88 = FUN_0c073b40((((int)stk + 4) + 0x3C), (((int)stk + 4) + 0x30));
            if (0.0f > t88) {
                *(unsigned int *)(((int)stk + 4)) = (*(int *)(((int)stk + 8)));
                t90 = (((struct o80_int *)(a4))->v);
                t93 = *(int *)(((int)stk + 4));
                nlSubVector3op((((int)stk + 4) + 0x3C), ((*(int *)((((((t90 << 1) + t90) << 2) + (*(int *)0xC2ADA7C)) + 0x0))) + (((t93 << 1) + t93) << 2)), (((int)stk + 4) + 0x18));
            }
            t101 = FUN_0c073c60((((int)stk + 4) + 0x3C));
            u122 = u49;
            u123 = t101;
            if (u49 > t101) {
                u102 = u49;
                u103 = t101;
                for (;;) {
                    u102 = (u102 - u103);
                    t104 = *(int *)0xC2ADA7C;
                    t105 = (((struct o80_int *)(a4))->v);
                    *(volatile int *)(((int)stk + 4));
                    *(volatile int *)((((((t105 << 1) + t105) << 2) + t104) + 0x0));
                    FUN_0c07ff00();
                    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x1);
                    FUN_0c046fde((0x80 + a4), ((int)stk + 4), 0x0);
                    t114 = (((struct o80_int *)(a4))->v);
                    t116 = *(int *)(((int)stk + 4));
                    nlSubVector3op((((int)stk + 4) + 0x3C), ((*(int *)((((((t114 << 1) + t114) << 2) + (*(int *)0xC2ADA7C)) + 0x0))) + (((t116 << 1) + t116) << 2)), (((int)stk + 4) + 0x18));
                    u103 = (FUN_0c073c60((((int)stk + 4) + 0x3C)));
                    if (!(u102 > u103)) {
                        break;
                    }
                }
                u122 = u102;
                u123 = u103;
            }
            FUN_0c073c40((((int)stk + 4) + 0x3C), (((int)stk + 4) + 0x3C), (u122 / u123));
            nlAddVector3op((((int)stk + 4) + 0x18), (((int)stk + 4) + 0x18), (((int)stk + 4) + 0x3C));
            t126 = (((struct oD4_int *)(a4))->v);
            t127 = (((struct o80_int *)(a4))->v);
            R1000 = (((int)stk + 4) + 0xC);
            FUN_0c045108(0xFFFFFFFF, (((int)stk + 4) + 0x18), t127, t126, (((int)stk + 4) + 0xC), 90.0f);
            nlGetAverageVector((((int)stk + 4) + 0x18), (((int)stk + 4) + 0xC), (0x8C + a4), 0.5f, 0.5f);
            t131 = *(int *)(((FUN_0c029b12((0x8C + a4), 10.0f)) + 0x1C));
            if (t131 != -1) {
                FUN_0c07ff00();
                (((struct o104_float *)(a4))->v) = ((((struct o18_float *)(t133))->v));
                FUN_0c0415ba(a4);
            }
            (((struct o110_uint *)(a4))->v) = 0xA;
            R1000 = (0x8C + a4);
            t139 = (((struct o80_int *)(a4))->v);
            t140 = *(int *)0xC2ADA7C;
            *(unsigned int *)(((int)stk + 12)) = ((((t139 << 1) + t139) << 2) + t140);
            FUN_0c0469e2(0x2, (*(int *)(((*(int *)(((int)stk + 12))) + 0x0))), (*(int *)(((*(int *)((((((t139 << 1) + t139) << 2) + t140) + 0x4))) + 0x0))), (0xD4 + a4), (0x8C + a4));
            nlSubVector3op((((int)stk + 4) + 0x24), (0x98 + a4), (((int)stk + 4) + 0x24));
            FUN_0c073360();
            nlSubVector3op((((int)stk + 4) + 0x3C), (((int)stk + 4) + 0x18), (((int)stk + 4) + 0xC));
            FUN_0c073e90((((int)stk + 4) + 0x3C));
            nlRotateV(0xC0C3690, (((int)stk + 4) + 0x3C));
            FUN_0c046814((0xA4 + a4));
            FUN_0c073360();
            nlRotateAX((-(unsigned short)((((struct oA4_short *)(a4))->v))));
            nlRotateAY((-(unsigned short)((((struct oA6_short *)(a4))->v))));
            FUN_0c072290((0xEC + a4), (((int)stk + 4) + 0x3C));
            (((struct oA8_ushort *)(a4))->v) = (-(nlArcTan2((*(float *)(((int)stk + 64))), (*(float *)(((int)stk + 68))))));
            nlPopMatrix(0x1);
            nlPopMatrix(0x1);
            (((struct o108_uchar *)(a4))->v) = (*(signed char *)(((0xA4 + a4) + 0x0)));
            *(unsigned char *)(((0x108 + a4) + 0x1)) = (*(signed char *)(((0xA4 + a4) + 0x1)));
            *(unsigned char *)(((0x108 + a4) + 0x2)) = (*(signed char *)(((0xA4 + a4) + 0x2)));
            *(unsigned char *)(((0x108 + a4) + 0x3)) = (*(signed char *)(((0xA4 + a4) + 0x3)));
            *(unsigned char *)(((0x108 + a4) + 0x4)) = (*(signed char *)(((0xA4 + a4) + 0x4)));
            *(unsigned char *)(((0x108 + a4) + 0x5)) = (*(signed char *)(((0xA4 + a4) + 0x5)));
        }
        FUN_0c0423c8(a4);
        FUN_0c07ff00();
        FUN_0c07ff00();
        FUN_0c073c40((((int)stk + 4) + 0x3C), (a4 + 0x44), (((((struct o100_float *)(a4))->v)) - u26));
        nlAddVector((a4 + 0x5C), (((int)stk + 4) + 0x3C));
        FUN_0c073c40((a4 + 0x5C), (a4 + 0x5C), (*(float *)0xC0458A8));
        GetRotVec4Ang((a4 + 0x44), (unsigned short)((((struct oA4_short *)(a4))->v)), (unsigned short)((((struct oA6_short *)(a4))->v)), (unsigned short)((((struct oA8_short *)(a4))->v)));
        (((struct o68_uint *)(a4))->v) = 0x0;
        t192 = 0x68;
    }
    return t192;
}

int kmiFBControl(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int stk[49];
    register int t93;

    register int R3;
    int R6;
    int R7;
    int R12;
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
    R7 = a7;
    v0_2 = (((struct o4_int *)0xC171988)->v);
    *(unsigned int *)(((((int)stk + 0) + 0x38) + 0x0)) = ((((struct o0_int *)0xC171988)->v));
    *(unsigned int *)(((((int)stk + 0) + 0x38) + 0x4)) = v0_2;
    v0_2 = (((struct oC_int *)0xC171988)->v);
    *(unsigned int *)(((((int)stk + 0) + 0x38) + 0x8)) = ((((struct o8_int *)0xC171988)->v));
    *(unsigned int *)(((((int)stk + 0) + 0x38) + 0xC)) = v0_2;
    v0_2 = (((struct o14_int *)0xC171988)->v);
    *(unsigned int *)(((((int)stk + 0) + 0x38) + 0x10)) = ((((struct o10_int *)0xC171988)->v));
    *(unsigned int *)(((((int)stk + 0) + 0x38) + 0x14)) = v0_2;
    v0_2 = (((struct o1C_int *)0xC171988)->v);
    *(unsigned int *)(((((int)stk + 0) + 0x24) + 0x0)) = ((((struct o18_int *)0xC171988)->v));
    *(unsigned int *)(((((int)stk + 0) + 0x24) + 0x4)) = v0_2;
    v0_2 = (((struct o24_int *)0xC171988)->v);
    *(unsigned int *)(((((int)stk + 0) + 0x24) + 0x8)) = ((((struct o20_int *)0xC171988)->v));
    *(unsigned int *)(((((int)stk + 0) + 0x24) + 0xC)) = v0_2;
    *(unsigned int *)(((((int)stk + 0) + 0x24) + 0x10)) = ((((struct o28_int *)0xC171988)->v));
    v0_2 = (((struct o30_int *)0xC171988)->v);
    *(unsigned int *)(((((int)stk + 0) + 0x10) + 0x0)) = ((((struct o2C_int *)0xC171988)->v));
    *(unsigned int *)(((((int)stk + 0) + 0x10) + 0x4)) = v0_2;
    v0_2 = (((struct o38_int *)0xC171988)->v);
    *(unsigned int *)(((((int)stk + 0) + 0x10) + 0x8)) = ((((struct o34_int *)0xC171988)->v));
    *(unsigned int *)(((((int)stk + 0) + 0x10) + 0xC)) = v0_2;
    *(unsigned int *)(((((int)stk + 0) + 0x10) + 0x10)) = ((((struct o3C_int *)0xC171988)->v));
    v0_2 = *(int *)((((R6 << 2) + (((int)stk + 0) + 0x38)) + 0x0));
    (((struct o28_uint *)0xC3008F0)->v) = v0_0;
    (((struct o2C_uint *)0xC3008F0)->v) = v0_1;
    v0_7 = ((((int)stk + 0) + 0x24));
    v0_4 = (v0_2);
    R12 = (0x1);
    if (((((((struct o0_int *)0xC3008F0)->v)) & 0x1) == 1)) goto L_C167062;
    if (((((((struct o0_int *)0xC3008F0)->v)) & 0x2C) != 32)) goto L_C167062;
    if ((R12 == 0)) goto L_C167062;
    (((struct o2C_uint *)0xC3008F0)->v) = ((unsigned int)((((struct o2C_int *)0xC3008F0)->v)) >> 1);
    L_C167062:;
    if ((a9 == 0)) goto L_C167078;
    if (((((((struct o0_int *)0xC3008F0)->v)) & 32) != 0)) goto L_C167078;
    *(unsigned int *)(((int)stk + 8)) = 0x2;
    L_C16707A:;
    *(unsigned int *)(((((int)stk + 0) + 0x50) + 0x20)) = R12;
    *(unsigned int *)(((((int)stk + 0) + 0x50) + 0x38)) = 0x0;
    *(unsigned int *)(((((int)stk + 0) + 0x50) + 0x34)) = 0x0;
    (((struct o40_uint *)((((int)stk + 0) + 0x50)))->v) = 0x0;
    (((struct o70_uint *)((((int)stk + 0) + 0x50)))->v) = 0x0;
    (((struct o68_uint *)((((int)stk + 0) + 0x50)))->v) = 0x0;
    (((struct o64_uint *)((((int)stk + 0) + 0x50)))->v) = 0x0;
    v0_2 = (0x0);
    v0_3 = ((((int)stk + 0) + 0x50));
    if (((((((struct o0_int *)0xC3008F0)->v)) & R12) == 0)) goto L_C1670E0;
    (((struct o6C_uint *)(v0_3))->v) = R12;
    v0_6 = (R12);
    L_C1670EC:;
    *(unsigned int *)(((int)stk + 12)) = v0_2;
    L_C1670F4:;
    v0_8 = (v0_4);
    if ((v0_4 == 16)) goto L_C167106;
    if ((v0_8 == 24)) goto L_C167134;
    if (!((v0_8 == 32))) goto L_C167148;
    *(unsigned int *)((v0_3 + 0x30)) = 0x6;
    *(unsigned int *)((v0_3 + 0x3C)) = 0x3;
    goto L_C167146;
    L_C167148:;
    *(unsigned int *)((v0_3 + 0x28)) = v0_2;
    *(unsigned int *)((v0_3 + 0x24)) = R7;
    *(unsigned int *)((v0_3 + 0x1C)) = v0_2;
    *(unsigned int *)(((int)stk + 4)) = (v0_0 * v0_4);
    v0_8 = ((v0_0 * v0_4));
    if (((int)(v0_0 * v0_4) >= 0)) goto L_C16715A;
    v0_8 = ((v0_8 + 0x3F));
    L_C16715A:;
    (((struct o44_uint *)(v0_3))->v) = ((int)v0_8 >> 6);
    *(unsigned int *)((v0_3 + 0x0)) = (((int)((int)(*(int *)(((int)stk + 4))) / (int)0x20)) - 1);
    v0_8 = (v0_4);
    R6 = (0x20);
    v0_5 = ((((int)((unsigned int)((int)((unsigned int)v0_1 + (unsigned int)0x0)) + ((((int)0x0 > (int)v0_1)) ? 1u : 0u))) >> 1));
    if (((int)v0_4 >= 0)) goto L_C167182;
    v0_8 = ((v0_8 + 0x7));
    L_C167182:;
    *(unsigned int *)(((int)stk + 0)) = ((((v0_8 >> 1) >> 1) >> 1) * v0_0);
    v0_8 = (R7);
    if ((R7 != 1)) goto L_C1671F0;
    if (((((((struct o0_int *)0xC3008F0)->v)) & R6) == 0)) goto L_C1671E0;
    *(unsigned int *)((v0_3 + 0x4)) = v0_5;
    *(unsigned int *)((v0_3 + 0x8)) = (((int)((int)(*(int *)(((int)stk + 4))) / (int)R6)) + 0x1);
    (((struct o0_uint *)0xC300AE8)->v) = v0_2;
    (((struct o4_uint *)0xC300AE8)->v) = (*(int *)(((int)stk + 0)));
    L_C16726E:;
    *(unsigned int *)((v0_3 + 0x4)) = ((*(int *)((v0_3 + 0x4))) - 1);
    R7 = (0x42);
    if ((a9 != 0)) goto L_C167282;
    *(unsigned int *)((v0_3 + 0xC)) = v0_2;
    if (((((((struct o0_int *)0xC3008F0)->v)) & R12) != 1)) goto L_C167394;
    if ((v0_2 == 0)) goto L_C167400;
    L_C1673AA:;
    v0_7 = (((struct o0_int *)0xC3008F0)->v);
    v0_8 = ((v0_7 & R7));
    if (((v0_7 & R7) != 66)) goto L_C1673C4;
    *(unsigned int *)((v0_3 + 0x10)) = (*(int *)(((((((struct o10_int *)0xC3008F0)->v)) << 2) + (((int)stk + 0) + 0x10))));
    v0_8 = ((((int)stk + 0) + 0x10));
    L_C1673C8:;
    (((struct o0_uint *)0xC300AE8)->v) = v0_2;
    (((struct o4_uint *)0xC300AE8)->v) = v0_2;
    *(unsigned int *)((v0_3 + 0x8)) = R12;
    *(unsigned int *)((v0_3 + 0x4)) = ((*(int *)((v0_3 + 0x4))) - 1);
    L_C167484:;
    *(unsigned int *)(((int)stk + 0)) = R12;
    L_C167486:;
    *(unsigned int *)((v0_3 + 0x14)) = 0x40;
    *(unsigned int *)((v0_3 + 0x18)) = 0x80;
    (((struct o0_uint *)0xC300D2C)->v) = (((int)((int)v0_0 / (int)R6)) * (*(int *)(((int)stk + 0))));
    v0_7 = *(int *)(((int)stk + 12));
    (((struct o4_uint *)0xC300D2C)->v) = (((int)((int)((v0_1 * v0_6) * (*(int *)(((int)stk + 8)))) / (int)R6)) + v0_7);
    v0_6 = (v0_7);
    v0_8 = (0x9);
    R6 = (0xF);
    if (((unsigned int)((((struct o4_int *)0xC300D2C)->v)) <= (unsigned int)0xF)) goto L_C1674C8;
    (((struct o4_uint *)0xC300D2C)->v) = R6;
    L_C1674C8:;
    (((struct o4C_uint *)(v0_3))->v) = v0_8;
    (((struct o48_uint *)(v0_3))->v) = 0x6;
    if ((v0_4 != 16)) goto L_C1674E0;
    (((struct o50_uint *)(v0_3))->v) = 0x8;
    L_C1674E6:;
    (((struct o58_uint *)(v0_3))->v) = v0_2;
    (((struct o54_uint *)(v0_3))->v) = (v0_0 - 1);
    (((struct o60_uint *)(v0_3))->v) = v0_2;
    if (((((((struct o0_int *)0xC3008F0)->v)) & R12) != 1)) goto L_C167506;
    if ((v0_2 == 0)) goto L_C16754C;
    L_C167544:;
    (((struct o5C_uint *)(v0_3))->v) = (v0_5 - 1);
    L_C167552:;
    /* manual: the original copies the 29-word block at v0_3 to the outgoing argument area (_quick_mvn) and passes it by value */
    kmiWriteFBRegister(*(Stk29 *)v0_3);
    (((struct o1C_uint *)0xC3008F0)->v) = v0_2;
    (((struct o18_uint *)0xC3008F0)->v) = v0_2;
    return v0_2;
    L_C16754C:;
    (((struct o5C_uint *)(v0_3))->v) = (v0_1 - 1);
    goto L_C167552;
    L_C167506:;
    if (((((((struct o0_int *)0xC3008F0)->v)) & 0x2C) != 32)) goto L_C167540;
    if ((R12 == 0)) goto L_C16754C;
    goto L_C167544;
    L_C167540:;
    if ((v0_2 == 0)) goto L_C16754C;
    goto L_C167544;
    L_C1674E0:;
    (((struct o50_uint *)(v0_3))->v) = 0xB;
    v0_6 = (0xB);
    goto L_C1674E6;
    L_C1673C4:;
    *(unsigned int *)((v0_3 + 0x10)) = 0x800;
    goto L_C1673C8;
    L_C167400:;
    if (((((((struct o0_int *)0xC3008F0)->v)) & R12) == 0)) goto L_C16740E;
    *(unsigned int *)((v0_3 + 0x10)) = 0x400;
    v0_8 = (0x400);
    goto L_C167484;
    L_C16740E:;
    if (((((((struct o0_int *)0xC3008F0)->v)) & R6) == 0)) goto L_C167438;
    v0_9 = (((struct o0_int *)0xC3008F0)->v);
    v0_8 = ((v0_9 & R7));
    if (((v0_9 & R7) != 66)) goto L_C16742C;
    v0_8 = (((struct o10_int *)0xC3008F0)->v);
    *(unsigned int *)((v0_3 + 0x10)) = (*(int *)((v0_7 + (v0_8 << 2))));
    v0_8 = ((v0_8 << 2));
    L_C167430:;
    *(unsigned int *)((v0_3 + 0x4)) = ((*(int *)((v0_3 + 0x4))) - 1);
    goto L_C167484;
    L_C16742C:;
    *(unsigned int *)((v0_3 + 0x10)) = 0x401;
    goto L_C167430;
    L_C167438:;
    v0_9 = (((struct o0_int *)0xC3008F0)->v);
    v0_8 = ((v0_9 & R7));
    if (((v0_9 & R7) != 66)) goto L_C167480;
    *(unsigned int *)((v0_3 + 0x10)) = (*(int *)((v0_7 + (((((struct o10_int *)0xC3008F0)->v)) << 2))));
    v0_7 = *(int *)((v0_3 + 0x4));
    *(unsigned int *)((v0_3 + 0x4)) = (v0_7 - 1);
    v0_8 = ((v0_7 - 1));
    goto L_C167484;
    L_C167480:;
    *(unsigned int *)((v0_3 + 0x10)) = 0x400;
    goto L_C167484;
    L_C167394:;
    if (((((((struct o0_int *)0xC3008F0)->v)) & 0x2C) != 32)) goto L_C1673A6;
    if ((R12 == 0)) goto L_C167400;
    goto L_C1673AA;
    L_C1673A6:;
    if ((v0_2 == 0)) goto L_C167400;
    goto L_C1673AA;
    L_C167282:;
    *(unsigned int *)0xC300938 = ((*(int *)0xC300938) | R12);
    *(unsigned int *)((v0_3 + 0xC)) = R12;
    *(unsigned int *)(((int)stk + 0)) = 0x2;
    *(unsigned int *)((v0_3 + 0x4)) = ((*(int *)((v0_3 + 0x4))) - 1);
    if (((((((struct o0_int *)0xC3008F0)->v)) & R12) == 0)) goto L_C1672A4;
    *(unsigned int *)((v0_3 + 0x10)) = 0x401;
    v0_8 = (0x401);
    goto L_C167486;
    L_C1672A4:;
    v0_9 = (((struct o0_int *)0xC3008F0)->v);
    v0_8 = ((v0_9 & 0xFFFFFFEC));
    if (((v0_9 & 0xFFFFFFEC) == 100)) goto L_C167300;
    if ((v0_8 == 104)) goto L_C167300;
    if ((v0_8 == 36)) goto L_C167300;
    if ((v0_8 == 40)) goto L_C167300;
    if ((v0_8 == 96)) goto L_C167328;
    if ((v0_8 == 64)) goto L_C167328;
    if ((v0_8 == 68)) goto L_C167328;
    if ((v0_8 == 32)) goto L_C167328;
    if ((v0_8 == 0)) goto L_C167328;
    if ((v0_8 == 4)) goto L_C167328;
    goto L_C167486;
    L_C167328:;
    (((struct o0_uint *)0xC300AE8)->v) = v0_2;
    (((struct o4_uint *)0xC300AE8)->v) = v0_2;
    v0_7 = (((struct o0_int *)0xC3008F0)->v);
    v0_8 = ((v0_7 & R7));
    if (((v0_7 & R7) != 66)) goto L_C16734A;
    v0_7 = (((struct o10_int *)0xC3008F0)->v);
    *(unsigned int *)((v0_3 + 0x10)) = (*(int *)(((((int)stk + 0) + 0x10) + (v0_7 << 2))));
    v0_8 = ((v0_7 << 2));
    L_C16734E:;
    *(unsigned int *)((v0_3 + 0x8)) = R12;
    goto L_C167486;
    L_C16734A:;
    *(unsigned int *)((v0_3 + 0x10)) = 0x800;
    goto L_C16734E;
    L_C167300:;
    v0_9 = (((struct o0_int *)0xC3008F0)->v);
    v0_8 = ((v0_9 & R7));
    if (((v0_9 & R7) != 66)) goto L_C167316;
    v0_8 = (((struct o10_int *)0xC3008F0)->v);
    *(unsigned int *)((v0_3 + 0x10)) = (*(int *)((v0_7 + (v0_8 << 2))));
    v0_8 = ((v0_8 << 2));
    L_C16731A:;
    v0_7 = (int)((int)(*(int *)(((int)stk + 4))) / (int)R6);
    *(unsigned int *)((v0_3 + 0x8)) = (v0_7 + 0x1);
    v0_8 = ((v0_7 + 0x1));
    goto L_C167486;
    L_C167316:;
    *(unsigned int *)((v0_3 + 0x10)) = 0x401;
    goto L_C16731A;
    L_C1671E0:;
    *(unsigned int *)((v0_3 + 0x4)) = v0_1;
    (((struct o0_uint *)0xC300AE8)->v) = v0_2;
    (((struct o4_uint *)0xC300AE8)->v) = (*(int *)(((int)stk + 0)));
    *(unsigned int *)((v0_3 + 0x8)) = R12;
    goto L_C16726E;
    L_C1671F0:;
    if (((((((struct o0_int *)0xC3008F0)->v)) & R12) == 0)) goto L_C167208;
    *(unsigned int *)((v0_3 + 0x4)) = v0_1;
    (((struct o0_uint *)0xC300AE8)->v) = v0_2;
    (((struct o4_uint *)0xC300AE8)->v) = (*(int *)(((int)stk + 0)));
    *(unsigned int *)((v0_3 + 0x8)) = R12;
    goto L_C16726E;
    L_C167208:;
    v0_8 = (0xC3008F0);
    if (((((((struct o0_int *)0xC3008F0)->v)) & R6) == 0)) goto L_C167260;
    *(unsigned int *)((v0_3 + 0x4)) = v0_5;
    (((struct o0_uint *)0xC300AE8)->v) = v0_2;
    (((struct o4_uint *)0xC300AE8)->v) = (*(int *)(((int)stk + 0)));
    *(unsigned int *)((v0_3 + 0x8)) = (((int)((int)(*(int *)(((int)stk + 4))) / (int)R6)) + 0x1);
    goto L_C16726E;
    L_C167260:;
    *(unsigned int *)((v0_3 + 0x4)) = v0_1;
    (((struct o0_uint *)0xC300AE8)->v) = v0_2;
    (((struct o4_uint *)0xC300AE8)->v) = (*(int *)(((int)stk + 0)));
    *(unsigned int *)((v0_3 + 0x8)) = R12;
    goto L_C16726E;
    L_C167146:;
    *(unsigned int *)((v0_3 + 0x2C)) = v0_2;
    goto L_C167148;
    L_C167134:;
    *(unsigned int *)((v0_3 + 0x30)) = 0x4;
    *(unsigned int *)((v0_3 + 0x3C)) = 0x2;
    goto L_C167146;
    L_C167106:;
    if ((R6 != 3)) goto L_C167112;
    *(unsigned int *)((v0_3 + 0x30)) = 0x3;
    L_C167124:;
    *(unsigned int *)((v0_3 + 0x3C)) = v0_2;
    L_C16712C:;
    *(unsigned int *)((v0_3 + 0x2C)) = a8;
    goto L_C167148;
    L_C167112:;
    if ((R6 != 0)) goto L_C16711C;
    *(unsigned int *)((v0_3 + 0x30)) = R12;
    *(unsigned int *)((v0_3 + 0x3C)) = R12;
    goto L_C16712C;
    L_C16711C:;
    if ((R6 != 1)) goto L_C167128;
    *(unsigned int *)((v0_3 + 0x30)) = v0_2;
    goto L_C167124;
    L_C167128:;
    *(unsigned int *)((v0_3 + 0x30)) = R12;
    *(unsigned int *)((v0_3 + 0x3C)) = R12;
    goto L_C16712C;
    L_C1670E0:;
    (((struct o6C_uint *)(v0_3))->v) = v0_2;
    if ((R7 != 1)) goto L_C1670F0;
    v0_6 = (0x2);
    goto L_C1670EC;
    L_C1670F0:;
    *(unsigned int *)(((int)stk + 12)) = R12;
    v0_6 = (R12);
    goto L_C1670F4;
    L_C167078:;
    *(unsigned int *)(((int)stk + 8)) = R12;
    goto L_C16707A;
}

int FUN_0c047cb6(int a4, int a5, int a6, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    *(unsigned int *)0xC1758B0 = 0x1;
    t0 = (((struct o0_int *)0xC1EC71C)->v);
    t1 = *(int *)0xC1EC848;
    t2 = (((struct o18_int *)0xC1EC71C)->v);
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        if (a6 != 4) {
            if (a6 != 5) {
                if (a6 != 7) {
                    if (a6 != 8) {
                        if (a6 == 9) {
                            if ((int)t1 < (int)((*(int *)((a5 + 0x0))) - 60)) {
                                return a6;
                            }
                            t0 = ((int (*)(int, int, float))(gdc_CourseAdvLoadSub))(0xC12FC94, 0x0, f4);
                            return ((int (*)(int, int))(gdc_CourseAdvLoadSub))(0xC12FCA4, 0x1);
                        }
                        if (a6 == 10) {
                            if ((int)t1 < (int)((*(int *)((a5 + 0x0))) - 40)) {
                                return a6;
                            }
                            t0 = ((int (*)(int, int, float))(gdc_CourseAdvLoadSub))(0xC12FCB4, 0x0, f4);
                            return ((int (*)(int, int))(gdc_CourseAdvLoadSub))(0xC12FCC0, 0x1);
                        }
                        if (a6 == 14) {
                            if ((int)t1 < (int)((*(int *)((a5 + 0x0))) - 60)) {
                                return a6;
                            }
                            t0 = ((int (*)(int, int, float))(gdc_CourseAdvLoadSub))(0xC12FCCC, 0x0, f4);
                            return ((int (*)(int, int))(gdc_CourseAdvLoadSub))(0xC12FCD4, 0x1);
                        }
                        if (a6 == 18) {
                            if ((int)t1 >= (int)((*(int *)((a5 + 0x0))) - 60)) {
                                t0 = ((int (*)(int, int, float))(gdc_CourseAdvLoadSub))(0xC12FCE4, 0x0, f4);
                                return ((int (*)(int, int))(gdc_CourseAdvLoadSub))(0xC12FCF4, 0x1);
                            }
                            return a6;
                        }
                        if (a6 == 19) {
                            t0 = a6;
                            if ((int)t1 >= (int)((*(int *)((a5 + 0x0))) - 120)) {
                                t3 = ((int (*)(int, int, float))(gdc_CourseAdvLoadSub))(0xC12FD1C, 0x0, f4);
                                t0 = (((int (*)(int, int))(gdc_CourseAdvLoadSub))(0xC12FD28, 0x1));
                            }
                            if ((int)(*(int *)0xC1EC848) >= (int)((*(int *)((a5 + 0x0))) - 60)) {
                                return ((int (*)(int, int))(gdc_CourseAdvLoadSub))(0xC12FD3C, 0x0);
                            }
                            return t0;
                        }
                        if (a6 == 20) {
                            t0 = a6;
                            if ((int)t1 >= (int)((*(int *)((a5 + 0x0))) - 120)) {
                                t0 = (((int (*)(int, int, float))(gdc_CourseAdvLoadSub))(0xC12FD3C, 0x0, f4));
                            }
                            if ((int)(*(int *)0xC1EC848) >= (int)((*(int *)((a5 + 0x0))) - 60)) {
                                *(unsigned int *)0xC1758B0 = 0xFFFFFFFF;
                                return ((int (*)(int, int))(gdc_CourseAdvLoadSub))(0xC12FD4C, 0x1);
                            }
                            return t0;
                        }
                        if (a6 == 21) {
                            if ((int)t1 >= (int)((*(int *)((a5 + 0x0))) - 60)) {
                                *(unsigned int *)0xC1758B0 = 0xFFFFFFFF;
                                t0 = ((int (*)(int, int, float))(gdc_CourseAdvLoadSub))(0xC12FD04, 0x0, f4);
                                return ((int (*)(int, int))(gdc_CourseAdvLoadSub))(0xC12FD10, 0x1);
                            }
                            return a6;
                        }
                        if (a6 == 25) {
                            t0 = a6;
                            if ((int)t1 >= (int)((*(int *)((a5 + 0x0))) - 60)) {
                                t0 = (((int (*)(int, int, float))(gdc_CourseAdvLoadSub))(0xC12FD78, 0x0, f4));
                            }
                            if ((int)(*(int *)0xC1EC848) >= (int)((*(int *)((a5 + 0x0))) - 90)) {
                                return ((int (*)(int, int))(gdc_CourseAdvLoadSub))(0xC12FD68, 0x0);
                            }
                            return t0;
                        }
                        if (a6 == 30) {
                            if ((int)(*(int *)0xC1EC848) >= (int)((*(int *)((a5 + 0x0))) - 90)) {
                                return ((int (*)(int, int, float))(gdc_CourseAdvLoadSub))(0xC12FD68, 0x0, f4);
                            }
                            return a6;
                        }
                        if (a6 == 31) {
                            if ((int)t1 >= (int)((*(int *)((a5 + 0x0))) - 60)) {
                                t0 = ((int (*)(int, int, float))(gdc_CourseAdvLoadSub))(0xC12FD84, 0x0, f4);
                                return ((int (*)(int, int))(gdc_CourseAdvLoadSub))(0xC12FD98, 0x1);
                            }
                            return a6;
                        }
                        return a6;
                    }
                    if (t2 != 2) {
                        return t2;
                    }
                    t0 = *(int *)((a5 + 0x0));
                    t3 = (t0 - 60);
                    if ((int)t1 >= (int)(t0 - 60)) {
                        t3 = (((int (*)(int, int, float))(gdc_CourseAdvLoadSub))(0xC12FC78, 0x0, f4));
                    }
                    if ((int)(*(int *)0xC1EC848) < (int)((*(int *)((a5 + 0x0))) - 30)) {
                        return t3;
                    }
                    return ((int (*)(int, int))(gdc_CourseAdvLoadSub))(0xC12FC84, 0x1);
                }
                if ((int)t1 < (int)((*(int *)((a5 + 0x0))) - 60)) {
                    return a6;
                }
                return ((int (*)(int, int, float))(gdc_CourseAdvLoadSub))(0xC12FC68, 0x0, f4);
            }
            if ((int)t1 < (int)((*(int *)((a5 + 0x0))) - 40)) {
            } else {
                *(unsigned int *)0xC1758B0 = 0xFFFFFFFF;
            }
            return a6;
        }
        t0 = *(int *)((a5 + 0x0));
        t3 = (t0 - 180);
        if ((int)t1 >= (int)(t0 - 180)) {
            *(unsigned int *)0xC1758B0 = 0xFFFFFFFF;
            t0 = ((int (*)(int, int, float))(gdc_CourseAdvLoadSub))(0xC12FC28, 0x0, f4);
            t3 = (((int (*)(int, int))(gdc_CourseAdvLoadSub))(0xC12FC30, 0x1));
        }
        if ((int)(*(int *)0xC1EC848) < (int)((*(int *)((a5 + 0x0))) - 120)) {
            return t3;
        }
        t0 = ((int (*)(int, int))(gdc_CourseAdvLoadSub))(0xC12FC40, 0x0);
        return ((int (*)(int, int))(gdc_CourseAdvLoadSub))(0xC12FC54, 0x1);
    }
    if (a6 != 6) {
        if (a6 != 8) {
            if (a6 != 9) {
                if (a6 != 10) {
                    if (a6 == 11) {
                        t0 = *(int *)((a5 + 0x0));
                        t3 = (t0 - 160);
                        if ((int)t1 >= (int)(t0 - 160)) {
                            *(unsigned int *)0xC1758B0 = 0xFFFFFFFF;
                            t3 = (((int (*)(int, int, float))(gdc_CourseAdvLoadSub))(0xC12FB48, 0x0, f4));
                        }
                        if ((int)(*(int *)0xC1EC848) < (int)((*(int *)((a5 + 0x0))) - 90)) {
                            return t3;
                        }
                        return ((int (*)(int, int))(gdc_CourseAdvLoadSub))(0xC12FB6C, 0x0);
                    }
                    if (a6 == 12) {
                        t0 = *(int *)((a5 + 0x0));
                        t3 = (t0 - 150);
                        if ((int)t1 < (int)(t0 - 150)) {
                            *(unsigned int *)0xC1758B0 = 0x2;
                            t3 = 0x2;
                        }
                        if ((int)(*(int *)0xC1EC848) < (int)((*(int *)((a5 + 0x0))) - 60)) {
                            return t3;
                        }
                        t0 = ((int (*)(int, int, float))(gdc_CourseAdvLoadSub))(0xC12FB7C, 0x0, f4);
                        return ((int (*)(int, int))(gdc_CourseAdvLoadSub))(0xC12FB84, 0x1);
                    }
                    if (a6 == 21) {
                        if ((int)t1 < (int)((*(int *)((a5 + 0x0))) - 120)) {
                            return a6;
                        }
                        t0 = ((int (*)(int, int, float))(gdc_CourseAdvLoadSub))(0xC12FB90, 0x0, f4);
                        return ((int (*)(int, int))(gdc_CourseAdvLoadSub))(0xC12FBA4, 0x1);
                    }
                    if (a6 == 22) {
                        if (t2 != 2) {
                            return t2;
                        }
                        t0 = *(int *)((a5 + 0x0));
                        if ((int)t1 < (int)(t0 - 60)) {
                            return (t0 - 60);
                        }
                        return ((int (*)(int, int, float))(gdc_CourseAdvLoadSub))(0xC12FBAC, 0x0, f4);
                    }
                    if (a6 == 23) {
                        if ((int)t1 < (int)((*(int *)((a5 + 0x0))) - 60)) {
                            return a6;
                        }
                        return ((int (*)(int, int, float))(gdc_CourseAdvLoadSub))(0xC12FBBC, 0x0, f4);
                    }
                    if (a6 == 24) {
                        if ((int)t1 < (int)((*(int *)((a5 + 0x0))) - 60)) {
                            return a6;
                        }
                        return ((int (*)(int, int, float))(gdc_CourseAdvLoadSub))(0xC12FBC8, 0x0, f4);
                    }
                    if (a6 == 25) {
                        if ((int)t1 < (int)((*(int *)((a5 + 0x0))) - 60)) {
                            return a6;
                        }
                        t0 = ((int (*)(int, int, float))(gdc_CourseAdvLoadSub))(0xC12FBDC, 0x0, f4);
                        return ((int (*)(int, int))(gdc_CourseAdvLoadSub))(0xC12FBF0, 0x1);
                    }
                    if (a6 == 27) {
                        if ((int)t1 < (int)((*(int *)((a5 + 0x0))) - 60)) {
                            return a6;
                        }
                        t0 = ((int (*)(int, int, float))(gdc_CourseAdvLoadSub))(0xC12FBFC, 0x0, f4);
                        return ((int (*)(int, int))(gdc_CourseAdvLoadSub))(0xC12FC0C, 0x1);
                    }
                    if (a6 == 28) {
                        if ((int)t1 < (int)((*(int *)((a5 + 0x0))) - 120)) {
                            return a6;
                        }
                        return ((int (*)(int, int, float))(gdc_CourseAdvLoadSub))(0xC12FC1C, 0x0, f4);
                    }
                    return a6;
                }
                t0 = *(int *)((a5 + 0x0));
                if ((int)t1 < (int)(t0 - 195)) {
                    return (t0 - 195);
                }
                *(unsigned int *)0xC1758B0 = 0xFFFFFFFF;
                t0 = ((int (*)(int, int, float))(gdc_CourseAdvLoadSub))(0xC12FB14, 0x0, f4);
                return ((int (*)(int, int))(gdc_CourseAdvLoadSub))(0xC12FB30, 0x1);
            }
            if ((int)t1 < (int)((*(int *)((a5 + 0x0))) - 120)) {
                return a6;
            }
            t0 = ((int (*)(int, int, float))(gdc_CourseAdvLoadSub))(0xC12FAFC, 0x0, f4);
            return ((int (*)(int, int))(gdc_CourseAdvLoadSub))(0xC12FB08, 0x1);
        }
        if ((int)t1 < (int)((*(int *)((a5 + 0x0))) - 30)) {
            return a6;
        }
        t0 = ((int (*)(int, int, float))(gdc_CourseAdvLoadSub))(0xC12FAE8, 0x0, f4);
        return ((int (*)(int, int))(gdc_CourseAdvLoadSub))(0xC12FAF4, 0x1);
    }
    t0 = a6;
    if ((int)t1 >= (int)((*(int *)((a5 + 0x0))) - 120)) {
        t0 = (((int (*)(int, int, float))(gdc_CourseAdvLoadSub))(0xC12FABC, 0x0, f4));
    }
    if ((int)(*(int *)0xC1EC848) < (int)((*(int *)((a5 + 0x0))) - 60)) {
        return t0;
    }
    *(unsigned int *)0xC1758B0 = 0xFFFFFFFF;
    return ((int (*)(int, int))(gdc_CourseAdvLoadSub))(0xC12FAD8, 0x1);
}

int FUN_0c08b634(int a4, int a5, int a6, int a7, int a8)
{
    int stk[17];
    register int t3;
    register int t6;
    register int t10;
    register int t13;
    register int t25;
    register int t43;
    register int t53;
    register int t58;
    register int t74;
    register int t75;
    register int t86;
    register int t108;
    register int t121;
    register int t127;
    register int t133;
    register int t141;
    register int t149;
    register int t157;
    register int t165;
    register int t173;
    register int t181;
    register int t189;
    register int t268;
    register int t87;

    (((struct o40_uint *)(((int)stk + 0)))->v) = a4;
    *(unsigned int *)(((int)stk + 60)) = a5;
    *(unsigned int *)(((int)stk + 56)) = a6;
    *(unsigned int *)(((int)stk + 52)) = a7;
    *(unsigned int *)(((int)stk + 4)) = (((*(int *)(((int)stk + 64))) * 0x154) + 0xC2C8D2C);
    if ((*(signed char *)(((((*(int *)(((int)stk + 64))) * 0x154) + 0xC2C8D2C) + 0x2))) == 0) {
        return 0xFFFFFF01;
    }
    if (a8 != 0) {
        t3 = *(int *)(((int)stk + 64));
        *(unsigned int *)(((int)stk + 0)) = ((t3 * 0x154) + 0xC2C8D2C);
        *(unsigned int *)((((t3 * 0x154) + 0xC2C8D2C) + 0x30)) = 0x1;
        t6 = *(int *)(((*(int *)(((int)stk + 0))) + 0x4));
        *(unsigned int *)(((*(int *)(((int)stk + 0))) + 0x34)) = (*(int *)(((((((t6 << 1) + t6) << 2) << 2) << 1) + 0xC14784C)));
    } else {
        t10 = *(int *)(((int)stk + 64));
        *(unsigned int *)(((int)stk + 0)) = ((t10 * 0x154) + 0xC2C8D2C);
        *(unsigned int *)((((t10 * 0x154) + 0xC2C8D2C) + 0x30)) = 0x1;
        t13 = *(int *)(((*(int *)(((int)stk + 0))) + 0x4));
        *(unsigned int *)(((*(int *)(((int)stk + 0))) + 0x34)) = ((int)((int)(*(int *)(((((((t13 << 1) + t13) << 2) << 2) << 1) + 0xC14784C))) / (int)0xA));
    }
    t25 = vmsio_ismount((*(int *)(((int)stk + 64))));
    if (t25 == 0) {
        return 0xFFFFFF01;
    }
    if ((*(signed char *)((((*(int *)(((int)stk + 64))) * 0x154) + 0xC2C8D34))) == 0) {
        return 0xFFFFFF01;
    }
    *(unsigned int *)(((int)stk + 20)) = (0xC2CDC98 + (((*(int *)(((int)stk + 64))) << 8) << 1));
    FUN_0c090e4c((*(int *)(((int)stk + 64))), 0x0, (((int)stk + 0) + 0x28), 0x0);
    vmsfs_lockbank((*(int *)(((int)stk + 64))), 0x1);
    memset((*(int *)(((*(int *)(((int)stk + 4))) + 0x20))), 0x0, 0x200);
    t43 = vmsfs_write_retry((*(int *)(((int)stk + 64))), (*(int *)(((*(int *)(((*(int *)(((int)stk + 4))) + 0x1C))) + 0x8))), (*(int *)(((*(int *)(((int)stk + 4))) + 0x20))));
    *(unsigned int *)(((int)stk + 44)) = t43;
    if ((int)t43 < 0) {
        if (t43 == 0xFFFFFF40) {
            vmsfs_lockbank((*(int *)(((int)stk + 64))), (*(int *)(((int)stk + 40))));
            return 0xFFFFFF81;
        }
    } else {
        t53 = vmsfs_mediainfo_retry((*(int *)(((int)stk + 64))), (*(int *)(((*(int *)(((int)stk + 4))) + 0x1C))));
        *(unsigned int *)(((int)stk + 44)) = t53;
        if (!((int)t53 < 0)) {
            t58 = FUN_0c08fe18((*(int *)(((int)stk + 4))));
            if ((int)t58 < 0) {
                vmsfs_lockbank((*(int *)(((int)stk + 64))), (*(int *)(((int)stk + 40))));
                return 0xFFFFFF83;
            }
            *(unsigned int *)(((*(int *)(((*(int *)(((int)stk + 4))) + 0x1C))) + 0x30)) = (*(int *)(((*(int *)(((*(int *)(((int)stk + 4))) + 0x1C))) + 0x1C)));
            memset((*(int *)(((*(int *)(((int)stk + 4))) + 0x20))), 0x0, 0x200);
            t74 = memset(((*(int *)(((*(int *)(((int)stk + 4))) + 0x20))) + 0x10), 0x20, 0x20);
            t75 = *(int *)(((int)stk + 60));
            *(unsigned int *)(((int)stk + 16)) = t75;
            *(unsigned int *)(((int)stk + 48)) = 0x0;
            for (;;) {
                if ((int)(*(int *)(((int)stk + 48))) >= (int)0x20) {
                    break;
                }
                t74 = (*(int *)(((int)stk + 4)));
                t74 = (*(int *)((t74 + 0x20)));
                t75 = (*(int *)(((int)stk + 16)));
                t75 = (*(signed char *)((t75 + 0x0)));
                *(unsigned char *)((((*(int *)(((int)stk + 48))) + 0x10) + t74)) = t75;
                *(unsigned int *)(((int)stk + 48)) = ((*(int *)(((int)stk + 48))) + 0x1);
                t75 = (*(int *)(((int)stk + 16)));
                t75 = (t75 + 0x1);
                *(unsigned int *)(((int)stk + 16)) = t75;
            }
            t86 = FUN_0c08fc6c((((int)stk + 0) + 0x8), (*(int *)(((int)stk + 52))));
            *(unsigned int *)(((int)stk + 48)) = 0x0;
            for (;;) {
                if ((int)(*(int *)(((int)stk + 48))) >= (int)0x8) {
                    break;
                }
                t86 = (*(int *)(((int)stk + 4)));
                t87 = (*(int *)(((int)stk + 48)));
                t87 = (t87 + 0x30);
                t86 = (*(int *)((t86 + 0x20)));
                *(unsigned char *)((t87 + t86)) = (*(signed char *)((((*(int *)(((int)stk + 48))) + (((int)stk + 0) + 0x8)) + 0x0)));
                t87 = (*(int *)(((int)stk + 48)));
                t87 = (t87 + 0x1);
                *(unsigned int *)(((int)stk + 48)) = t87;
            }
            *(unsigned int *)(((int)stk + 24)) = (*(int *)(((*(int *)(((*(int *)(((int)stk + 4))) + 0x1C))) + 0xC)));
            *(unsigned int *)(((int)stk + 28)) = (*(int *)(((*(int *)(((*(int *)(((int)stk + 4))) + 0x1C))) + 0x14)));
            t108 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC2C8D28) + 0x10)))))((*(int *)(((*(int *)(((int)stk + 4))) + 0x20))), 0x42, (*(int *)(((*(int *)(((*(int *)(((int)stk + 4))) + 0x1C))) + 0x4))), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
            (((struct o4E_uchar *)((*(int *)(((*(int *)(((int)stk + 4))) + 0x20)))))->v) = (*(int *)(((int)stk + 56)));
            (((struct o4F_uchar *)((*(int *)(((*(int *)(((int)stk + 4))) + 0x20)))))->v) = 0x0;
            t121 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC2C8D28) + 0x10)))))((*(int *)(((*(int *)(((int)stk + 4))) + 0x20))), 0x40, (*(int *)(((*(int *)(((*(int *)(((int)stk + 4))) + 0x1C))) + 0x0))), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
            t127 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC2C8D28) + 0x10)))))((*(int *)(((*(int *)(((int)stk + 4))) + 0x20))), 0x4A, (*(int *)(((int)stk + 28))), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
            t133 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC2C8D28) + 0x10)))))((*(int *)(((*(int *)(((int)stk + 4))) + 0x20))), 0x46, (*(int *)(((int)stk + 24))), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
            t141 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC2C8D28) + 0x10)))))((*(int *)(((*(int *)(((int)stk + 4))) + 0x20))), 0x4C, (*(int *)(((*(int *)(((*(int *)(((int)stk + 4))) + 0x1C))) + 0x18))), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
            t149 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC2C8D28) + 0x10)))))((*(int *)(((*(int *)(((int)stk + 4))) + 0x20))), 0x48, (*(int *)(((*(int *)(((*(int *)(((int)stk + 4))) + 0x1C))) + 0x10))), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
            t157 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC2C8D28) + 0x10)))))((*(int *)(((*(int *)(((int)stk + 4))) + 0x20))), 0x50, (*(int *)(((*(int *)(((*(int *)(((int)stk + 4))) + 0x1C))) + 0x1C))), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
            t165 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC2C8D28) + 0x10)))))((*(int *)(((*(int *)(((int)stk + 4))) + 0x20))), 0x52, (*(int *)(((*(int *)(((*(int *)(((int)stk + 4))) + 0x1C))) + 0x20))), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
            t173 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC2C8D28) + 0x10)))))((*(int *)(((*(int *)(((int)stk + 4))) + 0x20))), 0x54, (*(int *)(((*(int *)(((*(int *)(((int)stk + 4))) + 0x1C))) + 0x34))), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
            t181 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC2C8D28) + 0x10)))))((*(int *)(((*(int *)(((int)stk + 4))) + 0x20))), 0x56, (*(int *)(((*(int *)(((*(int *)(((int)stk + 4))) + 0x1C))) + 0x38))), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
            t189 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC2C8D28) + 0x10)))))((*(int *)(((*(int *)(((int)stk + 4))) + 0x20))), 0x44, (*(int *)(((*(int *)(((*(int *)(((int)stk + 4))) + 0x1C))) + 0x0))), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
            memset((*(int *)(((int)stk + 20))), 0x0, 0x200);
            *(unsigned int *)(((int)stk + 48)) = 0x0;
            for (;;) {
                if ((int)(*(int *)(((int)stk + 48))) >= (int)(*(int *)(((*(int *)(((*(int *)(((int)stk + 4))) + 0x1C))) + 0x0)))) {
                    *(unsigned int *)(((int)stk + 36)) = (*(int *)(((*(int *)(((*(int *)(((int)stk + 4))) + 0x1C))) + 0x30)));
                    *(unsigned int *)(((int)stk + 32)) = (*(int *)(((*(int *)(((*(int *)(((int)stk + 4))) + 0x1C))) + 0x18)));
                    memset((*(int *)(((*(int *)(((int)stk + 4))) + 0x28))), 0x0, (((*(int *)(((int)stk + 32))) << 8) << 1));
                    FUN_0c08ed3c((*(int *)(((int)stk + 64))));
                    FUN_0c08f824((*(int *)(((int)stk + 64))), (*(int *)(((*(int *)(((*(int *)(((int)stk + 4))) + 0x1C))) + 0x8))), 0xFFFA);
                    *(unsigned int *)(((int)stk + 48)) = 0x0;
                    for (;;) {
                        if ((int)(*(int *)(((int)stk + 48))) >= (int)(*(int *)(((*(int *)(((*(int *)(((int)stk + 4))) + 0x1C))) + 0x10)))) {
                            break;
                        }
                        FUN_0c08f824((*(int *)(((int)stk + 64))), ((*(int *)(((*(int *)(((*(int *)(((int)stk + 4))) + 0x1C))) + 0xC))) + (*(int *)(((int)stk + 48)))), 0xFFFA);
                        *(unsigned int *)(((int)stk + 48)) = ((*(int *)(((int)stk + 48))) + 0x1);
                    }
                    FUN_0c08f824((*(int *)(((int)stk + 64))), (*(int *)(((*(int *)(((*(int *)(((int)stk + 4))) + 0x1C))) + 0x8))), 0xFFFA);
                    *(unsigned int *)(((int)stk + 48)) = 0x0;
                    for (;;) {
                        if ((int)(*(int *)(((int)stk + 48))) >= (int)(*(int *)(((*(int *)(((*(int *)(((int)stk + 4))) + 0x1C))) + 0x10)))) {
                            break;
                        }
                        FUN_0c08f824((*(int *)(((int)stk + 64))), ((*(int *)(((*(int *)(((*(int *)(((int)stk + 4))) + 0x1C))) + 0xC))) + (*(int *)(((int)stk + 48)))), 0xFFFA);
                        *(unsigned int *)(((int)stk + 48)) = ((*(int *)(((int)stk + 48))) + 0x1);
                    }
                    FUN_0c08f5d8((*(int *)(((int)stk + 64))));
                    memset((*(int *)(((*(int *)(((int)stk + 4))) + 0x20))), 0x55, 0x10);
                    FUN_0c08f3b8((*(int *)(((int)stk + 64))));
                    memset((*(int *)(((*(int *)(((int)stk + 4))) + 0x20))), 0x0, 0x10);
                    *(unsigned char *)(((*(int *)(((int)stk + 4))) + 0xB)) = 0x0;
                    *(unsigned char *)(((*(int *)(((int)stk + 4))) + 0xC)) = 0x0;
                    *(unsigned char *)(((*(int *)(((int)stk + 4))) + 0xA)) = 0x0;
                    vmsfs_lockbank((*(int *)(((int)stk + 64))), (*(int *)(((int)stk + 40))));
                    return (FUN_0c08f8c0((*(int *)(((int)stk + 64)))));
                }
                if (a8 != 0) {
                    *(unsigned int *)(((int)stk + 44)) = (vmsfs_write_retry((*(int *)(((int)stk + 64))), (*(int *)(((int)stk + 48))), (*(int *)(((int)stk + 20)))));
                } else {
                    *(unsigned int *)(((int)stk + 44)) = 0x0;
                }
                t268 = *(int *)(((int)stk + 44));
                if (t268 != 0xFFFFFF01) {
                    if (t268 != 0xFFFFFF40) {
                        FUN_0c08f824((*(int *)(((int)stk + 64))), (*(int *)(((int)stk + 48))), 0xFFFC);
                    } else {
                        FUN_0c08f824((*(int *)(((int)stk + 64))), (*(int *)(((int)stk + 48))), 0xFFFF);
                    }
                    *(unsigned int *)(((int)stk + 48)) = ((*(int *)(((int)stk + 48))) + 0x1);
                    continue;
                }
                break;
            }
        }
    }
    vmsfs_lockbank((*(int *)(((int)stk + 64))), (*(int *)(((int)stk + 40))));
    return 0xFFFFFF01;
}
