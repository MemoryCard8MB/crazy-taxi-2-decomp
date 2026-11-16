/* Straight-line functions with calls and guards (batch gen_ba): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o12C_float { char p[0x12C]; float v; };
struct o134_float { char p[0x134]; float v; };
struct o138_float { char p[0x138]; float v; };
struct o13C_float { char p[0x13C]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o150_float { char p[0x150]; float v; };
struct o160_float { char p[0x160]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o198_float { char p[0x198]; float v; };
struct o19C_short { char p[0x19C]; short v; };
struct o19C_ushort { char p[0x19C]; unsigned short v; };
struct o19E_short { char p[0x19E]; short v; };
struct o19E_ushort { char p[0x19E]; unsigned short v; };
struct o1A0_short { char p[0x1A0]; short v; };
struct o1A0_ushort { char p[0x1A0]; unsigned short v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_float { char p[0x20]; float v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_int { char p[0x28]; int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o38_int { char p[0x38]; int v; };
struct o3B4_int { char p[0x3B4]; int v; };
struct o3C_int { char p[0x3C]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o44_float { char p[0x44]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_int { char p[0x54]; int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o88_short { char p[0x88]; short v; };
struct o88_ushort { char p[0x88]; unsigned short v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oF8_short { char p[0xF8]; short v; };
struct oF8_ushort { char p[0xF8]; unsigned short v; };
struct oFA_short { char p[0xFA]; short v; };
struct oFA_uchar { char p[0xFA]; unsigned char v; };
struct oFA_ushort { char p[0xFA]; unsigned short v; };
struct oFC_short { char p[0xFC]; short v; };
struct oFC_ushort { char p[0xFC]; unsigned short v; };
struct oFE_short { char p[0xFE]; short v; };
struct oFE_ushort { char p[0xFE]; unsigned short v; };
float FUN_0c020dbc(int, int, int, int, int);
int FUN_0c022884(int);
int FUN_0c027f28(int);
int FUN_0c027fdc(float);
int FUN_0c02803a(int, int, int, int);
int FUN_0c03341c(float);
int FUN_0c035560(int, int, int, int, int, int, float, float);
int FUN_0c03ea54(void);
int FUN_0c03ec48(int, int, int);
int FUN_0c03ed46(int);
int FUN_0c03f154(int);
int FUN_0c03f4bc(int, int, int, int, float, float, float, float, float, float);
int FUN_0c050740(void);
int FUN_0c057f3c(int);
int FUN_0c058aa0(int, int, int, int);
int FUN_0c058f64(int, int, int, int);
int FUN_0c07ada0(int, int);
int Voice_ShutUp(int);
int kmiAllocSysConfig(int, float, float, float, float, float, float);
int kmiChkActiveListType(int, int, int, int, int);
int kmiCopyDummyGlobalData(int);
int kmiGetDisplayData(int, int, int);
int kmiGetNativeRegOBPSize(int);
int kmiGetPackOBPParam(int, int, int, int, int, int);
int kmiGetVertexBasePointer(int, int, int, int, int, int, int);
int kmiSetTAEnvironment(int, int, int, int, int);
int kmiTAallocEx(int, int, int);
int ndPuru2Check(int);
float nlLength(int, int);
int pdGetPeripheral(int);
int pdVibStart(int, int, int);
int pfCrazyBoxRecordComboPut(int, int, int, int);
int pfSize(float, float);
int pfTextCenterPut(int, int, int);
int pfTextPut(int, int, int);
int syCacheOCWB(int, int);
float FUN_0c021040(int a4, int a5);
int FUN_0c0540fc(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8);
int FUN_0c012ac4(int a4);
int FUN_0c027408(int a4);
int FUN_0c057bb4(int a4);
int FUN_0c0228f0(int a4, int a5, int a6, int a7);
int kmCreateVertexBuffer(int a4, int a5, int a6, int a7, int a8, float f4, float f5, float f6, float f7, float f8, float f9);

float FUN_0c021040(int a4, int a5)
{
    int stk[14];

    register int R1;
    register int R2;
    register int R6;
    register int R7;
    register float F13;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_10;
    register int v0_11;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    v0_3 = a4;
    v0_6 = a5;
    *(unsigned int *)(((int)stk + 24)) = v0_6;
    v0_0 = (0xC27091C);
    v0_1 = (0xC073B60);
    if (((*(int *)0xC1EC71C) != 2)) goto L_C021070;
    w0_1 = ((nlLength(v0_3, (*(int *)(((int)stk + 24))))));
    L_C021458:;
    return w0_1;
    L_C021070:;
    v0_1 = (0x0);
    if (((*(int *)0xC1EC71C) != 0)) goto L_C021080;
    w0_0 = (250.0f);
    L_C021084:;
    v0_1 = v0_1;
    *(int *)((int)stk + 4) = v0_1;
    w0_1 = FUN_0c020dbc(v0_3, (((int)stk + 4) + 0x28), (((int)stk + 4) + 0x10), (((int)stk + 4) + 0x4), v0_1);
    *(int *)((int)stk + 0) = 0x0;
    w0_1 = ((w0_1 + (FUN_0c020dbc((*(int *)(((int)stk + 24))), (((int)stk + 0) + 0x20), (((int)stk + 0) + 0x10), (((int)stk + 0) + 0xC), 0x0))));
    v0_1 = (*(int *)(((int)stk + 20))) != (*(int *)(((int)stk + 16)));     /* manual: after the call, which fills these two words through its r6 (the original compares at 0C0210B0, after the bsr); the generator had moved the compare before it */
    if (v0_1) goto L_C0210C4;
    v0_0 = *(int *)(((int)stk + 8));
    v0_1 = *(int *)(((int)stk + 12));
    w0_2 = (_builtin_fabsf((float)(v0_0 - v0_1)));
    FPUL_ = ((v0_0 - v0_1));
    L_C0211F2:;
    w0_1 = w0_1;
    w0_1 = w0_1 + w0_0 * w0_2;
    w0_1 = (w0_1);
    goto L_C021458;
    L_C0210C4:;
    v0_2 = *(int *)(((int)stk + 20));
    v0_4 = *(int *)((v0_0 + 0x0));
    v0_1 = (((((v0_2 << 1) + v0_2) << 2) + v0_4));
    v0_3 = (0xFFFFFFFF);
    if (((*(int *)(((*(int *)((((((v0_2 << 1) + v0_2) << 2) + v0_4) + 0x8))) + 0x4))) == (*(int *)(((int)stk + 16))))) goto L_C0210F2;
    if (((*(int *)(((*(int *)((v0_1 + 0x8))) + 0x8))) == (*(int *)(((int)stk + 16))))) goto L_C0210F2;
    if (((*(int *)(((*(int *)((v0_1 + 0x8))) + 0xC))) != (*(int *)(((int)stk + 16))))) goto L_C0210F4;
    L_C0210F2:;
    v0_3 = (0x1);
    L_C0210F4:;
    if (((*(int *)(((*(int *)((v0_1 + 0x8))) + 0x10))) != (*(int *)(((int)stk + 16))))) goto L_C02111C;
    if ((v0_3 == -1)) goto L_C021190;
    v0_2 = *(int *)(((*(int *)((v0_1 + 0x4))) + 0x0));
    if (((int)(*(int *)(((int)stk + 8))) >= (int)(((int)((unsigned int)((int)((unsigned int)(v0_2 - 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(v0_2 - 1))) ? 1u : 0u))) >> 1))) goto L_C021192;
    L_C021190:;
    v0_3 = (0x2);
    L_C021192:;
    v0_2 = *(int *)(((int)stk + 16));
    v0_2 = (((((v0_2 << 1) + v0_2) << 2) + (*(int *)((v0_0 + 0x0)))));
    if ((v0_3 == -1)) goto L_C021208;
    v0_0 = (v0_3);
    if ((v0_3 != 1)) goto L_C0211BA;
    FPUL_ = ((((*(int *)(((*(int *)((v0_1 + 0x4))) + 0x0))) - (*(int *)(((int)stk + 8)))) - 1));
    L_C0211BE:;
    v0_0 = *(int *)((v0_2 + 0x8));
    w0_1 = w0_1;
    w0_1 = w0_1 + w0_0 * (float)FPUL_;
    v0_3 = (v0_0);
    v0_6 = ((v0_0 + 0x10));
    w0_1 = (w0_1);
    L_C0211FA:;
    v0_0 = (unsigned int)(v0_3 + 0x4) < (unsigned int)((*(int *)((v0_2 + 0x8))) + 0x10);
    v0_3 = ((v0_3 + 0x4));
    if (v0_0) goto L_C0211CE;
    goto L_C021458;
    L_C0211CE:;
    if (((*(int *)((v0_3 + 0x0))) != (*(int *)(((int)stk + 20))))) goto L_C0211E4;
    FPUL_ = ((((*(int *)(((*(int *)((v0_2 + 0x4))) + 0x0))) - (*(int *)(((int)stk + 12)))) - 1));
    L_C0211F0:;
    w0_2 = ((float)FPUL_);
    goto L_C0211F2;
    L_C0211E4:;
    if (((*(int *)((v0_6 + 0x0))) != (*(int *)(((int)stk + 20))))) goto L_C0211F8;
    FPUL_ = ((*(int *)(((int)stk + 12))));
    goto L_C0211F0;
    L_C0211F8:;
    v0_6 = ((v0_6 + 0x4));
    goto L_C0211FA;
    L_C0211BA:;
    FPUL_ = ((*(int *)(((int)stk + 8))));
    goto L_C0211BE;
    L_C021208:;
    v0_4 = *(int *)((v0_1 + 0x8));
    *(unsigned int *)(((int)stk + 24)) = (v0_4 + 0x10);
    *(unsigned int *)(((int)stk + 28)) = (v0_4 + 0x4);
    v0_3 = (v0_4);
    v0_3 = ((v0_4 + 0x10));
    v0_4 = (0x0);
    w0_2 = (999999.875f);
    L_C021438:;
    if (((int)v0_4 >= (int)0x3)) goto L_C021442;
    if (!(((*(int *)(((v0_4 << 2) + ((*(int *)((v0_1 + 0x8))) + 0x4)))) != -1))) goto L_C02133A;
    v0_5 = *(int *)((v0_0 + 0x0));
    v0_6 = *(int *)(((*(int *)(((int)stk + 28))) + 0x0));
    w0_4 = nlLength((*(int *)((((((v0_6 << 1) + v0_6) << 2) + v0_5) + 0x0))), (*(int *)((v0_2 + 0x0))));
    v0_5 = (((((v0_6 << 1) + v0_6) << 2) + v0_5));
    v0_6 = ((*(int *)((v0_2 + 0x4))));
    w0_3 = (w0_4);
    if ((!(w0_2 > w0_4))) goto L_C021272;
    v0_7 = *(int *)(((int)stk + 8));
    v0_8 = *(int *)(((*(int *)((v0_1 + 0x4))) + 0x0));
    v0_9 = *(int *)(((*(int *)((v0_5 + 0x4))) + 0x0));
    v0_10 = *(int *)(((int)stk + 12));
    F13 = (((float)((((v0_8 - v0_7) + v0_9) + v0_10) - 1) * w0_0));
    w0_2 = (w0_3);
    FPUL_ = (((((v0_8 - v0_7) + v0_9) + v0_10) - 1));
    goto L_C021272;
    L_C02133A:;
    if (((*(int *)(((*(int *)(((int)stk + 24))) + 0x0))) == -1)) goto L_C021428;
    v0_5 = *(int *)((v0_3 + 0x0));
    v0_6 = *(int *)((v0_0 + 0x0));
    w0_4 = nlLength((*(int *)((((((v0_5 << 1) + v0_5) << 2) + v0_6) + 0x0))), (*(int *)((v0_2 + 0x0))));
    v0_5 = (((((v0_5 << 1) + v0_5) << 2) + v0_6));
    v0_6 = ((*(int *)((v0_2 + 0x4))));
    w0_3 = (w0_4);
    if ((!(w0_2 > w0_4))) goto L_C021374;
    v0_7 = *(int *)(((int)stk + 8));
    v0_8 = *(int *)(((*(int *)((v0_5 + 0x4))) + 0x0));
    v0_9 = *(int *)(((int)stk + 12));
    F13 = (((float)((v0_7 + v0_8) + v0_9) * w0_0));
    w0_2 = (w0_3);
    FPUL_ = (((v0_7 + v0_8) + v0_9));
    L_C021374:;
    v0_6 = *(int *)((v0_6 + 0x0));
    w0_4 = nlLength((*(int *)((v0_5 + 0x0))), (((((v0_6 << 1) + v0_6) << 2) + (*(int *)((v0_2 + 0x0)))) - 12));
    v0_6 = ((*(int *)((v0_2 + 0x0))));
    w0_3 = (w0_4);
    if ((!(w0_2 > w0_4))) goto L_C0213AE;
    v0_7 = *(int *)(((int)stk + 8));
    v0_8 = *(int *)(((*(int *)((v0_5 + 0x4))) + 0x0));
    v0_9 = *(int *)(((*(int *)((v0_2 + 0x4))) + 0x0));
    v0_10 = *(int *)(((int)stk + 12));
    F13 = (((float)((((v0_7 + v0_8) + v0_9) - v0_10) - 1) * w0_0));
    w0_2 = (w0_3);
    FPUL_ = (((((v0_7 + v0_8) + v0_9) - v0_10) - 1));
    L_C0213AE:;
    v0_7 = *(int *)(((*(int *)((v0_5 + 0x4))) + 0x0));
    w0_4 = nlLength((((((v0_7 << 1) + v0_7) << 2) + (*(int *)((v0_5 + 0x0)))) - 12), v0_6);
    v0_6 = ((*(int *)((v0_2 + 0x4))));
    w0_3 = (w0_4);
    if ((!(w0_2 > w0_4))) goto L_C0213E0;
    v0_7 = *(int *)(((int)stk + 8));
    v0_8 = *(int *)(((*(int *)((v0_5 + 0x4))) + 0x0));
    v0_9 = *(int *)(((int)stk + 12));
    F13 = (((float)((v0_7 + v0_8) + v0_9) * w0_0));
    w0_2 = (w0_3);
    FPUL_ = (((v0_7 + v0_8) + v0_9));
    L_C0213E0:;
    v0_6 = *(int *)((v0_6 + 0x0));
    v0_7 = *(int *)(((*(int *)((v0_5 + 0x4))) + 0x0));
    w0_4 = nlLength((((((v0_7 << 1) + v0_7) << 2) + (*(int *)((v0_5 + 0x0)))) - 12), (((((v0_6 << 1) + v0_6) << 2) + (*(int *)((v0_2 + 0x0)))) - 12));
    w0_3 = (w0_4);
    if ((!(w0_2 > w0_4))) goto L_C021428;
    v0_6 = *(int *)(((int)stk + 8));
    v0_5 = *(int *)(((*(int *)((v0_5 + 0x4))) + 0x0));
    v0_7 = *(int *)(((*(int *)((v0_2 + 0x4))) + 0x0));
    v0_8 = *(int *)(((int)stk + 12));
    F13 = (((float)((((v0_6 + v0_5) + v0_7) - v0_8) - 1) * w0_0));
    w0_2 = (w0_3);
    FPUL_ = (((((v0_6 + v0_5) + v0_7) - v0_8) - 1));
    L_C021428:;
    *(unsigned int *)(((int)stk + 24)) = ((*(int *)(((int)stk + 24))) + 0x4);
    *(unsigned int *)(((int)stk + 28)) = ((*(int *)(((int)stk + 28))) + 0x4);
    v0_3 = ((v0_3 + 0x4));
    v0_4 = ((v0_4 + 0x1));
    goto L_C021438;
    L_C021272:;
    v0_6 = *(int *)((v0_6 + 0x0));
    w0_4 = nlLength((*(int *)((v0_5 + 0x0))), (((((v0_6 << 1) + v0_6) << 2) + (*(int *)((v0_2 + 0x0)))) - 12));
    v0_6 = ((*(int *)((v0_2 + 0x0))));
    w0_3 = (w0_4);
    if ((!(w0_2 > w0_4))) goto L_C0212B2;
    v0_7 = *(int *)(((int)stk + 8));
    v0_8 = *(int *)(((*(int *)((v0_1 + 0x4))) + 0x0));
    v0_9 = *(int *)(((*(int *)((v0_5 + 0x4))) + 0x0));
    v0_10 = *(int *)(((*(int *)((v0_2 + 0x4))) + 0x0));
    v0_11 = *(int *)(((int)stk + 12));
    F13 = (((float)(((((v0_8 - v0_7) + v0_9) + v0_10) - v0_11) - 2) * w0_0));
    w0_2 = (w0_3);
    FPUL_ = ((((((v0_8 - v0_7) + v0_9) + v0_10) - v0_11) - 2));
    L_C0212B2:;
    v0_7 = *(int *)(((*(int *)((v0_5 + 0x4))) + 0x0));
    w0_4 = nlLength((((((v0_7 << 1) + v0_7) << 2) + (*(int *)((v0_5 + 0x0)))) - 12), v0_6);
    v0_6 = ((*(int *)((v0_2 + 0x4))));
    w0_3 = (w0_4);
    if ((!(w0_2 > w0_4))) goto L_C0212EC;
    v0_7 = *(int *)(((int)stk + 8));
    v0_8 = *(int *)(((*(int *)((v0_1 + 0x4))) + 0x0));
    v0_9 = *(int *)(((*(int *)((v0_5 + 0x4))) + 0x0));
    v0_10 = *(int *)(((int)stk + 12));
    F13 = (((float)((((v0_8 - v0_7) + v0_9) + v0_10) - 1) * w0_0));
    w0_2 = (w0_3);
    FPUL_ = (((((v0_8 - v0_7) + v0_9) + v0_10) - 1));
    L_C0212EC:;
    v0_6 = *(int *)((v0_6 + 0x0));
    v0_7 = *(int *)(((*(int *)((v0_5 + 0x4))) + 0x0));
    w0_4 = nlLength((((((v0_7 << 1) + v0_7) << 2) + (*(int *)((v0_5 + 0x0)))) - 12), (((((v0_6 << 1) + v0_6) << 2) + (*(int *)((v0_2 + 0x0)))) - 12));
    w0_3 = (w0_4);
    if ((!(w0_2 > w0_4))) goto L_C02133A;
    v0_6 = *(int *)(((int)stk + 8));
    v0_7 = *(int *)(((*(int *)((v0_1 + 0x4))) + 0x0));
    v0_5 = *(int *)(((*(int *)((v0_5 + 0x4))) + 0x0));
    v0_8 = *(int *)(((*(int *)((v0_2 + 0x4))) + 0x0));
    v0_9 = *(int *)(((int)stk + 12));
    F13 = (((float)(((((v0_7 - v0_6) + v0_5) + v0_8) - v0_9) - 2) * w0_0));
    w0_2 = (w0_3);
    FPUL_ = ((((((v0_7 - v0_6) + v0_5) + v0_8) - v0_9) - 2));
    goto L_C02133A;
    L_C021442:;
    if (((*(int *)0xC1EC71C) != 0)) goto L_C021450;
    v0_0 = (0xC0214F4);
    w0_0 = (((((struct o0_float *)0xC0214F4)->v)));
    L_C021454:;
    w0_3 = F13;
    w0_3 = w0_3 + w0_0 * w0_2;
    w0_1 = ((w0_1 + w0_3));
    goto L_C021458;
    L_C021450:;
    v0_0 = (0xC0214F8);
    w0_0 = (((((struct o4_float *)0xC0214F4)->v)));
    goto L_C021454;
    L_C02111C:;
    if (((*(int *)(((*(int *)((v0_1 + 0x8))) + 0x14))) != (*(int *)(((int)stk + 16))))) goto L_C02116C;
    if ((v0_3 == -1)) goto L_C021190;
    v0_2 = *(int *)(((*(int *)((v0_1 + 0x4))) + 0x0));
    if (((int)(*(int *)(((int)stk + 8))) >= (int)(((int)((unsigned int)((int)((unsigned int)(v0_2 - 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(v0_2 - 1))) ? 1u : 0u))) >> 1))) goto L_C021192;
    goto L_C021190;
    L_C02116C:;
    if (((*(int *)(((*(int *)((v0_1 + 0x8))) + 0x18))) != (*(int *)(((int)stk + 16))))) goto L_C021192;
    if ((v0_3 == -1)) goto L_C021190;
    v0_2 = *(int *)(((*(int *)((v0_1 + 0x4))) + 0x0));
    if (((int)(*(int *)(((int)stk + 8))) >= (int)(((int)((unsigned int)((int)((unsigned int)(v0_2 - 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(v0_2 - 1))) ? 1u : 0u))) >> 1))) goto L_C021192;
    goto L_C021190;
    L_C021080:;
    w0_0 = (290.0f);
    goto L_C021084;
}

