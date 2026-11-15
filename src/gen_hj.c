/* Straight-line functions with calls and guards (batch gen_hj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[5]; } Stk5;
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o1C_uchar { char p[0x1C]; unsigned char v; };
struct o1D_uchar { char p[0x1D]; unsigned char v; };
struct o1E_uchar { char p[0x1E]; unsigned char v; };
struct o1F_uchar { char p[0x1F]; unsigned char v; };
struct o20_uchar { char p[0x20]; unsigned char v; };
struct o21_uchar { char p[0x21]; unsigned char v; };
struct o24_float { char p[0x24]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_short { char p[0x4]; short v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o6_short { char p[0x6]; short v; };
struct o60_int { char p[0x60]; int v; };
struct o64_int { char p[0x64]; int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o7C_float { char p[0x7C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o80_float { char p[0x80]; float v; };
struct o84_float { char p[0x84]; float v; };
struct oC_float { char p[0xC]; float v; };
int CheckAreaGrid(int, int);
int FUN_0c018b00(int);
int FUN_0c01b920(int, float, float);
int FUN_0c027408(void);
int FUN_0c027bfa(void);
int FUN_0c032210(int, int, int, int, int, int, int);
int FUN_0c040bec(int, int);
int FUN_0c05b3d4(int, int);
int FUN_0c05f434(void);
int FUN_0c05f6fe(int);
int FUN_0c05f72a(int);
int FUN_0c0638e6(int);
int FUN_0c063a2a(int, int);
int FUN_0c068166(int, int);
int FUN_0c070730(float);
int FUN_0c072230(int, int);
int FUN_0c073360(void);
float FUN_0c073b40(int, int);
int FUN_0c073c40(int, int, float);
float FUN_0c073c60(int);
int FUN_0c073e10(int);
int FUN_0c073e90(int);
int FUN_0c074f20(float);
int FUN_0c076130(float);
int HomingAngle1(int, int, float);
int nlAddVector3op(int, int, int);
int nlGetMatrix8(int);
extern float nlLength();
int nlLoadMatrix8(int);
int nlObjPutSetLightDirectionV(int);
int nlPopMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlScaleUnitVector(int, int, float);
int nlSubVector3op(int, int, int);
int pdGetPeripheral(int);
int FUN_0c021476(int a4, int a5);
int FUN_0c05ff5c(int a4);
int FUN_0c06383e(int a4);
int FUN_0c027324(void);
int CalcShadow2Matrix(int a4, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
int CarSel_SetLight(void);
void FUN_0c0490e6(Stk5 s);
void FUN_0c018c96(int a4, int a5, int a6, int a7);
void selectLoadAxes(void);
int SetAdvCamera(int a4, int a5);
int FUN_0c02d826(int a4);
int FUN_0c06e5f2(void);
Stk3 getReplayPoint(void);
void GetRotVec(int a4, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
int FUN_0c05fdac(void);
int FUN_0c064f6e(int a4);
int FUN_0c01e000(int a4);
void FUN_0c076230(float f4, float f5, float f6);
void FUN_0c018c18(int a4);
void FUN_0c018c78(int a4);
void FUN_0c026bd6(int a4);
void FUN_0c05b3ea(void);
void FUN_0c05f43a(int a4);

int FUN_0c021476(int a4, int a5)
{
    int stk[28];

    register int R1;
    register int R9;
    register int R10;
    register float F4;
    register float F5;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register float w0_0;
    register float w0_1;
    v0_0 = a4;
    v0_1 = a5;
    (((struct o6C_uint *)(((int)stk + 0)))->v) = v0_0;
    (((struct o68_uint *)(((int)stk + 0)))->v) = v0_1;
    if ((((*(int *)0xC1EC7C4) & 0x20000) == 0)) goto L_C02149C;
    *(unsigned int *)0xC177CEC = ((((*(int *)0xC177CEC) == 0)) ? 1 : 0);
    L_C02149C:;
    *(unsigned int *)(((int)stk + 96)) = 0xC1758B4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x48)) = *(struct mv3 *)(0xC175930); }
    *(float *)(((int)stk + 76)) = 0.0f;
    if (((*(int *)0xC177CEC) == 0)) goto L_C0214C0;
    v0_0 = (0x2);
    L_C021EEA:;
    *(unsigned int *)(((int)stk + 68)) = v0_0;
    L_C021EEE:;
    v0_1 = *(int *)(((int)stk + 68));
    v0_0 = (v0_1);
    if ((v0_1 == 1)) goto L_C021F0A;
    if (!((v0_0 != 2))) goto L_C0226DC;
    if ((v0_0 != 3)) goto L_C021F06;
    goto L_C0226F2;
    L_C0226DC:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x54)) = *(struct mv3 *)(((*(int *)(((int)stk + 108))) + 0x4)); }
    *(float *)(((int)stk + 88)) = 0.0f;
    L_C0226F2:;
    FUN_0c01b920((((int)stk + 0) + 0x66), ((-(*(float *)(((int)stk + 84)))) + (*(float *)(((int)stk + 72)))), ((*(float *)(((int)stk + 92))) - (*(float *)(((int)stk + 80)))));
    HomingAngle1((unsigned short)(*(short *)(((int)stk + 102))), (*(int *)(((int)stk + 104))), 0.0799999982f);
    return (*(short *)(((int)stk + 102)));
    L_C021F06:;
    goto L_C0226DC;
    L_C021F0A:;
    v0_0 = (((struct o60_int *)((*(int *)(((int)stk + 96)))))->v);
    *(unsigned int *)(((int)stk + 24)) = ((((v0_0 << 1) + v0_0) << 2) + (*(int *)0xC27091C));
    if (((*(int *)(((*(int *)(((int)stk + 108))) + 0x10))) != ((((struct o60_int *)((*(int *)(((int)stk + 96)))))->v)))) goto L_C021F9A;
    if (((int)(*(int *)(((*(int *)(((int)stk + 108))) + 0x14))) < (int)((((struct o64_int *)((*(int *)(((int)stk + 96)))))->v)))) goto L_C021F68;
    v0_1 = (((struct o64_int *)((*(int *)(((int)stk + 96)))))->v);
    *(unsigned int *)(((int)stk + 48)) = (v0_1 + 0x5);
    v0_2 = *(int *)(((*(int *)(((*(int *)(((int)stk + 24))) + 0x4))) + 0x0));
    v0_0 = (v0_2);
    if (((int)(v0_1 + 0x5) < (int)v0_2)) goto L_C021F7C;
    *(unsigned int *)(((int)stk + 48)) = ((*(int *)(((*(int *)(((*(int *)(((int)stk + 24))) + 0x4))) + 0x0))) - 1);
    L_C021F7C:;
    v0_0 = *(int *)(((int)stk + 48));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x54)) = *(struct mv3 *)(((*(int *)(((*(int *)(((int)stk + 24))) + 0x0))) + (((v0_0 << 1) + v0_0) << 2))); }
    goto L_C0226F2;
    L_C021F68:;
    v0_1 = (((struct o64_int *)((*(int *)(((int)stk + 96)))))->v);
    *(unsigned int *)(((int)stk + 48)) = (v0_1 - 5);
    v0_0 = (0x64);
    if (((int)(v0_1 - 5) >= 0)) goto L_C021F7C;
    *(unsigned int *)(((int)stk + 48)) = 0x0;
    goto L_C021F7C;
    L_C021F9A:;
    *(unsigned int *)(((int)stk + 44)) = 0xFFFFFFFF;
    if (((*(int *)(((*(int *)(((*(int *)(((int)stk + 24))) + 0x8))) + 0x4))) != (*(int *)(((*(int *)(((int)stk + 108))) + 0x10))))) goto L_C021FC2;
    *(unsigned int *)(((int)stk + 44)) = (*(int *)(((*(int *)(((*(int *)(((int)stk + 24))) + 0x8))) + 0x4)));
    v0_0 = (((((struct o64_int *)((*(int *)(((int)stk + 96)))))->v)));
    L_C021FE2:;
    *(unsigned int *)(((int)stk + 48)) = (v0_0 + 0x5);
    L_C022038:;
    if (((*(int *)(((*(int *)(((*(int *)(((int)stk + 24))) + 0x8))) + 0x10))) != (*(int *)(((*(int *)(((int)stk + 108))) + 0x10))))) goto L_C022082;
    if (((*(int *)(((int)stk + 44))) == -1)) goto L_C02206C;
    v0_0 = *(int *)(((*(int *)(((*(int *)(((int)stk + 24))) + 0x4))) + 0x0));
    if (((int)((((struct o64_int *)((*(int *)(((int)stk + 96)))))->v)) >= (int)(((int)((unsigned int)((int)((unsigned int)(v0_0 - 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(v0_0 - 1))) ? 1u : 0u))) >> 1))) goto L_C022114;
    L_C02206C:;
    *(unsigned int *)(((int)stk + 44)) = (*(int *)(((*(int *)(((*(int *)(((int)stk + 24))) + 0x8))) + 0x10)));
    *(unsigned int *)(((int)stk + 48)) = (((((struct o64_int *)((*(int *)(((int)stk + 96)))))->v)) - 5);
    L_C022114:;
    if (((*(int *)(((int)stk + 44))) != -1)) goto L_C02211E;
    v0_2 = *(int *)(((int)stk + 24));
    v0_0 = (((struct o64_int *)((*(int *)(((int)stk + 96)))))->v);
    v0_1 = *(int *)(((*(int *)((v0_2 + 0x4))) + 0x0));
    v0_2 = *(int *)(((*(int *)((v0_2 + 0x8))) + 0x0));
    *(unsigned int *)(((int)stk + 40)) = (((v0_1 - v0_0) + v0_2) - 1);
    if (((int)(((v0_1 - v0_0) + v0_2) - 1) >= 0)) goto L_C0222A2;
    *(unsigned int *)(((int)stk + 40)) = 0x0;
    L_C0222A2:;
    v0_0 = (((struct o64_int *)((*(int *)(((int)stk + 96)))))->v);
    v0_1 = *(int *)(((*(int *)(((*(int *)(((int)stk + 24))) + 0x8))) + 0x0));
    *(unsigned int *)(((int)stk + 36)) = (v0_0 + v0_1);
    if (((int)(v0_0 + v0_1) >= 0)) goto L_C0222BC;
    *(unsigned int *)(((int)stk + 36)) = 0x0;
    L_C0222BC:;
    v0_0 = *(int *)(((*(int *)(((*(int *)(((int)stk + 24))) + 0x8))) + 0x4));
    *(unsigned int *)(((int)stk + 44)) = v0_0;
    v0_1 = *(int *)0xC27091C;
    *(unsigned int *)(((int)stk + 16)) = ((((v0_0 << 1) + v0_0) << 2) + v0_1);
    if (((*(int *)(((*(int *)((((((v0_0 << 1) + v0_0) << 2) + v0_1) + 0x8))) + 0x10))) == ((((struct o60_int *)((*(int *)(((int)stk + 96)))))->v)))) goto L_C02230A;
    if (((*(int *)(((*(int *)(((*(int *)(((int)stk + 16))) + 0x8))) + 0x14))) == ((((struct o60_int *)((*(int *)(((int)stk + 96)))))->v)))) goto L_C02230A;
    if (!(((*(int *)(((*(int *)(((*(int *)(((int)stk + 16))) + 0x8))) + 0x18))) != ((((struct o60_int *)((*(int *)(((int)stk + 96)))))->v))))) goto L_C02230A;
    v0_1 = *(int *)(((int)stk + 16));
    v0_0 = *(int *)(((*(int *)((v0_1 + 0x4))) + 0x0));
    v0_1 = *(int *)(((*(int *)((v0_1 + 0x8))) + 0x0));
    v0_2 = *(int *)(((int)stk + 40));
    w0_0 = ((((float (*)(int, int))(nlLength))((*(int *)(((*(int *)(((int)stk + 16))) + 0x0))), ((int)stk + 0))));
    FPUL_ = ((((v0_0 + v0_1) + v0_2) - 1));
    goto L_C022362;
    L_C02230A:;
    v0_1 = *(int *)(((int)stk + 16));
    v0_2 = *(int *)(((*(int *)((v0_1 + 0x4))) + 0x0));
    v0_3 = *(int *)(((int)stk + 16));
    v0_0 = *(int *)(((*(int *)((v0_3 + 0x4))) + 0x0));
    v0_3 = *(int *)(((*(int *)((v0_3 + 0x8))) + 0x0));
    v0_4 = *(int *)(((int)stk + 40));
    w0_0 = ((((float (*)(int, int))(nlLength))((((*(int *)((v0_1 + 0x0))) + (((v0_2 << 1) + v0_2) << 2)) - 12), ((int)stk + 0))));
    FPUL_ = ((((v0_0 + v0_3) + v0_4) - 1));
    L_C022362:;
    w0_0 = w0_0;
    w0_0 = w0_0 + 250.0f * (float)FPUL_;
    *(float *)(((int)stk + 56)) = w0_0;
    *(unsigned int *)(((int)stk + 32)) = 0x0;
    *(unsigned int *)(((int)stk + 28)) = 0x1;
    L_C022452:;
    if (!(((int)(*(int *)(((int)stk + 28))) < (int)0x3))) goto L_C02245A;
    v0_0 = *(int *)(((((*(int *)(((int)stk + 28))) << 2) + ((*(int *)(((*(int *)(((int)stk + 24))) + 0x8))) + 0x4)) + 0x0));
    *(unsigned int *)(((int)stk + 12)) = v0_0;
    if ((v0_0 == -1)) goto L_C02245A;
    v0_0 = *(int *)(((int)stk + 12));
    v0_1 = *(int *)0xC27091C;
    *(unsigned int *)(((int)stk + 16)) = ((((v0_0 << 1) + v0_0) << 2) + v0_1);
    if (((*(int *)(((*(int *)((((((v0_0 << 1) + v0_0) << 2) + v0_1) + 0x8))) + 0x10))) == ((((struct o60_int *)((*(int *)(((int)stk + 96)))))->v)))) goto L_C0223D6;
    if (((*(int *)(((*(int *)(((*(int *)(((int)stk + 16))) + 0x8))) + 0x14))) == ((((struct o60_int *)((*(int *)(((int)stk + 96)))))->v)))) goto L_C0223D6;
    if (((*(int *)(((*(int *)(((*(int *)(((int)stk + 16))) + 0x8))) + 0x18))) != ((((struct o60_int *)((*(int *)(((int)stk + 96)))))->v)))) goto L_C02240C;
    goto L_C0223D6;
    L_C02245A:;
    *(unsigned int *)(((int)stk + 28)) = 0x0;
    L_C02254A:;
    if (!(((int)(*(int *)(((int)stk + 28))) < (int)0x3))) goto L_C022552;
    v0_0 = *(int *)(((((*(int *)(((int)stk + 28))) << 2) + ((*(int *)(((*(int *)(((int)stk + 24))) + 0x8))) + 0x10)) + 0x0));
    *(unsigned int *)(((int)stk + 12)) = v0_0;
    if ((v0_0 == -1)) goto L_C022552;
    v0_0 = *(int *)(((int)stk + 12));
    v0_1 = *(int *)0xC27091C;
    *(unsigned int *)(((int)stk + 16)) = ((((v0_0 << 1) + v0_0) << 2) + v0_1);
    if (((*(int *)(((*(int *)((((((v0_0 << 1) + v0_0) << 2) + v0_1) + 0x8))) + 0x10))) == ((((struct o60_int *)((*(int *)(((int)stk + 96)))))->v)))) goto L_C0224BE;
    if (((*(int *)(((*(int *)(((*(int *)(((int)stk + 16))) + 0x8))) + 0x14))) == ((((struct o60_int *)((*(int *)(((int)stk + 96)))))->v)))) goto L_C0224BE;
    if (((*(int *)(((*(int *)(((*(int *)(((int)stk + 16))) + 0x8))) + 0x18))) != ((((struct o60_int *)((*(int *)(((int)stk + 96)))))->v)))) goto L_C022500;
    goto L_C0224BE;
    L_C022552:;
    if (((*(int *)(((int)stk + 32))) != 0)) goto L_C022564;
    v0_0 = ((((((struct o64_int *)((*(int *)(((int)stk + 96)))))->v)) + 0x5));
    L_C02256E:;
    *(unsigned int *)(((int)stk + 48)) = v0_0;
    v0_1 = *(int *)(((int)stk + 48));
    v0_0 = (v0_1);
    if (((int)v0_1 < (int)(*(int *)(((*(int *)(((*(int *)(((int)stk + 24))) + 0x4))) + 0x0))))) goto L_C02261C;
    *(unsigned int *)(((int)stk + 48)) = ((*(int *)(((int)stk + 48))) - (*(int *)(((*(int *)(((*(int *)(((int)stk + 24))) + 0x4))) + 0x0))));
    v0_0 = *(int *)(((int)stk + 44));
    *(unsigned int *)(((int)stk + 16)) = ((((v0_0 << 1) + v0_0) << 2) + (*(int *)0xC27091C));
    *(unsigned int *)(((int)stk + 28)) = 0x0;
    v0_0 = (0xC27091C);
    L_C022610:;
    if (!(((int)(*(int *)(((int)stk + 28))) < (int)0x3))) goto L_C0226BE;
    v0_0 = (0x60);
    if (((*(int *)(((((*(int *)(((int)stk + 28))) << 2) + ((*(int *)(((*(int *)(((int)stk + 16))) + 0x8))) + 0x4)) + 0x0))) != ((((struct o60_int *)((*(int *)(((int)stk + 96)))))->v)))) goto L_C0225D6;
    v0_0 = *(int *)(((int)stk + 48));
    v0_1 = *(int *)(((*(int *)(((*(int *)(((int)stk + 16))) + 0x4))) + 0x0));
    *(unsigned int *)(((int)stk + 48)) = ((v0_1 - v0_0) - 1);
    if (((int)((v0_1 - v0_0) - 1) >= 0)) goto L_C0226BE;
    *(unsigned int *)(((int)stk + 48)) = 0x0;
    goto L_C0226BE;
    L_C0226BE:;
    v0_0 = *(int *)(((int)stk + 48));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x54)) = *(struct mv3 *)(((*(int *)(((*(int *)(((int)stk + 16))) + 0x0))) + (((v0_0 << 1) + v0_0) << 2))); }
    goto L_C0226F2;
    L_C0225D6:;
    v0_0 = (0x60);
    if (((*(int *)(((((*(int *)(((int)stk + 28))) << 2) + ((*(int *)(((*(int *)(((int)stk + 16))) + 0x8))) + 0x10)) + 0x0))) != ((((struct o60_int *)((*(int *)(((int)stk + 96)))))->v)))) goto L_C02260A;
    v0_1 = *(int *)(((int)stk + 48));
    v0_0 = (v0_1);
    if (((int)v0_1 < (int)(*(int *)(((*(int *)(((*(int *)(((int)stk + 16))) + 0x4))) + 0x0))))) goto L_C0226BE;
    *(unsigned int *)(((int)stk + 48)) = ((*(int *)(((*(int *)(((*(int *)(((int)stk + 16))) + 0x4))) + 0x0))) - 1);
    goto L_C0226BE;
    L_C02260A:;
    *(unsigned int *)(((int)stk + 28)) = ((*(int *)(((int)stk + 28))) + 0x1);
    goto L_C022610;
    L_C02261C:;
    if (((int)(*(int *)(((int)stk + 48))) >= 0)) goto L_C0226BA;
    v0_0 = *(int *)(((int)stk + 44));
    *(unsigned int *)(((int)stk + 16)) = ((((v0_0 << 1) + v0_0) << 2) + (*(int *)0xC27091C));
    *(unsigned int *)(((int)stk + 28)) = 0x0;
    L_C0226AE:;
    if (((int)(*(int *)(((int)stk + 28))) < (int)0x3)) goto L_C02263C;
    goto L_C0226BE;
    L_C02263C:;
    v0_0 = (0x60);
    if (((*(int *)(((((*(int *)(((int)stk + 28))) << 2) + ((*(int *)(((*(int *)(((int)stk + 16))) + 0x8))) + 0x4)) + 0x0))) != ((((struct o60_int *)((*(int *)(((int)stk + 96)))))->v)))) goto L_C02266E;
    v0_0 = *(int *)(((int)stk + 48));
    v0_1 = *(int *)(((*(int *)(((*(int *)(((int)stk + 16))) + 0x4))) + 0x0));
    *(unsigned int *)(((int)stk + 48)) = (v0_1 + v0_0);
    if (((int)(v0_1 + v0_0) >= 0)) goto L_C0226BE;
    *(unsigned int *)(((int)stk + 48)) = 0x0;
    goto L_C0226BE;
    L_C02266E:;
    v0_0 = (0x60);
    if (((*(int *)(((((*(int *)(((int)stk + 28))) << 2) + ((*(int *)(((*(int *)(((int)stk + 16))) + 0x8))) + 0x10)) + 0x0))) != ((((struct o60_int *)((*(int *)(((int)stk + 96)))))->v)))) goto L_C0226A8;
    v0_1 = *(int *)(((int)stk + 48));
    *(unsigned int *)(((int)stk + 48)) = (0xFFFFFFFF - v0_1);
    v0_2 = *(int *)(((*(int *)(((*(int *)(((int)stk + 16))) + 0x4))) + 0x0));
    v0_0 = (v0_2);
    if (((int)(0xFFFFFFFF - v0_1) < (int)v0_2)) goto L_C0226BE;
    *(unsigned int *)(((int)stk + 48)) = ((*(int *)(((*(int *)(((*(int *)(((int)stk + 16))) + 0x4))) + 0x0))) - 1);
    goto L_C0226BE;
    L_C0226A8:;
    *(unsigned int *)(((int)stk + 28)) = ((*(int *)(((int)stk + 28))) + 0x1);
    goto L_C0226AE;
    L_C0226BA:;
    *(unsigned int *)(((int)stk + 16)) = (*(int *)(((int)stk + 24)));
    goto L_C0226BE;
    L_C022564:;
    v0_0 = ((((((struct o64_int *)((*(int *)(((int)stk + 96)))))->v)) - 5));
    goto L_C02256E;
    L_C0224BE:;
    v0_1 = *(int *)(((int)stk + 16));
    v0_2 = *(int *)(((*(int *)((v0_1 + 0x4))) + 0x0));
    v0_3 = *(int *)(((int)stk + 16));
    v0_0 = *(int *)(((*(int *)((v0_3 + 0x4))) + 0x0));
    v0_3 = *(int *)(((*(int *)((v0_3 + 0x8))) + 0x0));
    v0_4 = *(int *)(((int)stk + 36));
    w0_0 = ((((float (*)(int, int))(nlLength))((((*(int *)((v0_1 + 0x0))) + (((v0_2 << 1) + v0_2) << 2)) - 12), ((int)stk + 0))));
    FPUL_ = ((((v0_0 + v0_3) + v0_4) - 1));
    L_C022522:;
    w0_1 = w0_0;
    w0_1 = w0_1 + 250.0f * (float)FPUL_;
    *(float *)(((int)stk + 52)) = w0_1;
    w0_0 = (w0_1);
    if ((!((*(float *)(((int)stk + 56))) > w0_1))) goto L_C022544;
    *(unsigned int *)(((int)stk + 44)) = (*(int *)(((int)stk + 12)));
    *(float *)(((int)stk + 56)) = w0_0;
    *(unsigned int *)(((int)stk + 32)) = 0x1;
    L_C022544:;
    *(unsigned int *)(((int)stk + 28)) = ((*(int *)(((int)stk + 28))) + 0x1);
    goto L_C02254A;
    L_C022500:;
    v0_1 = *(int *)(((int)stk + 16));
    v0_0 = *(int *)(((*(int *)((v0_1 + 0x4))) + 0x0));
    v0_1 = *(int *)(((*(int *)((v0_1 + 0x8))) + 0x0));
    v0_2 = *(int *)(((int)stk + 36));
    w0_0 = ((((float (*)(int, int))(nlLength))((*(int *)(((*(int *)(((int)stk + 16))) + 0x0))), ((int)stk + 0))));
    FPUL_ = ((((v0_0 + v0_1) + v0_2) - 1));
    goto L_C022522;
    L_C0223D6:;
    v0_1 = *(int *)(((int)stk + 16));
    v0_2 = *(int *)(((*(int *)((v0_1 + 0x4))) + 0x0));
    v0_3 = *(int *)(((int)stk + 16));
    v0_0 = *(int *)(((*(int *)((v0_3 + 0x4))) + 0x0));
    v0_3 = *(int *)(((*(int *)((v0_3 + 0x8))) + 0x0));
    v0_4 = *(int *)(((int)stk + 40));
    w0_0 = ((((float (*)(int, int))(nlLength))((((*(int *)((v0_1 + 0x0))) + (((v0_2 << 1) + v0_2) << 2)) - 12), ((int)stk + 0))));
    FPUL_ = ((((v0_0 + v0_3) + v0_4) - 1));
    L_C02242E:;
    w0_1 = w0_0;
    w0_1 = w0_1 + 250.0f * (float)FPUL_;
    *(float *)(((int)stk + 52)) = w0_1;
    w0_0 = (w0_1);
    if ((!((*(float *)(((int)stk + 56))) > w0_1))) goto L_C02244C;
    *(unsigned int *)(((int)stk + 44)) = (*(int *)(((int)stk + 12)));
    *(float *)(((int)stk + 56)) = w0_0;
    L_C02244C:;
    *(unsigned int *)(((int)stk + 28)) = ((*(int *)(((int)stk + 28))) + 0x1);
    goto L_C022452;
    L_C02240C:;
    v0_1 = *(int *)(((int)stk + 16));
    v0_0 = *(int *)(((*(int *)((v0_1 + 0x4))) + 0x0));
    v0_1 = *(int *)(((*(int *)((v0_1 + 0x8))) + 0x0));
    v0_2 = *(int *)(((int)stk + 40));
    w0_0 = ((((float (*)(int, int))(nlLength))((*(int *)(((*(int *)(((int)stk + 16))) + 0x0))), ((int)stk + 0))));
    FPUL_ = ((((v0_0 + v0_1) + v0_2) - 1));
    goto L_C02242E;
    L_C02211E:;
    v0_1 = *(int *)(((int)stk + 48));
    v0_0 = (v0_1);
    if (((int)v0_1 < (int)(*(int *)(((*(int *)(((*(int *)(((int)stk + 24))) + 0x4))) + 0x0))))) goto L_C0221D2;
    *(unsigned int *)(((int)stk + 48)) = ((*(int *)(((int)stk + 48))) - (*(int *)(((*(int *)(((*(int *)(((int)stk + 24))) + 0x4))) + 0x0))));
    v0_0 = *(int *)(((int)stk + 44));
    *(unsigned int *)(((int)stk + 16)) = ((((v0_0 << 1) + v0_0) << 2) + (*(int *)0xC27091C));
    *(unsigned int *)(((int)stk + 28)) = 0x0;
    v0_0 = (0xC27091C);
    L_C0221C6:;
    if (((int)(*(int *)(((int)stk + 28))) < (int)0x3)) goto L_C022150;
    goto L_C0226BE;
    L_C022150:;
    v0_0 = (0x60);
    if (((*(int *)(((((*(int *)(((int)stk + 28))) << 2) + ((*(int *)(((*(int *)(((int)stk + 16))) + 0x8))) + 0x4)) + 0x0))) != ((((struct o60_int *)((*(int *)(((int)stk + 96)))))->v)))) goto L_C022188;
    v0_0 = *(int *)(((int)stk + 48));
    v0_1 = *(int *)(((*(int *)(((*(int *)(((int)stk + 16))) + 0x4))) + 0x0));
    *(unsigned int *)(((int)stk + 48)) = ((v0_1 - v0_0) - 1);
    if (((int)((v0_1 - v0_0) - 1) < 0)) goto L_C022182;
    goto L_C0226BE;
    L_C022182:;
    *(unsigned int *)(((int)stk + 48)) = 0x0;
    goto L_C0226BE;
    L_C022188:;
    v0_0 = (0x60);
    if (((*(int *)(((((*(int *)(((int)stk + 28))) << 2) + ((*(int *)(((*(int *)(((int)stk + 16))) + 0x8))) + 0x10)) + 0x0))) != ((((struct o60_int *)((*(int *)(((int)stk + 96)))))->v)))) goto L_C0221C0;
    v0_1 = *(int *)(((int)stk + 48));
    v0_0 = (v0_1);
    if (((int)v0_1 >= (int)(*(int *)(((*(int *)(((*(int *)(((int)stk + 16))) + 0x4))) + 0x0))))) goto L_C0221B4;
    goto L_C0226BE;
    L_C0221B4:;
    *(unsigned int *)(((int)stk + 48)) = ((*(int *)(((*(int *)(((*(int *)(((int)stk + 16))) + 0x4))) + 0x0))) - 1);
    goto L_C0226BE;
    L_C0221C0:;
    *(unsigned int *)(((int)stk + 28)) = ((*(int *)(((int)stk + 28))) + 0x1);
    goto L_C0221C6;
    L_C0221D2:;
    if (((int)(*(int *)(((int)stk + 48))) >= 0)) goto L_C022276;
    v0_0 = *(int *)(((int)stk + 44));
    *(unsigned int *)(((int)stk + 16)) = ((((v0_0 << 1) + v0_0) << 2) + (*(int *)0xC27091C));
    *(unsigned int *)(((int)stk + 28)) = 0x0;
    L_C02226A:;
    if (((int)(*(int *)(((int)stk + 28))) < (int)0x3)) goto L_C0221F2;
    goto L_C0226BE;
    L_C0221F2:;
    v0_0 = (0x60);
    if (((*(int *)(((((*(int *)(((int)stk + 28))) << 2) + ((*(int *)(((*(int *)(((int)stk + 16))) + 0x8))) + 0x4)) + 0x0))) != ((((struct o60_int *)((*(int *)(((int)stk + 96)))))->v)))) goto L_C022228;
    v0_0 = *(int *)(((int)stk + 48));
    v0_1 = *(int *)(((*(int *)(((*(int *)(((int)stk + 16))) + 0x4))) + 0x0));
    *(unsigned int *)(((int)stk + 48)) = (v0_1 + v0_0);
    if (((int)(v0_1 + v0_0) < 0)) goto L_C022222;
    goto L_C0226BE;
    L_C022222:;
    *(unsigned int *)(((int)stk + 48)) = 0x0;
    goto L_C0226BE;
    L_C022228:;
    v0_0 = (0x60);
    if (((*(int *)(((((*(int *)(((int)stk + 28))) << 2) + ((*(int *)(((*(int *)(((int)stk + 16))) + 0x8))) + 0x10)) + 0x0))) != ((((struct o60_int *)((*(int *)(((int)stk + 96)))))->v)))) goto L_C022264;
    v0_1 = *(int *)(((int)stk + 48));
    *(unsigned int *)(((int)stk + 48)) = (-v0_1);
    v0_2 = *(int *)(((*(int *)(((*(int *)(((int)stk + 16))) + 0x4))) + 0x0));
    v0_0 = (v0_2);
    if (((int)(-v0_1) >= (int)v0_2)) goto L_C022258;
    goto L_C0226BE;
    L_C022258:;
    *(unsigned int *)(((int)stk + 48)) = ((*(int *)(((*(int *)(((*(int *)(((int)stk + 16))) + 0x4))) + 0x0))) - 1);
    goto L_C0226BE;
    L_C022264:;
    *(unsigned int *)(((int)stk + 28)) = ((*(int *)(((int)stk + 28))) + 0x1);
    goto L_C02226A;
    L_C022276:;
    *(unsigned int *)(((int)stk + 16)) = (*(int *)(((int)stk + 24)));
    goto L_C0226BE;
    L_C022082:;
    if (((*(int *)(((*(int *)(((*(int *)(((int)stk + 24))) + 0x8))) + 0x14))) != (*(int *)(((*(int *)(((int)stk + 108))) + 0x10))))) goto L_C0220CC;
    if (((*(int *)(((int)stk + 44))) == -1)) goto L_C0220B6;
    v0_0 = *(int *)(((*(int *)(((*(int *)(((int)stk + 24))) + 0x4))) + 0x0));
    if (((int)((((struct o64_int *)((*(int *)(((int)stk + 96)))))->v)) >= (int)(((int)((unsigned int)((int)((unsigned int)(v0_0 - 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(v0_0 - 1))) ? 1u : 0u))) >> 1))) goto L_C022114;
    L_C0220B6:;
    *(unsigned int *)(((int)stk + 44)) = (*(int *)(((*(int *)(((*(int *)(((int)stk + 24))) + 0x8))) + 0x14)));
    *(unsigned int *)(((int)stk + 48)) = (((((struct o64_int *)((*(int *)(((int)stk + 96)))))->v)) - 5);
    goto L_C022114;
    L_C0220CC:;
    if (((*(int *)(((*(int *)(((*(int *)(((int)stk + 24))) + 0x8))) + 0x18))) != (*(int *)(((*(int *)(((int)stk + 108))) + 0x10))))) goto L_C022114;
    if (((*(int *)(((int)stk + 44))) == -1)) goto L_C022100;
    v0_0 = *(int *)(((*(int *)(((*(int *)(((int)stk + 24))) + 0x4))) + 0x0));
    if (((int)((((struct o64_int *)((*(int *)(((int)stk + 96)))))->v)) >= (int)(((int)((unsigned int)((int)((unsigned int)(v0_0 - 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(v0_0 - 1))) ? 1u : 0u))) >> 1))) goto L_C022114;
    L_C022100:;
    *(unsigned int *)(((int)stk + 44)) = (*(int *)(((*(int *)(((*(int *)(((int)stk + 24))) + 0x8))) + 0x18)));
    *(unsigned int *)(((int)stk + 48)) = (((((struct o64_int *)((*(int *)(((int)stk + 96)))))->v)) - 5);
    goto L_C022114;
    L_C021FC2:;
    if (((*(int *)(((*(int *)(((*(int *)(((int)stk + 24))) + 0x8))) + 0x8))) != (*(int *)(((*(int *)(((int)stk + 108))) + 0x10))))) goto L_C022014;
    *(unsigned int *)(((int)stk + 44)) = (*(int *)(((*(int *)(((*(int *)(((int)stk + 24))) + 0x8))) + 0x8)));
    v0_0 = (((((struct o64_int *)((*(int *)(((int)stk + 96)))))->v)));
    goto L_C021FE2;
    L_C022014:;
    if (((*(int *)(((*(int *)(((*(int *)(((int)stk + 24))) + 0x8))) + 0xC))) != (*(int *)(((*(int *)(((int)stk + 108))) + 0x10))))) goto L_C022038;
    *(unsigned int *)(((int)stk + 44)) = (*(int *)(((*(int *)(((*(int *)(((int)stk + 24))) + 0x8))) + 0xC)));
    *(unsigned int *)(((int)stk + 48)) = (((((struct o64_int *)((*(int *)(((int)stk + 96)))))->v)) + 0x5);
    goto L_C022038;
    L_C0214C0:;
    w0_0 = ((float (*)(int, int))(nlLength))(((*(int *)(((int)stk + 108))) + 0x4), (((int)stk + 0) + 0x48));
    *(float *)(((int)stk + 60)) = w0_0;
    v0_1 = (((struct o0_int *)0xC1EC71C)->v);
    v0_0 = (v0_1);
    w0_0 = (w0_0);
    if ((v0_1 == 0)) goto L_C021514;
    if ((v0_0 != 1)) goto L_C0214E2;
    if ((!(1800.0f > w0_0))) goto L_C02183E;
    if (((*(signed char *)(((*(int *)(((int)stk + 108))) + 0x0))) == 28)) goto L_C02187E;
    if (((*(signed char *)(((*(int *)(((int)stk + 108))) + 0x0))) == 8)) goto L_C02187E;
    if (((*(signed char *)(((*(int *)(((int)stk + 108))) + 0x0))) == 9)) goto L_C02187E;
    if (((*(signed char *)(((*(int *)(((int)stk + 108))) + 0x0))) == 10)) goto L_C02187E;
    L_C02183E:;
    if ((!(1500.0f > (*(float *)(((int)stk + 60)))))) goto L_C021866;
    if (((*(int *)(((*(int *)(((int)stk + 108))) + 0x10))) == ((((struct o60_int *)((*(int *)(((int)stk + 96)))))->v)))) goto L_C02187E;
    if (((*(signed char *)(((*(int *)(((int)stk + 108))) + 0x0))) == 20)) goto L_C02187E;
    L_C021866:;
    if ((900.0f > (*(float *)(((int)stk + 60))))) goto L_C02187E;
    if (!((((((struct o60_int *)((*(int *)(((int)stk + 96)))))->v)) != -1))) goto L_C02187E;
    v0_0 = *(int *)(((*(int *)(((int)stk + 108))) + 0x10));
    *(unsigned int *)(((int)stk + 20)) = ((((v0_0 << 1) + v0_0) << 2) + (*(int *)0xC27091C));
    if (((*(signed char *)(((*(int *)(((int)stk + 108))) + 0x0))) == 18)) goto L_C0218B6;
    if (((*(signed char *)(((*(int *)(((int)stk + 108))) + 0x0))) == 11)) goto L_C0218B6;
    if (((*(signed char *)(((*(int *)(((int)stk + 108))) + 0x0))) != 19)) goto L_C021926;
    goto L_C0218B6;
    L_C02187E:;
    v0_0 = (0x2);
    L_C021CC6:;
    *(unsigned int *)(((int)stk + 68)) = v0_0;
    goto L_C021EEE;
    L_C0218B6:;
    v0_0 = *(int *)(((int)stk + 20));
    v0_1 = *(int *)(((*(int *)((v0_0 + 0x4))) + 0x0));
    *(float *)(((int)stk + 56)) = (((float (*)(int, int))(nlLength))((((*(int *)((v0_0 + 0x0))) + (((v0_1 << 1) + v0_1) << 2)) - 12), ((*(int *)(((int)stk + 96))) + 0x7C)));
    w0_0 = ((float (*)(int, int))(nlLength))((*(int *)(((*(int *)(((int)stk + 20))) + 0x0))), ((*(int *)(((int)stk + 96))) + 0x7C));
    *(float *)(((int)stk + 52)) = w0_0;
    v0_0 = (0x38);
    if ((!(w0_0 > (*(float *)(((int)stk + 56)))))) goto L_C021916;
    v0_0 = *(int *)(((int)stk + 20));
    v0_1 = *(int *)(((*(int *)((v0_0 + 0x4))) + 0x0));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((((*(int *)((v0_0 + 0x0))) + (((v0_1 << 1) + v0_1) << 2)) - 12)); }
    L_C02196E:;
    if (((int)(*(signed char *)(((*(int *)(((int)stk + 108))) + 0x0))) <= (int)0x14)) goto L_C021A52;
    if (((int)(*(signed char *)(((*(int *)(((int)stk + 108))) + 0x0))) > (int)0x17)) goto L_C021A52;
    if (((int)((((struct o60_int *)((*(int *)(((int)stk + 96)))))->v)) < (int)0x38)) goto L_C0219A2;
    if (((int)((((struct o60_int *)((*(int *)(((int)stk + 96)))))->v)) <= (int)0x3A)) goto L_C0219BE;
    L_C0219A2:;
    if ((((((struct o60_int *)((*(int *)(((int)stk + 96)))))->v)) == 47)) goto L_C0219BE;
    if (!((!(400.0f > ((((struct o7C_float *)((*(int *)(((int)stk + 96)))))->v)))))) goto L_C0219BE;
    if ((!(400.0f > ((((struct o7C_float *)((*(int *)(((int)stk + 96)))))->v))))) goto L_C021A30;
    goto L_C021CC4;
    L_C0219BE:;
    v0_0 = (0x60);
    if ((((((struct o60_int *)((*(int *)(((int)stk + 96)))))->v)) == 0)) goto L_C0219E4;
    v0_1 = (((struct o60_int *)((*(int *)(((int)stk + 96)))))->v);
    v0_0 = (v0_1);
    if ((v0_1 == 33)) goto L_C0219E4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(0xC09C798); }
    L_C021CC4:;
    v0_0 = (0x1);
    goto L_C021CC6;
    L_C0219E4:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(0xC09C7A4); }
    goto L_C021CC4;
    L_C021A30:;
    v0_0 = (0x84);
    if ((1300.0f > ((((struct o84_float *)((*(int *)(((int)stk + 96)))))->v)))) goto L_C021A44;
    goto L_C021CC4;
    L_C021A44:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(0xC09C7A4); }
    goto L_C021CC4;
    L_C021A52:;
    if (((int)((((struct o60_int *)((*(int *)(((int)stk + 96)))))->v)) < (int)0x38)) goto L_C021A6E;
    if (((int)((((struct o60_int *)((*(int *)(((int)stk + 96)))))->v)) <= (int)0x3A)) goto L_C021B00;
    L_C021A6E:;
    if ((((((struct o60_int *)((*(int *)(((int)stk + 96)))))->v)) == 47)) goto L_C021B00;
    if ((!(((((struct o7C_float *)((*(int *)(((int)stk + 96)))))->v)) > 400.0f))) goto L_C021B00;
    if ((!(((((struct o84_float *)((*(int *)(((int)stk + 96)))))->v)) > -1000.0f))) goto L_C021B00;
    v0_0 = (0x84);
    if ((!(((((struct o84_float *)((*(int *)(((int)stk + 96)))))->v)) > 1000.0f))) goto L_C021AB8;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(0xC09C7B0); }
    goto L_C021CC4;
    L_C021AB8:;
    if (((int)(*(signed char *)(((*(int *)(((int)stk + 108))) + 0x0))) <= (int)0x18)) goto L_C021B74;
    v0_1 = (((struct o60_int *)((*(int *)(((int)stk + 96)))))->v);
    v0_0 = (v0_1);
    if ((v0_1 == 1)) goto L_C021B74;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(0xC09C7BC); }
    goto L_C021CC4;
    L_C021B74:;
    if ((!(-1800.0f > ((((struct o7C_float *)((*(int *)(((int)stk + 96)))))->v))))) goto L_C021C36;
    if ((!((*(float *)(((int)stk + 0))) > 1000.0f))) goto L_C021C36;
    w0_0 = (-4400.0f);
    if ((!(-4400.0f > (*(float *)(((int)stk + 8)))))) goto L_C021C00;
    v0_0 = (0x84);
    if ((!(((-(*(float *)(((int)stk + 8)))) + w0_0) > (((((struct o84_float *)((*(int *)(((int)stk + 96)))))->v)) + 4400.0f)))) goto L_C021BC2;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(0xC09C7C8); }
    goto L_C021CC4;
    L_C021BC2:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(0xC09C7D4); }
    goto L_C021CC4;
    L_C021C00:;
    v0_0 = (0x84);
    if ((!((((((struct o84_float *)((*(int *)(((int)stk + 96)))))->v)) + 4400.0f) > ((-(*(float *)(((int)stk + 8)))) + w0_0)))) goto L_C021C28;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(0xC09C7D4); }
    goto L_C021CC4;
    L_C021C28:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(0xC09C7C8); }
    goto L_C021CC4;
    L_C021C36:;
    if ((!(((((struct o7C_float *)((*(int *)(((int)stk + 96)))))->v)) > 1000.0f))) goto L_C021CC4;
    if ((!(-2500.0f > (*(float *)(((int)stk + 0)))))) goto L_C021CC4;
    w0_0 = (-4400.0f);
    if ((!(-4400.0f > (*(float *)(((int)stk + 8)))))) goto L_C021C92;
    v0_0 = (0x84);
    if ((!(((-(*(float *)(((int)stk + 8)))) + w0_0) > (((((struct o84_float *)((*(int *)(((int)stk + 96)))))->v)) + 4400.0f)))) goto L_C021C84;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(0xC09C7E0); }
    goto L_C021CC4;
    L_C021C84:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(0xC09C7EC); }
    goto L_C021CC4;
    L_C021C92:;
    v0_0 = (0x84);
    if ((!((((((struct o84_float *)((*(int *)(((int)stk + 96)))))->v)) + 4400.0f) > ((-(*(float *)(((int)stk + 8)))) + w0_0)))) goto L_C021CBA;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(0xC09C7EC); }
    goto L_C021CC4;
    L_C021CBA:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(0xC09C7E0); }
    goto L_C021CC4;
    L_C021B00:;
    if (((*(signed char *)(((*(int *)(((int)stk + 108))) + 0x0))) == 7)) goto L_C021B14;
    if (((*(signed char *)(((*(int *)(((int)stk + 108))) + 0x0))) != 6)) goto L_C021B42;
    L_C021B14:;
    if ((!(((((struct o84_float *)((*(int *)(((int)stk + 96)))))->v)) > -6000.0f))) goto L_C021B42;
    v0_0 = (0x7C);
    if ((!(-2200.0f > ((((struct o7C_float *)((*(int *)(((int)stk + 96)))))->v))))) goto L_C021B42;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(0xC09C7F8); }
    goto L_C021CC4;
    L_C021B42:;
    if ((((((struct o60_int *)((*(int *)(((int)stk + 96)))))->v)) == 78)) goto L_C021B5A;
    if ((((((struct o60_int *)((*(int *)(((int)stk + 96)))))->v)) != 78)) goto L_C021B74;
    L_C021B5A:;
    v0_0 = (0x6C);
    if (((int)(*(signed char *)(((*(int *)(((int)stk + 108))) + 0x0))) <= (int)0x7)) goto L_C021B74;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(0xC09C804); }
    goto L_C021CC4;
    L_C021916:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((*(int *)(((*(int *)(((int)stk + 20))) + 0x0)))); }
    goto L_C02196E;
    L_C021926:;
    v0_1 = *(int *)(((int)stk + 108));
    v0_2 = *(int *)(((*(int *)(((*(int *)(((int)stk + 20))) + 0x4))) + 0x0));
    v0_0 = (v0_1);
    if (((int)(*(int *)((v0_1 + 0x14))) <= (int)(((int)((unsigned int)((int)((unsigned int)(v0_2 - 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(v0_2 - 1))) ? 1u : 0u))) >> 1))) goto L_C021962;
    v0_0 = *(int *)(((int)stk + 20));
    v0_1 = *(int *)(((*(int *)((v0_0 + 0x4))) + 0x0));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((((*(int *)((v0_0 + 0x0))) + (((v0_1 << 1) + v0_1) << 2)) - 12)); }
    goto L_C02196E;
    L_C021962:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((*(int *)(((*(int *)(((int)stk + 20))) + 0x0)))); }
    goto L_C02196E;
    L_C0214E2:;
    if ((v0_0 != 2)) goto L_C0214EA;
    v0_1 = (((struct o8_int *)0xC1EC71C)->v);
    v0_0 = (v0_1);
    if ((v0_1 != 10)) goto L_C021DE0;
    *(float *)(((int)stk + 84)) = 0.0f;
    *(float *)(((int)stk + 88)) = 0.0f;
    *(unsigned int *)(((int)stk + 68)) = 0x3;
    if ((((((struct o80_float *)((*(int *)(((int)stk + 96)))))->v)) > -10.0f)) goto L_C021DA2;
    if ((!(((((struct o80_float *)((*(int *)(((int)stk + 96)))))->v)) > -215.0f))) goto L_C021D32;
    w0_0 = (1000.0f);
    L_C021D72:;
    *(float *)(((int)stk + 92)) = w0_0;
    goto L_C021EEE;
    L_C021D32:;
    if ((!(((((struct o80_float *)((*(int *)(((int)stk + 96)))))->v)) > -415.0f))) goto L_C021D48;
    w0_0 = (-3000.0f);
    L_C021D8C:;
    *(float *)(((int)stk + 92)) = w0_0;
    goto L_C021EEE;
    L_C021D48:;
    if ((!(((((struct o80_float *)((*(int *)(((int)stk + 96)))))->v)) > -615.0f))) goto L_C021D5E;
    w0_0 = (1000.0f);
    L_C021DA6:;
    *(float *)(((int)stk + 92)) = w0_0;
    goto L_C021EEE;
    L_C021D5E:;
    if ((!(((((struct o80_float *)((*(int *)(((int)stk + 96)))))->v)) > -815.0f))) goto L_C021D78;
    w0_0 = (-3000.0f);
    goto L_C021D72;
    L_C021D78:;
    if ((!(((((struct o80_float *)((*(int *)(((int)stk + 96)))))->v)) > -1015.0f))) goto L_C021D92;
    w0_0 = (1000.0f);
    goto L_C021D8C;
    L_C021D92:;
    if (!((!(((((struct o80_float *)((*(int *)(((int)stk + 96)))))->v)) > -1215.0f)))) goto L_C021DA2;
    *(unsigned int *)(((int)stk + 68)) = 0x2;
    goto L_C021EEE;
    L_C021DA2:;
    w0_0 = (-3000.0f);
    goto L_C021DA6;
    L_C021DE0:;
    if ((v0_0 == 8)) goto L_C021DE8;
    v0_0 = (0x2);
    L_C021EE2:;
    *(unsigned int *)(((int)stk + 68)) = v0_0;
    goto L_C021EEE;
    L_C021DE8:;
    if ((((((struct o60_int *)((*(int *)(((int)stk + 96)))))->v)) != 0)) goto L_C021E6C;
    v0_1 = *(signed char *)(((*(int *)(((int)stk + 108))) + 0x0));
    v0_0 = (v0_1);
    if ((v0_1 == 1)) goto L_C021E0E;
    if ((v0_0 == 2)) goto L_C021E24;
    if ((v0_0 == 3)) goto L_C021E3A;
    if (!((v0_0 == 4))) goto L_C021E68;
    *(float *)(((int)stk + 84)) = -429.0f;
    *(float *)(((int)stk + 88)) = 60.0f;
    w0_0 = (-5429.0f);
    goto L_C021E64;
    L_C021E68:;
    v0_0 = (0x3);
    goto L_C021EE2;
    L_C021E64:;
    *(float *)(((int)stk + 92)) = w0_0;
    goto L_C021E68;
    L_C021E3A:;
    *(float *)(((int)stk + 84)) = 429.0f;
    *(float *)(((int)stk + 88)) = 60.0f;
    w0_0 = (-4580.0f);
    goto L_C021E64;
    L_C021E24:;
    *(float *)(((int)stk + 84)) = -429.0f;
    *(float *)(((int)stk + 88)) = 60.0f;
    w0_0 = (-2429.0f);
    goto L_C021E64;
    L_C021E0E:;
    *(float *)(((int)stk + 84)) = 429.0f;
    *(float *)(((int)stk + 88)) = 60.0f;
    w0_0 = (-1580.0f);
    goto L_C021E64;
    L_C021E6C:;
    if ((((((struct o60_int *)((*(int *)(((int)stk + 96)))))->v)) != 1)) goto L_C021EA2;
    v0_0 = (0x2);
    if (((int)(*(signed char *)(((*(int *)(((int)stk + 108))) + 0x0))) <= (int)0x2)) goto L_C021E9A;
    *(float *)(((int)stk + 84)) = 0.0f;
    *(float *)(((int)stk + 88)) = 0.0f;
    *(float *)(((int)stk + 92)) = -3957.0f;
    v0_0 = (0x3);
    goto L_C021EEA;
    L_C021E9A:;
    (((struct o44_uint *)(((int)stk + 0)))->v) = v0_0;
    goto L_C021EEE;
    L_C021EA2:;
    if ((((((struct o60_int *)((*(int *)(((int)stk + 96)))))->v)) != 2)) goto L_C021ED8;
    if (((int)(*(signed char *)(((*(int *)(((int)stk + 108))) + 0x0))) >= (int)0x3)) goto L_C021ED0;
    *(float *)(((int)stk + 84)) = 0.0f;
    *(float *)(((int)stk + 88)) = 0.0f;
    *(float *)(((int)stk + 92)) = -3057.0f;
    v0_0 = (0x3);
    L_C021ED2:;
    *(unsigned int *)(((int)stk + 68)) = v0_0;
    goto L_C021EEE;
    L_C021ED0:;
    v0_0 = (0x2);
    goto L_C021ED2;
    L_C021ED8:;
    *(unsigned int *)(((int)stk + 68)) = 0x2;
    goto L_C021EEE;
    L_C0214EA:;
    goto L_C021EEE;
    L_C021514:;
    if ((!(2000.0f > w0_0))) goto L_C021526;
    if (((*(signed char *)(((*(int *)(((int)stk + 108))) + 0x0))) == 28)) goto L_C021574;
    L_C021526:;
    if ((!(1500.0f > (*(float *)(((int)stk + 60)))))) goto L_C021544;
    if (((*(int *)(((*(int *)(((int)stk + 108))) + 0x10))) == ((((struct o60_int *)((*(int *)(((int)stk + 96)))))->v)))) goto L_C021574;
    L_C021544:;
    if ((!(1200.0f > (*(float *)(((int)stk + 60)))))) goto L_C02155C;
    if (((int)(*(signed char *)(((*(int *)(((int)stk + 108))) + 0x0))) > (int)0x4)) goto L_C021574;
    L_C02155C:;
    if ((900.0f > (*(float *)(((int)stk + 60))))) goto L_C021574;
    if (!((((((struct o60_int *)((*(int *)(((int)stk + 96)))))->v)) != -1))) goto L_C021574;
    v0_0 = *(int *)(((*(int *)(((int)stk + 108))) + 0x10));
    v0_1 = *(int *)0xC27091C;
    *(unsigned int *)(((int)stk + 20)) = ((((v0_0 << 1) + v0_0) << 2) + v0_1);
    v0_0 = *(int *)(((*(int *)((((((v0_0 << 1) + v0_0) << 2) + v0_1) + 0x4))) + 0x0));
    v0_1 = (int)((unsigned int)((int)((unsigned int)(v0_0 - 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(v0_0 - 1))) ? 1u : 0u));
    v0_0 = ((v0_1 >> 1));
    if (((int)(*(int *)(((*(int *)(((int)stk + 108))) + 0x14))) <= (int)(v0_1 >> 1))) goto L_C0215E4;
    v0_0 = *(int *)(((int)stk + 20));
    v0_1 = *(int *)(((*(int *)((v0_0 + 0x4))) + 0x0));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((((*(int *)((v0_0 + 0x0))) + (((v0_1 << 1) + v0_1) << 2)) - 12)); }
    goto L_C0215F0;
    L_C021574:;
    v0_0 = (0x2);
    L_C021808:;
    *(unsigned int *)(((int)stk + 68)) = v0_0;
    goto L_C021EEE;
    L_C0215F0:;
    if (((int)(*(signed char *)(((*(int *)(((int)stk + 108))) + 0x0))) < (int)0x13)) goto L_C0216E0;
    if (!((1500.0f > ((((struct o7C_float *)((*(int *)(((int)stk + 96)))))->v))))) goto L_C021806;
    v0_1 = (((struct o60_int *)((*(int *)(((int)stk + 96)))))->v);
    v0_0 = (v0_1);
    if ((v0_1 == 21)) goto L_C021682;
    v0_1 = (((struct o60_int *)((*(int *)(((int)stk + 96)))))->v);
    v0_0 = (v0_1);
    if ((v0_1 == 24)) goto L_C021682;
    v0_1 = (((struct o60_int *)((*(int *)(((int)stk + 96)))))->v);
    v0_0 = (v0_1);
    if ((v0_1 == 25)) goto L_C021682;
    v0_1 = (((struct o60_int *)((*(int *)(((int)stk + 96)))))->v);
    v0_0 = (v0_1);
    if ((v0_1 == 26)) goto L_C021682;
    v0_1 = (((struct o60_int *)((*(int *)(((int)stk + 96)))))->v);
    v0_0 = (v0_1);
    if ((v0_1 == 27)) goto L_C021682;
    v0_1 = (((struct o60_int *)((*(int *)(((int)stk + 96)))))->v);
    v0_0 = (v0_1);
    if ((v0_1 == 28)) goto L_C021682;
    v0_1 = (((struct o60_int *)((*(int *)(((int)stk + 96)))))->v);
    v0_0 = (v0_1);
    if ((v0_1 == 29)) goto L_C021682;
    if ((((((struct o60_int *)((*(int *)(((int)stk + 96)))))->v)) != 20)) goto L_C021690;
    v0_1 = *(int *)(((int)stk + 96));
    v0_0 = (v0_1);
    FPUL_ = (0xC5FA0000);
    if ((!(-8000.0f > ((((struct o84_float *)(v0_1))->v))))) goto L_C021690;
    goto L_C021682;
    L_C021806:;
    v0_0 = (0x1);
    goto L_C021808;
    L_C021682:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(0xC09C750); }
    goto L_C021806;
    L_C021690:;
    v0_1 = (((struct o60_int *)((*(int *)(((int)stk + 96)))))->v);
    v0_0 = (v0_1);
    if ((v0_1 == 3)) goto L_C0216A8;
    v0_1 = (((struct o60_int *)((*(int *)(((int)stk + 96)))))->v);
    v0_0 = (v0_1);
    if (!((v0_1 != 44))) goto L_C0216A8;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(0xC09C744); }
    goto L_C021806;
    L_C0216A8:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(0xC09C75C); }
    goto L_C021806;
    L_C0216E0:;
    if ((((((struct o7C_float *)((*(int *)(((int)stk + 96)))))->v)) > 1500.0f)) goto L_C021700;
    if ((!(-8000.0f > ((((struct o84_float *)((*(int *)(((int)stk + 96)))))->v))))) goto L_C02177C;
    L_C021700:;
    if (((int)(*(signed char *)(((*(int *)(((int)stk + 108))) + 0x0))) >= (int)0x13)) goto L_C02177C;
    if (((int)(*(signed char *)(((*(int *)(((int)stk + 108))) + 0x0))) <= (int)0x5)) goto L_C02177C;
    v0_1 = (((struct o60_int *)((*(int *)(((int)stk + 96)))))->v);
    v0_0 = (v0_1);
    if ((v0_1 == 22)) goto L_C021760;
    v0_1 = (((struct o60_int *)((*(int *)(((int)stk + 96)))))->v);
    v0_0 = (v0_1);
    if ((v0_1 == 23)) goto L_C021760;
    v0_1 = (((struct o60_int *)((*(int *)(((int)stk + 96)))))->v);
    v0_0 = (v0_1);
    if ((v0_1 == 24)) goto L_C021760;
    v0_1 = (((struct o60_int *)((*(int *)(((int)stk + 96)))))->v);
    v0_0 = (v0_1);
    if ((v0_1 == 27)) goto L_C021760;
    v0_1 = (((struct o60_int *)((*(int *)(((int)stk + 96)))))->v);
    v0_0 = (v0_1);
    if ((v0_1 == 28)) goto L_C021760;
    v0_1 = (((struct o60_int *)((*(int *)(((int)stk + 96)))))->v);
    v0_0 = (v0_1);
    if (!((v0_1 != 29))) goto L_C021760;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(0xC09C768); }
    goto L_C021806;
    L_C021760:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(0xC09C774); }
    goto L_C021806;
    L_C02177C:;
    if ((!(((((struct o84_float *)((*(int *)(((int)stk + 96)))))->v)) > -9000.0f))) goto L_C021806;
    if (((int)(*(signed char *)(((*(int *)(((int)stk + 108))) + 0x0))) > (int)0x5)) goto L_C021806;
    v0_0 = (0x7C);
    if ((!(((((struct o7C_float *)((*(int *)(((int)stk + 96)))))->v)) > -2000.0f))) goto L_C0217FC;
    v0_1 = (((struct o60_int *)((*(int *)(((int)stk + 96)))))->v);
    v0_0 = (v0_1);
    if ((v0_1 == 46)) goto L_C0217FC;
    v0_1 = (((struct o60_int *)((*(int *)(((int)stk + 96)))))->v);
    v0_0 = (v0_1);
    if ((v0_1 == 35)) goto L_C0217FC;
    v0_1 = (((struct o60_int *)((*(int *)(((int)stk + 96)))))->v);
    v0_0 = (v0_1);
    if ((v0_1 == 36)) goto L_C0217FC;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(0xC09C78C); }
    goto L_C021806;
    L_C0217FC:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(0xC09C780); }
    goto L_C021806;
    L_C0215E4:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((*(int *)(((*(int *)(((int)stk + 20))) + 0x0)))); }
    goto L_C0215F0;
}

int FUN_0c05ff5c(int a4)
{
    int stk[8];
    register float t4;
    register float t12;
    register int t13;
    register float t14;
    register int t15;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = 0xC1758B4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x8)) = *(struct mv3 *)(0xC17598C); }
    *(float *)(((int)stk + 12)) = 0.0f;
    FUN_0c073e10((((int)stk + 0) + 0x8));
    nlSubVector3op((((int)stk + 0) + 0x14), (*(int *)(((int)stk + 0))), (((*(int *)(((int)stk + 4))) + 0xB8) + 0x30));
    *(float *)(((int)stk + 24)) = 0.0f;
    t4 = FUN_0c073c60((((int)stk + 0) + 0x14));
    if ((*(float *)0xC060084) > t4) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x14)) = *(struct mv3 *)((((int)stk + 0) + 0x8)); }
    } else {
        FUN_0c073c40((((int)stk + 0) + 0x14), (((int)stk + 0) + 0x14), (1.0f / t4));
    }
    t12 = FUN_0c073b40((((int)stk + 0) + 0x14), (((int)stk + 0) + 0x8));
    t13 = FUN_0c070730(t12);
    t14 = FUN_0c073b40((((int)stk + 0) + 0x14), 0xC17596C);
    t15 = t13;
    if (0.0f > t14) {
        t15 = (-t13);
    }
    return t15;
}

int FUN_0c06383e(int a4)
{
    int stk[7];
    register int t0;
    register float u3;
    register int t5;
    register int t6;
    register int t12;
    register int t16;
    register int t23;
    register int t7;

    t0 = *(int *)0xC1EC71C;
    t5 = t0;
    u3 = 1.0f;
    if (t0 == 2) {
        t5 = 0xC063940;
        u3 = (*(float *)0xC063940);
    }
    *(float *)0xC13B004 = u3;
    t6 = 0x0;
    for (;;) {
        if ((int)t6 >= (int)(*(int *)((a4 + 0x4)))) {
            break;
        }
        t7 = t6;
        t5 = 0x80;
        t7 = (t7 << 8);
        t7 = (t7 + (*(int *)((a4 + 0x0))));
        *(unsigned int *)((t7 + t5)) = 0x0;
        t5 = (FUN_0c05f72a(t7));
        t5 = (FUN_0c05f6fe(t7));
        t6 = (t6 + 0x1);
    }
    t12 = *(int *)((a4 + 0x18));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x40)) = *(struct mv3 *)(((*(int *)((((*(int *)0xC1EC71C) << 2) + 0xC13B108))) + (((t12 << 1) + t12) << 2))); }
    t16 = FUN_0c0638e6(a4);
    FUN_0c063a2a(a4, t16);
    t23 = 0x5A;
    if ((*(int *)0xC1EC71C) == 2) {
    } else {
        t23 = (*(int *)((((*(int *)((a4 + 0x14))) << 2) + 0xC10FA30)));
    }
    (((struct o58_uint *)(a4))->v) = t23;
    *(unsigned int *)((a4 + 0xC)) = ((*(int *)((a4 + 0xC))) + 0x1);
    return FUN_0c040bec(0x3, (*(int *)((a4 + 0x14))));
}

int FUN_0c027324(void)
{
    register int t0;
    register int t4;

    t0 = pdGetPeripheral(0x6);
    if (((*(int *)((t0 + 0x10))) & 0x400) != 0) {
        t4 = *(int *)0xC270D04;
        *(unsigned int *)0xC270D04 = (t4 ^ 0x1);
        if ((t4 ^ 0x1) != 0) {
            { struct mv9 { int w[9]; }; *(struct mv9 *)(0xC270B94) = *(struct mv9 *)(0xC270B70); }
            FUN_0c032210(0x0, 0xC09D868, 0xC270BBC, 0x0, 0x0, 0x0, 0x0);
        } else {
            { struct mv9 { int w[9]; }; *(struct mv9 *)(0xC270B70) = *(struct mv9 *)(0xC270B94); }
        }
        return 0x0;
    }
    if ((*(int *)0xC270D04) != 0) {
        if (((*(int *)((t0 + 0x10))) & 2) != 0) {
            *(unsigned int *)0xC270D04 = 0x0;
            { struct mv9 { int w[9]; }; *(struct mv9 *)(0xC270B70) = *(struct mv9 *)(0xC270B94); }
            return 0x0;
        }
        return FUN_0c027bfa();
    }
    return FUN_0c027408();
}

int CalcShadow2Matrix(int a4, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    int stk[3];
    register int t0;
    register float t5;

    t0 = nlGetMatrix8(0x0);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(t0) = *(struct mv3 *)(a4); }
    *(float *)(((int)stk + 0)) = (-((((struct o8_float *)(a4))->v)));
    *(float *)(((int)stk + 8)) = (*(float *)((a4 + 0x0)));
    *(float *)(((int)stk + 4)) = 0.0f;
    FUN_0c073e90(((int)stk + 0));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x20)) = *(struct mv3 *)(((int)stk + 0)); }
    nlLoadMatrix8(0x0);
    t5 = FUN_0c073c60(a4);
    return (FUN_0c074f20(t5));
}

int CarSel_SetLight(void)
{
    int stk[3];

    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(0xC10CE50); }
    FUN_0c073360();
    nlRotateAY((unsigned short)((((struct o6_short *)0xC2B3190)->v)));
    nlRotateAX((unsigned short)((((struct o4_short *)0xC2B3190)->v)));
    FUN_0c072230(((int)stk + 0), 0xC2B3184);
    nlPopMatrix(0x1);
    nlObjPutSetLightDirectionV(0xC2B3184);
    return (FUN_0c076130(((((struct o0_float *)0xC2B3190)->v))));
}

void FUN_0c0490e6(Stk5 s)
{
    int stk[20];
    register float u1;

    stk[7] = s.w[0];
    stk[8] = s.w[1];
    stk[9] = s.w[2];
    stk[10] = s.w[3];
    stk[11] = s.w[4];
    u1 = ((FUN_0c073b40((((int)stk + 4) + 0x24), (((int)stk + 4) + 0x30))) * (1.0f + 1.0f));
    u1 = -u1;
    nlScaleUnitVector((((int)stk + 4) + 0xC), (((int)stk + 4) + 0x24), u1);
    nlAddVector3op(((int)stk + 4), (((int)stk + 4) + 0xC), (((int)stk + 4) + 0x30));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(s.w[0]) = *(struct mv3 *)(((int)stk + 4)); }
}

void FUN_0c018c96(int a4, int a5, int a6, int a7)
{
    (((struct o0_uint *)0xC177E4C)->v) = a4;
    (((struct o4_uint *)0xC177E4C)->v) = a5;
    (((struct o8_uint *)0xC177E4C)->v) = a6;
    if (a7 == 1) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC177E40) = *(struct mv3 *)(0xC0A2D14); }
    }
    if (a7 == 0) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC177E34) = *(struct mv3 *)(0xC177E4C); }
        (((struct oC_float *)0xC177E4C)->v) = 1.0f;
        (((struct o10_float *)0xC177E4C)->v) = 0.0f;
    }
}

void selectLoadAxes(void)
{
    int stk[12];

    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x24)) = *(struct mv3 *)(0xC10C938); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x18)) = *(struct mv3 *)(0xC10C944); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0xC)) = *(struct mv3 *)(0xC10C950); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(0xC10C95C); }
}

int SetAdvCamera(int a4, int a5)
{
    register int t0;

    t0 = 0x3;
    if (((int)a5 >= 0) && ((int)a5 <= (int)0x4)) {
        t0 = a5;
    }
    *(unsigned int *)0xC11CFA8 = t0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC177E74) = *(struct mv3 *)(a4); }
    FUN_0c018c96(0x0, 0x0, 0x0, 0x0);
    t0 = FUN_0c018b00(0x8);
    *(unsigned int *)0xC177E80 = 0x1;
    return t0;
}

int FUN_0c02d826(int a4)
{
    register int t1;

    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC2777E4) = *(struct mv3 *)(a4); }
    (((struct o0_uint *)0xC2777F0)->v) = 0x0;
    (((struct o8_float *)0xC2777F0)->v) = 0.0f;
    (((struct oC_float *)0xC2777F0)->v) = 100.0f;
    (((struct o10_uint *)0xC2777F0)->v) = 0x0;
    t1 = CheckAreaGrid(a4, (*(int *)0xC17591C));
    (((struct o4_uint *)0xC2777F0)->v) = t1;
    return t1;
}

int FUN_0c06e5f2(void)
{
    (((struct o0_uint *)0xC2BB3AC)->v) = (*(int *)0xC177D58);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC2BB3B0) = *(struct mv3 *)(0xC177D38); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC2BB3BC) = *(struct mv3 *)(0xC177D44); }
    (((struct o1C_uchar *)0xC2BB3AC)->v) = (*(signed char *)0xC177D50);
    (((struct o1D_uchar *)0xC2BB3AC)->v) = (*(signed char *)0xC177D51);
    (((struct o1E_uchar *)0xC2BB3AC)->v) = (*(signed char *)0xC177D52);
    (((struct o1F_uchar *)0xC2BB3AC)->v) = (*(signed char *)0xC177D53);
    (((struct o20_uchar *)0xC2BB3AC)->v) = (*(signed char *)0xC177D54);
    (((struct o21_uchar *)0xC2BB3AC)->v) = (*(signed char *)0xC177D55);
    (((struct o24_float *)0xC2BB3AC)->v) = (*(float *)0xC177D9C);
    return 0xC2BB3D0;
}

Stk3 getReplayPoint(void)
{
    int stk[3];
    register int t0;

    t0 = *(int *)0xC2ADA60;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(((((t0 << 1) + t0) << 2) + (*(int *)0xC2A59CC))); }
    return *(Stk3 *)(((int)stk + 0));
}

void GetRotVec(int a4, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    register int t0;

    t0 = nlGetMatrix8(0x0);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(a4) = *(struct mv3 *)((t0 + 0x20)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0xC)) = *(struct mv3 *)((t0 + 0x10)); }
}

int FUN_0c05fdac(void)
{
    FUN_0c05b3d4(0xC2B9CDC, 0x48);
    FUN_0c05b3d4(0xC2B9D24, 0x1A4);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC2B9CBC) = *(struct mv3 *)(0xC10D9BC); }
    (((struct o0_uint *)0xC13AFF0)->v) = 0x0;
    (((struct o4_uint *)0xC13AFF0)->v) = 0x0;
    return 0xC13AFF0;
}

int FUN_0c064f6e(int a4)
{
    { struct mv16 { int w[16]; }; *(struct mv16 *)((a4 + 0x40)) = *(struct mv16 *)((FUN_0c05f434())); }
    return FUN_0c068166(a4, (a4 + 0x70));
}

int FUN_0c01e000(int a4)
{
    register int t1;

    (((struct o30_float *)0xC1ECCEC)->v) = 0.0f;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC1ECD20) = *(struct mv3 *)((*(int *)((a4 + 0x18)))); }
    t1 = (((struct o0_int *)0xC1ECCEC)->v);
    *(unsigned int *)0xC1ECD2C = t1;
    return t1;
}

void FUN_0c076230(float f4, float f5, float f6)
{
    (((struct o0_float *)0xC147500)->v) = f4;
    (((struct o4_float *)0xC147500)->v) = f5;
    (((struct o8_float *)0xC147500)->v) = f6;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC147510) = *(struct mv3 *)(0xC147500); }
}

void FUN_0c018c18(int a4)
{
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC177DE8) = *(struct mv3 *)(a4); }
}

void FUN_0c018c78(int a4)
{
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC177E14) = *(struct mv3 *)(a4); }
}

void FUN_0c026bd6(int a4)
{
    { struct mv3 { int w[3]; }; *(struct mv3 *)(a4) = *(struct mv3 *)(0xC270B5C); }
}

void FUN_0c05b3ea(void)
{
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC2B968C) = *(struct mv3 *)(0xC147500); }
}

void FUN_0c05f43a(int a4)
{
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC136D84) = *(struct mv3 *)(a4); }
}
