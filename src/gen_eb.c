/* Straight-line functions with calls and guards (batch gen_eb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o4_int { char p[0x4]; int v; };
struct o8_int { char p[0x8]; int v; };
struct o88_int { char p[0x88]; int v; };
struct o8C_uint { char p[0x8C]; unsigned int v; };
struct oE0_int { char p[0xE0]; int v; };
struct oE0_uint { char p[0xE0]; unsigned int v; };
struct oE4_uint { char p[0xE4]; unsigned int v; };
struct oFC_int { char p[0xFC]; int v; };
struct oFC_uint { char p[0xFC]; unsigned int v; };
struct oFD_uchar { char p[0xFD]; unsigned char v; };
struct oFE_uchar { char p[0xFE]; unsigned char v; };
struct oFF_uchar { char p[0xFF]; unsigned char v; };
int FUN_0c05bf60(void);
int FUN_0c060298(int, int, int);
int FUN_0c06ac1a(int, int, int, int);
int FUN_0c063a2a(int a4, int a5);

int FUN_0c063a2a(int a4, int a5)
{
    int stk[74];
    register int t0;
    register int t2;
    register int t3;
    register int t36;
    register int t40;
    int t15;
    register int t43;
    register int t79;
    register int t80;
    register int t85;
    register int t93;
    register int t100;
    register int t108;
    register int t109;
    register int t124;
    register int t126;
    register int t130;
    register int t133;
    register int t180;
    register int t181;
    register int t186;
    register int t194;
    register int t201;
    register int t209;
    register int t210;
    register int t225;
    register int t227;
    register int t230;
    register int t233;
    register int t235;
    register int t238;
    register int t254;
    register int t255;
    register int t257;
    register int t259;
    register int t261;
    register int t263;
    register int t264;
    register int t265;
    register int t274;
    int t276;
    register int t277;
    register int t278;
    register int t279;
    register int t280;
    register int t281;
    register int t288;
    register int t309;
    register int t313;
    register int t320;
    register int t333;
    register int t348;
    register int t357;
    register int t370;
    register int t391;
    register int t400;
    register int t401;
    register int t402;
    register int t404;
    register int t407;
    register int t409;
    register int t411;
    register int t412;
    register int t413;
    register int t421;
    register int t422;
    register int t568;
    register int t569;
    register int t574;
    register int t582;
    register int t589;
    register int t597;
    register int t598;
    register int t613;
    register int t615;
    register int t675;
    register int t676;
    register int t681;
    register int t689;
    register int t696;
    register int t704;
    register int t705;
    register int t720;
    register int t722;
    register int t725;
    register int t726;
    register int t727;
    register int t728;
    register int t729;
    register int t730;
    register int t754;
    register int t755;
    register int t807;
    register int t760;
    register int t762;
    register int t787;
    register int t747;
    register int t750;
    register int t637;
    register int t640;
    register int t258;
    register int t262;
    register int t266;
    register int t289;
    register int t290;
    register int t291;
    register int t396;
    register int t397;
    register int t405;
    register int t410;
    register int t414;
    register int t718;

    t0 = 0xFFFFFEDC;
    t2 = 0x0;
    t3 = a5;
    for (;;) {
        if ((int)t2 >= (int)(*(int *)((a4 + 0x4)))) {
            break;
        }
        t36 = (*(int *)((a4 + 0x0)));
        t3 = t2;
        t0 = 0xE0;
        t3 = (t3 << 8);
        t36 = (t36 + t3);
        *(unsigned int *)((t36 + t0)) = 0x0;
        t0 = (t0 + 0x4);
        t2 = (t2 + 0x1);
        t3 = (t3 + (*(int *)((a4 + 0x0))));
        *(unsigned int *)((t3 + t0)) = 0x0;
    }
    *(unsigned int *)(((int)stk + 20)) = ((*(int *)(((*(int *)((a4 + 0x0))) + 0x10))) - 62);
    t40 = 0x0;
    if (((*(int *)((a4 + 0x14))) & 1) == 0) {
        t36 = 0x1;
        t40 = 0x1;
        if ((int)(*(int *)((a4 + 0x8))) > (int)0x1) {
        } else {
            t40 = 0x0;
            if ((*(int *)((a4 + 0x14))) == 0) {
                t15 = FUN_0c05bf60();
                t40 = 0x0;
                if ((0x1 & t15) != 0) {
                    t40 = 0x1;
                }
            } else {
                t36 = 0x1;
            }
        }
    }
    *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 20))) << 2);
    *(unsigned int *)(((int)stk + 4)) = 0xC13B2FC;
    *(unsigned int *)(((int)stk + 8)) = 0xC13B144;
    t43 = *(int *)((a4 + 0x4));
    if (t43 != 4) {
        if (t43 == 3) {
            if (a5 == 0) {
                if (t40 != 0) {
                    if ((*(int *)((a4 + 0x14))) == 0) {
                        *(unsigned int *)(((int)stk + 4)) = (*(int *)(((*(int *)(((a5 << 2) + (*(int *)(((*(int *)(((int)stk + 4))) + (*(int *)(((int)stk + 16))))))))) + 0x8)));
                        *(unsigned int *)(((int)stk + 8)) = (*(int *)(((*(int *)(((a5 << 2) + (*(int *)((0xC13B30C + (*(int *)(((int)stk + 16))))))))) + 0x8)));
                    } else {
                        if ((*(int *)((a4 + 0x14))) == 2) {
                            *(unsigned int *)(((int)stk + 4)) = (*(int *)(((*(int *)((0xC13B1EC + (a5 << 2)))) + 0x8)));
                            *(unsigned int *)(((int)stk + 8)) = (*(int *)(((*(int *)((0xC13B1F4 + (a5 << 2)))) + 0x8)));
                        }
                    }
                    t79 = (int)((int)(FUN_0c05bf60()) % (int)(*(int *)(((int)stk + 8))));
                    t80 = *(int *)(((int)stk + 4));
                    (((struct oE0_uint *)(((*(int *)((a4 + 0x0))) + 0x200)))->v) = (*(int *)(((t80 + ((t79 << 2) << 1)) + 0x0)));
                    (((struct oE4_uint *)(((*(int *)((a4 + 0x0))) + 0x200)))->v) = 0x0;
                    t85 = *(int *)((a4 + 0x0));
                    (((struct oFD_uchar *)((t85 + 0x200)))->v) = ((*(signed char *)(((0xFD + (t85 + 0x200)) + 0x0))) | 0x80);
                    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((t80 + ((t79 << 2) << 1)) + 0x4)));
                    t640 = 0x0;
                } else {
                    *(unsigned int *)(((int)stk + 4)) = (a5 << 2);
                    *(unsigned int *)(((int)stk + 8)) = (*(int *)(((*(int *)(((a5 << 2) + (*(int *)(((int)stk + 8)))))) + 0x8)));
                    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((*(int *)((((a5 << 2) + 0xC13B14C) + 0x0))) + 0x8)));
                    t93 = *(int *)((a4 + 0x0));
                    *(int *)((int)stk + 0) = (0xE0 + (t93 + 0x200));
                    (((struct oE0_uint *)((t93 + 0x200)))->v) = (*(int *)(((*(int *)(((int)stk + 8))) + (((int)((int)(FUN_0c05bf60()) % (int)(*(int *)(((int)stk + 20))))) << 2))));
                    t100 = *(int *)((a4 + 0x14));
                    *(unsigned int *)(((int)stk + 8)) = (*(int *)(((t100 << 2) + (*(int *)(((*(int *)(((int)stk + 4))) + 0xC13B16C))))));
                    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((t100 << 2) + (*(int *)(((*(int *)(((int)stk + 4))) + 0xC13B174))))));
                    t108 = (int)((int)(FUN_0c05bf60()) % (int)(*(int *)(((int)stk + 20))));
                    t109 = *(int *)(((int)stk + 8));
                    (((struct oE4_uint *)(((*(int *)((a4 + 0x0))) + 0x200)))->v) = (*(int *)(((t109 + ((t108 << 2) << 1)) + 0x0)));
                    *(unsigned int *)(((int)stk + 20)) = (*(int *)((((*(int *)((a4 + 0x14))) << 2) + (*(int *)(((*(int *)(((int)stk + 4))) + 0xC13B31C))))));
                    t640 = (*(int *)(((t109 + ((t108 << 2) << 1)) + 0x4)));
                }
                t124 = *(int *)((a4 + 0x0));
                (((struct oFE_uchar *)((t124 + 0x200)))->v) = ((*(signed char *)(((0xFE + (t124 + 0x200)) + 0x0))) | 0x80);
                t126 = *(int *)((a4 + 0x0));
                (((struct oFC_uint *)((t126 + 0x200)))->v) = ((((((struct oFC_int *)((t126 + 0x200)))->v)) & 0xFFFDFFFF) | ((unsigned int)((int)((unsigned int)(((a5 == 0)) ? 1 : 0) & 0x1)) << 17));
                (((struct o8C_uint *)((*(int *)((a4 + 0x0)))))->v) = 0x5;
                t130 = *(int *)((a4 + 0x0));
                (((struct oFF_uchar *)(t130))->v) = ((*(signed char *)(((0xFF + t130) + 0x0))) | 0x20);
                (((struct o8C_uint *)(((*(int *)((a4 + 0x0))) + 0x100)))->v) = 0x4;
                t133 = *(int *)((a4 + 0x0));
                (((struct oFF_uchar *)((t133 + 0x100)))->v) = ((*(signed char *)(((0xFF + (t133 + 0x100)) + 0x0))) | 0x20);
                if ((*(int *)((a4 + 0x14))) == 0) {
                    (((struct oE0_uint *)((*(int *)((a4 + 0x0)))))->v) = 0xCB18980;
                    (((struct oE4_uint *)((*(int *)((a4 + 0x0)))))->v) = 0x0;
                    (((struct oE0_uint *)(((*(int *)((a4 + 0x0))) + 0x100)))->v) = 0xCB196BC;
                    t637 = 0xCB196BC;
                } else {
                    (((struct oE0_uint *)((*(int *)((a4 + 0x0)))))->v) = ((((struct o0_int *)0xC10EF34)->v));
                    (((struct oE4_uint *)((*(int *)((a4 + 0x0)))))->v) = 0x0;
                    t637 = (((struct o4_int *)0xC10EF34)->v);
                    (((struct oE0_uint *)(((*(int *)((a4 + 0x0))) + 0x100)))->v) = t637;
                }
                (((struct oE4_uint *)(((*(int *)((a4 + 0x0))) + 0x100)))->v) = 0x0;
            } else {
                if (t40 != 0) {
                    if ((*(int *)((a4 + 0x14))) == 0) {
                        *(unsigned int *)(((int)stk + 4)) = (*(int *)(((*(int *)(((a5 << 2) + (*(int *)(((*(int *)(((int)stk + 4))) + (*(int *)(((int)stk + 16))))))))) + 0x4)));
                        *(unsigned int *)(((int)stk + 8)) = (*(int *)(((*(int *)(((a5 << 2) + (*(int *)((0xC13B30C + (*(int *)(((int)stk + 16))))))))) + 0x4)));
                    } else {
                        if ((*(int *)((a4 + 0x14))) == 2) {
                            *(unsigned int *)(((int)stk + 4)) = (*(int *)(((*(int *)((0xC13B1EC + (a5 << 2)))) + 0x4)));
                            *(unsigned int *)(((int)stk + 8)) = (*(int *)(((*(int *)((0xC13B1F4 + (a5 << 2)))) + 0x4)));
                        }
                    }
                    t180 = (int)((int)(FUN_0c05bf60()) % (int)(*(int *)(((int)stk + 8))));
                    t181 = *(int *)(((int)stk + 4));
                    (((struct oE0_uint *)(((*(int *)((a4 + 0x0))) + 0x100)))->v) = (*(int *)(((t181 + ((t180 << 2) << 1)) + 0x0)));
                    (((struct oE4_uint *)(((*(int *)((a4 + 0x0))) + 0x100)))->v) = 0x0;
                    t186 = *(int *)((a4 + 0x0));
                    (((struct oFD_uchar *)((t186 + 0x100)))->v) = ((*(signed char *)(((0xFD + (t186 + 0x100)) + 0x0))) | 0x80);
                    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((t181 + ((t180 << 2) << 1)) + 0x4)));
                    t640 = 0x0;
                } else {
                    *(unsigned int *)(((int)stk + 4)) = (a5 << 2);
                    *(unsigned int *)(((int)stk + 8)) = (*(int *)(((*(int *)(((a5 << 2) + (*(int *)(((int)stk + 8)))))) + 0x4)));
                    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((*(int *)((((a5 << 2) + 0xC13B14C) + 0x0))) + 0x4)));
                    t194 = *(int *)((a4 + 0x0));
                    *(int *)((int)stk + 0) = (0xE0 + (t194 + 0x100));
                    (((struct oE0_uint *)((t194 + 0x100)))->v) = (*(int *)(((*(int *)(((int)stk + 8))) + (((int)((int)(FUN_0c05bf60()) % (int)(*(int *)(((int)stk + 20))))) << 2))));
                    t201 = *(int *)((a4 + 0x14));
                    *(unsigned int *)(((int)stk + 8)) = (*(int *)(((t201 << 2) + (*(int *)(((*(int *)(((int)stk + 4))) + 0xC13B16C))))));
                    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((t201 << 2) + (*(int *)(((*(int *)(((int)stk + 4))) + 0xC13B174))))));
                    t209 = (int)((int)(FUN_0c05bf60()) % (int)(*(int *)(((int)stk + 20))));
                    t210 = *(int *)(((int)stk + 8));
                    (((struct oE4_uint *)(((*(int *)((a4 + 0x0))) + 0x100)))->v) = (*(int *)(((t210 + ((t209 << 2) << 1)) + 0x0)));
                    *(unsigned int *)(((int)stk + 20)) = (*(int *)((((*(int *)((a4 + 0x14))) << 2) + (*(int *)(((*(int *)(((int)stk + 4))) + 0xC13B31C))))));
                    t640 = (*(int *)(((t210 + ((t209 << 2) << 1)) + 0x4)));
                }
                t225 = *(int *)((a4 + 0x0));
                (((struct oFE_uchar *)((t225 + 0x100)))->v) = ((*(signed char *)(((0xFE + (t225 + 0x100)) + 0x0))) | 0x80);
                t227 = *(int *)((a4 + 0x0));
                (((struct oFC_uint *)((t227 + 0x100)))->v) = ((((((struct oFC_int *)((t227 + 0x100)))->v)) & 0xFFFDFFFF) | ((unsigned int)((int)((unsigned int)(((a5 == 0)) ? 1 : 0) & 0x1)) << 17));
                t230 = *(int *)((a4 + 0x0));
                (((struct oFE_uchar *)(t230))->v) = ((*(signed char *)(((0xFE + t230) + 0x0))) & 0x7F);
                (((struct o8C_uint *)((*(int *)((a4 + 0x0)))))->v) = 0x4;
                t233 = *(int *)((a4 + 0x0));
                (((struct oFF_uchar *)(t233))->v) = ((*(signed char *)(((0xFF + t233) + 0x0))) | 0x20);
                t235 = *(int *)((a4 + 0x0));
                (((struct oFE_uchar *)((t235 + 0x200)))->v) = ((*(signed char *)(((0xFE + (t235 + 0x200)) + 0x0))) & 0x7F);
                (((struct o8C_uint *)(((*(int *)((a4 + 0x0))) + 0x200)))->v) = 0x5;
                t238 = *(int *)((a4 + 0x0));
                (((struct oFF_uchar *)((t238 + 0x200)))->v) = ((*(signed char *)(((0xFF + (t238 + 0x200)) + 0x0))) | 0x20);
                if ((*(int *)((a4 + 0x14))) == 0) {
                    (((struct oE0_uint *)((*(int *)((a4 + 0x0)))))->v) = 0xCB1A2D0;
                    (((struct oE4_uint *)((*(int *)((a4 + 0x0)))))->v) = 0x0;
                    (((struct oE0_uint *)(((*(int *)((a4 + 0x0))) + 0x200)))->v) = 0xCB1AE58;
                } else {
                    (((struct oE0_uint *)((*(int *)((a4 + 0x0)))))->v) = ((((struct o0_int *)0xC10EF34)->v));
                    (((struct oE4_uint *)((*(int *)((a4 + 0x0)))))->v) = 0x0;
                    (((struct oE0_uint *)(((*(int *)((a4 + 0x0))) + 0x200)))->v) = ((((struct o8_int *)0xC10EF34)->v));
                }
                (((struct oE4_uint *)(((*(int *)((a4 + 0x0))) + 0x200)))->v) = 0x0;
                t254 = *(int *)((a4 + 0x0));
                t255 = (t254 + 0x100);
                t257 = (((int)stk + 4) + 0x24);
                for (;;) { t258 = *(int *)t255; t255 = (t255 + 4); if ((unsigned int)(((t254 + 0x100) + 256)) < (unsigned int)t255) break; *(unsigned int *)t257 = t258; t257 = (t257 + 4); }
                t259 = (t254 + 0x200);
                t261 = (t254 + 0x100);
                for (;;) { t262 = *(int *)t259; t259 = (t259 + 4); if ((unsigned int)(((t254 + 0x200) + 256)) < (unsigned int)t259) break; *(unsigned int *)t261 = t262; t261 = (t261 + 4); }
                t263 = (((int)stk + 4) + 0x24);
                t264 = ((((int)stk + 4) + 0x24) + 256);
                t265 = (t254 + 0x200);
                for (;;) { t266 = *(int *)t263; t263 = (t263 + 4); if ((unsigned int)t264 < (unsigned int)t263) break; *(unsigned int *)t265 = t266; t265 = (t265 + 4); }
                t637 = (((int)stk + 4) + 0x24);
            }
        } else {
            if (t43 == 2) {
                t274 = 0x5;
                if (a5 != 0) {
                    t274 = 0x4;
                }
                *(unsigned int *)(((int)stk + 32)) = t274;
                *(unsigned int *)(((int)stk + 36)) = 0x0;
                *(unsigned int *)(((int)stk + 8)) = 0x0;
                *(unsigned int *)(((int)stk + 4)) = (a5 << 2);
                *(unsigned int *)(((int)stk + 12)) = (t274 << 2);
                t276 = t43;
                t277 = (t274 << 2);
                t278 = 0xC13B30C;
                t279 = 0xC13B1F4;
                t280 = 0xC13B14C;
                t281 = 0xC13B1EC;
                for (;;) {
                    if ((int)(*(int *)(((int)stk + 8))) < (int)(*(int *)((a4 + 0x4)))) {
                        t278 = (*(int *)(((int)stk + 8)));
                        t276 = 0x88;
                        t278 = (t278 << 8);
                        t278 = (t278 + (*(int *)((a4 + 0x0))));
                        t277 = (*(int *)(((int)stk + 32)));
                        t288 = *(int *)((t278 + t276));
                        if ((t288 != t277) && (t276 = 0x8C, t289 = *(int *)(((int)stk + 32)), t290 = *(int *)((t278 + t276)), t291 = (t288 == t277), t277 = t290, t277 != t289)) {
                            t278 = (*(int *)(((int)stk + 8)));
                            t276 = 0x8C;
                            t278 = (t278 << 8);
                            *(unsigned int *)((((*(int *)((a4 + 0x0))) + t278) + t276)) = 0x0;
                            t277 = (*(int *)((a4 + 0x0)));
                            t277 = (t277 + t278);
                            t276 = (*(signed char *)(((0xFF + t277) + 0x0)));
                            t276 = (t276 | 0x20);
                            (((struct oFF_uchar *)(t277))->v) = t276;
                            t396 = t280;
                            t397 = t281;
                        } else {
                            if (t40 != 0) {
                                if ((*(int *)((a4 + 0x14))) == 0) {
                                    t276 = 0xC13B2FC;
                                    t276 = (*(int *)(((*(int *)(((int)stk + 16))) + t276)));
                                    t277 = (*(int *)(((int)stk + 12)));
                                    t276 = (*(int *)(((*(int *)(((int)stk + 4))) + t276)));
                                    t309 = *(int *)((t277 + t276));
                                    t276 = 0xC13B30C;
                                    *(unsigned int *)(((int)stk + 24)) = t309;
                                    t277 = (*(int *)(((int)stk + 16)));
                                    t276 = (*(int *)((t277 + t276)));
                                    t313 = *(int *)(((*(int *)(((int)stk + 4))) + t276));
                                    t276 = (*(int *)(((int)stk + 12)));
                                    *(unsigned int *)(((int)stk + 28)) = (*(int *)((t313 + t276)));
                                } else {
                                    t276 = (*(int *)((a4 + 0x14)));
                                    if (t276 == 2) {
                                        t276 = 0xC13B1EC;
                                        t277 = (*(int *)(((int)stk + 4)));
                                        t276 = (*(int *)((t277 + t276)));
                                        t320 = *(int *)(((*(int *)(((int)stk + 12))) + t276));
                                        t276 = 0xC13B1F4;
                                        *(unsigned int *)(((int)stk + 24)) = t320;
                                        t277 = (*(int *)(((int)stk + 4)));
                                        t276 = (*(int *)((t277 + t276)));
                                        *(unsigned int *)(((int)stk + 28)) = (*(int *)(((*(int *)(((int)stk + 12))) + t276)));
                                    }
                                }
                                t276 = (FUN_0c05bf60());
                                t277 = 0xC07FC48;
                                t333 = t276;
                                t276 = (*(int *)(((int)stk + 28)));
                                t276 = ((int)((int)t333 % (int)t276));
                                t278 = (*(int *)(((int)stk + 24)));
                                t276 = (t276 << 2);
                                t279 = (*(int *)(((int)stk + 8)));
                                t276 = (t276 << 1);
                                t278 = (t278 + t276);
                                t277 = (*(int *)((t278 + 0x0)));
                                t279 = (t279 << 8);
                                t276 = 0xE0;
                                *(unsigned int *)((((*(int *)((a4 + 0x0))) + t279) + t276)) = t277;
                                t276 = (t276 + 0x4);
                                *(unsigned int *)((((*(int *)((a4 + 0x0))) + t279) + t276)) = 0x0;
                                t277 = (*(int *)((a4 + 0x0)));
                                t277 = (t277 + t279);
                                t276 = (*(signed char *)(((0xFD + t277) + 0x0)));
                                t276 = (t276 | 0x80);
                                (((struct oFD_uchar *)(t277))->v) = t276;
                                t277 = (*(int *)((t278 + 0x4)));
                                *(unsigned int *)(((int)stk + 20)) = t277;
                                t279 = 0x0;
                            } else {
                                t276 = 0xC13B144;
                                t277 = (*(int *)(((int)stk + 4)));
                                t276 = (*(int *)((t277 + t276)));
                                t348 = *(int *)(((*(int *)(((int)stk + 12))) + t276));
                                t276 = 0xC13B14C;
                                *(unsigned int *)(((int)stk + 28)) = t348;
                                t277 = (*(int *)(((int)stk + 4)));
                                t276 = (*(int *)((t277 + t276)));
                                *(unsigned int *)(((int)stk + 24)) = (*(int *)(((*(int *)(((int)stk + 12))) + t276)));
                                t277 = (*(int *)(((int)stk + 8)));
                                t277 = (t277 << 8);
                                *(unsigned int *)(((int)stk + 20)) = t277;
                                t277 = (t277 + (*(int *)((a4 + 0x0))));
                                *(int *)((int)stk + 0) = (0xE0 + t277);
                                t276 = (FUN_0c05bf60());
                                t357 = t276;
                                t276 = (*(int *)(((int)stk + 24)));
                                t276 = ((int)((int)t357 % (int)t276));
                                t276 = (t276 << 2);
                                t277 = (*(int *)(((*(int *)(((int)stk + 28))) + t276)));
                                t276 = (*(int *)((int)stk + 0));     /* manual: the original pops the field address it saved before the call (obj + i * 0x100 + 0xE0); the generator had recomputed it from the loaded value (value + 0xE0) */
                                *(unsigned int *)((t276 + 0x0)) = t277;
                                t276 = 0xC13B16C;
                                t278 = (*(int *)((a4 + 0x14)));
                                t276 = (*(int *)(((*(int *)(((int)stk + 4))) + t276)));
                                t278 = (t278 << 2);
                                t277 = (*(int *)((t278 + t276)));
                                t276 = 0xC13B174;
                                *(unsigned int *)(((int)stk + 24)) = t277;
                                t276 = (*(int *)(((*(int *)(((int)stk + 4))) + t276)));
                                t277 = (*(int *)((t278 + t276)));
                                *(unsigned int *)(((int)stk + 28)) = t277;
                                t276 = (FUN_0c05bf60());
                                t370 = t276;
                                t276 = (*(int *)(((int)stk + 28)));
                                t276 = ((int)((int)t370 % (int)t276));
                                t278 = (*(int *)(((int)stk + 24)));
                                t276 = (t276 << 2);
                                t276 = (t276 << 1);
                                t277 = (*(int *)((a4 + 0x0)));
                                t278 = (t278 + t276);
                                t276 = 0xE4;
                                t277 = (t277 + (*(int *)(((int)stk + 20))));
                                *(unsigned int *)((t277 + t276)) = (*(int *)((t278 + 0x0)));
                                t276 = 0xC13B31C;
                                t277 = (*(int *)((a4 + 0x14)));
                                t276 = (*(int *)(((*(int *)(((int)stk + 4))) + t276)));
                                t277 = (t277 << 2);
                                t277 = (*(int *)((t277 + t276)));
                                *(unsigned int *)(((int)stk + 20)) = t277;
                                t279 = (*(int *)((t278 + 0x4)));
                            }
                            t278 = (*(int *)(((int)stk + 8)));
                            t277 = (*(int *)((a4 + 0x0)));
                            t278 = (t278 << 8);
                            t277 = (t277 + t278);
                            t276 = (*(signed char *)(((0xFE + t277) + 0x0)));
                            t276 = (t276 | 0x80);
                            (((struct oFE_uchar *)(t277))->v) = t276;
                            t276 = (((a5 == 0)) ? 1 : 0);
                            t277 = (*(int *)((a4 + 0x0)));
                            t277 = (t277 + t278);
                            t277 = (t277 + 0xFC);
                            t391 = (int)((unsigned int)t276 & 0x1);
                            *(unsigned int *)((t277 + 0x0)) = (((*(int *)((t277 + 0x0))) & 0xFFFDFFFF) | ((unsigned int)t391 << 17));
                            t276 = t391;
                            t277 = (*(int *)(((int)stk + 8)));
                            if (t277 == 0) {
                                t277 = 0x1;
                                *(unsigned int *)(((int)stk + 36)) = t277;
                            }
                        }
                        t277 = (*(int *)(((int)stk + 8)));
                        t280 = t396;
                        t281 = t397;
                        t277 = (t277 + 0x1);
                        *(unsigned int *)(((int)stk + 8)) = t277;
                        continue;
                    }
                    break;
                }
                if ((*(int *)(((int)stk + 36))) != 0) {
                    t400 = *(int *)((a4 + 0x0));
                    *(unsigned int *)(((int)stk + 4)) = t400;
                    t401 = *(int *)(((int)stk + 4));
                    t402 = t401;
                    t404 = (((int)stk + 4) + 0x24);
                    for (;;) { t405 = *(int *)t402; t402 = (t402 + 4); if ((unsigned int)((t401 + 256)) < (unsigned int)t402) break; *(unsigned int *)t404 = t405; t404 = (t404 + 4); }
                    t407 = (t400 + 0x100);
                    t409 = (*(int *)(((int)stk + 4)));
                    for (;;) { t410 = *(int *)t407; t407 = (t407 + 4); if ((unsigned int)(((t400 + 0x100) + 256)) < (unsigned int)t407) break; *(unsigned int *)t409 = t410; t409 = (t409 + 4); }
                    t411 = (((int)stk + 4) + 0x24);
                    t412 = ((((int)stk + 4) + 0x24) + 256);
                    t413 = (t400 + 0x100);
                    for (;;) { t414 = *(int *)t411; t411 = (t411 + 4); if ((unsigned int)t412 < (unsigned int)t411) break; *(unsigned int *)t413 = t414; t413 = (t413 + 4); }
                }
                t421 = (((struct oE0_int *)(((*(int *)((a4 + 0x0))) + 0x100)))->v);
                switch (t421) {
                case 0xCA5E4BC:
                    (((struct oE0_uint *)((*(int *)((a4 + 0x0)))))->v) = 0xCA60CF8;
                    break;
                case 0xCA6187C:
                    (((struct oE0_uint *)((*(int *)((a4 + 0x0)))))->v) = 0xCA641CC;
                    break;
                case 0xCA64D50:
                    (((struct oE0_uint *)((*(int *)((a4 + 0x0)))))->v) = 0xCA676F8;
                    break;
                case 0xCA68E24:
                    (((struct oE0_uint *)((*(int *)((a4 + 0x0)))))->v) = 0xCA6B97C;
                    break;
                case 0xCA7F534:
                    (((struct oE0_uint *)((*(int *)((a4 + 0x0)))))->v) = 0xCA812F0;
                    break;
                case 0xCA824A4:
                    (((struct oE0_uint *)((*(int *)((a4 + 0x0)))))->v) = 0xCA84440;
                    break;
                case 0xCA85860:
                    (((struct oE0_uint *)((*(int *)((a4 + 0x0)))))->v) = 0xCA8770C;
                    break;
                case 0xCA889EC:
                    (((struct oE0_uint *)((*(int *)((a4 + 0x0)))))->v) = 0xCA8A94C;
                    break;
                case 0xCAA04B8:
                    (((struct oE0_uint *)((*(int *)((a4 + 0x0)))))->v) = 0xCAA2ADC;
                    break;
                case 0xCAA3628:
                    (((struct oE0_uint *)((*(int *)((a4 + 0x0)))))->v) = 0xCAA5F64;
                    break;
                case 0xCAA6A60:
                    (((struct oE0_uint *)((*(int *)((a4 + 0x0)))))->v) = 0xCAA916C;
                    break;
                case 0xCAAA218:
                    (((struct oE0_uint *)((*(int *)((a4 + 0x0)))))->v) = 0xCAACBF4;
                    break;
                case 0xCAC1C60:
                    (((struct oE0_uint *)((*(int *)((a4 + 0x0)))))->v) = 0xCAC40B4;
                    break;
                case 0xCAC5458:
                    (((struct oE0_uint *)((*(int *)((a4 + 0x0)))))->v) = 0xCAC7964;
                    break;
                case 0xCAC8C9C:
                    (((struct oE0_uint *)((*(int *)((a4 + 0x0)))))->v) = 0xCACBA54;
                    break;
                case 0xCACD2C0:
                    (((struct oE0_uint *)((*(int *)((a4 + 0x0)))))->v) = 0xCACFAD8;
                    break;
                default:
                    t422 = *(int *)((a4 + 0x0));
                    (((struct oE0_uint *)(t422))->v) = (*(int *)(((((((struct o88_int *)(t422))->v)) << 2) + 0xC10EF34)));
                    break;
                }
                t637 = *(int *)((a4 + 0x0));
                (((struct oFE_uchar *)(t637))->v) = ((*(signed char *)(((0xFE + t637) + 0x0))) & 0x7F);
                t640 = t279;
            } else {
                t637 = t36;
                t640 = 0xC13B1F4;
                if (t43 == 1) {
                    if (t40 != 0) {
                        if ((*(int *)((a4 + 0x14))) == 0) {
                            if ((*(int *)((a4 + 0x8))) == 1) {
                                *(unsigned int *)(((int)stk + 4)) = (*(int *)(((*(int *)(((a5 << 2) + 0xC13B1AC))) + 0x0)));
                                *(unsigned int *)(((int)stk + 8)) = (*(int *)(((*(int *)(((a5 << 2) + 0xC13B1B4))) + 0x0)));
                            } else {
                                *(unsigned int *)(((int)stk + 4)) = (*(int *)(((*(int *)(((a5 << 2) + (*(int *)(((*(int *)(((int)stk + 4))) + (*(int *)(((int)stk + 16))))))))) + 0x0)));
                                *(unsigned int *)(((int)stk + 8)) = (*(int *)(((*(int *)(((a5 << 2) + (*(int *)((0xC13B30C + (*(int *)(((int)stk + 16))))))))) + 0x0)));
                            }
                        } else {
                            if ((*(int *)((a4 + 0x14))) == 2) {
                                *(unsigned int *)(((int)stk + 4)) = (*(int *)(((*(int *)((0xC13B1EC + (a5 << 2)))) + 0x0)));
                                *(unsigned int *)(((int)stk + 8)) = (*(int *)(((*(int *)((0xC13B1F4 + (a5 << 2)))) + 0x0)));
                            }
                        }
                        t568 = (int)((int)(FUN_0c05bf60()) % (int)(*(int *)(((int)stk + 8))));
                        t569 = *(int *)(((int)stk + 4));
                        (((struct oE0_uint *)((*(int *)((a4 + 0x0)))))->v) = (*(int *)(((t569 + ((t568 << 2) << 1)) + 0x0)));
                        (((struct oE4_uint *)((*(int *)((a4 + 0x0)))))->v) = 0x0;
                        t574 = *(int *)((a4 + 0x0));
                        (((struct oFD_uchar *)(t574))->v) = ((*(signed char *)(((0xFD + t574) + 0x0))) | 0x80);
                        *(unsigned int *)(((int)stk + 20)) = (*(int *)(((t569 + ((t568 << 2) << 1)) + 0x4)));
                        t640 = 0x0;
                    } else {
                        *(unsigned int *)(((int)stk + 4)) = (a5 << 2);
                        *(unsigned int *)(((int)stk + 8)) = (*(int *)(((*(int *)(((a5 << 2) + (*(int *)(((int)stk + 8)))))) + 0x0)));
                        *(unsigned int *)(((int)stk + 20)) = (*(int *)(((*(int *)((((a5 << 2) + 0xC13B14C) + 0x0))) + 0x0)));
                        t582 = *(int *)((a4 + 0x0));
                        *(int *)((int)stk + 0) = (0xE0 + t582);
                        (((struct oE0_uint *)(t582))->v) = (*(int *)(((*(int *)(((int)stk + 8))) + (((int)((int)(FUN_0c05bf60()) % (int)(*(int *)(((int)stk + 20))))) << 2))));
                        t589 = *(int *)((a4 + 0x14));
                        *(unsigned int *)(((int)stk + 8)) = (*(int *)(((t589 << 2) + (*(int *)(((*(int *)(((int)stk + 4))) + 0xC13B16C))))));
                        *(unsigned int *)(((int)stk + 20)) = (*(int *)(((t589 << 2) + (*(int *)(((*(int *)(((int)stk + 4))) + 0xC13B174))))));
                        t597 = (int)((int)(FUN_0c05bf60()) % (int)(*(int *)(((int)stk + 20))));
                        t598 = *(int *)(((int)stk + 8));
                        (((struct oE4_uint *)((*(int *)((a4 + 0x0)))))->v) = (*(int *)(((t598 + ((t597 << 2) << 1)) + 0x0)));
                        *(unsigned int *)(((int)stk + 20)) = (*(int *)((((*(int *)((a4 + 0x14))) << 2) + (*(int *)(((*(int *)(((int)stk + 4))) + 0xC13B31C))))));
                        t640 = (*(int *)(((t598 + ((t597 << 2) << 1)) + 0x4)));
                    }
                    t613 = *(int *)((a4 + 0x0));
                    (((struct oFE_uchar *)(t613))->v) = ((*(signed char *)(((0xFE + t613) + 0x0))) | 0x80);
                    t615 = *(int *)((a4 + 0x0));
                    (((struct oFC_uint *)(t615))->v) = ((((((struct oFC_int *)(t615))->v)) & 0xFFFDFFFF) | ((unsigned int)((int)((unsigned int)(((a5 == 0)) ? 1 : 0) & 0x1)) << 17));
                    t637 = (t615 + 0xFC);
                }
            }
        }
        t747 = t637;
        t750 = t640;
    } else {
        if (t40 != 0) {
            if ((*(int *)((a4 + 0x14))) == 0) {
                *(unsigned int *)(((int)stk + 4)) = (*(int *)(((*(int *)(((a5 << 2) + (*(int *)(((*(int *)(((int)stk + 4))) + (*(int *)(((int)stk + 16))))))))) + 0xC)));
                *(unsigned int *)(((int)stk + 8)) = (*(int *)(((*(int *)(((a5 << 2) + (*(int *)((0xC13B30C + (*(int *)(((int)stk + 16))))))))) + 0xC)));
            } else {
                if ((*(int *)((a4 + 0x14))) == 2) {
                    *(unsigned int *)(((int)stk + 4)) = (*(int *)(((*(int *)((0xC13B1EC + (a5 << 2)))) + 0xC)));
                    *(unsigned int *)(((int)stk + 8)) = (*(int *)(((*(int *)((0xC13B1F4 + (a5 << 2)))) + 0xC)));
                }
            }
            t675 = (int)((int)(FUN_0c05bf60()) % (int)(*(int *)(((int)stk + 8))));
            t676 = *(int *)(((int)stk + 4));
            (((struct oE0_uint *)(((*(int *)((a4 + 0x0))) + 0x300)))->v) = (*(int *)(((t676 + ((t675 << 2) << 1)) + 0x0)));
            (((struct oE4_uint *)((0x300 + (*(int *)((a4 + 0x0))))))->v) = 0x0;
            t681 = *(int *)((a4 + 0x0));
            (((struct oFD_uchar *)((t681 + 0x300)))->v) = ((*(signed char *)(((0xFD + (t681 + 0x300)) + 0x0))) | 0x80);
            *(unsigned int *)(((int)stk + 20)) = (*(int *)(((t676 + ((t675 << 2) << 1)) + 0x4)));
            t718 = 0x0;
        } else {
            *(unsigned int *)(((int)stk + 4)) = (a5 << 2);
            *(unsigned int *)(((int)stk + 8)) = (*(int *)(((*(int *)(((a5 << 2) + (*(int *)(((int)stk + 8)))))) + 0xC)));
            *(unsigned int *)(((int)stk + 20)) = (*(int *)(((*(int *)((((a5 << 2) + 0xC13B14C) + 0x0))) + 0xC)));
            t689 = *(int *)((a4 + 0x0));
            *(int *)((int)stk + 0) = (0xE0 + (t689 + 0x300));
            (((struct oE0_uint *)((t689 + 0x300)))->v) = (*(int *)(((*(int *)(((int)stk + 8))) + (((int)((int)(FUN_0c05bf60()) % (int)(*(int *)(((int)stk + 20))))) << 2))));
            t696 = *(int *)((a4 + 0x14));
            *(unsigned int *)(((int)stk + 8)) = (*(int *)(((t696 << 2) + (*(int *)(((*(int *)(((int)stk + 4))) + 0xC13B16C))))));
            *(unsigned int *)(((int)stk + 20)) = (*(int *)(((t696 << 2) + (*(int *)(((*(int *)(((int)stk + 4))) + 0xC13B174))))));
            t704 = (int)((int)(FUN_0c05bf60()) % (int)(*(int *)(((int)stk + 20))));
            t705 = *(int *)(((int)stk + 8));
            (((struct oE4_uint *)(((*(int *)((a4 + 0x0))) + 0x300)))->v) = (*(int *)(((t705 + ((t704 << 2) << 1)) + 0x0)));
            *(unsigned int *)(((int)stk + 20)) = (*(int *)((((*(int *)((a4 + 0x14))) << 2) + (*(int *)(((*(int *)(((int)stk + 4))) + 0xC13B31C))))));
            t718 = (*(int *)(((t705 + ((t704 << 2) << 1)) + 0x4)));
        }
        t720 = *(int *)((a4 + 0x0));
        (((struct oFE_uchar *)((t720 + 0x300)))->v) = ((*(signed char *)(((0xFE + (t720 + 0x300)) + 0x0))) | 0x80);
        t722 = *(int *)((a4 + 0x0));
        t725 = (int)((unsigned int)(((a5 == 0)) ? 1 : 0) & 0x1);
        (((struct oFC_uint *)((t722 + 0x300)))->v) = ((((((struct oFC_int *)((t722 + 0x300)))->v)) & 0xFFFDFFFF) | ((unsigned int)t725 << 17));
        *(unsigned int *)(((int)stk + 4)) = 0xC10EF34;
        t726 = 0xE01;
        t727 = ((t722 + 0x300) + 0xFC);
        t728 = 0x0;
        t729 = 0x0;
        t730 = 0xC10FA74;
        for (;;) {
            if ((int)t728 > (int)0x2) {
                break;
            }
            t727 = t728;
            t726 = 0xFE;
            t727 = (t727 << 8);
            t727 = (t727 + (*(int *)((a4 + 0x0))));
            t726 = (t726 + t727);
            t725 = (*(signed char *)((t726 + 0x0)));
            t725 = (t725 & 0x7F);
            *(unsigned char *)((t726 + 0x0)) = t725;
            if ((*(int *)((a4 + 0x14))) == 0) {
                t725 = 0xE0;
                *(unsigned int *)(((int)stk + 8)) = (t728 << 8);
                t727 = (*(int *)((a4 + 0x0)));
                t726 = (*(int *)((t730 + 0x0)));
                *(unsigned int *)((((t728 << 8) + t727) + t725)) = t726;
                t727 = (*(int *)((a4 + 0x0)));
                t725 = 0xE4;
                t727 = (t727 + (*(int *)(((int)stk + 8))));
                *(unsigned int *)((t727 + t725)) = 0x0;
            } else {
                t727 = (*(int *)((a4 + 0x0)));
                t725 = 0xE0;
                t726 = (*(int *)(((*(int *)(((int)stk + 4))) + 0x0)));
                t727 = (t727 + t729);
                *(unsigned int *)((t727 + t725)) = t726;
                t725 = (t725 + 0x4);
                *(unsigned int *)((((*(int *)((a4 + 0x0))) + t729) + t725)) = 0x0;
            }
            t729 = (t729 + 0x100);
            t730 = (t730 + 0x4);
            t728 = (t728 + 0x1);
            *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x4);
        }
        t747 = t727;
        t750 = t718;
    }
    t754 = t747;
    t755 = 0x0;
    for (;;) {
        if ((int)t755 >= (int)(*(int *)((a4 + 0x4)))) {
            break;
        }
        t754 = t755;
        t754 = (t754 << 8);
        t754 = (t754 + (*(int *)((a4 + 0x0))));
        *(unsigned int *)((t754 + (0x84))) = t755;
        t755 = (t755 + 0x1);
    }
    t807 = t750;
    if (t750 == 0) {
        t760 = *(int *)((a4 + 0x14));
        if (t760 != 1) {
            t807 = t750;
            if (t760 != 2) {
            } else {
                t807 = t750;
                if (t40 == 0) {
                    *(unsigned int *)(((int)stk + 4)) = (a5 << 2);
                    t762 = (*(int *)((0xC13B32C + (a5 << 2))));
                    *(int *)((int)stk + 0) = t762;
                    t807 = (*(int *)((((((int)((int)(FUN_0c05bf60()) % (int)(*(int *)(((*(int *)(((int)stk + 4))) + 0xC10FA6C))))) << 2) + t762) + 0x0)));
                }
            }
        } else {
            *(unsigned int *)(((int)stk + 4)) = (a5 << 2);
            t787 = (*(int *)((0xC13B324 + (a5 << 2))));
            *(int *)((int)stk + 0) = t787;
            t807 = (*(int *)((((((int)((int)(FUN_0c05bf60()) % (int)(*(int *)(((*(int *)(((int)stk + 4))) + 0xC10FA5C))))) << 2) + t787) + 0x0)));
        }
    }
    FUN_0c060298((*(int *)(((int)stk + 20))), t807, (*(int *)((a4 + 0x14))));
    return (FUN_0c06ac1a((*(int *)(((*(int *)((a4 + 0x0))) + 0x10))), (*(int *)((a4 + 0x14))), (*(int *)((a4 + 0x4))), t40));
}