int FUN_0c0540fc(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8)
{
    register int t0;
    int t1;
    int t2;
    register int t3;
    int t4;
    int t5;
    register int t6;
    int t7;
    register int t8;
    int t9;
    int t10;
    register int t11;
    register int t12;
    register int t13;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    t12 = (((struct o3C_int *)0xC2B2DAC)->v);
    u0 = (((struct o0_float *)0xC2B2DAC)->v);
    if (t12 == 0) {
        (((struct o4_float *)0xC2B2DEC)->v) = (u0 + 512.0f);
        (((struct o10_float *)0xC2B2DEC)->v) = (((((struct o10_float *)0xC2B2DAC)->v)) * 13.0f);
        (((struct o8_float *)0xC2B2DEC)->v) = (((((struct o4_float *)0xC2B2DAC)->v)) + 32.0f);
        (((struct o0_uint *)0xC2B2DEC)->v) = 0x14F;
        t13 = ((int (*)(int, int, int, int, float, float, float, float, float))(FUN_0c07ada0))(0xC2B2DEC, 0x14F, a6, a7, (u0 + 512.0f), 13.0f, f6, f7, f8);
        (((struct o8_float *)0xC2B2DEC)->v) = (((((struct o4_float *)0xC2B2DAC)->v)) + 72.0f);
        (((struct o0_uint *)0xC2B2DEC)->v) = 0x154;
        t13 = ((int (*)(int))(FUN_0c07ada0))(0xC2B2DEC);
        (((struct o8_float *)0xC2B2DEC)->v) = (((((struct o4_float *)0xC2B2DAC)->v)) + 52.0f);
        (((struct o10_float *)0xC2B2DEC)->v) = (((((struct o10_float *)0xC2B2DAC)->v)) * 1.0f);
        (((struct o4_float *)0xC2B2DEC)->v) = ((((((struct o0_float *)0xC2B2DAC)->v)) - ((((((struct o10_float *)0xC2B2DAC)->v)) * 112.0f))) + 512.0f);
        (((struct o0_uint *)0xC2B2DEC)->v) = 0x14C;
        t13 = ((int (*)(int))(FUN_0c07ada0))(0xC2B2DEC);
        u1 = ((((struct o0_float *)0xC2B2DAC)->v));
        u1 = u1 + 112.0f * ((((struct o10_float *)0xC2B2DAC)->v));
        (((struct o4_float *)0xC2B2DEC)->v) = (u1 + 512.0f);
        (((struct o0_uint *)0xC2B2DEC)->v) = 0x151;
        t13 = ((int (*)(int))(FUN_0c07ada0))(0xC2B2DEC);
        (((struct o8_float *)0xC2B2DEC)->v) = (((((struct o4_float *)0xC2B2DAC)->v)) + 32.0f);
        u1 = ((((struct o0_float *)0xC2B2DAC)->v));
        u1 = u1 + 112.0f * ((((struct o10_float *)0xC2B2DAC)->v));
        (((struct o4_float *)0xC2B2DEC)->v) = (u1 + 512.0f);
        (((struct o0_uint *)0xC2B2DEC)->v) = 0x150;
        t13 = ((int (*)(int))(FUN_0c07ada0))(0xC2B2DEC);
        (((struct o4_float *)0xC2B2DEC)->v) = ((((((struct o0_float *)0xC2B2DAC)->v)) - ((((((struct o10_float *)0xC2B2DAC)->v)) * 112.0f))) + 512.0f);
        (((struct o0_uint *)0xC2B2DEC)->v) = 0x14E;
        t13 = ((int (*)(int))(FUN_0c07ada0))(0xC2B2DEC);
        (((struct o8_float *)0xC2B2DEC)->v) = (((((struct o4_float *)0xC2B2DAC)->v)) + 72.0f);
        u1 = ((((struct o0_float *)0xC2B2DAC)->v));
        u1 = u1 + 112.0f * ((((struct o10_float *)0xC2B2DAC)->v));
        (((struct o4_float *)0xC2B2DEC)->v) = (u1 + 512.0f);
        (((struct o0_uint *)0xC2B2DEC)->v) = 0x14B;
        t13 = ((int (*)(int))(FUN_0c07ada0))(0xC2B2DEC);
        (((struct o4_float *)0xC2B2DEC)->v) = ((((((struct o0_float *)0xC2B2DAC)->v)) - ((((((struct o10_float *)0xC2B2DAC)->v)) * 112.0f))) + 512.0f);
    } else {
        if ((((int)((((struct o38_int *)0xC2B2DAC)->v)) <= (int)0x2) && ((int)t12 <= (int)0x2)) || (t0 = *(int *)0xC1ECD10, t0 != 0)) {
            (((struct o4_float *)0xC2B2DEC)->v) = (u0 + 512.0f);
            u1 = (u0 + 512.0f);
            u2 = 13.0f;
        } else {
            u3 = (((((struct o18_float *)0xC2B2DAC)->v)) * 48.0f);
            (((struct o4_float *)0xC2B2DEC)->v) = ((u0 - u3) + 512.0f);
            u4 = 13.0f;
            u4 = u4 + 6.0f * ((((struct o18_float *)0xC2B2DAC)->v));
            u1 = ((u0 - u3) + 512.0f);
            u2 = u4;
        }
        (((struct o10_float *)0xC2B2DEC)->v) = u2;
        (((struct o8_float *)0xC2B2DEC)->v) = (((((struct o4_float *)0xC2B2DAC)->v)) + 32.0f);
        (((struct o0_uint *)0xC2B2DEC)->v) = 0x14F;
        t0 = ((int (*)(int, int, int, int, float, float, float, float, float))(FUN_0c07ada0))(0xC2B2DEC, 0x14F, a6, a7, u1, u2, f6, f7, f8);
        if (((int)((((struct o38_int *)0xC2B2DAC)->v)) <= (int)0x1) && (t1 = (((struct o3C_int *)0xC2B2DAC)->v), (int)t1 <= (int)0x1)) {
            u0 = ((((struct o4_float *)0xC2B2DAC)->v));
        } else {
            u1 = ((((struct o4_float *)0xC2B2DAC)->v));
            u1 = u1 + 32.0f * ((((struct o14_float *)0xC2B2DAC)->v));
            u0 = u1;
        }
        (((struct o8_float *)0xC2B2DEC)->v) = (u0 + 72.0f);
        (((struct o0_uint *)0xC2B2DEC)->v) = 0x154;
        t0 = ((int (*)(int))(FUN_0c07ada0))(0xC2B2DEC);
        (((struct o8_float *)0xC2B2DEC)->v) = (((((struct o4_float *)0xC2B2DAC)->v)) + 52.0f);
        (((struct o10_float *)0xC2B2DEC)->v) = 1.0f;
        if ((((int)((((struct o38_int *)0xC2B2DAC)->v)) <= (int)0x2) && (t2 = (((struct o3C_int *)0xC2B2DAC)->v), (int)t2 <= (int)0x2)) || (t3 = *(int *)0xC1ECD10, t3 != 0)) {
            (((struct o4_float *)0xC2B2DEC)->v) = (((((struct o0_float *)0xC2B2DAC)->v)) + 400.0f);
        } else {
            (((struct o4_float *)0xC2B2DEC)->v) = ((((((struct o0_float *)0xC2B2DAC)->v)) - ((((((struct o18_float *)0xC2B2DAC)->v)) * 86.0f))) + 400.0f);
        }
        (((struct o0_uint *)0xC2B2DEC)->v) = 0x14C;
        t0 = ((int (*)(int))(FUN_0c07ada0))(0xC2B2DEC);
        (((struct o4_float *)0xC2B2DEC)->v) = (((((struct o0_float *)0xC2B2DAC)->v)) + 624.0f);
        (((struct o0_uint *)0xC2B2DEC)->v) = 0x151;
        t0 = ((int (*)(int))(FUN_0c07ada0))(0xC2B2DEC);
        if (((int)((((struct o38_int *)0xC2B2DAC)->v)) <= (int)0x1) && (t4 = (((struct o3C_int *)0xC2B2DAC)->v), (int)t4 <= (int)0x1)) {
        } else {
            u0 = ((((struct o4_float *)0xC2B2DAC)->v));
            u0 = u0 + 32.0f * ((((struct o14_float *)0xC2B2DAC)->v));
            (((struct o8_float *)0xC2B2DEC)->v) = (u0 + 52.0f);
            if ((((int)((((struct o38_int *)0xC2B2DAC)->v)) <= (int)0x2) && (t5 = (((struct o3C_int *)0xC2B2DAC)->v), (int)t5 <= (int)0x2)) || (t6 = *(int *)0xC1ECD10, t6 != 0)) {
                (((struct o4_float *)0xC2B2DEC)->v) = (((((struct o0_float *)0xC2B2DAC)->v)) + 400.0f);
            } else {
                (((struct o4_float *)0xC2B2DEC)->v) = ((((((struct o0_float *)0xC2B2DAC)->v)) - ((((((struct o18_float *)0xC2B2DAC)->v)) * 86.0f))) + 400.0f);
            }
            (((struct o0_uint *)0xC2B2DEC)->v) = 0x14D;
            t0 = ((int (*)(int))(FUN_0c07ada0))(0xC2B2DEC);
            (((struct o4_float *)0xC2B2DEC)->v) = (((((struct o0_float *)0xC2B2DAC)->v)) + 624.0f);
            (((struct o0_uint *)0xC2B2DEC)->v) = 0x152;
            t0 = ((int (*)(int))(FUN_0c07ada0))(0xC2B2DEC);
        }
        (((struct o8_float *)0xC2B2DEC)->v) = (((((struct o4_float *)0xC2B2DAC)->v)) + 32.0f);
        (((struct o4_float *)0xC2B2DEC)->v) = (((((struct o0_float *)0xC2B2DAC)->v)) + 624.0f);
        (((struct o0_uint *)0xC2B2DEC)->v) = 0x150;
        t0 = ((int (*)(int))(FUN_0c07ada0))(0xC2B2DEC);
        if ((((int)((((struct o38_int *)0xC2B2DAC)->v)) <= (int)0x2) && (t7 = (((struct o3C_int *)0xC2B2DAC)->v), (int)t7 <= (int)0x2)) || (t8 = *(int *)0xC1ECD10, t8 != 0)) {
            (((struct o4_float *)0xC2B2DEC)->v) = (((((struct o0_float *)0xC2B2DAC)->v)) + 400.0f);
        } else {
            (((struct o4_float *)0xC2B2DEC)->v) = ((((((struct o0_float *)0xC2B2DAC)->v)) - ((((((struct o18_float *)0xC2B2DAC)->v)) * 86.0f))) + 400.0f);
        }
        (((struct o0_uint *)0xC2B2DEC)->v) = 0x14E;
        t0 = ((int (*)(int))(FUN_0c07ada0))(0xC2B2DEC);
        u0 = (((struct o4_float *)0xC2B2DAC)->v);
        if (((int)((((struct o38_int *)0xC2B2DAC)->v)) <= (int)0x1) && (t9 = (((struct o3C_int *)0xC2B2DAC)->v), (int)t9 <= (int)0x1)) {
            (((struct o8_float *)0xC2B2DEC)->v) = (u0 + 72.0f);
            u1 = (u0 + 72.0f);
        } else {
            u2 = u0;
            u2 = u2 + 32.0f * ((((struct o14_float *)0xC2B2DAC)->v));
            (((struct o8_float *)0xC2B2DEC)->v) = (u2 + 72.0f);
            u1 = u2;
        }
        (((struct o4_float *)0xC2B2DEC)->v) = (((((struct o0_float *)0xC2B2DAC)->v)) + 624.0f);
        (((struct o0_uint *)0xC2B2DEC)->v) = 0x14B;
        t0 = ((int (*)(int, float))(FUN_0c07ada0))(0xC2B2DEC, u1);
        u0 = (((struct o0_float *)0xC2B2DAC)->v);
        u1 = u0;
        if ((((int)((((struct o38_int *)0xC2B2DAC)->v)) <= (int)0x2) && (t10 = (((struct o3C_int *)0xC2B2DAC)->v), (int)t10 <= (int)0x2)) || (t11 = *(int *)0xC1ECD10, t11 != 0)) {
        } else {
            u1 = (u0 - ((((((struct o18_float *)0xC2B2DAC)->v)) * 86.0f)));
        }
        (((struct o4_float *)0xC2B2DEC)->v) = (u1 + 400.0f);
        u0 = (u1 + 400.0f);
    }
    (((struct o0_uint *)0xC2B2DEC)->v) = 0x153;
    return (((int (*)(int, float))(FUN_0c07ada0))(0xC2B2DEC, u0));
}



