/* Straight-line functions with calls and guards (batch gen_ec): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o2C_int { char p[0x2C]; int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o30_int { char p[0x30]; int v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int FUN_0c018b00(int);
int FUN_0c01d69c(void);
int FUN_0c0464de(int);
int FUN_0c047624(int);
int FUN_0c0476dc(int, int, int, int);
int FUN_0c047cb6(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c060210(int);
int FUN_0c068c94(int);
int FUN_0c073360(void);
int FUN_0c0739a0(int);
int SetAdvCamera(int, int);
int camSnapToCar(int);
void gdc_CoursePointLoadReq(Stk3, float);
int nlLocate(int, int);
int nlObjPutUseViewMatrix(int);
int nlPopMatrix(int);
int nlPrintf(int, ...);
int nlRotateAY(int);
int FUN_0c048262(int a4);

int FUN_0c048262(int a4)
{
    int stk[30];
    register int t48;
    register int t60;
    register int t64;
    register int t65;
    register int t66;
    register int t89;
    register int t92;
    register int t94;
    register int t117;
    register int t120;
    register int t128;
    register int t130;
    register int t143;
    register int t146;
    register int t154;
    register int t157;
    register int t211;
    register int t217;
    register int t220;
    register int t228;
    register int t233;
    register int t235;
    register int t243;
    register int t248;
    register int t250;
    register int t262;
    register int t266;
    register int t276;
    register int t279;
    register int t294;
    int t295;
    register int t301;
    register int t302;
    register int t303;
    register int t304;
    register int t305;
    register int t344;
    register int t345;
    register int t347;
    register int t349;
    register int t354;
    register int t356;
    register int t363;
    register int t365;
    register int t368;
    register int t370;
    register int t372;
    register int t375;
    register int t377;
    register int t379;
    register int t389;
    register int t391;
    register int t392;
    register int t394;
    register int t440;
    register int t442;
    register int t466;
    register int t476;
    register int t478;
    register int t479;
    register int t480;
    register int t482;
    register int t520;
    register int t543;
    register float u528;
    register int t546;
    register int t548;
    register int t563;
    register int t565;
    register int t616;
    register int t617;
    register int t618;
    register int t620;
    register int t639;
    register int t652;
    register int t700;
    register int t688;
    register int t38;
    register int t43;
    int t44;
    int t55;
    int t57;
    int t61;
    register int t293;
    int t84;
    register int t85;
    register int t86;
    int t90;
    int t114;
    int t118;
    register int t131;
    int t140;
    int t144;
    int t151;
    int t155;
    int t213;
    register int t214;
    int t219;
    int t230;
    int t234;
    int t245;
    int t249;
    int t258;
    register int t259;
    int t264;
    int t273;
    int t277;
    int t309;
    register int t310;
    register int t316;
    register int t317;
    register int t318;
    register int t319;
    register int t386;
    int t401;
    register int t461;
    register int t462;
    register int t463;
    register int t483;
    int t516;
    register float u551;
    register float u568;
    register int t621;

    *(unsigned int *)(((int)stk + 32)) = a4;
    { struct mvb32 { char b[32]; }; *(struct mvb32 *)((((int)stk + 32) + 0x38)) = *(struct mvb32 *)(0xC0F33F4); }
    { struct mv2 { int w[2]; }; *(struct mv2 *)((((int)stk + 32) + 0x30)) = *(struct mv2 *)(0xC0F3414); }
    t700 = *(int *)(((int)stk + 32));
    if (t700 == -2) {
        (((struct o0_uint *)0xC12FDA4)->v) = (*(int *)0xC175C80);
        *(unsigned char *)0xC1EC87C = 0x1;
        (((struct o4_uint *)0xC12FDA4)->v) = 0x1;
    } else {
        if ((*(int *)(((int)stk + 32))) == -1) {
            *(unsigned int *)0xC175C80 = ((((struct o0_int *)0xC12FDA4)->v));
            *(unsigned char *)0xC1EC87C = ((((struct o4_int *)0xC12FDA4)->v));
            (((struct oC_uint *)0xC1EC83C)->v) = 0x0;
            (((struct o0_uint *)0xC2ADA5C)->v) = 0x0;
            (((struct o8_uint *)0xC12FDA4)->v) = 0x0;
            t688 = 0xC1EC848;
        } else {
            if ((*(int *)(((int)stk + 32))) == 1) {
                *(unsigned int *)(((int)stk + 36)) = 0x5A;
                t38 = 0xC12D2B8;
            } else {
                if ((*(int *)(((int)stk + 32))) == 2) {
                    *(unsigned int *)(((int)stk + 36)) = 0x5A;
                    t38 = 0xC12DF60;
                } else {
                    if ((*(int *)(((int)stk + 32))) == 3) {
                        t38 = 0xC12F1A8;
                        if (((((struct o0_int *)0xC1EC71C)->v)) == 0) {
                            t38 = 0xC12EC08;
                        }
                        *(unsigned int *)(((int)stk + 36)) = 0x28;
                    }
                }
            }
            if ((((((struct o0_int *)0xC2AC2F4)->v)) == 1) && ((t43 = (((struct o8_int *)0xC12FDA4)->v), (int)t43 > 0) && (t44 = (((struct o8_int *)0xC12FDA4)->v), (int)t44 <= (int)0xB))) {
                (((struct o1C_uint *)0xC12D298)->v) = 0x1;
            } else {
                (((struct o1C_uint *)0xC12D298)->v) = 0x0;
            }
            t48 = FUN_0c0464de(0x2000);
            if (t48 != 0) {
                if ((int)(*(int *)0xC2AC614) < (int)0x1E) {
                    t55 = ((((struct o4_int *)0xC1EC78C)->v));
                } else {
                    t55 = ((((struct o0_int *)0xC1EC78C)->v));
                }
                t60 = 0x0;
                if (((0x80 & t55) != 0) && (t57 = (((struct o18_int *)0xC12FDA4)->v), (int)t57 < (int)0x1)) {
                    t60 = 0x1;
                }
                t64 = 0x0;
                if (((0x40 & t55) != 0) && (t61 = (((struct o18_int *)0xC12FDA4)->v), (int)t61 > 0)) {
                    t64 = 0x1;
                }
                t65 = (((struct o18_int *)0xC12FDA4)->v);
                (((struct o18_uint *)0xC12FDA4)->v) = (t65 + (t60 - t64));
                t66 = (((struct o14_int *)0xC12FDA4)->v);
                if ((t65 + (t60 - t64)) == 0) {
                    t89 = 0x0;
                    if (((0x20 & t55) != 0) && (t84 = (((struct o10_int *)0xC12FDA4)->v), t85 = *(int *)(((t84 << 2) + (((int)stk + 32) + 0x30))), t86 = (((struct o14_int *)0xC12FDA4)->v), (int)t86 < (int)(t85 - 1))) {
                        t89 = 0x1;
                    }
                    t92 = 0x0;
                    if (((0x10 & t55) != 0) && (t90 = (((struct o14_int *)0xC12FDA4)->v), (int)t90 > 0)) {
                        t92 = 0x1;
                    }
                    (((struct o14_uint *)0xC12FDA4)->v) = (((((struct o14_int *)0xC12FDA4)->v)) + (t89 - t92));
                    t293 = t55;
                } else {
                    t94 = (((struct o10_int *)0xC12FDA4)->v);
                    if (t94 != 0) {
                        if (t94 == 1) {
                            switch (t66) {
                            case 0:
                                t154 = 0x0;
                                if (((0x10 & t55) != 0) && (t151 = (((struct o10_int *)0xC12FDA4)->v), (int)t151 < (int)0x1)) {
                                    t154 = 0x1;
                                }
                                t157 = 0x0;
                                if (((0x20 & t55) != 0) && (t155 = (((struct o10_int *)0xC12FDA4)->v), (int)t155 > 0)) {
                                    t157 = 0x1;
                                }
                                (((struct o10_uint *)0xC12FDA4)->v) = (((((struct o10_int *)0xC12FDA4)->v)) + (t154 - t157));
                                break;
                            case 1:
                                t143 = 0x0;
                                if (((0x10 & t55) != 0) && (t140 = *(int *)0xC175C80, (int)t140 < (int)0x17)) {
                                    t143 = 0x1;
                                }
                                t146 = 0x0;
                                if (((0x20 & t55) != 0) && (t144 = *(int *)0xC175C80, (int)t144 > 0)) {
                                    t146 = 0x1;
                                }
                                *(unsigned int *)0xC175C80 = ((*(int *)0xC175C80) + (t143 - t146));
                                break;
                            case 2:
                                t117 = 0x0;
                                if (((0x10 & t55) != 0) && (t114 = (((struct oC_int *)0xC12FDA4)->v), (int)t114 < (int)0x63)) {
                                    t117 = 0x1;
                                }
                                t120 = 0x0;
                                if (((0x20 & t55) != 0) && (t118 = (((struct oC_int *)0xC12FDA4)->v), (int)t118 > 0)) {
                                    t120 = 0x1;
                                }
                                (((struct oC_uint *)0xC12FDA4)->v) = (((((struct oC_int *)0xC12FDA4)->v)) + (t117 - t120));
                                if ((((((struct o4_int *)0xC1EC78C)->v)) & 0x10000) != 0) {
                                    *(unsigned int *)((((((((struct oC_int *)0xC12FDA4)->v)) * 0x3D0) + ((((struct o8_int *)0xC2ADA5C)->v))) + 0x0)) = (*(int *)0xC175C80);
                                    t128 = 0xC1758B4;
                                    t130 = (((((((struct oC_int *)0xC12FDA4)->v)) * 0x3D0) + ((((struct o8_int *)0xC2ADA5C)->v))) + 0x4);
                                    for (;;) { t131 = *(int *)t128; t128 = (t128 + 4); if ((unsigned int)((0xC1758B4 + 972)) < (unsigned int)t128) break; *(unsigned int *)t130 = t131; t130 = (t130 + 4); }
                                }
                                break;
                            }
                        }
                        t293 = t55;
                    } else {
                        if (t66 != 0) {
                            if (t66 != 1) {
                                if (t66 != 2) {
                                    if (t66 != 3) {
                                        t293 = t55;
                                        if (t66 == 4) {
                                            t211 = (((struct o8_int *)0xC12FDA4)->v);
                                            t217 = 0x0;
                                            if (((0x10 & t55) != 0) && (t213 = *(int *)(((((((t211 << 2) << 1) + t211) << 2) + t38) + 0x0)), t214 = (((struct oC_int *)0xC12D298)->v), (int)t213 < (int)(t214 - 1))) {
                                                t217 = 0x1;
                                            }
                                            t220 = 0x0;
                                            if (((0x20 & t55) != 0) && (t219 = *(int *)(((((((t211 << 2) << 1) + t211) << 2) + t38) + 0x0)), (int)t219 > 0)) {
                                                t220 = 0x1;
                                            }
                                            *(unsigned int *)(((((((t211 << 2) << 1) + t211) << 2) + t38) + 0x0)) = ((*(int *)(((((((t211 << 2) << 1) + t211) << 2) + t38) + 0x0))) + (t217 - t220));
                                            t293 = (((((t211 << 2) << 1) + t211) << 2) + t38);
                                        }
                                    } else {
                                        t228 = (((struct o8_int *)0xC12FDA4)->v);
                                        t233 = 0x0;
                                        if (((0x10 & t55) != 0) && (t230 = *(int *)(((((((t228 << 2) << 1) + t228) << 2) + t38) + 0x8)), (int)t230 < (int)0x63)) {
                                            t233 = 0x1;
                                        }
                                        t235 = 0x0;
                                        if (((0x20 & t55) != 0) && (t234 = *(int *)(((((((t228 << 2) << 1) + t228) << 2) + t38) + 0x8)), (int)t234 > 0)) {
                                            t235 = 0x1;
                                        }
                                        *(unsigned int *)(((((((t228 << 2) << 1) + t228) << 2) + t38) + 0x8)) = ((*(int *)(((((((t228 << 2) << 1) + t228) << 2) + t38) + 0x8))) + (t233 - t235));
                                        t293 = (((((t228 << 2) << 1) + t228) << 2) + t38);
                                    }
                                } else {
                                    t243 = (((struct o8_int *)0xC12FDA4)->v);
                                    t248 = 0x0;
                                    if (((0x10 & t55) != 0) && (t245 = *(int *)(((((((t243 << 2) << 1) + t243) << 2) + t38) + 0x4)), (int)t245 < (int)0x1)) {
                                        t248 = 0x1;
                                    }
                                    t250 = 0x0;
                                    if (((0x20 & t55) != 0) && (t249 = *(int *)(((((((t243 << 2) << 1) + t243) << 2) + t38) + 0x4)), (int)t249 > 0)) {
                                        t250 = 0x1;
                                    }
                                    *(unsigned int *)(((((((t243 << 2) << 1) + t243) << 2) + t38) + 0x4)) = ((*(int *)(((((((t243 << 2) << 1) + t243) << 2) + t38) + 0x4))) + (t248 - t250));
                                    t293 = (((((t243 << 2) << 1) + t243) << 2) + t38);
                                }
                            } else {
                                t262 = 0x0;
                                if (((0x10 & t55) != 0) && (t258 = *(int *)(((int)stk + 36)), t259 = (((struct o8_int *)0xC12FDA4)->v), (int)t259 < (int)(t258 - 1))) {
                                    t262 = 0x1;
                                }
                                t266 = 0x0;
                                if (((0x20 & t55) != 0) && (t264 = (((struct o8_int *)0xC12FDA4)->v), (int)t264 > 0)) {
                                    t266 = 0x1;
                                }
                                (((struct o8_uint *)0xC12FDA4)->v) = (((((struct o8_int *)0xC12FDA4)->v)) + (t262 - t266));
                                t293 = t55;
                            }
                        } else {
                            t276 = 0x0;
                            if (((0x10 & t55) != 0) && (t273 = (((struct o10_int *)0xC12FDA4)->v), (int)t273 < (int)0x1)) {
                                t276 = 0x1;
                            }
                            t279 = 0x0;
                            if (((0x20 & t55) != 0) && (t277 = (((struct o10_int *)0xC12FDA4)->v), (int)t277 > 0)) {
                                t279 = 0x1;
                            }
                            (((struct o10_uint *)0xC12FDA4)->v) = (((((struct o10_int *)0xC12FDA4)->v)) + (t276 - t279));
                            t293 = t55;
                        }
                    }
                }
                t294 = (((struct o10_int *)0xC12FDA4)->v);
                *(unsigned int *)(((int)stk + 56)) = 0xC1EC78C;
                t295 = (((struct o4_int *)0xC1EC78C)->v);
                if (((0x200 & t295) == 0) && ((0x20000 & t295) == 0)) {
                    if (t294 == 0) {
                        *(unsigned int *)(((int)stk + 44)) = 0x0;
                        *(unsigned int *)(((int)stk + 32)) = (0x0 + t38);
                        *(unsigned int *)(((int)stk + 40)) = (0x0 + t38);
                        if ((int)(*(int *)(((int)stk + 36))) > 0) {
                            t301 = 0xC12FDB4;
                            t302 = (0x0 + t38);
                            t303 = t295;
                            t304 = t293;
                            t305 = t66;
                            for (;;) {
                                if ((((((struct o0_int *)0xC2ADA5C)->v)) == ((*(int *)(((*(int *)(((int)stk + 40))) + 0x0))) - 1)) && (t309 = *(int *)(((int)stk + 32)), t310 = *(int *)((t309 + 0x4)), t310 == 0)) {
                                    t302 = 0x4;
                                    t301 = (FUN_0c0476dc(t302, t303, t304, t305));
                                    t302 = 0x7;
                                    t301 = (FUN_0c018b00(t302));
                                } else {
                                    t316 = t302;
                                    t317 = t303;
                                    t318 = t304;
                                    t319 = t305;
                                }
                                t302 = t316;
                                t303 = t317;
                                t304 = t318;
                                t305 = t319;
                                *(unsigned int *)(((int)stk + 44)) = ((*(int *)(((int)stk + 44))) + 0x1);
                                *(unsigned int *)(((int)stk + 32)) = ((*(int *)(((int)stk + 32))) + 0x24);
                                *(unsigned int *)(((int)stk + 40)) = ((*(int *)(((int)stk + 40))) + 0x24);
                                t301 = (*(int *)(((int)stk + 44)));
                                if ((int)t301 >= (int)(*(int *)(((int)stk + 36)))) {
                                    break;
                                }
                            }
                        }
                    }
                    (((struct o30_uint *)0xC1EC71C)->v) = (((((struct o30_int *)0xC1EC71C)->v)) - 1);
                    nlLocate(0x1E, 0x37);
                    t344 = ((((struct o8_int *)0xC12D298)->v));
                    *(int *)((int)stk + 28) = t344;
                    t345 = (((struct o10_int *)0xC12FDA4)->v);
                    *(int *)((int)stk + 24) = (((t345 << 2) << 2) + (((int)stk + 28) + 0x3C));
                    *(int *)((int)stk + 20) = 0xC0F341C;
                    nlPrintf(0xC0F341C, (((t345 << 2) << 2) + (((int)stk + 28) + 0x3C)), t344);
                    t347 = (((struct o10_int *)0xC12FDA4)->v);
                    if (t347 != 0) {
                        if (t347 != 1) {
                        } else {
                            t349 = (*(int *)0xC175C80);
                            *(int *)((int)stk + 28) = t349;
                            *(int *)((int)stk + 24) = 0xC0F3490;
                            nlPrintf(0xC0F3490, t349);
                            t354 = (*(int *)((((((((struct oC_int *)0xC12FDA4)->v)) * 0x3D0) + ((((struct o8_int *)0xC2ADA5C)->v))) + 0x0)));
                            *(int *)((int)stk + 20) = t354;
                            t356 = ((((struct oC_int *)0xC12FDA4)->v));
                            *(int *)((int)stk + 16) = t356;
                            *(int *)((int)stk + 12) = 0xC0F34A4;
                            nlPrintf(0xC0F34A4, t356, t354);
                            *(int *)((int)stk + 8) = 0x3CC;
                            *(int *)((int)stk + 4) = 0x3D0;
                            *(int *)((int)stk + 0) = 0xC0F34C4;
                            nlPrintf(0xC0F34C4, 0x3D0, 0x3CC);
                        }
                    } else {
                        t363 = ((((struct o8_int *)0xC12FDA4)->v));
                        *(int *)((int)stk + 28) = t363;
                        *(int *)((int)stk + 24) = 0xC0F3428;
                        nlPrintf(0xC0F3428, t363);
                        t365 = (((struct o8_int *)0xC12FDA4)->v);
                        t368 = (*(int *)(((((((t365 << 2) << 1) + t365) << 2) + t38) + 0x4)));
                        *(int *)((int)stk + 20) = t368;
                        *(int *)((int)stk + 16) = 0xC0F343C;
                        nlPrintf(0xC0F343C, t368);
                        t370 = (((struct o8_int *)0xC12FDA4)->v);
                        *(unsigned int *)(((int)stk + 52)) = (((((t370 << 2) << 1) + t370) << 2) + t38);
                        t372 = *(int *)(((((((t370 << 2) << 1) + t370) << 2) + t38) + 0x8));
                        *(unsigned int *)(((int)stk + 32)) = t372;
                        t375 = (*(int *)((((t372 * 0x3D0) + ((((struct o8_int *)0xC2ADA5C)->v))) + 0x0)));
                        *(int *)((int)stk + 12) = t375;
                        t377 = (*(int *)(((int)stk + 32)));
                        *(int *)((int)stk + 8) = t377;
                        *(int *)((int)stk + 4) = 0xC0F3450;
                        nlPrintf(0xC0F3450, t377, t375);
                        t379 = (((struct o8_int *)0xC12FDA4)->v);
                        if ((int)(((((struct o8_int *)0xC12FDA4)->v)) + 0x1) < (int)(*(int *)(((int)stk + 36)))) {
                            t386 = (*(int *)(((((((t379 << 2) << 1) + t379) << 2) + t38) + 0x24)));
                        } else {
                            t386 = ((((struct oC_int *)0xC12D298)->v));
                        }
                        *(int *)((int)stk + 28) = (t386);
                        *(unsigned int *)(((int)stk + 48)) = (((((t379 << 2) << 1) + t379) << 2) + t38);
                        t389 = *(int *)(((((((t379 << 2) << 1) + t379) << 2) + t38) + 0x0));
                        *(unsigned int *)(((int)stk + 32)) = t389;
                        *(int *)((int)stk + 24) = (t389);
                        t391 = (((struct o0_int *)0xC2ADA5C)->v);
                        t392 = *(int *)(((int)stk + 32));
                        *(int *)((int)stk + 20) = (t391 - t392);
                        t394 = ((((struct o0_int *)0xC2ADA5C)->v));
                        *(int *)((int)stk + 16) = t394;
                        *(int *)((int)stk + 12) = 0xC0F3470;
                        nlPrintf(0xC0F3470, t394, (t391 - t392));
                    }
                    if ((((((struct o18_int *)0xC12FDA4)->v)) != 0) && (t401 = (((struct o0_int *)0xC1EC83C)->v), (t401 & 8) == 0)) {
                    } else {
                        nlLocate(0x1E, (((((struct o14_int *)0xC12FDA4)->v)) + 0x37));
                        *(int *)((int)stk + 28) = 0xC0F34E4;
                        nlPrintf(0xC0F34E4);
                    }
                    FUN_0c073360();
                    FUN_0c0739a0((((((struct oC_int *)0xC2ADA5C)->v)) + 0x84));
                    nlRotateAY((((((((struct o0_int *)0xC1EC83C)->v)) << 2) << 2) << 2));
                    nlObjPutUseViewMatrix(0xC4F5620);
                    nlPopMatrix(0x1);
                    t688 = 0x0;
                } else {
                    if (t294 == 0) {
                        if ((*(int *)(((int)stk + 32))) == 1) {
                            FUN_0c047624(0x1);
                        } else {
                            if ((*(int *)(((int)stk + 32))) == 2) {
                                FUN_0c047624(0x2);
                            } else {
                                t461 = t295;
                                t462 = t293;
                                t463 = t66;
                            }
                        }
                        t440 = (((struct o8_int *)0xC12FDA4)->v);
                        t442 = *(int *)(((((((t440 << 2) << 1) + t440) << 2) + t38) + 0x0));
                        (((struct o0_uint *)0xC2ADA5C)->v) = t442;
                        (((struct oC_uint *)0xC1EC83C)->v) = t442;
                        *(unsigned int *)0xC175C80 = (*(int *)(((((*(int *)(((((((t440 << 2) << 1) + t440) << 2) + t38) + 0x8))) * 0x3D0) + ((((struct o8_int *)0xC2ADA5C)->v))) + 0x0)));
                    } else {
                        if (t294 == 1) {
                            FUN_0c047624(0x0);
                            (((struct oC_uint *)0xC1EC83C)->v) = 0x0;
                            (((struct o0_uint *)0xC2ADA5C)->v) = 0x0;
                        } else {
                            t461 = t295;
                            t462 = t293;
                            t463 = t66;
                        }
                    }
                    *(unsigned char *)0xC1EC87C = 0x1;
                    t466 = 0x2;
                    if ((((((struct o4_int *)0xC1EC78C)->v)) & 0x200) != 0) {
                        t466 = 0x3;
                    }
                    FUN_0c0476dc(t466, t461, t462, t463);
                    *(unsigned int *)(((int)stk + 32)) = 0xC01D69C;
                    FUN_0c01d69c();
                    if (((((struct o10_int *)0xC12FDA4)->v)) == 0) {
                        *(unsigned int *)(((int)stk + 40)) = (((int)stk + 32) + 0x1C);
                        *(unsigned int *)(((((int)stk + 32) + 0x1C) + 0x0)) = ((((struct o2C_int *)0xC1758B0)->v));
                        *(unsigned int *)(((int)stk + 36)) = ((((int)stk + 32) + 0x1C) + 0x4);
                        *(unsigned int *)((((((int)stk + 32) + 0x1C) + 0x4) + 0x0)) = ((((struct o30_int *)0xC1758B0)->v));
                        *(unsigned int *)(((int)stk + 32)) = ((((int)stk + 32) + 0x1C) + 0x8);
                        *(unsigned int *)((((((int)stk + 32) + 0x1C) + 0x8) + 0x0)) = ((((struct o1C_int *)0xC175908)->v));
                        *(unsigned int *)((((((int)stk + 32) + 0x1C) + 0xC) + 0x0)) = ((((struct o20_int *)0xC175908)->v));
                        *(unsigned int *)((((((int)stk + 32) + 0x1C) + 0x10) + 0x0)) = ((((struct o24_int *)0xC175908)->v));
                        t476 = (((struct o8_int *)0xC12FDA4)->v);
                        t478 = (((struct o8_int *)0xC2ADA5C)->v);
                        t479 = *(int *)(((((((t476 << 2) << 1) + t476) << 2) + t38) + 0x8));
                        t480 = (((t479 * 0x3D0) + t478) + 0x4);
                        t482 = 0xC1758B4;
                        for (;;) { t483 = *(int *)t480; t480 = (t480 + 4); if ((unsigned int)(((((t479 * 0x3D0) + t478) + 0x4) + 972)) < (unsigned int)t480) break; *(unsigned int *)t482 = t483; t482 = (t482 + 4); }
                        (((struct o2C_uint *)0xC1758B0)->v) = (*(int *)(((*(int *)(((int)stk + 40))) + 0x0)));
                        (((struct o30_uint *)0xC1758B0)->v) = (*(int *)(((*(int *)(((int)stk + 36))) + 0x0)));
                        (((struct o1C_uint *)0xC175908)->v) = (*(int *)(((*(int *)(((int)stk + 32))) + 0x0)));
                        (((struct o20_uint *)0xC175908)->v) = (*(int *)((((((int)stk + 32) + 0x1C) + 0xC) + 0x0)));
                        (((struct o24_uint *)0xC175908)->v) = (*(int *)((((((int)stk + 32) + 0x1C) + 0x10) + 0x0)));
                    }
                    SetAdvCamera(0xC177D38, 0x0);
                    FUN_0c018b00(0x0);
                    t688 = 0x1;
                }
            } else {
                if ((((((struct o0_int *)0xC12D298)->v)) & 0x1) != 0) {
                    if (((((struct o0_int *)0xC2ADA5C)->v)) != 0) {
                    } else {
                        (((struct o4_uint *)0xC12D298)->v) = 0x1;
                    }
                    t688 = 0x0;
                } else {
                    if (((((struct o0_int *)0xC2ADA5C)->v)) == 0) {
                        (((struct oC_uint *)0xC1EC83C)->v) = 0x0;
                    }
                    if ((((((struct o8_int *)0xC12FDA4)->v)) == 0) && (t516 = (((struct o0_int *)0xC2AC2F4)->v), t516 == 1)) {
                        (((struct o0_uint *)0xC175908)->v) = 0x1;
                    }
                    t520 = (((struct o8_int *)0xC12FDA4)->v);
                    if (((((struct o0_int *)0xC2AC2F4)->v)) != 1) {
                        FUN_0c047cb6(((((struct o8_int *)0xC2ADA5C)->v)), (t38 + ((((t520 << 2) << 1) + t520) << 2)), ((((struct o8_int *)0xC12FDA4)->v)), 0x0, *(int *)((int)stk + 32), *(int *)((int)stk + 32 + 4), *(int *)((int)stk + 32 + 8), *(int *)((int)stk + 32 + 12), *(int *)((int)stk + 32 + 16), *(int *)((int)stk + 32 + 20), *(int *)((int)stk + 32 + 24), *(int *)((int)stk + 32 + 28));
                    } else {
                        t543 = 0;
                        if (((((struct o8_int *)0xC12FDA4)->v)) == 12) {
                            u528 = *(float *)0xC175A14;
                            if (!(_builtin_fabsf(u528) > 0.150000006f)) {
                                FUN_0c060210(0x0);
                            } else {
                                _builtin_fabsf(u528);
                            }
                            t543 = ((_builtin_fabsf(u528) > 0.150000006f));
                        } else {
                            t543 = (0);
                        }
                        (((struct o0_uint *)0xC1758B0)->v) = 0x3;
                        if ((int)((((struct oC_int *)0xC1EC83C)->v)) >= (int)((*(int *)(((t38 + ((((t520 << 2) << 1) + t520) << 2)) + 0x0))) - 200)) {
                            t546 = *(int *)(((t38 + ((((t520 << 2) << 1) + t520) << 2)) + 0x18));
                            t548 = (((struct oC_int *)0xC2ADA5C)->v);
                            *(unsigned int *)(((int)stk + 32)) = ((((t546 << 1) + t546) << 2) + t548);
                            if (((((struct o8_int *)0xC12FDA4)->v)) == 11) {
                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)(((((t546 << 1) + t546) << 2) + t548)); }
                                u551 = 850.0f;
                            } else {
                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)(((((t546 << 1) + t546) << 2) + t548)); }
                                u551 = 450.0f;
                            }
                            gdc_CoursePointLoadReq(*(Stk3 *)(((int)stk + 20)), u551);
                        }
                        if ((int)((((struct oC_int *)0xC1EC83C)->v)) >= (int)((*(int *)(((t38 + ((((t520 << 2) << 1) + t520) << 2)) + 0x0))) - 150)) {
                            t563 = *(int *)(((t38 + ((((t520 << 2) << 1) + t520) << 2)) + 0x18));
                            t565 = (((struct oC_int *)0xC2ADA5C)->v);
                            *(unsigned int *)(((int)stk + 32)) = ((((t563 << 1) + t563) << 2) + t565);
                            if (((((struct o8_int *)0xC12FDA4)->v)) == 11) {
                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)(((((t563 << 1) + t563) << 2) + t565)); }
                                u568 = 1700.0f;
                            } else {
                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)(((((t563 << 1) + t563) << 2) + t565)); }
                                u568 = 900.0f;
                            }
                            gdc_CoursePointLoadReq(*(Stk3 *)(((int)stk + 20)), u568);
                        }
                    }
                    t688 = 0x0;
                    if ((int)((((struct oC_int *)0xC1EC83C)->v)) < (int)(*(int *)(((t38 + ((((t520 << 2) << 1) + t520) << 2)) + 0x0)))) {
                    } else {
                        (((struct o8_uint *)0xC12FDA4)->v) = (((((struct o8_int *)0xC12FDA4)->v)) + 0x1);
                        if ((*(int *)(((t38 + ((((t520 << 2) << 1) + t520) << 2)) + 0x4))) == 1) {
                            if ((*(int *)(((t38 + ((((t520 << 2) << 1) + t520) << 2)) + 0xC))) == 0) {
                                SetAdvCamera(0xC177D38, 0x0);
                                FUN_0c018b00(0x0);
                            } else {
                                SetAdvCamera(0xC177D38, (*(int *)(((t38 + ((((t520 << 2) << 1) + t520) << 2)) + 0xC))));
                            }
                            t688 = 0x0;
                        } else {
                            (((struct o0_uint *)0xC2ADA5C)->v) = (*(int *)(((t38 + ((((t520 << 2) << 1) + t520) << 2)) + 0x0)));
                            if (((((struct o0_int *)0xC2AC2F4)->v)) == 0) {
                                *(unsigned int *)0xC175C80 = ((((((int)((((struct o4_int *)0xC2AC2F4)->v)) >> 5) << 2) << 1) + (*(int *)(((((*(int *)(((t38 + ((((t520 << 2) << 1) + t520) << 2)) + 0x8))) * 0x3D0) + ((((struct o8_int *)0xC2ADA5C)->v))) + 0x0)))) + ((((int)((((struct o4_int *)0xC2AC2F4)->v)) >> 4) & 0x1) << 2));
                            }
                            *(unsigned char *)0xC1EC87C = 0x1;
                            *(unsigned int *)(((int)stk + 32)) = 0xC01D69C;
                            FUN_0c01d69c();
                            *(unsigned int *)(((((int)stk + 32) + 0x1C) + 0x0)) = ((((struct o2C_int *)0xC1758B0)->v));
                            *(unsigned int *)(((int)stk + 32)) = ((((int)stk + 32) + 0x1C) + 0x4);
                            *(unsigned int *)((((((int)stk + 32) + 0x1C) + 0x4) + 0x0)) = ((((struct o30_int *)0xC1758B0)->v));
                            *(unsigned int *)(((int)stk + 36)) = ((((int)stk + 32) + 0x1C) + 0x8);
                            *(unsigned int *)((((((int)stk + 32) + 0x1C) + 0x8) + 0x0)) = ((((struct o1C_int *)0xC175908)->v));
                            *(unsigned int *)(((int)stk + 40)) = ((((int)stk + 32) + 0x1C) + 0xC);
                            *(unsigned int *)((((((int)stk + 32) + 0x1C) + 0xC) + 0x0)) = ((((struct o20_int *)0xC175908)->v));
                            *(unsigned int *)((((((int)stk + 32) + 0x1C) + 0x10) + 0x0)) = ((((struct o24_int *)0xC175908)->v));
                            t616 = *(int *)(((t38 + ((((t520 << 2) << 1) + t520) << 2)) + 0x8));
                            t617 = (((struct o8_int *)0xC2ADA5C)->v);
                            t618 = (((t616 * 0x3D0) + t617) + 0x4);
                            t620 = 0xC1758B4;
                            for (;;) { t621 = *(int *)t618; t618 = (t618 + 4); if ((unsigned int)(((((t616 * 0x3D0) + t617) + 0x4) + 972)) < (unsigned int)t618) break; *(unsigned int *)t620 = t621; t620 = (t620 + 4); }
                            (((struct o2C_uint *)0xC1758B0)->v) = (*(int *)(((((int)stk + 32) + 0x1C) + 0x0)));
                            (((struct o30_uint *)0xC1758B0)->v) = (*(int *)(((*(int *)(((int)stk + 32))) + 0x0)));
                            (((struct o1C_uint *)0xC175908)->v) = (*(int *)(((*(int *)(((int)stk + 36))) + 0x0)));
                            (((struct o20_uint *)0xC175908)->v) = (*(int *)(((*(int *)(((int)stk + 40))) + 0x0)));
                            (((struct o24_uint *)0xC175908)->v) = (*(int *)((((((int)stk + 32) + 0x1C) + 0x10) + 0x0)));
                            camSnapToCar(0x0);
                            if ((*(int *)(((t38 + ((((t520 << 2) << 1) + t520) << 2)) + 0xC))) == 0) {
                                SetAdvCamera(0xC177D38, 0x0);
                                FUN_0c018b00(0x0);
                            } else {
                                if ((*(int *)(((t38 + ((((t520 << 2) << 1) + t520) << 2)) + 0xC))) == -1) {
                                    SetAdvCamera(0xC177D38, 0x0);
                                    FUN_0c018b00(0x7);
                                } else {
                                    *(unsigned int *)(((int)stk + 32)) = ((((struct oC_int *)0xC2ADA5C)->v));
                                    t639 = *(int *)(((t38 + ((((t520 << 2) << 1) + t520) << 2)) + 0x18));
                                    SetAdvCamera(((((t639 << 1) + t639) << 2) + (*(int *)(((int)stk + 32)))), (*(int *)(((t38 + ((((t520 << 2) << 1) + t520) << 2)) + 0xC))));
                                }
                            }
                            if ((int)(*(int *)(((t38 + ((((t520 << 2) << 1) + t520) << 2)) + 0x10))) < (int)0x23) {
                            } else {
                                if (((((struct o24_int *)0xC1EC71C)->v)) != 0) {
                                    FUN_0c068c94(((t38 + ((((t520 << 2) << 1) + t520) << 2)) + 0x10));
                                } else {
                                    t652 = *(int *)(((t38 + ((((t520 << 2) << 1) + t520) << 2)) + 0x10));
                                    { struct mv5 { int w[5]; }; *(struct mv5 *)((((int)stk + 32) + 0x1C)) = *(struct mv5 *)(((t38 + ((((t520 << 2) << 1) + t520) << 2)) + 0x10)); }
                                    *(unsigned int *)(((int)stk + 60)) = t652;
                                    FUN_0c068c94((((int)stk + 32) + 0x1C));
                                }
                            }
                            t688 = 0x1;
                        }
                    }
                }
            }
        }
        t700 = t688;
    }
    return t700;
}
