/* Straight-line functions with calls and guards (batch gen_if): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o14_float { char p[0x14]; float v; };
struct o160_float { char p[0x160]; float v; };
struct o17C_short { char p[0x17C]; short v; };
struct o17E_short { char p[0x17E]; short v; };
struct o18_float { char p[0x18]; float v; };
struct o180_short { char p[0x180]; short v; };
struct o184_short { char p[0x184]; short v; };
struct o186_short { char p[0x186]; short v; };
struct o188_short { char p[0x188]; short v; };
struct o18A_short { char p[0x18A]; short v; };
struct o18E_short { char p[0x18E]; short v; };
struct o192_short { char p[0x192]; short v; };
struct o19C_short { char p[0x19C]; short v; };
struct o19E_short { char p[0x19E]; short v; };
struct o1C_float { char p[0x1C]; float v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o204_float { char p[0x204]; float v; };
struct o208_int { char p[0x208]; int v; };
struct o252_short { char p[0x252]; short v; };
struct o28_int { char p[0x28]; int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o34_short { char p[0x34]; short v; };
struct o370_uint { char p[0x370]; unsigned int v; };
struct o38_int { char p[0x38]; int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o48_float { char p[0x48]; float v; };
struct o48_int { char p[0x48]; int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o50_float { char p[0x50]; float v; };
struct o54_int { char p[0x54]; int v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o58_int { char p[0x58]; int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5C_int { char p[0x5C]; int v; };
struct o60_float { char p[0x60]; float v; };
struct o60_int { char p[0x60]; int v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o63_uchar { char p[0x63]; unsigned char v; };
struct o64_float { char p[0x64]; float v; };
struct o68_float { char p[0x68]; float v; };
struct o74_int { char p[0x74]; int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o80_float { char p[0x80]; float v; };
struct o8A_short { char p[0x8A]; short v; };
struct o94_int { char p[0x94]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oF8_short { char p[0xF8]; short v; };
int CalcShadow4Normal(int, int);
int CarSel_Camera(void);
int CarSel_SetFog(void);
int FUN_0c018b00(int);
int FUN_0c01c568(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c01d4ac(void);
int FUN_0c01e6f0(void);
int FUN_0c01ea8e(void);
int FUN_0c01ead0(int, int);
int FUN_0c01ee10(int, int);
int FUN_0c01f368(int, int, float);
int FUN_0c01f4ca(int, int, float);
int FUN_0c01f95a(void);
int FUN_0c02024c(void);
int FUN_0c026b80(int, int);
int FUN_0c026bd6(int);
int FUN_0c026bf4(float);
int FUN_0c026c02(void);
int FUN_0c026c3a(float, float, float);
int FUN_0c027fdc(float);
int FUN_0c029b12(int, float);
int FUN_0c030e54(void);
int FUN_0c030eee(float, float, float);
int FUN_0c0311b4(void);
int FUN_0c03155a(void);
int FUN_0c03386a(int);
int FUN_0c03393c(float);
int FUN_0c033942(float);
int FUN_0c0339fc(int);
int FUN_0c03b318(int);
int FUN_0c03f154(int);
int FUN_0c03f19a(void);
int FUN_0c040bec(int, int, int, int, float, float);
int FUN_0c047624(int);
int FUN_0c048262(int);
int FUN_0c04afec(int, int, int, int, float, float);
int FUN_0c04dcf0(void);
int FUN_0c04e03c(void);
int FUN_0c04e152(int, int, int);
int FUN_0c04e192(int, int, int, int, float);
int FUN_0c04e3c0(int);
int FUN_0c04e43a(int);
int FUN_0c04e45e(int, int);
float FUN_0c04e526(int);
int FUN_0c04e64e(void);
int FUN_0c04e92c(void);
int FUN_0c04e9ac(void);
int FUN_0c04eb10(void);
int FUN_0c04ebe2(void);
int FUN_0c04edcc(void);
int FUN_0c04f224(void);
int FUN_0c04f518(void);
int FUN_0c050104(void);
int FUN_0c050958(int, int, int, int);
int FUN_0c05305e(int, int);
int FUN_0c053fde(void);
int FUN_0c058be4(int);
int FUN_0c058ca6(int, int);
int FUN_0c058e82(void);
int FUN_0c058f64(int, int, int, int);
int FUN_0c059074(int);
int FUN_0c05995e(void);
int FUN_0c05b410(float, float, float);
int FUN_0c05b596(int, int, int);
int FUN_0c05be5c(int, float);
int FUN_0c05beca(int, float);
int FUN_0c05d1b4(int, int, float);
int FUN_0c05edbe(int);
int FUN_0c068c14(int, int, float);
int FUN_0c069e54(int, int);
int FUN_0c06cbc2(void);
int FUN_0c06ccdc(void);
int FUN_0c0704b0(void);
int FUN_0c0704c0(int, int, int, float);
int FUN_0c0719e0(int);
int FUN_0c072230(int, int);
int FUN_0c072290(int, int);
int FUN_0c072b60(int);
int FUN_0c073360(void);
int FUN_0c073a30(float, float, float);
int FUN_0c073a60(int);
int FUN_0c073c40(int, int, float);
float FUN_0c073c60(int);
float FUN_0c073c80(int);
int FUN_0c075d50(void);
int FUN_0c076230(float, float, float);
int FUN_0c07d2aa(int, int, int, int);
int FUN_0c080780(int, int);
int FUN_0c14b478(int);
int FUN_0c14def2(void);
int FUN_0c14dfa0(int, int);
int FUN_0c14e02a(int);
int FUN_0c14e15c(int, int, int);
int FUN_0c14e8e4(int, int, int, int);
int FUN_0c14edc8(void);
int FUN_0c165de2(int, int);
int SetAdvCamera(int, int);
int SetMotionBlurStrength(float);
int Voice_Execute(void);
int Voice_ShutUp(int);
extern void _builtin_set_imask(int);
extern float _builtin_sqrtf(float);
int gdc_FadeManStreamSong(int, int, int, int, int, int);
int gdc_FileLoadInit(void);
int gdc_StopStreamVoiceAll(void);
int gdc_StreamVoiceVol(int, int);
int kmSetCheapShadowMode(int);
int kmSetFogTable(int);
int kmiWriteRegister(void);
int mpvvlc_InitMbai(void);
int mwRnaCreate(int, int, int, int);
int mwRnaDestroy(int);
int mwRnaGetNumData(int);
int mwRnaSetBitPerSmpl(int, int, int, int);
int mwRnaSetNumChan(int, int, int, int);
int mwRnaSetOutPan(int, int, int, int);
int mwRnaSetOutVol(int, int, int, int);
int mwRnaSetTransSw(int, int, int, int);
int mwRnaStop(int);
int nlCloseEvent(int);
int nlFogDensityF(float);
int nlFogTableOff(void);
int nlGetMatrix(int);
int nlInitEvent(void);
int nlLookAtUp(int, int, int);
int nlMultiMatrix(int);
int nlMultiMatrixRevOrder8(int);
int nlObjPutSetLightDirectionV(int);
int nlObjPutUseViewMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAY(int);
int nlScaleUnitVector(int, int, float);
int nlSubVector3op(int, int, int);
int nlUnitMatrix(void);
int pdExecPeripheralServer(void);
int pdExitPeripheral(void);
int pdGetPeripheral(int);
int syCfgExit(void);
int syHwFinish(void);
int syMallocFinish(void);
int syRtcFinish(void);
int thunk_FUN_0c0765b0(void);
int thunk_FUN_0c14b2ec(int, int, int, int);
int FUN_0c049610(int a4, int a5, int a6, int a7, float f4, float f5, float f6);
void FUN_0c04d5fa(void);
int FUN_0c066b3a(int a4);
int FUN_0c01db74(int a4, int a5, int a6, int a7);
int FUN_0c04e88e(int a4);
int FUN_0c0557f4(int a4, int a5, int a6, int a7);
int FUN_0c01be2c(int a4, int a5, int a6, int a7);
int FUN_0c01d3b4(void);
int FUN_0c069ef2(int a4);
int FUN_0c01da32(void);
int FUN_0c01c134(int a4, int a5, int a6, int a7);
int FUN_0c01a7cc(void);
int FUN_0c058e20(void);
int FUN_0c03e37e(void);
int FUN_0c05d1f4(int a4, int a5, int a6, int a7);
int FUN_0c01e5f8(int a4, int a5, int a6, int a7, int a8);
int FUN_0c01ee58(void);
int FUN_0c01d190(void);
void FUN_0c05990e(void);
void FUN_0c01a848(void);
int Voice_CancelToNext(int a4, int a5, int a6, int a7);
int FUN_0c05a356(int a4);
int FUN_0c019446(void);
int FUN_0c019466(void);
void FUN_0c06ce72(void);
void FUN_0c06db2e(void);
void FUN_0c06e460(void);
int FUN_0c091ae0(void);
int FUN_0c01edbc(int a4, int a5, int a6, int a7);
int FUN_0c14b460(void);
int gdFsSetGlobalErr(void);
int FUN_0c14b394(void);
int gdFsOpen(void);
void gdFsExecServer(void);
void gdFsEntryErrFuncAll(void);
int FUN_0c05b3fc(void);
int FUN_0c062004(int a4, int a5, int a6, int a7, float f4, float f5);
int ADXRNA_Destroy(int a4);
int mwlSbGetStreamParam(int a4, int a5, int a6, int a7);
int FUN_0c14e0be(int a4, int a5, int a6, int a7);
int FUN_0c01ec7a(int a4, int a5, int a6, int a7);
int FUN_0c066cba(int a4);
int malloc(void);
int free(void);
int FUN_0c06f550(int a4, int a5, int a6);
int FUN_0c075d60(int a4);
int thunk_syCfgExit(void);
int thunk_kmSetFogTable_0c071a70(int a4);
int thunk_kmSetCheapShadowMode(int a4);
int thunk_kmiWriteRegister(void);
int thunk_mwRnaCreate(int a4, int a5, int a6, int a7);
int thunk_mwRnaSetTransSw(int a4, int a5, int a6, int a7);
int thunk_FUN_0c1644d8(int a4, int a5, int a6, int a7);
int thunk_mwRnaSetNumChan(int a4, int a5, int a6, int a7);
int thunk_mwRnaSetOutVol(int a4, int a5, int a6, int a7);
int thunk_mwRnaSetOutPan(int a4, int a5, int a6, int a7);
int thunk_mwRnaSetBitPerSmpl(int a4, int a5, int a6, int a7);

int FUN_0c049610(int a4, int a5, int a6, int a7, float f4, float f5, float f6)
{
    int stk[234];

    register int R1;
    register int R2;
    register int R3;
    register float F0;
    register float F1;
    register float F2;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    v0_5 = a4;
    v0_3 = a5;
    v0_6 = a6;
    v0_0 = a7;
    w0_4 = f4;
    w0_3 = f5;
    w0_0 = f6;
    *(unsigned int *)(((int)stk + 4)) = (0x370 + ((int)stk + 4));
    *(int *)((int)stk + 0) = (0x370 + ((int)stk + 4));
    (((struct o370_uint *)(((int)stk + 4)))->v) = (pdGetPeripheral(0x0));
    *(unsigned int *)(((0x370 + ((int)stk + 4)) + 0x4)) = (pdGetPeripheral(0x6));
    *(unsigned int *)(((0x370 + ((int)stk + 4)) + 0x8)) = (pdGetPeripheral(0xC));
    *(unsigned int *)(((0x370 + ((int)stk + 4)) + 0xC)) = (pdGetPeripheral(0x12));
    v0_1 = *(int *)0xC1EC740;
    *(volatile int *)(((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) + 0x10));
    v0_0 = (0xC01F4CA);
    v0_0 = (0xC073CB0);
    v0_3 = (0xC14BA44);
    v0_0 = (0xC1758B4);
    w0_1 = (0.0f);
    w0_0 = (4000000.0f);
    if ((v0_1 == 0)) goto L_C049672;
    nlSubVector3op((0x364 + ((int)stk + 4)), (v0_0 + 0x7C), 0xC177D38);
    if (((*(int *)0xC2AC2F4) != 0)) goto L_C049830;
    v0_1 = !((FUN_0c073c80((0x364 + ((int)stk + 4)))) > 1000000.0f);
    if (v0_1) goto L_C049810;
    w0_2 = (1440000.0f);
    L_C049834:;
    FUN_0c073360();
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x358 + ((int)stk + 4))) = *(struct mv3 *)(0xC10C3C4); }
    FUN_0c073a60((v0_0 + 0x7C));
    nlRotateAY((unsigned short)((((struct oF8_short *)(v0_0))->v)));
    FUN_0c073a30(w0_1, w0_1, -100.0f);
    FUN_0c072230((0x358 + ((int)stk + 4)), (0x398 + ((int)stk + 4)));
    FUN_0c073a30(w0_1, w0_1, -500.0f);
    FUN_0c072230((0x358 + ((int)stk + 4)), (0x38C + ((int)stk + 4)));
    nlPopMatrix(0x1);
    L_C04988E:;
    nlPushMatrix(0x0);
    nlUnitMatrix();
    FUN_0c072b60(0xC177D5C);
    FUN_0c026bd6((0x364 + ((int)stk + 4)));
    FUN_0c072290((0x364 + ((int)stk + 4)), (0x364 + ((int)stk + 4)));
    nlObjPutSetLightDirectionV((0x364 + ((int)stk + 4)));
    thunk_FUN_0c0765b0();
    FUN_0c075d50();
    v0_3 = (((struct o10_int *)0xC2ADEB4)->v);
    v0_1 = (0xC2ADEC4);
    v0_4 = (((((struct o4_int *)0xC1ECD40)->v)));
    v0_5 = (v0_3);
    v0_2 = (((((struct o0_int *)0xC1ECD40)->v)));
    if (((int)v0_3 >= 0)) goto L_C0498EC;
    FUN_0c04afec(v0_2, v0_4, (0x398 + ((int)stk + 4)), 0x895440, w0_4, w0_3);
    L_C049F2E:;
    nlPopMatrix(0x1);
    return (FUN_0c026c02());
    L_C0498EC:;
    *(unsigned int *)(((int)stk + 56)) = (v0_5 << 2);
    v0_3 = ((*(int *)(((v0_5 << 2) + ((((struct o0_int *)0xC2ADF1C)->v))))));
    w0_1 = ((1.0f + 1.0f));
    L_C049A68:;
    if (((*(short *)((v0_3 + 0x0))) != -1)) goto L_C049980;
    v0_5 = ((0x17C + (((int)stk + 4) + 0x44)));
    v0_3 = (0x1);
    v0_6 = ((0x258 + (((int)stk + 4) + 0x44)));
    v0_2 = ((((int)stk + 4) + 0x44));
    L_C049A82:;
    if (((unsigned int)v0_5 < (unsigned int)v0_6)) goto L_C049A7E;
    v0_3 = ((*(int *)((((((struct o4_int *)0xC2ADF1C)->v)) + (*(int *)(((int)stk + 56)))))));
    L_C049B96:;
    if (!(((*(short *)((v0_3 + 0x0))) != -1))) goto L_C049C64;
    v0_5 = *(short *)((v0_3 + 0x0));
    nlSubVector3op((((int)stk + 4) + 0x38), (((((v0_5 << 2) + v0_5) << 2) + v0_4) + 0x4), (v0_0 + 0x7C));
    w0_3 = *(float *)(((int)stk + 60));
    w0_4 = *(float *)(((int)stk + 68));
    w0_4 = (w0_4 * w0_4);
    w0_4 = w0_4 + w0_3 * w0_3;
    *(float *)(((int)stk + 8)) = w0_4;
    v0_5 = *(short *)((v0_3 + 0x0));
    *(unsigned int *)(((int)stk + 4)) = ((((v0_5 << 2) + v0_5) << 2) + v0_4);
    v0_5 = (FUN_0c05beca((((((v0_5 << 2) + v0_5) << 2) + v0_4) + 0x4), (*(float *)((((((v0_5 << 2) + v0_5) << 2) + v0_4) + 0x0))))) == 0;
    if (v0_5) goto L_C049B4E;
    w0_4 = *(float *)(((int)stk + 8));
    w0_3 = (w0_4);
    if ((!(w0_2 > w0_4))) goto L_C049B0E;
    v0_5 = (FUN_0c01f368((*(short *)((v0_3 + 0x0))), 0x1, _builtin_sqrtf(w0_3))) == 0;
    if (v0_5) goto L_C049B94;
    *(unsigned short *)((v0_2 + ((*(short *)((v0_3 + 0x0))) << 1))) = 0x0;
    goto L_C049B94;
    L_C049C64:;
    v0_5 = (*(short *)(((v0_3 + 0x2) + 0x0))) != -2;
    v0_3 = ((v0_3 + 0x2));
    if (v0_5) goto L_C049BA0;
    v0_0 = *(int *)((v0_1 + 0x0));
    v0_5 = (v0_0);
    if (!((v0_0 != 120))) goto L_C049D52;
    if ((v0_5 != 0x87)) goto L_C049C82;
    goto L_C049D52;
    L_C049D52:;
    v0_3 = (0xC075D60);
    if ((v0_5 == 0xA8)) goto L_C049DDE;
    if ((v0_5 == 0xA9)) goto L_C049DDE;
    FUN_0c075d60(0xC5D3328);
    FUN_0c075d60(0xC5D8DD0);
    FUN_0c075d60(0xC5E3758);
    if (((*(int *)((v0_1 + 0x0))) == 0xB2)) goto L_C049DCE;
    v0_0 = (0xB1);
    if (((*(int *)((v0_1 + 0x0))) == 0xB1)) goto L_C049DCE;
    if (((*(int *)((v0_1 + 0x0))) == 0xAA)) goto L_C049DCE;
    if (((*(int *)((v0_1 + 0x0))) == 0xAB)) goto L_C049DCE;
    if (((*(int *)((v0_1 + 0x0))) == 0xAC)) goto L_C049DCE;
    if (((*(int *)((v0_1 + 0x0))) == 0xAD)) goto L_C049DCE;
    if (((*(int *)((v0_1 + 0x0))) == 0xAE)) goto L_C049DCE;
    if (((*(int *)((v0_1 + 0x0))) == 0xAB)) goto L_C049DCE;
    if (((*(int *)((v0_1 + 0x0))) == 0xAA)) goto L_C049DCE;
    if (((*(int *)((v0_1 + 0x0))) == v0_0)) goto L_C049DCE;
    if (((*(int *)((v0_1 + 0x0))) == 0xA7)) goto L_C049DCE;
    FUN_0c075d60(0xC5EF500);
    L_C049DCE:;
    if (((unsigned short)((((struct o252_short *)(v0_2))->v)) == 0)) goto L_C049DDE;
    FUN_0c075d60(0xC5D1A18);
    L_C049DDE:;
    v0_0 = *(int *)((v0_1 + 0x0));
    v0_5 = (v0_0);
    if ((v0_0 == 110)) goto L_C049E24;
    v0_0 = (((v0_5 == 111)));
    if ((v0_0)) goto L_C049E24;
    FUN_0c075d60(0xC5EC3D8);
    L_C049E24:;
    if (((unsigned short)((((struct o17C_short *)(v0_2))->v)) == 0)) goto L_C049E34;
    FUN_0c075d60(0xC5CB398);
    L_C049E34:;
    if (((unsigned short)((((struct o17E_short *)(v0_2))->v)) == 0)) goto L_C049E44;
    FUN_0c075d60(0xC5CBE90);
    L_C049E44:;
    if (((unsigned short)((((struct o180_short *)(v0_2))->v)) == 0)) goto L_C049E54;
    FUN_0c075d60(0xC5CC360);
    L_C049E54:;
    if (((unsigned short)((((struct o184_short *)(v0_2))->v)) == 0)) goto L_C049E64;
    FUN_0c075d60(0xC5CCB70);
    L_C049E64:;
    if (((unsigned short)((((struct o186_short *)(v0_2))->v)) == 0)) goto L_C049E74;
    FUN_0c075d60(0xC5CD110);
    L_C049E74:;
    if (((unsigned short)((((struct o188_short *)(v0_2))->v)) == 0)) goto L_C049E84;
    FUN_0c075d60(0xC5CD868);
    L_C049E84:;
    if (((unsigned short)((((struct o18A_short *)(v0_2))->v)) == 0)) goto L_C049E94;
    FUN_0c075d60(0xC5D0978);
    L_C049E94:;
    if (((unsigned short)((((struct o18E_short *)(v0_2))->v)) == 0)) goto L_C049EA4;
    FUN_0c075d60(0xC5D0ED0);
    L_C049EA4:;
    if (((unsigned short)((((struct o192_short *)(v0_2))->v)) == 0)) goto L_C049EB4;
    FUN_0c075d60(0xC5D1848);
    L_C049EB4:;
    v0_0 = *(int *)((v0_1 + 0x0));
    v0_5 = (v0_0);
    if (((int)v0_0 < (int)0x78)) goto L_C049EC8;
    if (((int)v0_5 > (int)0x96)) goto L_C049EC8;
    v0_5 = (0xC5C7610);
    L_C049ECA:;
    FUN_0c075d60(v0_5);
    if (((*(int *)0xC175C84) != 1)) goto L_C049F28;
    v0_5 = (0xC5C1958);
    L_C049F2A:;
    FUN_0c075d60(v0_5);
    goto L_C049F2E;
    L_C049F28:;
    v0_5 = (0xC5C0000);
    goto L_C049F2A;
    L_C049EC8:;
    v0_5 = (0xC5C9C40);
    goto L_C049ECA;
    L_C049C82:;
    if ((v0_5 == 0x88)) goto L_C049D52;
    if ((v0_5 == 0x89)) goto L_C049D52;
    if ((v0_5 == 0x8A)) goto L_C049D52;
    if ((v0_5 == 0x8B)) goto L_C049D52;
    if ((v0_5 == 0x8C)) goto L_C049D52;
    if ((v0_5 == 0x96)) goto L_C049D52;
    if ((v0_5 == 108)) goto L_C049D52;
    if ((v0_5 == 109)) goto L_C049D52;
    if ((v0_5 == 0xB1)) goto L_C049D52;
    if ((v0_5 == 0xB2)) goto L_C049D52;
    if ((v0_5 == 0xB3)) goto L_C049D52;
    if ((v0_5 == 0xB4)) goto L_C049D52;
    if ((v0_5 == 0xB5)) goto L_C049D52;
    if ((v0_5 == 0xB6)) goto L_C049D52;
    if ((v0_5 == 0xAA)) goto L_C049D52;
    if ((v0_5 == 0xAB)) goto L_C049D52;
    if ((v0_5 == 0xAC)) goto L_C049D52;
    if ((v0_5 == 0xAD)) goto L_C049D52;
    v0_0 = (((v0_5 == 0xAE)));
    if ((v0_0)) goto L_C049D52;
    if ((v0_5 == 0xAB)) goto L_C049D52;
    if ((v0_5 == 0xAA)) goto L_C049D52;
    if ((v0_5 == 0xB1)) goto L_C049D52;
    if ((v0_5 == 0xA7)) goto L_C049D52;
    if ((v0_5 == 0xA8)) goto L_C049D52;
    if ((v0_5 == 0xA9)) goto L_C049D52;
    if ((v0_5 == 110)) goto L_C049D52;
    if ((v0_5 == 111)) goto L_C049D52;
    goto L_C049F2E;
    L_C049BA0:;
    v0_5 = *(short *)((v0_3 + 0x0));
    *(unsigned int *)(((int)stk + 4)) = ((((v0_5 << 2) + v0_5) << 2) + v0_4);
    v0_5 = (FUN_0c05beca((((((v0_5 << 2) + v0_5) << 2) + v0_4) + 0x4), (*(float *)((((((v0_5 << 2) + v0_5) << 2) + v0_4) + 0x0))))) == 0;
    if (v0_5) goto L_C049C00;
    v0_5 = *(short *)((v0_3 + 0x0));
    nlSubVector3op((((int)stk + 4) + 0x38), (((((v0_5 << 2) + v0_5) << 2) + v0_4) + 0x4), (0x38C + ((int)stk + 4)));
    w0_2 = *(float *)(((int)stk + 60));
    w0_3 = *(float *)(((int)stk + 68));
    *(float *)(((int)stk + 20)) = w0_3;
    w0_3 = (w0_3 * w0_3);
    w0_3 = w0_3 + w0_2 * w0_2;
    FUN_0c01f4ca((*(short *)((v0_3 + 0x0))), 0x1, _builtin_sqrtf(w0_3));
    goto L_C049C64;
    L_C049C00:;
    v0_5 = *(short *)((v0_3 + 0x0));
    nlSubVector3op((((int)stk + 4) + 0x38), (((((v0_5 << 2) + v0_5) << 2) + v0_4) + 0x4), (v0_0 + 0x7C));
    w0_4 = *(float *)(((int)stk + 60));
    w0_3 = *(float *)(((int)stk + 68));
    w0_2 = (w0_3 * w0_3);
    w0_2 = w0_2 + w0_4 * w0_4;
    w0_4 = (w0_4);
    w0_3 = (w0_3);
    if ((!(w0_0 > w0_2))) goto L_C049C64;
    v0_5 = *(short *)((v0_3 + 0x0));
    nlSubVector3op((((int)stk + 4) + 0x38), (((((v0_5 << 2) + v0_5) << 2) + v0_4) + 0x4), (0x38C + ((int)stk + 4)));
    w0_2 = *(float *)(((int)stk + 60));
    w0_3 = *(float *)(((int)stk + 68));
    *(float *)(((int)stk + 16)) = w0_3;
    w0_3 = (w0_3 * w0_3);
    w0_3 = w0_3 + w0_2 * w0_2;
    FUN_0c01f4ca((*(short *)((v0_3 + 0x0))), 0x1, (_builtin_sqrtf(w0_3) * w0_1));
    goto L_C049C64;
    L_C049B94:;
    v0_3 = ((v0_3 + 0x2));
    goto L_C049B96;
    L_C049B0E:;
    v0_5 = *(short *)((v0_3 + 0x0));
    nlSubVector3op((((int)stk + 4) + 0x38), (((((v0_5 << 2) + v0_5) << 2) + v0_4) + 0x4), (0x38C + ((int)stk + 4)));
    w0_3 = *(float *)(((int)stk + 60));
    *(float *)(((int)stk + 24)) = w0_3;
    w0_4 = *(float *)(((int)stk + 68));
    *(float *)(((int)stk + 28)) = w0_4;
    w0_4 = (w0_4 * w0_4);
    w0_4 = w0_4 + w0_3 * (*(float *)(((int)stk + 24)));
    FUN_0c01f4ca((*(short *)((v0_3 + 0x0))), 0x1, _builtin_sqrtf(w0_4));
    goto L_C049B94;
    L_C049B4E:;
    if ((!(w0_0 > (*(float *)(((int)stk + 8)))))) goto L_C049B94;
    v0_5 = *(short *)((v0_3 + 0x0));
    nlSubVector3op((((int)stk + 4) + 0x38), (((((v0_5 << 2) + v0_5) << 2) + v0_4) + 0x4), (0x38C + ((int)stk + 4)));
    w0_3 = *(float *)(((int)stk + 60));
    *(float *)(((int)stk + 32)) = w0_3;
    w0_4 = *(float *)(((int)stk + 68));
    *(float *)(((int)stk + 36)) = w0_4;
    w0_4 = (w0_4 * w0_4);
    w0_4 = w0_4 + w0_3 * (*(float *)(((int)stk + 32)));
    FUN_0c01f4ca((*(short *)((v0_3 + 0x0))), 0x1, (_builtin_sqrtf(w0_4) * w0_1));
    goto L_C049B94;
    L_C049A7E:;
    *(unsigned short *)((v0_5 + 0x0)) = v0_3;
    v0_5 = ((v0_5 + 0x2));
    goto L_C049A82;
    L_C049980:;
    v0_5 = *(short *)((v0_3 + 0x0));
    nlSubVector3op((((int)stk + 4) + 0x38), (((((v0_5 << 2) + v0_5) << 2) + v0_2) + 0x4), (0x398 + ((int)stk + 4)));
    w0_3 = *(float *)(((int)stk + 60));
    w0_4 = *(float *)(((int)stk + 68));
    w0_4 = (w0_4 * w0_4);
    w0_4 = w0_4 + w0_3 * w0_3;
    *(float *)(((int)stk + 12)) = w0_4;
    v0_5 = *(short *)((v0_3 + 0x0));
    *(unsigned int *)(((int)stk + 4)) = ((((v0_5 << 2) + v0_5) << 2) + v0_2);
    v0_5 = (FUN_0c05beca((((((v0_5 << 2) + v0_5) << 2) + v0_2) + 0x4), (*(float *)((((((v0_5 << 2) + v0_5) << 2) + v0_2) + 0x0))))) == 0;
    if (v0_5) goto L_C049A20;
    w0_4 = *(float *)(((int)stk + 12));
    w0_3 = (w0_4);
    if ((!(w0_2 > w0_4))) goto L_C0499E0;
    FUN_0c01f368((*(short *)((v0_3 + 0x0))), 0x0, _builtin_sqrtf(w0_3));
    L_C049A66:;
    v0_3 = ((v0_3 + 0x2));
    goto L_C049A68;
    L_C0499E0:;
    v0_5 = *(short *)((v0_3 + 0x0));
    nlSubVector3op((((int)stk + 4) + 0x38), (((((v0_5 << 2) + v0_5) << 2) + v0_2) + 0x4), (0x38C + ((int)stk + 4)));
    w0_3 = *(float *)(((int)stk + 60));
    *(float *)(((int)stk + 40)) = w0_3;
    w0_4 = *(float *)(((int)stk + 68));
    *(float *)(((int)stk + 48)) = w0_4;
    w0_4 = (w0_4 * w0_4);
    w0_4 = w0_4 + w0_3 * (*(float *)(((int)stk + 40)));
    FUN_0c01f4ca((*(short *)((v0_3 + 0x0))), 0x0, _builtin_sqrtf(w0_4));
    goto L_C049A66;
    L_C049A20:;
    if ((!(w0_0 > (*(float *)(((int)stk + 12)))))) goto L_C049A66;
    v0_5 = *(short *)((v0_3 + 0x0));
    nlSubVector3op((((int)stk + 4) + 0x38), (((((v0_5 << 2) + v0_5) << 2) + v0_2) + 0x4), (0x38C + ((int)stk + 4)));
    w0_3 = *(float *)(((int)stk + 60));
    *(float *)(((int)stk + 44)) = w0_3;
    w0_4 = *(float *)(((int)stk + 68));
    *(float *)(((int)stk + 52)) = w0_4;
    w0_4 = (w0_4 * w0_4);
    w0_4 = w0_4 + w0_3 * (*(float *)(((int)stk + 44)));
    FUN_0c01f4ca((*(short *)((v0_3 + 0x0))), 0x0, (_builtin_sqrtf(w0_4) * w0_1));
    goto L_C049A66;
    L_C049810:;
    if ((((((struct o8_int *)0xC177D50)->v)) == 0)) goto L_C04982A;
    v0_1 = (((struct o0_short *)0xC177D50)->v);
    v0_5 = ((unsigned short)v0_1);
    if (((int)(unsigned short)v0_1 <= (int)0x1800)) goto L_C049830;
    if (((int)v0_5 >= (int)0x7800)) goto L_C049830;
    L_C04982A:;
    w0_2 = (100000000.0f);
    goto L_C049834;
    L_C049830:;
    w0_2 = (6250000.0f);
    goto L_C049834;
    L_C049672:;
    v0_1 = (((struct o0_short *)0xC177D50)->v);
    v0_5 = ((unsigned short)v0_1);
    if (((int)(unsigned short)v0_1 <= (int)0x2000)) goto L_C0496B4;
    if (((int)v0_5 >= (int)0x6000)) goto L_C0496B4;
    w0_2 = (2250000.0f);
    L_C0496B8:;
    v0_1 = (((struct o0_int *)0xC2ADEB4)->v);
    v0_3 = (0xC2ADEB4);
    v0_5 = (v0_1);
    if (((int)v0_1 <= (int)0xF14)) goto L_C0496CA;
    if (((int)v0_5 >= (int)0xF64)) goto L_C0496CA;
    w0_2 = (w0_0);
    L_C0496CA:;
    FUN_0c073360();
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x364 + ((int)stk + 4))) = *(struct mv3 *)(0xC10C3B8); }
    FUN_0c073a60((v0_0 + 0x7C));
    nlRotateAY((unsigned short)((((struct oF8_short *)(v0_0))->v)));
    FUN_0c073a30(w0_1, w0_1, w0_1);
    FUN_0c072230((0x364 + ((int)stk + 4)), (0x398 + ((int)stk + 4)));
    FUN_0c073a30(w0_1, w0_1, -700.0f);
    FUN_0c072230((0x364 + ((int)stk + 4)), (0x38C + ((int)stk + 4)));
    nlPopMatrix(0x1);
    v0_1 = *(int *)((v0_3 + 0x0));
    w0_1 = (-3000.0f);
    w0_4 = ((float)v0_1);
    FPUL_ = (v0_1);
    if ((!((float)v0_1 > 416.666656f))) goto L_C049756;
    if ((!(483.333313f > w0_4))) goto L_C049756;
    FUN_0c01f4ca(0x6A, 0x0, w0_1);
    FUN_0c01f4ca(0x6B, 0x0, w0_1);
    FUN_0c01f4ca(0x6C, 0x0, w0_1);
    L_C049756:;
    v0_1 = *(int *)((v0_3 + 0x0));
    w0_4 = ((float)v0_1);
    FPUL_ = (v0_1);
    if (((float)v0_1 > 449.999969f)) goto L_C04976A;
    goto L_C04988E;
    L_C04976A:;
    if ((533.333313f > w0_4)) goto L_C049776;
    goto L_C04988E;
    L_C049776:;
    FUN_0c01f4ca(0xB6, 0x0, w0_1);
    goto L_C04988E;
    L_C0496B4:;
    w0_2 = (25000000.0f);
    goto L_C0496B8;
}

void FUN_0c04d5fa(void)
{
    int stk[21];

    register int R1;
    register int R2;
    int R7;
    register float F0;
    register float F1;
    register float F4;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    register float w0_5;
    register float w0_6;
    register float w0_7;
    v0_2 = *(int *)0xC1EC71C;
    v0_8 = (v0_2);
    v0_0 = (0x0);
    v0_1 = (0xC1758B4);
    v0_3 = (0xC073650);
    v0_3 = (0xC073280);
    w0_2 = ((1.0f + 1.0f));
    w0_0 = (1.0f);
    w0_1 = (0.0f);
    if ((v0_2 != 2)) goto L_C04D632;
    L_C04DCD2:;
    return;
    L_C04D632:;
    v0_2 = (FUN_0c04dcf0()) != 0;
    if (v0_2) goto L_C04D63E;
    FUN_0c04e03c();
    L_C04D63E:;
    w0_4 = (((struct o160_float *)(v0_1))->v);
    w0_3 = (_builtin_fabsf(w0_4) * 30.0f);
    w0_4 = (_builtin_fabsf(w0_4) * 30.0f);
    *(float *)(((int)stk + 8)) = (w0_3 * w0_4);
    v0_2 = (((struct o19E_short *)(v0_1))->v);
    *(float *)(((int)stk + 16)) = (_builtin_fabsf((float)v0_2) / 384.0f);
    FPUL_ = (v0_2);
    if ((!(0.0f > ((((struct o160_float *)(v0_1))->v))))) goto L_C04D676;
    w0_3 = (6400.0f);
    L_C04D67A:;
    *(float *)(((int)stk + 32)) = w0_3;
    if ((!(w0_0 > (*(float *)(((int)stk + 16)))))) goto L_C04D68A;
    *(float *)(((int)stk + 16)) = w0_0;
    L_C04D68A:;
    v0_2 = (((struct o4_int *)0xC2B1B94)->v);
    v0_8 = (v0_2);
    if (((int)v0_2 < 0)) goto L_C04D6D8;
    v0_8 = ((v0_8 & 0x3));
    L_C04D6E2:;
    v0_3 = (v0_8);
    L_C04D9CA:;
    v0_2 = (0xC2AE0CC);
    if (((int)v0_3 >= (int)0x80)) goto L_C04D9D6;
    v0_4 = (((v0_3 * 0x64) + v0_2));
    if (!((((((struct o34_short *)(((v0_3 * 0x64) + v0_2)))->v)) != -1))) goto L_C04D9C8;
    (((struct o54_uint *)(v0_4))->v) = (FUN_0c04e45e((v0_4 + 0xC), (v0_4 + 0x50)));
    v0_5 = (((struct o54_int *)(v0_4))->v);
    v0_8 = (v0_5);
    if ((v0_5 != 3)) goto L_C04D722;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_4 + 0xC)) = *(struct mv3 *)(v0_4); }
    goto L_C04D8C0;
    L_C04D9C8:;
    v0_3 = ((v0_3 + 0x4));
    goto L_C04D9CA;
    L_C04D8C0:;
    w0_3 = ((((struct oC_float *)(v0_4))->v));
    w0_3 = w0_3 + w0_2 * ((((struct o18_float *)(v0_4))->v));
    *(float *)(((int)stk + 72)) = w0_3;
    *(float *)(((int)stk + 76)) = (((((struct o10_float *)(v0_4))->v)) + -0.122499995f);
    w0_3 = ((((struct o14_float *)(v0_4))->v));
    w0_3 = w0_3 + w0_2 * ((((struct o20_float *)(v0_4))->v));
    *(float *)(((int)stk + 80)) = w0_3;
    v0_5 = FUN_0c029b12((((int)stk + 4) + 0x44), 40.0f);
    v0_7 = *(int *)((v0_5 + 0x1C));
    v0_5 = (v0_5);
    v0_6 = (v0_7);
    if ((v0_7 == -1)) goto L_C04D9C4;
    if ((v0_6 == 2)) goto L_C04D9C4;
    if ((v0_6 == 6)) goto L_C04D9C4;
    v0_8 = (0x10);
    if ((((((struct o10_float *)(v0_4))->v)) > ((((struct o4_float *)(v0_5))->v)))) goto L_C04D946;
    if ((!((((((struct o4_float *)(v0_5))->v)) - (*(float *)((v0_4 + v0_8)))) > 30.0f))) goto L_C04D934;
    FUN_0c04e43a(v0_4);
    L_C04D95A:;
    v0_7 = *(int *)((v0_5 + 0x1C));
    v0_6 = (v0_7);
    if ((v0_7 == 3)) goto L_C04D97A;
    if ((v0_6 == 8)) goto L_C04D97A;
    if ((v0_6 == 9)) goto L_C04D97A;
    if ((v0_6 == 1)) goto L_C04D97A;
    if (!((v0_6 != 10))) goto L_C04D97A;
    *(unsigned int *)((v0_4 + 0x3C)) = v0_0;
    goto L_C04D9C8;
    L_C04D97A:;
    CalcShadow4Normal((v0_4 + 0x24), (v0_5 + 0xC));
    *(unsigned int *)((v0_4 + 0x3C)) = 0x1;
    goto L_C04D9C8;
    L_C04D934:;
    (((struct o10_float *)(v0_4))->v) = ((((struct o4_float *)(v0_5))->v));
    (((struct o1C_float *)(v0_4))->v) = w0_1;
    (((struct o58_uint *)(v0_4))->v) = v0_0;
    goto L_C04D95A;
    L_C04D946:;
    (((struct o58_uint *)(v0_4))->v) = 0x1;
    v0_8 = (0x1C);
    F4 = (-0.163333327f);
    if ((!(((((struct o1C_float *)(v0_4))->v)) > -0.163333327f))) goto L_C04D95A;
    *(float *)((v0_4 + v0_8)) = F4;
    goto L_C04D95A;
    L_C04D9C4:;
    FUN_0c04e43a(v0_4);
    goto L_C04D9C8;
    L_C04D722:;
    nlSubVector3op((((int)stk + 4) + 0x2C), (v0_4 + 0xC), (v0_1 + 0x7C));
    w0_3 = FUN_0c073c60((((int)stk + 4) + 0x2C));
    FUN_0c073c40((((int)stk + 4) + 0x2C), (((int)stk + 4) + 0x2C), (w0_0 / w0_3));
    FUN_0c073360();
    *(float *)(((int)stk + 36)) = w0_1;
    *(float *)(((int)stk + 40)) = w0_1;
    *(float *)(((int)stk + 44)) = w0_0;
    nlRotateAY((unsigned short)((((struct oF8_short *)(v0_1))->v)));
    FUN_0c072230((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x20));
    nlPopMatrix(0x1);
    w0_5 = ((*(float *)(((int)stk + 44))) * (*(float *)(((int)stk + 56))));
    w0_5 = w0_5 + (*(float *)(((int)stk + 48))) * (*(float *)(((int)stk + 36)));
    w0_3 = (((struct o10_float *)(v0_4))->v);
    w0_4 = (((struct o80_float *)(v0_1))->v);
    w0_6 = ((*(float *)(((int)stk + 8))) * w0_5);
    w0_6 = (w0_6 * w0_5);
    w0_7 = (w0_6 * w0_5);
    w0_6 = (*(float *)(((int)stk + 32)));
    w0_6 = w0_6 + 0.5f * w0_7;
    w0_5 = (w0_5);
    F4 = (((w0_4 - w0_3) * (w0_4 - w0_3)));
    if ((w0_6 > (((((struct o50_float *)(v0_4))->v)) * (*(float *)(((int)stk + 16)))))) goto L_C04D7BE;
    goto L_C04D8C0;
    L_C04D7BE:;
    if ((400.0f > F4)) goto L_C04D7CA;
    goto L_C04D8C0;
    L_C04D7CA:;
    if (((*(signed char *)((v0_4 + 0x40))) == 0)) goto L_C04D7D6;
    goto L_C04D8C0;
    L_C04D7D6:;
    if ((!(w0_5 > 0.930000007f))) goto L_C04D848;
    v0_8 = (0x19C);
    v0_6 = (0x300);
    if (((int)((((struct o19C_short *)(v0_1))->v)) <= (int)0x300)) goto L_C04D824;
    if ((((((struct o160_float *)(v0_1))->v)) > 0.0f)) goto L_C04D85C;
    L_C04D852:;
    v0_7 = (0x1);
    v0_2 = (0x1);
    L_C04D860:;
    FUN_0c04e152(v0_4, v0_7, v0_2);
    (((struct o4C_float *)(v0_4))->v) = w0_2;
    (((struct o48_float *)(v0_4))->v) = 10.0f;
    if (((*(int *)0xC2AE0C8) == 0)) goto L_C04D880;
    v0_5 = ((FUN_0c04e64e()) & 1) == 0;
    if (v0_5) goto L_C04D8C0;
    L_C04D880:;
    v0_5 = (*(int *)((0xC1317C4 + ((*(int *)((0xC10C8A8 + (((((struct o34_short *)(v0_4))->v)) << 2)))) << 2))));
    *(int *)((int)stk + 0) = v0_5;
    v0_5 = *(int *)((v0_5 + (((int)((unsigned int)(FUN_0c04e64e()) % (unsigned int)(*(int *)((((*(int *)((((((((struct o34_short *)(v0_4))->v)) << 2) + 0xC10C8A8) + 0x0))) << 2) + 0xC1317D0))))) << 2)));
    FUN_0c058ca6(v0_5, 0x1);
    *(unsigned int *)0xC2AE0C8 = 0x28;
    goto L_C04D8C0;
    L_C04D85C:;
    v0_7 = (0x1);
    v0_2 = (0x0);
    goto L_C04D860;
    L_C04D824:;
    v0_6 = (0xFFFFFD00);
    if (((int)(*(short *)((v0_1 + v0_8))) >= (int)0xFFFFFD00)) goto L_C04D83A;
    if ((!(((((struct o160_float *)(v0_1))->v)) > 0.0f))) goto L_C04D85C;
    goto L_C04D852;
    L_C04D83A:;
    v0_2 = !((FUN_0c04e526(v0_4)) > 0.0f);
    if (v0_2) goto L_C04D85C;
    goto L_C04D852;
    L_C04D848:;
    v0_2 = !((FUN_0c04e526(v0_4)) > 0.0f);
    if (v0_2) goto L_C04D85C;
    goto L_C04D852;
    L_C04D9D6:;
    v0_3 = (0xC2AE0C8);
    if (((int)(*(int *)0xC2AE0C8) <= 0)) goto L_C04D9E4;
    *(unsigned int *)((v0_3 + 0x0)) = ((*(int *)((v0_3 + 0x0))) - 1);
    L_C04D9E4:;
    v0_3 = (((struct o8A_short *)(v0_1))->v);
    v0_4 = (((struct oF8_short *)(v0_1))->v);
    (((struct o0_uint *)0xC2B1B94)->v) = (unsigned short)(v0_4 - v0_3);
    v0_6 = (0xC2B1B94);
    v0_7 = ((unsigned short)(v0_4 - v0_3));
    R7 = (0xFFFF);
    if (((unsigned int)(unsigned short)(v0_4 - v0_3) >= (unsigned int)0x8000)) goto L_C04DA54;
    w0_2 = ((float)v0_7);
    FPUL_ = (v0_7);
    if (((int)v0_7 >= 0)) goto L_C04DA0E;
    w0_2 = ((w0_2 + 4.2949673e+09f));
    FPUL_ = (0x4F800000);
    L_C04DA0E:;
    w0_4 = (float)(unsigned short)((((struct o8A_short *)(v0_1))->v));
    w0_4 = w0_4 + 0.5f * w0_2;
    w0_3 = (w0_4);
    w0_2 = (2.14748365e+09f);
    FPUL_ = (0x4F000000);
    if ((2.14748365e+09f > w0_4)) goto L_C04DA86;
    w0_3 = ((w0_3 - (w0_2 + w0_2)));
    L_C04DA86:;
    *(unsigned int *)((v0_6 + 0x0)) = ((int)w0_3 & R7);
    *(unsigned int *)(((int)stk + 28)) = v0_0;
    *(unsigned int *)(((int)stk + 24)) = v0_0;
    *(unsigned int *)(((int)stk + 20)) = v0_2;
    *(unsigned int *)(((int)stk + 4)) = v0_2;
    *(unsigned int *)(((int)stk + 12)) = (v0_2 + 0x3200);
    v0_3 = (v0_0);
    v0_5 = (v0_0);
    v0_6 = ((v0_2 + 0x3200));
    v0_7 = (v0_2);
    FPUL_ = ((int)w0_3);
    if (((unsigned int)(*(int *)(((int)stk + 4))) >= (unsigned int)(v0_2 + 0x3200))) goto L_C04DB2E;
    L_C04DAAC:;
    if ((((((struct o34_short *)((*(int *)(((int)stk + 4)))))->v)) == -1)) goto L_C04DB1C;
    v0_4 = *(int *)(((int)stk + 20));
    FUN_0c04e192(v0_4, v0_7, v0_2, R7, F4);
    v0_1 = (((struct o54_int *)(v0_4))->v);
    v0_8 = (v0_1);
    v0_4 = (v0_4);
    if ((v0_1 == 1)) goto L_C04DAD8;
    if ((v0_8 == 2)) goto L_C04DAD8;
    if ((v0_8 == 3)) goto L_C04DAEE;
    if ((v0_8 == 4)) goto L_C04DAEE;
    if ((v0_8 == 5)) goto L_C04DB18;
    L_C04DB18:;
    FUN_0c04e43a(v0_4);
    L_C04DB1C:;
    *(unsigned int *)(((int)stk + 20)) = ((*(int *)(((int)stk + 20))) + 0x64);
    v0_1 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = (v0_1 + 0x64);
    if (((unsigned int)(v0_1 + 0x64) < (unsigned int)(*(int *)(((int)stk + 12))))) goto L_C04DAAC;
    L_C04DB2E:;
    FUN_0c073360();
    FUN_0c072b60(0xC177D5C);
    FUN_0c075d50();
    nlGetMatrix(0xC2B96F8);
    nlPopMatrix(0x1);
    FUN_0c073360();
    v0_4 = (0xC05BE5C);
    w0_5 = (15.0f);
    L_C04DB70:;
    if ((v0_3 != 0)) goto L_C04DB5C;
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    FUN_0c073360();
    *(float *)(((int)stk + 60)) = w0_1;
    *(float *)(((int)stk + 64)) = w0_1;
    *(float *)(((int)stk + 68)) = -1.0f;
    nlRotateAY((unsigned short)(*(short *)0xC177D52));
    FUN_0c072230((((int)stk + 4) + 0x38), (((int)stk + 4) + 0x38));
    nlPopMatrix(0x1);
    nlUnitMatrix();
    FUN_0c072b60(0xC177D5C);
    FUN_0c026bd6((((int)stk + 4) + 0x44));
    FUN_0c072290((((int)stk + 4) + 0x44), (((int)stk + 4) + 0x44));
    nlObjPutSetLightDirectionV((((int)stk + 4) + 0x44));
    nlRotateAY((0x8000 + (unsigned short)(*(short *)0xC177D52)));
    thunk_FUN_0c0765b0();
    FUN_0c075d50();
    FUN_0c026c02();
    nlRotateAY(((-(unsigned short)(*(short *)0xC177D52)) - 32768));
    v0_3 = (0xC177D50);
    L_C04DCC2:;
    if ((v0_5 != 0)) goto L_C04DC4C;
    v0_0 = nlPopMatrix(0x1);
    (((struct o4_uint *)0xC2B1B94)->v) = (((((struct o4_int *)0xC2B1B94)->v)) + 0x1);
    v0_8 = (v0_0);
    goto L_C04DCD2;
    L_C04DC4C:;
    nlSubVector3op((((int)stk + 4) + 0x2C), (v0_5 + 0xC), 0xC177D38);
    *(float *)(((int)stk + 52)) = w0_1;
    nlScaleUnitVector((((int)stk + 4) + 0x2C), (((int)stk + 4) + 0x2C), w0_0);
    w0_2 = ((*(float *)(((int)stk + 56))) * (*(float *)(((int)stk + 68))));
    w0_2 = w0_2 + (*(float *)(((int)stk + 60))) * (*(float *)(((int)stk + 48)));
    if ((!(w0_2 > (*(float *)0xC04DDF8)))) goto L_C04DCBE;
    v0_0 = (FUN_0c05be5c((v0_5 + 0xC), w0_5)) == 0;
    if (v0_0) goto L_C04DCBE;
    nlPushMatrix(0x0);
    FUN_0c073a60((v0_5 + 0xC));
    nlRotateAY((0x8000 + (unsigned short)(*(short *)((v0_3 + 0x2)))));
    FUN_0c075d60((*(int *)(((((((struct o34_short *)(v0_5))->v)) << 2) + 0xC131730))));
    nlPopMatrix(0x1);
    L_C04DCBE:;
    v0_5 = (((((struct o60_int *)(v0_5))->v)));
    goto L_C04DCC2;
    L_C04DB5C:;
    v0_0 = (FUN_0c05be5c((v0_3 + 0xC), w0_5)) == 0;
    if (v0_0) goto L_C04DB6C;
    FUN_0c04e3c0(v0_3);
    L_C04DB6C:;
    v0_3 = (((((struct o60_int *)(v0_3))->v)));
    goto L_C04DB70;
    L_C04DAEE:;
    if (((*(int *)(((int)stk + 28))) != 0)) goto L_C04DAFA;
    *(unsigned int *)(((int)stk + 28)) = v0_4;
    v0_5 = (v0_4);
    L_C04DB02:;
    (((struct o60_uint *)(v0_4))->v) = v0_0;
    goto L_C04DB1C;
    L_C04DAFA:;
    (((struct o60_uint *)((*(int *)(((int)stk + 28)))))->v) = v0_4;
    *(unsigned int *)(((int)stk + 28)) = v0_4;
    goto L_C04DB02;
    L_C04DAD8:;
    if (((*(int *)(((int)stk + 24))) != 0)) goto L_C04DAE4;
    *(unsigned int *)(((int)stk + 24)) = v0_4;
    v0_3 = (v0_4);
    goto L_C04DB02;
    L_C04DAE4:;
    (((struct o60_uint *)((*(int *)(((int)stk + 24)))))->v) = v0_4;
    *(unsigned int *)(((int)stk + 24)) = v0_4;
    goto L_C04DB02;
    L_C04DA54:;
    w0_2 = ((float)(R7 - v0_7));
    FPUL_ = ((R7 - v0_7));
    if (((int)(R7 - v0_7) >= 0)) goto L_C04DA68;
    w0_2 = ((w0_2 + 4.2949673e+09f));
    FPUL_ = (0x4F800000);
    L_C04DA68:;
    w0_4 = (float)(unsigned short)((((struct oF8_short *)(v0_1))->v));
    w0_4 = w0_4 + 0.5f * w0_2;
    w0_3 = (w0_4);
    w0_2 = (2.14748365e+09f);
    FPUL_ = (0x4F000000);
    if ((2.14748365e+09f > w0_4)) goto L_C04DA86;
    w0_3 = ((w0_3 - (w0_2 + w0_2)));
    goto L_C04DA86;
    L_C04D6D8:;
    v0_8 = (((~(((~v0_8) + 0x1) & 0x3)) + 0x1));
    goto L_C04D6E2;
    L_C04D676:;
    w0_3 = (900.0f);
    goto L_C04D67A;
}

int FUN_0c066b3a(int a4)
{
    float u19;
    register float u20;

    nlPushMatrix(0xC17596C);
    nlMultiMatrix((a4 + 0x14));
    if (((((struct o58_int *)(a4))->v)) == 3) {
        FUN_0c05b410(1.0f, 0.0f, 0.0f);
    }
    FUN_0c05d1b4(((((struct o54_int *)(a4))->v)), 0x0, ((((struct o64_float *)(a4))->v)));
    FUN_0c05edbe(((((struct o58_int *)(a4))->v)));
    if (((((struct o58_int *)(a4))->v)) == 3) {
        FUN_0c05b3fc();
    }
    (((struct o64_float *)(a4))->v) = (((((struct o64_float *)(a4))->v)) + ((((struct o68_float *)(a4))->v)));
    if ((((((struct o5C_int *)(a4))->v)) != 0) && (u19 = (((struct o60_float *)(a4))->v), u20 = (((struct o64_float *)(a4))->v), !(u19 > u20))) {
        if ((((((struct o60_float *)(a4))->v)) + ((((struct o68_float *)(a4))->v))) > ((((struct o64_float *)(a4))->v))) {
            FUN_0c058ca6(((((struct o5C_int *)(a4))->v)), 0x2);
        }
    }
    if ((int)(int)((((struct o64_float *)(a4))->v)) >= (int)(*(int *)((((((struct o54_int *)(a4))->v)) + 0x0)))) {
        nlCloseEvent(a4);
    }
    return nlPopMatrix(0x1);
}

int FUN_0c01db74(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;

    (((struct o8_uint *)0xC1ECD0C)->v) = (((((struct o8_int *)0xC1ECD0C)->v)) - 1);
    t1 = (((struct o0_int *)0xC1ECCA8)->v);
    if (t1 == 1) {
        (((struct oC_uint *)0xC1ECCA8)->v) = (((((struct oC_int *)0xC1ECCA8)->v)) - 1);
    }
    t2 = (((struct o8_int *)0xC1ECD0C)->v);
    if ((int)t2 <= 0) {
        (((struct o0_uint *)0xC1ECD0C)->v) = (((((struct o0_int *)0xC1ECD0C)->v)) + 0x1);
        return t1;
    }
    FUN_0c050958(t2, a5, a6, a7);
    if ((*(int *)0xC1EC720) != 2) {
        FUN_0c019466();
        if (((((struct o8_int *)0xC1ECD0C)->v)) == 0x14A) {
            FUN_0c053fde();
        }
    } else {
        FUN_0c018b00(0x0);
    }
    t1 = (((struct o8_int *)0xC1ECD0C)->v);
    if (t1 == 45) {
        *(unsigned int *)0xC175908 = 0x1;
        t2 = FUN_0c03f154(0x0);
        if ((t2 == 3) && (t0 = *(int *)0xC1EC720, t0 != 2)) {
            FUN_0c01ead0((*(int *)0xC2A4668), 0x0);
        } else {
            FUN_0c01ea8e();
        }
        (((struct o0_uint *)0xC1ECCA8)->v) = 0x1;
        (((struct oC_uint *)0xC1ECCA8)->v) = (((((struct oC_int *)0xC1ECCA8)->v)) - 1);
        return FUN_0c03b318(0x2);
    }
    return t1;
}

int FUN_0c04e88e(int a4)
{
    int stk[3];
    register int t29;

    *(unsigned int *)(((int)stk + 0)) = a4;
    nlUnitMatrix();
    (((struct o4_uint *)0xC2B1CFC)->v) = (*(int *)(((int)stk + 0)));
    FUN_0c04f224();
    CarSel_SetFog();
    FUN_0c06f550(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
    if (((((struct o0_int *)0xC2B1CFC)->v)) == 0) {
        if ((int)((((struct o0_int *)0xC2B1D70)->v)) < (int)0x3B0) {
            FUN_0c04ebe2();
        }
        FUN_0c04e9ac();
        FUN_0c04eb10();
    }
    FUN_0c050104();
    FUN_0c04f518();
    FUN_0c04edcc();
    CarSel_Camera();
    if ((int)((((struct o0_int *)0xC2B1D70)->v)) >= (int)0x3B0) {
        (((struct o0_uint *)0xC2B1D70)->v) = (((((struct o0_int *)0xC2B1D70)->v)) - 1);
    }
    if ((*(int *)0xC131E58) != 0) {
        t29 = FUN_0c059074(0x0);
        if (t29 == 0) {
            Voice_ShutUp(0x0);
            FUN_0c058f64(0xC131C80, 0x0, 0x6E, 0x0);
            *(unsigned int *)0xC131E58 = 0x0;
        }
    }
    (((struct o38_uint *)0xC2B1D70)->v) = (int)(*(float *)0xC1EC800);
    return 0xC1EC800;
}

int FUN_0c0557f4(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    if ((int)(*(int *)0xC2B3110) < (int)(((((struct o0_int *)0xC2B31C4)->v)) + 0x78)) {
        t1 = *(int *)0xC1EC75C;
        t2 = t1;
        if (((t1 & 8) != 0) && (t0 = (((struct o38_int *)0xC2B31C4)->v), t0 == 0)) {
            FUN_0c01ec7a(0x0, a5, a6, a7);
            t0 = (((struct o0_int *)0xC2B31C4)->v);
            if ((int)(*(int *)0xC2B3110) < (int)t0) {
                *(unsigned int *)0xC2B3110 = t0;
            } else {
                if ((int)(*(int *)0xC2B3110) < (int)(t0 + 0x79)) {
                    *(unsigned int *)0xC2B3110 = (t0 + 0x79);
                }
            }
            (((struct o38_uint *)0xC2B31C4)->v) = 0x1;
            t0 = 0x0;
            for (;;) {
                *(unsigned int *)((0xC2B3248 + t0)) = 0x1;
                t1 = (int)((int)((*(int *)(((t0 + 0xC2B3228) + 0x0))) + (*(int *)(((t0 + 0xC2B3208) + 0x0)))) % (int)0xA);
                t3 = (t0 + 0xC2B3228);
                t4 = (t0 + 0xC2B3208);
                t0 = (t0 + 0x4);
                *(unsigned int *)((t3 + 0x0)) = t1;
                *(unsigned int *)((t4 + 0x0)) = 0x0;
                if ((unsigned int)t0 >= (unsigned int)0x20) {
                    break;
                }
            }
            t2 = t1;
        }
        t0 = t2;
    }
    return t0;
}

int FUN_0c01be2c(int a4, int a5, int a6, int a7)
{
    register int t22;
    register int t24;

    (((struct o30_uint *)0xC1EC71C)->v) = 0x0;
    (((struct o8_uint *)0xC1ECC98)->v) = 0x0;
    (((struct o0_uint *)0xC1EC840)->v) = 0x11;
    (((struct o0_uchar *)0xC1ECC98)->v) = (*(signed char *)0xC097434);
    (((struct o1_uchar *)0xC1ECC98)->v) = (*(signed char *)0xC097435);
    (((struct o2_uchar *)0xC1ECC98)->v) = (*(signed char *)0xC097436);
    (((struct o3_uchar *)0xC1ECC98)->v) = (*(signed char *)0xC097437);
    (((struct o4_uchar *)0xC1ECC98)->v) = (*(signed char *)0xC097438);
    (((struct o5_uchar *)0xC1ECC98)->v) = (*(signed char *)0xC097439);
    (((struct o28_uint *)0xC1EC71C)->v) = (((((struct o28_int *)0xC1EC71C)->v)) + 0x1);
    nlInitEvent();
    FUN_0c01e6f0();
    FUN_0c058e82();
    mpvvlc_InitMbai();
    FUN_0c03386a(0x0);
    FUN_0c05305e(0x1, 0x0);
    if ((int)(*(int *)0xC11D044) > 0) {
        *(unsigned int *)0xC11D044 = 0x384;
        FUN_0c058f64(0xC11D02C, 0x0, 0x78, 0x0);
    }
    FUN_0c02024c();
    gdc_FileLoadInit();
    t22 = 0x2;
    if (((((struct o0_int *)0xC1EC71C)->v)) == 0) {
        t22 = 0x1;
    }
    t24 = FUN_0c047624(t22);
    (((struct o8_uint *)0xC1EC840)->v) = 0x0;
    return t24;
}

int FUN_0c01d3b4(void)
{
    int stk[9];

    (((struct o8_uint *)0xC1EC744)->v) = (((((struct o8_int *)0xC1EC744)->v)) + 0x1);
    *(float *)(((int)stk + 24)) = 0.0f;
    *(float *)(((int)stk + 28)) = 1.0f;
    *(float *)(((int)stk + 32)) = 0.0f;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0xC)) = *(struct mv3 *)(0xC09741C); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(0xC09741C); }
    *(float *)(((int)stk + 8)) = 10.0f;
    nlLookAtUp((((int)stk + 0) + 0xC), ((int)stk + 0), (((int)stk + 0) + 0x18));
    FUN_0c04e88e(0xC175C80);
    if ((*(int *)0xC2B1CFC) == 6) {
        FUN_0c04e92c();
        FUN_0c06cbc2();
        (((struct o0_uint *)0xC1EC744)->v) = 0x0;
        FUN_0c01e6f0();
        FUN_0c01c568(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        FUN_0c01f95a();
    }
    return (gdc_FadeManStreamSong(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4)));
}

int FUN_0c069ef2(int a4)
{
    register int t0;
    register int t2;

    t0 = *(int *)0xC1ECCA8;
    if (t0 == 1) {
        t2 = *(int *)0xC2B9C2C;
        if (a4 != 0) {
            *(unsigned int *)0xC13B438 = (*(int *)(((*(int *)((((t2 - 1) << 2) + 0xC13B3F8))) + (((int)((int)(FUN_0c069e54(a4, (t2 - 1))) % (int)(*(int *)((((t2 - 1) << 2) + 0xC1105C4))))) << 2))));
        } else {
            *(unsigned int *)0xC13B438 = (*(int *)(((*(int *)((((t2 - 1) << 2) + 0xC13B418))) + (((int)((int)(FUN_0c069e54(a4, (t2 - 1))) % (int)(*(int *)((((t2 - 1) << 2) + 0xC110644))))) << 2))));
        }
        Voice_ShutUp(0x1);
        return FUN_0c058f64(0xC13B438, 0x1, (*(int *)((((t2 - 1) << 2) + 0xC11037C))), 0x0);
    }
    return t0;
}

int FUN_0c01da32(void)
{
    int stk[3];
    register int t12;

    FUN_0c058be4(0x0);
    FUN_0c01e6f0();
    FUN_0c06f550(0x0, 0x0, 0x0);
    *(unsigned int *)0xC2AC2F4 = 0x1;
    FUN_0c048262(0xFFFFFFFF);
    *(unsigned int *)(((int)stk + 0)) = 0xC01D4AC;
    FUN_0c01d4ac();
    FUN_0c047624(0x3);
    SetAdvCamera(0xC177D38, 0x1);
    FUN_0c030e54();
    FUN_0c030e54();
    SetMotionBlurStrength((*(float *)0xC01DB48));
    FUN_0c030eee(1.0f, 1.0f, 1.0f);
    t12 = FUN_0c0311b4();
    (((struct o0_uint *)0xC1EC744)->v) = (((((struct o0_int *)0xC1EC744)->v)) + 0x1);
    (((struct o8_uint *)0xC1EC744)->v) = 0x0;
    return t12;
}

int FUN_0c01c134(int a4, int a5, int a6, int a7)
{
    (((struct o0_uint *)0xC1EC744)->v) = (((((struct o0_int *)0xC1EC744)->v)) + 0x1);
    (((struct o8_uint *)0xC1EC744)->v) = 0x0;
    *(unsigned int *)0xC1EC840 = 0x11;
    nlInitEvent();
    FUN_0c01e6f0();
    FUN_0c058e82();
    mpvvlc_InitMbai();
    FUN_0c03386a(0x0);
    FUN_0c03393c(((((struct o0_float *)0xC01C250)->v)));
    FUN_0c033942(((((struct o8_float *)0xC01C250)->v)));
    *(unsigned int *)0xC1ECC94 = 0x0;
    FUN_0c05305e(0x0, 0x0);
    if ((int)(*(int *)0xC11D044) > 0) {
        *(unsigned int *)0xC11D044 = 0x384;
        FUN_0c058f64(0xC11D02C, 0x0, 0x78, 0x0);
    }
    FUN_0c02024c();
    return gdc_FileLoadInit();
}

int FUN_0c01a7cc(void)
{
    int t0;
    register float u18;
    register float u19;

    t0 = FUN_0c14b460();
    if ((t0 != 6) && (t0 != 0)) {
    } else {
        FUN_0c14b478(t0);
    }
    pdExecPeripheralServer();
    if (((((struct o4_int *)0xC11CFF4)->v)) != 0) {
        Voice_Execute();
    }
    FUN_0c14edc8();
    if ((*(int *)0xC1EC734) != 2) {
        *(unsigned int *)0xC1EC848 = ((*(int *)0xC1EC848) + 0x1);
    } else {
        if ((*(int *)0xC1EC848) == 0) {
            (((struct o0_float *)0xC11CFF4)->v) = 0.0f;
        }
        u18 = (((struct o0_float *)0xC11CFF4)->v);
        u19 = *(float *)0xC01A8B0;
        (((struct o0_float *)0xC11CFF4)->v) = (u18 + u19);
        *(unsigned int *)0xC1EC848 = (int)(u18 + u19);
    }
    return 0x0;
}

int FUN_0c058e20(void)
{
    register int t0;

    t0 = 0x0;
    for (;;) {
        *(unsigned int *)(((((t0 << 2) << 1) + 0xC2B6750) + 0x0)) = 0x78;
        *(unsigned int *)(((((t0 << 2) << 1) + 0xC2B6750) + 0x4)) = 0x0;
        *(unsigned int *)(((((t0 << 2) << 2) + 0xC2B6770) + 0x0)) = 0x0;
        *(unsigned int *)(((((t0 << 2) << 2) + 0xC2B6770) + 0x4)) = 0x78;
        *(unsigned int *)(((((t0 << 2) << 2) + 0xC2B6770) + 0x8)) = 0x0;
        *(unsigned int *)(((((t0 << 2) << 2) + 0xC2B6770) + 0xC)) = 0x0;
        gdc_StreamVoiceVol(t0, 0x78);
        FUN_0c01ee10(t0, 0x0);
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    return gdc_StopStreamVoiceAll();
}

int FUN_0c03e37e(void)
{
    (((struct o0_uint *)0xC1EC740)->v) = 0x0;
    if ((*(int *)0xC2A46D8) != 0xC0B3AA4) {
        (((struct o4_uint *)0xC1EC740)->v) = 0x0;
    } else {
        (((struct o4_uint *)0xC1EC740)->v) = 0x8;
    }
    (((struct o0_uint *)0xC2A4680)->v) = 0x0;
    (((struct o4_uint *)0xC2A4680)->v) = 0x0;
    FUN_0c03386a(0x0);
    FUN_0c0339fc(0x0);
    FUN_0c058e82();
    gdc_StopStreamVoiceAll();
    FUN_0c01e6f0();
    FUN_0c058be4(0x0);
    FUN_0c027fdc(0.100000001f);
    return FUN_0c03f19a();
}

int FUN_0c05d1f4(int a4, int a5, int a6, int a7)
{
    register int t16;
    register int t10;

    if ((*(int *)((a4 + 0x0))) != 0) {
        nlObjPutUseViewMatrix((*(int *)((a4 + 0x0))));
        nlPushMatrix(0x0);
        FUN_0c05b410(0.0f, 0.0f, 0.0f);
        FUN_0c05b596(0xC136D84, 0xC136D90, 0xC136D9C);
        nlObjPutUseViewMatrix((*(int *)((a4 + 0x0))));
        FUN_0c05b3fc();
        t10 = (nlPopMatrix(0x1));
    }
    if ((*(int *)((a4 + 0x4))) != 0) {
        t16 = *(int *)((a4 + 0x4));
        return ((int (*)(int, int, int, int))(t16))(0x0, 0x0, a6, a7);
    }
    return t10;
}


int FUN_0c01ee58(void)
{
    register int t0;
    int t1;

    t0 = 0x8;
    for (;;) {
        t1 = thunk_FUN_0c14b2ec(0xC, 0xC269100, 0x17C, 0xC26A5C8);
        if ((t1 != -23) && (t1 != -33)) {
            if (t1 != 0) {
                t0 = (t0 - 1);
                if ((int)t0 <= 0) {
                    break;
                }
                continue;
            }
            break;
        }
        return 0x0;
    }
    t1 = 0x1;
    if (t0 == 0) {
        t1 = 0x0;
    }
    return t1;
}

int FUN_0c01d190(void)
{
    FUN_0c058be4(0x1);
    FUN_0c058e82();
    gdc_StopStreamVoiceAll();
    FUN_0c01e6f0();
    FUN_0c05995e();
    FUN_0c026c3a(1.0f, 1.0f, 1.0f);
    FUN_0c026bf4((*(float *)0xC01D28C));
    FUN_0c026b80(0x2200, 0x2900);
    return FUN_0c06ccdc();
}

void FUN_0c05990e(void)
{
    register int t2;

    if ((*(int *)0xC132E94) != 0) {
        t2 = *(int *)0xC2B8A24;
        if (t2 != 0) {
            nlFogDensityF(((((struct o204_float *)(t2))->v)));
            thunk_kmSetFogTable_0c071a70((*(int *)0xC2B8A24));
            FUN_0c0719e0(((((struct o208_int *)((*(int *)0xC2B8A24)))->v)));
    return;
        }
        return;
    }
    nlFogTableOff();
}

void FUN_0c01a848(void)
{
    FUN_0c14def2();
    thunk_syCfgExit();
    FUN_0c03155a();
    syRtcFinish();
    pdExitPeripheral();
    FUN_0c0704b0();
    syMallocFinish();
    syHwFinish();
    _builtin_set_imask(0xF);
}

int Voice_CancelToNext(int a4, int a5, int a6, int a7)
{
    register int t6;

    if ((*(int *)(((((a4 << 2) << 2) + 0xC2B6770) + 0x0))) != 0) {
        t6 = FUN_0c01ec7a(a4, a5, a6, a7);
        *(unsigned int *)(((((a4 << 2) << 2) + 0xC2B6770) + 0x0)) = ((*(int *)(((((a4 << 2) << 2) + 0xC2B6770) + 0x0))) + 0xC);
        *(unsigned int *)(((((a4 << 2) << 2) + 0xC2B6770) + 0xC)) = 0x0;
        if ((*(int *)(((*(int *)(((((a4 << 2) << 2) + 0xC2B6770) + 0x0))) + 0x0))) == 0) {
            *(unsigned int *)(((((a4 << 2) << 2) + 0xC2B6770) + 0x0)) = 0x0;
        }
    }
    return t6;
}

int FUN_0c05a356(int a4)
{
    nlPushMatrix(0x0);
    thunk_FUN_0c0765b0();
    nlMultiMatrixRevOrder8(0xC2B8A30);
    FUN_0c075d60(a4);
    return nlPopMatrix(0x1);
}

int FUN_0c019446(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC175C80;
    t1 = ((~(((~t0) + 0x1) & 0x7)) + 0x1);
    if ((int)t0 >= 0) {
        t1 = (t0 & 0x7);
    }
    t0 = *(int *)((0xC09710C + (t1 << 2)));
    return ((int (*)(void))(t0))();
}

int FUN_0c019466(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC175C80;
    t1 = ((~(((~t0) + 0x1) & 0x7)) + 0x1);
    if ((int)t0 >= 0) {
        t1 = (t0 & 0x7);
    }
    t0 = *(int *)((0xC09712C + (t1 << 2)));
    return ((int (*)(void))(t0))();
}

void FUN_0c06ce72(void)
{
    register int t0;

    t0 = *(int *)0xC2BB3D4;
    if (((int)t0 >= 0) && ((int)t0 < (int)0x3)) {
        ((int (*)(void))((*(int *)(((t0 << 2) + 0xC112A58)))))();
    return;
    }
}

void FUN_0c06db2e(void)
{
    register int t0;

    t0 = *(int *)0xC2BB3D4;
    if (((int)t0 >= 0) && ((int)t0 < (int)0x5)) {
        ((int (*)(void))((*(int *)(((t0 << 2) + 0xC112AE4)))))();
    return;
    }
}

void FUN_0c06e460(void)
{
    register int t0;

    t0 = *(int *)0xC2BB3D4;
    if (((int)t0 >= 0) && ((int)t0 < (int)0x1)) {
        ((int (*)(void))((*(int *)(((t0 << 2) + 0xC112B94)))))();
    return;
    }
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

int FUN_0c01edbc(int a4, int a5, int a6, int a7)
{
    return FUN_0c14e15c((*(int *)(((a4 << 2) + 0xC1ECD54))), 0x2, a5);
}

int FUN_0c14b460(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC1737F8;
    if (t0 != 0) {
        t1 = (((struct o54_int *)(t0))->v);
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}

int gdFsSetGlobalErr(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC1737F8;
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x20));
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}

int FUN_0c14b394(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC1737F8;
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x2C));
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}

int gdFsOpen(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC1737F8;
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x3C));
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}

void gdFsExecServer(void)
{
    register int t0;

    t0 = *(int *)0xC1737F8;
    if (t0 != 0) {
        ((int (*)(void))(((((struct o48_int *)(t0))->v))))();
    return;
    }
}

void gdFsEntryErrFuncAll(void)
{
    register int t0;

    t0 = *(int *)0xC1737F8;
    if (t0 != 0) {
        ((int (*)(void))(((((struct o74_int *)(t0))->v))))();
    return;
    }
}

int FUN_0c05b3fc(void)
{
    return FUN_0c076230(((((struct o0_float *)0xC2B968C)->v)), ((((struct o4_float *)0xC2B968C)->v)), ((((struct o8_float *)0xC2B968C)->v)));
}

int FUN_0c062004(int a4, int a5, int a6, int a7, float f4, float f5)
{
    (((struct o63_uchar *)(a4))->v) = ((*(signed char *)(((a4 + 0x63) + 0x0))) | 0x8);
    return FUN_0c040bec(0x3, 0x2, a6, a7, f4, f5);
}

int ADXRNA_Destroy(int a4)
{
    mwRnaStop(a4);
    return mwRnaDestroy(a4);
}

int mwlSbGetStreamParam(int a4, int a5, int a6, int a7)
{
    return FUN_0c07d2aa((*(int *)(((*(int *)((a4 + 0x1C))) + 0x4))), a5, a6, a7);
}

int FUN_0c14e0be(int a4, int a5, int a6, int a7)
{
    return FUN_0c165de2(((((struct o94_int *)(a4))->v)), a5);
}

int FUN_0c01ec7a(int a4, int a5, int a6, int a7)
{
    return FUN_0c14e8e4((*(int *)(((a4 << 2) + 0xC1ECD54))), a5, a6, a7);
}

int FUN_0c066cba(int a4)
{
    return FUN_0c068c14(0xC10FFD4, a4, (*(float *)0xC13B004));
}

int malloc(void)
{
    register int t1;

    t1 = *(int *)(((*(int *)0xC2D12B4) + 0x0));
    return ((int (*)(void))(t1))();
}

int free(void)
{
    register int t1;

    t1 = *(int *)(((*(int *)0xC2D12B4) + 0x4));
    return ((int (*)(void))(t1))();
}

int FUN_0c06f550(int a4, int a5, int a6)
{
    return FUN_0c0704c0(a4, a5, a6, (*(float *)0xC06F5D8));
}

int FUN_0c075d60(int a4)
{
    return FUN_0c080780(a4, 0xC2BF8B0);
}

int thunk_syCfgExit(void)
{
    return syCfgExit();
}

int thunk_kmSetFogTable_0c071a70(int a4)
{
    return kmSetFogTable(a4);
}

int thunk_kmSetCheapShadowMode(int a4)
{
    return kmSetCheapShadowMode(a4);
}

int thunk_kmiWriteRegister(void)
{
    return kmiWriteRegister();
}

int thunk_mwRnaCreate(int a4, int a5, int a6, int a7)
{
    return mwRnaCreate(a4, a5, a6, a7);
}

int thunk_mwRnaSetTransSw(int a4, int a5, int a6, int a7)
{
    return mwRnaSetTransSw(a4, a5, a6, a7);
}

int thunk_FUN_0c1644d8(int a4, int a5, int a6, int a7)
{
    return mwRnaGetNumData(a4);
}

int thunk_mwRnaSetNumChan(int a4, int a5, int a6, int a7)
{
    return mwRnaSetNumChan(a4, a5, a6, a7);
}

int thunk_mwRnaSetOutVol(int a4, int a5, int a6, int a7)
{
    return mwRnaSetOutVol(a4, a5, a6, a7);
}

int thunk_mwRnaSetOutPan(int a4, int a5, int a6, int a7)
{
    return mwRnaSetOutPan(a4, a5, a6, a7);
}

int thunk_mwRnaSetBitPerSmpl(int a4, int a5, int a6, int a7)
{
    return mwRnaSetBitPerSmpl(a4, a5, a6, a7);
}
