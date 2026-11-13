/* Hand-checked C (step 6): the generator's C for functions whose drawn cases did not finish on the original; the cases are written by hand. */

struct o0_float { float v; };
struct o48_int { char p[0x48]; int v; };
struct o4C_int { char p[0x4C]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o50_int { char p[0x50]; int v; };
struct o54_int { char p[0x54]; int v; };
struct o58_short { char p[0x58]; short v; };
struct o5A_short { char p[0x5A]; short v; };
struct o5C_int { char p[0x5C]; int v; };
struct o8_float { char p[0x8]; float v; };
int ADXAMP_ExecServer(void);
int ADXF_ExecServer(void);
int FUN_0c05d156(int, int, int, float);
int FUN_0c05ef18(void);
int FUN_0c070e60(void);
int FUN_0c072230(int, int);
int FUN_0c072290(int, int);
int FUN_0c07b6c0(int, int);
int FUN_0c07b6e6(int);
int FUN_0c07c8be(int);
int FUN_0c07ce10(int, int);
int FUN_0c07d00c(int);
int FUN_0c07d1ce(int);
int FUN_0c0962ac(int, int, int);
int FUN_0c1500d2(int, int, int, int);
int FUN_0c150444(int);
int FUN_0c150460(int);
int FUN_0c16b372(int, int);
int FUN_0c16b784(int, int, int, int);
int _lsft(int, int);
int _rsft(int, int);
int _sub(int, int, int, int);
int adxf_wait_1ms(void);
int buInit(int, int, int, int);
int gdFsExecServer(int);
int memcpy(int, int, int);
int memset(int, int, int);
int mwSbSetBitPerSmpl(int, int);
int mwSbSetNumChan(int, int);
int mwSbSetPan(int, int, int);
int mwSbSetSfreq(int, int);
int nlLoadMatrix8(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlQuickInvertMatrix(void);
int saveBufferInit(int);
int syCfgGetIndividualID(int);
int _div64(int a4, int a5, int a6, int a7);
int FUN_0c05efcc(float f4);
int FUN_0c031460(void);
int FUN_0c14f3b0(int a4, int a5, int a6, int a7);
int FUN_0c16b196(int a4);
int nlObjPutInit(int a4, int a5, int a6, int a7);
int FUN_0c07b7e0(int a4, int a5, int a6);
int FUN_0c05bf7e(void);

int _div64(int a4, int a5, int a6, int a7)
{
    int stk[14];
    register int t1;
    register int t7;
    register int t8;
    register int t11;
    register int t20;
    register int t35;
    register int t65;
    register int t36;
    register int t37;
    register int t38;
    register int t39;
    register int t41;
    register int t42;
    register int t43;
    register int t44;
    register int t45;
    register int t46;
    int t47;
    register int t55;
    register int t56;
    register int t57;
    register int t58;
    register int t59;
    register int t60;
    register int t61;
    register int t62;
    int t63;

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned short *)(((int)stk + 8)) = a6;
    *(unsigned int *)(((int)stk + 0)) = a7;
    memset((((int)stk + 0) + 0x2C), 0x0, 0x4);
    t1 = *(int *)(((int)stk + 0));
    *(unsigned int *)(((int)stk + 12)) = ((((int)stk + 0) + 0x2C) + 0x4);
    memcpy(((((int)stk + 0) + 0x2C) + 0x4), t1, 0x8);
    memset((((int)stk + 0) + 0x20), 0x0, 0x4);
    memcpy(((((int)stk + 0) + 0x20) + 0x4), (*(int *)(((int)stk + 4))), 0x8);
    memset((((int)stk + 0) + 0x10), 0x0, 0x10);
    *(unsigned int *)(((int)stk + 0)) = ((((int)stk + 0) + 0x10) + 0xB);
    t7 = 0xC095D88;
    t8 = 0x42;
    for (;;) {
        if (t8 == 0) {
            break;
        }
        t7 = (_lsft((((int)stk + 0) + 0x10), 0xC));
        t7 = (_sub(0x0, (((int)stk + 0) + 0x2C), (((int)stk + 0) + 0x20), 0xC));
        if ((int)t7 >= 0) {
            t11 = *(int *)(((int)stk + 0));
            *(unsigned char *)((t11 + 0x0)) = ((*(signed char *)((t11 + 0x0))) + 0x1);
        } else {
            t7 = (FUN_0c0962ac((((int)stk + 0) + 0x2C), (((int)stk + 0) + 0x20), 0xC));
        }
        t7 = (_lsft((((int)stk + 0) + 0x2C), 0xC));
        t8 = (t8 - 1);
    }
    t20 = 0x2;
    for (;;) {
        if (t20 == 0) {
            break;
        }
        _rsft((((int)stk + 0) + 0x10), 0x10);
        t20 = (t20 - 1);
    }
    t35 = *(signed char *)(((((int)stk + 0) + 0x2C) + 0x0));
    if ((t35 == 0) && ((t36 = *(signed char *)(((((int)stk + 0) + 0x2C) + 0x1)), t36 == 0) && ((t37 = *(signed char *)(((((int)stk + 0) + 0x2C) + 0x2)), t37 == 0) && ((t38 = *(signed char *)(((((int)stk + 0) + 0x2C) + 0x3)), t38 == 0) && ((t39 = *(int *)(((int)stk + 12)), t65 = *(signed char *)((t39 + 0x0)), t65 == 0) && ((t41 = *(signed char *)(((((int)stk + 0) + 0x2C) + 0x5)), t41 == 0) && ((t42 = *(signed char *)(((((int)stk + 0) + 0x2C) + 0x6)), t42 == 0) && ((t43 = *(signed char *)(((((int)stk + 0) + 0x2C) + 0x7)), t43 == 0) && ((t44 = *(signed char *)(((((int)stk + 0) + 0x2C) + 0x8)), t44 == 0) && ((t45 = *(signed char *)(((((int)stk + 0) + 0x2C) + 0x9)), t45 == 0) && ((t46 = *(signed char *)(((((int)stk + 0) + 0x2C) + 0xA)), t46 == 0) && (t47 = *(signed char *)(((((int)stk + 0) + 0x2C) + 0xB)), t47 == 0)))))))))))) {
    } else {
        *(unsigned char *)(((((int)stk + 0) + 0x10) + 0xC)) = ((*(signed char *)(((((int)stk + 0) + 0x10) + 0xC))) | 0x20);
        t65 = t35;
    }
    *(unsigned short *)((a4 + 0x0)) = ((*(short *)(((int)stk + 8))) - (*(short *)((a4 + 0x0))));
    if (((*(signed char *)(((((int)stk + 0) + 0x10) + 0x4))) == 0) && ((t55 = *(signed char *)(((((int)stk + 0) + 0x10) + 0x5)), t55 == 0) && ((t56 = *(signed char *)(((((int)stk + 0) + 0x10) + 0x6)), t56 == 0) && ((t57 = *(signed char *)(((((int)stk + 0) + 0x10) + 0x7)), t57 == 0) && ((t58 = *(signed char *)(((((int)stk + 0) + 0x10) + 0x8)), t58 == 0) && ((t59 = *(signed char *)(((((int)stk + 0) + 0x10) + 0x9)), t59 == 0) && ((t60 = *(signed char *)(((((int)stk + 0) + 0x10) + 0xA)), t60 == 0) && ((t61 = *(int *)(((int)stk + 0)), t62 = *(signed char *)((t61 + 0x0)), t62 == 0) && (t63 = *(signed char *)(((((int)stk + 0) + 0x10) + 0xC)), t63 == 0))))))))) {
    } else {
        for (;;) {
            if (((unsigned char)(*(signed char *)((((((int)stk + 0) + 0x10) + 0x4) + 0x0))) & 0x80) != 0) {
                break;
            }
            _lsft(((((int)stk + 0) + 0x10) + 0x4), 0x9);
            t65 = (*(short *)((a4 + 0x0)));
            t65 = (t65 - 1);
            *(unsigned short *)((a4 + 0x0)) = t65;
        }
    }
    return (memcpy((*(int *)(((int)stk + 4))), ((((int)stk + 0) + 0x10) + 0x4), 0x9));
}

int FUN_0c05efcc(float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    float u0;
    register float u1;
    register float u2;

    if ((*(int *)0xC1386A0) != 0) {
        t1 = 0xC1386A0;
        t2 = 0xC137114;
        t3 = 0xC1387E8;
        t4 = 0xC1387FC;
        t5 = 0xC5;
        u1 = f4;
        for (;;) {
            if ((int)t5 <= 0) {
                break;
            }
            t2 = (t2 + 0x1C);
            u1 = (*(float *)((t3 + 0x0)));
            t1 = t2;
            t6 = 0xC;
            t1 = (t1 - 28);
            u2 = (*(float *)((t1 + t6)));
            t5 = (t5 - 1);
            if (!(u1 > u2) && (u0 = *(float *)((t2 + t6)), t0 = (u1 > u2), u2 = u0, u1 > u2)) {
                t6 = 0x1C;
                t6 = ((int)((int)(t2 - 0xC137114) / (int)t6));
                *(unsigned int *)((t4 + 0x0)) = t6;
                t3 = (t3 + 0x4);
                t4 = (t4 + 0x4);
            }
        }
        *(unsigned int *)0xC136D80 = 0xCB1BDE0;
        FUN_0c05d156(0xCB1BDE0, 0x0, 0xC2B9738, 0.0f);
        FUN_0c05ef18();
        nlPushMatrix(0xC1386A8);
        t0 = (nlQuickInvertMatrix());
        t1 = 0xC5;
        t2 = 0xC1387FC;
        t3 = 0xC1386A8;
        t4 = 0xC137114;
        for (;;) {
            if ((int)t1 <= 0) {
                break;
            }
            t0 = (FUN_0c072230((t4 + 0x4), (t4 + 0x4)));
            t5 = 0xC072290;
            t0 = (FUN_0c072290((t4 + 0x10), (t4 + 0x10)));
            t4 = (t4 + 0x1C);
            t1 = (t1 - 1);
            t0 = 0x1C;
            t0 = ((int)((int)(t4 - 0xC137114) / (int)t0));
            t5 = (*(int *)((t2 + 0x0)));
            if ((int)t0 > (int)t5) {
                t5 = 0xC072BD0;
                t2 = (t2 + 0x4);
                t3 = (t3 + 0x40);
                t0 = (nlLoadMatrix8(t3));
                t0 = (nlQuickInvertMatrix());
            }
        }
        t0 = nlPopMatrix(0x1);
        *(unsigned int *)0xC1386A0 = 0x0;
        t1 = t0;
    }
    return t1;
}

int FUN_0c031460(void)
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

