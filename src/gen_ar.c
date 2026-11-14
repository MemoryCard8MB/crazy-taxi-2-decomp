/* Straight-line functions with calls and guards (batch gen_ar): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o100_float { char p[0x100]; float v; };
struct o104_float { char p[0x104]; float v; };
struct o108_float { char p[0x108]; float v; };
struct o110_float { char p[0x110]; float v; };
struct o130_float { char p[0x130]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o14C_float { char p[0x14C]; float v; };
struct o154_float { char p[0x154]; float v; };
struct o160_float { char p[0x160]; float v; };
struct o164_float { char p[0x164]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o19C_ushort { char p[0x19C]; unsigned short v; };
struct o19E_short { char p[0x19E]; short v; };
struct o19E_ushort { char p[0x19E]; unsigned short v; };
struct o1A0_short { char p[0x1A0]; short v; };
struct o1A0_ushort { char p[0x1A0]; unsigned short v; };
struct o1C_int { char p[0x1C]; int v; };
struct o20_float { char p[0x20]; float v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o28_int { char p[0x28]; int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_int { char p[0x2C]; int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o38_int { char p[0x38]; int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3C_int { char p[0x3C]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o40_int { char p[0x40]; int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o70_int { char p[0x70]; int v; };
struct o74_int { char p[0x74]; int v; };
struct o78_float { char p[0x78]; float v; };
struct o7C_float { char p[0x7C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o80_float { char p[0x80]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_short { char p[0x88]; short v; };
struct o8A_short { char p[0x8A]; short v; };
struct o8C_short { char p[0x8C]; short v; };
struct o94_float { char p[0x94]; float v; };
struct o9C_short { char p[0x9C]; short v; };
struct o9E_short { char p[0x9E]; short v; };
struct oA0_short { char p[0xA0]; short v; };
struct oC_float { char p[0xC]; float v; };
struct oF8_short { char p[0xF8]; short v; };
int FUN_0c01b87a(int, int, float);
int FUN_0c01b920(int, float, float);
int FUN_0c0295c0(int, int, float, float);
int FUN_0c0297f4(int, int, float);
int FUN_0c029b12(int, float);
extern int FUN_0c0468aa();
float FUN_0c0469e2(int, int, int, int, int);
int FUN_0c058ca6(int, int);
int FUN_0c072150(int, int, int);
int FUN_0c072230(int, int);
int FUN_0c072290(int, int);
int FUN_0c073360(void);
int FUN_0c0739a0(int);
float FUN_0c073c60(int);
extern int FUN_0c07ada0();
int FUN_0c07ff00(void);
int PutCollisionEffect(int, int, int);
int nlAddVector(int, int);
int nlAddVector3op(int, int, int);
int nlGetAverageVector(int, int, int, float, float);
float nlLength(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlSubVector3op(int, int, int);
float FUN_0c012e78(int a4, float f4, float f5, float f6, float f7, float f8);
int FUN_0c054504(void);
int FUN_0c013b2c(int a4, float f4);


int FUN_0c054504(void)
{
    int t0;
    register int t1;
    register int t2;
    int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register int t12;
    register int t13;
    register float u0;

    t0 = (((struct o28_int *)0xC2B2DAC)->v);
    t1 = (((struct o24_int *)0xC2B2DAC)->v);
    if ((int)t0 > 0) {
        if ((int)t0 < (int)0x64) {
            (((struct o24_uint *)0xC2B2DAC)->v) = (((((struct o24_int *)0xC2B2DAC)->v)) + 0x1);
            (((struct o2C_uint *)0xC2B2DAC)->v) = (((((struct o2C_int *)0xC2B2DAC)->v)) - 1);
        } else {
            t2 = (int)((int)t0 / (int)0x50);
            (((struct o24_uint *)0xC2B2DAC)->v) = (((((struct o24_int *)0xC2B2DAC)->v)) + t2);
            (((struct o2C_uint *)0xC2B2DAC)->v) = (((((struct o2C_int *)0xC2B2DAC)->v)) - t2);
        }
        if ((int)((((struct o2C_int *)0xC2B2DAC)->v)) < 0) {
            (((struct o2C_uint *)0xC2B2DAC)->v) = 0x0;
        }
        if ((int)((((struct o24_int *)0xC2B2DAC)->v)) >= (int)(*(int *)0xC1ECCC8)) {
            (((struct o28_uint *)0xC2B2DAC)->v) = 0x0;
            (((struct o24_uint *)0xC2B2DAC)->v) = (*(int *)0xC1ECCC8);
            FUN_0c058ca6(0x1204A9, 0x0);
        } else {
            t2 = t0;
            t0 = 0xC1ECCA8;
            t3 = 0xC2B2DD4;
        }
        t4 = t2;
        t2 = t0;
        t0 = t3;
    } else {
        t3 = *(int *)0xC1ECCC8;
        if ((int)t3 > (int)t1) {
            (((struct o28_uint *)0xC2B2DAC)->v) = (t3 - t1);
            FUN_0c058ca6(0x1104A9, 0x0);
        } else {
            t1 = t3;
            t3 = 0xC1ECCA8;
            t5 = 0xC2B2DD4;
        }
        t4 = t1;
        t2 = t3;
        t0 = t5;
    }
    t1 = (((struct o24_int *)0xC2B2DAC)->v);
    if (((((struct o3C_int *)0xC2B2DAC)->v)) != 0) {
        t3 = (((struct o38_int *)0xC2B2DAC)->v);
        t5 = 0xC10CD3C;
        if (((int)t3 > (int)0x1) && (t3 != 3)) {
            t5 = 0xC10CD74;
        }
        (((struct o8_float *)0xC2B2E3C)->v) = (((((struct o4_float *)0xC2B2DAC)->v)) + 52.0f);
        t3 = (int)((int)((int)((int)t1 / (int)0x989680)) % (int)0xA);
        if ((0x0 == 0) && (t3 == 0)) {
            (((struct o0_uint *)0xC2B2E3C)->v) = (*(int *)((t5 + 0x30)));
            t6 = 0x0;
        } else {
            (((struct o0_uint *)0xC2B2E3C)->v) = (*(int *)((t5 + (t3 << 2))));
            t6 = 0x1;
        }
        (((struct o4_float *)0xC2B2E3C)->v) = (((((struct o0_float *)0xC2B2DAC)->v)) + 480.0f);
        t3 = ((int (*)(int, int, int, int))(FUN_0c07ada0))(0xC2B2E3C, t4, t2, t0);
        t3 = (int)((int)((int)((int)t1 / (int)0xF4240)) % (int)0xA);
        t7 = t6;
        if ((t6 != 0) || (t3 != 0)) {
            (((struct o0_uint *)0xC2B2E3C)->v) = (*(int *)((t5 + (t3 << 2))));
            t7 = 0x1;
        }
        (((struct o4_float *)0xC2B2E3C)->v) = (((((struct o0_float *)0xC2B2DAC)->v)) + 496.0f);
        t3 = ((int (*)(int))(FUN_0c07ada0))(0xC2B2E3C);
        t3 = (int)((int)((int)((int)t1 / (int)0x186A0)) % (int)0xA);
        t6 = t7;
        if ((t7 != 0) || (t3 != 0)) {
            (((struct o0_uint *)0xC2B2E3C)->v) = (*(int *)((t5 + (t3 << 2))));
            t6 = 0x1;
        }
        (((struct o4_float *)0xC2B2E3C)->v) = (((((struct o0_float *)0xC2B2DAC)->v)) + 512.0f);
        t3 = ((int (*)(int))(FUN_0c07ada0))(0xC2B2E3C);
        t3 = (int)((int)((int)((int)t1 / (int)0x2710)) % (int)0xA);
        t7 = t6;
        if ((t6 != 0) || (t3 != 0)) {
            (((struct o0_uint *)0xC2B2E3C)->v) = (*(int *)((t5 + (t3 << 2))));
            t7 = 0x1;
        }
        (((struct o4_float *)0xC2B2E3C)->v) = (((((struct o0_float *)0xC2B2DAC)->v)) + 536.0f);
        t3 = ((int (*)(int))(FUN_0c07ada0))(0xC2B2E3C);
        t3 = (int)((int)((int)((int)t1 / (int)0x3E8)) % (int)0xA);
        if ((t7 != 0) || (t3 != 0)) {
            (((struct o0_uint *)0xC2B2E3C)->v) = (*(int *)((t5 + (t3 << 2))));
        }
        (((struct o4_float *)0xC2B2E3C)->v) = (((((struct o0_float *)0xC2B2DAC)->v)) + 552.0f);
        t3 = ((int (*)(int))(FUN_0c07ada0))(0xC2B2E3C);
        (((struct o4_float *)0xC2B2E3C)->v) = (((((struct o0_float *)0xC2B2DAC)->v)) + 568.0f);
        (((struct o0_uint *)0xC2B2E3C)->v) = (*(int *)((t5 + (((int)((int)((int)((int)t1 / (int)0x64)) % (int)0xA)) << 2))));
        t3 = ((int (*)(int))(FUN_0c07ada0))(0xC2B2E3C);
        (((struct o4_float *)0xC2B2E3C)->v) = (((((struct o0_float *)0xC2B2DAC)->v)) + 592.0f);
        (((struct o0_uint *)0xC2B2E3C)->v) = (*(int *)((t5 + (((int)((int)((int)((int)t1 / (int)0xA)) % (int)0xA)) << 2))));
        t3 = ((int (*)(int))(FUN_0c07ada0))(0xC2B2E3C);
        (((struct o4_float *)0xC2B2E3C)->v) = (((((struct o0_float *)0xC2B2DAC)->v)) + 608.0f);
        (((struct o0_uint *)0xC2B2E3C)->v) = (*(int *)((t5 + (((int)((int)t1 % (int)0xA)) << 2))));
        t3 = ((int (*)(int))(FUN_0c07ada0))(0xC2B2E3C);
        (((struct o4_float *)0xC2B2E3C)->v) = (((((struct o0_float *)0xC2B2DAC)->v)) + ((((struct o0_float *)0xC054C64)->v)));
        if ((int)t1 >= (int)0x186A0) {
            (((struct o0_uint *)0xC2B2E3C)->v) = (*(int *)((t5 + 0x2C)));
        } else {
            (((struct o0_uint *)0xC2B2E3C)->v) = (*(int *)((t5 + 0x34)));
        }
        t1 = ((int (*)(int))(FUN_0c07ada0))(0xC2B2E3C);
        (((struct o4_float *)0xC2B2E3C)->v) = (((((struct o0_float *)0xC2B2DAC)->v)) + ((((struct o8_float *)0xC054C64)->v)));
        (((struct o0_uint *)0xC2B2E3C)->v) = (*(int *)((t5 + 0x28)));
        t1 = ((int (*)(int))(FUN_0c07ada0))(0xC2B2E3C);
        (((struct o4_float *)0xC2B2E3C)->v) = (((((struct o0_float *)0xC2B2DAC)->v)) + ((((struct oC_float *)0xC054C64)->v)));
        (((struct o0_uint *)0xC2B2E3C)->v) = 0x149;
        t1 = (((int (*)(int))(FUN_0c07ada0))(0xC2B2E3C));
    } else {
        t3 = (((struct o1C_int *)0xC2B2DAC)->v);
        if ((int)t3 < (int)0xB4) {
            t5 = t4;
            t6 = t2;
            t7 = t0;
            if ((int)t3 > (int)0x32) {
                if (((int)((int)t3 % (int)0x28)) == 0) {
                    FUN_0c058ca6(0xD04A9, 0x0);
                } else {
                    t8 = t4;
                    t9 = t2;
                    t10 = t0;
                }
                t5 = t8;
                t6 = t9;
                t7 = t10;
            }
            t8 = 0xC10CD74;
            if ((int)((((struct o1C_int *)0xC2B2DAC)->v)) >= (int)0x3C) {
                t9 = 0xC10CD3C;
                if ((int)((((struct o1C_int *)0xC2B2DAC)->v)) >= (int)0x50) {
                    t10 = 0xC10CD74;
                    if ((int)((((struct o1C_int *)0xC2B2DAC)->v)) >= (int)0x64) {
                        t11 = 0xC10CD3C;
                        if ((int)((((struct o1C_int *)0xC2B2DAC)->v)) >= (int)0x78) {
                            t12 = 0xC10CD74;
                            if ((int)((((struct o1C_int *)0xC2B2DAC)->v)) >= (int)0x8C) {
                                t13 = 0xC10CD74;
                                if ((int)((((struct o1C_int *)0xC2B2DAC)->v)) < (int)0xA0) {
                                    t13 = 0xC10CD3C;
                                }
                                t12 = t13;
                            }
                            t11 = t12;
                        }
                        t10 = t11;
                    }
                    t9 = t10;
                }
                t8 = t9;
            }
            t9 = 0x54C5638;
            t10 = t5;
            t5 = t6;
            t6 = t7;
            t7 = t8;
        } else {
            t8 = t4;
            t11 = t2;
            t12 = t0;
            if (((int)t3 < (int)0x136) && ((int)t3 >= (int)0xDC)) {
                if (((int)((int)t3 % (int)0xA)) == 0) {
                    FUN_0c058ca6(0xC04A9, 0x0);
                } else {
                    t3 = t4;
                    t4 = t2;
                    t2 = t0;
                }
                t8 = t3;
                t11 = t4;
                t12 = t2;
            }
            t0 = (((struct o1C_int *)0xC2B2DAC)->v);
            t2 = 0x34FB5E38;
            if ((int)t0 < (int)0xDC) {
            } else {
                t3 = 0x34FB5E30;
                if ((int)t0 < (int)0xE6) {
                } else {
                    t4 = 0x34FB5DE0;
                    if ((int)t0 < (int)0xF0) {
                    } else {
                        t13 = 0x34FB5AC0;
                        if ((int)t0 < (int)0xFA) {
                        } else {
                            t13 = 0x34FB3B80;
                            if ((int)t0 < (int)0x104) {
                            } else {
                                t13 = 0x34FA0300;
                                if ((int)t0 < (int)0x10E) {
                                } else {
                                    t13 = 0x34EDCE00;
                                    if ((int)t0 < (int)0x118) {
                                    } else {
                                        t13 = 0x3473BC00;
                                        if ((int)t0 < (int)0x122) {
                                        } else {
                                            t13 = 0x0;
                                            if ((int)t0 < (int)0x12C) {
                                                t13 = 0x2FAF0800;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        t4 = t13;
                    }
                    t3 = t4;
                }
                t2 = t3;
            }
            t9 = t2;
            t10 = t8;
            t5 = t11;
            t6 = t12;
            t7 = 0xC10CDAC;
        }
        (((struct o8_float *)0xC2B2E3C)->v) = (((((struct o4_float *)0xC2B2DAC)->v)) + 52.0f);
        (((struct o10_float *)0xC2B2E3C)->v) = ((((struct o10_float *)0xC2B2DAC)->v));
        t0 = (int)((int)((int)((int)t9 / (int)0x989680)) % (int)0xA);
        if ((0x0 == 0) && (t0 == 0)) {
            (((struct o0_uint *)0xC2B2E3C)->v) = (*(int *)((t7 + 0x30)));
            t2 = 0x0;
        } else {
            (((struct o0_uint *)0xC2B2E3C)->v) = (*(int *)((t7 + (t0 << 2))));
            t2 = 0x1;
        }
        (((struct o4_float *)0xC2B2E3C)->v) = ((((((struct o0_float *)0xC2B2DAC)->v)) - ((((((struct o10_float *)0xC2B2DAC)->v)) * 32.0f))) + 512.0f);
        t0 = ((int (*)(int, int, int, int))(FUN_0c07ada0))(0xC2B2E3C, t10, t5, t6);
        t0 = (int)((int)((int)((int)t9 / (int)0xF4240)) % (int)0xA);
        t3 = t2;
        if ((t2 != 0) || (t0 != 0)) {
            (((struct o0_uint *)0xC2B2E3C)->v) = (*(int *)((t7 + (t0 << 2))));
            t3 = 0x1;
        }
        (((struct o4_float *)0xC2B2E3C)->v) = ((((((struct o0_float *)0xC2B2DAC)->v)) - ((((((struct o10_float *)0xC2B2DAC)->v)) * 16.0f))) + 512.0f);
        t0 = ((int (*)(int))(FUN_0c07ada0))(0xC2B2E3C);
        t0 = (int)((int)((int)((int)t9 / (int)0x186A0)) % (int)0xA);
        t2 = t3;
        if ((t3 != 0) || (t0 != 0)) {
            (((struct o0_uint *)0xC2B2E3C)->v) = (*(int *)((t7 + (t0 << 2))));
            t2 = 0x1;
        }
        u0 = ((((struct o0_float *)0xC2B2DAC)->v));
        u0 = u0 + 0.0f * ((((struct o10_float *)0xC2B2DAC)->v));
        (((struct o4_float *)0xC2B2E3C)->v) = (u0 + 512.0f);
        t0 = ((int (*)(int))(FUN_0c07ada0))(0xC2B2E3C);
        t0 = (int)((int)((int)((int)t9 / (int)0x2710)) % (int)0xA);
        t3 = t2;
        if ((t2 != 0) || (t0 != 0)) {
            (((struct o0_uint *)0xC2B2E3C)->v) = (*(int *)((t7 + (t0 << 2))));
            t3 = 0x1;
        }
        u0 = ((((struct o0_float *)0xC2B2DAC)->v));
        u0 = u0 + 24.0f * ((((struct o10_float *)0xC2B2DAC)->v));
        (((struct o4_float *)0xC2B2E3C)->v) = (u0 + 512.0f);
        t0 = ((int (*)(int))(FUN_0c07ada0))(0xC2B2E3C);
        t0 = (int)((int)((int)((int)t9 / (int)0x3E8)) % (int)0xA);
        if ((t3 != 0) || (t0 != 0)) {
            (((struct o0_uint *)0xC2B2E3C)->v) = (*(int *)((t7 + (t0 << 2))));
        }
        u0 = ((((struct o0_float *)0xC2B2DAC)->v));
        u0 = u0 + 40.0f * ((((struct o10_float *)0xC2B2DAC)->v));
        (((struct o4_float *)0xC2B2E3C)->v) = (u0 + 512.0f);
        t0 = ((int (*)(int))(FUN_0c07ada0))(0xC2B2E3C);
        u0 = ((((struct o0_float *)0xC2B2DAC)->v));
        u0 = u0 + 56.0f * ((((struct o10_float *)0xC2B2DAC)->v));
        (((struct o4_float *)0xC2B2E3C)->v) = (u0 + 512.0f);
        (((struct o0_uint *)0xC2B2E3C)->v) = (*(int *)((t7 + (((int)((int)((int)((int)t9 / (int)0x64)) % (int)0xA)) << 2))));
        t0 = ((int (*)(int))(FUN_0c07ada0))(0xC2B2E3C);
        u0 = ((((struct o0_float *)0xC2B2DAC)->v));
        u0 = u0 + 80.0f * ((((struct o10_float *)0xC2B2DAC)->v));
        (((struct o4_float *)0xC2B2E3C)->v) = (u0 + 512.0f);
        (((struct o0_uint *)0xC2B2E3C)->v) = (*(int *)((t7 + (((int)((int)((int)((int)t9 / (int)0xA)) % (int)0xA)) << 2))));
        t0 = ((int (*)(int))(FUN_0c07ada0))(0xC2B2E3C);
        u0 = ((((struct o0_float *)0xC2B2DAC)->v));
        u0 = u0 + 96.0f * ((((struct o10_float *)0xC2B2DAC)->v));
        (((struct o4_float *)0xC2B2E3C)->v) = (u0 + 512.0f);
        (((struct o0_uint *)0xC2B2E3C)->v) = (*(int *)((t7 + (((int)((int)t9 % (int)0xA)) << 2))));
        t0 = ((int (*)(int))(FUN_0c07ada0))(0xC2B2E3C);
        u0 = ((((struct o0_float *)0xC2B2DAC)->v));
        u0 = u0 + 12.0f * ((((struct o10_float *)0xC2B2DAC)->v));
        (((struct o4_float *)0xC2B2E3C)->v) = (u0 + 512.0f);
        (((struct o0_uint *)0xC2B2E3C)->v) = (*(int *)((t7 + 0x2C)));
        t0 = ((int (*)(int))(FUN_0c07ada0))(0xC2B2E3C);
        u0 = ((((struct o0_float *)0xC2B2DAC)->v));
        u0 = u0 + 68.0f * ((((struct o10_float *)0xC2B2DAC)->v));
        (((struct o4_float *)0xC2B2E3C)->v) = (u0 + 512.0f);
        (((struct o0_uint *)0xC2B2E3C)->v) = (*(int *)((t7 + 0x28)));
        t0 = ((int (*)(int))(FUN_0c07ada0))(0xC2B2E3C);
        (((struct o4_float *)0xC2B2E3C)->v) = ((((((struct o0_float *)0xC2B2DAC)->v)) - ((((((struct o10_float *)0xC2B2DAC)->v)) * 72.0f))) + 512.0f);
        (((struct o0_uint *)0xC2B2E3C)->v) = 0x149;
        t0 = ((int (*)(int))(FUN_0c07ada0))(0xC2B2E3C);
        (((struct o10_float *)0xC2B2E3C)->v) = 1.0f;
        t1 = 0x10;
    }
    return t1;
}

