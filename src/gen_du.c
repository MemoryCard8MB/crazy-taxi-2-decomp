/* Straight-line functions with calls and guards (batch gen_du): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[2]; } Stk2;
typedef struct { int w[5]; } Stk5;
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o10_ushort { char p[0x10]; unsigned short v; };
struct o11_uchar { char p[0x11]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o160_float { char p[0x160]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_int { char p[0x28]; int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_int { char p[0x2C]; int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o30_int { char p[0x30]; int v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o34_int { char p[0x34]; int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o38_int { char p[0x38]; int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3C_int { char p[0x3C]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o58_int { char p[0x58]; int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5C_int { char p[0x5C]; int v; };
struct o63_uchar { char p[0x63]; unsigned char v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_int { char p[0x84]; int v; };
struct o88_int { char p[0x88]; int v; };
struct o88_uint { char p[0x88]; unsigned int v; };
struct o8C_int { char p[0x8C]; int v; };
struct oAC_int { char p[0xAC]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uchar { char p[0xC]; unsigned char v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oC_ushort { char p[0xC]; unsigned short v; };
struct oD_uchar { char p[0xD]; unsigned char v; };
struct oE_uchar { char p[0xE]; unsigned char v; };
struct oE_ushort { char p[0xE]; unsigned short v; };
struct oF_uchar { char p[0xF]; unsigned char v; };
struct oF8_int { char p[0xF8]; int v; };
struct oF8_uint { char p[0xF8]; unsigned int v; };
struct oFE_uchar { char p[0xFE]; unsigned char v; };
struct oFF_uchar { char p[0xFF]; unsigned char v; };
int ADXF_OpenAfs(int, int);
int End_Adv_Title_LOGO(float);
int FUN_0c018b00(int);
int FUN_0c018b1c(int);
int FUN_0c018b22(int, int);
int FUN_0c019916(void);
int FUN_0c01b9c4(void);
int FUN_0c01d190(void);
int FUN_0c01e3cc(int);
int FUN_0c01e6f0(void);
int FUN_0c01eaea(void);
int FUN_0c02024c(void);
int FUN_0c020be0(void);
int FUN_0c022d9c(int, int);
int FUN_0c026ce6(void);
int FUN_0c027408(int);
int FUN_0c027bfa(int);
int FUN_0c027f28(int);
int FUN_0c027fbe(float, float);
int FUN_0c02803a(int, int, int, int);
float FUN_0c02806c(int);
int FUN_0c028196(void);
int FUN_0c0281b6(int);
int FUN_0c0281d4(int, int);
int FUN_0c02842e(int);
int FUN_0c02897a(int, int, int);
int FUN_0c029528(void);
int FUN_0c029574(int);
int FUN_0c032210(int, int, int, int, int, int, int);
int FUN_0c032942(int, int, int, int, int);
int FUN_0c03346e(int, int, int, int);
int FUN_0c033578(int, int, float, float, float);
int FUN_0c03386a(int);
int FUN_0c03393c(float);
int FUN_0c033942(float);
int FUN_0c0339c0(int);
int FUN_0c0339fc(int);
int FUN_0c033e38(int, int, int);
int FUN_0c034320(int, int);
int FUN_0c0343b8(int, int);
int FUN_0c03457c(void);
int FUN_0c034804(int, float, float);
int FUN_0c034928(int, int, int, int, int);
int FUN_0c03e2a0(int);
int FUN_0c03e4d0(int);
int FUN_0c03e806(int, int);
int FUN_0c03ef3e(void);
int FUN_0c03f154(int);
int FUN_0c03f15e(int);
int FUN_0c03f164(int);
int FUN_0c047624(int);
int FUN_0c0491d8(void);
int FUN_0c04b180(int);
int FUN_0c0506c2(void);
int FUN_0c050740(void);
int FUN_0c052942(void);
int FUN_0c052dba(int, int, float, float);
int FUN_0c052fcc(void);
int FUN_0c05305e(int, int);
int FUN_0c05872e(int, int);
int FUN_0c058782(int, int, int, int, int);
int FUN_0c058e82(void);
int FUN_0c058f64(int, int, int, int);
int FUN_0c05b586(int);
int FUN_0c05f470(int, int, float, float);
int FUN_0c05f6f8(int, int, int);
int FUN_0c05f6fe(int);
int FUN_0c05f98c(void);
int FUN_0c05fab8(float, float);
float FUN_0c05fd2a(void);
int FUN_0c06017e(void);
int FUN_0c0602f8(int);
int FUN_0c060354(int, int, int);
int FUN_0c0621e0(int);
int FUN_0c06356c(int);
int FUN_0c0636b4(int);
int FUN_0c066226(int);
int FUN_0c0673da(int);
int FUN_0c069e54(void);
int FUN_0c069fbe(void);
int FUN_0c072230(int, int);
int FUN_0c072290(int, int);
int FUN_0c073360(void);
int FUN_0c073a30(float, float, float);
int FUN_0c073a60(int);
float FUN_0c073b40(int, int);
float FUN_0c073c60(int);
int FUN_0c073e10(int);
int FUN_0c074f20(float);
int FUN_0c076230(float, float, float);
int FUN_0c078800(int, int, int);
int FUN_0c078820(int, int, int);
int FUN_0c07ff00(void);
int FUN_0c0800c8(int, int);
int FUN_0c14e916(int);
int FUN_0c14eb7e(int);
int FUN_0c1500d2(int, int, int);
int FUN_0c1503dc(int);
int Voice_ShutUp(int);
int camSetTarget(int, int);
int gdc_FileLoadInit(void);
int lcdSync(int);
extern int memcpy();
int memset(int, int, int);
int mpvvlc_InitMbai(void);
int nlAddVector3op(int, int, int);
int nlGetMatrix(int);
int nlInitEvent(void);
int nlLineFog(int);
int nlMatrixMode(int);
int nlObjPut(int);
int nlObjPutUseViewMatrix(int);
int nlOuterProduct(int, int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
float nlRoundUp(float);
int nlScale(float, float, float);
int nlScaleUnitVector(int, int, float);
int nlScaleV(int);
int nlSubVector3op(int, int, int);
float nlTan(int);
int pdGetPeripheral(int);
int pfPutSEGALogo(void);
int pfSize(float, float);
float FUN_0c04d448(int a4, float f4, float f5);
int FUN_0c063458(int a4, float f4);
int FUN_0c058974(int a4, int a5, int a6);
int FUN_0c0385c4(void);
int FUN_0c06db4c(int a4, int a5, int a6, int a7);
int FUN_0c05bbd0(int a4, int a5, int a6, float f4);
int FUN_0c065e82(int a4, int a5, int a6);
int FUN_0c053510(void);
int FUN_0c03db44(void);
int FUN_0c058518(void);
int FUN_0c0613d2(int a4);
int FUN_0c053668(int a4, int a5, int a6, Stk2 s, float f4);
int FUN_0c03da60(int a4, int a5);
int FUN_0c0527c4(int a4, int a5);
int FUN_0c01efd2(void);
int FUN_0c065a74(int a4, int a5);
int FUN_0c06da42(int a4, int a5, int a6, int a7);
int FUN_0c03d53a(void);
int FUN_0c033128(int a4, int a5, int a6, int a7);
int FUN_0c01be2c(int a4, int a5, int a6, int a7);
int FUN_0c060728(void);
int FUN_0c064656(int a4);
int FUN_0c061a10(void);
int FUN_0c05bd5c(int a4, int a5, int a6, int a7);
void FUN_0c019898(float f4);
int FUN_0c060564(void);
int FUN_0c027324(void);
int FUN_0c036972(void);
int FUN_0c03854c(void);
int FUN_0c01c134(int a4, int a5, int a6, int a7);
int FUN_0c065b34(int a4, int a5);
int FUN_0c06183a(int a4);
int FUN_0c065cf0(int a4, int a5, int a6);
int FUN_0c06136c(int a4);
int FUN_0c061980(int a4);
float FUN_0c05d078(int a4, int a5, int a6, int a7);
int FUN_0c05edfc(int a4);
int FUN_0c025fa4(void);
void FUN_0c01c1aa(float f4);
int FUN_0c01ba02(void);
int FUN_0c01d1d8(int a4, int a5, int a6, int a7);
int FUN_0c0258a2(void);
int FUN_0c060f4e(void);
int FUN_0c025754(void);
int FUN_0c01dd88(int a4, int a5, int a6);
int FUN_0c069f70(void);
int FUN_0c023176(void);
int FUN_0c025ba8(void);
int FUN_0c0490e6(Stk5 s);
int FUN_0c024708(void);
int FUN_0c0253a2(void);
int FUN_0c0254de(void);
int FUN_0c025cfe(void);
int FUN_0c025e4e(void);
int FUN_0c05ee5c(void);
int FUN_0c069c78(int a4);
int FUN_0c02562c(void);
int FUN_0c0658d2(int a4);
int FUN_0c065894(int a4);
int FUN_0c065f46(int a4, int a5);
int FUN_0c01e706(int a4);
int FUN_0c0197f6(float f4);

float FUN_0c04d448(int a4, float f4, float f5)
{
    int stk[7];
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t7;
    register float u11;
    register float u12;
    register int t13;
    register float u28;
    register float u35;
    register float u37;
    register float u57;
    register int t6;
    register float u8;
    register float u9;
    register float u10;
    register int t39;
    register int t41;
    register float u42;

    *(float *)(((int)stk + 0)) = f4;
    t4 = *(int *)((a4 + 0x0));
    if (((int)t4 >= 0) && (t3 = *(int *)((a4 + 0x18)), t3 != 0)) {
        t2 = 0xC04D584;
        t5 = a4;
        t7 = (a4 + 0x18);
        u11 = f4;
        u12 = f5;
        for (;;) {
            t13 = *(int *)((t7 + 0x0));
            if ((int)t13 > 0) {
                t2 = (*(int *)((t7 + 0x0)));
                if ((t2 & 8) != 0) {
                    t7 = (t7 + 0x4);
                    t6 = (*(int *)((t7 + 0x0)));
                    t4 = t6;
                    t6 = (t6 << 1);
                    t6 = (t6 + t4);
                } else {
                    t7 = (t7 + 0x4);
                    t6 = (*(int *)((t7 + 0x0)));
                }
                t7 = (t7 + 0x4);
                if ((int)t6 > 0) {
                    for (;;) {
                        if (((*(int *)((t7 + 0x0))) & 0x1) != 0) {
                            t5 = t7;
                            t2 = (FUN_0c072230(t5, (((int)stk + 0) + 0x10)));
                            t5 = ((int)stk + 0);
                            t5 = (t5 + 0x10);
                            t2 = (FUN_0c073e10(t5));
                            t7 = (t7 + 0xC);
                            t5 = t7;
                            t2 = (FUN_0c072290(t5, (((int)stk + 0) + 0x4)));
                            t5 = ((int)stk + 0);
                            t7 = (t7 + 0xC);
                            t5 = (t5 + 0x10);
                            u8 = (FUN_0c073b40(t5, (((int)stk + 0) + 0x4)));
                            u11 = u8;
                            u11 = (u11 * (1.0f + 1.0f));
                            t2 = 0x4;
                            t5 = ((int)stk + 0);
                            u10 = (*(float *)((((int)stk + 0) + t2)));
                            t2 = 0x10;
                            u9 = u11;
                            u9 = (u9 * u10);
                            u10 = (*(float *)((((int)stk + 0) + t2)));
                            t2 = 0x10;
                            u10 = (u10 - u9);
                            *(float *)((((int)stk + 0) + t2)) = u10;
                            t2 = 0x8;
                            u8 = (*(float *)((((int)stk + 0) + t2)));
                            t2 = 0x14;
                            u10 = -1.0f;
                            u28 = u10;
                            u28 = u28 + u8 * u11;
                            u10 = u28;
                            u9 = (*(float *)((((int)stk + 0) + t2)));
                            t2 = 0x14;
                            u9 = (u9 - u10);
                            *(float *)((((int)stk + 0) + t2)) = u9;
                            t2 = 0xC;
                            u10 = (*(float *)((((int)stk + 0) + t2)));
                            t2 = 0x18;
                            u11 = (u11 * u10);
                            u10 = (*(float *)((((int)stk + 0) + t2)));
                            t2 = 0x18;
                            u10 = (u10 - u11);
                            *(float *)((((int)stk + 0) + t2)) = u10;
                            t5 = (t5 + 0x10);
                            u8 = (FUN_0c073c60(t5));
                            u11 = 0.5f;
                            u11 = (u11 / u8);
                            t2 = 0x10;
                            u8 = (*(float *)(((int)stk + 0)));
                            u10 = (*(float *)((((int)stk + 0) + t2)));
                            t2 = 0x18;
                            u9 = 0.5f;
                            u10 = (u10 * u11);
                            u35 = u9;
                            u35 = u35 + u8 * u10;
                            u9 = u35;
                            u8 = f5;
                            *(float *)((t7 + 0x0)) = u9;
                            t7 = (t7 + 0x4);
                            u10 = (*(float *)((((int)stk + 0) + t2)));
                            u9 = 0.5f;
                            u10 = (u10 * u11);
                            u37 = u9;
                            u37 = u37 + u8 * u10;
                            u9 = u37;
                            *(float *)((t7 + 0x0)) = u9;
                            t4 = (*(int *)((t7 + 0x0)));
                            t4 = (t4 | 0x1);
                            *(unsigned int *)((t7 + 0x0)) = t4;
                            t7 = (t7 + 0x4);
                        } else {
                            t7 = (t7 + 0x8);
                            t39 = t3;
                            t41 = t5;
                            u42 = u12;
                        }
                        u12 = u42;
                        t3 = t39;
                        t6 = (t6 - 1);
                        t5 = t41;
                        if ((int)t6 <= 0) {
                            break;
                        }
                    }
                }
                continue;
            }
            if ((int)t13 < 0) {
                t7 = (t7 + 0x50);
                continue;
            }
            break;
        }
        u57 = u8;
    }
    return u57;
}

int FUN_0c063458(int a4, float f4)
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
    register int t14;

    t0 = (((struct o58_int *)(a4))->v);
    (((struct o58_uint *)(a4))->v) = (t0 - 1);
    t1 = 0x58;
    t2 = (t0 - 1);
    t0 = a4;
    t3 = 0x0;
    t4 = 0x0;
    for (;;) {
        if ((int)t4 >= (int)(*(int *)((t0 + 0x4)))) {
            break;
        }
        t2 = (*(int *)((t0 + 0x0)));
        t1 = t4;
        t5 = 0x80;
        t1 = (t1 << 8);
        t1 = (t1 + t2);
        t1 = (*(int *)((t5 + t1)));
        t6 = t0;
        t7 = t3;
        t8 = t4;
        if (t1 == 1) {
            t1 = 0x58;
            if ((int)(*(int *)((t0 + t1))) <= 0) {
                t2 = (*(int *)((t0 + 0x0)));
                t9 = ((t4 << 8) + t2);
                t2 = 0xC07FF00;
                t5 = t9;
                t5 = (t5 + 0x70);
                t1 = 0xC;
                t1 = (FUN_0c07ff00());
            } else {
                t9 = t5;
                t10 = t2;
                t6 = t0;
                t7 = t3;
                t8 = t4;
            }
            t14 = t9;
            t9 = t10;
        } else {
            t14 = t5;
            t9 = t2;
        }
        t5 = t14;
        t2 = t9;
        t0 = t6;
        t3 = t7;
        t4 = (t8 + 0x1);
    }
    t4 = t1;
    t1 = t5;
    t5 = t2;
    t2 = t3;
    t6 = t3;
    for (;;) {
        if ((int)t2 >= (int)(*(int *)((t0 + 0x4)))) {
            break;
        }
        t5 = (*(int *)((t0 + 0x0)));
        t4 = t2;
        t1 = 0x80;
        t4 = (t4 << 8);
        t4 = (t4 + t5);
        t4 = (*(int *)((t1 + t4)));
        t2 = (t2 + 0x1);
        if (t4 == 3) {
            t6 = (t6 + 0x1);
        }
    }
    t1 = *(int *)((t0 + 0x4));
    if (t6 == t1) {
        t2 = t4;
        t5 = t3;
        for (;;) {
            if ((int)t5 >= (int)(*(int *)((t0 + 0x4)))) {
                break;
            }
            t6 = t5;
            t2 = 0x80;
            t6 = (t6 << 8);
            *(unsigned int *)((((*(int *)((t0 + 0x0))) + t6) + t2)) = 0x4;
            t2 = 0x8;
            t5 = (t5 + 0x1);
            t6 = (t6 + (*(int *)((t0 + 0x0))));
            *(float *)((t6 + t2)) = 1.0f;
        }
        t5 = t2;
    } else {
        t5 = t4;
    }
    t2 = t5;
    t4 = t1;
    t1 = t3;
    t5 = t3;
    t6 = t3;
    t7 = t3;
    for (;;) {
        if ((int)t5 >= (int)(*(int *)((t0 + 0x4)))) {
            break;
        }
        t1 = t5;
        t2 = 0xFE;
        t1 = (t1 << 8);
        t2 = (*(signed char *)((((*(int *)((t0 + 0x0))) + t1) + t2)));
        t3 = (t2 & 1) != 0;
        t2 = (*(int *)((t0 + 0x0)));
        if (t3) {
            t7 = (t7 + 0x1);
        }
        t4 = 0x80;
        t2 = (t2 + t1);
        t2 = (*(int *)((t4 + t2)));
        t5 = (t5 + 0x1);
        if (t2 == 5) {
            t6 = (t6 + 0x1);
        }
    }
    if (t7 == (*(int *)((t0 + 0x4)))) {
        t1 = *(signed char *)(((t0 + 0x63) + 0x0));
        (((struct o63_uchar *)(t0))->v) = (t1 | 0x10);
        t3 = (t1 | 0x10);
    } else {
        t3 = t2;
    }
    if (t6 == (*(int *)((t0 + 0x4)))) {
        *(unsigned int *)((t0 + 0xC)) = ((*(int *)((t0 + 0xC))) + 0x1);
        return FUN_0c06356c(t0);
    }
    return t3;
}

int FUN_0c058974(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;

    t0 = (int)((int)a6 / (int)0xE10);
    u0 = ((float)(a6 - (t0 * 0xE10)) / 60.0f);
    u1 = nlRoundUp((u0 * 100.0f));
    t1 = (int)((int)(int)u1 % (int)0x64);
    t2 = (int)((int)(int)u1 / (int)0x64);
    t3 = t1;
    if ((int)t1 < 0) {
        t3 = 0x0;
    }
    FUN_0c028196();
    if (t0 != 0) {
        FUN_0c0281d4(t0, 0x0);
        FUN_0c0281b6(0xC10D40C);
    }
    if ((int)t2 < (int)0xA) {
        FUN_0c0281b6(0xC10D410);
    }
    FUN_0c0281d4(t2, 0x0);
    FUN_0c0281b6(0xC10D414);
    if ((int)t3 < (int)0xA) {
        FUN_0c0281b6(0xC10D410);
    }
    FUN_0c0281d4(t3, 0x0);
    u0 = ((FUN_0c02806c((*(int *)0xC09DA20))) * 0.5f);
    FUN_0c027fbe(((float)a4 - u0), (float)a5);
    return FUN_0c02842e((*(int *)0xC09DA20));
}

int FUN_0c0385c4(void)
{
    int t13;
    int t14;
    register int t15;
    int t21;
    register int t22;

    FUN_0c034320(0x1, 0x1);
    FUN_0c033e38(0x1, 0x2, 0x0);
    FUN_0c034928(0x20222, 0xC0B3AF4, 0x3, (*(int *)((((((((struct o3C_int *)0xC2A4670)->v)) << 2) + 0xC2A46B0) + 0x0))), 0x0);
    if (((*(int *)0xC2A46C8) & 4) != 0) {
        t13 = (((struct o0_int *)0xC2A4670)->v);
        if (((t13 & 0x2) != 0) && (t14 = (((struct o3C_int *)0xC2A4670)->v), t15 = *(int *)((((t14 << 2) + 0xC2A46B0) + 0x0)), t15 == 0)) {
            FUN_0c03e806(0x49, 0x78);
        } else {
            if ((((0x2 & t13) != 0) && (t21 = (((struct o3C_int *)0xC2A4670)->v), t22 = *(int *)((0xC2A46B0 + (t21 << 2))), t22 == 1)) || ((0x4 & t13) != 0)) {
                FUN_0c03e806(0x4A, 0x78);
                FUN_0c0339c0(0x4);
            }
        }
    }
    return FUN_0c0343b8(0x1, 0x5A);
}

int FUN_0c06db4c(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;

    t2 = *(int *)(((*(int *)0xC13C358) + 0xC));
    t3 = t2;
    if (t2 == 9) {
        (((struct o8_uint *)0xC2BB3D4)->v) = 0xFFFFFFFF;
        t2 = *(int *)0xC13C358;
        t4 = 0x0;
        for (;;) {
            if ((int)t4 >= (int)(*(int *)((t2 + 0x4)))) {
                t5 = *(int *)0xC13C358;
                t6 = *(int *)((t5 + 0x14));
                if (t6 != 0) {
                    if (t6 != 1) {
                        if (t6 != 2) {
                            return t6;
                        }
                        if ((int)(*(int *)((t5 + 0x4))) <= (int)0x1) {
                            t7 = *(signed char *)((t4 + 0xFD));
                            if ((t7 & 128) != 0) {
                                (((struct o0_uint *)0xC2BB3D4)->v) = 0x3;
                                return t7;
                            }
                            (((struct o0_uint *)0xC2BB3D4)->v) = 0x2;
                            return t7;
                        }
                        (((struct o0_uint *)0xC2BB3D4)->v) = 0x3;
                        return t6;
                    }
                    (((struct o0_uint *)0xC2BB3D4)->v) = 0x2;
                    return t6;
                }
                if ((int)(*(int *)((t5 + 0x4))) > (int)0x1) {
                    if (((*(int *)((t4 + 0x0))) != 0xCAC1C60) && (t0 = *(int *)((t4 + 0x14)), t0 != 0xCAC1C60)) {
                        (((struct o0_uint *)0xC2BB3D4)->v) = 0x1;
                        return t6;
                    }
                    (((struct o0_uint *)0xC2BB3D4)->v) = 0x4;
                    return t6;
                }
                t5 = *(signed char *)((t4 + 0xFD));
                if ((t5 & 128) != 0) {
                    (((struct o0_uint *)0xC2BB3D4)->v) = 0x1;
                    return t5;
                }
                (((struct o0_uint *)0xC2BB3D4)->v) = 0x2;
                return t5;
            }
            if (((*(signed char *)((((t4 << 8) + (*(int *)((t2 + 0x0)))) + 0xFE))) & 128) != 0) {
                break;
            }
            t4 = (t4 + 0x1);
        }
        (((struct o8_uint *)0xC2BB3D4)->v) = t4;
        t0 = (((struct o8_int *)0xC2BB3D4)->v);
        t2 = *(int *)(((*(int *)0xC13C358) + 0x0));
        t4 = *(int *)0xC13C358;
        t5 = *(int *)((t4 + 0x14));
        if (t5 != 0) {
            if (t5 != 1) {
                t6 = t5;
                if (t5 != 2) {
                } else {
                    if ((int)(*(int *)((t4 + 0x4))) <= (int)0x1) {
                        t7 = *(signed char *)(((t2 + (t0 << 8)) + 0xFD));
                        if ((t7 & 128) != 0) {
                            (((struct o0_uint *)0xC2BB3D4)->v) = 0x3;
                        } else {
                            (((struct o0_uint *)0xC2BB3D4)->v) = 0x2;
                        }
                        t6 = t7;
                    } else {
                        (((struct o0_uint *)0xC2BB3D4)->v) = 0x3;
                        t6 = t5;
                    }
                }
                t7 = t6;
            } else {
                *(volatile int *)((t4 + 0x4));
                (((struct o0_uint *)0xC2BB3D4)->v) = 0x2;
                t7 = t5;
            }
            t6 = t7;
        } else {
            if ((int)(*(int *)((t4 + 0x4))) > (int)0x1) {
                if (((*(int *)(((t2 + (t0 << 8)) + 0x0))) != 0xCAC1C60) && (t6 = *(int *)(((t2 + (t0 << 8)) + 0x14)), t6 != 0xCAC1C60)) {
                    (((struct o0_uint *)0xC2BB3D4)->v) = 0x1;
                } else {
                    (((struct o0_uint *)0xC2BB3D4)->v) = 0x4;
                }
                t6 = t5;
            } else {
                t4 = *(signed char *)(((t2 + (t0 << 8)) + 0xFD));
                if ((t4 & 128) != 0) {
                    (((struct o0_uint *)0xC2BB3D4)->v) = 0x1;
                } else {
                    (((struct o0_uint *)0xC2BB3D4)->v) = 0x2;
                }
                t6 = t4;
            }
        }
        t3 = t6;
    }
    return t3;
}

int FUN_0c05bbd0(int a4, int a5, int a6, float f4)
{
    int stk[7];
    register float t1;
    register float u3;
    register float u4;
    register float u5;

    *(unsigned int *)(((int)stk + 0)) = a6;
    t1 = nlTan((a6 >> 1));
    u3 = (((struct o0_float *)0xC05BCE8)->v);
    u4 = (((struct o4_float *)0xC05BCE8)->v);
    *(float *)(((int)stk + 16)) = ((f4 * ((*(float *)((a4 + 0x0))) + u4)) / (u3 / t1));
    u5 = (((struct o8_float *)0xC05BCE8)->v);
    *(float *)(((int)stk + 20)) = ((f4 * ((-((((struct o4_float *)(a4))->v))) + u5)) / (u3 / t1));
    *(float *)(((int)stk + 24)) = (-f4);
    *(float *)(((int)stk + 4)) = ((f4 * (((((struct o8_float *)(a4))->v)) + u4)) / (u3 / t1));
    *(float *)(((int)stk + 8)) = ((f4 * ((-((((struct oC_float *)(a4))->v))) + u5)) / (u3 / t1));
    *(float *)(((int)stk + 12)) = (-f4);
    nlLineFog(0x0);
    FUN_0c073360();
    if ((unsigned char)(signed char)((unsigned int)((unsigned int)a5 >> 16) >> 8) == 0xFF) {
        FUN_0c078800((((int)stk + 0) + 0x10), (((int)stk + 0) + 0x4), a5);
    } else {
        FUN_0c078820((((int)stk + 0) + 0x10), (((int)stk + 0) + 0x4), a5);
    }
    nlPopMatrix(0x1);
    return (nlLineFog(0x1));
}

int FUN_0c065e82(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t3;
    register float u0;
    register float u1;

    t0 = a5;
    t1 = a6;
    if (((*(signed char *)(((a5 + 0x3F) + 0x0))) & 16) != 0) {
        t1 = 0x0;
        if ((int)(*(int *)((((((struct oAC_int *)(a5))->v)) + 0x8))) > (int)0x1) {
            t1 = 0x1;
        }
        if (t1 != 0) {
            FUN_0c05f470(a5, (*(int *)(((((((struct o88_int *)(a5))->v)) << 2) + 0xC10EF34))), 0.0f, ((((struct o0_float *)0xC066004)->v)));
            FUN_0c05f6fe(a5);
            t3 = 0xA;
        } else {
            (((struct oF8_uint *)(a5))->v) = 0xF;
            t3 = (((((struct o80_int *)(a5))->v)) + 0x1);
            t0 = t1;
            t1 = 0x1;
        }
        (((struct o80_uint *)(a5))->v) = t3;
    }
    u0 = (((struct o10_float *)0xC066004)->v);
    u1 = (((struct o4_float *)(a5))->v);
    if (!(u0 > u1)) {
        if ((((((struct o8_float *)(a5))->v)) + u0) > u1) {
            FUN_0c060354(0x1, t0, t1);
            return FUN_0c069f70();
        }
        return 0x8;
    }
    return 0x4;
}

int FUN_0c053510(void)
{
    int stk[2];

    *(unsigned char *)((((int)stk + 0) + 0x0)) = (*(signed char *)0xC10CBAE);
    *(unsigned char *)((((int)stk + 0) + 0x1)) = (*(signed char *)0xC10CBAF);
    *(unsigned char *)((((int)stk + 0) + 0x2)) = (*(signed char *)0xC10CBB0);
    *(unsigned char *)((((int)stk + 0) + 0x3)) = (*(signed char *)0xC10CBB1);
    *(unsigned char *)((((int)stk + 0) + 0x4)) = (*(signed char *)0xC10CBB2);
    *(unsigned char *)((((int)stk + 0) + 0x5)) = (*(signed char *)0xC10CBB3);
    FUN_0c027f28(0x1);
    FUN_0c02803a(0xFF00FF00, 0xFF00FF00, 0xFF00FF00, 0xFF00FF00);
    pfSize(1.0f, 1.0f);
    FUN_0c027fbe(((((struct o0_float *)0xC2B2D44)->v)), 70.0f);
    FUN_0c02842e(0xC10CB3C);
    pfSize(1.0f, 1.0f);
    FUN_0c027fbe(((((struct o4_float *)0xC2B2D44)->v)), 200.0f);
    FUN_0c02842e(0xC10CB58);
    pfSize(1.5f, 1.5f);
    FUN_0c027fbe(((((struct o8_float *)0xC2B2D44)->v)), 250.0f);
    FUN_0c02842e(0xC10CB70);
    FUN_0c02803a(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
    pfSize(1.0f, 1.0f);
    FUN_0c027fbe(239.0f, 386.0f);
    pfPutSEGALogo();
    FUN_0c076230(0.0f, 0.0f, 1.0f);
    return (FUN_0c026ce6());
}

int FUN_0c03db44(void)
{
    int t0;
    register int t1;

    t1 = 0x0;
    if (((((struct o30_int *)0xC2A4F80)->v)) == 0) {
        t1 = 0x6;
    }
    FUN_0c034320(0x0, 0x14);
    FUN_0c033e38(0x0, 0x4, t1);
    FUN_0c03457c();
    FUN_0c03346e(0xC0B7DB4, 0xC2A5808, ((*(int *)0xC2A585C) + 0x8), 0x18);
    FUN_0c034804(0x0, (float)(-(*(int *)0xC2A585C)), (*(float *)0xC03DC38));
    FUN_0c034928(0xA13, 0xC0B5148, 0x4, (*(int *)((((((((struct o10_int *)0xC2A4670)->v)) << 2) + 0xC2A4684) + 0x0))), (t1));
    if (((((((struct o2C_int *)0xC2A4670)->v)) & 4) != 0) && (t0 = (((struct o0_int *)0xC2A4670)->v), (t0 & 2) != 0)) {
        t0 = *(int *)((0xC2A4684 + (((((struct o10_int *)0xC2A4670)->v)) << 2)));
        switch (t0) {
        case 0:
            (((struct o0_uint *)0xC2A4F80)->v) = 0x5;
            break;
        case 1:
            (((struct o0_uint *)0xC2A4F80)->v) = 0x4;
            break;
        case 2:
            (((struct o0_uint *)0xC2A4F80)->v) = 0x6;
            break;
        }
    }
    return FUN_0c0343b8(0x0, 0x14);
}

int FUN_0c058518(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = (((struct o0_int *)0xC132584)->v);
    t1 = (((struct o4_int *)0xC132584)->v);
    t2 = *(int *)(((*(int *)(((pdGetPeripheral((((t0 << 1) + (t0 << 2)) + t1))) + 0x30))) + 0x0));
    if ((t2 & 4) != 0) {
        FUN_0c05872e(0x0, (((t0 << 1) + (t0 << 2)) + t1));
        FUN_0c058782((*(int *)(((((int)((int)((*(int *)0xC2B3380) >> 1) % (int)0x3)) << 2) + 0xC132578))), 0x0, 0x0, 0x1, (((t0 << 1) + (t0 << 2)) + t1));
        lcdSync((((t0 << 1) + (t0 << 2)) + t1));
    }
    t0 = (((struct o0_int *)0xC132584)->v);
    t1 = t0;
    if (t0 == 3) {
        t0 = (((struct o4_int *)0xC132584)->v);
        t2 = t0;
        if (t0 == 2) {
            t3 = *(int *)0xC2B3380;
            *(unsigned int *)0xC2B3380 = (t3 + 0x1);
            t2 = t0;
            if ((t3 + 0x1) == 0x280) {
                *(unsigned int *)0xC2B3380 = 0x0;
                t2 = 0x0;
            }
        }
        t1 = t2;
    }
    t0 = (((struct o4_int *)0xC132584)->v);
    (((struct o4_uint *)0xC132584)->v) = (t0 + 0x1);
    t2 = t1;
    if ((int)(t0 + 0x1) > (int)0x2) {
        (((struct o4_uint *)0xC132584)->v) = 0x1;
        t0 = (((struct o0_int *)0xC132584)->v);
        t1 = ((~(((~(t0 + 0x1)) + 0x1) & 0x3)) + 0x1);
        if ((int)(t0 + 0x1) >= 0) {
            t1 = ((t0 + 0x1) & 0x3);
        }
        (((struct o0_uint *)0xC132584)->v) = t1;
        t2 = t1;
    }
    return t2;
}

int FUN_0c0613d2(int a4)
{
    register int t1;
    register int t2;

    (((struct o4_float *)0xC2B9C20)->v) = ((((((struct o160_float *)(a4))->v)) * 2.5f) / 8.19999981f);
    if (((((struct o160_float *)(a4))->v)) > 8.19999981f) {
        (((struct oC_uint *)0xC2B9CA0)->v) = (((((struct oC_int *)0xC2B9CA0)->v)) + 0x1);
        t2 = 0x90;
        if ((int)((((struct oC_int *)0xC2B9CA0)->v)) > (int)0x10) {
            FUN_0c05f470(0xC2B9C1C, 0xC882DC4, ((((struct o0_float *)0xC2B9C20)->v)), 20.0f);
            (((struct o38_uint *)0xC2B9C20)->v) = (((((struct o38_int *)0xC2B9C20)->v)) | 0x80000000);
            (((struct o0_uint *)0xC2B9CA0)->v) = (((((struct o0_int *)0xC2B9CA0)->v)) + 0x1);
            t2 = 0x84;
        }
        t1 = t2;
    } else {
        if (4.19999981f > ((((struct o160_float *)(a4))->v))) {
            (((struct oC_uint *)0xC2B9CA0)->v) = (((((struct oC_int *)0xC2B9CA0)->v)) + 0x1);
            t2 = 0x90;
            if ((int)((((struct oC_int *)0xC2B9CA0)->v)) > (int)0x10) {
                FUN_0c05f470(0xC2B9C1C, 0xC8810A4, ((((struct o0_float *)0xC2B9C20)->v)), 20.0f);
                (((struct o38_uint *)0xC2B9C20)->v) = (((((struct o38_int *)0xC2B9C20)->v)) | 0x80000000);
                (((struct o0_uint *)0xC2B9CA0)->v) = (((((struct o0_int *)0xC2B9CA0)->v)) - 1);
                t2 = 0x84;
            }
        } else {
            (((struct oC_uint *)0xC2B9CA0)->v) = 0x0;
            t2 = 0x90;
        }
        t1 = t2;
    }
    return t1;
}

int FUN_0c053668(int a4, int a5, int a6, Stk2 s, float f4)
{
    int stk[14];

    stk[4] = s.w[0];
    stk[5] = s.w[1];
    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 12)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    nlMatrixMode(0x3);
    nlPushMatrix(0xC10CAB8);
    nlMatrixMode(0x2);
    FUN_0c073360();
    nlMatrixMode(0x1);
    FUN_0c073360();
    FUN_0c073a30((float)((*(int *)(((int)stk + 4))) - 320), (float)(0xF0 - (*(int *)(((int)stk + 12)))), (*(float *)0xC0537C8));
    nlRotateAY((unsigned short)(*(short *)(((((int)stk + 4) + 0x1C) + 0x2))));
    nlRotateAX((unsigned short)(*(short *)(((((int)stk + 4) + 0x1C) + 0x0))));
    nlRotateAZ((unsigned short)(*(short *)(((((int)stk + 4) + 0x1C) + 0x4))));
    nlScale(f4, f4, 1.0f);
    nlObjPut((*(int *)(((int)stk + 8))));
    nlPopMatrix(0x1);
    nlMatrixMode(0x2);
    nlPopMatrix(0x1);
    nlMatrixMode(0x3);
    nlPopMatrix(0x1);
    return (nlMatrixMode(0x1));
}

int FUN_0c03da60(int a4, int a5)
{
    register int t0;
    int t1;
    register int t2;

    FUN_0c034320(t0, a5);
    t2 = t0;
    if (((((struct o30_int *)0xC2A4F80)->v)) == 0) {
        t2 = 0x3;
    }
    FUN_0c033e38(0x0, 0x3, t2);
    FUN_0c03457c();
    FUN_0c03346e(0xC0B7E4C, 0xC2A5808, ((*(int *)0xC2A585C) + 0x8), 0x18);
    FUN_0c034804(0x0, (float)(-(*(int *)0xC2A585C)), 416.0f);
    FUN_0c034928(0xA13, 0xC0B5E00, 0x3, (*(int *)((((((((struct o10_int *)0xC2A4670)->v)) << 2) + 0xC2A4684) + 0x0))), (t2));
    if (((((((struct o2C_int *)0xC2A4670)->v)) & 4) != 0) && (t1 = (((struct o0_int *)0xC2A4670)->v), (t1 & 0x2) != 0)) {
        t0 = *(int *)((0xC2A4684 + (((((struct o10_int *)0xC2A4670)->v)) << 2)));
        if (t0 != 0) {
            if (t0 != 1) {
            } else {
                (((struct o0_uint *)0xC2A4F80)->v) = 0x2;
            }
        } else {
            (((struct o0_uint *)0xC2A4F80)->v) = 0x3;
        }
    }
    return FUN_0c0343b8(0x0, 0x14);
}

int FUN_0c0527c4(int a4, int a5)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;

    FUN_0c076230(1.0f, 0.0f, 0.0f);
    (((struct o0_float *)0xC2B2690)->v) = 1.0f;
    (((struct o4_float *)0xC2B2690)->v) = 1.0f;
    (((struct o1C_float *)0xC2B2690)->v) = 1.0f;
    (((struct o24_uint *)0xC2B2690)->v) = 0x200A;
    (((struct o18_uint *)0xC2B2690)->v) = 0x0;
    u0 = (((struct o0_float *)0xC052894)->v);
    u1 = (((struct o4_float *)0xC052894)->v);
    if (a4 != 2) {
        if (a4 != 0) {
            
            t0 = 0x26F;
            if (a5 == 0) {
                t0 = 0x268;
            }
            t1 = t0;
        } else {
            t0 = 0x268;
            if (a5 != 0) {
                t0 = 0x26F;
            }
            t1 = t0;
        }
        FUN_0c052dba(0xC2B2680, t1, u1, u0);
    } else {
        t0 = 0x26D;
        if (a5 == 0) {
            t0 = 0x262;
        }
        FUN_0c052dba(0xC2B2680, t0, u1, u0);
    }
    t0 = FUN_0c026ce6();
    (((struct o24_uint *)0xC2B2690)->v) = 0xA;
    return t0;
}

int FUN_0c01efd2(void)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t2 = 0xC26ECC0;
    t3 = 0x0;
    t4 = 0x0;
    for (;;) {
        if (((unsigned char)(*(signed char *)((t2 + 0x0))) == 1) && (t0 = *(int *)((t2 + 0xC)), t1 = t0, (int)t4 < (int)t1)) {
            (((struct o0_uint *)0xC2707D8)->v) = t3;
            t4 = (*(int *)((t2 + 0xC)));
        }
        t5 = *(int *)((t2 + 0x8));
        t3 = (t3 + t5);
        t3 = (t3 + 0x1);
        t2 = (t2 + (((((t5 + 0x1) << 1) + (t5 + 0x1)) << 2) << 1));
        if ((int)t3 >= (int)0x120) {
            break;
        }
    }
    t0 = (((struct o0_int *)0xC2707D8)->v);
    if (t0 != -1) {
        (((struct o4_uint *)0xC2707D8)->v) = 0x1;
        t1 = (((struct o0_int *)0xC2707D8)->v);
        *(unsigned char *)(((((((t1 << 1) + t1) << 2) << 1) + 0xC26ECC0) + 0x0)) = 0x2;
        t1 = (((struct o0_int *)0xC2707D8)->v);
        t2 = ADXF_OpenAfs(0x0, (*(int *)(((((((t1 << 1) + t1) << 2) << 1) + 0xC26ECC0) + 0x4))));
        *(unsigned int *)0xC26ECBC = t2;
        t3 = t2;
        if (t2 != 0) {
            t4 = FUN_0c1503dc(t2);
            t2 = FUN_0c1500d2((*(int *)0xC26ECBC), t4, (*(int *)(((((((t1 << 1) + t1) << 2) << 1) + 0xC26ECC0) + 0x14))));
            *(unsigned char *)(((((((t1 << 1) + t1) << 2) << 1) + 0xC26ECC0) + 0x0)) = 0x3;
            t3 = t2;
        }
        t1 = t3;
    } else {
        (((struct o4_uint *)0xC2707D8)->v) = 0x0;
        t1 = t0;
    }
    return t1;
}

int FUN_0c065a74(int a4, int a5)
{
    register int t1;
    register int t2;

    t2 = (((struct o88_int *)(a5))->v);
    if (t2 != 0) {
        if (t2 != 1) {
            if (t2 != 2) {
                if (t2 != 4) {
                    t1 = 0x0;
                    if (t2 != 5) {
                    } else {
                        t2 = 0x0;
                        if (((((struct o8C_int *)(a5))->v)) == 0) {
                            t2 = 0xC9D6560;
                        }
                        t1 = t2;
                    }
                    t2 = t1;
                } else {
                    t1 = 0x0;
                    if (((((struct o8C_int *)(a5))->v)) == 0) {
                        t1 = 0xC9D6F30;
                    }
                    t2 = t1;
                }
                t1 = t2;
            } else {
                t2 = 0x0;
                if (((((struct o8C_int *)(a5))->v)) == 5) {
                    t2 = 0xC9D48A4;
                }
                t1 = t2;
            }
            t2 = t1;
        } else {
            t1 = 0x0;
            if (((((struct o8C_int *)(a5))->v)) == 4) {
                t1 = 0xC9D5BF4;
            }
            t2 = t1;
        }
        t1 = t2;
    } else {
        t2 = 0x0;
        if (((((struct o8C_int *)(a5))->v)) == 4) {
            t2 = 0xC9D3ED4;
        }
        if (((((struct o8C_int *)(a5))->v)) == 5) {
            t2 = 0xC9D5224;
        }
        t1 = t2;
    }
    if (t1 != 0) {
        FUN_0c05f470(a5, t1, 0.0f, 0.0f);
        (((struct o80_uint *)(a5))->v) = (((((struct o80_int *)(a5))->v)) + 0x1);
    } else {
        (((struct o80_uint *)(a5))->v) = 0x1;
    }
    return 0x80;
}

int FUN_0c06da42(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(int *)0xC13C358;
    if ((int)(*(int *)((t0 + 0xC))) > (int)0x3) {
        *(unsigned int *)0xC2BB3D8 = 0x4;
    } else {
        t1 = 0x0;
        for (;;) {
            if ((int)t1 >= (int)(*(int *)((t0 + 0x4)))) {
                if (0x1 == 0) {
                    t1 = (*(int *)0xC13C358);
                    t2 = (FUN_0c0621e0(t1));
                    if (t2 != 0) {
                        *(unsigned int *)0xC2BB3D8 = ((*(int *)0xC2BB3D8) + 0x1);
                        return t2;
                    }
                    return t2;
                }
                *(unsigned int *)0xC2BB3D8 = ((*(int *)0xC2BB3D8) + 0x1);
                return t2;
            }
            t2 = 0x80;
            if ((int)(*(int *)((((t1 << 8) + (*(int *)((t0 + 0x0)))) + t2))) < (int)0x4) {
                break;
            }
            t1 = (t1 + 0x1);
        }
        if (0x0 == 0) {
            t0 = FUN_0c0621e0((*(int *)0xC13C358));
            if (t0 != 0) {
                *(unsigned int *)0xC2BB3D8 = ((*(int *)0xC2BB3D8) + 0x1);
            }
            t1 = t0;
        } else {
            *(unsigned int *)0xC2BB3D8 = ((*(int *)0xC2BB3D8) + 0x1);
            t1 = t2;
        }
        t0 = t1;
    }
    return t0;
}

int FUN_0c03d53a(void)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    FUN_0c034320(0x0, 0x14);
    t0 = FUN_0c03e4d0(0x0);
    t1 = 0x0;
    if (t0 == 0) {
        t1 = 0x1;
    }
    FUN_0c033e38(0x0, 0x2, t1);
    FUN_0c03457c();
    FUN_0c03346e(0xC0B7DFC, 0xC2A5808, ((*(int *)0xC2A585C) + 0x8), 0x18);
    t0 = *(int *)0xC2A585C;
    u0 = *(float *)0xC03D63C;
    t2 = 0x0;
    if ((*(int *)(((((*(int *)0xC2A4680) << 2) + 0xC2A4684) + 0x0))) == 0) {
        t2 = 0x2;
    }
    FUN_0c034804(t2, (float)(-t0), u0);
    FUN_0c034928(0x1213, 0xC0B57A4, 0x2, (*(int *)(((((*(int *)0xC2A4680) << 2) + 0xC2A4684) + 0x0))), (t1));
    return FUN_0c0343b8(0x0, 0x14);
}

int FUN_0c033128(int a4, int a5, int a6, int a7)
{
    int stk[29];
    register int t0;
    register int t4;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    t0 = ((int (*)(int, int, int, int))(memcpy))(0xC290B14, 0xC0B3034, 0x20, a7);
    (((struct o0_uint *)0xC290B34)->v) = 0x3F;
    (((struct o4_uint *)0xC290B34)->v) = 0xFFFF;
    memset((((int)stk + 4) + 0x10), 0x0, 0x60);
    FUN_0c0800c8((((int)stk + 4) + 0x10), 0xC12A9F8);
    FUN_0c0800c8((((int)stk + 4) + 0x22), 0xC12AA09);
    t4 = ((int (*)(int, int, int))(memcpy))((((int)stk + 4) + 0x44), 0xC12AA25, 0x10);
    *(unsigned int *)(((int)stk + 88)) = 0xC12AA35;
    *(unsigned int *)(((int)stk + 92)) = 0xC12AA55;
    *(unsigned short *)(((int)stk + 96)) = 0x1;
    *(unsigned short *)(((int)stk + 98)) = 0x1;
    *(unsigned int *)(((int)stk + 100)) = 0x0;
    *(unsigned short *)(((int)stk + 104)) = 0x0;
    *(unsigned int *)(((int)stk + 108)) = 0xC290B14;
    *(unsigned int *)(((int)stk + 112)) = 0x28;
    *(int *)((int)stk + 0) = 0x0;
    return (FUN_0c032942((*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 8))), (((int)stk + 0) + 0x14), 0x0, 0x0));
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

int FUN_0c060728(void)
{
    int t0;
    register float u0;

    if ((*(int *)0xC2B9CA0) == 0) {
        FUN_0c05f6f8(0xC2B9C1C, 0xC10E68C, 0xC10E69C);
        u0 = FUN_0c05fd2a();
        FUN_0c05f470(0xC2B9C1C, 0xC880818, u0, ((((struct o0_float *)0xC060844)->v)));
        (((struct o4_float *)0xC2B9C20)->v) = 0.0f;
        *(unsigned int *)0xC2B9CA0 = ((*(int *)0xC2B9CA0) + 0x1);
    }
    if (((*(signed char *)0xC2B9C5B) & 32) == 0) {
        u0 = ((((struct o0_float *)0xC2B9C20)->v));
        u0 = u0 + ((((struct o8_float *)0xC060844)->v)) * (((FUN_0c05fd2a()) - ((((struct o0_float *)0xC2B9C20)->v))));
        (((struct o0_float *)0xC2B9C20)->v) = u0;
    }
    if (((*(int *)0xC1759D8) != 0) && (t0 = *(signed char *)0xC2B9C5B, (t0 & 32) == 0)) {
        FUN_0c06017e();
    }
    return FUN_0c05f98c();
}

int FUN_0c064656(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = (((struct o58_int *)(a4))->v);
    (((struct o58_uint *)(a4))->v) = (t0 - 1);
    if ((int)(t0 - 1) <= 0) {
        t1 = *(signed char *)(((a4 + 0x63) + 0x0));
        (((struct o63_uchar *)(a4))->v) = (t1 | 0x10);
        t2 = (t1 | 0x10);
        t1 = (a4 + 0x63);
        t3 = (t0 - 1);
        t0 = 0x0;
        t4 = 0x0;
        for (;;) {
            if ((int)t0 >= (int)(*(int *)((a4 + 0x4)))) {
                break;
            }
            t3 = (*(int *)((a4 + 0x0)));
            t2 = 0x80;
            t1 = (*(int *)((((t0 << 8) + t3) + t2)));
            t0 = (t0 + 0x1);
            if ((int)t1 >= (int)0x4) {
                t4 = (t4 + 0x1);
            }
        }
        if (t4 == (*(int *)((a4 + 0x4)))) {
            t0 = *(int *)((a4 + 0x4));
            t1 = *(int *)((a4 + 0x0));
            (((struct oFE_uchar *)((((t0 - 1) << 8) + t1)))->v) = ((*(signed char *)(((0xFE + (((t0 - 1) << 8) + t1)) + 0x0))) | 0x40);
            (((struct o80_uint *)(((((*(int *)((a4 + 0x4))) - 1) << 8) + (*(int *)((a4 + 0x0))))))->v) = 0x0;
            t0 = *(int *)((a4 + 0x4));
            *(unsigned int *)((a4 + 0x4)) = (t0 - 1);
            if ((int)(t0 - 1) > 0) {
                *(unsigned int *)((a4 + 0xC)) = 0x6;
                return FUN_0c0636b4(a4);
            }
            *(unsigned int *)((a4 + 0xC)) = 0xC;
            return FUN_0c0602f8(a4);
        }
        return t2;
    }
    return 0x58;
}

int FUN_0c061a10(void)
{
    int t13;

    if (((((struct o4_int *)0xC2B9C9C)->v)) == 0) {
        FUN_0c05f470(0xC2B9C1C, 0xC886B54, 0.0f, ((((struct o0_float *)0xC061B2C)->v)));
        (((struct o0_float *)0xC2B9C24)->v) = 1.0f;
        (((struct o34_uint *)0xC2B9C24)->v) = (((((struct o34_int *)0xC2B9C24)->v)) | 0x80000000);
        (((struct o4_uint *)0xC2B9C9C)->v) = (((((struct o4_int *)0xC2B9C9C)->v)) + 0x1);
    }
    (((struct o0_float *)0xC2B9C24)->v) = ((_builtin_fabsf(((((struct o3C_float *)0xC1759D8)->v))) * ((((struct o14_float *)0xC061B2C)->v))) / ((((struct o18_float *)0xC061B2C)->v)));
    if ((((((struct o0_int *)0xC1759D8)->v)) != 0) && (t13 = *(signed char *)0xC2B9C5B, (t13 & 32) == 0)) {
        (((struct o0_uint *)0xC2B9C9C)->v) = 0xC;
        (((struct o4_uint *)0xC2B9C9C)->v) = 0x0;
    }
    return FUN_0c05fab8(1.0f, 0.0f);
}

int FUN_0c05bd5c(int a4, int a5, int a6, int a7)
{
    register int t44;
    register int t1;
    int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t8;
    register int t20;
    register int t2;
    register int t7;
    register int t23;
    register int t24;
    register int t25;
    register int t26;
    register int t27;
    register int t28;
    register int t34;
    register int t36;
    register int t37;
    register int t38;
    register int t39;

    t1 = *(int *)((a4 + 0x0));
    t44 = t1;
    if (t1 == 1) {
        t3 = a4;
        t4 = a5;
        t5 = a6;
        t6 = a7;
        t8 = (a4 + 0x18);
        for (;;) {
            if ((*(int *)((t8 + 0x0))) == 0) {
                break;
            }
            if ((int)(*(int *)((t8 + 0x0))) > 0) {
                t7 = (*(int *)((t8 + 0x4)));
                t3 = 0x8;
                t20 = *(int *)((t8 + 0x0));
                t8 = (t8 + 0x8);
                if ((int)t7 > 0) {
                    for (;;) {
                        t2 = (*(int *)((t8 + 0x0)));
                        t3 = 0x1;
                        if ((t2 & t3) != 0) {
                            if (a6 != 0) {
                                t4 = t8;
                                t5 = t8;
                                t4 = (t4 + 0xC);
                                t6 = a7;
                                t5 = (t5 + 0x18);
                                t3 = t8;
                                t1 = (((int (*)(int, int, int, int))(a6))(t3, t4, t5, t6));
                            } else {
                                t23 = t2;
                                t24 = t20;
                                t25 = t3;
                                t26 = t4;
                                t27 = t5;
                                t28 = t6;
                            }
                            t8 = (t8 + 0x20);
                            t2 = t23;
                            t20 = t24;
                            t3 = t25;
                            t4 = t26;
                            t5 = t27;
                            t6 = t28;
                        } else {
                            t8 = (t8 + 0x8);
                        }
                        t7 = (t7 - 1);
                        if ((int)t7 <= 0) {
                            break;
                        }
                    }
                }
            } else {
                t2 = (*(int *)((t8 + 0x0)));
                if ((int)t2 < 0) {
                    if (a5 != 0) {
                        t4 = a7;
                        t3 = t8;
                        t1 = (((int (*)(int, int, int, int))(a5))(t3, t4, t5, t6));
                    } else {
                        t34 = t2;
                        t36 = t3;
                        t37 = t4;
                        t38 = t5;
                        t39 = t6;
                    }
                    t8 = (t8 + 0x50);
                    t2 = t34;
                    t3 = t36;
                    t4 = t37;
                    t5 = t38;
                    t6 = t39;
                }
            }
        }
        t44 = t1;
    }
    return t44;
}

void FUN_0c019898(float f4)
{
    register int t0;

    t0 = *(int *)0xC177EAC;
    *(unsigned int *)0xC177EAC = (t0 + 0x1);
    if ((int)(t0 + 0x1) < (int)(*(int *)0xCB1B954)) {
        FUN_0c019916();
        FUN_0c018b1c(0x1);
        FUN_0c018b22(0xC177EB0, 0x0);
        camSetTarget(0xC177EBC, 0x0);
    return;
    }
    if ((t0 + 0x1) == (*(int *)0xCB1B954)) {
        FUN_0c018b1c(0x1);
        nlPushMatrix(0xC17596C);
        FUN_0c072230(0xC09714C, 0xC177EB0);
        FUN_0c072230(0xC097158, 0xC177EBC);
        nlPopMatrix(0x1);
        FUN_0c018b22(0xC177EB0, 0x0);
        camSetTarget(0xC177EBC, 0x0);
        FUN_0c018b00(0x0);
    return;
    }
}

int FUN_0c060564(void)
{
    register int t0;

    t0 = *(int *)0xC175C80;
    if ((int)t0 < (int)0x8) {
        FUN_0c05f470(0xC2B9C1C, 0xC880000, 20.0f, 15.0f);
    } else {
        if ((int)t0 < (int)0x10) {
            FUN_0c05f470(0xC2B9C1C, 0xC8819D4, 0.0f, 0.0f);
        } else {
            FUN_0c05f470(0xC2B9C1C, 0xC8847D8, 0.0f, 0.0f);
        }
    }
    return FUN_0c06017e();
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
            FUN_0c07ff00();
            FUN_0c032210(0x0, 0xC09D868, 0xC270BBC, 0x0, 0x0, 0x0, 0x0);
        } else {
            FUN_0c07ff00();
        }
        return 0x0;
    }
    if ((*(int *)0xC270D04) != 0) {
        if (((*(int *)((t0 + 0x10))) & 2) != 0) {
            *(unsigned int *)0xC270D04 = 0x0;
            FUN_0c07ff00();
            return 0x0;
        }
        return FUN_0c027bfa(0xC270D04);
    }
    return FUN_0c027408(0xC270D04);
}

int FUN_0c036972(void)
{
    int t0;
    int t1;
    register int t2;

    (((struct o0_uint *)0xC1EC740)->v) = 0x3;
    (((struct o4_uint *)0xC1EC740)->v) = 0x0;
    t2 = FUN_0c03f154(0x0);
    if ((int)t2 <= (int)0x1) {
        FUN_0c03f15e(0x0);
    } else {
        t2 = FUN_0c03f154(0x0);
        if (t2 == 3) {
            t2 = FUN_0c03f154(0x1);
            if (t2 != 1) {
                if ((((((struct o2C_int *)0xC2A46B0)->v)) == 0xC0B3824) && (t0 = (((struct o0_int *)0xC2A46B0)->v), t0 == 2)) {
                } else {
                    FUN_0c03f164(0x1);
                }
            }
        } else {
            if ((((((struct o2C_int *)0xC2A46B0)->v)) == 0xC0B3824) && (t1 = (((struct o0_int *)0xC2A46B0)->v), t1 == 2)) {
            } else {
                FUN_0c03f164(0x1);
            }
        }
    }
    FUN_0c01d190();
    t0 = FUN_0c03f154(0x0);
    if (t0 == 2) {
        FUN_0c03ef3e();
    }
    FUN_0c03386a(0x4);
    FUN_0c0339fc(0x0);
    return FUN_0c01eaea();
}

int FUN_0c03854c(void)
{
    register int t0;
    register int t1;

    t0 = FUN_0c03f154(0x0);
    t1 = 0x0;
    if (t0 == 3) {
        t0 = FUN_0c03f154(0x1);
        t1 = 0x0;
        if (t0 == 1) {
            t1 = 0x4;
        }
    }
    FUN_0c034320(0x1, 0x1);
    if ((((((struct o0_int *)0xC2A4670)->v)) & 4) == 0) {
        FUN_0c033e38(0x1, 0x4, t1);
    }
    FUN_0c034928(0x20020, 0xC0B3C80, 0x4, (*(int *)((((((((struct o3C_int *)0xC2A4670)->v)) << 2) + 0xC2A46B0) + 0x0))), (t1));
    FUN_0c033578(0x220, 0xC0C02C8, ((((struct o8_float *)0xC038650)->v)), ((((struct o4_float *)0xC038650)->v)), ((((struct o0_float *)0xC038650)->v)));
    return FUN_0c0343b8(0x1, 0x14);
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

int FUN_0c065b34(int a4, int a5)
{
    int stk[3];
    register int t0;

    t0 = *(signed char *)(((a5 + 0x3F) + 0x0));
    if ((t0 & 16) != 0) {
        (((struct o80_uint *)(a5))->v) = 0x1;
        (((struct o88_uint *)(a5))->v) = ((((struct o8C_int *)(a5))->v));
        FUN_0c05f470(a5, (*(int *)(((((((struct o88_int *)(a5))->v)) << 2) + 0xC10EF34))), 0.0f, 0.0f);
        (((struct oFF_uchar *)(a5))->v) = ((*(signed char *)(((0xFF + a5) + 0x0))) & 0xDF);
        FUN_0c066226(a5);
        FUN_0c073360();
        FUN_0c0673da(((((struct o88_int *)(a5))->v)));
        nlGetMatrix((a5 + 0x40));
        return nlPopMatrix(0x1);
    }
    return t0;
}

int FUN_0c06183a(int a4)
{
    register int t0;
    register int t1;

    (((struct o4_float *)0xC2B9C20)->v) = ((((((struct o160_float *)(a4))->v)) * ((((struct o0_float *)0xC06191C)->v))) / ((((struct o4_float *)0xC06191C)->v)));
    if (((((struct o160_float *)(a4))->v)) > ((((struct o8_float *)0xC06191C)->v))) {
        (((struct oC_uint *)0xC2B9CA0)->v) = (((((struct oC_int *)0xC2B9CA0)->v)) + 0x1);
        t0 = (((struct oC_int *)0xC2B9CA0)->v);
        t1 = t0;
        if ((int)t0 > (int)0x10) {
            FUN_0c05f470(0xC2B9C1C, 0xC885384, ((((struct o0_float *)0xC2B9C20)->v)), ((((struct oC_float *)0xC06191C)->v)));
            (((struct o38_uint *)0xC2B9C20)->v) = (((((struct o38_int *)0xC2B9C20)->v)) | 0x80000000);
            (((struct o0_uint *)0xC2B9CA0)->v) = (((((struct o0_int *)0xC2B9CA0)->v)) + 0x1);
            t1 = 0x84;
        }
        t0 = t1;
    } else {
        (((struct oC_uint *)0xC2B9CA0)->v) = 0x0;
        t0 = 0x90;
    }
    return t0;
}

int FUN_0c065cf0(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register float u0;
    float u1;

    if ((((((struct o84_int *)(a5))->v)) == 0) && ((t0 = (((struct o5C_int *)(a4))->v), t0 == 2) && (u1 = (((struct o0_float *)0xC065D98)->v), u0 = (((struct o4_float *)(a5))->v), !(u1 > u0)))) {
        if ((((((struct o8_float *)(a5))->v)) + u1) > ((((struct o4_float *)(a5))->v))) {
            FUN_0c060354(0x0, a5, a6);
            FUN_0c069fbe();
        }
    }
    t0 = *(signed char *)(((a5 + 0x3F) + 0x0));
    t1 = t0;
    if ((t0 & 16) != 0) {
        FUN_0c05f470(a5, (*(int *)(((((((struct o88_int *)(a5))->v)) << 2) + 0xC10EF34))), 0.0f, ((((struct oC_float *)0xC065D98)->v)));
        (((struct o80_uint *)(a5))->v) = (((((struct o80_int *)(a5))->v)) + 0x1);
        t1 = 0x80;
    }
    return t1;
}

int FUN_0c06136c(int a4)
{
    register int t0;
    register int t1;
    register float u0;

    u0 = (((struct o0_float *)0xC061484)->v);
    (((struct o4_float *)0xC2B9C20)->v) = ((((((struct o160_float *)(a4))->v)) * ((((struct o8_float *)0xC061484)->v))) / u0);
    if (((((struct o160_float *)(a4))->v)) > u0) {
        (((struct oC_uint *)0xC2B9CA0)->v) = (((((struct oC_int *)0xC2B9CA0)->v)) + 0x1);
        t0 = (((struct oC_int *)0xC2B9CA0)->v);
        t1 = t0;
        if ((int)t0 > (int)0x10) {
            FUN_0c05f470(0xC2B9C1C, 0xC8819D4, ((((struct o0_float *)0xC2B9C20)->v)), ((((struct oC_float *)0xC061484)->v)));
            (((struct o38_uint *)0xC2B9C20)->v) = (((((struct o38_int *)0xC2B9C20)->v)) | 0x80000000);
            (((struct o0_uint *)0xC2B9CA0)->v) = (((((struct o0_int *)0xC2B9CA0)->v)) + 0x1);
            t1 = 0x84;
        }
        t0 = t1;
    } else {
        (((struct oC_uint *)0xC2B9CA0)->v) = 0x0;
        t0 = 0x90;
    }
    return t0;
}

int FUN_0c061980(int a4)
{
    register int t0;
    register int t1;

    (((struct o4_float *)0xC2B9C20)->v) = ((((((struct o160_float *)(a4))->v)) * 3.5f) / 8.39999962f);
    if (8.39999962f > ((((struct o160_float *)(a4))->v))) {
        (((struct oC_uint *)0xC2B9CA0)->v) = (((((struct oC_int *)0xC2B9CA0)->v)) + 0x1);
        t0 = (((struct oC_int *)0xC2B9CA0)->v);
        t1 = t0;
        if ((int)t0 > (int)0x10) {
            FUN_0c05f470(0xC2B9C1C, 0xC885384, ((((struct o0_float *)0xC2B9C20)->v)), 20.0f);
            (((struct o38_uint *)0xC2B9C20)->v) = (((((struct o38_int *)0xC2B9C20)->v)) | 0x80000000);
            (((struct o0_uint *)0xC2B9CA0)->v) = (((((struct o0_int *)0xC2B9CA0)->v)) - 1);
            t1 = 0x84;
        }
        t0 = t1;
    } else {
        (((struct oC_uint *)0xC2B9CA0)->v) = 0x0;
        t0 = 0x90;
    }
    return t0;
}

float FUN_0c05d078(int a4, int a5, int a6, int a7)
{
    int stk[12];
    register float t6;
    register float t8;
    register float u9;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a6;
    *(unsigned int *)(((int)stk + 8)) = a7;
    nlSubVector3op((((int)stk + 0) + 0x24), a5, (*(int *)(((int)stk + 0))));
    nlSubVector3op((((int)stk + 0) + 0x18), (*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 0))));
    nlOuterProduct((((int)stk + 0) + 0x24), (((int)stk + 0) + 0x18), (((int)stk + 0) + 0xC));
    t6 = FUN_0c073c60((((int)stk + 0) + 0xC));
    t8 = FUN_0c073b40((*(int *)(((int)stk + 8))), (((int)stk + 0) + 0xC));
    u9 = -1.0f;
    if (!(0.0f > t8)) {
        u9 = 1.0f;
    }
    return (t6 * u9);
}

int FUN_0c05edfc(int a4)
{
    register float u0;
    register float u1;

    nlPushMatrix(0x0);
    FUN_0c073a60(0xC2B9738);
    FUN_0c05b586(0xC2B9744);
    nlScaleV(0xC2B9750);
    u0 = (((struct o0_float *)0xC2B9750)->v);
    u1 = u0;
    if (((((struct o4_float *)0xC2B9750)->v)) > u0) {
        u1 = ((((struct o4_float *)0xC2B9750)->v));
    }
    u0 = u1;
    if (((((struct o8_float *)0xC2B9750)->v)) > u1) {
        u0 = ((((struct o8_float *)0xC2B9750)->v));
    }
    FUN_0c074f20(u0);
    nlObjPutUseViewMatrix((*(int *)(((a4 << 2) + 0xC13AFDC))));
    return nlPopMatrix(0x1);
}

int FUN_0c025fa4(void)
{
    (((struct o0_uint *)0xC270924)->v) = 0x1;
    (((struct o14_uint *)0xC270924)->v) = 0x1;
    *(unsigned int *)0xC2709A8 = 0x0;
    (((struct o0_float *)0xC175930)->v) = ((((struct o0_float *)0xC026064)->v));
    (((struct o4_float *)0xC175930)->v) = (1.0f + 1.0f);
    (((struct o8_float *)0xC175930)->v) = ((((struct o4_float *)0xC026064)->v));
    (((struct oC_ushort *)0xC175930)->v) = 0x0;
    (((struct oE_ushort *)0xC175930)->v) = 0x5FFF;
    (((struct o10_ushort *)0xC175930)->v) = 0x0;
    *(unsigned int *)0xC1EC71C = 0x0;
    FUN_0c029528();
    *(volatile int *)0xC1EC71C;
    FUN_0c0491d8();
    return FUN_0c022d9c(0x1D, 0x0);
}

void FUN_0c01c1aa(float f4)
{
    register int t10;

    (((struct o8_uint *)0xC1EC744)->v) = (((((struct o8_int *)0xC1EC744)->v)) + 0x1);
    if ((int)(*(int *)0xC11D044) > 0) {
        *(unsigned int *)0xC11D044 = ((*(int *)0xC11D044) - 1);
        if ((int)((((struct o8_int *)0xC1EC744)->v)) > (int)0x5) {
            (((struct o8_uint *)0xC1EC744)->v) = 0x5;
        }
    }
    if ((int)((((struct o8_int *)0xC1EC744)->v)) >= (int)0xF0) {
        t10 = *(int *)0xC1ECC94;
        *(unsigned int *)0xC1ECC94 = (t10 + 0x1);
        if (t10 == 0) {
            FUN_0c03386a(0x5);
    return;
        }
        if ((int)(*(int *)0xC1ECC94) > (int)0x14) {
            (((struct o0_uint *)0xC1EC744)->v) = 0x0;
            End_Adv_Title_LOGO(f4);
    return;
        }
        return;
    }
    FUN_0c01e3cc(0x0);
}

int FUN_0c01ba02(void)
{
    (((struct o0_uint *)0xC1ECC8C)->v) = 0x0;
    (((struct o0_uint *)0xC1EC744)->v) = (((((struct o0_int *)0xC1EC744)->v)) + 0x1);
    (((struct o8_uint *)0xC1EC744)->v) = 0x0;
    FUN_0c01b9c4();
    *(unsigned int *)0xC1EC840 = 0x11;
    mpvvlc_InitMbai();
    FUN_0c052fcc();
    FUN_0c03386a(0x0);
    FUN_0c03393c(((((struct o0_float *)0xC01BAD0)->v)));
    FUN_0c033942(((((struct o8_float *)0xC01BAD0)->v)));
    FUN_0c03386a(0x2);
    FUN_0c03386a(0x4);
    (((struct o8_uint *)0xC1ECC8C)->v) = 0x0;
    return FUN_0c020be0();
}

int FUN_0c01d1d8(int a4, int a5, int a6, int a7)
{
    register int t3;

    nlInitEvent();
    FUN_0c01d190();
    FUN_0c01eaea();
    t3 = FUN_0c03f154(0x0);
    if (t3 == 2) {
        (((struct o0_uint *)0xC1EC740)->v) = 0x3;
        (((struct o4_uint *)0xC1EC740)->v) = 0x0;
        FUN_0c03ef3e();
        return FUN_0c03e2a0(0x1);
    }
    (((struct o4_uint *)0xC1EC740)->v) = (((((struct o4_int *)0xC1EC740)->v)) + 0x1);
    (((struct oC_uint *)0xC1EC740)->v) = 0x0;
    *(unsigned int *)0xC2AC2F4 = 0x0;
    return FUN_0c052942();
}

int FUN_0c0258a2(void)
{
    (((struct o0_uint *)0xC270924)->v) = 0x1;
    (((struct o14_uint *)0xC270924)->v) = 0x1;
    *(unsigned int *)0xC2709A8 = 0x0;
    (((struct o0_float *)0xC175930)->v) = 0.0f;
    (((struct o4_float *)0xC175930)->v) = 2000.0f;
    (((struct o8_float *)0xC175930)->v) = -100.0f;
    (((struct oC_uchar *)0xC175930)->v) = (*(signed char *)0xC097434);
    (((struct oD_uchar *)0xC175930)->v) = (*(signed char *)0xC097435);
    (((struct oE_uchar *)0xC175930)->v) = (*(signed char *)0xC097436);
    (((struct oF_uchar *)0xC175930)->v) = (*(signed char *)0xC097437);
    (((struct o10_uchar *)0xC175930)->v) = (*(signed char *)0xC097438);
    (((struct o11_uchar *)0xC175930)->v) = (*(signed char *)0xC097439);
    (((struct oE_ushort *)0xC175930)->v) = 0x8000;
    FUN_0c04b180(0x3);
    FUN_0c029574(0x3);
    return FUN_0c022d9c(0x4, 0x1);
}

int FUN_0c060f4e(void)
{
    if ((*(int *)0xC2B9CA0) == 0) {
        FUN_0c05f6f8(0xC2B9C1C, 0xC10E69C, 0xC10E68C);
        FUN_0c05f470(0xC2B9C1C, 0xC8C271C, 0.0f, 0.0f);
        (((struct o0_float *)0xC2B9C24)->v) = 1.0f;
        (((struct o4_uint *)0xC2B9C24)->v) = 0x0;
        *(unsigned int *)0xC2B9CA0 = ((*(int *)0xC2B9CA0) + 0x1);
    }
    if (((*(signed char *)0xC2B9C5B) & 16) != 0) {
        FUN_0c06017e();
    }
    return FUN_0c05f98c();
}

int FUN_0c025754(void)
{
    (((struct o0_uint *)0xC270924)->v) = 0x1;
    (((struct o14_uint *)0xC270924)->v) = 0x1;
    *(unsigned int *)0xC2709A8 = 0x0;
    (((struct o0_float *)0xC175930)->v) = 0.0f;
    (((struct o4_float *)0xC175930)->v) = 0.0f;
    (((struct o8_float *)0xC175930)->v) = (*(float *)0xC025804);
    (((struct oC_uchar *)0xC175930)->v) = (*(signed char *)0xC097434);
    (((struct oD_uchar *)0xC175930)->v) = (*(signed char *)0xC097435);
    (((struct oE_uchar *)0xC175930)->v) = (*(signed char *)0xC097436);
    (((struct oF_uchar *)0xC175930)->v) = (*(signed char *)0xC097437);
    (((struct o10_uchar *)0xC175930)->v) = (*(signed char *)0xC097438);
    (((struct o11_uchar *)0xC175930)->v) = (*(signed char *)0xC097439);
    (((struct oE_ushort *)0xC175930)->v) = 0x8000;
    FUN_0c04b180(0xD);
    FUN_0c029574(0xD);
    return FUN_0c022d9c(0x4, 0x1);
}

int FUN_0c01dd88(int a4, int a5, int a6)
{
    register int t2;

    *(unsigned int *)0xC175908 = 0x0;
    FUN_0c02897a(0x4, a5, a6);
    *(unsigned int *)0xC2A4660 = (*(int *)0xC1ECCC8);
    t2 = *(int *)0xC1ECD14;
    *(unsigned int *)0xC1ECD14 = (t2 - 1);
    if ((int)(t2 - 1) < 0) {
        if (((((struct o0_int *)0xC1EC720)->v)) != 2) {
            (((struct o24_uint *)0xC1EC720)->v) = 0x8;
        }
        if ((*(int *)0xC2AC2F0) == 1) {
            return FUN_0c050740();
        }
        return FUN_0c0506c2();
    }
    return (t2 - 1);
}

int FUN_0c069f70(void)
{
    register int t0;

    t0 = *(int *)0xC2B9C2C;
    *(unsigned int *)0xC13B470 = (*(int *)(((*(int *)((((t0 - 1) << 2) + 0xC13B450))) + (((int)((int)(FUN_0c069e54()) % (int)(*(int *)((((t0 - 1) << 2) + 0xC110700))))) << 2))));
    Voice_ShutUp(0x1);
    return FUN_0c058f64(0xC13B470, 0x1, (*(int *)((((t0 - 1) << 2) + 0xC11037C))), 0x0);
}

int FUN_0c023176(void)
{
    (((struct o0_uint *)0xC270924)->v) = 0x0;
    (((struct o14_uint *)0xC270924)->v) = 0x1;
    *(unsigned int *)0xC2709A8 = 0x0;
    (((struct o0_float *)0xC175930)->v) = 0.0f;
    (((struct o4_float *)0xC175930)->v) = ((((struct o0_float *)0xC023228)->v));
    (((struct o8_float *)0xC175930)->v) = ((((struct o4_float *)0xC023228)->v));
    (((struct oC_uchar *)0xC175930)->v) = (*(signed char *)0xC097434);
    (((struct oD_uchar *)0xC175930)->v) = (*(signed char *)0xC097435);
    (((struct oE_uchar *)0xC175930)->v) = (*(signed char *)0xC097436);
    (((struct oF_uchar *)0xC175930)->v) = (*(signed char *)0xC097437);
    (((struct o10_uchar *)0xC175930)->v) = (*(signed char *)0xC097438);
    (((struct o11_uchar *)0xC175930)->v) = (*(signed char *)0xC097439);
    (((struct oE_ushort *)0xC175930)->v) = 0x8000;
    FUN_0c04b180(0x1);
    return FUN_0c029574(0x1);
}

int FUN_0c025ba8(void)
{
    (((struct o0_uint *)0xC270924)->v) = 0x1;
    (((struct o14_uint *)0xC270924)->v) = 0x1;
    *(unsigned int *)0xC2709A8 = 0x0;
    (((struct o0_float *)0xC175930)->v) = ((((struct o0_float *)0xC025CA8)->v));
    (((struct o4_float *)0xC175930)->v) = 0.0f;
    (((struct o8_float *)0xC175930)->v) = ((((struct o4_float *)0xC025CA8)->v));
    (((struct oC_uchar *)0xC175930)->v) = (*(signed char *)0xC097434);
    (((struct oD_uchar *)0xC175930)->v) = (*(signed char *)0xC097435);
    (((struct oE_uchar *)0xC175930)->v) = (*(signed char *)0xC097436);
    (((struct oF_uchar *)0xC175930)->v) = (*(signed char *)0xC097437);
    (((struct o10_uchar *)0xC175930)->v) = (*(signed char *)0xC097438);
    (((struct o11_uchar *)0xC175930)->v) = (*(signed char *)0xC097439);
    (((struct oE_ushort *)0xC175930)->v) = 0x8000;
    FUN_0c04b180(0x8);
    return FUN_0c029574(0x8);
}

int FUN_0c0490e6(Stk5 s)
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
    return (FUN_0c07ff00());
}

int FUN_0c024708(void)
{
    (((struct o0_uint *)0xC270924)->v) = 0x0;
    (((struct o14_uint *)0xC270924)->v) = 0x1;
    *(unsigned int *)0xC2709A8 = 0x0;
    (((struct o0_float *)0xC175930)->v) = 0.0f;
    (((struct o4_float *)0xC175930)->v) = 0.0f;
    (((struct o8_float *)0xC175930)->v) = 500.0f;
    (((struct oC_uchar *)0xC175930)->v) = (*(signed char *)0xC097434);
    (((struct oD_uchar *)0xC175930)->v) = (*(signed char *)0xC097435);
    (((struct oE_uchar *)0xC175930)->v) = (*(signed char *)0xC097436);
    (((struct oF_uchar *)0xC175930)->v) = (*(signed char *)0xC097437);
    (((struct o10_uchar *)0xC175930)->v) = (*(signed char *)0xC097438);
    (((struct o11_uchar *)0xC175930)->v) = (*(signed char *)0xC097439);
    (((struct oE_ushort *)0xC175930)->v) = 0x8000;
    FUN_0c04b180(0x0);
    return FUN_0c029574(0x0);
}

int FUN_0c0253a2(void)
{
    (((struct o0_uint *)0xC270924)->v) = 0x1;
    (((struct o14_uint *)0xC270924)->v) = 0x1;
    *(unsigned int *)0xC2709A8 = 0x0;
    (((struct o0_float *)0xC175930)->v) = 0.0f;
    (((struct o4_float *)0xC175930)->v) = 0.0f;
    (((struct o8_float *)0xC175930)->v) = (*(float *)0xC025468);
    (((struct oC_uchar *)0xC175930)->v) = (*(signed char *)0xC097434);
    (((struct oD_uchar *)0xC175930)->v) = (*(signed char *)0xC097435);
    (((struct oE_uchar *)0xC175930)->v) = (*(signed char *)0xC097436);
    (((struct oF_uchar *)0xC175930)->v) = (*(signed char *)0xC097437);
    (((struct o10_uchar *)0xC175930)->v) = (*(signed char *)0xC097438);
    (((struct o11_uchar *)0xC175930)->v) = (*(signed char *)0xC097439);
    (((struct oE_ushort *)0xC175930)->v) = 0x8000;
    FUN_0c04b180(0x9);
    return FUN_0c029574(0x9);
}

int FUN_0c0254de(void)
{
    (((struct o0_uint *)0xC270924)->v) = 0x1;
    (((struct o14_uint *)0xC270924)->v) = 0x1;
    *(unsigned int *)0xC2709A8 = 0x0;
    (((struct o0_float *)0xC175930)->v) = 0.0f;
    (((struct o4_float *)0xC175930)->v) = 0.0f;
    (((struct o8_float *)0xC175930)->v) = (*(float *)0xC025598);
    (((struct oC_uchar *)0xC175930)->v) = (*(signed char *)0xC097434);
    (((struct oD_uchar *)0xC175930)->v) = (*(signed char *)0xC097435);
    (((struct oE_uchar *)0xC175930)->v) = (*(signed char *)0xC097436);
    (((struct oF_uchar *)0xC175930)->v) = (*(signed char *)0xC097437);
    (((struct o10_uchar *)0xC175930)->v) = (*(signed char *)0xC097438);
    (((struct o11_uchar *)0xC175930)->v) = (*(signed char *)0xC097439);
    (((struct oE_ushort *)0xC175930)->v) = 0x8000;
    FUN_0c04b180(0x6);
    return FUN_0c029574(0x6);
}

int FUN_0c025cfe(void)
{
    (((struct o0_uint *)0xC270924)->v) = 0x1;
    (((struct o14_uint *)0xC270924)->v) = 0x1;
    *(unsigned int *)0xC2709A8 = 0x0;
    (((struct o0_float *)0xC175930)->v) = 0.0f;
    (((struct o4_float *)0xC175930)->v) = 0.0f;
    (((struct o8_float *)0xC175930)->v) = (*(float *)0xC025DEC);
    (((struct oC_uchar *)0xC175930)->v) = (*(signed char *)0xC097434);
    (((struct oD_uchar *)0xC175930)->v) = (*(signed char *)0xC097435);
    (((struct oE_uchar *)0xC175930)->v) = (*(signed char *)0xC097436);
    (((struct oF_uchar *)0xC175930)->v) = (*(signed char *)0xC097437);
    (((struct o10_uchar *)0xC175930)->v) = (*(signed char *)0xC097438);
    (((struct o11_uchar *)0xC175930)->v) = (*(signed char *)0xC097439);
    (((struct oE_ushort *)0xC175930)->v) = 0x8000;
    FUN_0c04b180(0xB);
    return FUN_0c029574(0xB);
}

int FUN_0c025e4e(void)
{
    (((struct o0_uint *)0xC270924)->v) = 0x1;
    (((struct o14_uint *)0xC270924)->v) = 0x1;
    *(unsigned int *)0xC2709A8 = 0x0;
    (((struct o0_float *)0xC175930)->v) = 0.0f;
    (((struct o4_float *)0xC175930)->v) = 0.0f;
    (((struct o8_float *)0xC175930)->v) = (*(float *)0xC025F2C);
    (((struct oC_uchar *)0xC175930)->v) = (*(signed char *)0xC097434);
    (((struct oD_uchar *)0xC175930)->v) = (*(signed char *)0xC097435);
    (((struct oE_uchar *)0xC175930)->v) = (*(signed char *)0xC097436);
    (((struct oF_uchar *)0xC175930)->v) = (*(signed char *)0xC097437);
    (((struct o10_uchar *)0xC175930)->v) = (*(signed char *)0xC097438);
    (((struct o11_uchar *)0xC175930)->v) = (*(signed char *)0xC097439);
    (((struct oE_ushort *)0xC175930)->v) = 0x8000;
    FUN_0c04b180(0xC);
    return FUN_0c029574(0xC);
}

int FUN_0c05ee5c(void)
{
    register int t3;

    nlPushMatrix(0x0);
    FUN_0c073a60(0xC2B9738);
    FUN_0c05b586(0xC2B9744);
    t3 = *(int *)0xC137110;
    nlObjPutUseViewMatrix((*(int *)((((((int)((unsigned int)((int)((unsigned int)t3 + (unsigned int)0x0)) + ((((int)0x0 > (int)t3)) ? 1u : 0u))) >> 1) << 2) + 0xC1370F8))));
    *(unsigned int *)0xC137110 = ((int)((unsigned int)((*(int *)0xC137110) + 0x1) % (unsigned int)0xC));
    return nlPopMatrix(0x1);
}

int FUN_0c069c78(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((((a4 + 0x14) + 0x63) + 0x0));
    t1 = 0x0;
    if ((t0 & 16) != 0) {
        t1 = 0x1;
    }
    t2 = t0;
    if (t1 != 0) {
        *(unsigned int *)0xC175908 = 0x1;
        t0 = (((struct o78_int *)(a4))->v);
        (((struct o78_uint *)(a4))->v) = (t0 - 1);
        if ((t0 - 1) == 0) {
            (((struct o7C_uint *)(a4))->v) = 0x5;
            t0 = 0x7C;
        } else {
            (((struct o7C_uint *)(a4))->v) = 0x3;
            (((struct o80_uint *)(a4))->v) = 0x0;
            t0 = 0x80;
        }
        t2 = t0;
    }
    return t2;
}

int FUN_0c02562c(void)
{
    (((struct o0_uint *)0xC270924)->v) = 0x1;
    (((struct o14_uint *)0xC270924)->v) = 0x1;
    *(unsigned int *)0xC2709A8 = 0x0;
    (((struct o0_float *)0xC175930)->v) = 0.0f;
    (((struct o4_float *)0xC175930)->v) = 0.0f;
    (((struct o8_float *)0xC175930)->v) = 0.0f;
    (((struct oC_uchar *)0xC175930)->v) = (*(signed char *)0xC097434);
    (((struct oD_uchar *)0xC175930)->v) = (*(signed char *)0xC097435);
    (((struct oE_uchar *)0xC175930)->v) = (*(signed char *)0xC097436);
    (((struct oF_uchar *)0xC175930)->v) = (*(signed char *)0xC097437);
    (((struct o10_uchar *)0xC175930)->v) = (*(signed char *)0xC097438);
    (((struct o11_uchar *)0xC175930)->v) = (*(signed char *)0xC097439);
    (((struct oE_ushort *)0xC175930)->v) = 0x8000;
    FUN_0c04b180(0x5);
    return FUN_0c029574(0x5);
}

int FUN_0c0658d2(int a4)
{
    register int t0;
    register int t6;

    t0 = *(signed char *)(((a4 + 0x3F) + 0x0));
    t6 = t0;
    if ((t0 & 16) != 0) {
        (((struct oFF_uchar *)(a4))->v) = ((*(signed char *)(((0xFF + a4) + 0x0))) | 0x2);
        (((struct oFF_uchar *)(a4))->v) = ((*(signed char *)(((0xFF + a4) + 0x0))) & 0xF7);
        (((struct oFF_uchar *)(a4))->v) = ((*(signed char *)(((0xFF + a4) + 0x0))) & 0xFB);
        (((struct oFF_uchar *)(a4))->v) = ((*(signed char *)(((0xFF + a4) + 0x0))) & 0xFE);
        (((struct o80_uint *)(a4))->v) = (((((struct o80_int *)(a4))->v)) + 0x1);
        t6 = 0x80;
    }
    return t6;
}

int FUN_0c065894(int a4)
{
    register int t8;

    (((struct oF8_uint *)(a4))->v) = (((((struct oF8_int *)(a4))->v)) - 1);
    t8 = 0xF8;
    if ((int)((((struct oF8_int *)(a4))->v)) <= 0) {
        FUN_0c05f470(a4, (*(int *)(((((((struct o88_int *)(a4))->v)) << 2) + 0xC10EF34))), 0.0f, (*(float *)0xC06595C));
        FUN_0c05f6fe(a4);
        (((struct o80_uint *)(a4))->v) = (((((struct o80_int *)(a4))->v)) + 0x1);
        t8 = 0x80;
    }
    return t8;
}

int FUN_0c065f46(int a4, int a5)
{
    register int t8;

    (((struct oF8_uint *)(a5))->v) = (((((struct oF8_int *)(a5))->v)) - 1);
    t8 = 0xF8;
    if ((int)((((struct oF8_int *)(a5))->v)) <= 0) {
        FUN_0c05f470(a5, (*(int *)(((((((struct o88_int *)(a5))->v)) << 2) + 0xC10EF34))), 0.0f, (*(float *)0xC066004));
        FUN_0c05f6fe(a5);
        (((struct o80_uint *)(a5))->v) = (((((struct o80_int *)(a5))->v)) + 0x1);
        t8 = 0x80;
    }
    return t8;
}

int FUN_0c01e706(int a4)
{
    register int t1;
    register int t7;

    t1 = FUN_0c14e916((*(int *)(((a4 << 2) + 0xC1ECD64))));
    t7 = 0x58764;
    if ((int)t1 >= (int)0x2) {
        t7 = (int)((float)(FUN_0c14eb7e((*(int *)(((a4 << 2) + 0xC1ECD64))))) * (*(float *)0xC01E828));
    }
    return t7;
}

int FUN_0c0197f6(float f4)
{
    (((struct o0_uint *)0xC177EA8)->v) = 0xFFFFFFFF;
    (((struct o4_uint *)0xC177EA8)->v) = 0x0;
    FUN_0c019916();
    FUN_0c018b00(0x8);
    FUN_0c018b1c(0x1);
    FUN_0c018b22(0xC177EB0, 0x0);
    camSetTarget(0xC177EBC, 0x0);
    *(float *)0xC177D9C = 60.0f;
    return 0xC019894;
}