    memset(0xC2952EC, 0x0, 0x260);
    buInit(0xF, 0xFF, 0xC29554C, 0xC0318A2);
    syCfgGetIndividualID(0xC12A8F4);
    t9 = 0xC0B17B8;
    t10 = 0xC28DD0C;
    for (;;) { t0 = *(int *)t9; t9 = (t9 + 4); if ((unsigned int)((0xC0B17B8 + 4204)) < (unsigned int)t9) break; *(unsigned int *)t10 = t0; t10 = (t10 + 4); }
    memcpy(0xC28ED78, 0xC0B3034, 0x20);
    { struct mvb16 { char b[16]; }; *(struct mvb16 *)(0xC28ED98) = *(struct mvb16 *)(0xC0B08A8); }
    saveBufferInit(0xC28EDA8);
    t0 = 0xC0B08B8;
    t9 = 0xC28F530;
    for (;;) { t1 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0xC0B08B8 + 960)) < (unsigned int)t0) break; *(unsigned int *)t9 = t1; t9 = (t9 + 4); }
    t0 = 0xC0B0C78;
    t1 = 0xC28F8F0;
    for (;;) { t2 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0xC0B0C78 + 960)) < (unsigned int)t0) break; *(unsigned int *)t1 = t2; t1 = (t1 + 4); }
    t0 = 0xC28DD0C;
    t1 = 0xC293344;
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0xC28DD0C + 8104)) < (unsigned int)t0) break; *(unsigned int *)t1 = t3; t1 = (t1 + 4); }
    memset(0xC290B3C, 0x0, 0x8);
    memset(0xC28FF84, 0xFFFFFFFF, 0x78);
    memset(0xC2906B4, 0xFFFFFFFF, 0x78);
    t0 = 0xC0B08B8;
    t1 = 0xC28FFFC;
    for (;;) { t4 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0xC0B08B8 + 960)) < (unsigned int)t0) break; *(unsigned int *)t1 = t4; t1 = (t1 + 4); }
    t0 = 0xC0B0C78;
    t1 = 0xC29072C;
    for (;;) { t5 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0xC0B0C78 + 960)) < (unsigned int)t0) break; *(unsigned int *)t1 = t5; t1 = (t1 + 4); }
    t0 = 0xC0B2824;
    t1 = 0xC28FCB4;
    for (;;) { t6 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0xC0B2824 + 688)) < (unsigned int)t0) break; *(unsigned int *)t1 = t6; t1 = (t1 + 4); }
    t0 = 0xC0B2AD4;
    t1 = 0xC2903E4;
    for (;;) { t7 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0xC0B2AD4 + 688)) < (unsigned int)t0) break; *(unsigned int *)t1 = t7; t1 = (t1 + 4); }
    memcpy(0xC28FF64, 0xC0B3034, 0x20);
    memcpy(0xC290694, 0xC0B3034, 0x20);
    t0 = 0xC0B2D84;
    t1 = 0xC2AC2FC;
    for (;;) { t8 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0xC0B2D84 + 688)) < (unsigned int)t0) break; *(unsigned int *)t1 = t8; t1 = (t1 + 4); }
    return (memcpy(0xC2AC5AC, 0xC0B3034, 0x20));
}

