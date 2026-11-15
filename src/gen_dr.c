/* Straight-line functions with calls and guards (batch gen_dr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o18_ushort { char p[0x18]; unsigned short v; };
struct o1A_ushort { char p[0x1A]; unsigned short v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o2_ushort { char p[0x2]; unsigned short v; };
struct o20_float { char p[0x20]; float v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_int { char p[0x28]; int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2C_int { char p[0x2C]; int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o2C_ushort { char p[0x2C]; unsigned short v; };
struct o30_float { char p[0x30]; float v; };
struct o30_uchar { char p[0x30]; unsigned char v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o34_float { char p[0x34]; float v; };
struct o34_int { char p[0x34]; int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o3C_int { char p[0x3C]; int v; };
struct o3C_short { char p[0x3C]; short v; };
struct o3C_uint { char p[0x3C]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_short { char p[0x4]; short v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_short { char p[0x8]; short v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int CarSel_SetFog(void);
int FUN_0c0166c0(int, int, float);
int FUN_0c01e6f0(void);
int FUN_0c01edbc(int, int);
int FUN_0c020772(void);
int FUN_0c021476(int, int);
int FUN_0c022794(int);
int FUN_0c0227a0(int, int, int, int, float, float, float, float, float);
int FUN_0c0228cc(void);
int FUN_0c0228f0(int, int, int, int);
int FUN_0c022de2(int, int, int);
int FUN_0c02447c(float, float, float);
int FUN_0c024f94(float, float, float, float, float, float);
int FUN_0c026ce6(void);
int FUN_0c026e56(void);
int FUN_0c0272de(void);
int FUN_0c027f28(int);
int FUN_0c027fbe(float, float);
int FUN_0c02803a(int, int, int, int);
float FUN_0c02806c(int);
int FUN_0c028196(void);
int FUN_0c0281b6(int);
int FUN_0c0281d4(int, int);
int FUN_0c02842e(int);
int FUN_0c02897a(int);
int FUN_0c0293d4(int);
int FUN_0c0293da(int, int);
int FUN_0c0293f2(int);
int FUN_0c029404(int);
int FUN_0c02d3e8(int, int);
int FUN_0c02d694(int, int);
int FUN_0c02d826(int);
int FUN_0c03332c(int, int, int, int);
int FUN_0c033430(int);
int FUN_0c03346e(int, int, int, int);
int FUN_0c033578(int, int, float, float, float);
int FUN_0c03386a(int);
int FUN_0c0339c0(int);
int FUN_0c0339fc(int);
int FUN_0c033b12(int, int);
int FUN_0c034320(int, int);
int FUN_0c0343b8(int, int);
int FUN_0c0345ec(int, int, int, float, float, float);
int FUN_0c034804(int, float, float);
int FUN_0c034928(int, int, int, int, int);
int FUN_0c035a20(int);
int FUN_0c035a5e(int, int, float, float);
int FUN_0c039d7e(int, int);
int FUN_0c03b098(void);
int FUN_0c03c070(int, int, int);
int FUN_0c03eefe(int);
int FUN_0c03f15e(int);
int FUN_0c03f164(int);
int FUN_0c03f42e(int);
int FUN_0c0476dc(int);
int FUN_0c04f224(void);
int FUN_0c04f40a(void);
int FUN_0c04fbf0(void);
int FUN_0c058974(int, int, int);
int FUN_0c058aa0(int, int, int, int);
int FUN_0c058be4(int);
int FUN_0c058ca6(int, int);
int FUN_0c058e82(void);
int FUN_0c058f64(int, int, int, int);
int FUN_0c069040(int);
int FUN_0c069230(int, int, int, int);
int FUN_0c069890(void);
int FUN_0c06989a(void);
int FUN_0c06f550(int, int, int);
int FUN_0c076230(float, float, float);
int FUN_0c07c8be(int);
int FUN_0c07ff00(void);
int FUN_0c07ffac(int);
int buIsReady(int);
int gdc_PlayStreamSong(int);
int gdc_StopStreamVoiceAll(void);
int gdc_VolStreamSong(int);
int mpvvlc_InitMbai(void);
int nlInitEvent(void);
int nlInitHeapMemory(int, int);
float nlLength(int, int);
int nlMatrixMode(int);
int nlPerspective(int, float, float, float);
int nlPerspectiveX(int, float, float, float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlUnitMatrix(void);
int pfSize(float, float);
int pfTextCenterPut(int, int, int);
int thunk_FUN_0c05995e(void);
int FUN_0c03c5d8(void);
int FUN_0c0265e8(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8);
int FUN_0c0247a8(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8);
int FUN_0c024c6c(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8);
int FUN_0c03dd80(void);
int FUN_0c04e6bc(void);
int FUN_0c038218(void);
int FUN_0c0242fe(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8);

int FUN_0c03c5d8(void)
{
    int stk[4];
    register int t1;
    register int t8;
    int t15;
    register int t24;
    register int t45;
    register int t218;
    int t250;
    register int t259;
    register int t260;
    register int t262;
    register int t305;
    register int t306;
    register int t308;
    register int t309;
    register int t310;
    register int t312;
    register int t321;
    register int t322;
    register int t324;
    int t344;
    register int t346;
    register int t434;
    register int t443;
    register int t447;
    register int t448;
    register int t452;
    register int t487;
    register int t488;
    register int t501;
    register int t509;
    register int t510;
    register int t511;
    register float u512;
    register int t516;
    register float u521;
    register int t522;
    register int t527;
    register int t532;
    register int t580;
    register int t582;
    int t2;
    register int t3;
    int t16;
    register int t234;
    register int t175;
    register int t176;
    register int t192;
    register int t193;
    register int t194;
    register int t279;
    register int t280;
    register int t287;
    register int t288;
    int t444;
    int R1000;
    int R1004;
    int R1008;
    int R1012;

    R1000 = *(int *)((int)stk + 0);
    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);

    t1 = buIsReady(((((struct o28_int *)0xC2A4F80)->v)));
    if (((t1 != 0) && (t2 = (((struct o8_int *)0xC2A46E0)->v), t2 == 0)) || (t3 = *(int *)0xC2A469C, (t3 & 0x9) == 8)) {
    } else {
        *(unsigned int *)0xC2A469C = ((*(int *)0xC2A469C) | 0x9);
    }
    t8 = FUN_0c034320(0x0, 0x14);
    if (t8 == 1) {
        FUN_0c03c070(0x0, 0x0, 0x0);
        (((struct o4_uint *)0xC2A4F80)->v) = ((((struct o0_int *)0xC2A4F80)->v));
        (((struct o4_uint *)0xC12BA20)->v) = 0x0;
        FUN_0c035a20(0x3);
        FUN_0c035a20(0x5);
    }
    t15 = (((struct o18_int *)0xC2A4658)->v);
    if (((0x600 & t15) != 0) && (t16 = (((struct o0_int *)0xC2A46E0)->v), t16 == 0)) {
        R1008 = ((((struct oC_int *)0xC2A4FC0)->v));
        if ((0x400 & t15) != 0) {
            (((struct oC_uint *)0xC2A4FC0)->v) = 0xFFFFFFFF;
        } else {
            if ((t15 & 0x200) != 0) {
                (((struct oC_uint *)0xC2A4FC0)->v) = 0x1;
            }
        }
        t24 = (((struct oC_int *)0xC2A4FC0)->v);
        if ((R1008) != t24) {
            FUN_0c039d7e(((((struct o28_int *)0xC2A4F80)->v)), t24);
            FUN_0c03c070(0x0, 0x0, 0x0);
        }
    }
    R1012 = ((((struct o0_int *)0xC2A4FC0)->v));
    R1004 = ((((struct o4_int *)0xC2A4F80)->v));
    t45 = (((struct o28_int *)0xC2A4F80)->v);
    if (((*(int *)0xC2A469C) & 4) == 0) {
    } else {
        t234 = (((struct o0_int *)0xC2A46E0)->v);
        if (t234 != 0) {
        } else {
            t260 = t234;
            if (((((struct o0_int *)0xC2A4F80)->v)) == 5) {
                if ((int)(*(int *)((((t45 * 0x7C) + 0xC2A46F0) + 0x10))) <= 0) {
                    (((struct o4_uint *)0xC2A4F80)->v) = 0x5;
                } else {
                    t218 = (((struct o34_int *)0xC2A4F80)->v);
                    if ((int)(*(int *)((((t45 * 0x7C) + 0xC2A46F0) + 0x8))) < (int)t218) {
                        (((struct o4_uint *)0xC2A4F80)->v) = 0x6;
                        t234 = t218;
                    } else {
                        if ((((((struct o18_int *)0xC2A4658)->v)) & 2) == 0) {
                            if (((((((struct o18_int *)0xC2A4658)->v)) & 0x20) == 0) && ((t175 = (((struct o20_int *)0xC2A4658)->v), t175 != 0) || (t176 = (((struct o1C_int *)0xC2A4658)->v), (t176 & 0x20) == 0))) {
                                if ((((((((struct o18_int *)0xC2A4658)->v)) & 0x40) == 0) && ((t192 = (((struct o20_int *)0xC2A4658)->v), t192 != 0) || (t193 = (((struct o1C_int *)0xC2A4658)->v), (t193 & 0x40) == 0))) || (t194 = R1004, t194 != 5)) {
                                } else {
                                    (((struct o4_uint *)0xC2A4F80)->v) = 0x6;
                                    (((struct o0_uint *)0xC2A4FC0)->v) = 0x0;
                                    (((struct o4_uint *)0xC12BA20)->v) = 0x0;
                                }
                            } else {
                                if ((R1004) == 6) {
                                    (((struct o4_uint *)0xC2A4F80)->v) = 0x5;
                                }
                            }
                            t218 = (((struct o4_int *)0xC2A4F80)->v);
                            if (t218 != (R1004)) {
                                FUN_0c07c8be(0x10DA9);
                            } else {
                            }
                        }
                        t234 = t218;
                    }
                }
                t260 = t234;
            }
            t259 = (((struct o4_int *)0xC2A4F80)->v);
            t250 = (((struct o18_int *)0xC2A4658)->v);
            if (t259 == 5) {
                (((struct o0_uint *)0xC2A4FC0)->v) = 0xFFFFFFFF;
                for (;;) {
                    t262 = (((struct o4_int *)0xC12BA20)->v);
                    if ((int)((((struct o0_int *)0xC2A4FC0)->v)) < (int)t262) {
                        t259 = ((((struct o4_int *)0xC12BA20)->v));
                        t259 = (t259 - 1);
                        (((struct o4_uint *)0xC12BA20)->v) = t259;
                        continue;
                    }
                    if ((int)((((struct o0_int *)0xC2A4FC0)->v)) >= (int)(t262 + 0x5)) {
                        t260 = ((((struct o4_int *)0xC12BA20)->v));
                        t260 = (t260 + 0x1);
                        (((struct o4_uint *)0xC12BA20)->v) = t260;
                        continue;
                    }
                    break;
                }
            } else {
                if ((0x2 & t250) == 0) {
                    if (((t250 & 0x8) == 0) && ((t279 = (((struct o20_int *)0xC2A4658)->v), t279 != 0) || (t280 = (((struct o1C_int *)0xC2A4658)->v), (t280 & 0x8) == 0))) {
                        if (((t250 & 0x10) == 0) && ((t287 = (((struct o20_int *)0xC2A4658)->v), t287 != 0) || (t288 = (((struct o1C_int *)0xC2A4658)->v), (t288 & 0x10) == 0))) {
                        } else {
                            (((struct o0_uint *)0xC2A4FC0)->v) = (((((struct o0_int *)0xC2A4FC0)->v)) + 0x1);
                        }
                    } else {
                        (((struct o0_uint *)0xC2A4FC0)->v) = (((((struct o0_int *)0xC2A4FC0)->v)) - 1);
                    }
                }
                if ((int)((((struct o0_int *)0xC2A4FC0)->v)) < 0) {
                    (((struct o0_uint *)0xC2A4FC0)->v) = 0x0;
                }
                t305 = *(int *)(((((((struct o28_int *)0xC2A4F80)->v)) * 0x7C) + 0xC2A4700));
                t306 = (((struct o0_int *)0xC2A4FC0)->v);
                if ((int)t306 >= (int)t305) {
                    t308 = *(int *)(((((((struct o28_int *)0xC2A4F80)->v)) * 0x7C) + 0xC2A4700));
                    (((struct o0_uint *)0xC2A4FC0)->v) = (t308 - 1);
                    t309 = 0xC2A4700;
                    t310 = (t308 - 1);
                    for (;;) {
                        t312 = (((struct o4_int *)0xC12BA20)->v);
                        if ((int)((((struct o0_int *)0xC2A4FC0)->v)) < (int)t312) {
                            t309 = ((((struct o4_int *)0xC12BA20)->v));
                            t309 = (t309 - 1);
                            (((struct o4_uint *)0xC12BA20)->v) = t309;
                            continue;
                        }
                        if ((int)((((struct o0_int *)0xC2A4FC0)->v)) >= (int)(t312 + 0x5)) {
                            t310 = ((((struct o4_int *)0xC12BA20)->v));
                            t310 = (t310 + 0x1);
                            (((struct o4_uint *)0xC12BA20)->v) = t310;
                            continue;
                        }
                        break;
                    }
                } else {
                    t321 = t306;
                    t322 = t305;
                    for (;;) {
                        t324 = (((struct o4_int *)0xC12BA20)->v);
                        if ((int)((((struct o0_int *)0xC2A4FC0)->v)) < (int)t324) {
                            t321 = ((((struct o4_int *)0xC12BA20)->v));
                            t321 = (t321 - 1);
                            (((struct o4_uint *)0xC12BA20)->v) = t321;
                            continue;
                        }
                        if ((int)((((struct o0_int *)0xC2A4FC0)->v)) >= (int)(t324 + 0x5)) {
                            t322 = ((((struct o4_int *)0xC12BA20)->v));
                            t322 = (t322 + 0x1);
                            (((struct o4_uint *)0xC12BA20)->v) = t322;
                            continue;
                        }
                        break;
                    }
                }
            }
            t344 = (((struct o18_int *)0xC2A4658)->v);
            if ((0x2 & t344) != 0) {
                t346 = (((struct o4_int *)0xC2A4F80)->v);
                switch (t346) {
                case 5:
                    FUN_0c0339fc(0xF);
                    break;
                case 4:
                    FUN_0c0339fc(0xE);
                    break;
                case 6:
                    FUN_0c0339fc(0x10);
                    break;
                }
                FUN_0c07c8be(0xDA9);
            } else {
                if ((t344 & 0x4) != 0) {
                    *(unsigned int *)0xC2A469C = ((*(int *)0xC2A469C) | 0x9);
                    FUN_0c07c8be(0x30DA9);
                }
            }
        }
        if (((((struct o0_int *)0xC2A4F80)->v)) == 6) {
            if ((int)(*(int *)(((((((struct o28_int *)0xC2A4F80)->v)) * 0x7C) + 0xC2A4700))) <= 0) {
                *(unsigned int *)0xC2A469C = ((*(int *)0xC2A469C) | 0x9);
            }
        }
    }
    if (((((struct o0_int *)0xC2A4FC0)->v)) != (R1012)) {
        FUN_0c07c8be(0x20DA9);
        (((struct o0_uint *)0xC12BA20)->v) = 0x190;
    }
    t434 = (((struct o0_int *)0xC12BA20)->v);
    if ((int)t434 > 0) {
        (((struct o0_uint *)0xC12BA20)->v) = (((((struct o0_int *)0xC12BA20)->v)) - 60);
    } else {
        if ((int)t434 < 0) {
            (((struct o0_uint *)0xC12BA20)->v) = 0x0;
        }
    }
    t443 = FUN_0c03c070(0x1, ((((struct o0_int *)0xC2A4FC0)->v)), ((((struct o4_int *)0xC12BA20)->v)));
    if ((t443 != 0) && (t444 = *(int *)0xC2A469C, (t444 & 0x9) != 8)) {
        *(unsigned int *)0xC2A469C = ((*(int *)0xC2A469C) | 0x9);
    }
    t447 = (((struct o0_int *)0xC2A4F80)->v);
    t448 = (((struct o4_int *)0xC2A5858)->v);
    switch (t447) {
    case 4:
        FUN_0c034804(0x7, (float)(-t448), 416.0f);
        R1000 = 0x0;
        FUN_0c034928(0x2213, 0xC0B5D50, 0x1, 0x0, 0x0);
        break;
    case 5:
        FUN_0c034804(0x8, (float)(-t448), 416.0f);
        t452 = (((struct o4_int *)0xC2A4F80)->v);
        if (t452 == 5) {
            R1008 = 0x0;
        } else {
            if (t452 == 6) {
                R1008 = 0x1;
            }
        }
        R1000 = 0x0;
        FUN_0c034928(0x2213, 0xC0B5D7C, 0x2, (R1008), 0x0);
        break;
    case 6:
        FUN_0c034804(0x7, (float)(-t448), 416.0f);
        R1000 = 0x0;
        FUN_0c034928(0x2213, 0xC0B5DD4, 0x1, 0x0, 0x0);
        break;
    }
    FUN_0c033578(0x20, 0xC0C06A8, (float)(0xE6 - ((((struct o4_int *)0xC2A5858)->v))), 100.0f, 1.0f);
    FUN_0c076230(1.0f, 1.0f, 1.0f);
    FUN_0c03346e(0xC0B7A8C, 0xC2A5808, (int)((float)((((struct o4_int *)0xC2A5858)->v)) + 40.0f), 0x60);
    FUN_0c026ce6();
    t487 = FUN_0c035a5e(0x5, 0x0, (float)(((((struct o8_int *)0xC2A5858)->v)) + 0x78), 160.0f);
    if (t487 == 2) {
        t488 = (((struct o8_int *)0xC2A5858)->v);
        if (((((struct o0_int *)0xC2A4658)->v)) == 2) {
            FUN_0c0345ec(0x224, 0x1F, 0x0, (float)(t488 + 0x78), 122.0f, ((((struct o0_float *)0xC2A5858)->v)));
            FUN_0c0345ec(0x224, 0x20, 0x0, (float)(((((struct o8_int *)0xC2A5858)->v)) + 0x78), 139.0f, ((((struct o0_float *)0xC2A5858)->v)));
        } else {
            FUN_0c0345ec(0x224, 0x1F, 0x0, (float)(t488 + 0x78), 130.0f, ((((struct o0_float *)0xC2A5858)->v)));
        }
        t501 = FUN_0c03332c(0xC2A5868, 0x3, 0x0, (*(int *)(((((((struct o28_int *)0xC2A4F80)->v)) * 0x7C) + 0xC2A46F8))));
        FUN_0c033578(0x221, t501, (float)(((((struct o8_int *)0xC2A5858)->v)) + 0x78), 160.0f, 1.0f);
    }
    t509 = FUN_0c035a5e(0x3, 0x0, (float)(((((struct o8_int *)0xC2A5858)->v)) + 0x140), 359.0f);
    if (t509 != 2) {
    } else {
        t510 = (((struct o8_int *)0xC2A5858)->v);
        t511 = (((struct o0_int *)0xC2A4F80)->v);
        u512 = (((struct o0_float *)0xC2A5858)->v);
        if (t511 == 4) {
            FUN_0c0345ec(0x24, 0x26, 0x0, (float)(t510 + 0x40), 316.0f, u512);
        } else {
            if (t511 == 6) {
                FUN_0c0345ec(0x24, 0x18, 0x0, (float)(t510 + 0x40), 316.0f, u512);
            } else {
                t516 = FUN_0c03332c(0xC2A5868, 0x3, 0x0, ((((struct o34_int *)0xC2A4F80)->v)));
                FUN_0c0345ec(0x24, 0x16, t516, (float)(((((struct o8_int *)0xC2A5858)->v)) + 0x40), 316.0f, ((((struct o0_float *)0xC2A5858)->v)));
                u521 = (((struct o0_float *)0xC03CD00)->v);
                t522 = FUN_0c03332c(0xC2A5868, 0x3, 0x0, ((((struct o34_int *)0xC2A4F80)->v)));
                FUN_0c0345ec(0x24, 0x17, t522, (float)(((((struct o8_int *)0xC2A5858)->v)) + 0x40), u521, ((((struct o0_float *)0xC2A5858)->v)));
                t527 = (((struct o34_int *)0xC2A4F80)->v);
                if ((int)(*(int *)(((((((struct o28_int *)0xC2A4F80)->v)) * 0x7C) + 0xC2A46F8))) < (int)t527) {
                    t532 = FUN_0c03332c(0xC2A5868, 0x3, 0x0, (t527 - (*(int *)(((((((struct o28_int *)0xC2A4F80)->v)) * 0x7C) + 0xC2A46F8)))));
                    FUN_0c0345ec(0x24, 0xF, t532, (float)(((((struct o8_int *)0xC2A5858)->v)) + 0x40), u521, ((((struct o0_float *)0xC2A5858)->v)));
                    FUN_0c0345ec(0x24, 0x19, 0x0, (float)(((((struct o8_int *)0xC2A5858)->v)) + 0x40), ((((struct o8_float *)0xC03CD00)->v)), ((((struct o0_float *)0xC2A5858)->v)));
                    FUN_0c0345ec(0x24, 0x1A, 0x0, (float)(((((struct o8_int *)0xC2A5858)->v)) + 0x40), ((((struct oC_float *)0xC03CD00)->v)), ((((struct o0_float *)0xC2A5858)->v)));
                } else {
                    if (((((struct o4_int *)0xC2A4F80)->v)) == 6) {
                        FUN_0c0345ec(0x24, 0x18, 0x0, (float)(((((struct o8_int *)0xC2A5858)->v)) + 0x40), u521, ((((struct o0_float *)0xC2A5858)->v)));
                    }
                }
            }
        }
    }
    t580 = FUN_0c0343b8(0x0, 0x14);
    if (t580 == 3) {
        t582 = (((struct o0_int *)0xC2A4F80)->v);
        if (t582 != 4) {
            if (t582 != 5) {
                return t582;
            }
            return FUN_0c03f164(0x3);
        }
        FUN_0c03b098();
        return FUN_0c03f164(0x1);
    }
    return t580;
}

int FUN_0c0265e8(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8)
{
    int stk[12];
    register int t0;
    register int t4;
    register int t17;
    register int t18;
    register int t19;
    register float u21;
    register float u22;
    register int t43;
    register int t55;
    register int t56;
    register int t65;
    register float t89;
    register int t92;
    register int t128;
    register float u132;
    register int t148;
    register int t191;
    register int t193;
    register float u329;
    register int t29;
    register int t48;
    register int t163;
    register int t164;
    int t165;
    register int t166;
    register int t167;
    int t168;
    int t186;
    int R1000;
    int R1004;

    R1000 = *(int *)((int)stk + 0);
    R1004 = *(int *)((int)stk + 4);

    t0 = (((struct o0_int *)0xC2709A8)->v);
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                FUN_0c0227a0(0x0, a5, a6, a7, f4, f5, f6, f7, f8);
            } else {
                if (t0 == 3) {
                    FUN_0c0228f0(0x0, ((((struct oC_int *)0xC2709A8)->v)), a6, a7);
                    t4 = (((struct o14_int *)0xC2709A8)->v);
                    (((struct o14_uint *)0xC2709A8)->v) = (t4 + 0x1);
                    if ((t4 + 0x1) == 60) {
                        FUN_0c02897a(0x4);
                    }
                }
            }
        } else {
            R1004 = (*(int *)0xC270A28);
            if (((((struct o4_int *)0xC2709A8)->v)) != 2) {
                R1000 = 0xC177930;
                t17 = 0xC2709AC;
                t18 = 0xC2709A8;
                t19 = 0x0;
                u21 = f4;
                u22 = 99999.8984f;
                for (;;) {
                    if ((*(int *)((0xC270A30 + (t19 << 2)))) != -1) {
                        t18 = 0xC073B60;
                        u21 = ((nlLength(((R1000) + 0x4), 0xC175930)));
                        if (u22 > u21) {
                            u22 = u21;
                            R1004 = t19;
                        }
                    } else {
                        t29 = t17;
                    }
                    t17 = t29;
                    t18 = (R1000);
                    t17 = 0x21;
                    t19 = (t19 + 0x1);
                    t18 = (t18 + 0x1C);
                    R1000 = t18;
                    if ((int)t19 >= (int)t17) {
                        break;
                    }
                }
            }
            if ((R1004) != (*(int *)0xC270A28)) {
                t43 = R1004;
                *(unsigned int *)0xC270A28 = t43;
                FUN_0c02d826(((((t43 * 0x1C) + 0xC177914) + 0x1C) + 0x4));
                t48 = (((t43 * 0x1C) + 0xC177914) + 0x1C);
            } else {
                t48 = ((((*(int *)0xC270A28) * 0x1C) + 0xC177914) + 0x1C);
            }
            t55 = (((struct o4_int *)0xC2709A8)->v);
            if (t55 == 1) {
                t56 = (((struct o14_int *)0xC2709A8)->v);
                (((struct o14_uint *)0xC2709A8)->v) = (t56 + 0x1);
                if ((int)(t56 + 0x1) > (int)0x5A) {
                    (((struct o4_uint *)0xC2709A8)->v) = 0x0;
                    (((struct o14_uint *)0xC2709A8)->v) = 0x0;
                }
            } else {
                if (t55 == 2) {
                    (((struct o14_uint *)0xC2709A8)->v) = (((((struct o14_int *)0xC2709A8)->v)) + 0x1);
                    FUN_0c027f28(0x2);
                    pfSize(1.0f, 1.0f);
                    FUN_0c02803a(0xFFFFFF00, 0xFFFFFF00, 0xFFFFFF00, 0xFFFFFF00);
                    FUN_0c058974(0x140, 0x14C, ((((struct o10_int *)0xC2709A8)->v)));
                    t65 = FUN_0c06989a();
                    if (t65 != 0) {
                        (((struct o4_uint *)0xC2709A8)->v) = 0x1;
                        (((struct o14_uint *)0xC2709A8)->v) = 0x0;
                        (((struct o0_uint *)0xC175908)->v) = 0x1;
                        FUN_0c02897a(0x4);
                    }
                }
            }
            nlPushMatrix(0x0);
            FUN_0c02d3e8((*(int *)0xC270A28), 0x4);
            nlPopMatrix(0x1);
            t89 = nlLength((t48 + 0x4), 0xC175930);
            *(unsigned int *)0xC2B9EE8 = (unsigned short)(FUN_0c021476(t48, 0xC270AB8));
            t92 = FUN_0c02d694(0xC175930, (*(int *)0xC270A28));
            if (t92 == 0) {
                FUN_0c0166c0(((((struct o4_short *)0xC270AB4)->v)), 0x0, t89);
                if (((((struct o0_int *)0xC1ECCA8)->v)) == 1) {
                    (((struct oC_uint *)0xC2709A8)->v) = (((((struct oC_int *)0xC2709A8)->v)) + 0x1);
                }
                if ((int)((((struct oC_int *)0xC1ECCA8)->v)) <= 0) {
                    FUN_0c022794(0x1);
                    (((struct o0_uint *)0xC175908)->v) = 0x0;
                    (((struct o0_uint *)0xC2709A8)->v) = 0x2;
                }
            } else {
                if ((*(int *)((0xC270A30 + ((*(int *)0xC270A28) << 2)))) == -1) {
                    FUN_0c0166c0(((((struct o4_short *)0xC270AB4)->v)), 0x0, t89);
                    if (((((struct o0_int *)0xC1ECCA8)->v)) == 1) {
                        (((struct oC_uint *)0xC2709A8)->v) = (((((struct oC_int *)0xC2709A8)->v)) + 0x1);
                    }
                    if ((int)((((struct oC_int *)0xC1ECCA8)->v)) <= 0) {
                        FUN_0c022794(0x1);
                        (((struct o0_uint *)0xC175908)->v) = 0x0;
                        (((struct o0_uint *)0xC2709A8)->v) = 0x2;
                    }
                } else {
                    t128 = 0x1;
                    if ((*(int *)0xC2ADEC0) != 0) {
                        t128 = 0x2;
                    }
                    FUN_0c0166c0(((((struct o4_short *)0xC270AB4)->v)), t128, t89);
                    u132 = (((struct o0_float *)0xC175A14)->v);
                    if (_builtin_fabsf(u132) > 0.150000006f) {
                        if (((((struct o0_int *)0xC1ECCA8)->v)) == 1) {
                            (((struct oC_uint *)0xC2709A8)->v) = (((((struct oC_int *)0xC2709A8)->v)) + 0x1);
                        }
                        if ((int)((((struct oC_int *)0xC1ECCA8)->v)) <= 0) {
                            FUN_0c022794(0x1);
                            (((struct o0_uint *)0xC175908)->v) = 0x0;
                            (((struct o0_uint *)0xC2709A8)->v) = 0x2;
                        } else {
                            _builtin_fabsf(u132);
                        }
                    } else {
                        t148 = FUN_0c07ffac(((((struct o3C_short *)0xC175A14)->v)));
                        if ((int)t148 >= (int)0x10) {
                            if (((((struct o0_int *)0xC1ECCA8)->v)) == 1) {
                                (((struct oC_uint *)0xC2709A8)->v) = (((((struct oC_int *)0xC2709A8)->v)) + 0x1);
                            }
                            if ((int)((((struct oC_int *)0xC1ECCA8)->v)) <= 0) {
                                FUN_0c022794(0x1);
                                (((struct o0_uint *)0xC175908)->v) = 0x0;
                                (((struct o0_uint *)0xC2709A8)->v) = 0x2;
                            }
                        } else {
                            if (!(40.0f > (((((struct o2C_float *)0xC175908)->v)) - ((((struct o8_float *)(t48))->v)))) && (((t163 = *(int *)0xC1EC71C, t163 != 0) || ((t164 = *(signed char *)((t48 + 0x0)), t164 != 17) && (t165 = *(signed char *)((t48 + 0x0)), t165 != 28))) && ((t166 = *(int *)0xC1EC71C, t166 != 1) || ((t167 = *(signed char *)((t48 + 0x0)), t167 != 19) && (t168 = *(signed char *)((t48 + 0x0)), t168 != 30))))) {
                                if (((((struct o0_int *)0xC1ECCA8)->v)) == 1) {
                                    (((struct oC_uint *)0xC2709A8)->v) = (((((struct oC_int *)0xC2709A8)->v)) + 0x1);
                                }
                                if ((int)((((struct oC_int *)0xC1ECCA8)->v)) <= 0) {
                                    FUN_0c022794(0x1);
                                    (((struct o0_uint *)0xC175908)->v) = 0x0;
                                    (((struct o0_uint *)0xC2709A8)->v) = 0x2;
                                }
                            } else {
                                if (((((((struct o2C_float *)0xC175908)->v)) - ((((struct o8_float *)(t48))->v))) > -40.0f) && (t186 = (((struct o0_int *)0xC175C7C)->v), t186 != 0)) {
                                    (((struct o0_uint *)0xC270AB4)->v) = (((((struct o0_int *)0xC270AB4)->v)) - 1);
                                    FUN_0c029404((*(int *)0xC270A28));
                                    FUN_0c02897a(0x3);
                                    t191 = (((struct o4_int *)0xC175C7C)->v);
                                    if ((int)t191 < (int)0x8) {
                                        FUN_0c058ca6(0x300A9, 0x0);
                                    } else {
                                        t193 = 0xB05A9;
                                        if ((int)t191 < (int)0x10) {
                                            t193 = 0xA05A9;
                                        }
                                        FUN_0c058ca6(t193, 0x0);
                                    }
                                    *(unsigned int *)((((*(int *)0xC270A28) << 2) + 0xC270A30)) = 0xFFFFFFFF;
                                    (((struct o10_uint *)0xC2709A8)->v) = ((((struct oC_int *)0xC2709A8)->v));
                                    FUN_0c069890();
                                    if ((int)((((struct o0_int *)0xC270AB4)->v)) <= 0) {
                                        FUN_0c0228cc();
                                        (((struct o0_uint *)0xC175908)->v) = 0x0;
                                        (((struct o0_uint *)0xC2709A8)->v) = 0x3;
                                        (((struct o14_uint *)0xC2709A8)->v) = 0x0;
                                    } else {
                                        (((struct o4_uint *)0xC2709A8)->v) = 0x2;
                                        (((struct o14_uint *)0xC2709A8)->v) = 0x0;
                                        (((struct o0_uint *)0xC175908)->v) = 0x0;
                                        if (((((struct o0_int *)0xC1ECCA8)->v)) == 1) {
                                            (((struct oC_uint *)0xC2709A8)->v) = (((((struct oC_int *)0xC2709A8)->v)) + 0x1);
                                        }
                                        if ((int)((((struct oC_int *)0xC1ECCA8)->v)) <= 0) {
                                            FUN_0c022794(0x1);
                                            (((struct o0_uint *)0xC175908)->v) = 0x0;
                                            (((struct o0_uint *)0xC2709A8)->v) = 0x2;
                                        }
                                    }
                                } else {
                                    if (((((struct o0_int *)0xC1ECCA8)->v)) == 1) {
                                        (((struct oC_uint *)0xC2709A8)->v) = (((((struct oC_int *)0xC2709A8)->v)) + 0x1);
                                    }
                                    if ((int)((((struct oC_int *)0xC1ECCA8)->v)) <= 0) {
                                        FUN_0c022794(0x1);
                                        (((struct o0_uint *)0xC175908)->v) = 0x0;
                                        (((struct o0_uint *)0xC2709A8)->v) = 0x2;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        (((struct o0_uint *)0xC2709A8)->v) = (((((struct o0_int *)0xC2709A8)->v)) + 0x1);
        (((struct oC_uint *)0xC2709A8)->v) = 0x0;
        (((struct o4_uint *)0xC2709A8)->v) = 0x1;
        (((struct o14_uint *)0xC2709A8)->v) = 0x0;
        *(unsigned int *)0xC270A28 = 0x0;
        (((struct o0_uint *)0xC270AB4)->v) = 0x21;
        (((struct o4_ushort *)0xC270AB4)->v) = 0x0;
        R1004 = 0xC177930;
        FUN_0c02d826(0xC177934);
        FUN_0c0293da(0xFFFFFFFF, 0x0);
        FUN_0c0293d4(0x1);
        FUN_0c0293f2(0x0);
        FUN_0c069040(0x21);
    }
    FUN_0c069230((*(int *)0xC270A28), 0x0, 0x0, 0x0);
    if ((*(int *)0xC2AC2F0) != 1) {
        FUN_0c027f28(0x0);
        pfSize(1.20000005f, 1.20000005f);
        FUN_0c02803a(0xFFFFFF00, 0xFFFFFF00, 0xFFFFFF00, 0xFFFFFF00);
        pfTextCenterPut(0x1FE, 0x20, 0xC09CA74);
        FUN_0c027f28(0x2);
        pfSize(1.20000005f, 1.20000005f);
        FUN_0c02803a(0xFFFFFF00, 0xFFFFFF00, 0xFFFFFF00, 0xFFFFFF00);
        FUN_0c028196();
        FUN_0c0281d4(((((struct o0_int *)0xC270AB4)->v)), 0x0);
        FUN_0c0281b6(0xC09D648);
        u329 = (-((FUN_0c02806c((*(int *)0xC09DA20))) * 0.5f));
        FUN_0c027fbe((u329 + 520.0f), 52.0f);
        FUN_0c02842e((*(int *)0xC09DA20));
        FUN_0c02803a(0xFFFFFF00, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
    }
    return FUN_0c022de2(((((struct o0_int *)0xC270AB4)->v)), 0x21, 0x0);
}

int FUN_0c0247a8(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8)
{
    int t0;
    register int t1;
    int t2;
    int t3;
    register int t4;
    register float u0;

    t3 = (((struct o0_int *)0xC2709A8)->v);
    switch (t3) {
    case 0:
        (((struct o0_uint *)0xC2709A8)->v) = (((((struct o0_int *)0xC2709A8)->v)) + 0x1);
        (((struct o8_float *)0xC2709A8)->v) = 0.0f;
        (((struct o4_uint *)0xC2709A8)->v) = 0x0;
        (((struct o14_uint *)0xC2709A8)->v) = 0x0;
        (((struct oC_uint *)0xC2709A8)->v) = 0x0;
        break;
    case 1:
        if (((int)((((struct o4_int *)0xC2709A8)->v)) > (int)0x1) && (t3 == 1)) {
            (((struct o8_float *)0xC2709A8)->v) = (((-((((struct o30_float *)0xC175908)->v))) + -1500.0f) * 0.100000001f);
            if (0.0f > ((((struct o8_float *)0xC2709A8)->v))) {
                (((struct o8_float *)0xC2709A8)->v) = 0.0f;
            }
            (((struct oC_uint *)0xC2709A8)->v) = (int)(((((struct o8_float *)0xC2709A8)->v)) * 100.0f);
        }
        if (((((struct o4_int *)0xC2709A8)->v)) == 0) {
            if (!(((((struct o30_float *)0xC175908)->v)) > -1485.0f)) {
                FUN_0c022794(0x0);
                (((struct o0_uint *)0xC2709A8)->v) = 0x2;
            } else {
                if ((*(int *)0xC175C74) != 4) {
                } else {
                    (((struct o4_uint *)0xC2709A8)->v) = 0x1;
                }
                if ((int)(*(int *)0xC1ECCB4) <= 0) {
                    FUN_0c022794(0x1);
                    (((struct o0_uint *)0xC175908)->v) = 0x0;
                    (((struct o0_uint *)0xC2709A8)->v) = 0x2;
                }
            }
        } else {
            t3 = (((struct o4_int *)0xC2709A8)->v);
            if (t3 == 1) {
                if (!(-1485.0f > ((((struct o30_float *)0xC175908)->v)))) {
                } else {
                    (((struct o4_uint *)0xC2709A8)->v) = 0x2;
                    FUN_0c058f64(0xC1240C8, 0x0, 0x78, 0x0);
                }
                if ((int)(*(int *)0xC1ECCB4) <= 0) {
                    FUN_0c022794(0x1);
                    (((struct o0_uint *)0xC175908)->v) = 0x0;
                    (((struct o0_uint *)0xC2709A8)->v) = 0x2;
                }
            } else {
                t4 = ((~(((~t3) + 0x1) & 0x1)) + 0x1);
                if ((int)t3 >= 0) {
                    t4 = (t3 & 0x1);
                }
                if (t4 == 0) {
                    if (((*(int *)0xC175A58) == -1) && ((t0 = *(int *)0xC175ADC, t0 == -1) && ((t1 = *(int *)0xC175B60, t1 == -1) && (t2 = *(int *)0xC175BE4, t2 == -1)))) {
                    } else {
                        (((struct o4_uint *)0xC2709A8)->v) = (((((struct o4_int *)0xC2709A8)->v)) + 0x1);
                        (((struct o14_uint *)0xC2709A8)->v) = 0x3C;
                    }
                    if ((int)((((struct o4_int *)0xC2709A8)->v)) >= (int)0x7) {
                        (((struct oC_uint *)0xC2709A8)->v) = (int)(((((struct o8_float *)0xC2709A8)->v)) * 100.0f);
                        if (200.0f > ((((struct o8_float *)0xC2709A8)->v))) {
                            FUN_0c022794(0x0);
                            (((struct o0_uint *)0xC2709A8)->v) = 0x2;
                        } else {
                            FUN_0c0228cc();
                            (((struct o0_uint *)0xC2709A8)->v) = 0x3;
                        }
                    } else {
                        if ((int)(*(int *)0xC1ECCB4) <= 0) {
                            FUN_0c022794(0x1);
                            (((struct o0_uint *)0xC175908)->v) = 0x0;
                            (((struct o0_uint *)0xC2709A8)->v) = 0x2;
                        }
                    }
                } else {
                    if ((int)((((struct o14_int *)0xC2709A8)->v)) > 0) {
                        if ((*(int *)0xC175C74) == 4) {
                            t0 = (((struct o4_int *)0xC2709A8)->v);
                            (((struct o4_uint *)0xC2709A8)->v) = (t0 + 0x1);
                            t1 = 0xC1240F8;
                            if ((t0 + 0x1) == 4) {
                                t1 = 0xC1240E0;
                            }
                            FUN_0c058f64(t1, 0x0, 0x78, 0x0);
                        }
                        (((struct o14_uint *)0xC2709A8)->v) = (((((struct o14_int *)0xC2709A8)->v)) - 1);
                        if ((int)((((struct o4_int *)0xC2709A8)->v)) >= (int)0x7) {
                            (((struct oC_uint *)0xC2709A8)->v) = (int)(((((struct o8_float *)0xC2709A8)->v)) * 100.0f);
                            if (200.0f > ((((struct o8_float *)0xC2709A8)->v))) {
                                FUN_0c022794(0x0);
                                (((struct o0_uint *)0xC2709A8)->v) = 0x2;
                            } else {
                                FUN_0c0228cc();
                                (((struct o0_uint *)0xC2709A8)->v) = 0x3;
                            }
                        } else {
                            if ((int)(*(int *)0xC1ECCB4) <= 0) {
                                FUN_0c022794(0x1);
                                (((struct o0_uint *)0xC175908)->v) = 0x0;
                                (((struct o0_uint *)0xC2709A8)->v) = 0x2;
                            }
                        }
                    } else {
                        FUN_0c022794(0x0);
                        (((struct o0_uint *)0xC2709A8)->v) = 0x2;
                    }
                }
            }
        }
        break;
    case 2:
        FUN_0c0227a0(0x0, a5, a6, a7, 0.0f, f5, f6, f7, f8);
        break;
    case 3:
        FUN_0c0228f0(0x0, ((((struct oC_int *)0xC2709A8)->v)), a6, a7);
        break;
    }
    if ((*(int *)0xC2AC2F0) != 1) {
        FUN_0c027f28(0x0);
        pfSize(1.20000005f, 1.20000005f);
        FUN_0c02803a(0xFFFFFF00, 0xFFFFFF00, 0xFFFFFF00, 0xFFFFFF00);
        pfTextCenterPut(0x21C, 0x20, 0xC09CAD4);
        pfTextCenterPut(0x21C, 0x40, 0xC09CAE4);
        FUN_0c027f28(0x2);
        pfSize(1.0f, 1.0f);
        t0 = 0xFFFF0000;
        t1 = 0xFFFF0000;
        t2 = 0xFFFF0000;
        t3 = 0xFFFF0000;
        if (((((struct o8_float *)0xC2709A8)->v)) > 200.0f) {
            t0 = 0xFF00FF00;
            t1 = 0xFF00FF00;
            t2 = 0xFF00FF00;
            t3 = 0xFF00FF00;
        }
        FUN_0c02803a(t0, t1, t2, t3);
        FUN_0c058aa0(0x21C, 0x54, ((((struct oC_int *)0xC2709A8)->v)), 0x1);
    }
    FUN_0c027f28(0x2);
    pfSize(1.0f, 1.0f);
    t0 = (((struct o4_int *)0xC2709A8)->v);
    if (t0 != 2) {
        if ((t0 != 3) && (t0 != 4)) {
            if ((t0 != 5) && ((t0 != 6) && (t0 != 7))) {
                FUN_0c02803a(0xFF00FF00, 0xFF00FF00, 0xFF00FF00, 0xFF00FF00);
                pfTextCenterPut(0x5A, 0x78, 0xC09CAF4);
                FUN_0c02803a(0xFF222222, 0xFF222222, 0xFF222222, 0xFF222222);
                pfTextCenterPut(0x5A, 0x96, 0xC09CAF8);
                t0 = 0xB4;
                t1 = 0xC09CB00;
            } else {
                FUN_0c02803a(0xFF00FF00, 0xFF00FF00, 0xFF00FF00, 0xFF00FF00);
                pfTextCenterPut(0x5A, 0xB4, 0xC09CB00);
                FUN_0c02803a(0xFF222222, 0xFF222222, 0xFF222222, 0xFF222222);
                pfTextCenterPut(0x5A, 0x78, 0xC09CAF4);
                t0 = 0x96;
                t1 = 0xC09CAF8;
            }
            t2 = (pfTextCenterPut(0x5A, t0, t1));
        } else {
            FUN_0c02803a(0xFF00FF00, 0xFF00FF00, 0xFF00FF00, 0xFF00FF00);
            pfTextCenterPut(0x5A, 0x96, 0xC09CAF8);
            FUN_0c02803a(0xFF222222, 0xFF222222, 0xFF222222, 0xFF222222);
            pfTextCenterPut(0x5A, 0x78, 0xC09CAF4);
            pfTextCenterPut(0x5A, 0xB4, 0xC09CB00);
            t2 = (FUN_0c0281b6(0xC09CB08));
        }
        t0 = t2;
    } else {
        FUN_0c02803a(0xFF00FF00, 0xFF00FF00, 0xFF00FF00, 0xFF00FF00);
        pfTextCenterPut(0x5A, 0x78, 0xC09CAF4);
        FUN_0c02803a(0xFF222222, 0xFF222222, 0xFF222222, 0xFF222222);
        pfTextCenterPut(0x5A, 0x96, 0xC09CAF8);
        t0 = (pfTextCenterPut(0x5A, 0xB4, 0xC09CB00));
    }
    t1 = t0;
    if ((int)((((struct o4_int *)0xC2709A8)->v)) > (int)0x1) {
        t0 = 0x7;
        if ((int)((((struct o4_int *)0xC2709A8)->v)) < (int)0x7) {
            FUN_0c028196();
            pfSize((1.0f + 1.0f), (1.0f + 1.0f));
            FUN_0c02803a(0xFFFF0000, 0xFFFF0000, 0xFFFF0000, 0xFFFF0000);
            t2 = (((struct o4_int *)0xC2709A8)->v);
            t3 = ((~(((~t2) + 0x1) & 0x1)) + 0x1);
            if ((int)t2 >= 0) {
                t3 = (t2 & 0x1);
            }
            if (t3 == 1) {
                FUN_0c0281d4(((((struct o14_int *)0xC2709A8)->v)), 0x0);
            }
            u0 = (-((FUN_0c02806c((*(int *)0xC09DA20))) * 0.5f));
            FUN_0c027fbe((u0 + 90.0f), 240.0f);
            FUN_0c02842e((*(int *)0xC09DA20));
            t0 = (FUN_0c02803a(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF));
        }
        t1 = t0;
    }
    return t1;
}

int FUN_0c024c6c(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;

    t0 = (((struct o0_int *)0xC2709A8)->v);
    switch (t0) {
    case 0:
        (((struct o0_uint *)0xC2709A8)->v) = (((((struct o0_int *)0xC2709A8)->v)) + 0x1);
        (((struct oC_uint *)0xC2709A8)->v) = 0x0;
        (((struct o4_uint *)0xC2709A8)->v) = 0x0;
        FUN_0c024f94(500.0f, 25.0f, 200.0f, 1.0f, 0.0f, 0.0f);
        FUN_0c024f94(-100.0f, 45.0f, -400.0f, 1.0f, 0.400000006f, 0.0f);
        FUN_0c024f94(-300.0f, 50.0f, 100.0f, 1.0f, 0.800000012f, 0.0f);
        FUN_0c024f94(150.0f, 40.0f, 200.0f, 0.800000012f, 1.0f, 0.0f);
        FUN_0c024f94(-800.0f, 45.0f, -180.0f, 0.400000006f, 1.0f, 0.0f);
        FUN_0c024f94(-120.0f, 25.0f, 300.0f, 0.0f, 1.0f, 0.0f);
        FUN_0c024f94(200.0f, 40.0f, 600.0f, 0.0f, 1.0f, 0.400000006f);
        FUN_0c024f94(100.0f, 45.0f, 550.0f, 0.0f, 1.0f, 0.800000012f);
        FUN_0c024f94(400.0f, 25.0f, -120.0f, 0.0f, 0.800000012f, 1.0f);
        FUN_0c024f94(425.0f, 25.0f, -145.0f, 0.0f, 0.400000006f, 1.0f);
        FUN_0c024f94(-650.0f, 25.0f, -420.0f, 0.0f, 0.0f, 1.0f);
        FUN_0c024f94(600.0f, 25.0f, -570.0f, 0.400000006f, 0.0f, 1.0f);
        FUN_0c024f94(0.0f, 60.0f, 0.0f, 0.800000012f, 0.0f, 1.0f);
        FUN_0c024f94(-294.0f, 20.0f, 391.0f, 1.0f, 0.0f, 0.800000012f);
        FUN_0c024f94(-294.0f, 60.0f, 391.0f, 1.0f, 0.0f, 0.400000006f);
        break;
    case 1:
        if ((int)((((struct o4_int *)0xC2709A8)->v)) <= 0) {
            FUN_0c0228cc();
            (((struct o0_uint *)0xC2709A8)->v) = 0x3;
        } else {
            if (((((struct o0_int *)0xC1ECCA8)->v)) == 1) {
                (((struct oC_uint *)0xC2709A8)->v) = (((((struct oC_int *)0xC2709A8)->v)) + 0x1);
            }
            if ((int)((((struct oC_int *)0xC1ECCA8)->v)) <= 0) {
                FUN_0c022794(0x1);
                *(unsigned int *)0xC175908 = 0x0;
                (((struct o0_uint *)0xC2709A8)->v) = 0x2;
            }
        }
        break;
    case 2:
        FUN_0c0227a0(0x0, a5, a6, a7, f4, f5, f6, f7, f8);
        break;
    case 3:
        FUN_0c0228f0(0x0, ((((struct oC_int *)0xC2709A8)->v)), a6, a7);
        break;
    }
    t0 = *(int *)0xC2AC2F0;
    t1 = t0;
    if (t0 != 1) {
        FUN_0c027f28(0x0);
        u0 = (((struct o0_float *)0xC025030)->v);
        pfSize(u0, u0);
        FUN_0c02803a(0xFFFFFF00, 0xFFFFFF00, 0xFFFFFF00, 0xFFFFFF00);
        pfTextCenterPut(0x1FE, 0x20, 0xC09CB10);
        FUN_0c027f28(0x2);
        pfSize(1.0f, 1.0f);
        FUN_0c02803a(0xFFFFFF00, 0xFFFFFF00, 0xFFFFFF00, 0xFFFFFF00);
        FUN_0c028196();
        FUN_0c0281d4(((((struct o4_int *)0xC2709A8)->v)), 0x0);
        FUN_0c0281b6(0xC09CB28);
        u0 = (((struct o30_float *)0xC025030)->v);
        u1 = (-((FUN_0c02806c((*(int *)0xC09DA20))) * ((((struct o2C_float *)0xC025030)->v))));
        FUN_0c027fbe((u1 + u0), ((((struct o34_float *)0xC025030)->v)));
        FUN_0c02842e((*(int *)0xC09DA20));
        t1 = (FUN_0c02803a(0xFFFFFF00, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF));
    }
    return t1;
}

int FUN_0c03dd80(void)
{
    int t0;
    int t1;
    register int t2;
    register int t3;

    *(unsigned int *)0xC177EF0 = 0xC177EF4;
    nlInitHeapMemory(0xC177EF4, 0x30000);
    nlInitEvent();
    FUN_0c020772();
    FUN_0c058e82();
    gdc_StopStreamVoiceAll();
    FUN_0c01e6f0();
    FUN_0c058be4(0x0);
    mpvvlc_InitMbai();
    FUN_0c03f42e(0x3);
    *(unsigned int *)0xC1EC840 = 0x11;
    FUN_0c06f550(0xFFFFC500, 0xFFFFC500, 0xFFFFC500);
    FUN_0c0272de();
    (((struct o0_uint *)0xC2A469C)->v) = 0x2;
    (((struct o4_uint *)0xC2A585C)->v) = 0x280;
    (((struct o0_uint *)0xC2A585C)->v) = 0x280;
    (((struct oC_uint *)0xC2A469C)->v) = 0x0;
    (((struct o38_uint *)0xC2A469C)->v) = 0x0;
    if ((((((struct o0_int *)0xC2A46DC)->v)) != 0xC0B384C) && (t0 = (((struct o0_int *)0xC2A46DC)->v), t0 != 0xC0B3824)) {
        t0 = 0xC2A4680;
    } else {
        FUN_0c0339fc(0x0);
    }
    if ((((((struct o24_int *)0xC2A4F88)->v)) != -2) && (t1 = (((struct o3C_int *)0xC2A469C)->v), t1 != 0xC0B3AA4)) {
        (((struct o3C_uint *)0xC2A469C)->v) = 0xC0B3AA4;
        FUN_0c03f15e(0x0);
    } else {
        t1 = t0;
    }
    FUN_0c033b12(0x0, t1);
    FUN_0c033430(0xC2A5808);
    if (((*(int *)0xC2A464C) == 0) && ((t2 = (((struct o0_int *)0xC2A4F88)->v), t2 != 0) || (t3 = (((struct o4_int *)0xC2A4F88)->v), t3 != 0))) {
        gdc_PlayStreamSong(0x0);
        gdc_VolStreamSong(0x7F);
    }
    if (((((struct o0_int *)0xC2A4F88)->v)) == 0) {
        t0 = (((struct o4_int *)0xC2A4F88)->v);
        if ((t0 != 7) && (t0 != 9)) {
        } else {
            FUN_0c01edbc(0x0, 0x20E);
        }
        FUN_0c03386a(0x0);
    }
    if (((((struct o4_int *)0xC2A46DC)->v)) == 0) {
        FUN_0c03eefe(0x1);
    }
    FUN_0c026e56();
    thunk_FUN_0c05995e();
    FUN_0c0476dc(0x4);
    *(float *)0xC177D9C = ((((struct o0_float *)0xC03E010)->v));
    nlMatrixMode(0x3);
    nlUnitMatrix();
    t0 = nlPerspectiveX(((int)(((((*(float *)0xC177D9C) * ((((struct o1C_float *)0xC03E010)->v))) / ((((struct o20_float *)0xC03E010)->v)))) + ((((struct o24_float *)0xC03E010)->v))) & 0xFFFF), ((((struct o18_float *)0xC03E010)->v)), ((((struct o14_float *)0xC03E010)->v)), ((((struct o10_float *)0xC03E010)->v)));
    *(unsigned int *)0xC1EC744 = ((*(int *)0xC1EC744) + 0x1);
    return t0;
}


int FUN_0c038218(void)
{
    register int t0;
    register float u9;
    register float u15;
    register int t35;
    int t38;
    register float u80;
    register int t81;
    register int t82;
    int t23;
    int t47;

    t0 = FUN_0c034320(0x1, 0x14);
    if (t0 == 1) {
        FUN_0c03386a(0x6);
        FUN_0c035a20(0x4);
    }
    if ((((((struct o0_int *)0xC2A46C8)->v)) & 4) != 0) {
        u9 = *(float *)0xC2A5858;
        if (((((struct o2C_int *)0xC2A4F80)->v)) == -2) {
            FUN_0c0345ec(0x224, 0x30, 0x0, 320.0f, 208.0f, u9);
        } else {
            FUN_0c0345ec(0x224, 0x31, 0x0, 320.0f, 208.0f, u9);
        }
        u15 = *(float *)0xC2A5858;
        if ((int)((((struct o0_int *)0xC2A4F80)->v)) >= (int)0x2) {
            FUN_0c0345ec(0x224, 0x1E, 0x0, 320.0f, 252.0f, u15);
        } else {
            FUN_0c0345ec(0x24, 0xE, ((((((((struct o2C_int *)0xC2A4F80)->v)) << 2) << 2) << 1) + 0xC0B6010), 320.0f, 252.0f, u15);
        }
        if ((((((struct o1C_int *)0xC2A46C8)->v)) == 1) && (t23 = (((struct o0_int *)0xC2A4F80)->v), (int)t23 <= (int)0x1)) {
            (((struct o1C_uint *)0xC2A46C8)->v) = 0x2;
            (((struct o0_uint *)0xC2A46C8)->v) = (((((struct o0_int *)0xC2A46C8)->v)) | 0x9);
            if ((int)((((struct o2C_int *)0xC2A4F80)->v)) >= 0) {
                (((struct o28_uint *)0xC2A4F80)->v) = ((((struct o2C_int *)0xC2A4F80)->v));
            }
            t35 = 0x6;
            if (((((struct o0_int *)0xC2A4F80)->v)) == 0) {
                t35 = 0x5;
            }
            FUN_0c0339c0(t35);
        } else {
            t38 = (((struct o0_int *)0xC2A4670)->v);
            if ((0x1 & t38) != 0) {
                (((struct o0_uint *)0xC2A46C8)->v) = (((((struct o0_int *)0xC2A46C8)->v)) | 0x9);
                if ((int)((((struct o0_int *)0xC2A4F80)->v)) >= (int)0x2) {
                    (((struct o2C_uint *)0xC2A4670)->v) = (((((struct o2C_int *)0xC2A4670)->v)) | 0x9);
                }
                FUN_0c0339c0(0xA);
            } else {
                if (((t38 & 0x4) != 0) && (t47 = (((struct o0_int *)0xC2A4F80)->v), (int)t47 >= (int)0x2)) {
                    (((struct o0_uint *)0xC2A46C8)->v) = (((((struct o0_int *)0xC2A46C8)->v)) | 0x9);
                    FUN_0c03386a(0x4);
                    FUN_0c0339c0(0x0);
                }
            }
        }
    }
    u80 = *(float *)0xC038440;
    t81 = FUN_0c0343b8(0x1, 0x14);
    t82 = 0x1;
    if (t81 == 0) {
        t82 = 0x0;
    }
    return FUN_0c035a5e(0x4, t82, 320.0f, u80);
}

int FUN_0c0242fe(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8)
{
    register int t1;
    register int t2;

    t2 = (((struct o0_int *)0xC2709A8)->v);
    if (t2 != 0) {
        if (t2 != 1) {
            if (t2 == 2) {
                return FUN_0c0227a0(0x0, a5, a6, a7, f4, f5, f6, f7, f8);
            }
            if (t2 == 3) {
                return FUN_0c0228f0(0x0, ((((struct oC_int *)0xC2709A8)->v)), a6, a7);
            }
            return t2;
        }
        if ((*(float *)0xC0244C4) > ((((struct o30_float *)0xC175908)->v))) {
            t2 = FUN_0c0228cc();
            (((struct o0_uint *)0xC2709A8)->v) = 0x3;
            t1 = t2;
        } else {
            t2 = (((struct o0_int *)0xC1ECCA8)->v);
            if (t2 == 1) {
                (((struct oC_uint *)0xC2709A8)->v) = (((((struct oC_int *)0xC2709A8)->v)) + 0x1);
            }
            if ((int)((((struct oC_int *)0xC1ECCA8)->v)) <= 0) {
                FUN_0c022794(0x1);
                (((struct o0_uint *)0xC175908)->v) = 0x0;
                (((struct o0_uint *)0xC2709A8)->v) = 0x2;
                t2 = 0x54;
            }
            t1 = t2;
        }
        return t1;
    }
    (((struct o0_uint *)0xC2709A8)->v) = (((((struct o0_int *)0xC2709A8)->v)) + 0x1);
    (((struct oC_uint *)0xC2709A8)->v) = 0x0;
    FUN_0c02447c(0.0f, 0.0f, -4400.0f);
    FUN_0c02447c(0.0f, 0.0f, -5650.0f);
    FUN_0c02447c(0.0f, 0.0f, -6900.0f);
    FUN_0c02447c(0.0f, 0.0f, -8150.0f);
    FUN_0c02447c(0.0f, 0.0f, -9400.0f);
    FUN_0c02447c(0.0f, 0.0f, -10650.0f);
    FUN_0c02447c(0.0f, 0.0f, -11900.0f);
    FUN_0c02447c(0.0f, 0.0f, -13150.0f);
    FUN_0c02447c(0.0f, 0.0f, -14400.0f);
    FUN_0c02447c(0.0f, 0.0f, -15650.0f);
    return FUN_0c02447c(0.0f, 0.0f, -16900.0f);
}
