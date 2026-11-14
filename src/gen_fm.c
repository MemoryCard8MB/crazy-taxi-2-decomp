/* Straight-line functions with calls and guards (batch gen_fm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c02c068(int, int, int, float);
float nlLength(int, int);
float FUN_0c02a798(int a4, int a5, int a6, int a7, float f4);

float FUN_0c02a798(int a4, int a5, int a6, int a7, float f4)
{
    register int t3;
    register int t4;
    register int t113;
    register int t114;
    register float u118;
    register int t18;
    int t19;
    int t20;
    register float u25;
    register int t70;
    register int t72;
    register int t73;
    register float t77;
    register int t99;
    register int t100;
    register int t101;
    register int t119;
    int t120;
    int t121;
    register int t122;
    register int t123;
    register int t124;
    register int t125;
    register float u126;
    register float u127;
    register float u128;
    register int t136;
    register int t147;
    register float t187;
    register int t212;
    register int t213;
    register int t214;
    register int t215;
    register int t216;
    register int t217;
    register int t218;
    register float u219;
    register float u220;
    register int t221;
    register int t246;
    register int t248;
    register int t252;
    register float t257;
    register int t275;
    register int t276;
    register int t277;
    register int t278;
    register float u279;
    register int t289;
    register int t0;
    register int t1;
    register int t2;
    register int t106;
    register int t108;
    register float u115;
    register float u116;
    register float u117;
    register int t21;
    register int t22;
    register float u23;
    register float u24;
    register int t81;
    register int t83;
    register float u84;
    register float u102;
    register int t192;
    register int t193;
    register int t194;
    register float u195;
    register int t262;
    register int t263;
    register int t264;
    register float u265;
    register int t296;
    register int t297;

    (((struct o0_uint *)0xC271E34)->v) = 0x0;
    t3 = a4;
    t4 = a5;
    for (;;) {
        if ((int)((((struct o0_int *)0xC271E34)->v)) >= (int)0x1B) {
            break;
        }
        t1 = ((((struct o0_int *)0xC271E34)->v));
        t0 = 0xC271DC4;
        t1 = (t1 << 2);
        if ((*(int *)((t1 + t0))) != 0) {
            t0 = ((((struct o0_int *)0xC271E34)->v));
            t0 = (t0 << 2);
            t3 = (*(int *)((0xC271CEC + t0)));
            for (;;) {
                if (t3 == 0) {
                    break;
                }
                t4 = (*(int *)((t3 + 0x0)));
                t2 = 0x0;
                *(unsigned int *)((t4 + 0x24)) = t2;
                *(unsigned int *)((t4 + 0x20)) = t2;
                t3 = (*(int *)((t3 + 0xC)));
            }
        }
        t2 = ((((struct o0_int *)0xC271E34)->v));
        t2 = (t2 + 0x1);
        (((struct o0_uint *)0xC271E34)->v) = t2;
    }
    t113 = 0xC271DC4;
    t114 = t3;
    u118 = f4;
    if ((*(int *)0xC271DC4) == 0) {
        t106 = t0;
    } else {
        (((struct o0_uint *)0xC271E34)->v) = 0x0;
        (((struct o20_uint *)0xC271E34)->v) = 0xC271E5C;
        t18 = *(int *)(((*(int *)0xC271CEC) + 0x0));
        (((struct o4_uint *)0xC271E34)->v) = 0x1;
        t19 = 0xC271E38;
        t20 = t3;
        u25 = f4;
        for (;;) {
            if ((int)((((struct o4_int *)0xC271E34)->v)) < (int)0x1A) {
                t19 = ((((struct o4_int *)0xC271E34)->v));
                t19 = (t19 << 2);
                t19 = (*(int *)((t19 + 0xC271DC4)));
                if (t19 == 0) {
                } else {
                    t20 = ((((struct o0_int *)0xC271E34)->v));
                    t19 = ((((struct o4_int *)0xC271E34)->v));
                    t20 = (t20 << 2);
                    t19 = (t19 << 2);
                    t19 = (t19 << 2);
                    t20 = (t20 << 2);
                    t20 = (t20 << 1);
                    t19 = (t19 << 1);
                    t20 = (*(int *)((t20 + 0xC128DD0)));
                    t19 = (*(int *)((t19 + 0xC128DD0)));
                    t20 = (t20 & t19);
                    if (((0xFFFF0000 & t20) == 0) && ((unsigned short)t20 != 0)) {
                        t19 = 0x78;
                        t19 = (((((struct o4_int *)0xC271E34)->v)) * t19);
                        t19 = (t19 + 0xC271E5C);
                        (((struct o24_uint *)0xC271E34)->v) = t19;
                        t20 = ((((struct o4_int *)0xC271E34)->v));
                        t19 = 0xC128DB4;
                        t20 = (t20 << 2);
                        u23 = ((((struct o0_float *)0xC128DB4)->v));
                        t20 = (t20 << 2);
                        t20 = (t20 << 1);
                        t20 = (t20 + t19);
                        t19 = 0xC271E4C;
                        u24 = ((((struct o4_float *)(t20))->v));
                        u23 = (u23 + u24);
                        (((struct o14_float *)0xC271E34)->v) = u23;
                        u23 = (*(float *)((t20 + 0x0)));
                        u24 = ((((struct o4_float *)0xC128DB4)->v));
                        u23 = (u23 + u24);
                        *(float *)((t19 + 0x0)) = u23;
                        u24 = ((((struct o14_float *)0xC271E34)->v));
                        if (u24 > u23) {
                            u24 = ((((struct o14_float *)0xC271E34)->v));
                            (((struct oC_float *)0xC271E34)->v) = u24;
                        } else {
                            u24 = (*(float *)((t19 + 0x0)));
                            (((struct oC_float *)0xC271E34)->v) = u24;
                        }
                        t19 = ((((struct o0_int *)0xC271E34)->v));
                        t19 = (t19 << 2);
                        t19 = (t19 << 2);
                        t19 = (t19 << 1);
                        u23 = (*(float *)((t19 + 0xC128DB8)));
                        u24 = (*(float *)(((((((((struct o4_int *)0xC271E34)->v)) << 2) << 2) << 1) + 0xC128DB8)));
                        u23 = (u23 + u24);
                        t19 = 0xC271E44;
                        *(float *)((t19 + 0x0)) = u23;
                        u24 = ((((struct oC_float *)0xC271E34)->v));
                        if (u23 > u24) {
                            u24 = (*(float *)((t19 + 0x0)));
                            (((struct oC_float *)0xC271E34)->v) = u24;
                        }
                        t19 = ((((struct o4_int *)0xC271E34)->v));
                        t19 = (t19 << 2);
                        t19 = (t19 << 2);
                        t19 = (t19 << 1);
                        t19 = (t19 + 0xC128DB4);
                        u25 = ((((struct oC_float *)(t19))->v));
                        t19 = 0xC271E50;
                        u23 = u25;
                        u24 = ((((struct oC_float *)(((((((((struct o0_int *)0xC271E34)->v)) << 2) << 2) << 1) + 0xC128DB4)))->v));
                        u24 = (u24 + u25);
                        u23 = (u23 / u24);
                        *(float *)((t19 + 0x0)) = u23;
                        t19 = 0x68;
                        t21 = ((((struct o4_int *)0xC271E34)->v));
                        t21 = (t21 << 2);
                        t21 = (t21 + (0xC27125C + (((((struct o0_int *)0xC271E34)->v)) * t19)));
                        t21 = (*(int *)((t21 + 0x0)));
                        t70 = (((struct o4_int *)0xC271E34)->v);
                        t22 = (*(int *)((0xC271CEC + (t70 << 2))));
                        t72 = (t70 << 2);
                        t73 = 0xC271E38;
                        for (;;) {
                            if (t22 == 0) {
                                break;
                            }
                            t19 = 0xC073B60;
                            t20 = t18;
                            t77 = nlLength(t20, (*(int *)((t22 + 0x0))));
                            t19 = 0xC271E40;
                            t73 = 0xC271E3C;
                            *(float *)((t73 + 0x0)) = t77;
                            u24 = (*(float *)((t19 + 0x0)));
                            if (u24 > t77) {
                                t20 = t18;
                                t72 = (((int (*)(int, int, int, int))(t21))(t20, (*(int *)((t22 + 0x0))), a6, a7));
                                t81 = t72;
                            } else {
                                t83 = t19;
                                u84 = u24;
                            }
                            u24 = u84;
                            t72 = t81;
                            t73 = 0xC271E3C;
                            t19 = t83;
                            t72 = 0x18;
                            t19 = (*(int *)((t22 + 0x0)));
                            u24 = (*(float *)((t73 + 0x0)));
                            *(float *)((t19 + t72)) = u24;
                            t22 = (*(int *)((t22 + 0xC)));
                        }
                    }
                }
                t19 = ((((struct o4_int *)0xC271E34)->v));
                t19 = (t19 + 0x1);
                (((struct o4_uint *)0xC271E34)->v) = t19;
                continue;
            }
            break;
        }
        t99 = 0x68;
        t100 = t21;
        t101 = (*(int *)0xC271D54);
        for (;;) {
            if (t101 == 0) {
                break;
            }
            t100 = (*(int *)((t101 + 0x0)));
            u102 = (nlLength(t18, t100));
            t99 = 0x18;
            *(float *)((t100 + t99)) = u102;
            t101 = (*(int *)((t101 + 0xC)));
        }
        t106 = t99;
        t108 = 0xC128DB4;
        t123 = t18;
        t124 = t100;
        t125 = t101;
        t113 = t19;
        t114 = t20;
        u115 = u102;
        u116 = u23;
        u117 = u24;
        u118 = u25;
    }
    (((struct o0_uint *)0xC271E34)->v) = 0x1;
    t119 = t106;
    t120 = t113;
    t121 = t114;
    t122 = t4;
    u126 = u116;
    u127 = u117;
    u128 = u118;
    for (;;) {
        if ((int)((((struct o0_int *)0xC271E34)->v)) < (int)0x1A) {
            t120 = ((((struct o0_int *)0xC271E34)->v));
            t119 = 0xC271DC4;
            t120 = (t120 << 2);
            if ((*(int *)((t120 + t119))) == 0) {
            } else {
                t120 = 0x78;
                t119 = 0xC271E5C;
                (((struct o20_uint *)0xC271E34)->v) = ((((((struct o0_int *)0xC271E34)->v)) * t120) + t119);
                t120 = ((((struct o0_int *)0xC271E34)->v));
                t120 = (t120 + 0x1);
                (((struct o4_uint *)0xC271E34)->v) = t120;
                t136 = 0xC271E38;
                for (;;) {
                    t119 = 0xC271E38;
                    t120 = 0x1A;
                    if ((int)(*(int *)((t119 + 0x0))) < (int)t120) {
                        t136 = 0xC271DC4;
                        t119 = ((((struct o4_int *)0xC271E34)->v));
                        t119 = (t119 << 2);
                        t120 = (*(int *)((t136 + t119)));
                        if (t120 == 0) {
                        } else {
                            t136 = 0xC271E38;
                            t121 = ((((struct o0_int *)0xC271E34)->v));
                            t120 = (*(int *)((t136 + 0x0)));
                            t121 = (t121 << 2);
                            t119 = 0xC128DD0;
                            t120 = (t120 << 2);
                            t120 = (t120 << 2);
                            t121 = (t121 << 2);
                            t121 = (t121 << 1);
                            t120 = (t120 << 1);
                            t121 = (*(int *)((t121 + t119)));
                            t120 = (*(int *)((t120 + t119)));
                            t121 = (t121 & t120);
                            if ((0xFFFF0000 & t121) != 0) {
                            } else {
                                t136 = (unsigned short)t121;
                                if (t136 != 0) {
                                    t120 = 0x78;
                                    t119 = 0xC271E5C;
                                    t136 = ((((struct o4_int *)0xC271E34)->v));
                                    t147 = (t136 * t120);
                                    t136 = 0xC271E58;
                                    t120 = t147;
                                    t120 = (t120 + t119);
                                    *(unsigned int *)((t136 + 0x0)) = t120;
                                    t120 = 0xC271E38;
                                    t121 = ((((struct o0_int *)0xC271E34)->v));
                                    t119 = 0x4;
                                    t122 = (*(int *)((t120 + 0x0)));
                                    t121 = (t121 << 2);
                                    t136 = 0xC128DB4;
                                    t122 = (t122 << 2);
                                    t121 = (t121 << 2);
                                    t122 = (t122 << 2);
                                    t121 = (t121 << 1);
                                    t122 = (t122 << 1);
                                    t122 = (t122 + t136);
                                    t121 = (t121 + t136);
                                    u127 = (*(float *)((t122 + t119)));
                                    u126 = (*(float *)((t121 + 0x0)));
                                    u126 = (u126 + u127);
                                    (((struct o14_float *)0xC271E34)->v) = u126;
                                    u126 = (*(float *)((t122 + 0x0)));
                                    u127 = (*(float *)((t121 + t119)));
                                    u126 = (u126 + u127);
                                    (((struct o18_float *)0xC271E34)->v) = u126;
                                    t120 = 0xC271E48;
                                    u127 = (*(float *)((t120 + 0x0)));
                                    if (u127 > u126) {
                                        t119 = 0xC271E48;
                                        t136 = 0xC271E40;
                                        u127 = (*(float *)((t119 + 0x0)));
                                        *(float *)((t136 + 0x0)) = u127;
                                    } else {
                                        t120 = 0xC271E40;
                                        u127 = ((((struct o18_float *)0xC271E34)->v));
                                        *(float *)((t120 + 0x0)) = u127;
                                    }
                                    t136 = ((((struct o0_int *)0xC271E34)->v));
                                    t120 = ((((struct o4_int *)0xC271E34)->v));
                                    t136 = (t136 << 2);
                                    t119 = 0xC128DB8;
                                    t120 = (t120 << 2);
                                    t120 = (t120 << 2);
                                    t136 = (t136 << 2);
                                    t136 = (t136 << 1);
                                    t120 = (t120 << 1);
                                    u126 = (*(float *)((t136 + t119)));
                                    u127 = (*(float *)((t120 + t119)));
                                    t136 = 0xC271E40;
                                    u126 = (u126 + u127);
                                    t120 = 0xC271E44;
                                    *(float *)((t120 + 0x0)) = u126;
                                    u127 = (*(float *)((t136 + 0x0)));
                                    if (u126 > u127) {
                                        t119 = 0xC271E40;
                                        u127 = (*(float *)((t120 + 0x0)));
                                        *(float *)((t119 + 0x0)) = u127;
                                    }
                                    t136 = 0xC271E38;
                                    t119 = 0xC;
                                    t120 = (*(int *)((t136 + 0x0)));
                                    t120 = (t120 << 2);
                                    t120 = (t120 << 2);
                                    t120 = (t120 << 1);
                                    t120 = (t120 + 0xC128DB4);
                                    t136 = ((((struct o0_int *)0xC271E34)->v));
                                    u128 = (*(float *)((t120 + t119)));
                                    t136 = (t136 << 2);
                                    t120 = 0xC271E50;
                                    t136 = (t136 << 2);
                                    u126 = u128;
                                    t136 = (t136 << 1);
                                    t136 = (t136 + 0xC128DB4);
                                    u127 = (*(float *)((t136 + t119)));
                                    u127 = (u127 + u128);
                                    u126 = (u126 / u127);
                                    *(float *)((t120 + 0x0)) = u126;
                                    t120 = 0x68;
                                    t136 = ((((struct o0_int *)0xC271E34)->v));
                                    t119 = (t136 * t120);
                                    t136 = 0xC271E38;
                                    t123 = (*(int *)((t136 + 0x0)));
                                    t123 = (t123 << 2);
                                    t123 = (t123 + (0xC27125C + t119));
                                    t123 = (*(int *)((t123 + 0x0)));
                                    t119 = ((((struct o0_int *)0xC271E34)->v));
                                    t119 = (t119 << 2);
                                    t124 = (*(int *)((0xC271CEC + t119)));
                                    for (;;) {
                                        if (t124 == 0) {
                                            break;
                                        }
                                        t120 = 0xC271E38;
                                        t119 = (*(int *)((t120 + 0x0)));
                                        t119 = (t119 << 2);
                                        t125 = (*(int *)((0xC271CEC + t119)));
                                        for (;;) {
                                            if (t125 == 0) {
                                                break;
                                            }
                                            t122 = (*(int *)((t125 + 0x0)));
                                            t121 = (*(int *)((t124 + 0x0)));
                                            t187 = nlLength(t121, t122);
                                            t120 = 0xC271E40;
                                            t136 = 0xC271E3C;
                                            *(float *)((t136 + 0x0)) = t187;
                                            u127 = (*(float *)((t120 + 0x0)));
                                            if (u127 > t187) {
                                                t122 = (*(int *)((t125 + 0x0)));
                                                t121 = (*(int *)((t124 + 0x0)));
                                                t119 = (((int (*)(int, int, int, int))(t123))(t121, t122, a6, a7));
                                                t192 = t119;
                                            } else {
                                                t193 = t136;
                                                t194 = t120;
                                                u195 = u127;
                                            }
                                            u127 = u195;
                                            t119 = t192;
                                            t125 = (*(int *)((t125 + 0xC)));
                                            t136 = t193;
                                            t120 = t194;
                                        }
                                        t124 = (*(int *)((t124 + 0xC)));
                                    }
                                }
                            }
                        }
                        t120 = 0xC271E38;
                        t136 = (*(int *)((t120 + 0x0)));
                        t136 = (t136 + 0x1);
                        *(unsigned int *)((t120 + 0x0)) = t136;
                        continue;
                    }
                    break;
                }
            }
            t120 = ((((struct o0_int *)0xC271E34)->v));
            t120 = (t120 + 0x1);
            (((struct o0_uint *)0xC271E34)->v) = t120;
            continue;
        }
        break;
    }
    (((struct o0_uint *)0xC271E34)->v) = 0x1;
    t212 = 0xC02AC58;
    t213 = t120;
    t214 = t121;
    t215 = 0x1;
    t216 = t108;
    t217 = t124;
    t218 = t125;
    u219 = u126;
    u220 = u127;
    for (;;) {
        t221 = (((struct o0_int *)0xC271E34)->v);
        if ((int)t221 >= (int)0x1A) {
            break;
        }
        t212 = 0xC271DC4;
        t213 = (*(int *)(((((((struct o0_int *)0xC271E34)->v)) << 2) + t212)));
        if ((int)t213 >= (int)0x2) {
            t213 = ((((struct o0_int *)0xC271E34)->v));
            t212 = 0xC128DD0;
            t213 = (t213 << 2);
            t213 = (t213 << 2);
            t213 = (t213 << 1);
            if (((*(int *)((t213 + t212))) & 0xFFFF0000) == 0) {
                t213 = 0x78;
                t212 = 0xC271E54;
                t213 = (((((struct o0_int *)0xC271E34)->v)) * t213);
                t213 = (t213 + 0xC271E5C);
                (((struct o24_uint *)0xC271E34)->v) = t213;
                *(unsigned int *)((t212 + 0x0)) = t213;
                t212 = 0x4;
                t214 = ((((struct o0_int *)0xC271E34)->v));
                t213 = 0xC271E4C;
                t214 = (t214 << 2);
                t214 = (t214 << 2);
                t214 = (t214 << 1);
                t214 = (t214 + 0xC128DB4);
                u219 = (*(float *)((t214 + 0x0)));
                u220 = (*(float *)((t214 + t212)));
                u219 = (u219 + u220);
                *(float *)((t213 + 0x0)) = u219;
                t213 = 0xC271E40;
                (((struct o14_float *)0xC271E34)->v) = u219;
                *(float *)((t213 + 0x0)) = u219;
                u220 = (*(float *)((t214 + t212)));
                u220 = (u220 * (1.0f + 1.0f));
                (((struct o10_float *)0xC271E34)->v) = u220;
                u219 = (*(float *)((t213 + 0x0)));
                if (u220 > u219) {
                    t212 = 0xC271E40;
                    u220 = ((((struct o10_float *)0xC271E34)->v));
                    *(float *)((t212 + 0x0)) = u220;
                }
                t213 = 0xC271E50;
                *(float *)((t213 + 0x0)) = 0.5f;
                t246 = (((struct o0_int *)0xC271E34)->v);
                t215 = t246;
                t215 = (t215 << 2);
                t212 = (t246 * 0x68);
                t248 = (0xC27125C + t212);
                t212 = ((((struct o0_int *)0xC271E34)->v));
                t215 = (t215 + t248);
                t215 = (*(int *)((t215 + 0x0)));
                (((struct o4_uint *)0xC271E34)->v) = t212;
                t212 = ((((struct o0_int *)0xC271E34)->v));
                t212 = (t212 << 2);
                t217 = (*(int *)((0xC271CEC + t212)));
                t252 = 0x68;
                for (;;) {
                    t216 = (*(int *)((t217 + 0xC)));
                    if (t216 == 0) {
                        break;
                    }
                    t218 = (*(int *)((t217 + 0xC)));
                    for (;;) {
                        if (t218 == 0) {
                            break;
                        }
                        t214 = (*(int *)((t217 + 0x0)));
                        t257 = nlLength(t214, (*(int *)((t218 + 0x0))));
                        t213 = 0xC271E40;
                        t252 = 0xC271E3C;
                        *(float *)((t252 + 0x0)) = t257;
                        u220 = (*(float *)((t213 + 0x0)));
                        if (u220 > t257) {
                            t214 = (*(int *)((t217 + 0x0)));
                            t212 = (((int (*)(int, int, int, int))(t215))(t214, (*(int *)((t218 + 0x0))), a6, a7));
                            t262 = t212;
                        } else {
                            t263 = t252;
                            t264 = t213;
                            u265 = u220;
                        }
                        u220 = u265;
                        t212 = t262;
                        t218 = (*(int *)((t218 + 0xC)));
                        t252 = t263;
                        t213 = t264;
                    }
                    t217 = t216;
                }
            }
        }
        t213 = ((((struct o0_int *)0xC271E34)->v));
        t213 = (t213 + 0x1);
        (((struct o0_uint *)0xC271E34)->v) = t213;
    }
    t275 = t212;
    t276 = t221;
    t277 = 0x0;
    t278 = t218;
    u279 = u220;
    for (;;) {
        (((struct o0_uint *)0xC271E34)->v) = t277;
        if ((int)t277 >= (int)0x14) {
            break;
        }
        t276 = ((((struct o0_int *)0xC271E34)->v));
        t275 = 0xC271DC4;
        t276 = (t276 << 2);
        if ((*(int *)((t276 + t275))) != 0) {
            t277 = ((((struct o0_int *)0xC271E34)->v));
            t275 = 0xC128DB8;
            t277 = (t277 << 2);
            t277 = (t277 << 2);
            t277 = (t277 << 1);
            u279 = (*(float *)((t277 + t275)));
            (((struct oC_float *)0xC271E34)->v) = u279;
            t275 = ((((struct o0_int *)0xC271E34)->v));
            t275 = (t275 << 2);
            t278 = (*(int *)((0xC271CEC + t275)));
            t289 = 0xC271E40;
            for (;;) {
                if (t278 == 0) {
                    break;
                }
                t289 = 0xC271E40;
                t275 = (FUN_0c02c068((*(int *)((t278 + 0x0))), ((((struct o0_int *)0xC271E34)->v)), 0x1B, (*(float *)((t289 + 0x0)))));
                if (t275 != 0) {
                    t289 = (*(int *)((t278 + 0x0)));
                    t277 = (*(int *)((t289 + 0x20)));
                    t277 = (t277 | 0x80000000);
                    *(unsigned int *)((t289 + 0x20)) = t277;
                    t296 = t277;
                    t297 = t289;
                }
                t278 = (*(int *)((t278 + 0xC)));
                t277 = t296;
                t289 = t297;
            }
        }
        t277 = ((((struct o0_int *)0xC271E34)->v));
        t277 = (t277 + 0x1);
    }
    return u115;
}