int FUN_0c14f3b0(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = 0x0;
    for (;;) {
        t2 = FUN_0c1500d2(a4, a5, a6, a7);
        if ((int)t2 <= 0) {
            gdFsExecServer(t2);
            ADXAMP_ExecServer();
            ADXF_ExecServer();
            adxf_wait_1ms();
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x2710) {
                break;
            }
            continue;
        }
        t1 = t2; break;
    }
    if (t0 == 0x2710) {
        return 0x0;
    }
    t0 = 0x0;
    for (;;) {
        gdFsExecServer(t1);
        ADXAMP_ExecServer();
        ADXF_ExecServer();
        t2 = FUN_0c150460(a4);
        if (t2 != 3) {
            adxf_wait_1ms();
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x2710) {
                break;
            }
            continue;
        }
        break;
    }
    return FUN_0c150444(a4);
}

/* manual: mwSbSetPan takes three arguments and FUN_0c16b784 four; the generator passed stack words neither reads */
int FUN_0c16b196(int a4)
{
    register int t13;
    register int t31;
    register int t37;

    if ((*(signed char *)((a4 + 0x5))) == 0) {
        FUN_0c07d1ce((*(int *)(((*(int *)((a4 + 0x1C))) + 0x4))));
        mwSbSetSfreq(a4, (*(int *)((a4 + 0x14))));
        mwSbSetBitPerSmpl(a4, (*(int *)((a4 + 0x10))));
        mwSbSetNumChan(a4, (*(int *)((a4 + 0xC))));
        FUN_0c16b372(a4, (*(int *)((a4 + 0x3C))));
        t13 = 0x0;
        for (;;) {
            if ((int)t13 >= (int)(*(int *)((a4 + 0xC)))) {
                break;
            }
            mwSbSetPan(a4, t13, (*(int *)((((t13 << 2) + (a4 + 0x40)) + 0x0))));
            t13 = (t13 + 0x1);
        }
        FUN_0c16b784(a4, 0x0, ((((struct o48_int *)(a4))->v)), ((((struct o4C_int *)(a4))->v)));
        FUN_0c16b784(a4, 0x1, ((((struct o50_int *)(a4))->v)), ((((struct o54_int *)(a4))->v)));
        FUN_0c16b784(a4, 0x3, ((((struct o58_short *)(a4))->v)), ((((struct o5A_short *)(a4))->v)));
        FUN_0c16b784(a4, 0x2, ((((struct o5C_int *)(a4))->v)), 0x0);
    }
    t31 = 0x2710;
    for (;;) {
        t31 = (t31 - 0x1);
        if (t31 == 0) {
            break;
        }
    }
    FUN_0c07ce10((*(short *)((a4 + 0x6))), (*(int *)(((*(int *)((a4 + 0x1C))) + 0x4))));
    t37 = FUN_0c07d00c((*(short *)((a4 + 0x6))));
    *(unsigned int *)((a4 + 0x18)) = 0x1;
    return t37;
}

