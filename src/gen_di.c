/* Straight-line functions with calls and guards (batch gen_di): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o8_int { char p[0x8]; int v; };
struct oC_int { char p[0xC]; int v; };
int FUN_0c03232a(int, int, int, int);
int FUN_0c03b72e(int, int, float, float, float, float, float, float, float);
int FUN_0c03baba(int, int, float, float);
int FUN_0c03bc10(int, int, int, int, int, int, float, float, float);
int FUN_0c07ffac(int);
int buGetFileInfo(int, int, int);
extern int memcpy();
int memset(int, int, int);
int syRtcGetDate(int);
int FUN_0c03c070(int a4, int a5, int a6, int a7);

int FUN_0c03c070(int a4, int a5, int a6, int a7)
{
    int stk[218];
    register int t0;
    register int t4;
    register int t5;
    register int t6;
    register int t8;
    register int t9;
    register int t31;
    register int t43;
    register int t45;
    register int t49;
    int t50;
    register int t74;
    register int t77;
    register int t84;
    register int t87;
    register int t89;
    register int t91;
    register int t93;
    register int t94;
    register float u104;
    register int t108;
    register int t122;
    register float u124;
    register int t126;
    register int t130;
    register int t133;
    register int t141;
    register int t142;
    register int t155;
    register int t163;
    register int t167;
    register int t175;
    register int t178;
    register int t180;
    register int t182;
    register int t184;
    register int t185;
    register float u195;
    register int t199;
    register int t213;
    register float u215;
    register int t217;
    register int t221;
    register int t224;
    register int t7;
    register int t15;
    register int t41;
    register float u51;
    register float u52;
    register float u53;
    register float u54;
    register int t61;
    register int t80;
    register int t99;
    int t106;
    register int t115;
    register int t153;
    register int t190;
    int t197;
    register int t206;

    *(unsigned int *)(((int)stk + 20)) = a4;
    *(unsigned int *)(((int)stk + 44)) = a5;
    *(unsigned int *)(((int)stk + 28)) = a6;
    *(unsigned int *)(((int)stk + 24)) = 0x0;
    t0 = (((struct o0_int *)0xC2A4FA8)->v);
    t4 = ((int (*)(int, int, int, int))(memcpy))((0x34C + ((int)stk + 8)), 0xC12A93A, 0x10, a7);
    *(unsigned int *)(((int)stk + 8)) = ((0x34C + ((int)stk + 8)) + 0x9);
    *(unsigned int *)(((int)stk + 12)) = ((0x34C + ((int)stk + 8)) + 0xA);
    *(unsigned int *)(((int)stk + 16)) = ((0x34C + ((int)stk + 8)) + 0xB);
    if ((*(int *)(((int)stk + 20))) == 0) {
        *(unsigned int *)(((int)stk + 12)) = ((0x34C + ((int)stk + 8)) + 0xA);
        *(unsigned int *)(((int)stk + 16)) = ((0x34C + ((int)stk + 8)) + 0xB);
        t5 = ((0x34C + ((int)stk + 8)) + 0xB);
        t6 = ((0x34C + ((int)stk + 8)) + 0xA);
        t8 = t7;
        t9 = 0x0;
        for (;;) {
            if ((int)t9 >= (int)(*(int *)((((t0 * 0x7C) + 0xC2A46F0) + 0x10)))) {
                break;
            }
            t5 = ((t0 * 0x7C) + 0xC2A46F0);
            t5 = (t5 + 0x18);
            t5 = (t5 + t9);
            t5 = (*(signed char *)((t5 + 0x0)));
            t5 = (unsigned char)t5;
            t4 = 0x64;
            t4 = ((int)((int)t5 / (int)t4));
            if (t4 == 0) {
                t5 = (*(int *)(((int)stk + 8)));
                t15 = 0x52;
            } else {
                t5 = (*(int *)(((int)stk + 8)));
                t15 = 0x44;
            }
            *(unsigned char *)((t5 + 0x0)) = t15;
            t5 = ((t0 * 0x7C) + 0xC2A46F0);
            t5 = (t5 + 0x18);
            t5 = (t5 + t9);
            t5 = (*(signed char *)((t5 + 0x0)));
            t5 = (unsigned char)t5;
            t4 = 0x64;
            t4 = ((int)((int)t5 % (int)t4));
            t6 = 0xC07FAEC;
            t5 = t4;
            t4 = 0xA;
            t4 = ((int)((int)t5 / (int)t4));
            t8 = (*(int *)(((int)stk + 12)));
            t4 = (memset(t8, (t4 + 0x30), 0x1));
            t5 = ((t0 * 0x7C) + 0xC2A46F0);
            t5 = (t5 + 0x18);
            t5 = (t5 + t9);
            t5 = (*(signed char *)((t5 + 0x0)));
            t5 = (unsigned char)t5;
            t4 = 0x64;
            t4 = ((int)((int)t5 % (int)t4));
            t6 = 0xC07FC48;
            t5 = t4;
            t4 = 0xA;
            t4 = ((int)((int)t5 % (int)t4));
            t8 = (*(int *)(((int)stk + 16)));
            t4 = (memset(t8, (t4 + 0x30), 0x1));
            t8 = ((((struct o0_int *)0xC2A4FA8)->v));
            t4 = (FUN_0c03232a(t8, (0x34C + ((int)stk + 8)), (((int)stk + 8) + 0x2C), 0x3));
            *(unsigned int *)(((int)stk + 24)) = t4;
            if (t4 == 0) {
                t8 = t9;
                t4 = 0x2FC;
                t8 = (t8 << 1);
                t8 = (t8 + t9);
                t31 = *(int *)((((int)stk + 8) + t4));
                t4 = 0x300;
                t8 = (t8 << 2);
                t6 = 0xC2A4AD0;
                t9 = (t9 + 0x1);
                t8 = (t8 + t6);
                *(unsigned int *)((t8 + 0x0)) = t31;
                t5 = (*(int *)((((int)stk + 8) + t4)));
                t4 = 0x304;
                *(unsigned int *)((t8 + 0x4)) = t5;
                *(unsigned int *)((t8 + 0x8)) = (*(int *)((((int)stk + 8) + t4)));
                continue;
            }
            break;
        }
        *(unsigned int *)0xC12BA20 = 0x0;
    } else {
        if ((int)(*(int *)(((int)stk + 44))) < 0) {
            t41 = ((*(int *)((((t0 * 0x7C) + 0xC2A46F0) + 0x10))) + 0x1);
        } else {
            t41 = (*(int *)((((t0 * 0x7C) + 0xC2A46F0) + 0x10)));
        }
        t43 = 0x5;
        if ((int)t41 < (int)0x5) {
            t43 = t41;
        }
        t45 = *(int *)(((int)stk + 28));
        *(unsigned int *)(((int)stk + 32)) = (t43 + t45);
        if ((int)(t43 + t45) >= (int)t41) {
            *(unsigned int *)(((int)stk + 32)) = t41;
        }
        t50 = *(int *)(((int)stk + 28));
        *(unsigned int *)(((int)stk + 48)) = 0x0;
        *(unsigned int *)(((int)stk + 8)) = (*(int *)(((int)stk + 8)));
        t49 = 0x0;
        for (;;) {
            if ((int)t50 < (int)(*(int *)(((int)stk + 32)))) {
                if ((int)t50 >= 0) {
                    t49 = 0xC07FAEC;
                    if (((int)((int)(unsigned char)(*(signed char *)((((((t0 * 0x7C) + 0xC2A46F0) + 0x18) + t50) + 0x0))) / (int)0x64)) == 0) {
                        t49 = 0x52;
                        t61 = (*(int *)(((int)stk + 8)));
                    } else {
                        t49 = 0x44;
                        t61 = (*(int *)(((int)stk + 8)));
                    }
                    *(unsigned char *)((t61 + 0x0)) = t49;
                    t49 = 0xC07FC48;
                    memset((*(int *)(((int)stk + 12))), (((int)((int)((int)((int)(unsigned char)(*(signed char *)((((((t0 * 0x7C) + 0xC2A46F0) + 0x18) + t50) + 0x0))) % (int)0x64)) / (int)0xA)) + 0x30), 0x1);
                    memset((*(int *)(((int)stk + 16))), (((int)((int)((int)((int)(unsigned char)(*(signed char *)((((((t0 * 0x7C) + 0xC2A46F0) + 0x18) + t50) + 0x0))) % (int)0x64)) % (int)0xA)) + 0x30), 0x1);
                    t49 = 0xC2A4FA8;
                    t74 = buGetFileInfo((*(int *)((t49 + 0x0))), (0x34C + ((int)stk + 8)), (0x338 + ((int)stk + 8)));
                    *(unsigned int *)(((int)stk + 24)) = t74;
                    if (t74 != 0) {
                        break;
                    }
                    t49 = (*(short *)(((int)stk + 836)));
                    t49 = (unsigned short)t49;
                    *(unsigned int *)(((int)stk + 36)) = t49;
                    t77 = *(int *)((((((t50 << 1) + t50) << 2) + 0xC2A4AD0) + 0x0));
                    if ((int)t77 <= (int)0x1) {
                        t49 = t77;
                        t80 = ((*(int *)((((((t50 << 1) + t50) << 2) + 0xC2A4AD0) + 0x8))) + ((t77 << 2) + t49));
                    } else {
                        t80 = (t77 + 0x8);
                    }
                    t49 = (*(int *)((((((t50 << 1) + t50) << 2) + 0xC2A4AD0) + 0x4)));
                    *(unsigned int *)(((int)stk + 40)) = t49;
                    t49 = 0xFFFFF85A;
                    t84 = FUN_0c07ffac(((unsigned short)(*(short *)(((int)stk + 842))) + t49));
                    t49 = (*(signed char *)(((0x344 + ((int)stk + 8)) + 0x0)));
                    t49 = (unsigned char)t49;
                    t49 = (t49 << 16);
                    t49 = (t49 << 2);
                    t49 = (t49 << 2);
                    t87 = (((t84 << 16) << 8) | t49);
                    t49 = (*(signed char *)(((0x345 + ((int)stk + 8)) + 0x0)));
                    t49 = (unsigned char)t49;
                    t49 = (t49 << 15);
                    t89 = (t87 | t49);
                    t49 = (*(signed char *)(((0x346 + ((int)stk + 8)) + 0x0)));
                    t49 = (unsigned char)t49;
                    t49 = (t49 << 8);
                    t49 = (t49 << 2);
                    t91 = (t89 | t49);
                    t49 = (*(signed char *)(((0x347 + ((int)stk + 8)) + 0x0)));
                    t49 = (unsigned char)t49;
                    t49 = (t49 << 2);
                    t49 = (t49 << 2);
                    t93 = (t91 | t49);
                    t49 = (*(signed char *)(((0x348 + ((int)stk + 8)) + 0x0)));
                    t49 = (unsigned char)t49;
                    t49 = ((unsigned int)t49 >> 2);
                    t94 = (t93 | t49);
                    t49 = 0x1;
                    *(unsigned int *)(((int)stk + 20)) = t94;
                    if ((t49 & t50) != 0) {
                        t99 = (-(*(int *)0xC2A5860));
                    } else {
                        t99 = (*(int *)0xC2A5860);
                    }
                    t49 = 0xC2A5858;
                    u104 = *(float *)((t49 + 0x0));
                    u54 = (float)((*(int *)(((int)stk + 48))) + 0x78);
                    u53 = (float)(t99 + 0xE6);
                    if (t50 == (*(int *)(((int)stk + 44)))) {
                        if (((int)t50 >= 0) && (t106 = *(int *)((((t0 * 0x7C) + 0xC2A46F0) + 0x10)), (int)t50 < (int)t106)) {
                            *(int *)((int)stk + 4) = (0x34C + ((int)stk + 8));
                            t49 = (*(int *)(((int)stk + 36)));
                            t108 = t49;
                            *(int *)((int)stk + 0) = t108;
                            FUN_0c03bc10(0x1, t80, (*(int *)(((int)stk + 40))), (*(int *)(((int)stk + 20))), t108, (0x34C + ((int)stk + 8)), u53, u54, u104);
                        } else {
                            t115 = t49;
                        }
                        t49 = t115;
                        t49 = 0xC2A5858;
                        u51 = 32.0f;
                        u52 = 3.0f;
                        FUN_0c03b72e(0x1, 0xFFD82CDE, u53, u54, (*(float *)((t49 + 0x0))), 376.0f, u51, 0.0f, u52);
                        u54 = 40.0f;
                        *(int *)((int)stk + 4) = (0x34C + ((int)stk + 8));
                        t49 = (*(int *)(((int)stk + 36)));
                        t122 = t49;
                        *(int *)((int)stk + 0) = t122;
                        t49 = 0xC2A5858;
                        u124 = *(float *)((t49 + 0x0));
                        t49 = 0xC2A585C;
                        t126 = *(int *)((t49 + 0x0));
                        t49 = 0xE6;
                        FUN_0c03bc10(0x1, t80, (*(int *)(((int)stk + 40))), (*(int *)(((int)stk + 20))), t122, (0x34C + ((int)stk + 8)), (float)((t126 + (*(int *)0xC12BA20)) + t49), u54, u124);
                        t49 = 0xC07FFF0;
                        t130 = ((int (*)(int, int, int))(memcpy))(0xC12A943, (*(int *)(((int)stk + 8))), 0x3);
                        (((struct o20_uint *)0xC2A4FA8)->v) = (*(int *)(((int)stk + 20)));
                    } else {
                        *(int *)((int)stk + 4) = (0x34C + ((int)stk + 8));
                        t133 = (*(int *)(((int)stk + 36)));
                        *(int *)((int)stk + 0) = t133;
                        FUN_0c03bc10(0x0, t80, (*(int *)(((int)stk + 40))), (*(int *)(((int)stk + 20))), t133, (0x34C + ((int)stk + 8)), u53, u54, u104);
                    }
                    t49 = (*(int *)(((int)stk + 48)));
                    t50 = (t50 + 0x1);
                    t49 = (t49 + 0x24);
                    *(unsigned int *)(((int)stk + 48)) = t49;
                    continue;
                }
                t141 = 0x0;
                t142 = 0x0;
                for (;;) {
                    if ((int)t141 >= (int)(*(int *)((((t0 * 0x7C) + 0xC2A46F0) + 0x10)))) {
                        break;
                    }
                    t49 = (*(signed char *)((((((t0 * 0x7C) + 0xC2A46F0) + 0x18) + t141) + 0x0)));
                    t49 = (unsigned char)t49;
                    if (t142 == t49) {
                        t142 = (t142 + 0x1);
                        t141 = 0x0;
                    } else {
                        t141 = (t141 + 0x1);
                    }
                }
                t49 = 0xC07FAEC;
                if (((int)((int)t142 / (int)0x64)) == 0) {
                    t49 = 0x52;
                    t153 = (*(int *)(((int)stk + 8)));
                } else {
                    t49 = 0x44;
                    t153 = (*(int *)(((int)stk + 8)));
                }
                *(unsigned char *)((t153 + 0x0)) = t49;
                t155 = (int)((int)t142 % (int)0x64);
                *(unsigned int *)(((int)stk + 20)) = t155;
                memset((*(int *)(((int)stk + 12))), (((int)((int)t155 / (int)0xA)) + 0x30), 0x1);
                t49 = 0xC07FC48;
                memset((*(int *)(((int)stk + 16))), (((int)((int)(*(int *)(((int)stk + 20))) % (int)0xA)) + 0x30), 0x1);
                t49 = 0x1;
                t163 = (((struct o0_int *)0xC2AC5CC)->v);
                t167 = (t163 + 0x8);
                if ((int)t163 <= (int)t49) {
                    t167 = (((((struct o8_int *)0xC2AC5CC)->v)) + ((t163 << 2) + t163));
                }
                t49 = ((((struct oC_int *)0xC2A4FA8)->v));
                *(unsigned int *)(((int)stk + 36)) = t49;
                t49 = 0xC14CA9A;
                *(unsigned int *)(((int)stk + 40)) = ((((struct o4_int *)0xC2AC5CC)->v));
                syRtcGetDate((0x32C + ((int)stk + 8)));
                t49 = 0xFFFFF85A;
                t175 = FUN_0c07ffac(((unsigned short)(*(short *)(((int)stk + 820))) + t49));
                t49 = (*(signed char *)(((0x32E + ((int)stk + 8)) + 0x0)));
                t49 = (unsigned char)t49;
                t49 = (t49 << 16);
                t49 = (t49 << 2);
                t49 = (t49 << 2);
                t178 = (((t175 << 16) << 8) | t49);
                t49 = (*(signed char *)(((0x32F + ((int)stk + 8)) + 0x0)));
                t49 = (unsigned char)t49;
                t49 = (t49 << 15);
                t180 = (t178 | t49);
                t49 = (*(signed char *)(((0x330 + ((int)stk + 8)) + 0x0)));
                t49 = (unsigned char)t49;
                t49 = (t49 << 8);
                t49 = (t49 << 2);
                t182 = (t180 | t49);
                t49 = (*(signed char *)(((0x331 + ((int)stk + 8)) + 0x0)));
                t49 = (unsigned char)t49;
                t49 = (t49 << 2);
                t49 = (t49 << 2);
                t184 = (t182 | t49);
                t49 = (*(signed char *)(((0x332 + ((int)stk + 8)) + 0x0)));
                t49 = (unsigned char)t49;
                t49 = ((unsigned int)t49 >> 2);
                t185 = (t184 | t49);
                t49 = 0x1;
                *(unsigned int *)(((int)stk + 20)) = t185;
                if ((t49 & t50) != 0) {
                    t190 = (-(*(int *)0xC2A5860));
                } else {
                    t190 = (*(int *)0xC2A5860);
                }
                t49 = 0xC2A5858;
                u195 = *(float *)((t49 + 0x0));
                u54 = (float)((*(int *)(((int)stk + 48))) + 0x78);
                u53 = (float)(t190 + 0xE6);
                if (t50 == (*(int *)(((int)stk + 44)))) {
                    if (((int)t50 >= 0) && (t197 = *(int *)((((t0 * 0x7C) + 0xC2A46F0) + 0x10)), (int)t50 < (int)t197)) {
                        *(int *)((int)stk + 4) = (0x34C + ((int)stk + 8));
                        t49 = (*(int *)(((int)stk + 36)));
                        t199 = t49;
                        *(int *)((int)stk + 0) = t199;
                        FUN_0c03bc10(0x1, t167, (*(int *)(((int)stk + 40))), (*(int *)(((int)stk + 20))), t199, (0x34C + ((int)stk + 8)), u53, u54, u195);
                    } else {
                        t206 = t49;
                    }
                    t49 = t206;
                    t49 = 0xC2A5858;
                    u51 = 32.0f;
                    u52 = 3.0f;
                    FUN_0c03b72e(0x1, 0xFFD82CDE, u53, u54, (*(float *)((t49 + 0x0))), 376.0f, u51, 0.0f, u52);
                    u54 = 40.0f;
                    *(int *)((int)stk + 4) = (0x34C + ((int)stk + 8));
                    t49 = (*(int *)(((int)stk + 36)));
                    t213 = t49;
                    *(int *)((int)stk + 0) = t213;
                    t49 = 0xC2A5858;
                    u215 = *(float *)((t49 + 0x0));
                    t49 = 0xC2A585C;
                    t217 = *(int *)((t49 + 0x0));
                    t49 = 0xE6;
                    FUN_0c03bc10(0x1, t167, (*(int *)(((int)stk + 40))), (*(int *)(((int)stk + 20))), t213, (0x34C + ((int)stk + 8)), (float)((t217 + (*(int *)0xC12BA20)) + t49), u54, u215);
                    t49 = 0xC07FFF0;
                    t221 = ((int (*)(int, int, int))(memcpy))(0xC12A943, (*(int *)(((int)stk + 8))), 0x3);
                    (((struct o20_uint *)0xC2A4FA8)->v) = (*(int *)(((int)stk + 20)));
                } else {
                    *(int *)((int)stk + 4) = (0x34C + ((int)stk + 8));
                    t224 = (*(int *)(((int)stk + 36)));
                    *(int *)((int)stk + 0) = t224;
                    FUN_0c03bc10(0x0, t167, (*(int *)(((int)stk + 40))), (*(int *)(((int)stk + 20))), t224, (0x34C + ((int)stk + 8)), u53, u54, u195);
                }
                t49 = (*(int *)(((int)stk + 48)));
                t50 = (t50 + 0x1);
                t49 = (t49 + 0x24);
                *(unsigned int *)(((int)stk + 48)) = t49;
                continue;
            }
            t49 = (*(int *)(((int)stk + 28)));
            u53 = 218.0f;
            u54 = 1.0f;
            if ((int)t49 > 0) {
                t49 = (*(int *)0xC2A5860);
                FUN_0c03baba(0x0, 0xD82CDE, ((float)t49 + u53), 124.0f);
            }
            t49 = (*(int *)(((int)stk + 32)));
            if ((int)t49 < (int)(*(int *)((((t0 * 0x7C) + 0xC2A46F0) + 0x10)))) {
                t49 = (*(int *)0xC2A5860);
                FUN_0c03baba(0xFFFFFFFF, 0xD82CDE, ((float)t49 + u53), 270.0f);
                return (*(int *)(((int)stk + 24)));
            }
            return (*(int *)(((int)stk + 24)));
        }
    }
    return (*(int *)(((int)stk + 24)));
}