int FUN_0c057bb4(int a4)
{
    int t47;

    register int R1;
    int R3;
    int R6;
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
    v0_7 = a4;
    v0_0 = (0xC2B32DC);
    v0_6 = (0xC2B32E0);
    v0_1 = (0xC2B32B0);
    v0_2 = (v0_7);
    v0_7 = (((((struct o4_int *)0xC2B32DC)->v)));
    v0_5 = (0xC132454);
    v0_3 = (0xC2B32B4);
    if ((((((struct o0_int *)0xC1EC740)->v)) != 1)) goto L_C057BEA;
    if ((((((struct o4_int *)0xC1EC740)->v)) == 1)) goto L_C057BFA;
    L_C057BEA:;
    if ((((((struct o0_int *)0xC1EC740)->v)) != 3)) goto L_C057C02;
    if ((((((struct o4_int *)0xC1EC740)->v)) != 1)) goto L_C057C02;
    L_C057BFA:;
    if (!(((*(int *)0xC2AC2F0) != 1))) goto L_C057C02;
    v0_4 = (v0_7);
    if ((v0_7 == 1)) goto L_C057C24;
    *(unsigned int *)((v0_6 + 0x0)) = 0x1;
    goto L_C057C24;
    L_C057C02:;
    v0_4 = (v0_7);
    if (!((v0_7 == 1))) goto L_C057F28;
    v0_1 = FUN_0c057f3c(v0_2);
    *(unsigned int *)((v0_0 + 0x0)) = 0x0;
    *(unsigned int *)((v0_6 + 0x0)) = 0x2;
    v0_4 = (v0_1);
    goto L_C057F28;
    L_C057F28:;
    return v0_4;
    L_C057C24:;
    if (((*(signed char *)0xC28EDA0) != 0)) goto L_C057C30;
    goto L_C057F28;
    L_C057C30:;
    v0_7 = (0xC2B32E4);
    if (((*(int *)0xC2A464C) == 0)) goto L_C057C5A;
    v0_6 = (((struct o0_int *)0xC2B32DC)->v);
    v0_4 = (v0_6);
    if (((v0_6 & 1) != 0)) goto L_C057C5A;
    v0_3 = *(int *)((v0_7 + 0x0));
    *(unsigned int *)((v0_7 + 0x0)) = (v0_3 + 0x1);
    if (!(((int)(v0_3 + 0x1) < (int)0xA))) goto L_C057F0E;
    v0_4 = ((FUN_0c057f3c(v0_2)));
    goto L_C057F0E;
    L_C057F0E:;
    if (((int)(*(int *)((v0_1 + 0x0))) <= 0)) goto L_C057F1A;
    *(unsigned int *)((v0_1 + 0x0)) = ((*(int *)((v0_1 + 0x0))) - 1);
    L_C057F1A:;
    if (((*(int *)((v0_1 + 0x0))) != 0)) goto L_C057F28;
    v0_1 = FUN_0c057f3c(v0_2);
    *(unsigned int *)((v0_0 + 0x0)) = 0x0;
    v0_4 = (v0_1);
    goto L_C057F28;
    L_C057C5A:;
    *(unsigned int *)((v0_7 + 0x0)) = 0x0;
    v0_6 = ndPuru2Check(v0_2);
    v0_4 = (v0_6);
    if ((v0_6 != 0)) goto L_C057C6A;
    goto L_C057F28;
    L_C057C6A:;
    t47 = *(int *)((v0_0 + 0x0));
    v0_4 = (0xC14D6FA);
    v0_6 = (0xC1324C8);
    v0_7 = (0xC2B32B8);
    v0_8 = (((((struct oC_int *)0xC2B32DC)->v)));
    R6 = (t47);
    if (((0x10000000 & t47) == 0)) goto L_C057CC6;
    v0_4 = (v0_8);
    R6 = (0xC132568);
    if ((v0_8 != 1)) goto L_C057CA6;
    { struct mvb8 { char b[8]; }; *(struct mvb8 *)(v0_7) = *(struct mvb8 *)((v0_6 + 0x40)); }
    *(unsigned char *)((v0_7 + 0x2)) = (0xFFFFFFFF - (*(int *)((R6 + 0x0))));
    v0_8 = (0xFFFFFFF9);
    if (((int)(*(signed char *)((v0_7 + 0x2))) >= (int)0xFFFFFFF9)) goto L_C057CB4;
    *(unsigned char *)((v0_7 + 0x2)) = v0_8;
    L_C057CB4:;
    v0_4 = pdVibStart(v0_2, 0xC2B32B8, 0x1);
    *(unsigned int *)((v0_3 + 0x0)) = 0x10000000;
    *(unsigned int *)((v0_1 + 0x0)) = (*(int *)((v0_5 + 0x0)));
    v0_4 = (v0_4);
    L_C057EC0:;
    v0_3 = (0x0);
    L_C057EC2:;
    *(unsigned int *)((v0_0 + 0x0)) = v0_3;
    goto L_C057F0E;
    L_C057CA6:;
    { struct mvb8 { char b[8]; }; *(struct mvb8 *)(v0_7) = *(struct mvb8 *)(v0_6); }
    *(unsigned char *)((v0_7 + 0x2)) = (*(int *)((R6 + 0x0)));
    goto L_C057CB4;
    L_C057CC6:;
    v0_9 = ((*(int *)((v0_3 + 0x0))));
    if (((0x1000000 & R6) == 0)) goto L_C057D06;
    v0_4 = (0x1000000);
    if (((int)v0_9 > (int)0x1000000)) goto L_C057CF8;
    if (!(((*(int *)((v0_1 + 0x0))) == 0))) goto L_C057E5C;
    v0_7 = (v0_2);
    if ((v0_8 != 1)) goto L_C057CEE;
    v0_8 = ((v0_6 + 0x48));
    R6 = (0x1);
    goto L_C057CF4;
    L_C057E5C:;
    v0_4 = ((FUN_0c057f3c(v0_2)));
    goto L_C057F28;
    L_C057CF4:;
    v0_4 = ((pdVibStart(v0_7, v0_8, R6)));
    L_C057CF8:;
    *(unsigned int *)((v0_3 + 0x0)) = 0x1000000;
    *(unsigned int *)((v0_1 + 0x0)) = (*(int *)((v0_5 + 0x0)));
    R3 = (0xFEEEEEEE);
    L_C057E44:;
    v0_3 = (((*(int *)((v0_0 + 0x0))) & R3));
    goto L_C057EC2;
    L_C057CEE:;
    v0_8 = ((v0_6 + 0x8));
    R6 = (0x1);
    goto L_C057CF4;
    L_C057D06:;
    v0_4 = (0x100000);
    if (((0x100000 & R6) == 0)) goto L_C057D44;
    if (((int)v0_9 > (int)0x100000)) goto L_C057D36;
    if (((*(int *)((v0_1 + 0x0))) == 0)) goto L_C057D1C;
    goto L_C057E5C;
    L_C057D1C:;
    v0_7 = (v0_2);
    if ((v0_8 != 1)) goto L_C057D2C;
    v0_8 = ((v0_6 + 0x50));
    R6 = (0x1);
    L_C057D32:;
    v0_4 = ((pdVibStart(v0_7, v0_8, R6)));
    L_C057D36:;
    *(unsigned int *)((v0_3 + 0x0)) = 0x100000;
    *(unsigned int *)((v0_1 + 0x0)) = (*(int *)((v0_5 + 0x0)));
    R3 = (0xFFEEEEEE);
    L_C057E88:;
    *(unsigned int *)((v0_0 + 0x0)) = ((*(int *)((v0_0 + 0x0))) & R3);
    goto L_C057F0E;
    L_C057D2C:;
    v0_8 = ((v0_6 + 0x10));
    R6 = (0x1);
    goto L_C057D32;
    L_C057D44:;
    v0_4 = (0x10000);
    if (((0x10000 & R6) == 0)) goto L_C057DE8;
    if (((int)v0_9 > (int)0x10000)) goto L_C057D74;
    if (((*(int *)((v0_1 + 0x0))) == 0)) goto L_C057D5A;
    goto L_C057E5C;
    L_C057D5A:;
    v0_7 = (v0_2);
    if ((v0_8 != 1)) goto L_C057D6A;
    v0_8 = ((v0_6 + 0x78));
    R6 = (0x1);
    L_C057D70:;
    v0_4 = ((pdVibStart(v0_7, v0_8, R6)));
    L_C057D74:;
    *(unsigned int *)((v0_3 + 0x0)) = 0x10000;
    *(unsigned int *)((v0_1 + 0x0)) = (*(int *)((v0_5 + 0x0)));
    R3 = (0xFFFEEEEE);
    goto L_C057E44;
    L_C057D6A:;
    v0_8 = ((v0_6 + 0x38));
    R6 = (0x1);
    goto L_C057D70;
    L_C057DE8:;
    v0_4 = (0x1000);
    if (((0x1000 & R6) == 0)) goto L_C057E4A;
    if (((int)v0_9 > (int)0x1000)) goto L_C057E3A;
    if (((*(int *)((v0_1 + 0x0))) != 0)) goto L_C057E5C;
    if (((*(int *)0xC132570) != 0)) goto L_C057E20;
    v0_7 = (v0_2);
    if ((v0_8 != 1)) goto L_C057E12;
    v0_8 = ((v0_6 + 0x58));
    R6 = (0x1);
    L_C057E18:;
    v0_4 = ((pdVibStart(v0_7, v0_8, R6)));
    L_C057E3A:;
    *(unsigned int *)((v0_3 + 0x0)) = 0x1000;
    *(unsigned int *)((v0_1 + 0x0)) = (*(int *)((v0_5 + 0x0)));
    R3 = (0xFFFFEEEE);
    goto L_C057E44;
    L_C057E12:;
    v0_8 = ((v0_6 + 0x18));
    R6 = (0x1);
    goto L_C057E18;
    L_C057E20:;
    v0_7 = (v0_2);
    if ((v0_8 != 1)) goto L_C057E30;
    v0_8 = ((v0_6 + 0x60));
    R6 = (0x1);
    L_C057E36:;
    v0_4 = ((pdVibStart(v0_7, v0_8, R6)));
    goto L_C057E3A;
    L_C057E30:;
    v0_8 = ((v0_6 + 0x20));
    R6 = (0x1);
    goto L_C057E36;
    L_C057E4A:;
    v0_4 = (0x100);
    if (((0x100 & R6) == 0)) goto L_C057E90;
    if (((int)v0_9 > (int)0x100)) goto L_C057E7E;
    if (((*(int *)((v0_1 + 0x0))) == 0)) goto L_C057E64;
    goto L_C057E5C;
    L_C057E64:;
    v0_7 = (v0_2);
    if ((v0_8 != 1)) goto L_C057E74;
    v0_8 = ((v0_6 + 0x68));
    R6 = (0x1);
    L_C057E7A:;
    v0_4 = ((pdVibStart(v0_7, v0_8, R6)));
    L_C057E7E:;
    *(unsigned int *)((v0_3 + 0x0)) = 0x100;
    *(unsigned int *)((v0_1 + 0x0)) = (*(int *)((v0_5 + 0x0)));
    R3 = (0xFFFFFEEE);
    goto L_C057E88;
    L_C057E74:;
    v0_8 = ((v0_6 + 0x28));
    R6 = (0x1);
    goto L_C057E7A;
    L_C057E90:;
    if (((R6 & 0x1) == 0)) goto L_C057EDC;
    *(unsigned char *)((v0_7 + 0x1)) = 0x80;
    *(unsigned char *)((v0_7 + 0x2)) = 0x4;
    *(unsigned char *)((v0_7 + 0x3)) = 0x7;
    *(unsigned char *)((v0_7 + 0x4)) = 0x1;
    syCacheOCWB(0xC2B32B8, 0x80);
    v0_4 = pdVibStart(v0_2, 0xC2B32B8, 0x1);
    *(unsigned int *)((v0_3 + 0x0)) = 0x1;
    *(unsigned int *)((v0_1 + 0x0)) = 0x3;
    v0_4 = (v0_4);
    goto L_C057EC0;
    L_C057EDC:;
    v0_5 = (((struct o0_int *)0xC1EC740)->v);
    v0_4 = (v0_5);
    if ((v0_5 != 1)) goto L_C057F0E;
    v0_5 = (((struct o4_int *)0xC1EC740)->v);
    v0_4 = (v0_5);
    if ((v0_5 != 1)) goto L_C057F0E;
    if (((*(int *)((v0_1 + 0x0))) != 0)) goto L_C057F0E;
    v0_4 = (v0_8);
    if ((v0_8 == 1)) goto L_C057F06;
    v0_5 = pdVibStart(v0_2, (v0_6 + 0x30), 0x1);
    v0_4 = (v0_5);
    if ((v0_5 == -1)) goto L_C057F28;
    L_C057F06:;
    *(unsigned int *)((v0_1 + 0x0)) = 0xA;
    *(unsigned int *)((v0_3 + 0x0)) = 0x10;
    goto L_C057F0E;
}