int nlObjPutInit(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u7;

    *(float *)0xC2BF8CC = (*(float *)0xC1474C8);
    *(unsigned int *)0xC2BFCC8 = 0x0;
    u0 = (((struct o0_float *)0xC0761E8)->v);
    u1 = (((struct o4_float *)0xC0761E8)->v);
    u2 = (((struct o8_float *)0xC0761E8)->v);
    t0 = 0x0;
    t1 = a7;
    for (;;) {
        t3 = 0x0;
        for (;;) {
            *(float *)(((((t0 << 8) << 1) + 0xC2BFCD8) + (t3 << 2))) = 0.0f;
            u3 = (((float)t3 * u0) / u2);
            u4 = ((u3 + u1) * (u3 + u1));
            u5 = ((u3 + u1) * (u3 + u1));
            if ((int)t0 < (int)0x2) {
                *(float *)(((((t0 << 8) << 1) + 0xC2BFCD8) + (t3 << 2))) = (((u4 + u5) - 1.0f) * ((u4 + u5) - 1.0f));
            } else {
                t1 = 0x0;
                u3 = 1.0f;
                if ((int)t0 > 0) {
                    u6 = 1.0f;
                    for (;;) {
                        t1 = (t1 + 0x1);
                        u7 = (((u4 + u5) - 1.0f) * ((u4 + u5) - 1.0f));
                        u6 = (u6 * u7);
                        if ((int)t1 >= (int)t0) {
                            break;
                        }
                    }
                    u3 = u6;
                }
                *(float *)(((((t0 << 8) << 1) + 0xC2BFCD8) + (t3 << 2))) = u3;
            }
            t2 = (t3 << 2);
            t3 = (t3 + 0x1);
            if ((int)t3 >= (int)0x80) {
                break;
            }
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x20) {
            break;
        }
    }
    return t2;
}

