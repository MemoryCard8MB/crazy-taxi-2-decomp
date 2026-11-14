/* Hand-written C (step 6). */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10E8_uint { char p[0x10E8]; unsigned int v; };
struct o28_int { char p[0x28]; int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o34_int { char p[0x34]; int v; };
struct o38_int { char p[0x38]; int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oFBC_int { char p[0xFBC]; int v; };
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int mpdrv_frame_recv_pre(void);
int mpdrv_frame_recv_main(void);
int copy_device(void);
int mpdrv_frame_recv_post(void);
int FUN_0c1691a4(void);
int trigger(void);
int kdGetStatus(int);
int kdGetDeviceInfo(int);
int kdGetDevice(int);

int kdRecvFrame(void)
{
    int hpos;
    int vreg;
    int t0;
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

    t1 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    t2 = mpdrv_frame_recv_pre();
    if (t2 == -2) {
        (((struct o10E8_uint *)((*(int *)0xC30817C)))->v) = 0x1;
    } else {
        if ((int)t2 < 0) {
            t3 = (((struct o34_int *)0xC3024A8)->v);
            if (t3 != 0) {
                t4 = ((int (*)(int, int, int, int))(t3))(0x2, 0xFFFFFFF8, ((((struct o4_int *)0xC3024A8)->v)), t2);
            }
        } else {
            mpdrv_frame_recv_main();
            t3 = (((struct o0_int *)0xC302728)->v);
            /* manual: the original reads the beam position (0xA05F810C) before 0xA05F80DC; two volatile reads keep that order */
            hpos = (*(volatile int *)0xA05F810C) & 0x3FF;
            vreg = (*(volatile int *)0xA05F80DC) & 0x3FF;
            *(unsigned short *)(((0xC3024D4 + (t3 << 1)) + 0x0)) = (hpos + ((unsigned short)(*(short *)(((0xC3024D8 + (t3 << 1)) + 0x0))) * (unsigned short)vreg));
            copy_device();
            mpdrv_frame_recv_post();
            t3 = FUN_0c1691a4();
            t4 = t3;
            if (t3 != 0) {
                t3 = (((struct o38_int *)0xC3024A8)->v);
                if (t3 != 0) {
                    t5 = ((int (*)(void))(t3))();
                    if (t5 != 0) {
                        (((struct oC_uint *)0xC302728)->v) = (trigger());
                        t3 = 0xC302734;
                    }
                    t5 = t3;
                } else {
                    (((struct oC_uint *)0xC302728)->v) = (trigger());
                    t5 = 0xC302734;
                }
                t3 = (((struct oFBC_int *)((*(int *)0xC30817C)))->v);
                t6 = 0xFBC;
                t7 = t5;
                t5 = t3;
                if ((t3 != 0) && (t0 = (((struct oC_int *)0xC302728)->v), t0 != 0)) {
                    (((struct o4_uint *)0xC302728)->v) = (*(int *)0xA05F8040);
                    *(unsigned int *)0xA05F8040 = ((((struct oFBC_int *)((*(int *)0xC30817C)))->v));
                    t0 = (((struct oC_int *)0xA05F80DC)->v);
                    (((struct oC_uint *)0xA05F80DC)->v) = (t0 | 0x8);
                    (((struct o8_uint *)0xC302728)->v) = 0x1;
                    (((struct o28_uint *)0xC302728)->v) = (((((struct o28_int *)0xC302728)->v)) + 0x1);
                    t6 = (t0 | 0x8);
                    t7 = 0xC302730;
                    t5 = 0xC30272C;
                    t0 = 0xC302750;
                }
                t4 = t6;
                t3 = t7;
                t6 = t5;
                t5 = t0;
            }
            t0 = t4;
            t4 = t3;
            t3 = t6;
            t6 = t5;
            t5 = 0x0;
            t7 = 0xC3024E4;
            for (;;) {
                if ((int)t5 >= (int)0x30) {
                    break;
                }
                if ((*(int *)((t7 + 0x8))) != 0) {
                    *(volatile int *)((t7 + 0x4));
                    t6 = (*(int *)((t7 + 0x0)));
                    t0 = (kdGetStatus(t6));
                    if (t0 != 0) {
                        t8 = *(int *)((t7 + 0x8));
                        *(unsigned int *)((t7 + 0x8)) = 0x0;
                        t6 = (*(int *)((t7 + 0x0)));
                        t0 = (kdGetDeviceInfo(t6));
                        t9 = t0;
                        t6 = (*(int *)((t7 + 0x0)));
                        t0 = (kdGetDevice(t6));
                        t4 = (t8);
                        t6 = (*(int *)((t7 + 0x0)));
                        t0 = (((int (*)(int, int, int, int))(t4))(t6, (*(int *)((t7 + 0x4))), t0, t9));
                    }
                } else {
                    t8 = t4;
                    t9 = t3;
                    t10 = t6;
                }
                t4 = t8;
                t7 = (t7 + 0xC);
                t3 = t9;
                t6 = t10;
                t5 = (t5 + 0x1);
            }
            (((struct o10E8_uint *)((*(int *)0xC30817C)))->v) = 0x0;
            (((struct o0_uint *)0xC302728)->v) = (((((struct o0_int *)0xC302728)->v)) ^ 0x1);
            (((struct o0_uint *)0xC3024A8)->v) = (((((struct o0_int *)0xC3024A8)->v)) + 0x1);
        }
    }
    _builtin_set_imask(((unsigned int)(((t1 & 0xF) << 2) << 2) >> 4));
    return t2;
}

struct o10A8_int { char p[0x10A8]; int v; };
struct o10A8_uint { char p[0x10A8]; unsigned int v; };
struct o10AC_uint { char p[0x10AC]; unsigned int v; };
struct o10B4_uint { char p[0x10B4]; unsigned int v; };
struct o10B8_uint { char p[0x10B8]; unsigned int v; };
struct o10BC_uint { char p[0x10BC]; unsigned int v; };
struct o10C0_uint { char p[0x10C0]; unsigned int v; };
struct o10C8_uint { char p[0x10C8]; unsigned int v; };
struct o10CC_uint { char p[0x10CC]; unsigned int v; };
struct o10D0_uint { char p[0x10D0]; unsigned int v; };
struct o10D4_uint { char p[0x10D4]; unsigned int v; };
struct o10D8_uint { char p[0x10D8]; unsigned int v; };
struct o10DC_uint { char p[0x10DC]; unsigned int v; };
struct o10E0_uint { char p[0x10E0]; unsigned int v; };
struct o10E4_uint { char p[0x10E4]; unsigned int v; };
struct o10EC_uint { char p[0x10EC]; unsigned int v; };
struct o10F0_uint { char p[0x10F0]; unsigned int v; };
struct o10F8_uint { char p[0x10F8]; unsigned int v; };
struct o448_uint { char p[0x448]; unsigned int v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct oF8C_uint { char p[0xF8C]; unsigned int v; };
struct oFA8_uint { char p[0xFA8]; unsigned int v; };
struct oFAC_uint { char p[0xFAC]; unsigned int v; };
struct oFB0_uint { char p[0xFB0]; unsigned int v; };
struct oFBC_uint { char p[0xFBC]; unsigned int v; };
struct oFC4_int { char p[0xFC4]; int v; };
struct oFC8_int { char p[0xFC8]; int v; };
struct oFCC_uint { char p[0xFCC]; unsigned int v; };
struct oFD8_uint { char p[0xFD8]; unsigned int v; };
struct oFDC_uint { char p[0xFDC]; unsigned int v; };
struct oFE0_uint { char p[0xFE0]; unsigned int v; };
struct oFE4_uint { char p[0xFE4]; unsigned int v; };
int mpdrv_memset_l(int, int, int);
int mpdrv_clear_deviceinfo(int);
int mpdrv_swapmode(int);
int mpdrv_init_memory(void);

int mpdrv_init_globals(void)
{
    int stk[2];
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t7;
    register int t9;
    register int t11;
    register int t13;
    register int t15;
    register int t21;
    register int t24;
    register int t26;
    register int t32;
    register int t34;
    register int t35;
    register int t36;
    register int t37;
    register int t38;
    register int t39;

    (((struct o10B4_uint *)((*(int *)0xC30817C)))->v) = 0x0;
    (((struct o10B8_uint *)((*(int *)0xC30817C)))->v) = 0x0;
    t2 = 0x0;
    t3 = 0x6000;
    t4 = 0x0;
    for (;;) {
        t5 = *(int *)0xC30817C;
        *(unsigned int *)((((0xFE8 + t5) + t2) + 0x0)) = (((((struct oFC8_int *)(t5))->v)) + t4);
        t7 = *(int *)0xC30817C;
        t9 = ((0xFE8 + t7) + t2);
        t2 = (t2 + 0x4);
        (((struct o60_uint *)(t9))->v) = (((((struct oFC8_int *)(t7))->v)) + t3);
        t3 = (t3 + 0x400);
        t4 = (t4 + 0x400);
        if ((unsigned int)t2 >= (unsigned int)0x60) {
            break;
        }
    }
    t11 = *(int *)0xC30817C;
    (((struct o10A8_uint *)(t11))->v) = ((((struct oFC4_int *)(t11))->v));
    t13 = *(int *)0xC30817C;
    (((struct o10AC_uint *)(t13))->v) = (((((struct oFC4_int *)(t13))->v)) + 0x3000);
    t15 = *(int *)0xC30817C;
    (((struct oFCC_uint *)(t15))->v) = ((((struct o10A8_int *)(t15))->v));
    mpdrv_memset_l(((*(int *)0xC30817C) + 0x4), 0x0, 0x8);
    mpdrv_memset_l(((*(int *)0xC30817C) + 0x28), 0x0, 0x108);
    t21 = 0x0;
    for (;;) {
        mpdrv_clear_deviceinfo((((*(int *)0xC30817C) + 0x44C) + t21));
        t21 = (t21 + 0x78);
        if ((unsigned int)t21 >= (unsigned int)0xB40) {
            break;
        }
    }
    t24 = 0x0;
    for (;;) {
        t26 = ((0xF90 + (*(int *)0xC30817C)) + t24);
        t24 = (t24 + 0x1);
        *(unsigned char *)((t26 + 0x0)) = 0x0;
        if ((int)t24 >= (int)0x18) {
            break;
        }
    }
    *(unsigned char *)(((((int)stk + 0) + 0x4) + 0x0)) = (*(signed char *)0xC171A68);
    *(unsigned char *)(((((int)stk + 0) + 0x4) + 0x1)) = (*(signed char *)0xC171A69);
    *(unsigned char *)(((((int)stk + 0) + 0x4) + 0x2)) = (*(signed char *)0xC171A6A);
    *(unsigned char *)(((((int)stk + 0) + 0x4) + 0x3)) = (*(signed char *)0xC171A6B);
    t32 = 0xF;
    /* manual: the original reads the whole register word and keeps its low byte (volatile: the compiler made it a byte read) */
    if ((int)(unsigned char)(*(volatile int *)0xA05F689C) <= (int)0x1) {

        t32 = 0x7;
    }
    *(unsigned int *)(((int)stk + 0)) = ((((int)stk + 0) + 0x4) + 0x4);
    t34 = 0xA05F689C;
    t35 = ((((int)stk + 0) + 0x4) + 0x4);
    t36 = (((int)stk + 0) + 0x4);
    t37 = 0x0;
    t38 = 0x0;
    t39 = t21;
    for (;;) {
        if (((*(signed char *)((t36 + 0x0))) & (signed char)t32) != 0) {
            t35 = t38;
            t34 = (*(int *)0xC30817C);
            t35 = (t35 + 0x1);
            t39 = 0x0;
            *(unsigned char *)((((0xF90 + t34) + t37) + 0x0)) = 0x52;
            for (;;) {
                t39 = (t39 + 0x1);
                t34 = (*(int *)0xC30817C);
                *(unsigned char *)((((0xF90 + t34) + t35) + 0x0)) = 0x45;
                t35 = (t35 + 0x1);
                if ((int)t39 >= (int)0x5) {
                    break;
                }
            }
        }
        t36 = (t36 + 0x1);
        t38 = (t38 + 0x6);
        t37 = (t37 + 0x6);
        if ((unsigned int)t36 >= (unsigned int)(*(int *)(((int)stk + 0)))) {
            break;
        }
    }
    (((struct o10C0_uint *)((*(int *)0xC30817C)))->v) = 0xC3500000;
    (((struct oFDC_uint *)((*(int *)0xC30817C)))->v) = 0x0;
    (((struct oFD8_uint *)((*(int *)0xC30817C)))->v) = 0x0;
    (((struct oFE0_uint *)((*(int *)0xC30817C)))->v) = 0x1;
    (((struct o10C8_uint *)((*(int *)0xC30817C)))->v) = 0x0;
    (((struct o10EC_uint *)((*(int *)0xC30817C)))->v) = 0x0;
    (((struct o10E8_uint *)((*(int *)0xC30817C)))->v) = 0x0;
    (((struct o10CC_uint *)((*(int *)0xC30817C)))->v) = 0x5;
    (((struct o10D0_uint *)((*(int *)0xC30817C)))->v) = 0x0;
    (((struct o10D8_uint *)((*(int *)0xC30817C)))->v) = 0xA;
    (((struct o10DC_uint *)((*(int *)0xC30817C)))->v) = 0x5;
    (((struct o10E0_uint *)((*(int *)0xC30817C)))->v) = 0x0;
    (((struct o10E4_uint *)((*(int *)0xC30817C)))->v) = 0x0;
    (((struct oFAC_uint *)((*(int *)0xC30817C)))->v) = 0x0;
    (((struct oFB0_uint *)((*(int *)0xC30817C)))->v) = 0x0;
    (((struct oFBC_uint *)((*(int *)0xC30817C)))->v) = 0x0;
    *(unsigned int *)(((*(int *)0xC30817C) + 0x0)) = 0x54524F50;
    *(unsigned int *)(((*(int *)0xC30817C) + 0x24)) = 0x20564544;
    (((struct o448_uint *)((*(int *)0xC30817C)))->v) = 0x4F464E49;
    (((struct oF8C_uint *)((*(int *)0xC30817C)))->v) = 0x4C424E45;
    (((struct oFA8_uint *)((*(int *)0xC30817C)))->v) = 0x54415453;
    (((struct oFE4_uint *)((*(int *)0xC30817C)))->v) = 0x52444152;
    (((struct o10BC_uint *)((*(int *)0xC30817C)))->v) = 0x54554F54;
    (((struct o10D4_uint *)((*(int *)0xC30817C)))->v) = 0x43515244;
    (((struct o10F0_uint *)((*(int *)0xC30817C)))->v) = 0x434E5546;
    (((struct o10F8_uint *)((*(int *)0xC30817C)))->v) = 0x20444E45;
    mpdrv_swapmode(0x0);
    return (mpdrv_init_memory());
}

struct o0_short { short v; };
struct o0_ushort { unsigned short v; };
struct o10_int { char p[0x10]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
int FUN_0c07ff00(void);
float nlRoundUp(float);
float nlFraction(float);
float FUN_0c072140(int);
int FUN_0c076230(float, float, float);
int FUN_0c02d8a8(int, float);
int nlPushMatrix(int);
int FUN_0c073a30(float, float, float);
int nlRotateAY(int);
int nlObjPutSetLightDirectionV(int);
int nlScale(float, float, float);
int FUN_0c074f20(float);
int nlObjPutTrnsl(int, float);
int nlObjPut(int);
int nlPopMatrix(int);
int FUN_0c026ce6(void);
int FUN_0c026c02(void);

int FUN_0c0166c0(int a4, int a5, float f4)
{
    int stk[8];
    register int t0;
    register int t169;
    register int t13;
    register float u54;
    register float u59;
    register float u64;
    register float u68;
    int t96;
    register int t97;
    register int t98;
    register int t106;
    int t8;
    register float u72;
    register float u41;

    *(unsigned short *)(((int)stk + 0)) = a4;
    t0 = (((struct o4_int *)0xC2AC2F0)->v);
    t169 = t0;
    if (t0 == 1) {
    } else {
        t169 = 0xC177D58;
        if ((((((struct o0_int *)0xC1EC740)->v)) == 0) && (t8 = (*(int *)0xC177D58 /* manual: the word at 0xC177D58 (an offset struct put it at +8 by alignment) */)
, t8 != 0)) {
        } else {
            t13 = (((struct o0_int *)0xC2AC2F0)->v);
            t169 = t13;
            if (t13 == 1) {
            } else {
                if (((((struct o4_int *)0xC11CE3C)->v)) != a5) {
                    (((struct o8_uint *)0xC11CE3C)->v) = 0x0;
                    (((struct o0_ushort *)0xC11CE3C)->v) = 0x0;
                }
                (((struct o4_uint *)0xC11CE3C)->v) = a5;
                if (!(1800.0f > f4)) {
                    if ((*(int *)0xC177CEC) == 0) {
                        FUN_0c07ff00();
                    } else {
                        FUN_0c07ff00();
                    }
                    u72 = 1.0f;
                } else {
                    if (0.0f > (((f4 + -200.0f) / 1600.0f) * 4.0f)) {
                        if ((*(int *)0xC177CEC) == 0) {
                            FUN_0c07ff00();
                        } else {
                            FUN_0c07ff00();
                        }
                        u41 = 0.0f;
                    } else {
                        if ((*(int *)0xC177CEC) == 0) {
                            nlRoundUp((((f4 + -200.0f) / 1600.0f) * 4.0f));
                            FUN_0c07ff00();
                        } else {
                            nlRoundUp((((f4 + -200.0f) / 1600.0f) * 4.0f));
                            FUN_0c07ff00();
                        }
                        u41 = (((f4 + -200.0f) / 1600.0f) * 4.0f);
                    }
                    nlFraction(u41);
                    if ((*(int *)0xC177CEC) == 0) {
                        FUN_0c07ff00();
                    } else {
                        FUN_0c07ff00();
                    }
                    u54 = (*(float *)(((int)stk + 20)));
                    u54 = u54 + f4 * ((((((struct o8_float *)(((int)stk + 0)))->v)) - (*(float *)(((int)stk + 20)))));
                    *(float *)(((int)stk + 20)) = u54;
                    u59 = (*(float *)(((int)stk + 24)));
                    u59 = u59 + f4 * ((((((struct o4_float *)((((int)stk + 0) + 0x8)))->v)) - (*(float *)(((int)stk + 24)))));
                    *(float *)(((int)stk + 24)) = u59;
                    u64 = (*(float *)(((int)stk + 28)));
                    u64 = u64 + f4 * ((((((struct o8_float *)((((int)stk + 0) + 0x8)))->v)) - (*(float *)(((int)stk + 28)))));
                    *(float *)(((int)stk + 28)) = u64;
                    (((struct o0_ushort *)0xC11CE3C)->v) = (((((struct o0_short *)0xC11CE3C)->v)) + ((int)(1800.0f - f4) + 0x120));
                    u68 = 1.20000005f;
                    u68 = u68 + 0.270000011f * (FUN_0c072140((unsigned short)((((struct o0_short *)0xC11CE3C)->v))));
                    u72 = u68;
                }
                FUN_0c076230((*(float *)(((int)stk + 20))), (*(float *)(((int)stk + 24))), (*(float *)(((int)stk + 28))));
                *(unsigned int *)(((int)stk + 4)) = (FUN_0c02d8a8(a5, f4));
                if (a5 == 0) {
                    nlPushMatrix(0x0);
                    FUN_0c073a30(0.0f, 0.200000003f, -0.699999988f);
                    nlRotateAY((((-(unsigned short)((((struct o0_short *)0xC177D52)->v))) + (unsigned short)(*(short *)(((int)stk + 0)))) - 32768));
                    *(float *)(((int)stk + 20)) = -0.150000006f;
                    *(float *)(((int)stk + 24)) = -0.400000006f;
                    *(float *)(((int)stk + 28)) = 0.5f;
                    nlObjPutSetLightDirectionV((((int)stk + 0) + 0x14));
                    nlScale(u72, u72, u72);
                    FUN_0c074f20(u72);
                    if ((*(int *)(((int)stk + 4))) != 0) {
                        nlObjPutTrnsl(0xC4012F8, 0.5f);
                    } else {
                        nlObjPut(0xC4012F8);
                    }
                    nlPopMatrix(0x1);
                } else {
                    t96 = (((struct o8_int *)0xC11CE3C)->v);
                    t97 = (((struct o10_int *)0xC1EC740)->v);
                    if (a5 == 1) {
                        if ((int)(0x1F & t96) < (int)0x1B) {
                            t98 = ((int (*)(int, int, int, int))(0xC0527C4))(((((int)(t96 & 0x7F) >= (int)0x3F)) ? 1 : 0), t97, 0x1B, (0x1F & t96));
                        }
                    } else {
                        if ((int)(t96 & 0x1F) < (int)0x1B) {
                            t106 = ((int (*)(int, int, int, int))(0xC0527C4))(0x2, t97, 0x1B, 0x1F);
                        }
                    }
                    (((struct o8_uint *)0xC11CE3C)->v) = (((((struct o8_int *)0xC11CE3C)->v)) + 0x1);
                }
                FUN_0c026ce6();
                t169 = (FUN_0c026c02());
            }
        }
    }
    return t169;
}

int FUN_0c02803a(int, int, int, int);
float FUN_0c070db0(int, int, int, float, float);
int FUN_0c07c8be(int);
int FUN_0c03341c(float);
int FUN_0c039342(int, float, float, float);
int pfSize(float, float);
int FUN_0c038b04(int, int, float, float, float);
float FUN_0c02806c(int);

int FUN_0c0393ea(int a4, int a5, float f4)
{
    int stk[13];
    register int t2;
    register int t8;
    register int t7;
    register float u11;
    register float u13;
    register float u15;
    int t16;
    register int t17;
    register int t18;
    register int t21;
    register int t22;
    register int t23;
    register float u24;
    register float u26;
    register float u28;
    register float u29;
    register float u30;
    register float u33;
    register float u36;
    register float u39;
    register float u51;
    register float u109;
    register float u111;
    register float u112;
    register int t117;
    register float u119;
    register float u130;
    register float u132;
    register int t133;
    register float u134;
    register float u135;
    register float u136;
    register float u145;
    register float u146;
    register float u147;
    register float u149;
    register int t9;
    register int t20;
    register float u25;
    register float u27;
    register int t42;
    register int t95;
    register int t98;
    register int t101;
    register float u104;
    register float u85;
    register float u72;
    register int t124;

    *(unsigned int *)(((int)stk + 0)) = a5;
    *(float *)(((int)stk + 12)) = f4;
    if ((int)a4 < 0) {
        return 0xC;
    }
    t2 = 0x0;
    if ((*(int *)0xC2A4658) == 1) {
        t2 = 0x1;
    }
    FUN_0c02803a(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
    {
        /* manual: the original divides before the a4 == 0 test (and sets errno at 0xC2CF098 through _divls when a5 is 0); the volatile keeps the compiler from moving the division into the other branch */
        volatile int q = ((int)((int)a4 / (int)(*(int *)(((int)stk + 0)))));
        t8 = q;
    }
    if (a4 == 0) {
        t7 = 0xC2A5898;
        for (;;) {
            if ((unsigned int)t7 >= (unsigned int)0xC2A58A8) {
                break;
            }
            *(unsigned int *)((t7 + 0x0)) = 0x0;
            t7 = (t7 + 0x4);
        }
        t8 = t7;
        t9 = 0xC2A58A8;
    }
    *(float *)(((int)stk + 16)) = 0.310000002f;
    *(unsigned int *)(((int)stk + 20)) = (((t2 << 2) << 1) + t2);
    u11 = *(float *)(((int)stk + 12));
    u13 = 1.0f;
    u13 = u13 + ((u11 + -1.0f)) * 0.5f;
    *(float *)(((int)stk + 28)) = u13;
    u15 = 1.0f;
    u15 = u15 + ((u11 + -1.0f)) * 0.0f;
    *(float *)(((int)stk + 32)) = u15;
    t16 = 0x20;
    t17 = t2;
    t18 = t8;
    t21 = (((t2 << 2) << 1) + t2);
    t22 = 0x5;
    t23 = a4;
    u24 = u15;
    u26 = 150.0f;
    for (;;) {
        if ((int)t22 < (int)0x9) {
            t16 = 0xC0395C8;
            u28 = *(float *)((t16 + 0x0));
            t16 = 0xC0395CC;
            u29 = *(float *)((t16 + 0x0));
            t16 = t22;
            switch (t16) {
            case 5:
                u26 = u28;
                t16 = 0xC0395D0;
                u39 = *(float *)((t16 + 0x0));
                t16 = 0x4;
                *(float *)((((int)stk + 0) + t16)) = u39;
                break;
            case 6:
                u26 = u29;
                t16 = 0xC0395D0;
                u36 = *(float *)((t16 + 0x0));
                t16 = 0x4;
                *(float *)((((int)stk + 0) + t16)) = u36;
                break;
            case 7:
                u26 = u28;
                t16 = 0xC0395D4;
                u33 = *(float *)((t16 + 0x0));
                t16 = 0x4;
                *(float *)((((int)stk + 0) + t16)) = u33;
                break;
            case 8:
                u26 = u29;
                t16 = 0xC0395D4;
                u30 = *(float *)((t16 + 0x0));
                t16 = 0x4;
                *(float *)((((int)stk + 0) + t16)) = u30;
                break;
            }
            t21 = t22;
            t21 = (t21 - 5);
            t18 = 0xC2A5894;
            u25 = 0.0f;
            if (((int)t21 < (int)0x4) && (t16 = 0xC2A5898, t42 = *(int *)(((t21 << 2) + t16)), t17 = t42, (int)t17 < (int)0x1B)) {
                t16 = t21;
                t16 = (t16 << 2);
                t17 = (*(int *)((0xC2A5898 + t16)));
                if ((int)t17 < (int)0x14) {
                    t16 = 0xC0395E0;
                    t23 = 0xC070DB0;
                    u51 = *(float *)((t16 + 0x0));
                    t16 = t21;
                    t16 = (t16 << 2);
                    t17 = (*(int *)((0xC2A5898 + t16)));
                    t17 = (-t17);
                    t17 = (t17 + 0x14);
                    u24 = (float)t17;
                    t16 = t21;
                    u25 = (FUN_0c070db0(t18, 0x14, t9, u51, u24));
                    if ((int)t16 >= 0) {
                        t16 = (t16 & 0x1);
                    } else {
                        t16 = (~t16);
                        t16 = (t16 + 0x1);
                        t16 = (t16 & 0x1);
                        t16 = (~t16);
                        t16 = (t16 + 0x1);
                    }
                    if (t16 == 0) {
                        u25 = (-u25);
                    }
                    t16 = 0x1C;
                    u27 = (*(float *)((((int)stk + 0) + t16)));
                    t95 = 0xC070DB0;
                    t101 = t20;
                } else {
                    t16 = (*(int *)((0xC2A5898 + t16)));
                    t16 = (t16 - 20);
                    if (t16 != 0) {
                        if ((t16 != 3) && (t16 != 6)) {
                            if ((t16 != 1) && ((t16 != 4) && (t16 != 7))) {
                                u27 = 1.0f;
                            } else {
                                t16 = 0x20;
                                u27 = (*(float *)((((int)stk + 0) + t16)));
                            }
                        } else {
                            t16 = 0xC;
                            u27 = (*(float *)((((int)stk + 0) + t16)));
                        }
                        t98 = t18;
                        t101 = t20;
                        u72 = u24;
                    } else {
                        t23 = 0x405A9;
                        t20 = 0xC07C8BE;
                        *(unsigned int *)((t18 + 0x0)) = 0x0;
                        t18 = t23;
                        t16 = (FUN_0c07c8be(t18));
                        t16 = 0xC;
                        u27 = (*(float *)((((int)stk + 0) + t16)));
                        t101 = 0xC07C8BE;
                    }
                    t95 = t23;
                    u85 = u72;
                }
                u104 = u85;
            } else {
                t16 = (*(int *)((t18 + 0x0)));
                if ((t16 != 0) && (t16 != 3)) {
                    if ((t16 != 1) && (t16 != 4)) {
                        if ((t16 != 2) && (t16 != 5)) {
                            u27 = 1.0f;
                        } else {
                            t16 = 0xC0395F4;
                            u27 = (*(float *)((t16 + 0x0)));
                        }
                    } else {
                        t16 = 0xC0395F0;
                        u27 = (*(float *)((t16 + 0x0)));
                    }
                } else {
                    u27 = 1.0f;
                }
                t95 = t23;
                t98 = t18;
                t101 = t20;
                u104 = u24;
            }
            u24 = u104;
            t23 = t95;
            t17 = 0xC03341C;
            t18 = t98;
            t20 = t101;
            t16 = 0x10;
            t16 = (FUN_0c03341c((*(float *)((((int)stk + 0) + t16)))));
            t16 = 0xC039688;
            u109 = *(float *)((t16 + 0x0));
            t16 = 0x10;
            u24 = (*(float *)((((int)stk + 0) + t16)));
            t16 = 0x10;
            u24 = (u24 - u109);
            t18 = t22;
            *(float *)((((int)stk + 0) + t16)) = u24;
            t16 = 0xC03968C;
            u111 = *(float *)((t16 + 0x0));
            t16 = 0x4;
            u112 = *(float *)((((int)stk + 0) + t16));
            t16 = 0x18;
            *(float *)((((int)stk + 0) + t16)) = ((u26 - u25) + u111);
            t16 = (FUN_0c039342(t18, ((u26 - u25) + u111), (u112 + u111), u27));
            t16 = (pfSize(1.0f, 1.0f));
            t16 = t22;
            t16 = (t16 - 1);
            t20 = 0x213;
            t23 = 0x2C;
            if ((int)t16 >= 0) {
                t16 = (t16 & 0x7);
            } else {
                t16 = (~t16);
                t16 = (t16 + 0x1);
                t16 = (t16 & 0x7);
                t16 = (~t16);
                t16 = (t16 + 0x1);
            }
            t117 = (t16 * t23);
            t16 = 0xC039698;
            t17 = 0xC0B4158;
            u24 = (*(float *)((t16 + 0x0)));
            t16 = 0x4;
            u119 = *(float *)((((int)stk + 0) + t16));
            t16 = 0x18;
            t18 = t20;
            t16 = (FUN_0c038b04(t18, (t117 + t17), (*(float *)((((int)stk + 0) + t16))), (u119 + u24), u27));
            t16 = 0xC03969C;
            t17 = 0xC07FC48;
            *(unsigned int *)(((int)stk + 0)) = 0x0;
            u24 = (*(float *)((t16 + 0x0)));
            t23 = 0x0;
            u27 = (u27 * u24);
            t16 = 0x9;
            t16 = ((int)((int)t22 % (int)t16));
            *(unsigned int *)(((int)stk + 40)) = t16;
            for (;;) {
                t18 = 0xA0;
                if ((unsigned int)t23 >= (unsigned int)t18) {
                    break;
                }
                t16 = (pfSize(1.0f, 1.0f));
                t18 = (*(int *)(((int)stk + 20)));
                t124 = 0xC0B67B0;
                t17 = t18;
                t18 = (t18 << 2);
                t18 = (t18 + t17);
                t17 = 0xC02806C;
                t18 = (t18 << 2);
                t18 = (t18 << 2);
                t18 = (t18 << 1);
                t18 = (t18 + t124);
                t18 = (t18 + t23);
                *(unsigned int *)(((int)stk + 8)) = t18;
                t16 = 0xC0397CC;
                u24 = (*(float *)((t16 + 0x0)));
                t16 = 0x24;
                u130 = ((FUN_0c02806c(t18)) * u24);
                u24 = u26;
                *(float *)((((int)stk + 0) + t16)) = u130;
                t16 = 0x4;
                t17 = (*(int *)(((int)stk + 0)));
                u132 = *(float *)((((int)stk + 0) + t16));
                t16 = 0x30;
                t133 = *(int *)(((int)stk + 8));
                *(float *)((((int)stk + 0) + t16)) = ((float)t17 + u132);
                t16 = 0xC0397D0;
                u134 = *(float *)((t16 + 0x0));
                t16 = 0x24;
                u135 = *(float *)((((int)stk + 0) + t16));
                t16 = 0xC0397D4;
                u136 = u24;
                u136 = u136 + u134 * u135;
                u24 = u136;
                u24 = (u24 - u25);
                t18 = t20;
                t16 = (FUN_0c038b04(t18, t133, (u24 + (*(float *)((t16 + 0x0)))), ((float)t17 + u132), u27));
                t16 = (pfSize(1.0f, 1.0f));
                t18 = (*(int *)(((int)stk + 40)));
                t17 = (*(int *)(((int)stk + 20)));
                t18 = (t18 + t17);
                t124 = t18;
                t18 = (t18 << 2);
                t18 = (t18 + t124);
                t18 = (t18 << 2);
                t18 = (t18 << 2);
                t18 = (t18 << 1);
                t18 = (t18 + 0xC0B67B0);
                t18 = (t18 + t23);
                *(unsigned int *)(((int)stk + 8)) = t18;
                t16 = 0xC0397CC;
                u24 = (*(float *)((t16 + 0x0)));
                t16 = 0x2C;
                *(float *)((((int)stk + 0) + t16)) = ((FUN_0c02806c(t18)) * u24);
                t16 = 0x30;
                u145 = *(float *)((((int)stk + 0) + t16));
                t16 = 0xC0397D0;
                u146 = *(float *)((t16 + 0x0));
                t16 = 0x2C;
                u147 = *(float *)((((int)stk + 0) + t16));
                t16 = 0xC0397D8;
                u149 = u26;
                u149 = u149 + u146 * u147;
                t18 = t20;
                t16 = (FUN_0c038b04(t18, (*(int *)(((int)stk + 8))), ((u149 - u25) + (*(float *)((t16 + 0x0)))), u145, u27));
                t124 = (*(int *)(((int)stk + 0)));
                t23 = (t23 + 0x20);
                t124 = (t124 + 0x12);
                *(unsigned int *)(((int)stk + 0)) = t124;
            }
            t16 = t21;
            t17 = 0xC07FC48;
            t16 = (t16 << 2);
            t17 = (*(int *)((0xC2A5898 + t16)));
            t22 = (t22 + 0x1);
            t17 = (t17 + 0x1);
            *(unsigned int *)((0xC2A5898 + t16)) = t17;
            continue;
        }
        break;
    }
    FUN_0c03341c(0.300000012f);
    return FUN_0c02803a(0xFFCF0000, 0xFFCF0000, 0xFFCF0000, 0xFFCF0000);
}

/* manual: queues a DMA transfer to the TA. With interrupts masked (level 14): no length -> 0x103. Channel (a7 bit 3) picks one
   of two rings of eight 32-byte slots at 0xC2D56B0; a free slot (low bits of +24 clear) takes the request (addresses and length
   rounded up to 32 bytes, sequence number from 0xC2D58B8), is handed back through *a8 and the ring index moves on; a busy slot
   gives 0x100. If no transfer is running (the slot at 0xC2D58C8/0xC2D58C4 is idle) and the new one is ready, it is started:
   DMA channel 2 (0xFFA00020-2C) and the TA FIFO DMA (0xA05F6800-08), in the original's order. */
int kmiDMAtoTARequest(int a4, int a5, int a6, int a7, int a8)
{
    int old = _builtin_get_imask();
    int ch, idx, e, cur, r, mode;

    _builtin_set_imask(0xE);
    if (a6 == 0) {
        _builtin_set_imask(old);
        return 0x103;
    }
    ch = (a7 & 8) >> 3;
    idx = *(int *)(0xC2D58B0 + (ch << 2));
    e = 0xC2D56B0 + (ch << 8) + (idx << 5);
    r = 0x100;
    if ((*(int *)(e + 24) & 3) == 0) {
        if ((a5 & 31) != 0) {
            a5 = (a5 + 31) & ~31;
        }
        if ((a6 & 31) != 0) {
            a6 = (a6 + 31) & ~31;
        }
        *(int *)(e + 0) = *(int *)0xC2D58B8;
        *(int *)(e + 4) = a5;
        *(int *)(e + 12) = a4;
        *(int *)(e + 20) = a6;
        *(int *)(e + 24) = a7 | 1;
        *(int *)a8 = e;
        r = 0;
        *(int *)(0xC2D58B0 + (ch << 2)) = (*(int *)(0xC2D58B0 + (ch << 2)) + 1) & 7;
        *(int *)0xC2D58B8 = *(int *)0xC2D58B8 + 1;
    }
    if (r == 0x100) {
        _builtin_set_imask(old);
        return 0x100;
    }
    cur = 0xC2D56B0 + (*(int *)0xC2D58C8 << 8) + (*(int *)0xC2D58C4 << 5);
    if ((*(int *)(cur + 24) & 3) == 0 && (*(int *)(e + 24) & 3) == 1) {
        *(int *)(e + 24) = (*(int *)(e + 24) & ~3) | 2;
        *(volatile int *)0xFFA00020 = *(int *)(e + 4);
        *(volatile int *)0xFFA00024 = (*(int *)(e + 12) + 0xF0000000) << 1;
        *(volatile int *)0xFFA00028 = (unsigned int)a6 >> 5;
        mode = ((*(int *)(e + 24) & 4) != 0) ? 0x241 : 0x2C1;
        if ((*(int *)(e + 24) & 16) != 0) {
            mode = mode | 0x1000;
        }
        *(volatile int *)0xFFA0002C = mode;
        *(volatile int *)0xA05F6800 = *(int *)(e + 12);
        *(volatile int *)0xA05F6804 = *(int *)(e + 20);
        *(volatile int *)0xA05F6808 = 1;
        *(int *)0xC2D58C4 = idx;
        *(int *)0xC2D58C8 = ch;
        *(int *)(0xC2D58BC + (ch << 2)) = (*(int *)(0xC2D58BC + (ch << 2)) + 1) & 7;
    }
    _builtin_set_imask(old);
    return r;
}