int FUN_0c0228f0(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t7;
    register int t23;
    register int t31;
    register int t43;
    register int t44;
    register int t119;
    register int t67;
    register int t69;
    register int t71;
    register int t85;
    register int t95;
    register int t96;
    register float u97;
    register float u98;
    register int t129;
    register int t49;
    int t107;
    register int t114;
    register int t116;
    register int t117;
    int R1000;
    int R1004;

    R1000 = *(int *)((int)stk + 0);
    R1004 = *(int *)((int)stk + 4);

    *(unsigned int *)(((int)stk + 12)) = a5;
    t129 = *(int *)0xC2AC2F0;
    if (t129 == 1) {
        if ((int)((((struct o0_int *)0xC270994)->v)) < (int)0x12C) {
        } else {
            t7 = FUN_0c03f154(0x0);
            if (t7 == 3) {
                (((struct o20_uint *)0xC1EC720)->v) = 0x3;
                (((struct o24_uint *)0xC1EC720)->v) = 0x0;
            } else {
                (((struct o24_uint *)0xC1EC720)->v) = 0x2;
            }
            t129 = (FUN_0c050740());
        }
    } else {
        if (((((struct o0_int *)0xC270994)->v)) == 0) {
            t23 = (((struct o4_int *)0xC1EC720)->v);
            t31 = (((int)stk + 8) + 0x4);
            if ((*(int *)((0xC09C8F4 + (((t23 << 1) + t23) << 2)))) == 2) {
                *(unsigned int *)(((int)stk + 8)) = (FUN_0c022884((*(int *)(((int)stk + 12)))));
                t31 = ((int)stk + 8);
            }
            (((struct oC_uint *)0xC270994)->v) = (FUN_0c03ed46(t31));
            FUN_0c03ea54();
            (((struct o8_uint *)0xC270994)->v) = (FUN_0c03ec48(((((struct o0_int *)0xC2A465C)->v)), (((((struct o0_int *)0xC1EC720)->v)) + ((((struct o4_int *)0xC1EC720)->v))), ((((struct oC_int *)0xC270994)->v))));
            Voice_ShutUp(0x0);
            t43 = 0xC123EC0;
            t44 = 0x6E;
            if (((((struct o8_int *)0xC270994)->v)) == 0) {
                t43 = 0xC123ED8;
                t44 = 0x78;
            }
            FUN_0c058f64(t43, 0x0, t44, 0x0);
        } else {
            t49 = a5;
        }
        (((struct o34_uint *)0xC270944)->v) = 0xA;
        if (((((struct o8_int *)0xC270994)->v)) == 0) {
            (((struct o0_uint *)0xC270944)->v) = 0x64;
        } else {
            (((struct o0_uint *)0xC270944)->v) = 0x62;
        }
        if (((((struct o8_int *)0xC270994)->v)) == 0) {
            (((struct o10_uint *)0xC2A465C)->v) = 0x1;
        } else {
            (((struct o10_uint *)0xC2A465C)->v) = 0x0;
        }
        (((struct o4_float *)0xC270944)->v) = 320.0f;
        (((struct o8_float *)0xC270944)->v) = 118.0f;
        (((struct o10_float *)0xC270944)->v) = 1.0f;
        (((struct o14_float *)0xC270944)->v) = 1.0f;
        FUN_0c07ada0(0xC270944, t49);
        (((struct o14_float *)0xC270944)->v) = 1.0f;
        (((struct o10_float *)0xC270944)->v) = 1.0f;
        (((struct o34_uint *)0xC270944)->v) = 0x200A;
        t119 = 0x10;
        if ((int)((((struct o0_int *)0xC270994)->v)) < (int)0x5A) {
        } else {
            FUN_0c03f4bc(0xA, 0x5, 0x0, 0x0, 320.0f, 371.0f, 0.200000003f, 24.0f, 6.0f, 0.400000006f);
            FUN_0c03341c(0.300000012f);
            FUN_0c027fdc(0.300000012f);
            FUN_0c027f28(0x2);
            pfSize(1.0f, 1.0f);
            FUN_0c02803a(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
            t67 = (((struct o4_int *)0xC1EC720)->v);
            t69 = *(int *)((0xC09C8F4 + (((t67 << 1) + t67) << 2)));
            switch (t69) {
            case 2:
                t85 = ((int (*)(int, int, int, int))(0xC058974))(0x140, 0xE8, (*(int *)(((int)stk + 12))), a7);
                break;
            case 5:
                pfCrazyBoxRecordComboPut(0x140, 0xE8, (*(int *)(((int)stk + 12))), 0x1);
                break;
            case 3:
                FUN_0c058aa0(0x140, 0xE8, (*(int *)(((int)stk + 12))), 0x1);
                break;
            case 4:
                FUN_0c058aa0(0x140, 0xE8, (*(int *)(((int)stk + 12))), 0x2);
                break;
            default:
                t71 = ((int (*)(int, int, int, int))(0xC058974))(0x140, 0xE8, (*(int *)(((int)stk + 12))), a7);
                break;
            }
            FUN_0c027f28(0x0);
            FUN_0c02803a(0xFFFF0000, 0xFFFF0000, 0xFFFF0000, 0xFFFF0000);
            pfTextCenterPut(0x140, 0xD6, 0xC09C810);
            FUN_0c02803a(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
            pfTextPut(0x9C, 0x144, 0xC09C81C);
            pfTextCenterPut(0x130, 0x144, 0xC09C824);
            t95 = (pfTextPut(0x1A4, 0x144, 0xC09C82C));
            t96 = 0x0;
            u97 = 0.300000012f;
            u98 = 1.0f;
            for (;;) {
                if ((int)t96 >= (int)0x3) {
                    break;
                }
                t95 = 0xC022CA4;
                u98 = (*(float *)((t95 + 0x0)));
                u97 = (float)(((((t96 << 1) + t96) << 2) << 1) + 0x15E);
                t95 = (FUN_0c03ec48(((((struct o0_int *)0xC2A465C)->v)), (((((struct o0_int *)0xC1EC720)->v)) + ((((struct o4_int *)0xC1EC720)->v))), ((((struct oC_int *)0xC270994)->v))));
                if ((t96 == t95) && (t107 = *(int *)0xC1EC83C, (t107 & 0x8) != 0)) {
                    R1004 = 0x2;
                    t114 = t96;
                    R1000 = t114;
                    t116 = 0x400232;
                    t117 = ((((((struct o0_int *)0xC1EC720)->v)) << 2) + ((((struct o4_int *)0xC1EC720)->v)));
                } else {
                    R1004 = 0x2;
                    t114 = t96;
                    R1000 = t114;
                    t116 = 0x400222;
                    t117 = ((((((struct o0_int *)0xC1EC720)->v)) << 2) + ((((struct o4_int *)0xC1EC720)->v)));
                }
                t95 = (FUN_0c035560(t116, 0xFFFFFFFF, t117, t96, t114, 0x2, u98, u97));
                t96 = (t96 + 0x1);
            }
            t119 = t95;
        }
        t129 = t119;
        if ((int)((((struct o0_int *)0xC270994)->v)) >= (int)0x12C) {
            (((struct o24_uint *)0xC1EC720)->v) = 0x2;
            t129 = 0xC1EC744;
        }
    }
    (((struct o0_uint *)0xC270994)->v) = (((((struct o0_int *)0xC270994)->v)) + 0x1);
    return t129;
}

int kmCreateVertexBuffer(int a4, int a5, int a6, int a7, int a8, float f4, float f5, float f6, float f7, float f8, float f9)
{
    int stk[25];
    register int t0;
    register int t3;
    register int t5;
    register int t10;
    register int t27;
    register int t28;
    register int t30;
    register int t32;
    register int t33;
    register int t36;
    register int t37;
    register int t40;
    register int t41;
    register int t42;
    register int t59;
    register int t65;
    register int t116;
    register int t69;
    register int t72;
    register int t76;
    register int t78;
    int t79;
    register int t89;
    register int t90;
    register int t91;
    register int t93;
    register int t94;
    register int t95;
    register int t100;
    register int t104;
    register int t125;
    register int t57;
    register int t101;
    register int t102;
    register int t103;
    int R1008;
    int R1012;
    int R1016;
    int R1020;
    int R1024;
    int R1028;

    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);
    R1016 = *(int *)((int)stk + 16);
    R1020 = *(int *)((int)stk + 20);
    R1024 = *(int *)((int)stk + 24);
    R1028 = *(int *)((int)stk + 28);

    stk[16] = a8;
    R1016 = a6;
    R1020 = a7;
    t0 = (((struct o4_int *)0xC16FC80)->v);
    *(unsigned int *)(((((int)stk + 16) + 0x10) + 0x0)) = ((((struct o0_int *)0xC16FC80)->v));
    *(unsigned int *)(((((int)stk + 16) + 0x10) + 0x4)) = t0;
    t3 = (((struct oC_int *)0xC16FC80)->v);
    *(unsigned int *)(((((int)stk + 16) + 0x10) + 0x8)) = ((((struct o8_int *)0xC16FC80)->v));
    *(unsigned int *)(((((int)stk + 16) + 0x10) + 0xC)) = t3;
    (((struct o0_uint *)0xC2D0C14)->v) = 0x1;
    t5 = a5;
    if (((*(int *)0xC3008D4) & 64) != 0) {
        t5 = (a5 + 0x20);
    }
    (((struct o0_uint *)0xC2D0BC0)->v) = a4;
    (((struct o4_uint *)0xC2D0BC0)->v) = t5;
    (((struct o8_uint *)0xC2D0BC0)->v) = (R1016);
    (((struct oC_uint *)0xC2D0BC0)->v) = (R1020);
    (((struct o10_uint *)0xC2D0BC0)->v) = a8;
    if (((((struct o0_int *)0xC1737E4)->v)) != 0x80000000) {
        t10 = (((struct o0_int *)0xC1737E4)->v);
        (((struct o0_uint *)0xC1737E4)->v) = (t10 | 0x100);
        t125 = 0x0;
        if ((t10 | 0x100) == 0xB00) {
            (((struct o0_uint *)0xC1737E4)->v) = 0x80000000;
            t125 = (kmiAllocSysConfig(((((struct o0_int *)0xC2D0C14)->v)), f4, f5, f6, f7, f8, f9));
        }
    } else {
        R1012 = 0x0;
        R1024 = (kmiChkActiveListType(t5, (R1016), (R1020), a8, 0x0));
        *(unsigned int *)((a4 + 0x10)) = ((((struct o10_int *)0xC300D28)->v));
        (((struct o4_uint *)0xC1737E4)->v) = 0x0;
        t27 = 0xC2D0CA8;
        for (;;) {
            if ((unsigned int)t27 >= (unsigned int)0xC2D0CB8) {
                break;
            }
            *(unsigned int *)((t27 + 0x0)) = 0x0;
            t27 = (t27 + 0x4);
        }
        R1012 = 0x0;
        R1008 = 0x0;
        t28 = R1016;
        t30 = kmiGetPackOBPParam(t5, t28, (R1020), a8, 0x0, 0x0);
        R1028 = t30;
        kmiGetNativeRegOBPSize(t30);
        t32 = R1020;
        t33 = R1024;
        *(unsigned int *)(((((int)stk + 16) + 0x20) + 0x0)) = t5;
        *(unsigned int *)(((((int)stk + 16) + 0x20) + 0x4)) = t28;
        *(unsigned int *)(((((int)stk + 16) + 0x20) + 0x8)) = (R1020);
        *(unsigned int *)(((((int)stk + 16) + 0x20) + 0xC)) = a8;
        t36 = *(int *)(((((int)stk + 16) + 0x20) + 0x0));
        t40 = t36;
        if (t36 != 0) {
            t37 = *(int *)(((((int)stk + 16) + 0x20) + 0x0));
            *(unsigned int *)(((((int)stk + 16) + 0x20) + 0x0)) = (t37 - 16);
            t40 = (t37 - 16);
        }
        t41 = ((((int)stk + 16) + 0x20) + 0x4);
        t42 = ((((int)stk + 16) + 0x20) + 0x4);
        for (;;) {
            if ((unsigned int)t41 >= (unsigned int)((((int)stk + 16) + 0x20) + 0x10)) {
                break;
            }
            t40 = (*(int *)((t41 + 0x0)));
            if (t40 != 0) {
                t40 = (*(int *)((t42 + 0x0)));
                t40 = (t40 - 16);
                *(unsigned int *)((t42 + 0x0)) = t40;
            }
            t41 = (t41 + 0x4);
            t42 = (t42 + 0x4);
        }
        R1016 = (((int)stk + 16) + 0x20);
        (((struct o4_uint *)0xC2D0BC0)->v) = (*(int *)(((((int)stk + 16) + 0x20) + 0x0)));
        (((struct o8_uint *)0xC2D0BC0)->v) = (*(int *)((((((int)stk + 16) + 0x20) + 0x4) + 0x0)));
        R1024 = ((((int)stk + 16) + 0x20) + 0x8);
        (((struct oC_uint *)0xC2D0BC0)->v) = (*(int *)((((((int)stk + 16) + 0x20) + 0x8) + 0x0)));
        (((struct o10_uint *)0xC2D0BC0)->v) = (*(int *)((((((int)stk + 16) + 0x20) + 0xC) + 0x0)));
        R1016 = (*(int *)(((R1016) + 0x0)));
        R1020 = (*(int *)((((((int)stk + 16) + 0x20) + 0x4) + 0x0)));
        R1024 = (*(int *)(((R1024) + 0x0)));
        t57 = (*(int *)((((((int)stk + 16) + 0x20) + 0xC) + 0x0)));
        *(unsigned int *)(((int)stk + 64)) = t57;
        t59 = 0x2;
        if ((*(int *)0xC300C14) == 1) {
            t59 = 0x1;
        }
        R1012 = (t59);
        R1008 = ((((t33 << 2) << 1) + (((t5 + t28) + t32) + a8)) + 0xA0);
        *(int *)((int)stk + 4) = 0x0;
        t65 = kmiGetVertexBasePointer((R1016), (R1020), (R1024), t57, 0x0, (R1008), (R1012));     /* manual: the three stack words the original pushes (r13 = 0, r7 = R1008, r12 = R1012); two had been dropped */
        t116 = t65;
        if (t65 == 0) {
            kmiGetDisplayData(0xFF, ((((struct o18_int *)0xC2D0BC0)->v)), ((((struct o24_int *)0xC2D0BC0)->v)));
            t69 = (((t5 + t28) + t32) + a8);
            if ((unsigned int)(((t5 + t28) + t32) + a8) < (unsigned int)0x10000) {
                t69 = 0x10000;
            }
            (((struct o4_uint *)0xC2D0C14)->v) = ((t69 << 2) + ((((struct o10_int *)0xC2D0C14)->v)));
            t72 = (((struct oC_int *)0xC2D0C14)->v);
            if ((unsigned int)((((struct o4_int *)0xC2D0C14)->v)) > (unsigned int)((-t72) + 0x200000)) {
                (((struct o4_uint *)0xC2D0C14)->v) = ((-t72) + 0x200000);
            }
            t76 = kmiTAallocEx(((((struct o4_int *)0xC2D0C14)->v)), 0xC2D0CA0, 0xC2D0CA4);
            if (t76 == 0) {
                (((struct o0_uint *)0xC300D28)->v) = ((((struct o4_int *)0xC2D0C14)->v));
                R1012 = 0x0;
                t78 = (((struct o18_int *)0xC2D0BC0)->v);
                t79 = R1028;
                R1008 = ((~t78) & t79);
                t89 = kmiSetTAEnvironment(((unsigned int)((((struct o0_int *)0xC30093C)->v)) >> 7), ((unsigned int)((((struct o4_int *)0xC30093C)->v)) >> 7), ((unsigned int)((((struct o8_int *)0xC30093C)->v)) >> 7), ((unsigned int)((((struct oC_int *)0xC30093C)->v)) >> 7), ((~t78) & t79));
                (((struct o20_uint *)0xC2D0C54)->v) = ((((struct o38_int *)0xC2D0C14)->v));
                (((struct o24_uint *)0xC2D0C54)->v) = ((((struct o3C_int *)0xC2D0C14)->v));
                t90 = (((struct o0_int *)0xC2D0C54)->v);
                (((struct o28_uint *)0xC2D0C54)->v) = t90;
                (((struct o2C_uint *)0xC2D0C54)->v) = ((((struct o4_int *)0xC2D0C54)->v));
                t91 = 0x0;
                for (;;) {
                    if ((unsigned int)t91 >= (unsigned int)0x10) {
                        break;
                    }
                    t89 = t91;
                    t90 = (*(int *)((0xC2D0C74 + t89)));
                    t91 = (t91 + 0x4);
                    *(unsigned int *)((0xC2D0C88 + t89)) = t90;
                }
                (((struct o14_uint *)0xC2D0C14)->v) = 0x0;
                (((struct o18_uint *)0xC2D0C14)->v) = 0x0;
                (((struct o1C_uint *)0xC2D0C14)->v) = 0x0;
                (((struct o20_uint *)0xC2D0C14)->v) = 0x0;
                (((struct o24_uint *)0xC2D0C14)->v) = 0xC2D0C4C;
                (((struct o28_uint *)0xC2D0C14)->v) = 0xC2D0C74;
                if ((unsigned int)0x0 < (unsigned int)t59) {
                    t93 = 0xC2D0C4C;
                    t94 = 0xC2D0C44;
                    t95 = 0x0;
                    for (;;) {
                        t95 = (t95 + 0x1);
                        *(unsigned int *)((t94 + 0x0)) = t93;
                        t93 = (t93 + 0x14);
                        t94 = (t94 + 0x4);
                        if ((unsigned int)t95 >= (unsigned int)t59) {
                            break;
                        }
                    }
                }
                t100 = (kmiCopyDummyGlobalData(t59));
                t104 = 0x0;
                for (;;) {
                    if ((unsigned int)t104 >= (unsigned int)0x10) {
                        break;
                    }
                    t100 = 0xC2D0CA8;
                    t102 = ((((struct o28_int *)0xC2D0C14)->v));
                    t103 = (*(int *)((t104 + t100)));
                    t102 = (t102 + t104);
                    t101 = (*(int *)((t102 + 0x0)));
                    t103 = (t103 << 2);
                    t104 = (t104 + 0x4);
                    t101 = (t101 + t103);
                    *(unsigned int *)((t102 + 0x0)) = t101;
                }
                *(unsigned int *)((a4 + 0x0)) = 0xC2D0C74;
                *(unsigned int *)((a4 + 0x4)) = 0xC174134;
                *(unsigned int *)((a4 + 0x8)) = 0xC2D0C28;
                *(unsigned int *)((a4 + 0xC)) = 0xC2D0C44;
            }
            t116 = t76;
        }
        t125 = t116;
    }
    return t125;
}