int FUN_0c07b7e0(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;

    FUN_0c07b6c0((a4 + 0x5F800000), 0xA0800090);
    FUN_0c07b6c0((a5 + 0x5F800000), 0xA0800094);
    FUN_0c07b6c0(a6, 0xA0800098);
    t0 = 0x0;
    for (;;) {
        t1 = FUN_0c07b6e6(0xA0800098);
        if (t1 == 0) {
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x400000) {
                break;
            }
            continue;
        }
        t0 = 0x2000A0;
        t1 = 0x0;
        for (;;) {
            t2 = FUN_0c07c8be(t0);
            if (t2 != 0) {
                t1 = (t1 + 0x1);
                if ((int)t1 >= (int)0x400000) {
                    break;
                }
                continue;
            }
            return 0x0;
        }
        return 0xFFFFFF00;
    }
    return 0xFFFFFF00;
}

int FUN_0c05bf7e(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = 0x0;
    for (;;) {
        *(unsigned int *)((0xC1368AC + (t0 << 2))) = t0;
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x100) {
            break;
        }
    }
    t0 = 0x80;
    for (;;) {
        t2 = (int)((int)(FUN_0c070e60()) % (int)0x100);
        t1 = (int)((int)(FUN_0c070e60()) % (int)0x100);
        t3 = *(int *)((((t2 << 2) + 0xC1368AC) + 0x0));
        t0 = (t0 - 0x1);
        *(unsigned int *)((((t2 << 2) + 0xC1368AC) + 0x0)) = (*(int *)((((t1 << 2) + 0xC1368AC) + 0x0)));
        *(unsigned int *)((((t1 << 2) + 0xC1368AC) + 0x0)) = t3;
        if (t0 == 0) {
            break;
        }
    }
    *(unsigned int *)0xC136CAC = 0x0;
    return t1;
}
