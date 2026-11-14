/* Straight-line functions with calls and guards (batch gen_fk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int pdGetPeripheral(int);
int FUN_0c027408(void);

int FUN_0c027408(void)
{
    int stk[5];
    register int t0;
    register int t10;
    register float u13;
    register int t24;
    register float u26;
    register int t42;
    register int t43;
    register int t44;
    register int t46;
    register int t57;
    register int t65;
    register int t67;
    register int t79;
    register int t98;
    register int t99;
    register int t110;
    register float u119;
    register float u120;
    register float u132;
    register float u133;
    register float u145;
    register float u146;
    register float u158;
    register float u159;
    register float u171;
    register float u172;
    register float u184;
    register float u185;
    register float u197;
    register float u198;
    register int t246;
    int t7;
    register float u8;
    float u22;
    register int t109;
    int t242;

    t0 = pdGetPeripheral(0x6);
    (((struct o4_float *)(((int)stk + 0)))->v) = ((float)(unsigned short)(*(short *)((t0 + 0x18))) / 256.0f);
    (((struct o4_float *)((((int)stk + 0) + 0x4)))->v) = ((float)(unsigned short)(*(short *)((t0 + 0x1A))) / 256.0f);
    *(unsigned int *)(((int)stk + 0)) = ((((int)stk + 0) + 0x4) + 0x8);
    (((struct o8_float *)((((int)stk + 0) + 0x4)))->v) = ((float)(signed char)(*(short *)((t0 + 0x1C))) / 128.0f);
    (((struct oC_float *)((((int)stk + 0) + 0x4)))->v) = ((float)(signed char)(*(short *)((t0 + 0x1E))) / 128.0f);
    if (!((*(float *)(((*(int *)(((int)stk + 0))) + 0x0))) > 0.375f) && (t7 = *(int *)(((int)stk + 0)), u8 = *(float *)((t7 + 0x0)), !(-0.375f > u8))) {
        (((struct o4_uint *)0xC270CFC)->v) = (int)((float)((((struct o4_int *)0xC270CFC)->v)) * 0.550000012f);
    } else {
        t10 = (((struct o4_int *)0xC270CFC)->v);
        u13 = (-((*(float *)(((*(int *)(((int)stk + 0))) + 0x0))) * 512.0f));
        (((struct o4_uint *)0xC270CFC)->v) = (int)((float)t10 + (((u13 - (float)t10) * 0.449999988f)));
    }
    if (!(((((struct oC_float *)((((int)stk + 0) + 0x4)))->v)) > 0.375f) && (u22 = (((struct oC_float *)((((int)stk + 0) + 0x4)))->v), !(-0.375f > u22))) {
        (((struct o0_uint *)0xC270CFC)->v) = (int)((float)((((struct o0_int *)0xC270CFC)->v)) * 0.550000012f);
    } else {
        t24 = (((struct o0_int *)0xC270CFC)->v);
        u26 = (((((struct oC_float *)((((int)stk + 0) + 0x4)))->v)) * 512.0f);
        (((struct o0_uint *)0xC270CFC)->v) = (int)((float)t24 + (((u26 - (float)t24) * 0.449999988f)));
    }
    (((struct o0_uint *)0xC270B70)->v) = (((((struct o0_int *)0xC270B70)->v)) + ((((struct o0_int *)0xC270CFC)->v)));
    (((struct o4_uint *)0xC270B70)->v) = (((((struct o4_int *)0xC270B70)->v)) + ((((struct o4_int *)0xC270CFC)->v)));
    if (((*(int *)((t0 + 0x10))) & 0x200) != 0) {
        (((struct o0_uint *)0xC270B70)->v) = 0x2200;
        (((struct o4_uint *)0xC270B70)->v) = 0x2900;
        (((struct o0_uint *)0xC270CFC)->v) = 0x0;
        (((struct o4_uint *)0xC270CFC)->v) = 0x0;
    }
    t42 = *(int *)((t0 + 0x8));
    t43 = (((struct o4_int *)0xC124238)->v);
    if ((t42 & 32) != 0) {
        if (t43 != 0) {
            if ((int)t43 > (int)0xF) {
                t44 = ((~(((~t43) + 0x1) & 0x7)) + 0x1);
                if ((int)t43 >= 0) {
                    t44 = (t43 & 0x7);
                }
                if (t44 == 0) {
                    t46 = (((struct o0_int *)0xC124238)->v);
                    (((struct o0_uint *)0xC124238)->v) = (t46 + 0x1);
                    if ((int)(t46 + 0x1) >= (int)0xA) {
                        (((struct o0_uint *)0xC124238)->v) = 0x0;
                    }
                }
            }
        } else {
            t57 = (((struct o0_int *)0xC124238)->v);
            (((struct o0_uint *)0xC124238)->v) = (t57 + 0x1);
            if ((int)(t57 + 0x1) >= (int)0xA) {
                (((struct o0_uint *)0xC124238)->v) = 0x0;
            }
        }
        (((struct o4_uint *)0xC124238)->v) = (((((struct o4_int *)0xC124238)->v)) + 0x1);
    } else {
        if ((t42 & 16) != 0) {
            if (t43 != 0) {
                if ((int)t43 > (int)0xF) {
                    t65 = ((~(((~t43) + 0x1) & 0x7)) + 0x1);
                    if ((int)t43 >= 0) {
                        t65 = (t43 & 0x7);
                    }
                    if (t65 == 0) {
                        t67 = (((struct o0_int *)0xC124238)->v);
                        (((struct o0_uint *)0xC124238)->v) = (t67 - 1);
                        if ((int)(t67 - 1) < 0) {
                            (((struct o0_uint *)0xC124238)->v) = 0x9;
                        }
                    }
                }
            } else {
                t79 = (((struct o0_int *)0xC124238)->v);
                (((struct o0_uint *)0xC124238)->v) = (t79 - 1);
                if ((int)(t79 - 1) < 0) {
                    (((struct o0_uint *)0xC124238)->v) = 0x9;
                }
            }
            (((struct o4_uint *)0xC124238)->v) = (((((struct o4_int *)0xC124238)->v)) + 0x1);
        } else {
            (((struct o4_uint *)0xC124238)->v) = 0x0;
        }
    }
    t98 = *(int *)((t0 + 0x8));
    t99 = (((struct o8_int *)0xC124238)->v);
    if ((t98 & 64) != 0) {
        t109 = 0x1;
        if ((t99 != 0) && ((int)t99 <= (int)0xF)) {
            t109 = 0x0;
        }
        (((struct o8_uint *)0xC124238)->v) = (((((struct o8_int *)0xC124238)->v)) + 0x1);
    } else {
        if ((t98 & 128) != 0) {
            t109 = 0x3;
            if ((t99 != 0) && ((int)t99 <= (int)0xF)) {
                t109 = 0x0;
            }
            (((struct o8_uint *)0xC124238)->v) = (((((struct o8_int *)0xC124238)->v)) + 0x1);
        } else {
            (((struct o8_uint *)0xC124238)->v) = 0x0;
            t109 = 0x0;
        }
    }
    if (t109 == 0) {
    } else {
        t110 = (((struct o0_int *)0xC124238)->v);
        switch (t110) {
        case 0:
            (((struct o0_uint *)0xC270B70)->v) = (unsigned short)(((((struct o0_int *)0xC270B70)->v)) + ((0xFFFE + t109) << 8));
            break;
        case 1:
            (((struct o4_uint *)0xC270B70)->v) = (unsigned short)(((((struct o4_int *)0xC270B70)->v)) + ((0xFFFE + t109) << 8));
            break;
        case 2:
            u197 = (((struct o20_float *)0xC270B70)->v);
            u198 = ((float)(t109 - 2) * 0.00999999978f);
            (((struct o20_float *)0xC270B70)->v) = (u197 + u198);
            if (!(0.0f > (u197 + u198))) {
                if (((((struct o20_float *)0xC270B70)->v)) > 1.0f) {
                    (((struct o20_float *)0xC270B70)->v) = 1.0f;
                }
            } else {
                (((struct o20_float *)0xC270B70)->v) = 0.0f;
            }
            break;
        case 3:
            u184 = (((struct o8_float *)0xC270B70)->v);
            u185 = ((float)(t109 - 2) * 0.00999999978f);
            (((struct o8_float *)0xC270B70)->v) = (u184 + u185);
            if (!(0.0f > (u184 + u185))) {
                if (((((struct o8_float *)0xC270B70)->v)) > 1.0f) {
                    (((struct o8_float *)0xC270B70)->v) = 1.0f;
                }
            } else {
                (((struct o8_float *)0xC270B70)->v) = 0.0f;
            }
            break;
        case 4:
            u171 = (((struct oC_float *)0xC270B70)->v);
            u172 = ((float)(t109 - 2) * 0.00999999978f);
            (((struct oC_float *)0xC270B70)->v) = (u171 + u172);
            if (!(0.0f > (u171 + u172))) {
                if (((((struct oC_float *)0xC270B70)->v)) > 1.0f) {
                    (((struct oC_float *)0xC270B70)->v) = 1.0f;
                }
            } else {
                (((struct oC_float *)0xC270B70)->v) = 0.0f;
            }
            break;
        case 5:
            u158 = (((struct o10_float *)0xC270B70)->v);
            u159 = ((float)(t109 - 2) * 0.00999999978f);
            (((struct o10_float *)0xC270B70)->v) = (u158 + u159);
            if (!(0.0f > (u158 + u159))) {
                if (((((struct o10_float *)0xC270B70)->v)) > 1.0f) {
                    (((struct o10_float *)0xC270B70)->v) = 1.0f;
                }
            } else {
                (((struct o10_float *)0xC270B70)->v) = 0.0f;
            }
            break;
        case 6:
            u145 = (((struct o14_float *)0xC270B70)->v);
            u146 = ((float)(t109 - 2) * 0.00999999978f);
            (((struct o14_float *)0xC270B70)->v) = (u145 + u146);
            if (!(0.0f > (u145 + u146))) {
                if (((((struct o14_float *)0xC270B70)->v)) > 1.0f) {
                    (((struct o14_float *)0xC270B70)->v) = 1.0f;
                }
            } else {
                (((struct o14_float *)0xC270B70)->v) = 0.0f;
            }
            break;
        case 7:
            u132 = (((struct o18_float *)0xC270B70)->v);
            u133 = ((float)(t109 - 2) * 0.00999999978f);
            (((struct o18_float *)0xC270B70)->v) = (u132 + u133);
            if (!(0.0f > (u132 + u133))) {
                if (((((struct o18_float *)0xC270B70)->v)) > 1.0f) {
                    (((struct o18_float *)0xC270B70)->v) = 1.0f;
                }
            } else {
                (((struct o18_float *)0xC270B70)->v) = 0.0f;
            }
            break;
        case 8:
            u119 = (((struct o1C_float *)0xC270B70)->v);
            u120 = ((float)(t109 - 2) * 0.00999999978f);
            (((struct o1C_float *)0xC270B70)->v) = (u119 + u120);
            if (0.0f > (u119 + u120)) {
                (((struct o1C_float *)0xC270B70)->v) = 0.0f;
            } else {
                if (((((struct o1C_float *)0xC270B70)->v)) > 1.0f) {
                    (((struct o1C_float *)0xC270B70)->v) = 1.0f;
                }
            }
            break;
        case 9:
            (((struct oC_uint *)0xC124238)->v) = ((((((struct oC_int *)0xC124238)->v)) + 0x1) & 0x1);
            if ((int)((((struct o8_int *)0xC124238)->v)) > (int)0xA) {
                (((struct o8_uint *)0xC124238)->v) = 0x1;
            }
            break;
        }
    }
    (((struct o0_uint *)0xC270B70)->v) = (((((struct o0_int *)0xC270B70)->v)) & 0xFFFF);
    (((struct o4_uint *)0xC270B70)->v) = (((((struct o4_int *)0xC270B70)->v)) & 0xFFFF);
    if ((((*(int *)((t0 + 0x10))) & 4) != 0) && (t242 = (((struct o0_int *)0xC124238)->v), t242 == 9)) {
        (((struct oC_uint *)0xC124238)->v) = ((((((struct oC_int *)0xC124238)->v)) + 0x1) & 0x1);
    }
    t246 = 0x0;
    if (((*(int *)((t0 + 0x10))) & 2) != 0) {
        t246 = 0x1;
    }
    return t246;
}
