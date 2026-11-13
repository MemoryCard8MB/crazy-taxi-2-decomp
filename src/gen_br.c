/* Straight-line functions with calls and guards (batch gen_br): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_int { char p[0x18]; int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_int { char p[0x28]; int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_int { char p[0x2C]; int v; };
struct o30_int { char p[0x30]; int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o3C_uint { char p[0x3C]; unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
int FUN_0c058f64(int, int, int, int);
int FUN_0c05995e(void);
int FUN_0c059c64(int, int, int, int);
extern int FUN_0c069e54();
int Voice_ShutUp(int);
int FUN_0c0590a8(float f4);
int FUN_0c06a2fe(int a4, int a5, int a6);

int FUN_0c0590a8(float f4)
{
    int stk[3];
    register int t0;
    register int t3;
    register int t4;
    register int t9;
    register int t29;
    register int t122;
    register int t123;
    register int t128;
    register int t149;
    register float u151;
    register int t152;
    register int t109;
    register int t110;
    register int t117;
    register int t77;
    register int t78;
    register int t85;

    t0 = *(int *)0xC1EC71C;
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                (((struct o3C_uint *)0xC132E58)->v) = 0x0;
                FUN_0c05995e();
                t77 = 0x0;
                t78 = 0xC132AFC;
                t85 = 0xD;
            } else {
                (((struct o0_float *)0xC2B85F8)->v) = 0.0f;
                t3 = *(int *)0xC2ADEB8;
                if (t3 != 6) {
                    if (t3 != 7) {
                        if (t3 != 11) {
                            if (t3 != 12) {
                                (((struct o3C_uint *)0xC132E58)->v) = 0x0;
                                t4 = 0xC2B69BC;
                                for (;;) {
                                    *(float *)((t4 + 0x0)) = 0.0f;
                                    t4 = (t4 + 0x4);
                                    if ((unsigned int)t4 >= (unsigned int)0xC2B6BC0) {
                                        break;
                                    }
                                }
                                (((struct o0_uint *)0xC132E04)->v) = 0xC2B69BC;
                                t77 = 0x0;
                            } else {
                                (((struct o3C_uint *)0xC132E58)->v) = 0x1;
                                *(unsigned int *)(((int)stk + 0)) = 0xC2B69BC;
                                FUN_0c059c64(((((struct o18_int *)0xC132E04)->v)), ((((struct o1C_int *)0xC132E04)->v)), 0xC2B69BC, 0x80);
                                (((struct o28_uint *)0xC132E04)->v) = (*(int *)(((int)stk + 0)));
                                t9 = *(int *)(((int)stk + 0));
                                *(unsigned int *)(((int)stk + 4)) = (t9 + 0x204);
                                FUN_0c059c64(((((struct o14_int *)0xC132E58)->v)), ((((struct o18_int *)0xC132E58)->v)), (t9 + 0x204), 0x80);
                                (((struct o24_uint *)0xC132E58)->v) = (*(int *)(((int)stk + 4)));
                                t77 = 0x2;
                            }
                        } else {
                            (((struct o3C_uint *)0xC132E58)->v) = 0x1;
                            *(unsigned int *)(((int)stk + 0)) = 0xC2B69BC;
                            FUN_0c059c64(((((struct o4_int *)0xC132E04)->v)), ((((struct o8_int *)0xC132E04)->v)), 0xC2B69BC, 0x80);
                            (((struct o14_uint *)0xC132E04)->v) = (*(int *)(((int)stk + 0)));
                            t29 = *(int *)(((int)stk + 0));
                            *(unsigned int *)(((int)stk + 4)) = (t29 + 0x204);
                            FUN_0c059c64(((((struct o0_int *)0xC132E58)->v)), ((((struct o4_int *)0xC132E58)->v)), (t29 + 0x204), 0x80);
                            (((struct o10_uint *)0xC132E58)->v) = (*(int *)(((int)stk + 4)));
                            t77 = 0x1;
                        }
                    } else {
                        (((struct o3C_uint *)0xC132E58)->v) = 0x0;
                        *(unsigned int *)(((int)stk + 0)) = 0xC2B69BC;
                        FUN_0c059c64(((((struct o28_int *)0xC132E58)->v)), ((((struct o2C_int *)0xC132E58)->v)), 0xC2B69BC, 0x80);
                        (((struct o38_uint *)0xC132E58)->v) = (*(int *)(((int)stk + 0)));
                        t77 = 0x7;
                    }
                } else {
                    (((struct o3C_uint *)0xC132E58)->v) = 0x1;
                    *(unsigned int *)(((int)stk + 0)) = 0xC2B69BC;
                    FUN_0c059c64(((((struct o2C_int *)0xC132E04)->v)), ((((struct o30_int *)0xC132E04)->v)), 0xC2B69BC, 0x80);
                    (((struct o3C_uint *)0xC132E04)->v) = (*(int *)(((int)stk + 0)));
                    t77 = 0x3;
                }
                t78 = 0xC132DF4;
                t85 = 0x8;
            }
            t109 = t77;
            t110 = t78;
            t117 = t85;
        } else {
            (((struct o3C_uint *)0xC132E58)->v) = 0x1;
            t109 = 0x0;
            if ((*(int *)0xC175C84) == 1) {
                t109 = 0x9;
            }
            t110 = 0xC132AFC;
            t117 = 0xD;
        }
    } else {
        if ((*(int *)0xC175C84) == 1) {
            (((struct o3C_uint *)0xC132E58)->v) = 0x1;
            t109 = 0x1;
        } else {
            (((struct o3C_uint *)0xC132E58)->v) = 0x1;
            t109 = 0x0;
        }
        t110 = 0xC132774;
        t117 = 0x7;
    }
    if ((*(int *)0xC1EC71C) != 2) {
        *(unsigned int *)(((int)stk + 0)) = 0x0;
        *(unsigned int *)(((int)stk + 8)) = 0xC2B69BC;
        if ((int)t117 > 0) {
            t122 = t110;
            for (;;) {
                t123 = *(int *)(((int)stk + 8));
                *(unsigned int *)(((int)stk + 8)) = (t123 + 0x204);
                *(unsigned int *)(((int)stk + 4)) = ((t123 + 0x204) - 0x204);
                FUN_0c059c64((*(int *)((t122 + 0x0))), (*(int *)((t122 + 0x4))), ((t123 + 0x204) - 0x204), 0x80);
                *(unsigned int *)((t122 + 0x10)) = (*(int *)(((int)stk + 4)));
                t128 = *(int *)(((int)stk + 0));
                *(unsigned int *)(((int)stk + 0)) = (t128 + 0x1);
                t122 = (t122 + 0x14);
                if ((int)(t128 + 0x1) >= (int)t117) {
                    break;
                }
            }
        }
    }
    t149 = 0x0;
    for (;;) {
        u151 = *(float *)((t149 + (*(int *)((((((t109 << 2) + t109) << 2) + t110) + 0x10)))));
        t152 = (0xC2B8608 + t149);
        t149 = (t149 + 0x4);
        *(float *)((t152 + 0x0)) = u151;
        if ((unsigned int)t149 >= (unsigned int)0x204) {
            break;
        }
    }
    (((struct o0_float *)0xC2B880C)->v) = ((((struct o8_float *)(((((t109 << 2) + t109) << 2) + t110)))->v));
    (((struct o4_uint *)0xC2B880C)->v) = (*(int *)((((((t109 << 2) + t109) << 2) + t110) + 0xC)));
    (((struct o8_uint *)0xC2B880C)->v) = t109;
    (((struct o8_uint *)0xC2B85F8)->v) = t109;
    *(unsigned int *)0xC2B8A24 = 0xC2B8814;
    return 0xC2B8A24;
}

int FUN_0c06a2fe(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t5;
    register int t6;

    t0 = *(int *)0xC1ECCA8;
    if (t0 != 1) {
        return t0;
    }
    t0 = *(int *)((((a4 - 35) << 2) + 0xC10E5D0));
    t1 = (((struct o0_int *)0xC1EC71C)->v);
    if (t1 == 2) {
        if (a5 == 1) {
            *(unsigned int *)0xC13B6E8 = (*(int *)((((*(int *)((0xC13B6D8 + (t0 << 2))))) + (((int)((int)(((int (*)(int, int))(FUN_0c069e54))(t1, a5)) % (int)(*(int *)(((t0 << 2) + 0xC110DB0))))) << 2))));
            t2 = (*(int *)(((t0 << 2) + 0xC11039C)));
        } else {
            if (a5 == 2) {
                *(unsigned int *)0xC13B6E8 = (*(int *)((((*(int *)((0xC13B6B8 + (t0 << 2))))) + (((int)((int)(((int (*)(int, int))(FUN_0c069e54))(t1, a5)) % (int)(*(int *)(((t0 << 2) + 0xC110D2C))))) << 2))));
            } else {
                *(unsigned int *)0xC13B6E8 = (*(int *)((((*(int *)((0xC13B6C8 + (t0 << 2))))) + (((int)((int)(((int (*)(int, int))(FUN_0c069e54))(t1, a5)) % (int)(*(int *)(((t0 << 2) + 0xC110D50))))) << 2))));
            }
            t2 = (*(int *)((0xC1103AC + (t0 << 2))));
        }
        t3 = t2;
    } else {
        if (((((struct o8_int *)0xC1EC71C)->v)) == 15) {
            *(unsigned int *)0xC13B6E8 = (*(int *)((((*(int *)((0xC13B6D8 + (t0 << 2))))) + (((int)((int)(((int (*)(int))(FUN_0c069e54))(t1)) % (int)(*(int *)(((t0 << 2) + 0xC110DB0))))) << 2))));
            t2 = (*(int *)(((t0 << 2) + 0xC11039C)));
        } else {
            if (a5 == 1) {
                *(unsigned int *)0xC13B6E8 = (*(int *)(((t0 << 2) + (*(int *)(((a6 << 2) + (*(int *)((0xC13B6B0 + (t1 << 2))))))))));
                t2 = (*(int *)(((t0 << 2) + 0xC11039C)));
                t5 = a5;
                t6 = (a6 << 2);
            } else {
                if (a5 == 2) {
                    *(unsigned int *)0xC13B6E8 = (*(int *)((((*(int *)((0xC13B6B8 + (t0 << 2))))) + (((int)((int)(((int (*)(int, int))(FUN_0c069e54))(t1, a5)) % (int)(*(int *)(((t0 << 2) + 0xC110D2C))))) << 2))));
                } else {
                    *(unsigned int *)0xC13B6E8 = (*(int *)((((*(int *)((0xC13B6C8 + (t0 << 2))))) + (((int)((int)(((int (*)(int, int))(FUN_0c069e54))(t1, a5)) % (int)(*(int *)(((t0 << 2) + 0xC110D50))))) << 2))));
                }
                t2 = (*(int *)((0xC1103AC + (t0 << 2))));
            }
            t0 = t5;
            t1 = t6;
        }
        t3 = t2;
        t2 = t0;
        t0 = t1;
    }
    Voice_ShutUp(0x2);
    return FUN_0c058f64(0xC13B6E8, 0x2, t3, 0x0);
}
