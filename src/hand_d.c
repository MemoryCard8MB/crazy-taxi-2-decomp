/* Hand-checked C (step 6): the generator's C for functions whose drawn cases did not finish on the original; the cases are written by hand. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_int { char p[0x18]; int v; };
struct o20_int { char p[0x20]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int FUN_0c01f4ca(int, int, float);
int FUN_0c072230(int, int);
int FUN_0c072290(int, int);
extern float _builtin_sqrtf(float);
int kmiFlipVertexBuffer(int);
int kmiWriteRegister(int, int);
int nlMvClipEdge(int, int, int);
int nlMvSendTriangle(int, int, int);
int nlScaleUnitVector(int, int, float);
int nlSubVector3op(int, int, int);
int FUN_0c04b1e6(void);
int nlMvCalcEdgeB(int a4, int a5, int a6);
int kmiStartRenderTextureEntry(int a4, int a5, int a6, int a7);
int nlMvPutStrip(int a4, int a5, int a6, int a7);

int FUN_0c04b1e6(void)
{
    int stk[6];
    register int t0;
    register int t2;
    register int t3;
    register int t5;
    register int t15;
    register int t17;
    register int t46;
    register int t18;
    register int t19;
    register float u20;
    register int t21;
    register int t35;
    register int t22;
    register int t23;
    register float u25;
    register float u26;
    register float u27;
    register int t29;
    register float u30;
    register float u6;

    t0 = *(int *)0xC2ADEB8;
    t2 = *(int *)((((((t0 << 1) + t0) << 2) + 0xC10B6F8) + 0x0));
    t3 = *(int *)((((((t0 << 1) + t0) << 2) + 0xC10B6F8) + 0x4));
    *(volatile int *)(((0x8 + ((((t0 << 1) + t0) << 2) + 0xC10B6F8)) + 0x0));
    if ((int)t2 < (int)(t3 + t2)) {
        t5 = t2;
        for (;;) {
            FUN_0c01f4ca(t5, 0x0, _builtin_sqrtf(u6));
            t5 = (t5 + 0x1);
            if ((int)t5 >= (int)(t3 + t2)) {
                break;
            }
        }
    }
    t15 = *(int *)0xC2ADEB8;
    t17 = *(int *)((((((t15 << 1) + t15) << 2) + 0xC10B7A0) + 0x0));
    t46 = t17;
    if (t17 != -1) {
        t18 = *(int *)((((((t15 << 1) + t15) << 2) + 0xC10B7A0) + 0x0));
        t19 = *(int *)((((((t15 << 1) + t15) << 2) + 0xC10B7A0) + 0x4));
        u20 = (((struct o8_float *)(((((t15 << 1) + t15) << 2) + 0xC10B7A0)))->v);
        t21 = *(int *)0xC1ECD44;
        t35 = t21;
        if ((int)t18 < (int)(t19 + t18)) {
            t22 = ((((t18 << 2) + t18) << 2) + t21);
            t23 = t18;
            for (;;) {
                nlSubVector3op((((int)stk + 0) + 0xC), (t22 + 0x4), 0xC175930);
                u25 = *(float *)(((int)stk + 12));
                u26 = *(float *)(((int)stk + 20));
                u27 = (u26 * u26);
                u27 = u27 + u25 * u25;
                t29 = 0x14;
                u30 = u27;
                if ((u20 * u20) > u27) {
                    t29 = (FUN_0c01f4ca(t23, 0x1, _builtin_sqrtf(u27)));
                    u30 = _builtin_sqrtf(u27);
                }
                t23 = (t23 + 0x1);
                t22 = (t22 + 0x14);
                if ((int)t23 >= (int)(t19 + t18)) {
                    break;
                }
            }
            t35 = t29;
        }
        t46 = t35;
    }
    return t46;
}

int nlMvCalcEdgeB(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    t0 = (((struct o0_int *)0xC2C3DD0)->v);
    u0 = (((struct o14_float *)(a6))->v);
    u1 = *(float *)0xC079A78;
    u2 = *(float *)0xC2C4DBC;
    t1 = (((struct o8_int *)0xC2C3DD0)->v);
    t2 = (((struct o4_int *)0xC2C3DD0)->v);
    t3 = 0xC079A78;
    if ((int)a5 > 0) {
        t4 = a4;
        t5 = 0x0;
        t6 = t1;
        t1 = t2;
        t2 = t0;
        for (;;) {
            nlSubVector3op(0xC2C3E10, t4, 0xC2C3E00);
            nlScaleUnitVector(0xC2C3E10, 0xC2C3E10, u0);
            FUN_0c072290(0xC2C3E10, 0xC2C3E10);
            FUN_0c072230(t4, t2);
            *(float *)((t1 + 0x0)) = ((*(float *)((t2 + 0x0))) + ((((struct o0_float *)0xC2C3E10)->v)));
            (((struct o4_float *)(t1))->v) = (((((struct o4_float *)(t2))->v)) + ((((struct o4_float *)0xC2C3E10)->v)));
            (((struct o8_float *)(t1))->v) = (((((struct o8_float *)(t2))->v)) + ((((struct o8_float *)0xC2C3E10)->v)));
            u3 = (((struct o8_float *)(t2))->v);
            if (u2 > u3) {
                (((struct oC_float *)(t2))->v) = u1;
            } else {
                (((struct oC_float *)(t2))->v) = (1.0f / u3);
            }
            u3 = (((struct o8_float *)(t1))->v);
            if (u2 > u3) {
                (((struct oC_float *)(t1))->v) = u1;
            } else {
                (((struct oC_float *)(t1))->v) = (1.0f / u3);
            }
            t0 = nlMvClipEdge(t2, t1, t6);
            t5 = (t5 + 0x1);
            t2 = (t2 + 0x10);
            t6 = (t6 + 0x10);
            t4 = (t4 + 0xC);
            t1 = (t1 + 0x10);
            if ((int)t5 >= (int)a5) {
                break;
            }
        }
        t3 = t0;
    }
    return t3;
}

int kmiStartRenderTextureEntry(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    (((struct o0_uint *)0xC300AD8)->v) = 0x1;
    t0 = (((struct o0_int *)0xC300C34)->v);
    if (((*(int *)0xC3008D4) & 16) != 0) {
        kmiWriteRegister(0x8, 0x2);
        kmiWriteRegister(0x8, 0x0);
    }
    kmiWriteRegister(0x2C, (*(int *)((((((t0 & 0x1) << 2) << 2) << 1) + 0xC300D40))));
    kmiWriteRegister(0x20, (*(int *)(((0xC300D3C + ((((t0 & 0x1) << 2) << 2) << 1)) + 0x18))));
    kmiWriteRegister(0x60, (*(int *)((a4 + 0x8))));
    kmiWriteRegister(0x48, (*(int *)((a4 + 0x0))));
    kmiWriteRegister(0x4C, (*(int *)((a4 + 0x4))));
    kmiWriteRegister(0x68, (*(int *)((a4 + 0xC))));
    kmiWriteRegister(0x6C, (*(int *)((a4 + 0x10))));
    (((struct oC_uint *)0xC300C34)->v) = 0x0;
    t0 = 0x0;
    if (((((struct o4_int *)0xC300AD8)->v)) != 0) {
        for (;;) {
            t1 = ((int (*)(int, int, int, int))(((((struct o0_int *)0xC300B38)->v))))(((((struct o4_int *)0xC300B38)->v)), a5, a6, a7);
            if ((unsigned int)((((struct oC_int *)0xC300C34)->v)) > (unsigned int)((((struct o20_int *)0xC300AD8)->v))) {
                break;
            }
            if (((((struct o4_int *)0xC300AD8)->v)) == 0) {
                if (0x0 != 0) {
                    kmiWriteRegister(0x48, ((((struct o18_int *)0xC300B84)->v)));
                    kmiWriteRegister(0x4C, ((((struct o10_int *)0xC300B84)->v)));
                    kmiWriteRegister(0x68, ((((struct o0_int *)0xC300B84)->v)));
                    kmiWriteRegister(0x6C, ((((struct o4_int *)0xC300B84)->v)));
                    (((struct o4_uint *)0xC300AD8)->v) = 0x0;
                    (((struct o14_uint *)0xC300C34)->v) = 0x0;
                    return kmiFlipVertexBuffer((*(int *)0xC1740A4));
                }
                kmiWriteRegister(0x8C, ((((struct o4_int *)0xC300A80)->v)));
                kmiWriteRegister(0x88, (((((struct o0_int *)0xC300A80)->v)) & 0xFFFFFFF0));
                return (kmiWriteRegister(0x14, 0xFFFFFFFF));
            }
        }
        t0 = 0x1;
    }
    if (t0 != 0) {
        kmiWriteRegister(0x48, ((((struct o18_int *)0xC300B84)->v)));
        kmiWriteRegister(0x4C, ((((struct o10_int *)0xC300B84)->v)));
        kmiWriteRegister(0x68, ((((struct o0_int *)0xC300B84)->v)));
        kmiWriteRegister(0x6C, ((((struct o4_int *)0xC300B84)->v)));
        (((struct o4_uint *)0xC300AD8)->v) = 0x0;
        (((struct o14_uint *)0xC300C34)->v) = 0x0;
        return kmiFlipVertexBuffer((*(int *)0xC1740A4));
    }
    kmiWriteRegister(0x8C, ((((struct o4_int *)0xC300A80)->v)));
    kmiWriteRegister(0x88, (((((struct o0_int *)0xC300A80)->v)) & 0xFFFFFFF0));
    return (kmiWriteRegister(0x14, 0xFFFFFFFF));
}

int nlMvPutStrip(int a4, int a5, int a6, int a7)
{
    int stk[13];
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t11;
    register int t12;
    register int t10;
    register int t104;
    register int t107;
    register int t108;
    register int t109;
    register int t110;

    *(unsigned int *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 24)) = a5;
    t11 = (((struct o14_int *)0xC2C3DD0)->v);
    *(unsigned int *)(((int)stk + 16)) = ((((struct oC_int *)0xC2C3DD0)->v));
    *(unsigned int *)(((int)stk + 20)) = ((((struct o10_int *)0xC2C3DD0)->v));
    *(unsigned int *)(((int)stk + 0)) = ((((int)stk + 0) + 0x20) + 0x8);
    *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 0) + 0x20) + 0x4);
    *(unsigned int *)(((int)stk + 8)) = ((((int)stk + 0) + 0x20) + 0xC);
    *(unsigned int *)(((int)stk + 28)) = ((((int)stk + 0) + 0x20) + 0x10);
    t3 = 0xC2C3DE0;
    t4 = ((((int)stk + 0) + 0x20) + 0xC);
    t5 = ((((int)stk + 0) + 0x20) + 0x4);
    t6 = a4;
    t7 = a5;
    t8 = a6;
    t9 = a7;
    for (;;) {
        t12 = *(int *)(((int)stk + 24));
        *(unsigned int *)(((int)stk + 24)) = (t12 - 1);
        if ((int)((t12 - 1) + 0x1) > 0) {
            t3 = (*(signed char *)((t11 + 0x0)));
            if (t3 != 1) {
                t104 = t4;
                t107 = t6;
                t108 = t7;
                t109 = t8;
                t110 = t9;
            } else {
                t6 = (*(int *)(((int)stk + 12)));
                t7 = ((((struct o0_int *)0xC2C3DD0)->v));
                t9 = *(short *)((t6 + 0x0));
                t6 = (t6 + 0x2);
                t8 = t9;
                t8 = (t8 << 2);
                t8 = (t8 << 2);
                t4 = (*(short *)((t6 + 0x0)));
                t7 = (t7 + t8);
                t7 = (*(int *)((t7 + 0xC)));
                t6 = 0x0;
                if ((int)t7 >= 0) {
                    t3 = t6;
                    t3 = (t3 << 2);
                    t6 = (t6 + 0x1);
                    *(unsigned int *)(((((int)stk + 0) + 0x20) + t3)) = (((((struct o0_int *)0xC2C3DD0)->v)) + t8);
                }
                t9 = t4;
                t10 = ((((struct o0_int *)0xC2C3DD0)->v));
                t9 = (t9 << 2);
                t9 = (t9 << 2);
                t10 = (t10 + t9);
                t10 = (*(int *)((t10 + 0xC)));
                if ((int)(t7 ^ t10) < 0) {
                    t3 = t6;
                    t3 = (t3 << 2);
                    t7 = t10;
                    t6 = (t6 + 0x1);
                    *(unsigned int *)(((((int)stk + 0) + 0x20) + t3)) = (*(int *)(((int)stk + 16)));
                }
                if ((int)t10 >= 0) {
                    t3 = t6;
                    t3 = (t3 << 2);
                    t6 = (t6 + 0x1);
                    *(unsigned int *)(((((int)stk + 0) + 0x20) + t3)) = (((((struct o0_int *)0xC2C3DD0)->v)) + t9);
                }
                t4 = ((((struct o4_int *)0xC2C3DD0)->v));
                t4 = (t4 + t9);
                t4 = (*(int *)((t4 + 0xC)));
                if ((int)(t7 ^ t4) < 0) {
                    t3 = t6;
                    t5 = 0xC2C3DD8;
                    t3 = (t3 << 2);
                    t7 = t4;
                    t6 = (t6 + 0x1);
                    *(unsigned int *)(((((int)stk + 0) + 0x20) + t3)) = ((*(int *)((t5 + 0x0))) + t9);
                }
                if ((int)t4 >= 0) {
                    t3 = t6;
                    t3 = (t3 << 2);
                    t6 = (t6 + 0x1);
                    t9 = (t9 + ((((struct o4_int *)0xC2C3DD0)->v)));
                    *(unsigned int *)(((((int)stk + 0) + 0x20) + t3)) = t9;
                }
                t9 = ((((struct o4_int *)0xC2C3DD0)->v));
                t9 = (t9 + t8);
                t9 = (*(int *)((t9 + 0xC)));
                if ((int)(t7 ^ t9) < 0) {
                    t3 = t6;
                    t3 = (t3 << 2);
                    t7 = t9;
                    t6 = (t6 + 0x1);
                    *(unsigned int *)(((((int)stk + 0) + 0x20) + t3)) = (*(int *)(((int)stk + 20)));
                }
                if ((int)t9 >= 0) {
                    t3 = t6;
                    t3 = (t3 << 2);
                    t6 = (t6 + 0x1);
                    *(unsigned int *)(((((int)stk + 0) + 0x20) + t3)) = (((((struct o4_int *)0xC2C3DD0)->v)) + t8);
                }
                t5 = ((((struct o0_int *)0xC2C3DD0)->v));
                t5 = (t5 + t8);
                t7 = (t7 ^ (*(int *)((t5 + 0xC))));
                if ((int)t7 < 0) {
                    t3 = t6;
                    t5 = 0xC2C3DD8;
                    t3 = (t3 << 2);
                    t6 = (t6 + 0x1);
                    t8 = (t8 + (*(int *)((t5 + 0x0))));
                    *(unsigned int *)(((((int)stk + 0) + 0x20) + t3)) = t8;
                }
                if (t6 != 0) {
                    t3 = t6;
                    if (t3 == 3) {
                        t7 = (*(int *)(((int)stk + 4)));
                        t8 = (*(int *)(((int)stk + 0)));
                        t7 = (*(int *)((t7 + 0x0)));
                        t8 = (*(int *)((t8 + 0x0)));
                        t6 = (*(int *)(((((int)stk + 0) + 0x20) + 0x0)));
                        t3 = (nlMvSendTriangle(t6, t7, t8));
                    } else {
                        if (t3 == 4) {
                            t7 = (*(int *)(((int)stk + 4)));
                            t8 = (*(int *)(((int)stk + 0)));
                            t7 = (*(int *)((t7 + 0x0)));
                            t8 = (*(int *)((t8 + 0x0)));
                            t6 = (*(int *)(((((int)stk + 0) + 0x20) + 0x0)));
                            t3 = (nlMvSendTriangle(t6, t7, t8));
                            t8 = (*(int *)(((int)stk + 8)));
                            t8 = (*(int *)((t8 + 0x0)));
                            t7 = (*(int *)(((int)stk + 0)));
                        } else {
                            t3 = t6;
                            if (t3 != 5) {
                                _builtin_trapa(48);
                            }
                            t7 = (*(int *)(((int)stk + 4)));
                            t8 = (*(int *)(((int)stk + 0)));
                            t7 = (*(int *)((t7 + 0x0)));
                            t8 = (*(int *)((t8 + 0x0)));
                            t6 = (*(int *)(((((int)stk + 0) + 0x20) + 0x0)));
                            t3 = (nlMvSendTriangle(t6, t7, t8));
                            t7 = (*(int *)(((int)stk + 0)));
                            t8 = (*(int *)(((int)stk + 8)));
                            t7 = (*(int *)((t7 + 0x0)));
                            t8 = (*(int *)((t8 + 0x0)));
                            t6 = (*(int *)(((((int)stk + 0) + 0x20) + 0x0)));
                            t3 = (nlMvSendTriangle(t6, t7, t8));
                            t8 = (*(int *)(((int)stk + 28)));
                            t7 = (*(int *)(((int)stk + 8)));
                            t8 = (*(int *)((t8 + 0x0)));
                        }
                        t7 = (*(int *)((t7 + 0x0)));
                        t6 = (*(int *)(((((int)stk + 0) + 0x20) + 0x0)));
                        t3 = (nlMvSendTriangle(t6, t7, t8));
                    }
                } else {
                    t104 = t4;
                    t107 = t6;
                    t108 = t7;
                    t109 = t8;
                    t110 = t9;
                }
            }
            t4 = t104;
            t5 = (*(int *)(((int)stk + 12)));
            t6 = t107;
            t7 = t108;
            t8 = t109;
            t9 = t110;
            t11 = (t11 + 0x1);
            t5 = (t5 + 0x4);
            *(unsigned int *)(((int)stk + 12)) = t5;
            *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + 0x10);
            t4 = (*(int *)(((int)stk + 20)));
            t4 = (t4 + 0x10);
            *(unsigned int *)(((int)stk + 20)) = t4;
            continue;
        }
        break;
    }
    return t3;
}
