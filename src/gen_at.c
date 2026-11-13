/* Straight-line functions with calls and guards (batch gen_at): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o19_uchar { char p[0x19]; unsigned char v; };
struct o1A_uchar { char p[0x1A]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uchar { char p[0x1C]; unsigned char v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o1D_uchar { char p[0x1D]; unsigned char v; };
struct o1E_uchar { char p[0x1E]; unsigned char v; };
struct o1F_uchar { char p[0x1F]; unsigned char v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uchar { char p[0x20]; unsigned char v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o21_uchar { char p[0x21]; unsigned char v; };
struct o22_uchar { char p[0x22]; unsigned char v; };
struct o23_uchar { char p[0x23]; unsigned char v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uchar { char p[0x24]; unsigned char v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o25_uchar { char p[0x25]; unsigned char v; };
struct o26_uchar { char p[0x26]; unsigned char v; };
struct o27_uchar { char p[0x27]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o28_int { char p[0x28]; int v; };
struct o28_uchar { char p[0x28]; unsigned char v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o29_uchar { char p[0x29]; unsigned char v; };
struct o2A_uchar { char p[0x2A]; unsigned char v; };
struct o2B_uchar { char p[0x2B]; unsigned char v; };
struct o2C_int { char p[0x2C]; int v; };
struct o2C_uchar { char p[0x2C]; unsigned char v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o2D_uchar { char p[0x2D]; unsigned char v; };
struct o2E_uchar { char p[0x2E]; unsigned char v; };
struct o2F_uchar { char p[0x2F]; unsigned char v; };
struct o30_int { char p[0x30]; int v; };
struct o30_uchar { char p[0x30]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c018b1c(int);
int FUN_0c018b22(int, int);
int FUN_0c018c18(int);
int FUN_0c018c2a(float, float);
int FUN_0c018c8a(float, float);
int FUN_0c018c96(int, int, int, int);
int FUN_0c018cd6(int, int, int);
int FUN_0c018ce0(float, float);
int FUN_0c018cec(float);
float FUN_0c018cfc(void);
int FUN_0c026ce6(void);
int FUN_0c0295c0(int, int, float, float);
int FUN_0c029b12(int, float);
int FUN_0c02be68(int, float);
int FUN_0c02f698(void);
int FUN_0c0323d0(int, int, int, int);
int FUN_0c03256c(int, int, int, int);
int FUN_0c03332c(int, int, int, int);
int FUN_0c03346e(int, int, int, int);
int FUN_0c033578(int, int, float, float, float);
int FUN_0c03378c(int, int, int, int, float);
int FUN_0c03386a(int);
int FUN_0c0339c0(int);
int FUN_0c0339fc(int);
int FUN_0c034320(int, int);
int FUN_0c0343b8(int, int, int);
int FUN_0c0345ec(int, int, int, float, float, float);
int FUN_0c035a20(int);
int FUN_0c035a5e(int, int, float, float);
int FUN_0c039d7e(int, int);
int FUN_0c03e358(int, int);
int FUN_0c03e4d0(int);
int FUN_0c0476dc(int, int);
int FUN_0c0584da(void);
int FUN_0c0584e2(void);
int FUN_0c0585ca(int, int);
int FUN_0c058688(int);
float FUN_0c0709f0(float);
int FUN_0c070e60(void);
float FUN_0c070e80(void);
int FUN_0c072230(int, int);
int FUN_0c072290(int, int);
int FUN_0c073360(void);
int FUN_0c073a60(int);
int FUN_0c073c40(int, int, float);
int FUN_0c076230(float, float, float);
int FUN_0c078890(float);
int FUN_0c07c8be(int);
int FUN_0c07ff00(void);
int FUN_0c07ffbc(int, int, int);
int GetAng4Mat(int);
int MultiRot4Vec(int);
int buGetFileInfo(int, int, int);
int buIsExistFile(int, int);
int buIsReady(int);
int camSetTarget(int, int);
int nlAddVector(int, int);
float nlFloor(float);
int nlPopMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int pdGetPeripheral(int);
int FUN_0c03a004(int a4, int a5, int a6);
int FUN_0c037790(int a4);
int FUN_0c018df2(void);
int FUN_0c01a1a0(int a4, int a5);

int FUN_0c03a004(int a4, int a5, int a6)
{
    int stk[13];
    register int t16;
    register int t4;
    register int t5;
    int t6;
    register int t7;
    int t22;
    register int t23;
    register int t24;
    register int t25;
    int t192;
    register int t229;
    register int t230;
    register float u233;
    register float u236;
    register float u238;
    register int t243;
    register int t244;
    register int t249;
    register int t251;
    register int t260;
    register int t263;
    register int t264;
    register float u276;
    register int t288;
    register int t292;
    register int t309;
    register int t313;
    register float u314;
    register float u315;
    register float u316;
    register float u317;
    register int t319;
    register float u321;
    register float u322;
    register float u323;
    register float u324;
    register float u325;
    register float u326;
    register float u334;
    register float u335;
    register float u332;
    register int t347;
    register int t351;
    register float u367;
    register int t381;
    register int t403;
    register int t404;
    register int t411;
    register int t420;
    register int t433;
    register int t496;
    register int t497;
    register float u500;
    register float u503;
    register float u505;
    register int t510;
    register int t511;
    register int t514;
    register int t517;
    register int t519;
    register int t528;
    int t531;
    register int t532;
    register int t533;
    register float u545;
    register int t557;
    register int t561;
    register int t578;
    register int t582;
    register float u583;
    register float u584;
    register float u585;
    register float u586;
    register int t588;
    register float u590;
    register float u591;
    register float u592;
    register float u593;
    register float u594;
    register float u595;
    register float u603;
    register float u604;
    register float u601;
    register int t616;
    register int t620;
    register float u636;
    register int t650;
    register int t672;
    register int t673;
    register int t680;
    register int t689;
    register int t702;
    register int t11;
    register int t13;
    int t152;
    int t261;
    int t262;
    register int t440;
    register int t442;
    register int t443;
    register int t356;
    register int t279;
    register int t281;
    register int t282;
    register int t287;
    register int t297;
    register int t299;
    register int t337;
    register int t340;
    register float u343;
    register float u344;
    register int t423;
    register int t425;
    register int t394;
    register int t397;
    register int t398;
    register int t522;
    int t529;
    int t530;
    register int t709;
    register int t711;
    register int t712;
    register int t625;
    register int t548;
    register int t550;
    register int t551;
    register int t556;
    register int t566;
    register int t568;
    register int t606;
    register int t609;
    register float u612;
    register float u613;
    register int t692;
    register int t694;
    register int t663;
    register int t666;
    register int t667;

    t4 = (((struct o0_int *)0xC2A46E8)->v);
    if (t4 == 1) {
        (((struct o4_uint *)0xC2A46E8)->v) = 0x0;
        t5 = 0x0;
    }
    t6 = (((struct o4_int *)0xC2A46E8)->v);
    t16 = t4;
    if (t6 == 0) {
        t7 = 0x0;
        for (;;) {
            if ((int)t7 > (int)0x7) {
                break;
            }
            t5 = 0xC2A4FB0;
            t6 = (*(int *)((t5 + 0x0)));
            if ((((int)0x1 << (int)t7) & t6) != 0) {
                t4 = (FUN_0c039d7e(t7, (*(int *)0xC2A4FCC)));
            } else {
                t11 = t5;
                t13 = t6;
            }
            t5 = t11;
            t7 = (t7 + 0x1);
            t6 = t13;
        }
        (((struct o4_uint *)0xC2A46E8)->v) = 0x1;
        t16 = t4;
    }
    *(unsigned int *)(((int)stk + 8)) = (~((((struct o30_int *)0xC2A4F80)->v)));
    t22 = t16;
    t23 = a4;
    t24 = 0x0;
    t25 = a6;
    for (;;) {
        if ((((int)0x1 << (int)t24) & ((((struct o30_int *)0xC2A4F80)->v))) != 0) {
            t23 = 0x7C;
            t22 = ((((struct o0_int *)0xC2A4F80)->v));
            t23 = (t24 * t23);
            t23 = (t23 + 0xC2A46F0);
            if ((t22 != 0) && (t22 != 2)) {
                if ((t22 != 1) && (t22 != 3)) {
                    if ((t22 != 4) && (t22 != 6)) {
                        if (t22 != 5) {
                        } else {
                            t22 = (*(int *)((t23 + 0x8)));
                            t25 = 0xC2A4FB4;
                            t22 = (t22 + (*(int *)((t23 + 0x14))));
                            if ((int)t22 < (int)(*(int *)((t25 + 0x0)))) {
                                *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) | ((int)0x1 << (int)t24));
                            }
                        }
                    } else {
                        if ((int)(*(int *)((t23 + 0x10))) <= 0) {
                            *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) | ((int)0x1 << (int)t24));
                        }
                    }
                } else {
                    if (((*(int *)((t23 + 0x4))) == 0) && (t152 = *(int *)((t23 + 0x8)), t22 = t152, (int)t22 < (int)0x14)) {
                        *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) | ((int)0x1 << (int)t24));
                    }
                }
            } else {
                if ((*(int *)((t23 + 0x4))) == 0) {
                    t22 = ((((struct o2C_int *)0xC2A4F80)->v));
                    if (t22 == -2) {
                        t22 = 0x14;
                        if ((int)(*(int *)((t23 + 0x8))) < (int)t22) {
                            *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) | ((int)0x1 << (int)t24));
                        }
                    } else {
                        *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) | ((int)0x1 << (int)t24));
                    }
                }
            }
        }
        t24 = (t24 + 0x1);
        if ((int)t24 > (int)0x7) {
            break;
        }
    }
    if ((unsigned char)(*(int *)(((int)stk + 8))) != 0xFF) {
        if ((int)((((struct o28_int *)0xC2A4F80)->v)) < 0) {
            (((struct o28_uint *)0xC2A4F80)->v) = 0x0;
            if ((int)((((struct o2C_int *)0xC2A4F80)->v)) < 0) {
                t192 = 0x0;
                for (;;) {
                    if ((*(int *)((((t192 * 0x7C) + 0xC2A46F0) + 0x4))) == 1) {
                        break;
                    }
                    t192 = (t192 + 0x1);
                    if ((int)t192 > (int)0x7) {
                        FUN_0c076230(1.0f, 1.0f, 1.0f);
                        t192 = 0xC0B7A7C;
                        FUN_0c03346e(t192, 0xC2A5808, (int)((float)((((struct o4_int *)0xC2A5858)->v)) + 45.0f), 0x38);
                        t192 = 0xC0B7A7C;
                        FUN_0c03346e(t192, 0xC2A5808, (int)(45.0f - (float)((((struct o4_int *)0xC2A5858)->v))), 0x88);
                        t192 = 0xC0B7A7C;
                        FUN_0c03346e(t192, 0xC2A5808, (int)((float)((((struct o4_int *)0xC2A5858)->v)) + 45.0f), 0xD8);
                        t192 = 0xC0B7A7C;
                        FUN_0c03346e(t192, 0xC2A5808, (int)(45.0f - (float)((((struct o4_int *)0xC2A5858)->v))), 0x128);
                        FUN_0c026ce6();
                        t192 = 0x220;
                        FUN_0c033578(t192, 0xC0C0474, (float)(((((struct o4_int *)0xC2A5858)->v)) + 0xD2), 30.0f, 1.0f);
                        t192 = 0x220;
                        FUN_0c033578(t192, 0xC0C047C, (float)(((((struct o4_int *)0xC2A5858)->v)) + 0x140), 30.0f, 1.0f);
                        t192 = 0x220;
                        FUN_0c033578(t192, 0xC0C0484, (float)(((((struct o4_int *)0xC2A5858)->v)) + 0x1AE), 30.0f, 1.0f);
                        t192 = 0x220;
                        FUN_0c033578(t192, 0xC0C048C, (float)(((((struct o4_int *)0xC2A5858)->v)) + 0x21C), 30.0f, 1.0f);
                        t192 = 0x220;
                        FUN_0c033578(t192, 0xC0C0494, (float)(0x60 - ((((struct o4_int *)0xC2A5858)->v))), 88.0f, 1.0f);
                        t192 = 0x220;
                        FUN_0c033578(t192, 0xC0C04A0, (float)(((((struct o4_int *)0xC2A5858)->v)) + 0x60), 168.0f, 1.0f);
                        t192 = 0x220;
                        FUN_0c033578(t192, 0xC0C04AC, (float)(0x60 - ((((struct o4_int *)0xC2A5858)->v))), 248.0f, 1.0f);
                        FUN_0c078890((1.0f + 1.0f));
                        *(float *)(((int)stk + 40)) = ((float)((((struct o4_int *)0xC2A5858)->v)) + 45.0f);
                        *(float *)(((int)stk + 44)) = 20.0f;
                        *(float *)(((int)stk + 28)) = ((float)((((struct o4_int *)0xC2A5858)->v)) + 155.0f);
                        *(float *)(((int)stk + 32)) = 56.0f;
                        t192 = ((int)stk + 0);
                        t192 = (t192 + 0x28);
                        t229 = (FUN_0c03378c(t192, (((int)stk + 0) + 0x1C), ((int)(((((*(float *)0xC177D9C) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF), 0xFFFFFFFF, ((((struct o0_float *)0xC2A5858)->v))));
                        t230 = 0x0;
                        for (;;) {
                            if ((int)t230 >= (int)0x4) {
                                break;
                            }
                            t229 = 0x28;
                            *(float *)((((int)stk + 0) + t229)) = (((((float)t230 * 110.0f)) + (float)((((struct o4_int *)0xC2A5858)->v))) + 155.0f);
                            t229 = 0xC03A4A0;
                            u233 = *(float *)((t229 + 0x0));
                            t229 = 0x2C;
                            *(float *)((((int)stk + 0) + t229)) = u233;
                            t229 = 0x1C;
                            *(float *)((((int)stk + 0) + t229)) = (((float)((((struct o4_int *)0xC2A5858)->v)) + (((float)t230 * 110.0f))) + 155.0f);
                            t229 = 0xC03A4A4;
                            u236 = *(float *)((t229 + 0x0));
                            t229 = 0x20;
                            *(float *)((((int)stk + 0) + t229)) = u236;
                            t229 = 0xC03A48C;
                            u238 = *(float *)((t229 + 0x0));
                            t229 = 0xC03A494;
                            t192 = ((int)stk + 0);
                            t192 = (t192 + 0x28);
                            t229 = (FUN_0c03378c(t192, (((int)stk + 0) + 0x1C), ((int)(((((*(float *)0xC177D9C) * u238) / (*(float *)((t229 + 0x0))))) + 0.5f) & 0xFFFF), 0xFFFFFFFF, ((((struct o0_float *)0xC2A5858)->v))));
                            t230 = (t230 + 0x1);
                        }
                        t192 = 0xC12B9B4;
                        *(unsigned int *)(((int)stk + 4)) = (t192 + 0x4);
                        *(unsigned int *)(((int)stk + 0)) = t192;
                        t243 = t229;
                        t244 = 0x0;
                        for (;;) {
                            if ((int)t244 > (int)0x17) {
                                break;
                            }
                            t192 = t244;
                            t243 = (FUN_0c03e4d0(t192));
                            if (t243 == 1) {
                                t192 = t244;
                                t243 = (pdGetPeripheral(t192));
                                t192 = t243;
                                t243 = 0x6;
                                t243 = ((int)((int)t244 / (int)t243));
                                t249 = (t243 * 0x6E);
                                t243 = (*(int *)((t192 + 0x24)));
                                t243 = (*(signed char *)((t243 + 0x0)));
                                t251 = (((struct o8_int *)0xC2A5858)->v);
                                if (t243 == 82) {
                                    t192 = (*(int *)(((int)stk + 4)));
                                } else {
                                    t192 = (*(int *)(((int)stk + 0)));
                                }
                                t192 = (*(int *)((t192 + 0x0)));
                                t243 = (FUN_0c03346e(t192, 0xC2A5808, ((t249 - t251) + 0xD2), 0x60));
                            }
                            t244 = (t244 + 0x6);
                        }
                        t260 = t243;
                        t263 = 0x17;
                        t264 = 0x0;
                        for (;;) {
                            if ((int)t264 <= (int)0x7) {
                                t261 = 0xC2A4FB0;
                                t262 = (*(int *)((t261 + 0x0)));
                                if ((((int)0x1 << (int)t264) & t262) == 0) {
                                    t440 = t261;
                                    t442 = t262;
                                    t443 = t192;
                                } else {
                                    t263 = 0x7C;
                                    t262 = t264;
                                    t263 = (t264 * t263);
                                    t263 = (t263 + 0xC2A46F0);
                                    if ((t262 & 0x1) != 0) {
                                        t260 = 0xC2A5860;
                                        t262 = (*(int *)((t260 + 0x0)));
                                        t262 = (-t262);
                                    } else {
                                        t260 = 0xC2A5860;
                                        t262 = (*(int *)((t260 + 0x0)));
                                    }
                                    t260 = 0xC03A5F4;
                                    *(unsigned int *)(((int)stk + 4)) = t262;
                                    (((struct o0_float *)0xC2A5858)->v) = (((((struct o0_float *)0xC2A5858)->v)) + (*(float *)((t260 + 0x0))));
                                    t262 = ((((struct o28_int *)0xC2A4F80)->v));
                                    if (t264 == t262) {
                                        t260 = (*(int *)((t263 + 0xC)));
                                        if (t260 == 1) {
                                            t260 = 0xC03A5FC;
                                            t262 = 0xC076230;
                                            u276 = *(float *)((t260 + 0x0));
                                            t260 = 0xC03A600;
                                            t260 = (FUN_0c076230(1.0f, (*(float *)((t260 + 0x0))), u276));
                                        } else {
                                            t279 = t261;
                                            t281 = t262;
                                            t282 = t192;
                                        }
                                        t261 = t279;
                                        t262 = t281;
                                        t192 = t282;
                                        t192 = 0x18;
                                        if ((((*(int *)0xC1EC83C) & t192) == 0) && (t261 = 0xC2A46E0, t287 = *(int *)((t261 + 0x0)), t260 = t287, t260 != 1)) {
                                            t297 = t261;
                                            t299 = t262;
                                        } else {
                                            t262 = (t264 & 0x1);
                                            t288 = (((t264 & 0x1) << 2) + t262);
                                            t262 = 0x0;
                                            t261 = (*(int *)(((int)stk + 4)));
                                            t192 = (*(int *)((t263 + 0x0)));
                                            t292 = (int)((unsigned int)((int)((unsigned int)t264 + (unsigned int)t262)) + ((((int)t262 > (int)t264)) ? 1u : 0u));
                                            t260 = 0xC12B9AC;
                                            t262 = 0xC03346E;
                                            t192 = (t192 << 2);
                                            t192 = (*(int *)((t192 + t260)));
                                            t260 = (FUN_0c03346e(t192, 0xC2A5808, ((((t292 >> 1) * 0x6E) + t261) + 0xD2), (((t288 << 2) << 2) + 0xB0)));
                                        }
                                        t261 = t297;
                                        t262 = t299;
                                        t192 = 0x230;
                                        t356 = t261;
                                    } else {
                                        t262 = (*(int *)(((int)stk + 8)));
                                        t261 = 0x1;
                                        t261 = ((int)t261 << (int)t264);
                                        if ((t261 & t262) != 0) {
                                            t261 = 0xC078890;
                                            t260 = (FUN_0c078890((1.0f + 1.0f)));
                                            t262 = 0x0;
                                            t309 = (int)((unsigned int)((int)((unsigned int)t264 + (unsigned int)t262)) + ((((int)t262 > (int)t264)) ? 1u : 0u));
                                            t262 = ((((struct o4_int *)0xC2A5858)->v));
                                            t192 = t264;
                                            t192 = (t192 & 0x1);
                                            t260 = 0x28;
                                            t313 = t262;
                                            t262 = t192;
                                            t262 = (t262 + 0x1);
                                            u314 = (float)t313;
                                            u314 = u314 + 110.0f * (float)(t309 >> 1);
                                            *(float *)((((int)stk + 0) + t260)) = (u314 + 155.0f);
                                            t260 = 0xC03A620;
                                            u315 = *(float *)((t260 + 0x0));
                                            t260 = 0xC03A624;
                                            u316 = *(float *)((t260 + 0x0));
                                            t260 = 0x2C;
                                            u317 = u316;
                                            u317 = u317 + u315 * (float)t262;
                                            *(float *)((((int)stk + 0) + t260)) = u317;
                                            t262 = ((((struct o4_int *)0xC2A5858)->v));
                                            t192 = (t192 + 0x2);
                                            t260 = 0x1C;
                                            t319 = t262;
                                            t262 = 0xC177D9C;
                                            u321 = (float)t319;
                                            u321 = u321 + 110.0f * ((float)((t309 >> 1) + 0x1));
                                            *(float *)((((int)stk + 0) + t260)) = (u321 + 155.0f);
                                            t260 = 0xC03A624;
                                            u322 = *(float *)((t260 + 0x0));
                                            t260 = 0x20;
                                            u323 = u322;
                                            u323 = u323 + u315 * (float)t192;
                                            *(float *)((((int)stk + 0) + t260)) = u323;
                                            t260 = 0xC03A628;
                                            u324 = *(float *)((t262 + 0x0));
                                            u325 = *(float *)((t260 + 0x0));
                                            t260 = 0xC03A630;
                                            u326 = *(float *)((t260 + 0x0));
                                            t260 = 0xC03A638;
                                            t262 = 0xFFFF;
                                            t192 = ((int)stk + 0);
                                            t192 = (t192 + 0x28);
                                            t260 = (FUN_0c03378c(t192, (((int)stk + 0) + 0x1C), ((int)((((u324 * u325) / u326)) + 0.5f) & t262), 0xFFFFFFFF, (((((struct o0_float *)0xC2A5858)->v)) + (*(float *)((t260 + 0x0))))));
                                            u343 = 0.5f;
                                            u344 = 0.5f;
                                        } else {
                                            t260 = (*(int *)((t263 + 0xC)));
                                            u334 = 0.5f;
                                            u335 = 0.5f;
                                            if (t260 == 1) {
                                                t260 = 0xC03A718;
                                                u332 = *(float *)((t260 + 0x0));
                                                t260 = 0xC03A71C;
                                                u334 = (*(float *)((t260 + 0x0)));
                                                u335 = u332;
                                            }
                                            t337 = t261;
                                            t340 = t192;
                                            u343 = u334;
                                            u344 = u335;
                                        }
                                        t261 = t337;
                                        t262 = 0xC076230;
                                        t192 = t340;
                                        t260 = (FUN_0c076230(0.5f, u343, u344));
                                        t262 = (t264 & 0x1);
                                        t347 = (((t264 & 0x1) << 2) + t262);
                                        t262 = 0x0;
                                        t261 = (*(int *)(((int)stk + 4)));
                                        t192 = (*(int *)((t263 + 0x0)));
                                        t351 = (int)((unsigned int)((int)((unsigned int)t264 + (unsigned int)t262)) + ((((int)t262 > (int)t264)) ? 1u : 0u));
                                        t260 = 0xC12B9AC;
                                        t262 = 0xC03346E;
                                        t192 = (t192 << 2);
                                        t192 = (*(int *)((t192 + t260)));
                                        t260 = (FUN_0c03346e(t192, 0xC2A5808, ((((t351 >> 1) * 0x6E) + t261) + 0xD2), (((t347 << 2) << 2) + 0xB0)));
                                        t192 = 0x250;
                                    }
                                    t261 = t356;
                                    t262 = 0xC026CE6;
                                    *(unsigned int *)(((int)stk + 0)) = t192;
                                    t260 = (FUN_0c026ce6());
                                    t262 = t264;
                                    t260 = 0xC03A734;
                                    t262 = ((int)((unsigned int)((int)((unsigned int)t262 + (unsigned int)0x0)) + ((((int)0x0 > (int)t262)) ? 1u : 0u)));
                                    u367 = *(float *)((t260 + 0x0));
                                    t262 = (t262 >> 1);
                                    t192 = 0x3;
                                    t260 = 0xC;
                                    t262 = (t262 * 0x6E);
                                    (((struct o0_float *)0xC2A5858)->v) = (((((struct o0_float *)0xC2A5858)->v)) - u367);
                                    t261 = (*(int *)(((int)stk + 4)));
                                    t262 = (t262 + t261);
                                    t262 = (t262 + 0xD2);
                                    *(float *)((((int)stk + 0) + t260)) = (float)t262;
                                    t262 = ((((struct o0_int *)0xC2A4F80)->v));
                                    if ((int)t262 <= (int)t192) {
                                        t262 = (*(int *)((t263 + 0x4)));
                                        if (t262 != 0) {
                                            t423 = t261;
                                            t425 = t262;
                                        } else {
                                            t262 = t264;
                                            t262 = (t262 & 0x1);
                                            t261 = t262;
                                            t262 = (t262 << 2);
                                            t262 = (t262 + t261);
                                            t260 = 0x8B;
                                            t262 = (t262 << 2);
                                            t262 = (t262 << 2);
                                            t262 = (t262 + t260);
                                            t260 = 0xC;
                                            t381 = t262;
                                            t262 = 0xC033578;
                                            t192 = (*(int *)(((int)stk + 0)));
                                            t260 = (FUN_0c033578(t192, 0xC0C04B8, (*(float *)((((int)stk + 0) + t260))), (float)t381, 1.0f));
                                        }
                                    } else {
                                        t262 = (*(int *)((t263 + 0x10)));
                                        if ((int)t262 > 0) {
                                            t192 = 0xC2A5868;
                                            t262 = 0xC03332C;
                                            t260 = (FUN_0c03332c(t192, 0x3, 0x0, (*(int *)((t263 + 0x10)))));
                                            t398 = t260;
                                        } else {
                                            t192 = 0xC0C04C8;
                                            t394 = t261;
                                            t397 = t192;
                                            t398 = t192;
                                        }
                                        t261 = t394;
                                        t262 = t264;
                                        t192 = t397;
                                        t262 = (t262 & 0x1);
                                        t403 = t262;
                                        t262 = (t262 << 2);
                                        t262 = (t262 + t403);
                                        t262 = (t262 << 2);
                                        t262 = (t262 << 2);
                                        *(unsigned int *)(((int)stk + 24)) = t262;
                                        t262 = (t262 + 0x8B);
                                        t404 = t262;
                                        t262 = t264;
                                        t261 = 0x0;
                                        t260 = 0x14;
                                        t262 = ((int)((unsigned int)((int)((unsigned int)t262 + (unsigned int)t261)) + ((((int)t261 > (int)t262)) ? 1u : 0u)));
                                        t262 = (t262 >> 1);
                                        t261 = 0xAF;
                                        *(float *)((((int)stk + 0) + t260)) = (float)t404;
                                        t262 = (t262 * 0x6E);
                                        t260 = (*(int *)(((int)stk + 4)));
                                        t262 = (t262 + t260);
                                        *(unsigned int *)(((int)stk + 16)) = t262;
                                        t262 = (t262 + t261);
                                        t411 = t262;
                                        t262 = 0xC033578;
                                        t192 = (*(int *)(((int)stk + 0)));
                                        t260 = (FUN_0c033578(t192, t398, (float)t411, (float)t404, 1.0f));
                                        t262 = 0xDC;
                                        t260 = 0x14;
                                        t192 = (*(int *)(((int)stk + 0)));
                                        t260 = (FUN_0c033578(t192, 0xC0C04CC, (float)((*(int *)(((int)stk + 16))) + t262), (*(float *)((((int)stk + 0) + t260))), 1.0f));
                                        t262 = 0x9A;
                                        t261 = (*(int *)(((int)stk + 16)));
                                        t261 = (t261 + 0xEB);
                                        t420 = t261;
                                        t261 = 0xC033578;
                                        t192 = (*(int *)(((int)stk + 0)));
                                        t260 = (FUN_0c033578(t192, 0xC0C04D4, (float)t420, (float)((*(int *)(((int)stk + 24))) + t262), 1.0f));
                                    }
                                    t261 = t423;
                                    t262 = t425;
                                    t192 = 0xC2A5868;
                                    t262 = 0xC03332C;
                                    t260 = (FUN_0c03332c(t192, 0x3, 0x0, (*(int *)((t263 + 0x8)))));
                                    t263 = t264;
                                    t263 = (t263 & 0x1);
                                    t262 = t263;
                                    t263 = (t263 << 2);
                                    t263 = (t263 + t262);
                                    t263 = (t263 << 2);
                                    t263 = (t263 << 2);
                                    t262 = 0xC033578;
                                    t433 = t260;
                                    t260 = 0xC;
                                    t192 = (*(int *)(((int)stk + 0)));
                                    t260 = (FUN_0c033578(t192, t433, (*(float *)((((int)stk + 0) + t260))), (float)(0xBA + t263), 1.0f));
                                    t260 = 0xC;
                                    t263 = (t263 + 0xC9);
                                    t192 = (*(int *)(((int)stk + 0)));
                                    t260 = (FUN_0c033578(t192, 0xC0C04DC, (*(float *)((((int)stk + 0) + t260))), (float)t263, 1.0f));
                                }
                                t261 = t440;
                                t264 = (t264 + 0x1);
                                t262 = t442;
                                t192 = t443;
                                continue;
                            }
                            break;
                        }
                        return (*(int *)(((int)stk + 8)));
                    }
                }
                (((struct o28_uint *)0xC2A4F80)->v) = t192;
            }
        }
    } else {
        (((struct o28_uint *)0xC2A4F80)->v) = 0xFFFFFFFF;
    }
    FUN_0c076230(1.0f, 1.0f, 1.0f);
    FUN_0c03346e(0xC0B7A7C, 0xC2A5808, (int)((float)((((struct o4_int *)0xC2A5858)->v)) + 45.0f), 0x38);
    FUN_0c03346e(0xC0B7A7C, 0xC2A5808, (int)(45.0f - (float)((((struct o4_int *)0xC2A5858)->v))), 0x88);
    FUN_0c03346e(0xC0B7A7C, 0xC2A5808, (int)((float)((((struct o4_int *)0xC2A5858)->v)) + 45.0f), 0xD8);
    FUN_0c03346e(0xC0B7A7C, 0xC2A5808, (int)(45.0f - (float)((((struct o4_int *)0xC2A5858)->v))), 0x128);
    FUN_0c026ce6();
    FUN_0c033578(0x220, 0xC0C0474, (float)(((((struct o4_int *)0xC2A5858)->v)) + 0xD2), 30.0f, 1.0f);
    FUN_0c033578(0x220, 0xC0C047C, (float)(((((struct o4_int *)0xC2A5858)->v)) + 0x140), 30.0f, 1.0f);
    FUN_0c033578(0x220, 0xC0C0484, (float)(((((struct o4_int *)0xC2A5858)->v)) + 0x1AE), 30.0f, 1.0f);
    FUN_0c033578(0x220, 0xC0C048C, (float)(((((struct o4_int *)0xC2A5858)->v)) + 0x21C), 30.0f, 1.0f);
    FUN_0c033578(0x220, 0xC0C0494, (float)(0x60 - ((((struct o4_int *)0xC2A5858)->v))), 88.0f, 1.0f);
    FUN_0c033578(0x220, 0xC0C04A0, (float)(((((struct o4_int *)0xC2A5858)->v)) + 0x60), 168.0f, 1.0f);
    FUN_0c033578(0x220, 0xC0C04AC, (float)(0x60 - ((((struct o4_int *)0xC2A5858)->v))), 248.0f, 1.0f);
    FUN_0c078890((1.0f + 1.0f));
    *(float *)(((int)stk + 40)) = ((float)((((struct o4_int *)0xC2A5858)->v)) + 45.0f);
    *(float *)(((int)stk + 44)) = 20.0f;
    *(float *)(((int)stk + 28)) = ((float)((((struct o4_int *)0xC2A5858)->v)) + 155.0f);
    *(float *)(((int)stk + 32)) = 56.0f;
    t496 = (FUN_0c03378c((((int)stk + 0) + 0x28), (((int)stk + 0) + 0x1C), ((int)(((((*(float *)0xC177D9C) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF), 0xFFFFFFFF, ((((struct o0_float *)0xC2A5858)->v))));
    t497 = 0x0;
    for (;;) {
        if ((int)t497 >= (int)0x4) {
            break;
        }
        t496 = 0x28;
        *(float *)((((int)stk + 0) + t496)) = (((((float)t497 * 110.0f)) + (float)((((struct o4_int *)0xC2A5858)->v))) + 155.0f);
        t496 = 0xC03A4A0;
        u500 = *(float *)((t496 + 0x0));
        t496 = 0x2C;
        *(float *)((((int)stk + 0) + t496)) = u500;
        t496 = 0x1C;
        *(float *)((((int)stk + 0) + t496)) = (((float)((((struct o4_int *)0xC2A5858)->v)) + (((float)t497 * 110.0f))) + 155.0f);
        t496 = 0xC03A4A4;
        u503 = *(float *)((t496 + 0x0));
        t496 = 0x20;
        *(float *)((((int)stk + 0) + t496)) = u503;
        t496 = 0xC03A48C;
        u505 = *(float *)((t496 + 0x0));
        t496 = 0xC03A494;
        t496 = (FUN_0c03378c((((int)stk + 0) + 0x28), (((int)stk + 0) + 0x1C), ((int)(((((*(float *)0xC177D9C) * u505) / (*(float *)((t496 + 0x0))))) + 0.5f) & 0xFFFF), 0xFFFFFFFF, ((((struct o0_float *)0xC2A5858)->v))));
        t497 = (t497 + 0x1);
    }
    *(unsigned int *)(((int)stk + 4)) = 0xC12B9B8;
    *(unsigned int *)(((int)stk + 0)) = 0xC12B9B4;
    t510 = t496;
    t511 = 0x0;
    for (;;) {
        if ((int)t511 > (int)0x17) {
            break;
        }
        t510 = (FUN_0c03e4d0(t511));
        if (t510 == 1) {
            t510 = (pdGetPeripheral(t511));
            t514 = t510;
            t510 = 0x6;
            t510 = ((int)((int)t511 / (int)t510));
            t517 = (t510 * 0x6E);
            t510 = (*(int *)((t514 + 0x24)));
            t510 = (*(signed char *)((t510 + 0x0)));
            t519 = (((struct o8_int *)0xC2A5858)->v);
            if (t510 == 82) {
                t522 = (*(int *)(((int)stk + 4)));
            } else {
                t522 = (*(int *)(((int)stk + 0)));
            }
            t510 = (FUN_0c03346e((*(int *)((t522 + 0x0))), 0xC2A5808, ((t517 - t519) + 0xD2), 0x60));
        }
        t511 = (t511 + 0x6);
    }
    t528 = t510;
    t531 = 0xC12B9B4;
    t532 = 0x17;
    t533 = 0x0;
    for (;;) {
        if ((int)t533 <= (int)0x7) {
            t529 = 0xC2A4FB0;
            t530 = (*(int *)((t529 + 0x0)));
            if ((((int)0x1 << (int)t533) & t530) == 0) {
                t709 = t529;
                t711 = t530;
                t712 = t531;
            } else {
                t532 = 0x7C;
                t530 = t533;
                t532 = (t533 * t532);
                t532 = (t532 + 0xC2A46F0);
                if ((t530 & 0x1) != 0) {
                    t528 = 0xC2A5860;
                    t530 = (*(int *)((t528 + 0x0)));
                    t530 = (-t530);
                } else {
                    t528 = 0xC2A5860;
                    t530 = (*(int *)((t528 + 0x0)));
                }
                t528 = 0xC03A5F4;
                *(unsigned int *)(((int)stk + 4)) = t530;
                (((struct o0_float *)0xC2A5858)->v) = (((((struct o0_float *)0xC2A5858)->v)) + (*(float *)((t528 + 0x0))));
                t530 = ((((struct o28_int *)0xC2A4F80)->v));
                if (t533 == t530) {
                    t528 = (*(int *)((t532 + 0xC)));
                    if (t528 == 1) {
                        t528 = 0xC03A5FC;
                        t530 = 0xC076230;
                        u545 = *(float *)((t528 + 0x0));
                        t528 = 0xC03A600;
                        t528 = (FUN_0c076230(1.0f, (*(float *)((t528 + 0x0))), u545));
                    } else {
                        t548 = t529;
                        t550 = t530;
                        t551 = t531;
                    }
                    t529 = t548;
                    t530 = t550;
                    t531 = t551;
                    t531 = 0x18;
                    if ((((*(int *)0xC1EC83C) & t531) == 0) && (t529 = 0xC2A46E0, t556 = *(int *)((t529 + 0x0)), t528 = t556, t528 != 1)) {
                        t566 = t529;
                        t568 = t530;
                    } else {
                        t530 = (t533 & 0x1);
                        t557 = (((t533 & 0x1) << 2) + t530);
                        t530 = 0x0;
                        t529 = (*(int *)(((int)stk + 4)));
                        t531 = (*(int *)((t532 + 0x0)));
                        t561 = (int)((unsigned int)((int)((unsigned int)t533 + (unsigned int)t530)) + ((((int)t530 > (int)t533)) ? 1u : 0u));
                        t528 = 0xC12B9AC;
                        t530 = 0xC03346E;
                        t531 = (t531 << 2);
                        t531 = (*(int *)((t531 + t528)));
                        t528 = (FUN_0c03346e(t531, 0xC2A5808, ((((t561 >> 1) * 0x6E) + t529) + 0xD2), (((t557 << 2) << 2) + 0xB0)));
                    }
                    t529 = t566;
                    t530 = t568;
                    t531 = 0x230;
                    t625 = t529;
                } else {
                    t530 = (*(int *)(((int)stk + 8)));
                    t529 = 0x1;
                    t529 = ((int)t529 << (int)t533);
                    if ((t529 & t530) != 0) {
                        t529 = 0xC078890;
                        t528 = (FUN_0c078890((1.0f + 1.0f)));
                        t530 = 0x0;
                        t578 = (int)((unsigned int)((int)((unsigned int)t533 + (unsigned int)t530)) + ((((int)t530 > (int)t533)) ? 1u : 0u));
                        t530 = ((((struct o4_int *)0xC2A5858)->v));
                        t531 = t533;
                        t531 = (t531 & 0x1);
                        t528 = 0x28;
                        t582 = t530;
                        t530 = t531;
                        t530 = (t530 + 0x1);
                        u583 = (float)t582;
                        u583 = u583 + 110.0f * (float)(t578 >> 1);
                        *(float *)((((int)stk + 0) + t528)) = (u583 + 155.0f);
                        t528 = 0xC03A620;
                        u584 = *(float *)((t528 + 0x0));
                        t528 = 0xC03A624;
                        u585 = *(float *)((t528 + 0x0));
                        t528 = 0x2C;
                        u586 = u585;
                        u586 = u586 + u584 * (float)t530;
                        *(float *)((((int)stk + 0) + t528)) = u586;
                        t530 = ((((struct o4_int *)0xC2A5858)->v));
                        t531 = (t531 + 0x2);
                        t528 = 0x1C;
                        t588 = t530;
                        t530 = 0xC177D9C;
                        u590 = (float)t588;
                        u590 = u590 + 110.0f * ((float)((t578 >> 1) + 0x1));
                        *(float *)((((int)stk + 0) + t528)) = (u590 + 155.0f);
                        t528 = 0xC03A624;
                        u591 = *(float *)((t528 + 0x0));
                        t528 = 0x20;
                        u592 = u591;
                        u592 = u592 + u584 * (float)t531;
                        *(float *)((((int)stk + 0) + t528)) = u592;
                        t528 = 0xC03A628;
                        u593 = *(float *)((t530 + 0x0));
                        u594 = *(float *)((t528 + 0x0));
                        t528 = 0xC03A630;
                        u595 = *(float *)((t528 + 0x0));
                        t528 = 0xC03A638;
                        t530 = 0xFFFF;
                        t531 = ((int)stk + 0);
                        t531 = (t531 + 0x28);
                        t528 = (FUN_0c03378c(t531, (((int)stk + 0) + 0x1C), ((int)((((u593 * u594) / u595)) + 0.5f) & t530), 0xFFFFFFFF, (((((struct o0_float *)0xC2A5858)->v)) + (*(float *)((t528 + 0x0))))));
                        u612 = 0.5f;
                        u613 = 0.5f;
                    } else {
                        t528 = (*(int *)((t532 + 0xC)));
                        u603 = 0.5f;
                        u604 = 0.5f;
                        if (t528 == 1) {
                            t528 = 0xC03A718;
                            u601 = *(float *)((t528 + 0x0));
                            t528 = 0xC03A71C;
                            u603 = (*(float *)((t528 + 0x0)));
                            u604 = u601;
                        }
                        t606 = t529;
                        t609 = t531;
                        u612 = u603;
                        u613 = u604;
                    }
                    t529 = t606;
                    t530 = 0xC076230;
                    t531 = t609;
                    t528 = (FUN_0c076230(0.5f, u612, u613));
                    t530 = (t533 & 0x1);
                    t616 = (((t533 & 0x1) << 2) + t530);
                    t530 = 0x0;
                    t529 = (*(int *)(((int)stk + 4)));
                    t531 = (*(int *)((t532 + 0x0)));
                    t620 = (int)((unsigned int)((int)((unsigned int)t533 + (unsigned int)t530)) + ((((int)t530 > (int)t533)) ? 1u : 0u));
                    t528 = 0xC12B9AC;
                    t530 = 0xC03346E;
                    t531 = (t531 << 2);
                    t531 = (*(int *)((t531 + t528)));
                    t528 = (FUN_0c03346e(t531, 0xC2A5808, ((((t620 >> 1) * 0x6E) + t529) + 0xD2), (((t616 << 2) << 2) + 0xB0)));
                    t531 = 0x250;
                }
                t529 = t625;
                t530 = 0xC026CE6;
                *(unsigned int *)(((int)stk + 0)) = t531;
                t528 = (FUN_0c026ce6());
                t530 = t533;
                t528 = 0xC03A734;
                t530 = ((int)((unsigned int)((int)((unsigned int)t530 + (unsigned int)0x0)) + ((((int)0x0 > (int)t530)) ? 1u : 0u)));
                u636 = *(float *)((t528 + 0x0));
                t530 = (t530 >> 1);
                t531 = 0x3;
                t528 = 0xC;
                t530 = (t530 * 0x6E);
                (((struct o0_float *)0xC2A5858)->v) = (((((struct o0_float *)0xC2A5858)->v)) - u636);
                t529 = (*(int *)(((int)stk + 4)));
                t530 = (t530 + t529);
                t530 = (t530 + 0xD2);
                *(float *)((((int)stk + 0) + t528)) = (float)t530;
                t530 = ((((struct o0_int *)0xC2A4F80)->v));
                if ((int)t530 <= (int)t531) {
                    t530 = (*(int *)((t532 + 0x4)));
                    if (t530 != 0) {
                        t692 = t529;
                        t694 = t530;
                    } else {
                        t530 = t533;
                        t530 = (t530 & 0x1);
                        t529 = t530;
                        t530 = (t530 << 2);
                        t530 = (t530 + t529);
                        t528 = 0x8B;
                        t530 = (t530 << 2);
                        t530 = (t530 << 2);
                        t530 = (t530 + t528);
                        t528 = 0xC;
                        t650 = t530;
                        t530 = 0xC033578;
                        t531 = (*(int *)(((int)stk + 0)));
                        t528 = (FUN_0c033578(t531, 0xC0C04B8, (*(float *)((((int)stk + 0) + t528))), (float)t650, 1.0f));
                    }
                } else {
                    t530 = (*(int *)((t532 + 0x10)));
                    if ((int)t530 > 0) {
                        t531 = 0xC2A5868;
                        t530 = 0xC03332C;
                        t528 = (FUN_0c03332c(t531, 0x3, 0x0, (*(int *)((t532 + 0x10)))));
                        t667 = t528;
                    } else {
                        t531 = 0xC0C04C8;
                        t663 = t529;
                        t666 = t531;
                        t667 = t531;
                    }
                    t529 = t663;
                    t530 = t533;
                    t531 = t666;
                    t530 = (t530 & 0x1);
                    t672 = t530;
                    t530 = (t530 << 2);
                    t530 = (t530 + t672);
                    t530 = (t530 << 2);
                    t530 = (t530 << 2);
                    *(unsigned int *)(((int)stk + 24)) = t530;
                    t530 = (t530 + 0x8B);
                    t673 = t530;
                    t530 = t533;
                    t529 = 0x0;
                    t528 = 0x14;
                    t530 = ((int)((unsigned int)((int)((unsigned int)t530 + (unsigned int)t529)) + ((((int)t529 > (int)t530)) ? 1u : 0u)));
                    t530 = (t530 >> 1);
                    t529 = 0xAF;
                    *(float *)((((int)stk + 0) + t528)) = (float)t673;
                    t530 = (t530 * 0x6E);
                    t528 = (*(int *)(((int)stk + 4)));
                    t530 = (t530 + t528);
                    *(unsigned int *)(((int)stk + 16)) = t530;
                    t530 = (t530 + t529);
                    t680 = t530;
                    t530 = 0xC033578;
                    t531 = (*(int *)(((int)stk + 0)));
                    t528 = (FUN_0c033578(t531, t667, (float)t680, (float)t673, 1.0f));
                    t530 = 0xDC;
                    t528 = 0x14;
                    t531 = (*(int *)(((int)stk + 0)));
                    t528 = (FUN_0c033578(t531, 0xC0C04CC, (float)((*(int *)(((int)stk + 16))) + t530), (*(float *)((((int)stk + 0) + t528))), 1.0f));
                    t530 = 0x9A;
                    t529 = (*(int *)(((int)stk + 16)));
                    t529 = (t529 + 0xEB);
                    t689 = t529;
                    t529 = 0xC033578;
                    t531 = (*(int *)(((int)stk + 0)));
                    t528 = (FUN_0c033578(t531, 0xC0C04D4, (float)t689, (float)((*(int *)(((int)stk + 24))) + t530), 1.0f));
                }
                t529 = t692;
                t530 = t694;
                t531 = 0xC2A5868;
                t530 = 0xC03332C;
                t528 = (FUN_0c03332c(t531, 0x3, 0x0, (*(int *)((t532 + 0x8)))));
                t532 = t533;
                t532 = (t532 & 0x1);
                t530 = t532;
                t532 = (t532 << 2);
                t532 = (t532 + t530);
                t532 = (t532 << 2);
                t532 = (t532 << 2);
                t530 = 0xC033578;
                t702 = t528;
                t528 = 0xC;
                t531 = (*(int *)(((int)stk + 0)));
                t528 = (FUN_0c033578(t531, t702, (*(float *)((((int)stk + 0) + t528))), (float)(0xBA + t532), 1.0f));
                t528 = 0xC;
                t532 = (t532 + 0xC9);
                t531 = (*(int *)(((int)stk + 0)));
                t528 = (FUN_0c033578(t531, 0xC0C04DC, (*(float *)((((int)stk + 0) + t528))), (float)t532, 1.0f));
            }
            t529 = t709;
            t533 = (t533 + 0x1);
            t530 = t711;
            t531 = t712;
            continue;
        }
        break;
    }
    return (*(int *)(((int)stk + 8)));
}

int FUN_0c037790(int a4)
{
    int stk[6];

    register int R0;
    register int R1;
    register int R2;
    register int R3;
    int R4;
    register int R5;
    register int R6;
    register int R7;
    register int R13;
    register float F4;
    register float F5;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    R4 = a4;
    *(unsigned int *)(((int)stk + 0)) = 0xC2A46AC;
    v0_0 = (0xC2A4FA8);
    v0_1 = (0x2);
    if (((int)((((struct o0_int *)0xC2A4F80)->v)) < (int)0x2)) goto L_C0377D4;
    v0_2 = buIsReady((*(int *)((v0_0 + 0x0))));
    R0 = (v0_2);
    if ((v0_2 != 0)) goto L_C0377D4;
    FUN_0c03386a(0x4);
    R0 = ((FUN_0c0339fc(0x0)));
    L_C037DAE:;
    return R0;
    L_C0377D4:;
    if ((((((struct o4_int *)0xC2A46E4)->v)) == 0)) goto L_C0377E0;
    goto L_C037DAE;
    L_C0377E0:;
    if ((((((struct o0_int *)0xC2A46E4)->v)) != 1)) goto L_C03783C;
    (((struct o0_uint *)0xC2A46E4)->v) = v0_1;
    if ((((*(int *)(((*(int *)(((int)stk + 0))) + 0x1C))) & 6) == 0)) goto L_C03783C;
    *(unsigned int *)(((*(int *)(((int)stk + 0))) + 0x1C)) = v0_1;
    R0 = (0xC2A4F80);
    if ((((((struct o0_int *)0xC2A4F80)->v)) == 0)) goto L_C03780A;
    v0_0 = *(int *)((R0 + 0x0));
    R0 = (v0_0);
    if ((v0_0 == 2)) goto L_C03780A;
    goto L_C037DAE;
    L_C03780A:;
    R0 = ((FUN_0c0339fc(0x5)));
    goto L_C037DAE;
    L_C03783C:;
    (((struct o4_uint *)0xC2A4F80)->v) = (((((((struct o0_int *)0xC2A4F80)->v)) >> 1) << 1) | 0x1);
    v0_3 = FUN_0c034320(0x1, 0x14);
    v0_2 = (0xC0773E8);
    v0_2 = (0xC12B774);
    R4 = (v0_3);
    v0_4 = (0xC0C0284);
    w0_0 = (240.0f);
    w0_1 = (320.0f);
    if ((v0_3 == 0)) goto L_C0378AE;
    if (!((R4 == 1))) goto L_C037D72;
    if (((int)((((struct o0_int *)0xC2A4F80)->v)) > (int)0x1)) goto L_C037894;
    goto L_C03787A;
    L_C037D72:;
    v0_1 = FUN_0c0343b8(0x1, 0x14, R6);
    v0_0 = (v0_1);
    if ((v0_1 != 0)) goto L_C037D90;
    R0 = ((FUN_0c035a5e(0x4, 0x0, w0_1, w0_0)));
    goto L_C037DAE;
    L_C037D90:;
    FUN_0c035a5e(0x4, 0x1, w0_1, w0_0);
    R0 = (v0_0);
    if ((v0_0 != 1)) goto L_C037DAE;
    FUN_0c03386a(0x4);
    R0 = ((FUN_0c0339c0(0x0)));
    goto L_C037DAE;
    L_C03787A:;
    v0_1 = buIsExistFile((*(int *)((v0_0 + 0x0))), v0_4);
    R13 = (v0_1);
    if ((v0_1 == -1)) goto L_C03787A;
    if ((R13 == 0)) goto L_C037894;
    if ((R13 == 0xFFFFFF05)) goto L_C037894;
    L_C037CDC:;
    R5 = (0x0);
    L_C037D60:;
    R0 = ((FUN_0c03e358(R13, R5)));
    goto L_C037DAE;
    L_C037894:;
    *(unsigned int *)((v0_2 + 0x0)) = 0x0;
    (((struct o1C_uint *)0xC2A4F80)->v) = 0x0;
    FUN_0c03386a(0x6);
    FUN_0c035a20(0x4);
    goto L_C037D72;
    L_C0378AE:;
    v0_3 = (0xC2A5858);
    w0_2 = (196.0f);
    w0_3 = (262.0f);
    if ((((*(int *)(((*(int *)(((int)stk + 0))) + 0x1C))) & 4) != 0)) goto L_C0378C4;
    L_C037B92:;
    if (((*(int *)((v0_2 + 0x0))) != 0)) goto L_C037B9C;
    goto L_C037D72;
    L_C037B9C:;
    if (((int)((((struct o1C_int *)0xC2A4F80)->v)) > (int)0x3)) goto L_C037C1A;
    w0_4 = ((*(float *)((v0_3 + 0x0))));
    if ((R13 != 0xFFFFFF05)) goto L_C037BE0;
    FUN_0c0345ec(0x224, 0x1, (((((*(int *)((v0_0 + 0x0))) << 2) << 2) << 1) + 0xC0B6010), w0_1, w0_2, w0_4);
    L_C037BEE:;
    FUN_0c0345ec(0x24, 0xC, 0x0, w0_1, w0_3, (*(float *)((v0_3 + 0x0))));
    FUN_0c0345ec(0x24, 0xD, (((((*(int *)((v0_0 + 0x0))) << 2) << 2) << 1) + 0xC0B6010), w0_1, 284.0f, (*(float *)((v0_3 + 0x0))));
    L_C037C1A:;
    if ((((((struct o1C_int *)0xC2A4F80)->v)) != 0)) goto L_C037C3C;
    v0_3 = *(int *)((v0_0 + 0x0));
    FUN_0c0585ca(((((v0_3 >> 1) << 1) + ((v0_3 >> 1) << 2)) + 0x1), 0x1);
    FUN_0c0584e2();
    L_C037C3C:;
    v0_3 = (((struct o1C_int *)0xC2A4F80)->v);
    (((struct o1C_uint *)0xC2A4F80)->v) = (v0_3 + 0x1);
    if ((v0_3 == 3)) goto L_C037C4C;
    goto L_C037D72;
    L_C037C4C:;
    if ((((((struct o2C_int *)0xC2A4F80)->v)) == -2)) goto L_C037C6E;
    if ((((unsigned short)(*(short *)0xC28ED98) & 0xC0) == 0xC0)) goto L_C037C6E;
    *(unsigned short *)0xC28ED98 = ((*(short *)0xC28ED98) | ((((struct o18_int *)0xC2A4F80)->v)));
    L_C037C6E:;
    v0_4 = FUN_0c03256c((*(int *)((v0_0 + 0x0))), R5, R6, R7);
    v0_3 = (0x0);
    R13 = (v0_4);
    if ((v0_4 != 0)) goto L_C037CCC;
    if ((((((struct o2C_int *)0xC2A4F80)->v)) != -2)) goto L_C037CCC;
    v0_4 = (0xC0C0264);
    L_C037C86:;
    v0_5 = buIsExistFile((*(int *)((v0_0 + 0x0))), v0_4);
    R4 = (v0_5);
    if ((v0_5 == -1)) goto L_C037C86;
    if ((R4 != 0)) goto L_C037CA8;
    v0_4 = (FUN_0c0323d0((*(int *)((v0_0 + 0x0))), v0_4, 0xC28FCB4, 0x5)) == 0;
    if (v0_4) goto L_C037CA8;
    v0_3 = (0x1);
    L_C037CA8:;
    v0_4 = (0xC0C0274);
    L_C037CAA:;
    v0_5 = buIsExistFile((*(int *)((v0_0 + 0x0))), v0_4);
    R4 = (v0_5);
    if ((v0_5 == -1)) goto L_C037CAA;
    if ((R4 != 0)) goto L_C037CCC;
    v0_4 = (FUN_0c0323d0((*(int *)((v0_0 + 0x0))), v0_4, 0xC2903E4, 0x5)) == 0;
    if (v0_4) goto L_C037CCC;
    v0_3 = ((v0_3 | v0_1));
    L_C037CCC:;
    FUN_0c058688(0x1);
    FUN_0c0584da();
    if ((R13 == 0)) goto L_C037D28;
    goto L_C037CDC;
    L_C037D28:;
    R4 = (0x9);
    if (((*(int *)((v0_2 + 0x0))) != 1)) goto L_C037D36;
    (((struct o0_uint *)0xC2A46E4)->v) = 0x3;
    L_C037D36:;
    if (((int)((((struct o0_int *)0xC2A4F80)->v)) < (int)v0_1)) goto L_C037D4E;
    if ((((((struct o2C_int *)0xC2A4F80)->v)) != -2)) goto L_C037D4E;
    (((struct o2C_uint *)0xC2A4670)->v) = (((((struct o2C_int *)0xC2A4670)->v)) | R4);
    L_C037D4E:;
    (((struct o2C_uint *)0xC2A4F80)->v) = (*(int *)((v0_0 + 0x0)));
    (((struct o8_uint *)0xC2A46E4)->v) = 0x0;
    if ((v0_3 == 0)) goto L_C037D6A;
    R5 = (v0_3);
    goto L_C037D60;
    L_C037D6A:;
    v0_0 = *(int *)(((int)stk + 0));
    *(unsigned int *)((v0_0 + 0x1C)) = ((*(int *)((v0_0 + 0x1C))) | R4);
    goto L_C037D72;
    L_C037BE0:;
    FUN_0c0345ec(0x224, 0x1, 0x0, w0_1, w0_2, w0_4);
    goto L_C037BEE;
    L_C0378C4:;
    v0_5 = buGetFileInfo((*(int *)((v0_0 + 0x0))), v0_4, (((int)stk + 0) + 0x4));
    R13 = (v0_5);
    if ((v0_5 == -1)) goto L_C0378C4;
    R4 = (((((struct o0_int *)0xC2A4670)->v)));
    v0_4 = (0xC2A4670);
    if ((R13 == 0)) goto L_C0378E2;
    if ((R13 == 0xFFFFFF05)) goto L_C037A16;
    goto L_C037CDC;
    L_C037A16:;
    if (((int)((((struct o0_int *)0xC2A4F80)->v)) >= (int)0x2)) goto L_C037A24;
    goto L_C037CDC;
    L_C037A24:;
    if (((0x18 & R4) != 0)) goto L_C037A3A;
    if ((((((struct o8_int *)0xC2A4670)->v)) != 0)) goto L_C037A78;
    if (((((((struct o4_int *)0xC2A4670)->v)) & 24) == 0)) goto L_C037A78;
    L_C037A3A:;
    *(unsigned int *)((v0_2 + 0x0)) = (((*(int *)((v0_2 + 0x0))) + 0x1) & 0x1);
    FUN_0c07c8be(0x10DA9);
    L_C037A82:;
    FUN_0c0345ec(0x24, 0x9, (((((*(int *)((v0_0 + 0x0))) << 2) << 2) << 1) + 0xC0B6010), 64.0f, 174.0f, (*(float *)((v0_3 + 0x0))));
    FUN_0c0345ec(0x24, 0xA, (((((*(int *)((v0_0 + 0x0))) << 2) << 2) << 1) + 0xC0B6010), 64.0f, w0_2, (*(float *)((v0_3 + 0x0))));
    FUN_0c0345ec(0x24, 0xB, 0x0, 64.0f, 218.0f, (*(float *)((v0_3 + 0x0))));
    if (((*(int *)((v0_2 + 0x0))) != 1)) goto L_C037AFA;
    FUN_0c0345ec(0x234, 0x1C, 0x0, w0_1, w0_0, (*(float *)((v0_3 + 0x0))));
    FUN_0c0345ec(0x224, 0x1D, 0x0, w0_1, w0_3, (*(float *)((v0_3 + 0x0))));
    L_C037B1A:;
    if ((((*(int *)((v0_4 + 0x0))) & 6) != 0)) goto L_C037B24;
    goto L_C037D72;
    L_C037B24:;
    v0_5 = *(int *)(((int)stk + 0));
    *(unsigned int *)((v0_5 + 0x1C)) = ((*(int *)((v0_5 + 0x1C))) & 0xFFFFFFFB);
    if (((*(int *)((v0_2 + 0x0))) != 0)) goto L_C037B84;
    v0_4 = *(int *)(((int)stk + 0));
    *(unsigned int *)((v0_4 + 0x1C)) = ((*(int *)((v0_4 + 0x1C))) | 0x8);
    if (((int)((((struct o0_int *)0xC2A4F80)->v)) < (int)v0_1)) goto L_C037B54;
    FUN_0c03386a(0x4);
    FUN_0c0339c0(0x0);
    goto L_C037B92;
    L_C037B54:;
    FUN_0c0339c0(0x9);
    goto L_C037B92;
    L_C037B84:;
    if ((((*(int *)((v0_4 + 0x0))) & 6) == 0)) goto L_C037B92;
    FUN_0c07c8be(0xDA9);
    goto L_C037B92;
    L_C037AFA:;
    FUN_0c0345ec(0x224, 0x1C, 0x0, w0_1, w0_0, (*(float *)((v0_3 + 0x0))));
    FUN_0c0345ec(0x234, 0x1D, 0x0, w0_1, w0_3, (*(float *)((v0_3 + 0x0))));
    goto L_C037B1A;
    L_C037A78:;
    if (((R4 & 0x4) == 0)) goto L_C037A82;
    *(unsigned int *)((v0_2 + 0x0)) = 0x0;
    goto L_C037A82;
    L_C0378E2:;
    if ((((((struct o0_int *)0xC2A4F80)->v)) == 3)) goto L_C03794C;
    v0_5 = (FUN_0c07ffbc((((int)stk + 0) + 0xE), 0xC290B3C, 0x8)) != 0;
    if (v0_5) goto L_C03794C;
    *(unsigned int *)((v0_2 + 0x0)) = 0x1;
    goto L_C037B24;
    L_C03794C:;
    if ((((*(int *)((v0_4 + 0x0))) & 24) != 0)) goto L_C03795E;
    if (((*(int *)((v0_4 + 0x8))) != 0)) goto L_C037970;
    if ((((*(int *)((v0_4 + 0x4))) & 24) == 0)) goto L_C037970;
    L_C03795E:;
    *(unsigned int *)((v0_2 + 0x0)) = (((*(int *)((v0_2 + 0x0))) + 0x1) & 0x1);
    FUN_0c07c8be(0x10DA9);
    L_C03797A:;
    FUN_0c0345ec(0x24, 0x7, (((((*(int *)((v0_0 + 0x0))) << 2) << 2) << 1) + 0xC0B6010), 140.0f, w0_2, (*(float *)((v0_3 + 0x0))));
    FUN_0c0345ec(0x24, 0x8, (((((*(int *)((v0_0 + 0x0))) << 2) << 2) << 1) + 0xC0B6010), 140.0f, 218.0f, (*(float *)((v0_3 + 0x0))));
    if (((*(int *)((v0_2 + 0x0))) != 1)) goto L_C0379DE;
    FUN_0c0345ec(0x234, 0x1C, 0x0, w0_1, w0_0, (*(float *)((v0_3 + 0x0))));
    FUN_0c0345ec(0x224, 0x1D, 0x0, w0_1, w0_3, (*(float *)((v0_3 + 0x0))));
    L_C0379FE:;
    if ((((*(int *)((v0_4 + 0x0))) & 6) != 0)) goto L_C037A08;
    goto L_C037D72;
    L_C037A08:;
    goto L_C037B24;
    L_C0379DE:;
    FUN_0c0345ec(0x224, 0x1C, 0x0, w0_1, w0_0, (*(float *)((v0_3 + 0x0))));
    FUN_0c0345ec(0x234, 0x1D, 0x0, w0_1, w0_3, (*(float *)((v0_3 + 0x0))));
    goto L_C0379FE;
    L_C037970:;
    if ((((*(int *)((v0_4 + 0x0))) & 4) == 0)) goto L_C03797A;
    *(unsigned int *)((v0_2 + 0x0)) = 0x0;
    goto L_C03797A;
}

int FUN_0c018df2(void)
{
    int stk[15];
    register int t0;
    register float u6;
    register float t18;
    register float u19;
    register float u20;
    register float u21;
    register float u23;
    register float u24;
    register float t28;
    register float u35;
    register float t38;
    register int t59;
    register int t91;
    register int t92;
    register int t96;
    register float u110;
    register float u111;
    register float u112;
    register float u115;
    int t93;
    register int t117;
    int t152;
    register int t160;

    t0 = *(int *)0xC11CFA8;
    if (t0 != 1) {
        if (t0 != 2) {
            if (t0 != 3) {
                if (t0 != 4) {
                    return t0;
                }
                FUN_0c07ff00();
                *(float *)(((int)stk + 44)) = ((*(float *)(((int)stk + 44))) + ((((struct o18_float *)0xC019550)->v)));
                if (((((struct o0_int *)0xC177E80)->v)) != 0) {
                    FUN_0c018b22(0xC177E74, 0x0);
                    u6 = (((struct o28_float *)0xC019550)->v);
                    FUN_0c018c8a(u6, u6);
                    FUN_0c018b1c(0x1);
                    FUN_0c02f698();
                    (((struct o0_uint *)0xC177E80)->v) = 0x0;
                }
                camSetTarget(((int)stk + 40), 0x2);
                t18 = FUN_0c018cfc();
                u19 = (((struct o0_float *)0xC019550)->v);
                u20 = (((struct o4_float *)0xC019550)->v);
                u21 = (((-t18) + u19) / u20);
                if (0.0f > (((-t18) + u19) / u20)) {
                    u21 = 0.0f;
                }
                u23 = *(float *)0xC019590;
                u24 = u23;
                u24 = u24 + u23 * u21;
                *(float *)0xC177D9C = u24;
                return 0xC019590;
            }
            FUN_0c073360();
            FUN_0c073a60(0xC175930);
            MultiRot4Vec(0xC1758E4);
            t28 = FUN_0c018cfc();
            if (t28 > 500.0f) {
                (((struct o0_uint *)0xC177E80)->v) = 0x1;
            }
            if (((((struct o0_int *)0xC177E80)->v)) != 0) {
                (((struct oC_float *)0xC177E80)->v) = 0.0f;
                (((struct o4_float *)0xC177E80)->v) = 0.0f;
                (((struct o8_float *)0xC177E80)->v) = 5.0f;
                FUN_0c072230(0xC177E84, 0xC177E84);
                (((struct o10_float *)0xC177E80)->v) = (((FUN_0c070e80()) + -0.5f) * 68.0f);
                (((struct o14_float *)0xC177E80)->v) = (((FUN_0c070e80()) + -0.5f) * 16.0f);
                u35 = 27.0f;
                u35 = u35 + 27.0f * (FUN_0c070e80());
                (((struct o18_float *)0xC177E80)->v) = u35;
                FUN_0c072290(0xC177E90, 0xC177E90);
                FUN_0c0295c0(0xC177E84, 0xC177E90, 1.0f, 5.0f);
                t38 = FUN_0c070e80();
                FUN_0c073c40(0xC177E90, 0xC1759B4, (t38 + (1.0f + 1.0f)));
                FUN_0c018b22(0xC177E84, 0x0);
                FUN_0c018c18(0xC177E90);
                FUN_0c018c2a(0.899999976f, 0.200000003f);
                (((struct o1C_uint *)0xC177E80)->v) = ((int)(((FUN_0c070e60()) << 16) << 1) >> 19);
                (((struct o20_uint *)0xC177E80)->v) = ((int)(((FUN_0c070e60()) << 16) << 1) >> 25);
                (((struct o24_uint *)0xC177E80)->v) = ((FUN_0c070e60()) & 0x3);
                FUN_0c018b1c(0x1);
                FUN_0c02f698();
                (((struct o0_uint *)0xC177E80)->v) = 0x0;
            }
            FUN_0c073c40(0xC177E90, 0xC177E90, 0.980000019f);
            FUN_0c0295c0(0xC177E84, 0xC177E90, 0.0f, 5.0f);
            FUN_0c02be68(0xC177E84, 5.0f);
            t59 = FUN_0c029b12(0xC177E84, 5.0f);
            if ((*(int *)((t59 + 0x1C))) != -1) {
                if (((((struct o18_float *)(t59))->v)) > (((((struct o8_float *)0xC177E80)->v)) + -5.0f)) {
                    (((struct o8_float *)0xC177E80)->v) = (((((struct o18_float *)(t59))->v)) + 5.0f);
                }
                if ((((((struct o8_float *)0xC177E80)->v)) + -100.0f) > ((((struct o18_float *)(t59))->v))) {
                    (((struct o8_float *)0xC177E80)->v) = (((((struct o18_float *)(t59))->v)) + 100.0f);
                }
            } else {
                (((struct o0_uint *)0xC177E80)->v) = 0x1;
            }
            FUN_0c018b22(0xC177E84, 0x2);
            FUN_0c07ff00();
            *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + 5.0f);
            if ((((((struct o24_int *)0xC177E80)->v)) & 2) != 0) {
                *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + 50.0f);
            }
            FUN_0c072230(((int)stk + 0), ((int)stk + 0));
            camSetTarget(((int)stk + 0), 0x2);
            nlPopMatrix(0x1);
            t91 = (((struct o1C_int *)0xC177E80)->v);
            t92 = (((struct o20_int *)0xC177E80)->v);
            (((struct o1C_uint *)0xC177E80)->v) = (t91 + t92);
            if (((int)(t91 + t92) >= (int)0xFFFFE800) && (t93 = (((struct o1C_int *)0xC177E80)->v), (int)t93 <= (int)0x1800)) {
            } else {
                t96 = (((struct o20_int *)0xC177E80)->v);
                if ((int)t96 < 0) {
                    (((struct o20_uint *)0xC177E80)->v) = (((((struct o20_int *)0xC177E80)->v)) + 0x1);
                } else {
                    if ((int)t96 > 0) {
                        (((struct o20_uint *)0xC177E80)->v) = (((((struct o20_int *)0xC177E80)->v)) - 1);
                    }
                }
            }
            FUN_0c018c96(0x0, 0x0, ((((struct o1C_int *)0xC177E80)->v)), 0x0);
            if ((0x1 & ((((struct o24_int *)0xC177E80)->v))) != 0) {
                u110 = (((struct o0_float *)0xC019550)->v);
                u111 = (((struct o4_float *)0xC019550)->v);
                u112 = ((u110 - t28) / u111);
                if (0.0f > ((u110 - t28) / u111)) {
                    u112 = 0.0f;
                }
                u115 = 27.0f;
                u115 = u115 + ((((struct o8_float *)0xC019550)->v)) * u112;
                *(float *)0xC177D9C = u115;
                t117 = 0xC019558;
            } else {
                *(float *)0xC177D9C = ((((struct oC_float *)0xC019550)->v));
                t117 = 0xC01955C;
            }
            return t117;
        }
        *(float *)(((int)stk + 32)) = 0.0f;
        *(float *)(((int)stk + 40)) = 10.0f;
        *(float *)(((int)stk + 36)) = 5.0f;
        FUN_0c073360();
        MultiRot4Vec(0xC1758E4);
        FUN_0c072230(((int)stk + 32), ((int)stk + 32));
        nlRotateAY(0x1800);
        nlRotateAX(0xFC00);
        GetAng4Mat((((int)stk + 32) + 0xC));
        nlPopMatrix(0x1);
        nlAddVector(((int)stk + 32), 0xC175930);
        if (((((struct o0_int *)0xC177E80)->v)) != 0) {
            FUN_0c018cec(35.0f);
            camSetTarget(((int)stk + 32), 0x0);
            FUN_0c018c8a(0.800000012f, 0.300000012f);
            FUN_0c018b1c(0x2);
            FUN_0c02f698();
            (((struct o0_uint *)0xC177E80)->v) = 0x0;
        }
        camSetTarget(((int)stk + 32), 0x2);
        return (FUN_0c018c96((*(int *)(((int)stk + 44))), (*(int *)(((int)stk + 48))), (*(int *)(((int)stk + 52))), 0x0));
    }
    FUN_0c07ff00();
    *(float *)(((int)stk + 32)) = ((*(float *)(((int)stk + 32))) + 5.0f);
    if (((((struct o0_int *)0xC177E80)->v)) != 0) {
        FUN_0c018cec(60.0f);
        camSetTarget(((int)stk + 28), 0x0);
        FUN_0c018c8a(0.300000012f, 0.300000012f);
        if (((*(int *)0xC2AC2F4) == 1) && (t152 = *(int *)0xC1EC71C, t152 == 1)) {
            FUN_0c018c96(0x0, ((unsigned short)(*(short *)0xC17593E) - 24576), 0x0, 0x0);
            t160 = ((unsigned short)(*(short *)0xC17593E) - 24576);
        } else {
            FUN_0c018c96(0x0, (unsigned short)(*(short *)0xC17593E), 0x0, 0x0);
            t160 = (unsigned short)(*(short *)0xC17593E);
        }
        FUN_0c018c96(0xFFFFC000, t160, 0xFFFFD000, 0x1);
        FUN_0c018ce0(9.99999975e-06f, 1.0f);
        FUN_0c018cd6(0x8, 0x90, 0x10);
        FUN_0c018b1c(0x2);
        FUN_0c02f698();
        (((struct o0_uint *)0xC177E80)->v) = 0x0;
    }
    return (camSetTarget(((int)stk + 28), 0x2));
}

int FUN_0c01a1a0(int a4, int a5)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t6;
    register float u0;

    t2 = *(int *)(((a4 << 2) + 0xC1EC688));
    if ((*(signed char *)(((*(int *)((t2 + 0x24))) + 0x0))) == 82) {
        (((struct o2C_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = 0x2;
        t3 = 0x1;
    } else {
        if ((*(signed char *)(((*(int *)((t2 + 0x24))) + 0xA))) == 70) {
            (((struct o2C_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = 0x5;
            t4 = 0x2;
        } else {
            (((struct o2C_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = 0x2;
            t4 = 0x0;
        }
        t3 = t4;
    }
    (((struct o2B_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = t3;
    *(unsigned short *)((((a4 * 0x34) + 0xC1EC758) + 0x10)) = (((*(short *)((t2 + 0x1C))) + 0x80) << 8);
    *(unsigned short *)((((a4 * 0x34) + 0xC1EC758) + 0x12)) = ((unsigned short)(*(short *)((t2 + 0x18))) << 8);
    *(unsigned short *)((((a4 * 0x34) + 0xC1EC758) + 0x14)) = ((unsigned short)(*(short *)((t2 + 0x1A))) << 8);
    *(unsigned short *)((((a4 * 0x34) + 0xC1EC758) + 0x16)) = (((*(short *)((t2 + 0x1E))) + 0x80) << 8);
    *(unsigned int *)((((a4 * 0x34) + 0xC1EC758) + 0xC)) = (*(int *)((((a4 * 0x34) + 0xC1EC758) + 0x0)));
    *(unsigned int *)((((a4 * 0x34) + 0xC1EC758) + 0x0)) = (*(int *)((t2 + 0x8)));
    *(unsigned int *)((((a4 * 0x34) + 0xC1EC758) + 0x4)) = (*(int *)((t2 + 0x10)));
    *(unsigned int *)((((a4 * 0x34) + 0xC1EC758) + 0x8)) = (*(int *)((t2 + 0x14)));
    t4 = a5;
    if ((*(int *)0xC2A464C) == 1) {
    } else {
        if (t3 == 1) {
            (((struct o18_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = ((*(short *)((t2 + 0x1C))) + 0x80);
            (((struct o19_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = (*(short *)((t2 + 0x18)));
            (((struct o1A_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = (*(short *)((t2 + 0x1A)));
            (((struct o2A_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = (*(signed char *)((((a4 * 0x34) + 0xC1EC758) + 0x1E)));
            (((struct o27_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = (*(signed char *)((((a4 * 0x34) + 0xC1EC758) + 0x1B)));
            (((struct o28_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = (*(signed char *)((((a4 * 0x34) + 0xC1EC758) + 0x1C)));
            (((struct o29_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = (*(signed char *)((((a4 * 0x34) + 0xC1EC758) + 0x1D)));
            if ((*(signed char *)0xC28ED9F) == 0) {
                if ((0x10 & (*(int *)((t2 + 0x8)))) != 0) {
                    (((struct o1B_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = 0x1;
                } else {
                    (((struct o1B_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = 0x0;
                }
                if ((0x20 & (*(int *)((t2 + 0x8)))) != 0) {
                    (((struct o1C_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = 0x1;
                } else {
                    (((struct o1C_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = 0x0;
                }
                if (((*(int *)((t2 + 0x8))) & 4) != 0) {
                    (((struct o1D_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = 0x1;
                } else {
                    (((struct o1D_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = 0x0;
                }
                if (((*(int *)((t2 + 0x8))) & 0x2) != 0) {
                    (((struct o1E_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = 0x1;
                } else {
                    (((struct o1E_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = 0x0;
                }
            } else {
                if (((*(int *)((t2 + 0x8))) & 4) != 0) {
                    (((struct o1B_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = 0x1;
                } else {
                    (((struct o1B_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = 0x0;
                }
                if (((*(int *)((t2 + 0x8))) & 0x2) != 0) {
                    (((struct o1C_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = 0x1;
                } else {
                    (((struct o1C_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = 0x0;
                }
                if ((0x10 & (*(int *)((t2 + 0x8)))) != 0) {
                    (((struct o1D_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = 0x1;
                } else {
                    (((struct o1D_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = 0x0;
                }
                if ((0x20 & (*(int *)((t2 + 0x8)))) == 0) {
                    (((struct o1E_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = 0x0;
                } else {
                    (((struct o1E_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = 0x1;
                }
            }
            t4 = 0x10;
        } else {
            if (t3 != 2) {
                t3 = 0x0;
                if (((*(int *)((t2 + 0x8))) & 64) != 0) {
                } else {
                    t6 = 0xFF;
                    if (((*(int *)((t2 + 0x8))) & 0x80) != 0) {
                    } else {
                        t6 = ((*(short *)((t2 + 0x1C))) + 0x80);
                    }
                    t3 = t6;
                }
                if ((float)((unsigned char)t3 - (unsigned char)(*(signed char *)((((a4 * 0x34) + 0xC1EC758) + 0x18)))) > 0.0f) {
                    u0 = FUN_0c0709f0(((float)((unsigned char)t3 - (unsigned char)(*(signed char *)((((a4 * 0x34) + 0xC1EC758) + 0x18)))) * 0.25f));
                    (((struct o18_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = ((*(signed char *)(((0x18 + ((a4 * 0x34) + 0xC1EC758)) + 0x0))) + (int)u0);
                } else {
                    u0 = nlFloor(((float)((unsigned char)t3 - (unsigned char)(*(signed char *)((((a4 * 0x34) + 0xC1EC758) + 0x18)))) * 0.25f));
                    (((struct o18_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = ((*(signed char *)(((0x18 + ((a4 * 0x34) + 0xC1EC758)) + 0x0))) + (int)u0);
                }
                (((struct o27_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = (*(signed char *)((((a4 * 0x34) + 0xC1EC758) + 0x1B)));
                (((struct o28_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = (*(signed char *)((((a4 * 0x34) + 0xC1EC758) + 0x1C)));
                (((struct o2A_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = (*(signed char *)((((a4 * 0x34) + 0xC1EC758) + 0x1E)));
                if ((*(signed char *)0xC28ED9F) == 0) {
                    if (((*(int *)((t2 + 0x8))) & 0x200) != 0) {
                        (((struct o1E_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = 0x1;
                    } else {
                        (((struct o1E_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = 0x0;
                    }
                    if (((*(int *)((t2 + 0x8))) & 0x2) != 0) {
                        (((struct o1B_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = 0x1;
                    } else {
                        (((struct o1B_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = 0x0;
                    }
                    if (((*(int *)((t2 + 0x8))) & 4) != 0) {
                        (((struct o1C_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = 0x1;
                    } else {
                        (((struct o1C_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = 0x0;
                    }
                    (((struct o19_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = (*(short *)((t2 + 0x18)));
                    (((struct o1A_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = (*(short *)((t2 + 0x1A)));
                } else {
                    if (((*(int *)((t2 + 0x8))) & 0x200) != 0) {
                        (((struct o1E_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = 0x1;
                    } else {
                        (((struct o1E_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = 0x0;
                    }
                    if (((*(int *)((t2 + 0x8))) & 0x10000) != 0) {
                        (((struct o1B_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = 0x1;
                    } else {
                        (((struct o1B_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = 0x0;
                    }
                    if (((*(int *)((t2 + 0x8))) & 0x20000) != 0) {
                        (((struct o1C_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = 0x1;
                    } else {
                        (((struct o1C_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = 0x0;
                    }
                    t3 = 0x0;
                    if (((*(int *)((t2 + 0x8))) & 4) != 0) {
                        t3 = 0xFF;
                    }
                    if ((float)((unsigned char)t3 - (unsigned char)(*(signed char *)((((a4 * 0x34) + 0xC1EC758) + 0x19)))) > 0.0f) {
                        u0 = FUN_0c0709f0(((float)((unsigned char)t3 - (unsigned char)(*(signed char *)((((a4 * 0x34) + 0xC1EC758) + 0x19)))) * 0.899999976f));
                        (((struct o19_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = ((*(signed char *)(((0x19 + ((a4 * 0x34) + 0xC1EC758)) + 0x0))) + (int)u0);
                    } else {
                        u0 = nlFloor(((float)((unsigned char)t3 - (unsigned char)(*(signed char *)((((a4 * 0x34) + 0xC1EC758) + 0x19)))) * 0.899999976f));
                        (((struct o19_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = ((*(signed char *)(((0x19 + ((a4 * 0x34) + 0xC1EC758)) + 0x0))) + (int)u0);
                    }
                    t3 = 0x0;
                    if (((*(int *)((t2 + 0x8))) & 0x2) != 0) {
                        t3 = 0xFF;
                    }
                    if ((float)((unsigned char)t3 - (unsigned char)(*(signed char *)((((a4 * 0x34) + 0xC1EC758) + 0x1A)))) > 0.0f) {
                        u0 = FUN_0c0709f0(((float)((unsigned char)t3 - (unsigned char)(*(signed char *)((((a4 * 0x34) + 0xC1EC758) + 0x1A)))) * 0.899999976f));
                        (((struct o1A_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = ((*(signed char *)(((0x1A + ((a4 * 0x34) + 0xC1EC758)) + 0x0))) + (int)u0);
                    } else {
                        u0 = nlFloor(((float)((unsigned char)t3 - (unsigned char)(*(signed char *)((((a4 * 0x34) + 0xC1EC758) + 0x1A)))) * 0.899999976f));
                        (((struct o1A_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = ((*(signed char *)(((0x1A + ((a4 * 0x34) + 0xC1EC758)) + 0x0))) + (int)u0);
                    }
                }
                (((struct o29_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = (*(signed char *)((((a4 * 0x34) + 0xC1EC758) + 0x1D)));
                if (((*(int *)((t2 + 0x8))) & 0x400) != 0) {
                    (((struct o1D_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = 0x1;
                } else {
                    (((struct o1D_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = 0x0;
                }
            } else {
                t3 = *(short *)((t2 + 0x1C));
                if ((float)((unsigned char)(t3 + 0x80) - (unsigned char)(*(signed char *)((((a4 * 0x34) + 0xC1EC758) + 0x18)))) > 0.0f) {
                    t6 = ((*(signed char *)(((0x18 + ((a4 * 0x34) + 0xC1EC758)) + 0x0))) + (int)(FUN_0c0709f0(((float)((unsigned char)(t3 + 0x80) - (unsigned char)(*(signed char *)((((a4 * 0x34) + 0xC1EC758) + 0x18)))) * 0.25f))));
                } else {
                    t6 = ((*(signed char *)(((0x18 + ((a4 * 0x34) + 0xC1EC758)) + 0x0))) + (int)(nlFloor(((float)((unsigned char)(t3 + 0x80) - (unsigned char)(*(signed char *)((((a4 * 0x34) + 0xC1EC758) + 0x18)))) * 0.25f))));
                }
                (((struct o18_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = t6;
                if ((int)(unsigned short)(*(short *)((t2 + 0x18))) > (int)0x3F) {
                    (((struct o19_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = 0xFF;
                } else {
                    (((struct o19_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = ((*(short *)((t2 + 0x18))) << 2);
                }
                if ((int)(*(short *)((t2 + 0x1E))) >= 0) {
                    t3 = *(short *)((t2 + 0x1E));
                    if ((int)t3 > (int)0x3F) {
                        (((struct o1A_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = 0xFF;
                    } else {
                        (((struct o1A_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = (t3 << 2);
                    }
                } else {
                    (((struct o1A_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = 0x0;
                }
                (((struct o2F_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = (*(signed char *)((((a4 * 0x34) + 0xC1EC758) + 0x2D)));
                (((struct o30_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = (*(signed char *)((((a4 * 0x34) + 0xC1EC758) + 0x2E)));
                (((struct o2D_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = ((*(signed char *)((t2 + 0x20))) + 0x80);
                (((struct o2E_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = (0x80 + (*(signed char *)((t2 + 0x22))));
                (((struct o27_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = (*(signed char *)((((a4 * 0x34) + 0xC1EC758) + 0x1B)));
                if ((((*(int *)((t2 + 0x8))) & 4) == 0) && (t0 = *(signed char *)0xC1EC786, t1 = *(signed char *)0xC1EC788, (int)((unsigned char)t0 - (unsigned char)t1) <= (int)0x30)) {
                    (((struct o1B_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = 0x0;
                } else {
                    (((struct o1B_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = 0x1;
                }
                (((struct o28_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = (*(signed char *)((((a4 * 0x34) + 0xC1EC758) + 0x1C)));
                if (((*(int *)((t2 + 0x8))) & 0x400) != 0) {
                    (((struct o1C_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = 0x1;
                } else {
                    (((struct o1C_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = 0x0;
                }
                (((struct o29_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = (*(signed char *)((((a4 * 0x34) + 0xC1EC758) + 0x1D)));
                if (((*(int *)((t2 + 0x8))) & 0x200) != 0) {
                    (((struct o1D_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = 0x1;
                } else {
                    (((struct o1D_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = 0x0;
                }
                if (((*(int *)((t2 + 0x8))) & 0x2) != 0) {
                    (((struct o1E_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = 0x1;
                } else {
                    (((struct o1E_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = 0x0;
                }
            }
        }
    }
    FUN_0c0476dc(0x6, t4);
    (((struct o22_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = ((~(*(signed char *)((((a4 * 0x34) + 0xC1EC758) + 0x2A)))) & (*(signed char *)((((a4 * 0x34) + 0xC1EC758) + 0x1E))));
    (((struct o26_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = ((~(*(signed char *)((((a4 * 0x34) + 0xC1EC758) + 0x1E)))) & (*(signed char *)((((a4 * 0x34) + 0xC1EC758) + 0x2A))));
    (((struct o1F_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = ((~(*(signed char *)((((a4 * 0x34) + 0xC1EC758) + 0x27)))) & (*(signed char *)((((a4 * 0x34) + 0xC1EC758) + 0x1B))));
    (((struct o23_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = ((~(*(signed char *)((((a4 * 0x34) + 0xC1EC758) + 0x1B)))) & (*(signed char *)((((a4 * 0x34) + 0xC1EC758) + 0x27))));
    (((struct o20_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = ((~(*(signed char *)((((a4 * 0x34) + 0xC1EC758) + 0x28)))) & (*(signed char *)((((a4 * 0x34) + 0xC1EC758) + 0x1C))));
    (((struct o24_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = ((~(*(signed char *)((((a4 * 0x34) + 0xC1EC758) + 0x1C)))) & (*(signed char *)((((a4 * 0x34) + 0xC1EC758) + 0x28))));
    (((struct o21_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = ((~(*(signed char *)((((a4 * 0x34) + 0xC1EC758) + 0x29)))) & (*(signed char *)((((a4 * 0x34) + 0xC1EC758) + 0x1D))));
    (((struct o25_uchar *)(((a4 * 0x34) + 0xC1EC758)))->v) = ((~(*(signed char *)((((a4 * 0x34) + 0xC1EC758) + 0x1D)))) & (*(signed char *)((((a4 * 0x34) + 0xC1EC758) + 0x29))));
    return 0x25;
}
