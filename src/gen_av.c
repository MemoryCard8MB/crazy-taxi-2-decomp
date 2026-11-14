/* Straight-line functions with calls and guards (batch gen_av): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_int { char p[0x1C]; int v; };
struct o20_float { char p[0x20]; float v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o30_int { char p[0x30]; int v; };
struct o34_int { char p[0x34]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o48_int { char p[0x48]; int v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o4C_int { char p[0x4C]; int v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o54_int { char p[0x54]; int v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o68_int { char p[0x68]; int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oD4_float { char p[0xD4]; float v; };
int ETD_EntryRecvFunc(int, int);
int FUN_0c018b1c(int);
int FUN_0c018b22(int, int);
int FUN_0c01f9a6(void);
int FUN_0c01f9ca(int);
int FUN_0c01fb8c(int, int);
int FUN_0c020244(void);
int FUN_0c02024c(void);
int FUN_0c026ce6(void);
int FUN_0c027f28(int);
int FUN_0c027fbe(float, float);
int FUN_0c027fdc(float);
int FUN_0c02803a(int, int, int, int);
float FUN_0c02806c(int, float, float, float);
int FUN_0c02842e(int);
int FUN_0c02877a(int);
int FUN_0c029b12(int, float);
int FUN_0c02c068(int, int, int, float);
extern int FUN_0c03346e();
int FUN_0c033578(int, int, float, float, float);
int FUN_0c03378c(int, int, int, int, float);
int FUN_0c033e38(int, int, int);
int FUN_0c034320(int, int);
int FUN_0c0343b8(int, int);
int FUN_0c034804(int, float, float);
int FUN_0c03b72e(int, int, float, float, float, float, float, float, float);
int FUN_0c03baba(int, int, float, float);
int FUN_0c03e43c(int);
int FUN_0c03f154(int);
int FUN_0c05b586(int);
int FUN_0c05c878(int, int, float);
int FUN_0c05c984(int, int, float);
int FUN_0c05ca24(float, float, float);
int FUN_0c05cac6(float);
int FUN_0c05cad0(float);
int FUN_0c05d1ca(int);
int FUN_0c05e784(int);
int FUN_0c06e700(int, int, float);
int FUN_0c071920(int);
float FUN_0c072140(int);
int FUN_0c072230(int, int);
int FUN_0c073360(void);
int FUN_0c073a30(float, float, float);
int FUN_0c073a60(int);
int FUN_0c076230(float, float, float);
int FUN_0c078810(int, int, int);
int FUN_0c078850(int);
int FUN_0c078890(float);
int FUN_0c07c8be(int);
int FUN_0c07ff00(void);
extern void _builtin_prefetch(void *);
int camSetTarget(int, int);
int kmQueryFinishFlushVertexBuffer(void);
extern int kmiFatalErrorEntry();
int kmiFlipVertexBuffer(int);
int kmiMemCopy4(int, int, int);
int kmiSetOpaqueDummy(void);
int nlGetAverageVector(int, int, int, float, float);
int nlGetMatrix(int);
int nlGetPushedMatrix(int);
float nlLength(int, int);
int nlLocate(int, int);
int nlPopMatrix(int);
int nlPrintf(int, ...);
int nlPushMatrix(int);
int nlQuickInvertMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int pdGetPeripheral(int);
int pfSize(float, float);
int FUN_0c03cd7e(void);
int kmRender(void);
int FUN_0c05c2cc(int a4);
float FUN_0c02a798(int a4, int a5, int a6, int a7);
int FUN_0c05e88c(int a4, int a5, float f4, float f5, float f6, float f7, float f8);
int FUN_0c034928(int a4, int a5, int a6, int a7, int a8);

int FUN_0c03cd7e(void)
{
    int stk[12];
    register int t1;
    register int t4;
    register int t5;
    register int t18;
    register int t28;
    register int t29;
    register int t49;
    register int t60;
    register int t63;
    register int t64;
    register int t67;
    register float u85;
    register float u86;
    register float u88;
    register int t131;
    register int t152;
    register int t156;
    register int t161;
    int t162;
    register int t163;
    register int t164;
    register int t165;
    register int t199;
    register float u168;
    register float u173;
    register float u177;
    register float u178;
    register float u180;
    register float u206;
    register float u208;
    register float u209;
    register float u220;
    register int t225;
    register float u226;
    register float u227;
    register float u229;
    register float u233;
    register float u252;
    register float u253;
    register float u263;
    register float u264;
    register float u266;
    register float u267;
    register float u268;
    register float u269;
    register int t273;
    register int t306;
    register int t312;
    register int t22;
    register int t23;
    register float u26;
    register int t30;
    register int t31;
    register int t38;
    register int t39;
    int t101;
    register int t102;
    register int t103;
    register int t104;
    int t167;
    int t247;

    *(float *)(((int)stk + 20)) = ((((struct o0_float *)0xC2A5858)->v));
    *(unsigned int *)(((int)stk + 12)) = 0xC2A4680;
    t1 = FUN_0c034320(0x0, 0x14);
    if (t1 != 0) {
        if (t1 == 1) {
            (((struct o0_uint *)0xC2A58B0)->v) = 0xFFFFFFFF;
            FUN_0c01f9a6();
            FUN_0c020244();
            t4 = FUN_0c03f154(0x0);
            t5 = 0x1;
            if (t4 == 0) {
                t5 = 0x0;
            }
            FUN_0c01f9ca(t5);
        }
        (((struct o4_float *)0xC2A58B0)->v) = 0.0f;
        (((struct o8_float *)0xC2A58B0)->v) = 0.0f;
        (((struct oC_float *)0xC2A58B0)->v) = 0.0f;
    }
    FUN_0c033e38(0x0, 0x1, 0x0);
    FUN_0c034804(0x9, (float)(-((((struct o4_int *)0xC2A5858)->v))), 416.0f);
    t18 = FUN_0c03f154(0x0);
    if (t18 == 0) {
        *(unsigned int *)(((int)stk + 4)) = 0xC0B7C7C;
        *(unsigned int *)(((int)stk + 0)) = 0x1D;
        *(unsigned int *)(((int)stk + 16)) = ((((struct o0_int *)0xC128D28)->v));
        t22 = 0xC0B3D30;
        t23 = 0xC0B7C4C;
        u26 = 248.0f;
    } else {
        *(unsigned int *)(((int)stk + 4)) = 0xC0B7CB4;
        *(unsigned int *)(((int)stk + 0)) = 0x21;
        *(unsigned int *)(((int)stk + 16)) = ((((struct o4_int *)0xC128D28)->v));
        t22 = 0xC0B3E8C;
        t23 = 0xC0B7C64;
        u26 = 256.0f;
    }
    *(float *)(((int)stk + 8)) = u26;
    t28 = (((struct o0_int *)0xC2A4670)->v);
    t29 = (((struct o0_int *)0xC2A58B0)->v);
    if (((t28 & 0x8) == 0) && ((t30 = (((struct o8_int *)0xC2A4670)->v), t30 != 0) || (t31 = (((struct o4_int *)0xC2A4670)->v), (t31 & 0x8) == 0))) {
        if (((t28 & 0x10) == 0) && ((t38 = (((struct o8_int *)0xC2A4670)->v), t38 != 0) || (t39 = (((struct o4_int *)0xC2A4670)->v), (t39 & 0x10) == 0))) {
        } else {
            (((struct o0_uint *)0xC2A58B0)->v) = (((((struct o0_int *)0xC2A58B0)->v)) + 0x1);
        }
    } else {
        (((struct o0_uint *)0xC2A58B0)->v) = (((((struct o0_int *)0xC2A58B0)->v)) - 1);
    }
    t49 = *(int *)(((int)stk + 0));
    if ((int)((((struct o0_int *)0xC2A58B0)->v)) >= (int)t49) {
        (((struct o0_uint *)0xC2A58B0)->v) = (t49 - 1);
    } else {
        if ((int)((((struct o0_int *)0xC2A58B0)->v)) < 0) {
            (((struct o0_uint *)0xC2A58B0)->v) = 0x0;
        }
    }
    if (t29 != ((((struct o0_int *)0xC2A58B0)->v))) {
        (((struct o4_float *)0xC2A58B0)->v) = 0.0f;
        if ((int)((((struct o0_int *)0xC2A58B0)->v)) > (int)t29) {
            (((struct o8_float *)0xC2A58B0)->v) = 1.0f;
            for (;;) {
                t60 = (((struct o0_int *)0xC2A58B0)->v);
                t63 = FUN_0c01fb8c((*(int *)((t22 + (((t60 << 1) + t60) << 2)))), 0x0);
                if (t63 != -1) {
                    break;
                }
            }
        } else {
            (((struct o8_float *)0xC2A58B0)->v) = -1.0f;
            for (;;) {
                t64 = (((struct o0_int *)0xC2A58B0)->v);
                t67 = FUN_0c01fb8c((*(int *)((t22 + (((t64 << 1) + t64) << 2)))), 0x0);
                if (t67 != -1) {
                    break;
                }
            }
        }
        (((struct oC_float *)0xC2A58B0)->v) = 0.0f;
        FUN_0c07c8be(0x10DA9);
    }
    if (1.0f > ((((struct o4_float *)0xC2A58B0)->v))) {
        (((struct o4_float *)0xC2A58B0)->v) = (((((struct o4_float *)0xC2A58B0)->v)) + 0.100000001f);
    }
    u85 = (((struct o8_float *)0xC2A58B0)->v);
    if (u85 > 0.0f) {
        u86 = (((struct o8_float *)0xC2A58B0)->v);
        (((struct o8_float *)0xC2A58B0)->v) = (u86 - 0.200000003f);
        if ((u86 - 0.200000003f) > 0.0f) {
        } else {
            (((struct o8_float *)0xC2A58B0)->v) = 0.0f;
        }
    } else {
        if (0.0f > u85) {
            u88 = (((struct o8_float *)0xC2A58B0)->v);
            (((struct o8_float *)0xC2A58B0)->v) = (u88 + 0.200000003f);
            if (!(0.0f > (u88 + 0.200000003f))) {
                (((struct o8_float *)0xC2A58B0)->v) = 0.0f;
            }
        }
    }
    if ((t1 == 0) && (t101 = (((struct o0_int *)0xC2A58B0)->v), t102 = (int)(((unsigned int)t101) >> 31), t103 = *(int *)((t22 + (((t101 << 1) + t101) << 2))), t104 = *(int *)0xC1ECD48, t103 == t104)) {
        if (1.0f > ((((struct oC_float *)0xC2A58B0)->v))) {
            (((struct oC_float *)0xC2A58B0)->v) = (((((struct oC_float *)0xC2A58B0)->v)) + 0.100000001f);
        }
        if (((((struct oC_float *)0xC2A58B0)->v)) == 0.5f) {
            FUN_0c07c8be(0xE05A9);
        }
        *(float *)(((int)stk + 36)) = (((float)((((struct o8_int *)0xC2A5858)->v)) - (((1.0f - ((((struct oC_float *)0xC2A58B0)->v))) * 500.0f))) + 55.0f);
        *(float *)(((int)stk + 40)) = 40.0f;
        t131 = ((int (*)(int, int, int, int))(FUN_0c03346e))(0xC0B7CEC, 0xC2A5808, (int)(*(float *)(((int)stk + 36))), (int)40.0f);
        FUN_0c03b72e(0x0, 0xFF508900, (*(float *)(((int)stk + 36))), (*(float *)(((int)stk + 40))), (((((struct o0_float *)0xC2A5858)->v)) + -0.0500000007f), 128.0f, 128.0f, 5.0f, (1.0f + 1.0f));
    }
    (((struct o0_float *)0xC2A5858)->v) = (((((struct o0_float *)0xC2A5858)->v)) + 0.200000003f);
    t152 = ((int (*)(int, int, int, int))(FUN_0c03346e))((*(int *)(((int)stk + 4))), 0xC2A5808, (int)((*(float *)(((int)stk + 8))) - (float)((((struct o4_int *)0xC2A5858)->v))), 0xFFFFFFE5);
    (((struct o0_float *)0xC2A5858)->v) = (((((struct o0_float *)0xC2A5858)->v)) - 0.100000001f);
    FUN_0c076230(0.976469994f, 1.0f, 0.839209974f);
    t156 = ((int (*)(int, int, int, int))(FUN_0c03346e))(t23, 0xC2A5808, (-((((struct o4_int *)0xC2A5858)->v))), 0x0);
    FUN_0c026ce6();
    (((struct o0_float *)0xC2A5858)->v) = (((((struct o0_float *)0xC2A5858)->v)) - 0.0500000007f);
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 0))) - 1);
    t162 = *(int *)(((int)stk + 0));
    if ((int)t162 <= 0) {
    } else {
        t161 = 0xC03D238;
        t163 = t22;
        t164 = t23;
        t165 = 0x0;
        for (;;) {
            t199 = t162;
            if (((int)t165 >= (int)((((struct o0_int *)0xC2A58B0)->v))) && (t167 = (((struct o0_int *)0xC2A58B0)->v), (int)t165 < (int)(t167 + 0xA))) {
                t161 = 0xC03D23C;
                u168 = *(float *)((t161 + 0x0));
                t161 = 0x24;
                t162 = ((((struct o8_int *)0xC2A5858)->v));
                *(float *)((((int)stk + 0) + t161)) = ((float)t162 + u168);
                t161 = 0xC03D1F8;
                t162 = ((((struct o8_int *)0xC2A5858)->v));
                u173 = *(float *)((t161 + 0x0));
                t161 = 0x18;
                *(float *)((((int)stk + 0) + t161)) = ((float)t162 + u173);
                t161 = 0xC03D240;
                t162 = ((((struct o0_int *)0xC2A58B0)->v));
                u177 = *(float *)((t161 + 0x0));
                t161 = 0xC03D244;
                u178 = *(float *)((t161 + 0x0));
                t161 = 0x1C;
                u180 = u177;
                u180 = u180 + u178 * ((float)(t165 - t162));
                *(float *)((((int)stk + 0) + t161)) = u180;
                t161 = 0x28;
                *(float *)((((int)stk + 0) + t161)) = u180;
                t162 = ((((struct o0_int *)0xC2A58B0)->v));
                if (t165 == t162) {
                    t162 = 0xC078890;
                    t164 = 0xFFFF1616;
                    t161 = (FUN_0c078890((1.0f + 1.0f)));
                    t161 = 0xC03D254;
                    t162 = 0xFFFF;
                    t161 = (FUN_0c03378c((((int)stk + 0) + 0x24), (((int)stk + 0) + 0x18), ((int)(((((*(float *)0xC177D9C) * 65536.0f) / (*(float *)((t161 + 0x0))))) + 0.5f) & t162), t164, ((((struct o0_float *)0xC2A5858)->v))));
                } else {
                    t199 = t162;
                }
            }
            t162 = t199;
            t161 = 0x8;
            t162 = ((((struct o8_int *)0xC2A5858)->v));
            u206 = *(float *)((((int)stk + 0) + t161));
            t161 = 0x18;
            *(float *)((((int)stk + 0) + t161)) = (((float)(*(int *)((t163 + 0x4))) - (float)t162) + u206);
            t161 = 0xC03D260;
            u208 = *(float *)((t161 + 0x0));
            t161 = 0x1C;
            *(float *)((((int)stk + 0) + t161)) = ((float)(*(int *)((t163 + 0x8))) + u208);
            t161 = 0xC03D264;
            u209 = *(float *)((t161 + 0x0));
            t161 = (FUN_0c076230(1.0f, u209, u209));
            t162 = (*(int *)(((int)stk + 0)));
            if ((int)t165 >= (int)t162) {
            } else {
                t161 = (*(int *)(((int)stk + 12)));
                t161 = (*(int *)((t161 + 0x1C)));
                if ((t161 & 4) == 0) {
                } else {
                    t162 = ((((struct o0_int *)0xC2A58B0)->v));
                    if (t165 != t162) {
                        t161 = 0x1C;
                        u220 = *(float *)((((int)stk + 0) + t161));
                        t161 = 0x18;
                        t161 = (((int (*)(int, int, int, int))(FUN_0c03346e))(0xC0B7C3C, 0xC2A5808, (int)(*(float *)((((int)stk + 0) + t161))), (int)u220));
                    } else {
                        (((struct o0_float *)0xC2A5858)->v) = (((((struct o0_float *)0xC2A5858)->v)) - 0.0500000007f);
                        t161 = (*(int *)0xC1EC83C);
                        t161 = (t161 & 0x1F);
                        t225 = t161;
                        t161 = 0xC03D26C;
                        u226 = *(float *)((t161 + 0x0));
                        u227 = ((float)t225 / u226);
                        if (((float)t225 / u226) > 1.0f) {
                            u227 = 1.0f;
                        }
                        t161 = 0x1C;
                        t162 = 0xC2A5834;
                        *(float *)((t162 + 0x0)) = u227;
                        u229 = *(float *)((((int)stk + 0) + t161));
                        t161 = 0x18;
                        t161 = (((int (*)(int, int, int, int, float))(FUN_0c03346e))(0xC0B7C2C, 0xC2A5808, (int)(*(float *)((((int)stk + 0) + t161))), (int)u229, ((float)t225 / u226)));
                        t162 = 0xC2A5834;
                        *(float *)((t162 + 0x0)) = 1.0f;
                        (((struct o0_float *)0xC2A5858)->v) = (((((struct o0_float *)0xC2A5858)->v)) + 0.0500000007f);
                        u233 = (((struct o4_float *)0xC2A58B0)->v);
                        t161 = (nlGetAverageVector((((int)stk + 0) + 0x24), (((int)stk + 0) + 0x18), (((int)stk + 0) + 0x18), (1.0f - u233), u233));
                        t161 = 0xC03D494;
                        t162 = 0xFFFF;
                        t161 = (FUN_0c03378c((((int)stk + 0) + 0x24), (((int)stk + 0) + 0x18), ((int)(((((*(float *)0xC177D9C) * 65536.0f) / (*(float *)((t161 + 0x0))))) + 0.5f) & t162), t164, ((((struct o0_float *)0xC2A5858)->v))));
                    }
                }
            }
            t162 = 0xC026CE6;
            t161 = (FUN_0c026ce6());
            if (((int)t165 >= (int)((((struct o0_int *)0xC2A58B0)->v))) && (t247 = (((struct o0_int *)0xC2A58B0)->v), (int)t165 < (int)(t247 + 0xA))) {
                t162 = ((((struct o0_int *)0xC2A58B0)->v));
                if (t165 == t162) {
                    t164 = 0xFFFFFFFF;
                } else {
                    t162 = t165;
                    t161 = 0xC03D4A8;
                    t162 = (t162 - ((((struct o0_int *)0xC2A58B0)->v)));
                    u252 = *(float *)((t161 + 0x0));
                    t161 = 0xC03D4AC;
                    u253 = *(float *)((t161 + 0x0));
                    t161 = 0xC03D4B0;
                    t164 = (int)((u253 - ((float)t162 / u252)) * (*(float *)((t161 + 0x0))));
                    t164 = (t164 << 16);
                    t164 = (t164 << 8);
                    t164 = (t164 | 0x508900);
                }
                t162 = 0xC02803A;
                t161 = (FUN_0c02803a(t164, t164, t164, t164));
                t161 = 0x28;
                u263 = *(float *)((((int)stk + 0) + t161));
                t161 = 0xC03D4BC;
                u264 = *(float *)((t161 + 0x0));
                t161 = 0xC03D4C0;
                u266 = u263;
                u266 = u266 + u264 * ((((struct o8_float *)0xC2A58B0)->v));
                u267 = *(float *)((t161 + 0x0));
                t161 = 0xC03D4C4;
                u268 = *(float *)((t161 + 0x0));
                t161 = 0x24;
                u269 = *(float *)((((int)stk + 0) + t161));
                t273 = 0xC0C06E4;
                if ((int)t165 < (int)(*(int *)(((int)stk + 0)))) {
                    t161 = (*(int *)(((int)stk + 16)));
                    t273 = (*(int *)((((*(int *)((t163 + 0x0))) << 2) + t161)));
                }
                t161 = (FUN_0c033578(0x0, t273, (u269 + u268), (u266 + u267), 1.0f));
                t162 = ((((struct o0_int *)0xC2A58B0)->v));
                if (t165 == t162) {
                    if (t165 != 0) {
                        /* manual: the original passes r4, r5 = 0x508900 and two floats built from the locals at stk+0x24 and stk+0x28 */
                        t161 = FUN_0c03baba(0x0, 0x508900, ((*(float *)((int)stk + 0x24)) + -225.0f), ((*(float *)((int)stk + 0x28)) + -32.0f));
                    }
                    t162 = (*(int *)(((int)stk + 4)));
                    if (t165 != t162) {
                        /* manual: the original passes r4, r5 = 0x508900 and two floats built from the locals at stk+0x24 and stk+0x28 */
                        t161 = FUN_0c03baba(0xFFFFFFFF, 0x508900, ((*(float *)((int)stk + 0x24)) + -225.0f), ((*(float *)((int)stk + 0x28)) + -2.0f));
                    }
                }
            }
            t162 = (*(int *)(((int)stk + 0)));
            t165 = (t165 + 0x1);
            t163 = (t163 + 0xC);
            if ((int)t165 < (int)t162) continue;
            break;
        }
    }
    (((struct o0_float *)0xC2A5858)->v) = (*(float *)(((int)stk + 20)));
    t306 = FUN_0c0343b8(0x0, 0x14);
    t312 = t306;
    if (t306 != 0) {
        (((struct o4_float *)0xC2A58B0)->v) = 0.0f;
        t312 = t306;
        if (t306 != 4) {
            t312 = (FUN_0c02024c());
        }
    }
    return t312;
}

int kmRender(void)
{
    int stk[22];

    register int R5;
    int R8;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_10;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    v0_0 = (((struct o4_int *)0xC170E6C)->v);
    *(unsigned int *)(((((int)stk + 0) + 0x10) + 0x0)) = ((((struct o0_int *)0xC170E6C)->v));
    *(unsigned int *)(((((int)stk + 0) + 0x10) + 0x4)) = v0_0;
    v0_0 = (((struct oC_int *)0xC170E6C)->v);
    *(unsigned int *)(((((int)stk + 0) + 0x10) + 0x8)) = ((((struct o8_int *)0xC170E6C)->v));
    *(unsigned int *)(((((int)stk + 0) + 0x10) + 0xC)) = v0_0;
    v0_0 = (((struct o14_int *)0xC170E6C)->v);
    *(unsigned int *)(((((int)stk + 0) + 0x10) + 0x10)) = ((((struct o10_int *)0xC170E6C)->v));
    *(unsigned int *)(((((int)stk + 0) + 0x10) + 0x14)) = v0_0;
    v0_0 = (((struct o1C_int *)0xC170E6C)->v);
    *(unsigned int *)(((((int)stk + 0) + 0x10) + 0x18)) = ((((struct o18_int *)0xC170E6C)->v));
    *(unsigned int *)(((((int)stk + 0) + 0x10) + 0x1C)) = v0_0;
    if ((((*(int *)0xC3008D4) & 64) == 0)) goto L_C157CBC;
    if ((((((struct o0_int *)0xC300D80)->v)) == 0)) goto L_C157CBC;
    if ((((((struct o8_int *)0xC300D80)->v)) == 0)) goto L_C157CBC;
    if (((*(int *)0xC300A94) == 0)) goto L_C157CBC;
    kmiSetOpaqueDummy();
    L_C157CBC:;
    v0_0 = (((struct o18_int *)0xC300C14)->v);
    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 0) + 0x44);
    (((struct o44_uint *)(((int)stk + 0)))->v) = (0xC300C50 + (v0_0 << 2));
    (((struct o48_uint *)(((int)stk + 0)))->v) = (0xC300C60 + (v0_0 << 2));
    (((struct o4C_uint *)(((int)stk + 0)))->v) = (0xC300C70 + (v0_0 << 2));
    *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x50);
    (((struct o50_uint *)(((int)stk + 0)))->v) = (0xC300C80 + (v0_0 << 2));
    (((struct o54_uint *)(((int)stk + 0)))->v) = (0xC300C90 + (v0_0 << 2));
    *(unsigned int *)(((((int)stk + 0) + 0x30) + 0x0)) = (0xC300CA0 + (v0_0 << 2));
    *(unsigned int *)(((((int)stk + 0) + 0x30) + 0x4)) = (0xC300CB0 + (v0_0 << 2));
    *(unsigned int *)(((((int)stk + 0) + 0x30) + 0x8)) = (0xC300CC0 + (v0_0 << 2));
    *(unsigned int *)(((((int)stk + 0) + 0x30) + 0xC)) = (0xC300CD0 + (v0_0 << 2));
    *(unsigned int *)(((((int)stk + 0) + 0x30) + 0x10)) = ((v0_0 << 2) + 0xC300CE0);
    *(unsigned int *)(((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) + 0x0)) = (*(int *)(((*(int *)0xC2D0C38) + 0x0)));
    *(unsigned int *)((((((struct o48_int *)(((int)stk + 0)))->v)) + 0x0)) = (*(int *)(((*(int *)0xC2D0C38) + 0x4)));
    *(unsigned int *)((((((struct o4C_int *)(((int)stk + 0)))->v)) + 0x0)) = (*(int *)(((*(int *)0xC2D0C38) + 0x8)));
    *(unsigned int *)(((*(int *)(((*(int *)(((int)stk + 0))) + 0x0))) + 0x0)) = (*(int *)(((*(int *)0xC2D0C38) + 0xC)));
    *(unsigned int *)((((((struct o54_int *)(((int)stk + 0)))->v)) + 0x0)) = (*(int *)(((*(int *)0xC2D0C38) + 0x10)));
    v0_1 = (0x1);
    v0_2 = (0x5);
    v0_0 = (0xC155A9E);
    v0_0 = (0x0);
    v0_3 = ((((int)stk + 0) + 0x30));
    v0_7 = (0xC2D0C38);
    v0_4 = ((((int)stk + 0) + 0x48));
    v0_5 = ((((int)stk + 0) + 0x54));
    R8 = (0xF0FFFFFF);
    v0_6 = (0xC2D0C3C);
    if ((((((struct o0_int *)0xC300C14)->v)) == 0)) goto L_C157D60;
    if (((((((struct o0_int *)0xC300CF0)->v)) & 32) != 0)) goto L_C157F0C;
    kmQueryFinishFlushVertexBuffer();
    *(unsigned int *)(((int)stk + 0)) = v0_0;
    *(unsigned int *)(((int)stk + 8)) = (((int)stk + 0) + 0x10);
    L_C1580EE:;
    v0_8 = *(int *)(((int)stk + 0));
    *(unsigned int *)(((int)stk + 4)) = (v0_8 << 2);
    v0_9 = *(int *)(((*(int *)((v0_6 + 0x0))) + (v0_8 << 2)));
    v0_10 = *(int *)(((*(int *)(((((int)stk + 0) + 0x44) + (v0_8 << 2)))) + 0x0));
    v0_7 = ((v0_9 - v0_10));
    v0_8 = ((*(int *)((v0_3 + (v0_8 << 2)))));
    if (((int)(v0_9 - v0_10) >= 0)) goto L_C15810A;
    v0_7 = ((v0_7 + 0x3));
    L_C15810A:;
    *(unsigned int *)((v0_8 + 0x0)) = (((v0_7 >> 1) >> 1) << 2);
    kmiMemCopy4((*(int *)(((*(int *)((v0_6 + 0x0))) + (*(int *)(((int)stk + 4)))))), 0xC170E64, 0x4);
    v0_7 = *(int *)(((int)stk + 4));
    v0_8 = *(int *)((v0_6 + 0x0));
    *(unsigned int *)((v0_8 + v0_7)) = ((*(int *)((v0_8 + v0_7))) + 0x20);
    v0_7 = *(int *)(((int)stk + 0));
    v0_8 = (v0_7);
    if (((((int)v0_1 << (int)v0_7) & (*(int *)0xC300D38)) != 0)) goto L_C15813E;
    *(unsigned int *)(((*(int *)((v0_3 + (v0_8 << 2)))) + 0x0)) = v0_0;
    L_C15813E:;
    v0_7 = *(int *)(((int)stk + 0));
    v0_8 = (v0_7);
    if (((((int)v0_1 << (int)v0_7) & (*(int *)0xC300D38)) == 0)) goto L_C1581E8;
    *(unsigned int *)(((int)stk + 4)) = (v0_8 << 2);
    if (((unsigned int)(*(int *)(((*(int *)((v0_3 + (v0_8 << 2)))) + 0x0))) <= (unsigned int)(*(int *)(((*(int *)(((int)stk + 4))) + 0xC306E18))))) goto L_C15816C;
    v0_7 = *(int *)(((int)stk + 4));
    *(unsigned int *)((v0_7 + 0xC306E18)) = (*(int *)(((*(int *)((v0_3 + v0_7))) + 0x0)));
    L_C15816C:;
    if (((unsigned int)(*(int *)(((*(int *)((v0_3 + (*(int *)(((int)stk + 4)))))) + 0x0))) <= (unsigned int)(*(int *)(((*(int *)(((int)stk + 4))) + 0xC300D94))))) goto L_C1581E8;
    v0_6 = (v0_0);
    L_C15817E:;
    *(unsigned int *)(((int)stk + 0)) = (v0_6 << 2);
    v0_8 = ((v0_6 << 2));
    if (((((int)v0_1 << (int)v0_6) & (*(int *)0xC300D38)) == 0)) goto L_C1581D2;
    v0_7 = *(int *)(((int)stk + 8));
    *(unsigned int *)((v0_7 + 0x0)) = (((*(int *)((v0_7 + 0x0))) & R8) | ((v0_6 << 16) << 8));
    v0_7 = *(int *)(((int)stk + 0));
    *(unsigned int *)(((int)stk + 4)) = (v0_7 + (((int)stk + 0) + 0x44));
    kmiMemCopy4((*(int *)(((*(int *)(((v0_7 + (((int)stk + 0) + 0x44)) + 0x0))) + 0x0))), (((int)stk + 0) + 0x10), 0x20);
    kmiMemCopy4(((*(int *)(((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) + 0x0))) + 0x20), 0xC170E64, 0x4);
    *(unsigned int *)(((*(int *)((v0_3 + (*(int *)(((int)stk + 0)))))) + 0x0)) = 0x20;
    L_C1581D8:;
    v0_7 = (int)(v0_6 + 0x1) < (int)v0_2;
    v0_6 = ((v0_6 + 0x1));
    if (v0_7) goto L_C15817E;
    L_C1581DE:;
    v0_1 = ((int (*)(int, int, int, int))(kmiFatalErrorEntry))(0x2, R5, v0_4, v0_5);
    L_C1581F6:;
    (((struct o4_uint *)0xC1740A4)->v) = v0_0;
    v0_0 = (((struct o0_int *)0xC1740A4)->v);
    (((struct o0_uint *)0xC1740A4)->v) = ((v0_0 + 0x1) & 0x1);
    kmiFlipVertexBuffer(((v0_0 + 0x1) & 0x1));
    return 0x0;
    L_C1581D2:;
    *(unsigned int *)(((*(int *)(((v0_8 + v0_3) + 0x0))) + 0x0)) = v0_0;
    goto L_C1581D8;
    L_C1581E8:;
    v0_7 = *(int *)(((int)stk + 0));
    *(unsigned int *)(((int)stk + 0)) = (v0_7 + 0x1);
    if (((int)(v0_7 + 0x1) >= (int)v0_2)) goto L_C1581F6;
    goto L_C1580EE;
    L_C157F0C:;
    *(unsigned int *)(((int)stk + 0)) = v0_0;
    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 0) + 0x10);
    L_C157F14:;
    if (!(((*(int *)(((int)stk + 0))) != ((((struct o4_int *)0xC300CF0)->v))))) goto L_C15801E;
    v0_7 = *(int *)(((int)stk + 0));
    v0_8 = (v0_7);
    if (((((int)v0_1 << (int)v0_7) & (*(int *)0xC300D38)) == 0)) goto L_C158016;
    *(unsigned int *)(((int)stk + 8)) = (v0_8 << 2);
    *(unsigned int *)(((int)stk + 12)) = ((v0_8 << 2) + v0_3);
    v0_9 = *(int *)(((*(int *)((v0_6 + 0x0))) + (*(int *)(((int)stk + 8)))));
    v0_10 = *(int *)(((*(int *)(((*(int *)(((int)stk + 8))) + (((int)stk + 0) + 0x44)))) + 0x0));
    v0_7 = ((*(int *)((((v0_8 << 2) + v0_3) + 0x0))));
    v0_8 = ((v0_9 - v0_10));
    if (((int)(v0_9 - v0_10) >= 0)) goto L_C157F52;
    v0_8 = ((v0_8 + 0x3));
    goto L_C157F52;
    L_C15801E:;
    v0_7 = *(int *)(((int)stk + 0));
    *(unsigned int *)(((int)stk + 0)) = (v0_7 + 0x1);
    if (((int)(v0_7 + 0x1) >= (int)v0_2)) goto L_C15802C;
    goto L_C157F14;
    L_C15802C:;
    if (((*(int *)(((((((struct o4_int *)0xC300CF0)->v)) << 2) + (*(int *)((v0_6 + 0x0)))))) == (*(int *)(((*(int *)((((((((struct o4_int *)0xC300CF0)->v)) << 2) + (((int)stk + 0) + 0x44)) + 0x0))) + 0x0))))) goto L_C15804E;
    goto L_C1581F6;
    L_C15804E:;
    (((struct o0_uint *)0xFF000038)->v) = 0x10;
    (((struct o4_uint *)0xFF000038)->v) = 0x10;
    *(unsigned int *)(((((int)stk + 0) + 0x10) + 0x0)) = ((R8 & (*(int *)(((((int)stk + 0) + 0x10) + 0x0)))) | (((((((struct o4_int *)0xC300CF0)->v)) & 0x7) << 16) << 8));
    v0_1 = *(int *)(((((((struct o4_int *)0xC300CF0)->v)) << 2) + (*(int *)((v0_6 + 0x0)))));
    kmiMemCopy4(((v0_1 & 0x3FFFFFF) | 0xE0000000), (((int)stk + 0) + 0x10), 0x20);
    _builtin_prefetch((void *)((v0_1 & 0x3FFFFFF) | 0xE0000000));
    goto L_C1581F6;
    L_C157F52:;
    *(unsigned int *)((v0_7 + 0x0)) = (((v0_8 >> 1) >> 1) << 2);
    kmiMemCopy4((*(int *)(((*(int *)((v0_6 + 0x0))) + (*(int *)(((int)stk + 8)))))), 0xC170E64, 0x4);
    v0_7 = *(int *)(((int)stk + 8));
    v0_8 = *(int *)((v0_6 + 0x0));
    *(unsigned int *)((v0_8 + v0_7)) = ((*(int *)((v0_8 + v0_7))) + 0x20);
    v0_7 = (0xC306E18);
    if (((unsigned int)(*(int *)(((*(int *)(((*(int *)(((int)stk + 12))) + 0x0))) + 0x0))) <= (unsigned int)(*(int *)(((*(int *)(((int)stk + 8))) + 0xC306E18))))) goto L_C157F90;
    v0_8 = *(int *)(((int)stk + 0));
    *(unsigned int *)(((v0_7 + (v0_8 << 2)) + 0x0)) = (*(int *)(((*(int *)((v0_3 + (v0_8 << 2)))) + 0x0)));
    L_C157F90:;
    v0_8 = *(int *)(((int)stk + 0));
    v0_7 = ((v0_8 << 2));
    if (((unsigned int)(*(int *)(((*(int *)((v0_3 + (v0_8 << 2)))) + 0x0))) <= (unsigned int)(*(int *)((0xC300D94 + (v0_8 << 2)))))) goto L_C15801E;
    v0_1 = (v0_0);
    L_C157FA4:;
    if ((v0_1 == ((((struct o4_int *)0xC300CF0)->v)))) goto L_C157FFE;
    if (((((int)0x1 << (int)v0_1) & (*(int *)0xC300D38)) == 0)) goto L_C157FFE;
    v0_7 = *(int *)(((int)stk + 4));
    *(unsigned int *)((v0_7 + 0x0)) = (((*(int *)((v0_7 + 0x0))) & R8) | ((v0_1 << 16) << 8));
    *(unsigned int *)(((int)stk + 0)) = (v0_1 << 2);
    *(unsigned int *)(((int)stk + 8)) = ((v0_1 << 2) + (((int)stk + 0) + 0x44));
    kmiMemCopy4((*(int *)(((*(int *)((((v0_1 << 2) + (((int)stk + 0) + 0x44)) + 0x0))) + 0x0))), (((int)stk + 0) + 0x10), 0x20);
    kmiMemCopy4(((*(int *)(((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))) + 0x0))) + 0x20), 0xC170E64, 0x4);
    *(unsigned int *)(((*(int *)((v0_3 + (*(int *)(((int)stk + 0)))))) + 0x0)) = 0x20;
    L_C158006:;
    v0_7 = (int)(v0_1 + 0x1) < (int)v0_2;
    v0_1 = ((v0_1 + 0x1));
    if (v0_7) goto L_C157FA4;
    v0_1 = ((int (*)(int, int, int, int))(kmiFatalErrorEntry))(0x2, R5, v0_4, v0_5);
    goto L_C15802C;
    L_C157FFE:;
    *(unsigned int *)(((*(int *)((v0_3 + (v0_1 << 2)))) + 0x0)) = v0_0;
    goto L_C158006;
    L_C158016:;
    *(unsigned int *)(((*(int *)((v0_3 + (v0_8 << 2)))) + 0x0)) = v0_0;
    goto L_C15801E;
    L_C157D60:;
    *(unsigned int *)(((int)stk + 4)) = v0_0;
    L_C157D62:;
    v0_7 = *(int *)(((int)stk + 4));
    v0_8 = (v0_7);
    if (((((int)v0_1 << (int)v0_7) & (*(int *)0xC300D38)) == 0)) goto L_C157DAC;
    *(unsigned int *)(((int)stk + 0)) = (v0_8 << 2);
    v0_9 = *(int *)(((*(int *)((v0_6 + 0x0))) + (v0_8 << 2)));
    v0_10 = *(int *)(((*(int *)(((*(int *)(((int)stk + 0))) + (((int)stk + 0) + 0x44)))) + 0x0));
    v0_7 = ((v0_9 - v0_10));
    v0_8 = ((*(int *)((v0_3 + (v0_8 << 2)))));
    if (((int)(v0_9 - v0_10) >= 0)) goto L_C157D8E;
    v0_7 = ((v0_7 + 0x3));
    L_C157D8E:;
    *(unsigned int *)((v0_8 + 0x0)) = (((v0_7 >> 1) >> 1) << 2);
    kmiMemCopy4((*(int *)(((*(int *)((v0_6 + 0x0))) + (*(int *)(((int)stk + 0)))))), 0xC170E64, 0x4);
    v0_7 = *(int *)(((int)stk + 0));
    v0_8 = *(int *)((v0_6 + 0x0));
    *(unsigned int *)((v0_8 + v0_7)) = ((*(int *)((v0_8 + v0_7))) + 0x20);
    L_C157DAC:;
    v0_7 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = (v0_7 + 0x1);
    if (((int)(v0_7 + 0x1) < (int)v0_2)) goto L_C157D62;
    v0_7 = (v0_0);
    L_C157DB8:;
    if (((((int)v0_1 << (int)v0_7) & (*(int *)0xC300D38)) != 0)) goto L_C157DCC;
    *(unsigned int *)(((*(int *)((v0_3 + (v0_7 << 2)))) + 0x0)) = v0_0;
    L_C157DCC:;
    v0_6 = (int)(v0_7 + 0x1) < (int)v0_2;
    v0_7 = ((v0_7 + 0x1));
    if (v0_6) goto L_C157DB8;
    *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x10);
    v0_7 = (v0_0);
    L_C157DDA:;
    if (((((int)v0_1 << (int)v0_7) & (*(int *)0xC300D38)) == 0)) goto L_C157E74;
    if (((unsigned int)(*(int *)(((*(int *)((v0_3 + (v0_7 << 2)))) + 0x0))) <= (unsigned int)(*(int *)((0xC306E18 + (v0_7 << 2)))))) goto L_C157E08;
    *(unsigned int *)(((0xC306E18 + (v0_7 << 2)) + 0x0)) = (*(int *)(((*(int *)((v0_3 + (v0_7 << 2)))) + 0x0)));
    L_C157E08:;
    R5 = ((v0_7 << 2));
    if (((unsigned int)(*(int *)(((*(int *)((v0_3 + (v0_7 << 2)))) + 0x0))) <= (unsigned int)(*(int *)((0xC300D94 + (v0_7 << 2)))))) goto L_C157E74;
    v0_6 = (v0_0);
    L_C157E1C:;
    if (((((int)v0_1 << (int)v0_6) & (*(int *)0xC300D38)) == 0)) goto L_C157E6A;
    v0_7 = *(int *)(((int)stk + 0));
    *(unsigned int *)((v0_7 + 0x0)) = (((*(int *)((v0_7 + 0x0))) & R8) | ((v0_6 << 16) << 8));
    *(unsigned int *)(((int)stk + 8)) = (v0_6 << 2);
    *(unsigned int *)(((int)stk + 4)) = ((v0_6 << 2) + (((int)stk + 0) + 0x44));
    kmiMemCopy4((*(int *)(((*(int *)((((v0_6 << 2) + (((int)stk + 0) + 0x44)) + 0x0))) + 0x0))), (((int)stk + 0) + 0x10), 0x20);
    kmiMemCopy4(((*(int *)(((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) + 0x0))) + 0x20), 0xC170E64, 0x4);
    *(unsigned int *)(((*(int *)((v0_3 + (*(int *)(((int)stk + 8)))))) + 0x0)) = 0x20;
    L_C157E6A:;
    v0_7 = (int)(v0_6 + 0x1) < (int)v0_2;
    v0_6 = ((v0_6 + 0x1));
    if (v0_7) goto L_C157E1C;
    goto L_C1581DE;
    L_C157E74:;
    v0_6 = (int)(v0_7 + 0x1) < (int)v0_2;
    v0_7 = ((v0_7 + 0x1));
    if (v0_6) goto L_C157DDA;
    goto L_C1581F6;
}

int FUN_0c05c2cc(int a4)
{
    int stk[16];
    register int t2;
    register int t31;
    register int t211;
    register int t99;
    register float u109;
    register float u110;
    register int t112;
    register float u115;
    register float u116;
    register int t120;
    register float u131;
    register float u132;
    register float u136;
    register float u137;
    register float u143;
    register float t167;
    register float t178;
    register float t189;
    register int t196;
    float R1016;
    float R1020;
    int R1048;

    R1016 = *(float *)((int)stk + 16);
    R1020 = *(float *)((int)stk + 20);
    R1048 = *(int *)((int)stk + 48);

    if (a4 != 0) {
        (((struct o0_uint *)0xC136CB0)->v) = 0x0;
    }
    t2 = pdGetPeripheral(0xC);
    if (((*(int *)((t2 + 0x10))) & 16) != 0) {
        if (((((struct o0_int *)0xC136CB0)->v)) != 1) {
            (((struct o0_uint *)0xC136CB0)->v) = 0x1;
        } else {
            (((struct o0_uint *)0xC136CB0)->v) = 0x4;
        }
    }
    if (((*(int *)((t2 + 0x10))) & 32) != 0) {
        if (((((struct o0_int *)0xC136CB0)->v)) != 2) {
            (((struct o0_uint *)0xC136CB0)->v) = 0x2;
        } else {
            (((struct o0_uint *)0xC136CB0)->v) = 0x5;
        }
    }
    if (((*(int *)((t2 + 0x10))) & 64) != 0) {
        (((struct o0_uint *)0xC136CB0)->v) = 0x3;
    }
    if (((*(int *)((t2 + 0x10))) & 128) != 0) {
        (((struct o4_uint *)0xC136CB0)->v) = (((((((struct o4_int *)0xC136CB0)->v)) == 0)) ? 1 : 0);
    }
    t31 = (((struct o0_int *)0xC136CB0)->v);
    switch (t31) {
    case 0:
        FUN_0c018b1c(0x1);
        FUN_0c07ff00();
        FUN_0c06e700((((int)stk + 48) + 0x4), 0xC17598C, -50.0f);
        FUN_0c018b22((((int)stk + 48) + 0x4), 0x0);
        t211 = camSetTarget(0xC175930, 0x0);
        (((struct o0_uint *)0xC136CB0)->v) = 0x1;
        break;
    case 1:
        t211 = (FUN_0c05c878(((*(short *)((t2 + 0x1E))) << 1), ((*(short *)((t2 + 0x1C))) << 1), (((float)((unsigned short)(*(short *)((t2 + 0x18))) - (unsigned short)(*(short *)((t2 + 0x1A)))) * 0.5f) / 128.0f)));
        break;
    case 2:
        t211 = (FUN_0c05c984((*(short *)((t2 + 0x1E))), (-(*(short *)((t2 + 0x1C)))), (((float)((unsigned short)(*(short *)((t2 + 0x1A))) - (unsigned short)(*(short *)((t2 + 0x18)))) * 0.5f) / 128.0f)));
        break;
    case 3:
        t211 = (FUN_0c05ca24((((float)(*(short *)((t2 + 0x1C))) * 0.5f) / 128.0f), ((-((float)(*(short *)((t2 + 0x1E))) * 0.5f)) / 128.0f), (((float)((unsigned short)(*(short *)((t2 + 0x1A))) - (unsigned short)(*(short *)((t2 + 0x18)))) * 0.5f) / 128.0f)));
        break;
    case 4:
        t211 = (FUN_0c05cac6((((float)((unsigned short)(*(short *)((t2 + 0x1A))) - (unsigned short)(*(short *)((t2 + 0x18)))) * 0.5f) / 128.0f)));
        break;
    default:
        t211 = t31;
        if (t31 == 5) {
            t211 = (FUN_0c05cad0((((float)((unsigned short)(*(short *)((t2 + 0x1A))) - (unsigned short)(*(short *)((t2 + 0x18)))) * 0.5f) / 128.0f)));
        }
        break;
    }
    if (((((struct o4_int *)0xC136CB0)->v)) == 0) {
    } else {
        nlLocate(0x3C, 0xF);
        FUN_0c071920(0xFF00FF00);
        *(int *)((int)stk + 44) = 0xC10DA28;
        nlPrintf(0xC10DA28);
        FUN_0c071920(0xFFFFFFFF);
        ETD_EntryRecvFunc(0x10, 0x10);
        t99 = (*(int *)(((((((struct o0_int *)0xC136CB0)->v)) << 2) + 0xC136CB8)));
        *(int *)((int)stk + 40) = t99;
        *(int *)((int)stk + 36) = 0xC10DA38;
        nlPrintf(0xC10DA38, t99);
        ETD_EntryRecvFunc(0x8, 0x8);
        FUN_0c071920(0xFF00FF00);
        *(int *)((int)stk + 32) = 0xC10DA3C;
        nlPrintf(0xC10DA3C);
        FUN_0c071920(0xFFFFFFFF);
        *(float *)(((int)stk + 28)) = ((((struct o14_float *)0xC177D38)->v));
        *(float *)(((int)stk + 24)) = ((((struct o10_float *)0xC177D38)->v));
        R1020 = ((((struct oC_float *)0xC177D38)->v));
        R1016 = ((((struct o8_float *)0xC177D38)->v));
        u109 = (((struct o4_float *)0xC177D38)->v);
        *(float *)(((int)stk + 12)) = u109;
        u110 = (((struct o0_float *)0xC177D38)->v);
        *(float *)(((int)stk + 8)) = u110;
        *(int *)((int)stk + 4) = 0xC10DA4C;
        nlPrintf(0xC10DA4C, u110, u109);
        t112 = FUN_0c029b12(0xC177D44, 100.0f);
        if ((*(int *)((t112 + 0x1C))) != -1) {
            *(float *)(((int)stk + 44)) = ((((struct o8_float *)(t112))->v));
            u115 = (((struct o4_float *)(t112))->v);
            *(float *)(((int)stk + 40)) = u115;
            u116 = *(float *)((t112 + 0x0));
            *(float *)(((int)stk + 36)) = u116;
            *(int *)((int)stk + 32) = 0xC10DA90;
            nlPrintf(0xC10DA90, u116, u115);
            t120 = (*(int *)((((*(int *)((t112 + 0x1C))) << 2) + 0xC136D0C)));
            *(int *)((int)stk + 28) = t120;
            *(int *)((int)stk + 24) = 0xC10DAB4;
            nlPrintf(0xC10DAB4, t120);
        }
        FUN_0c071920(0xFF00FF00);
        *(int *)((int)stk + 44) = 0xC10DAC0;
        nlPrintf(0xC10DAC0);
        FUN_0c071920(0xFFFFFFFF);
        nlPushMatrix(0xC17596C);
        nlQuickInvertMatrix();
        FUN_0c072230(0xC177D38, (((int)stk + 44) + 0x8));
        *(float *)(((int)stk + 40)) = (*(float *)(((int)stk + 60)));
        u131 = *(float *)(((int)stk + 56));
        *(float *)(((int)stk + 36)) = u131;
        u132 = *(float *)(((int)stk + 52));
        *(float *)(((int)stk + 32)) = u132;
        *(int *)((int)stk + 28) = 0xC10DAD4;
        nlPrintf(0xC10DAD4, u132, u131);
        FUN_0c072230(0xC177D44, (((int)stk + 28) + 0x18));
        *(float *)(((int)stk + 24)) = (*(float *)(((int)stk + 60)));
        u136 = *(float *)(((int)stk + 56));
        R1020 = u136;
        u137 = *(float *)(((int)stk + 52));
        R1016 = u137;
        *(int *)((int)stk + 12) = 0xC10DAF8;
        nlPrintf(0xC10DAF8, u137, u136);
        nlPopMatrix(0x1);
        FUN_0c071920(0xFF00FF00);
        *(int *)((int)stk + 8) = 0xC10DB1C;
        nlPrintf(0xC10DB1C);
        FUN_0c071920(0xFFFFFFFF);
        u143 = *(float *)0xC177D9C;
        *(float *)(((int)stk + 4)) = u143;
        *(int *)((int)stk + 0) = 0xC10DB34;
        nlPrintf(0xC10DB34, u143);
        FUN_0c073360();
        FUN_0c073a60(0xC177D44);
        nlPushMatrix(0x0);
        nlScale((1.0f + 1.0f), (1.0f + 1.0f), (1.0f + 1.0f));
        FUN_0c078890(3.0f);
        FUN_0c078810(0xC10D9BC, 0xC10D9C8, 0xFFFF0000);
        FUN_0c078810(0xC10D9BC, 0xC10D9E0, 0xFF00FF00);
        FUN_0c078810(0xC10D9BC, 0xC10D9F8, 0xFF0000FF);
        nlGetPushedMatrix(0x0);
        nlScale(5.0f, 5.0f, 5.0f);
        FUN_0c078890(1.0f);
        FUN_0c078810(0xC10D9BC, 0xC10D9D4, 0xFFFF8080);
        FUN_0c078810(0xC10D9BC, 0xC10D9EC, 0xFF80FF80);
        FUN_0c078810(0xC10D9BC, 0xC10DA04, 0xFF8080FF);
        nlGetPushedMatrix(0x0);
        FUN_0c078890(3.0f);
        nlPushMatrix(0x0);
        R1048 = 0xC136CD4;
        (((struct o24_uint *)0xC136CB0)->v) = 0xFFFF0000;
        nlRotateAX(((((*(int *)0xC1EC83C) << 8) << 2) << 1));
        t167 = FUN_0c072140(((((*(int *)0xC1EC83C) << 8) << 2) << 1));
        FUN_0c073a30((t167 * 0.5f), 0.0f, 0.0f);
        FUN_0c078850(0xC136CD0);
        nlGetPushedMatrix(0x0);
        *(unsigned int *)(((R1048) + 0x0)) = 0xFF00FF00;
        nlRotateAZ(0x4000);
        nlRotateAX(((((*(int *)0xC1EC83C) << 8) << 2) << 1));
        t178 = FUN_0c072140(((((*(int *)0xC1EC83C) << 8) << 2) << 1));
        FUN_0c073a30((t178 * 0.5f), 0.0f, 0.0f);
        FUN_0c078850(0xC136CD0);
        nlGetPushedMatrix(0x0);
        *(unsigned int *)(((R1048) + 0x0)) = 0xFF0000FF;
        nlRotateAY(0xC000);
        nlRotateAX(((((*(int *)0xC1EC83C) << 8) << 2) << 1));
        t189 = FUN_0c072140(((((*(int *)0xC1EC83C) << 8) << 2) << 1));
        FUN_0c073a30((t189 * 0.5f), 0.0f, 0.0f);
        FUN_0c078850(0xC136CD0);
        nlPopMatrix(0x1);
        FUN_0c078890(1.0f);
        nlPopMatrix(0x1);
        nlPopMatrix(0x1);
        t196 = *(int *)((t112 + 0x1C));
        t211 = t196;
        if (t196 != -1) {
            FUN_0c073360();
            FUN_0c073a30((*(float *)((t112 + 0x0))), (((((struct o4_float *)(t112))->v)) + (*(float *)0xC05C928)), ((((struct o8_float *)(t112))->v)));
            nlRotateAZ(0xC000);
            nlRotateAX(((((*(int *)0xC1EC83C) << 8) << 2) << 1));
            (((struct o24_uint *)0xC136CB0)->v) = 0xFFFFFF00;
            FUN_0c078850(0xC136CD0);
            t211 = (nlPopMatrix(0x1));
        }
    }
    return t211;
}

float FUN_0c02a798(int a4, int a5, int a6, int a7)
{
    int t27;
    int t185;

    register int R5;
    register float F0;
    register float F2;
    register float F3;
    register float F4;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    int v0_4;
    register int v0_5;
    register int v0_6;
    int v0_7;
    register int v0_8;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    v0_6 = a4;
    (((struct o0_uint *)0xC271E34)->v) = 0x0;
    v0_0 = (0x1B);
    v0_1 = (0xC271CEC);
    v0_2 = (0xC271E34);
    L_C02A7E4:;
    if (((int)(*(int *)((v0_2 + 0x0))) < (int)v0_0)) goto L_C02A7BC;
    v0_3 = (0x1);
    if (!(((*(int *)0xC271DC4) != 0))) goto L_C02A95E;
    *(unsigned int *)((v0_2 + 0x0)) = 0x0;
    (((struct o20_uint *)0xC271E34)->v) = 0xC271E5C;
    v0_4 = *(int *)(((*(int *)((v0_1 + 0x0))) + 0x0));
    (((struct o4_uint *)0xC271E34)->v) = v0_3;
    v0_5 = (0xC128DB4);
    v0_4 = (v0_4);
    goto L_C02A936;
    L_C02A95E:;
    *(unsigned int *)((v0_2 + 0x0)) = v0_3;
    L_C02AB2C:;
    if (((int)(*(int *)((v0_2 + 0x0))) >= (int)0x1A)) goto L_C02AB38;
    if (!(((*(int *)((((*(int *)((v0_2 + 0x0))) << 2) + 0xC271DC4))) != 0))) goto L_C02AB26;
    (((struct o20_uint *)0xC271E34)->v) = (((*(int *)((v0_2 + 0x0))) * 0x78) + 0xC271E5C);
    (((struct o4_uint *)0xC271E34)->v) = ((*(int *)((v0_2 + 0x0))) + 0x1);
    goto L_C02AB18;
    L_C02AB26:;
    *(unsigned int *)((v0_2 + 0x0)) = ((*(int *)((v0_2 + 0x0))) + 0x1);
    goto L_C02AB2C;
    L_C02AB18:;
    if (((int)((((struct o4_int *)0xC271E34)->v)) >= (int)0x1A)) goto L_C02AB26;
    if (!(((*(int *)((0xC271DC4 + (((((struct o4_int *)0xC271E34)->v)) << 2)))) != 0))) goto L_C02AB10;
    v0_4 = *(int *)((((((*(int *)((v0_2 + 0x0))) << 2) << 2) << 1) + 0xC128DD0));
    t27 = *(int *)(((((((((struct o4_int *)0xC271E34)->v)) << 2) << 2) << 1) + 0xC128DD0));
    v0_6 = ((v0_4 & t27));
    if (((0xFFFF0000 & (v0_4 & t27)) == 0)) goto L_C02AA0E;
    goto L_C02AB10;
    L_C02AB10:;
    (((struct o4_uint *)0xC271E34)->v) = (((((struct o4_int *)0xC271E34)->v)) + 0x1);
    goto L_C02AB18;
    L_C02AA0E:;
    if (((unsigned short)v0_6 == 0)) goto L_C02AB10;
    (((struct o24_uint *)0xC271E34)->v) = ((((((struct o4_int *)0xC271E34)->v)) * 0x78) + 0xC271E5C);
    v0_4 = *(int *)((v0_2 + 0x0));
    v0_5 = (((struct o4_int *)0xC271E34)->v);
    (((struct o14_float *)0xC271E34)->v) = ((*(float *)((((((v0_4 << 2) << 2) << 1) + 0xC128DB4) + 0x0))) + ((((struct o4_float *)(((((v0_5 << 2) << 2) << 1) + 0xC128DB4)))->v)));
    w0_0 = *(float *)((((((v0_5 << 2) << 2) << 1) + 0xC128DB4) + 0x0));
    w0_1 = (((struct o4_float *)(((((v0_4 << 2) << 2) << 1) + 0xC128DB4)))->v);
    (((struct o18_float *)0xC271E34)->v) = (w0_0 + w0_1);
    v0_5 = (0xC271E4C);
    v0_6 = (((((v0_4 << 2) << 2) << 1) + 0xC128DB4));
    if ((!(((((struct o14_float *)0xC271E34)->v)) > (w0_0 + w0_1)))) goto L_C02AA66;
    (((struct oC_float *)0xC271E34)->v) = ((((struct o14_float *)0xC271E34)->v));
    L_C02AA6C:;
    w0_0 = *(float *)((((((*(int *)((v0_2 + 0x0))) << 2) << 2) << 1) + 0xC128DB8));
    w0_1 = *(float *)(((((((((struct o4_int *)0xC271E34)->v)) << 2) << 2) << 1) + 0xC128DB8));
    (((struct o10_float *)0xC271E34)->v) = (w0_0 + w0_1);
    v0_7 = (0xC271E44);
    if ((!((w0_0 + w0_1) > ((((struct oC_float *)0xC271E34)->v))))) goto L_C02AA98;
    (((struct oC_float *)0xC271E34)->v) = (*(float *)((v0_7 + 0x0)));
    L_C02AA98:;
    v0_4 = (((struct o4_int *)0xC271E34)->v);
    w0_0 = (((struct oC_float *)(((((v0_4 << 2) << 2) << 1) + 0xC128DB4)))->v);
    (((struct o1C_float *)0xC271E34)->v) = (w0_0 / (((((struct oC_float *)((((((*(int *)((v0_2 + 0x0))) << 2) << 2) << 1) + 0xC128DB4)))->v)) + w0_0));
    v0_4 = ((*(int *)((((((((struct o4_int *)0xC271E34)->v)) << 2) + (0xC27125C + ((*(int *)((v0_2 + 0x0))) * 0x68))) + 0x0))));
    v0_6 = ((*(int *)((v0_1 + ((*(int *)((v0_2 + 0x0))) << 2)))));
    L_C02AB0C:;
    if ((v0_6 != 0)) goto L_C02AAE0;
    goto L_C02AB10;
    L_C02AAE0:;
    v0_7 = ((*(int *)((v0_1 + (((((struct o4_int *)0xC271E34)->v)) << 2)))));
    L_C02AB06:;
    if ((v0_7 != 0)) goto L_C02AAEA;
    v0_6 = ((*(int *)((v0_6 + 0xC))));
    goto L_C02AB0C;
    L_C02AAEA:;
    w0_0 = nlLength((*(int *)((v0_6 + 0x0))), (*(int *)((v0_7 + 0x0))));
    (((struct o8_float *)0xC271E34)->v) = w0_0;
    F0 = (w0_0);
    if ((!(((((struct oC_float *)0xC271E34)->v)) > w0_0))) goto L_C02AB04;
    v0_5 = ((int (*)(int, int, int, int, float))(v0_4))((*(int *)((v0_6 + 0x0))), (*(int *)((v0_7 + 0x0))), v0_0, a7, F4);
    L_C02AB04:;
    v0_7 = ((*(int *)((v0_7 + 0xC))));
    goto L_C02AB06;
    L_C02AA66:;
    (((struct oC_float *)0xC271E34)->v) = (*(float *)((v0_5 + 0x0)));
    goto L_C02AA6C;
    L_C02AB38:;
    *(unsigned int *)((v0_2 + 0x0)) = v0_3;
    v0_8 = (0xC02AC58);
    v0_4 = (0x2);
    w0_0 = ((1.0f + 1.0f));
    w0_1 = (0.5f);
    L_C02AC04:;
    if (((int)(*(int *)((v0_2 + 0x0))) < (int)0x1A)) goto L_C02AB46;
    v0_5 = (0xC02C068);
    v0_4 = (0x14);
    v0_6 = (0x80000000);
    v0_3 = (0x0);
    L_C02ACAC:;
    *(unsigned int *)((v0_2 + 0x0)) = v0_3;
    if (((int)v0_3 < (int)v0_4)) goto L_C02AC68;
    return F0;
    L_C02AC68:;
    v0_8 = (0xC271DC4);
    if (((*(int *)((((*(int *)((v0_2 + 0x0))) << 2) + 0xC271DC4))) == 0)) goto L_C02ACA8;
    (((struct oC_float *)0xC271E34)->v) = (*(float *)((((((*(int *)((v0_2 + 0x0))) << 2) << 2) << 1) + 0xC128DB8)));
    v0_3 = *(int *)((v0_2 + 0x0));
    v0_8 = ((v0_3 << 2));
    v0_7 = ((*(int *)((v0_1 + (v0_3 << 2)))));
    L_C02ACA4:;
    if (!((v0_7 != 0))) goto L_C02ACA8;
    v0_3 = FUN_0c02c068((*(int *)((v0_7 + 0x0))), (*(int *)((v0_2 + 0x0))), v0_0, ((((struct oC_float *)0xC271E34)->v)));
    v0_8 = (v0_3);
    if ((v0_3 == 0)) goto L_C02ACA2;
    v0_3 = *(int *)((v0_7 + 0x0));
    *(unsigned int *)((v0_3 + 0x20)) = ((*(int *)((v0_3 + 0x20))) | v0_6);
    goto L_C02ACA2;
    L_C02ACA8:;
    v0_3 = (((*(int *)((v0_2 + 0x0))) + 0x1));
    goto L_C02ACAC;
    L_C02ACA2:;
    v0_7 = ((*(int *)((v0_7 + 0xC))));
    goto L_C02ACA4;
    L_C02AB46:;
    v0_8 = (0xC271DC4);
    if (((int)(*(int *)((((*(int *)((v0_2 + 0x0))) << 2) + 0xC271DC4))) < (int)v0_4)) goto L_C02ABFE;
    v0_8 = (0xC128DD0);
    if ((((*(int *)((((((*(int *)((v0_2 + 0x0))) << 2) << 2) << 1) + 0xC128DD0))) & 0xFFFF0000) != 0)) goto L_C02ABFE;
    v0_3 = *(int *)((v0_2 + 0x0));
    (((struct o24_uint *)0xC271E34)->v) = ((v0_3 * 0x78) + 0xC271E5C);
    (((struct o20_uint *)0xC271E34)->v) = ((v0_3 * 0x78) + 0xC271E5C);
    v0_5 = *(int *)((v0_2 + 0x0));
    w0_2 = *(float *)((((((v0_5 << 2) << 2) << 1) + 0xC128DB4) + 0x0));
    w0_3 = (((struct o4_float *)(((((v0_5 << 2) << 2) << 1) + 0xC128DB4)))->v);
    (((struct o18_float *)0xC271E34)->v) = (w0_2 + w0_3);
    (((struct o14_float *)0xC271E34)->v) = (w0_2 + w0_3);
    (((struct oC_float *)0xC271E34)->v) = (w0_2 + w0_3);
    w0_2 = (((struct o4_float *)(((((v0_5 << 2) << 2) << 1) + 0xC128DB4)))->v);
    (((struct o10_float *)0xC271E34)->v) = (w0_2 * w0_0);
    v0_3 = (0xC271E44);
    v0_6 = (((((v0_5 << 2) << 2) << 1) + 0xC128DB4));
    if ((!((w0_2 * w0_0) > ((((struct oC_float *)0xC271E34)->v))))) goto L_C02ABAC;
    (((struct oC_float *)0xC271E34)->v) = (*(float *)((v0_3 + 0x0)));
    L_C02ABAC:;
    (((struct o1C_float *)0xC271E34)->v) = w0_1;
    v0_3 = *(int *)((v0_2 + 0x0));
    v0_3 = *(int *)((((v0_3 << 2) + (0xC27125C + (v0_3 * 0x68))) + 0x0));
    (((struct o4_uint *)0xC271E34)->v) = (*(int *)((v0_2 + 0x0)));
    v0_5 = *(int *)((v0_2 + 0x0));
    v0_8 = ((v0_5 << 2));
    v0_3 = (v0_3);
    v0_6 = ((*(int *)((v0_1 + (v0_5 << 2)))));
    L_C02ABF8:;
    v0_7 = *(int *)((v0_6 + 0xC));
    v0_5 = (v0_7);
    if (!((v0_7 != 0))) goto L_C02ABFE;
    v0_7 = ((*(int *)((v0_6 + 0xC))));
    goto L_C02ABF2;
    L_C02ABFE:;
    *(unsigned int *)((v0_2 + 0x0)) = ((*(int *)((v0_2 + 0x0))) + 0x1);
    goto L_C02AC04;
    L_C02ABF2:;
    if ((v0_7 != 0)) goto L_C02ABD6;
    v0_6 = (v0_5);
    goto L_C02ABF8;
    L_C02ABD6:;
    w0_2 = nlLength((*(int *)((v0_6 + 0x0))), (*(int *)((v0_7 + 0x0))));
    (((struct o8_float *)0xC271E34)->v) = w0_2;
    F0 = (w0_2);
    if ((!(((((struct oC_float *)0xC271E34)->v)) > w0_2))) goto L_C02ABF0;
    v0_8 = ((((int (*)(int, int, int, int, float))(v0_3))((*(int *)((v0_6 + 0x0))), (*(int *)((v0_7 + 0x0))), v0_0, a7, F4)));
    L_C02ABF0:;
    v0_7 = ((*(int *)((v0_7 + 0xC))));
    goto L_C02ABF2;
    L_C02A936:;
    if (((int)((((struct o4_int *)0xC271E34)->v)) >= (int)0x1A)) goto L_C02A944;
    if (!(((*(int *)(((((((struct o4_int *)0xC271E34)->v)) << 2) + 0xC271DC4))) != 0))) goto L_C02A92E;
    v0_7 = *(int *)((((((*(int *)((v0_2 + 0x0))) << 2) << 2) << 1) + 0xC128DD0));
    t185 = *(int *)(((((((((struct o4_int *)0xC271E34)->v)) << 2) << 2) << 1) + 0xC128DD0));
    v0_6 = ((v0_7 & t185));
    if (((0xFFFF0000 & (v0_7 & t185)) != 0)) goto L_C02A92E;
    if (((unsigned short)v0_6 == 0)) goto L_C02A92E;
    (((struct o24_uint *)0xC271E34)->v) = ((((((struct o4_int *)0xC271E34)->v)) * 0x78) + 0xC271E5C);
    v0_6 = (((struct o4_int *)0xC271E34)->v);
    (((struct o14_float *)0xC271E34)->v) = ((*(float *)((v0_5 + 0x0))) + ((((struct o4_float *)(((((v0_6 << 2) << 2) << 1) + 0xC128DB4)))->v)));
    w0_0 = *(float *)((((((v0_6 << 2) << 2) << 1) + 0xC128DB4) + 0x0));
    w0_1 = (((struct o4_float *)(v0_5))->v);
    (((struct o18_float *)0xC271E34)->v) = (w0_0 + w0_1);
    v0_7 = (0xC271E4C);
    v0_6 = (((((v0_6 << 2) << 2) << 1) + 0xC128DB4));
    if ((!(((((struct o14_float *)0xC271E34)->v)) > (w0_0 + w0_1)))) goto L_C02A88A;
    (((struct oC_float *)0xC271E34)->v) = ((((struct o14_float *)0xC271E34)->v));
    goto L_C02A890;
    L_C02A92E:;
    (((struct o4_uint *)0xC271E34)->v) = (((((struct o4_int *)0xC271E34)->v)) + 0x1);
    goto L_C02A936;
    L_C02A890:;
    w0_0 = *(float *)((((((*(int *)((v0_2 + 0x0))) << 2) << 2) << 1) + 0xC128DB8));
    w0_1 = *(float *)(((((((((struct o4_int *)0xC271E34)->v)) << 2) << 2) << 1) + 0xC128DB8));
    (((struct o10_float *)0xC271E34)->v) = (w0_0 + w0_1);
    v0_7 = (0xC271E44);
    if ((!((w0_0 + w0_1) > ((((struct oC_float *)0xC271E34)->v))))) goto L_C02A8BC;
    (((struct oC_float *)0xC271E34)->v) = (*(float *)((v0_7 + 0x0)));
    L_C02A8BC:;
    v0_6 = (((struct o4_int *)0xC271E34)->v);
    w0_0 = (((struct oC_float *)(((((v0_6 << 2) << 2) << 1) + 0xC128DB4)))->v);
    (((struct o1C_float *)0xC271E34)->v) = (w0_0 / (((((struct oC_float *)((((((*(int *)((v0_2 + 0x0))) << 2) << 2) << 1) + 0xC128DB4)))->v)) + w0_0));
    v0_6 = ((*(int *)((((((((struct o4_int *)0xC271E34)->v)) << 2) + (0xC27125C + ((*(int *)((v0_2 + 0x0))) * 0x68))) + 0x0))));
    v0_7 = ((*(int *)((v0_1 + (((((struct o4_int *)0xC271E34)->v)) << 2)))));
    L_C02A92A:;
    if ((v0_7 != 0)) goto L_C02A904;
    goto L_C02A92E;
    L_C02A904:;
    w0_0 = nlLength(v0_4, (*(int *)((v0_7 + 0x0))));
    (((struct o8_float *)0xC271E34)->v) = w0_0;
    F0 = (w0_0);
    if ((!(((((struct oC_float *)0xC271E34)->v)) > w0_0))) goto L_C02A91E;
    v0_8 = ((int (*)(int, int, int, int, float))(v0_6))(v0_4, (*(int *)((v0_7 + 0x0))), v0_0, a7, F4);
    L_C02A91E:;
    (((struct o18_float *)((*(int *)((v0_7 + 0x0)))))->v) = ((((struct o8_float *)0xC271E34)->v));
    v0_7 = ((*(int *)((v0_7 + 0xC))));
    goto L_C02A92A;
    L_C02A88A:;
    (((struct oC_float *)0xC271E34)->v) = (*(float *)((v0_7 + 0x0)));
    goto L_C02A890;
    L_C02A944:;
    v0_7 = (((((struct o68_int *)(v0_1))->v)));
    L_C02A95A:;
    if ((v0_7 != 0)) goto L_C02A94A;
    goto L_C02A95E;
    L_C02A94A:;
    v0_5 = *(int *)((v0_7 + 0x0));
    w0_0 = nlLength(v0_4, v0_5);
    (((struct o18_float *)(v0_5))->v) = w0_0;
    v0_7 = ((*(int *)((v0_7 + 0xC))));
    F0 = (w0_0);
    goto L_C02A95A;
    L_C02A7BC:;
    if (((*(int *)((((*(int *)((v0_2 + 0x0))) << 2) + 0xC271DC4))) == 0)) goto L_C02A7DE;
    v0_6 = ((*(int *)((v0_1 + ((*(int *)((v0_2 + 0x0))) << 2)))));
    L_C02A7DA:;
    if (!((v0_6 != 0))) goto L_C02A7DE;
    v0_3 = *(int *)((v0_6 + 0x0));
    *(unsigned int *)((v0_3 + 0x24)) = 0x0;
    *(unsigned int *)((v0_3 + 0x20)) = 0x0;
    v0_6 = ((*(int *)((v0_6 + 0xC))));
    goto L_C02A7DA;
    L_C02A7DE:;
    *(unsigned int *)((v0_2 + 0x0)) = ((*(int *)((v0_2 + 0x0))) + 0x1);
    goto L_C02A7E4;
}

int FUN_0c05e88c(int a4, int a5, float f4, float f5, float f6, float f7, float f8)
{
    int stk[2];
    register int t0;
    register float u7;
    register float u36;
    register float u171;
    register float u172;

    *(unsigned int *)(((int)stk + 0)) = a5;
    *(unsigned int *)(((int)stk + 4)) = 0xC2B9738;
    t0 = *(int *)(((a4 << 2) + 0xC13AC90));
    if ((*(int *)((0xC13ADD8 + (a4 << 2)))) != 0) {
        if ((*(int *)(((*(int *)0xC136D80) + 0x4))) == 57) {
            u7 = (((struct oD4_float *)((*(int *)(((int)stk + 4)))))->v);
            if ((u7 > 0.899999976f) && (1.10000002f > u7)) {
                *(unsigned int *)(((*(int *)((0xC13AC90 + (a4 << 2)))) + 0x28)) = (*(int *)(((*(int *)((0xC13ADD8 + (a4 << 2)))) + 0x0)));
            } else {
                if ((u7 > 1.89999998f) && (2.0999999f > u7)) {
                    *(unsigned int *)(((*(int *)((0xC13AC90 + (a4 << 2)))) + 0x28)) = (*(int *)(((*(int *)((0xC13ADD8 + (a4 << 2)))) + 0x4)));
                } else {
                    if ((u7 > 2.9000001f) && (3.0999999f > u7)) {
                        *(unsigned int *)(((*(int *)((0xC13AC90 + (a4 << 2)))) + 0x28)) = (*(int *)(((*(int *)((0xC13ADD8 + (a4 << 2)))) + 0x8)));
                    } else {
                        if ((u7 > 3.9000001f) && (4.0999999f > u7)) {
                            *(unsigned int *)(((*(int *)((0xC13AC90 + (a4 << 2)))) + 0x28)) = (*(int *)(((*(int *)((0xC13ADD8 + (a4 << 2)))) + 0xC)));
                        }
                    }
                }
            }
            u36 = *(float *)0xC2B9818;
            if ((u36 > 0.899999976f) && (1.10000002f > u36)) {
                (((struct o40_uint *)((*(int *)((0xC13AC90 + (a4 << 2))))))->v) = (*(int *)(((*(int *)((0xC13ADD8 + (a4 << 2)))) + 0x10)));
            } else {
                if ((u36 > 1.89999998f) && (2.0999999f > u36)) {
                    (((struct o40_uint *)((*(int *)((0xC13AC90 + (a4 << 2))))))->v) = (*(int *)(((*(int *)((0xC13ADD8 + (a4 << 2)))) + 0x14)));
                } else {
                    if ((u36 > 2.9000001f) && (3.0999999f > u36)) {
                        (((struct o40_uint *)((*(int *)((0xC13AC90 + (a4 << 2))))))->v) = (*(int *)(((*(int *)((0xC13ADD8 + (a4 << 2)))) + 0x18)));
                    } else {
                        if ((u36 > 3.9000001f) && (4.0999999f > u36)) {
                            (((struct o40_uint *)((*(int *)((0xC13AC90 + (a4 << 2))))))->v) = (*(int *)(((*(int *)((0xC13ADD8 + (a4 << 2)))) + 0x1C)));
                        }
                    }
                }
            }
        }
    }
    nlPushMatrix(0x0);
    if (((*(int *)(((int)stk + 0))) & 1) != 0) {
        nlPushMatrix(0x0);
        FUN_0c073a30((-((((struct o0_float *)0xC2B9738)->v))), 0.0f, (-((((struct o8_float *)0xC2B9738)->v))));
        FUN_0c072230(0xC2B9768, 0xC137044);
        FUN_0c072230(0xC2B978C, 0xC137074);
        FUN_0c072230(0xC2B9774, 0xC137038);
        FUN_0c072230(0xC2B9798, 0xC137068);
        FUN_0c072230(0xC2B97BC, 0xC1370A4);
        FUN_0c072230(0xC2B97E0, 0xC1370D4);
        FUN_0c072230(0xC2B97C8, 0xC137098);
        FUN_0c072230(0xC2B97EC, 0xC1370C8);
        nlPopMatrix(0x1);
        FUN_0c073a30(0.0f, ((((struct o4_float *)0xC2B9738)->v)), 0.0f);
    } else {
        FUN_0c072230(0xC2B9768, 0xC137044);
        FUN_0c072230(0xC2B978C, 0xC137074);
        FUN_0c072230(0xC2B9774, 0xC137038);
        FUN_0c072230(0xC2B9798, 0xC137068);
        FUN_0c072230(0xC2B97BC, 0xC1370A4);
        FUN_0c072230(0xC2B97E0, 0xC1370D4);
        FUN_0c072230(0xC2B97C8, 0xC137098);
        FUN_0c072230(0xC2B97EC, 0xC1370C8);
        FUN_0c073a60(0xC2B9738);
    }
    FUN_0c05b586(0xC2B9744);
    FUN_0c05d1ca(t0);
    nlGetMatrix(0xC2B981C);
    nlPushMatrix(0x0);
    FUN_0c05b586(0xC2B9750);
    FUN_0c05d1ca((t0 + 0x8));
    nlGetMatrix(0xC2B985C);
    nlPushMatrix(0x0);
    FUN_0c073a30(4.4849f, 0.0f, 0.0f);
    FUN_0c05b586(0xC2B975C);
    FUN_0c05d1ca(((t0 + 0x8) + 0x8));
    nlGetMatrix(0xC2B989C);
    nlGetPushedMatrix(0x0);
    FUN_0c073a30(3.66109991f, 0.0560000017f, -1.78760004f);
    FUN_0c05e784(0xC137038);
    nlRotateAZ(((((struct o10_int *)0xC137050)->v)));
    FUN_0c05d1ca((((t0 + 0x8) + 0x8) + 0x8));
    nlGetMatrix(0xC2B98DC);
    FUN_0c073a30(((((struct o0_float *)0xC137050)->v)), 0.0f, 0.0f);
    nlRotateAZ(((((struct o14_int *)0xC137050)->v)));
    FUN_0c05d1ca(((((t0 + 0x8) + 0x8) + 0x8) + 0x8));
    nlGetMatrix(0xC2B991C);
    FUN_0c073a30(((((struct o8_float *)0xC137050)->v)), 0.0f, 0.0f);
    FUN_0c05b586(0xC2B9780);
    FUN_0c05d1ca((((((t0 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8));
    nlGetMatrix(0xC2B995C);
    nlPopMatrix(0x1);
    FUN_0c073a30(3.66109991f, 0.0560000017f, 1.78760004f);
    FUN_0c05e784(0xC137068);
    nlRotateAZ(((((struct o0_int *)0xC137090)->v)));
    FUN_0c05d1ca(((((((t0 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8));
    nlGetMatrix(0xC2B999C);
    FUN_0c073a30(((((struct o30_float *)0xC137050)->v)), 0.0f, 0.0f);
    nlRotateAZ(((((struct o4_int *)0xC137090)->v)));
    FUN_0c05d1ca((((((((t0 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8));
    nlGetMatrix(0xC2B99DC);
    FUN_0c073a30(((((struct o38_float *)0xC137050)->v)), 0.0f, 0.0f);
    FUN_0c05b586(0xC2B97A4);
    FUN_0c05d1ca(((((((((t0 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8));
    nlGetMatrix(0xC2B9A1C);
    nlPopMatrix(0x1);
    if (((*(int *)(((int)stk + 0))) & 2) == 0) {
        FUN_0c05b586(0xC2B97B0);
        FUN_0c05d1ca((((((((((t0 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8));
        nlGetMatrix(0xC2B9A5C);
        nlPushMatrix(0x0);
        u171 = (((struct o0_float *)0xC05EEB4)->v);
        u172 = (((struct o4_float *)0xC05EEB4)->v);
        FUN_0c073a30(u171, u172, ((((struct o8_float *)0xC05EEB4)->v)));
        FUN_0c05e784(0xC137098);
        nlRotateAZ(((((struct o30_int *)0xC137090)->v)));
        FUN_0c05d1ca(((((((((((t0 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8));
        nlGetMatrix(0xC2B9A9C);
        FUN_0c073a30(((((struct o20_float *)0xC137090)->v)), 0.0f, 0.0f);
        nlRotateAZ(((((struct o34_int *)0xC137090)->v)));
        FUN_0c05d1ca((((((((((((t0 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8));
        nlGetMatrix(0xC2B9ADC);
        FUN_0c073a30(((((struct o28_float *)0xC137090)->v)), 0.0f, 0.0f);
        FUN_0c05b586(0xC2B97D4);
        FUN_0c05d1ca(((((((((((((t0 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8));
        nlGetMatrix(0xC2B9B1C);
        nlPopMatrix(0x1);
        FUN_0c073a30(u171, u172, ((((struct o20_float *)0xC05EEB4)->v)));
        FUN_0c05e784(0xC1370C8);
        nlRotateAZ(((((struct o10_int *)0xC1370E0)->v)));
        FUN_0c05d1ca((((((((((((((t0 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8));
        nlGetMatrix(0xC2B9B5C);
        FUN_0c073a30(((((struct o0_float *)0xC1370E0)->v)), 0.0f, 0.0f);
        nlRotateAZ(((((struct o14_int *)0xC1370E0)->v)));
        FUN_0c05d1ca(((((((((((((((t0 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8));
        nlGetMatrix(0xC2B9B9C);
        FUN_0c073a30(((((struct o28_float *)0xC137090)->v)), 0.0f, 0.0f);
        FUN_0c05b586(0xC2B97F8);
        FUN_0c05d1ca((((((((((((((((t0 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8));
        nlGetMatrix(0xC2B9BDC);
    }
    return nlPopMatrix(0x1);
}

int FUN_0c034928(int a4, int a5, int a6, int a7, int a8)
{
    int stk[17];

    register int R0;
    register int R1;
    register int R2;
    register int R3;
    int R4;
    int R9;
    int R10;
    register float F0;
    register float F2;
    register float F3;
    register float F4;
    register float F5;
    register float F6;
    register int T_;
    register int FPUL_;
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
    int R1000;
    int R1004;
    int R1008;
    int R1012;
    int R1016;
    int R1020;
    int R1024;
    int R1028;
    int R1032;
    int R1036;
    int R1040;
    int R1044;
    int R1048;
    int R1052;
    int R1056;
    int R1060;
    int R1064;
    R1000 = *(int *)((int)stk + 0);
    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);
    R1016 = *(int *)((int)stk + 16);
    R1020 = *(int *)((int)stk + 20);
    R1024 = *(int *)((int)stk + 24);
    R1028 = *(int *)((int)stk + 28);
    R1032 = *(int *)((int)stk + 32);
    R1036 = *(int *)((int)stk + 36);
    R1040 = *(int *)((int)stk + 40);
    R1044 = *(int *)((int)stk + 44);
    R1048 = *(int *)((int)stk + 48);
    R1052 = *(int *)((int)stk + 52);
    R1056 = *(int *)((int)stk + 56);
    R1060 = *(int *)((int)stk + 60);
    R1064 = *(int *)((int)stk + 64);
    R4 = a4;
    v0_3 = a5;
    v0_0 = a6;
    v0_1 = a7;
    R1004 = v0_0;
    R1028 = v0_1;
    R1012 = 0x0;
    R1008 = 0x0;
    R1016 = (0x800000 & R4);
    R1000 = (v0_3 + 0x2C);
    R10 = (R4);
    v0_0 = (0xC2A5858);
    v0_1 = (v0_3);
    v0_2 = (0x2C);
    R9 = (0x1);
    w0_0 = (0.00999999978f);
    w0_1 = (0.5f);
    if (((0x800000 & R4) == 0)) goto L_C0349BE;
    R4 = (0x0);
    v0_3 = (0x0);
    if (((int)(R1004) <= 0)) goto L_C034992;
    L_C03497C:;
    v0_4 = (((int)R9 << (int)R4) & a8) == 0;
    R4 = ((R4 + 0x1));
    if (v0_4) goto L_C03498C;
    v0_3 = ((v0_3 + 0x1));
    L_C03498C:;
    if (((int)R4 < (int)(R1004))) goto L_C03497C;
    L_C034992:;
    w0_2 = (((*(float *)(((R1000) + 0x0))) - (*(float *)((v0_1 + 0x0)))) * (float)v0_3);
    R1012 = (int)(w0_2 * w0_1);
    w0_2 = ((((((struct o4_float *)((R1000)))->v)) - ((((struct o4_float *)(v0_1))->v))) * (float)v0_3);
    R1008 = (int)(w0_2 * w0_1);
    FPUL_ = ((int)(w0_2 * w0_1));
    L_C0349BE:;
    FUN_0c02877a(0x1);
    FUN_0c027fdc((*(float *)((v0_0 + 0x0))));
    FUN_0c027f28((0xF & R10));
    R1020 = (0xF0 & R10);
    R1040 = 0xC0B72FC;
    R1056 = 0xC0B7300;
    R1044 = 0xC0B72F8;
    R1036 = ((((int)(R1020) >> 4) << 2) + 0xC0B72F0);
    R1048 = ((R1004) - 1);
    R1052 = (0x1000 & R10);
    v0_3 = (0x0);
    L_C034DFC:;
    if (((int)v0_3 >= (int)(R1004))) goto L_C034E06;
    R1024 = (R10 & 0x8000);
    R4 = (0x8000);
    if (((R10 & 0x8000) == 0)) goto L_C034A2C;
    v0_4 = (((int)0x1 << (int)v0_3) & ((FUN_0c03e43c((*(int *)0xC2A465C))) << 1)) == 0;
    if (v0_4) goto L_C034A2C;
    L_C034DFA:;
    v0_3 = ((v0_3 + 0x1));
    goto L_C034DFC;
    L_C034A2C:;
    if (((R1016) == 0)) goto L_C034AA0;
    if (((((int)0x1 << (int)v0_3) & a8) == 0)) goto L_C034AA0;
    R1012 = (int)((float)(R1012) + ((*(float *)((v0_1 + 0x0))) - (*(float *)(((R1000) + 0x0)))));
    v0_4 = R1008;
    w0_2 = (((struct o4_float *)((R1000)))->v);
    w0_3 = (((struct o4_float *)(v0_1))->v);
    R1008 = (int)((float)v0_4 + (w0_3 - w0_2));
    FPUL_ = ((int)((float)v0_4 + (w0_3 - w0_2)));
    goto L_C034DFA;
    L_C034AA0:;
    if (((((v0_3 * v0_2) + v0_1) + 0xC) != 0)) goto L_C034AB2;
    goto L_C034DFA;
    L_C034AB2:;
    w0_2 = (((((struct o8_float *)(((v0_3 * v0_2) + v0_1)))->v)));
    if (((R1020) == 0)) goto L_C034B28;
    if (((R1020) != 32)) goto L_C034AE8;
    if ((v0_3 != (R1028))) goto L_C034AD2;
    v0_4 = ((R1040));
    L_C034AEA:;
    v0_4 = ((*(int *)((v0_4 + 0x0))));
    L_C034AEC:;
    R4 = (0x100);
    if (((R10 & 0x100) == 0)) goto L_C034B1C;
    R4 = (0xFF0000);
    v0_4 = (((((((v0_4 & 0xFF0000) >> 1) & 0xFF0000) | (((v0_4 & 0xFF00) >> 1) & 0xFF00)) | (unsigned char)((unsigned int)(unsigned char)v0_4 >> 1)) | (v0_4 & 0xFF000000)));
    L_C034B1C:;
    FUN_0c02803a(v0_4, v0_4, v0_4, v0_4);
    L_C034B28:;
    pfSize(w0_2, w0_2);
    v0_4 = (0xC02806C);
    w0_3 = ((*(float *)((((v0_3 * v0_2) + v0_1) + 0x0))));
    if (((R10 & 0x200) == 0)) goto L_C034B70;
    w0_2 = FUN_0c02806c((((v0_3 * v0_2) + v0_1) + 0xC), F4, F5, F6);
    w0_3 = ((w0_3 - ((w0_2 * w0_1))));
    L_C034B86:;
    w0_2 = (0.0f);
    if (((R10 & 0x20000) != 0)) goto L_C034BA4;
    R4 = (((((struct o30_int *)0xC2A5830)->v)));
    if (((v0_3 & R9) != 0)) goto L_C034B9E;
    R4 = ((-R4));
    L_C034B9E:;
    w0_2 = ((float)R4);
    FPUL_ = (R4);
    L_C034BA4:;
    FUN_0c027fbe((((float)(R1012) + w0_3) + w0_2), (((((struct o4_float *)(((v0_3 * v0_2) + v0_1)))->v)) + (float)(R1008)));
    FUN_0c02842e((((v0_3 * v0_2) + v0_1) + 0xC));
    v0_4 = (0x800);
    if (((R1024) == 0)) goto L_C034C3E;
    if (((int)v0_3 < (int)R9)) goto L_C034C3E;
    if (((int)v0_3 > (int)0x10)) goto L_C034C3E;
    *(float *)((v0_0 + 0x0)) = ((*(float *)((v0_0 + 0x0))) - w0_0);
    (((struct o0_uint *)0xC2A5830)->v) = v0_4;
    if (((((int)R9 << (int)(v0_3 - 1)) & (*(int *)(((((*(int *)0xC2A465C) * 0x788) + 0xC28EDA8) + 0x4)))) == 0)) goto L_C034C32;
    R1032 = ((v0_3 * v0_2) + v0_1);
    v0_5 = ((int (*)(int, int, int, int, float, float, float))(FUN_0c03346e))(0xC0B7D24, 0xC2A5808, (int)((*(float *)(((R1032) + 0x0))) + w0_2), (int)(((((struct o4_float *)(((v0_3 * v0_2) + v0_1)))->v)) + 8.0f), F4, F5, F6);
    L_C034C32:;
    (((struct o0_uint *)0xC2A5830)->v) = 0x0;
    *(float *)((v0_0 + 0x0)) = ((*(float *)((v0_0 + 0x0))) + w0_0);
    L_C034C3E:;
    if (((R10 & 0x1F800) != 0)) goto L_C034C4A;
    goto L_C034DFA;
    L_C034C4A:;
    *(float *)((v0_0 + 0x0)) = ((*(float *)((v0_0 + 0x0))) + w0_0);
    if (((R1024) == 0)) goto L_C034CAC;
    if ((v0_3 == 0)) goto L_C034CE2;
    if ((v0_3 == 17)) goto L_C034CE2;
    R1060 = 0xC0BFFF4;
    R1064 = 0xC0C0014;
    R4 = (0xC0C0014);
    L_C034D0E:;
    w0_3 = (7.0f);
    if ((v0_3 == (R1028))) goto L_C034DC0;
    (((struct o4_float *)0xC2A5830)->v) = 0.800000012f;
    F4 = (0.800000012f);
    if (((((int)R9 << (int)v0_3) & a8) == 0)) goto L_C034D36;
    FUN_0c076230(w0_1, w0_1, w0_1);
    L_C034D36:;
    w0_4 = *(float *)((((v0_3 * v0_2) + v0_1) + 0x0));
    v0_4 = ((int (*)(int, int, int, int, float, float, float))(FUN_0c03346e))((R1064), 0xC2A5808, (int)((w0_4 + (float)(R1012)) + w0_2), (int)((((((struct o4_float *)(((v0_3 * v0_2) + v0_1)))->v)) + (float)(R1008)) + w0_3), F4, F5, F6);
    FUN_0c026ce6();
    (((struct o4_float *)0xC2A5830)->v) = 1.0f;
    F4 = (1.0f);
    L_C034DF4:;
    *(float *)((v0_0 + 0x0)) = ((*(float *)((v0_0 + 0x0))) - w0_0);
    goto L_C034DFA;
    L_C034DC0:;
    w0_4 = *(float *)((((v0_3 * v0_2) + v0_1) + 0x0));
    v0_4 = ((int (*)(int, int, int, int, float, float, float))(FUN_0c03346e))((R1060), 0xC2A5808, (int)((w0_4 + (float)(R1012)) + w0_2), (int)((((((struct o4_float *)(((v0_3 * v0_2) + v0_1)))->v)) + (float)(R1008)) + w0_3), F4, F5, F6);
    goto L_C034DF4;
    L_C034CE2:;
    R1060 = 0xC0BFF74;
    R4 = (0xC0BFF94);
    L_C034CF6:;
    R1064 = R4;
    goto L_C034D0E;
    L_C034CAC:;
    if (((R10 & 0x10000) == 0)) goto L_C034CC4;
    if ((v0_3 == 5)) goto L_C034CE2;
    if ((v0_3 != 6)) goto L_C034D04;
    goto L_C034CE2;
    L_C034D04:;
    R1060 = 0xC0BFEF4;
    R1064 = 0xC0BFF14;
    R4 = (0xC0BFF14);
    goto L_C034D0E;
    L_C034CC4:;
    if (((R10 & 0x2000) == 0)) goto L_C034CD6;
    R1060 = 0xC0BFFB4;
    R4 = (0xC0BFFD4);
    goto L_C034CF6;
    L_C034CD6:;
    if (((R1052) != 0)) goto L_C034CE2;
    if ((v0_3 != (R1048))) goto L_C034CEC;
    goto L_C034CE2;
    L_C034CEC:;
    if (((v0_4 & R10) == 0)) goto L_C034CFC;
    R1060 = 0xC0BFF34;
    R4 = (0xC0BFF54);
    goto L_C034CF6;
    L_C034CFC:;
    R4 = (0x4000);
    if (((R10 & 0x4000) == 0)) goto L_C034D0E;
    goto L_C034D04;
    L_C034B70:;
    if (((R10 & 0x400) == 0)) goto L_C034B86;
    w0_3 = ((w0_3 - (FUN_0c02806c((((v0_3 * v0_2) + v0_1) + 0xC), F4, F5, F6))));
    goto L_C034B86;
    L_C034AD2:;
    if (((((int)R9 << (int)v0_3) & a8) == 0)) goto L_C034AE2;
    v0_4 = ((R1056));
    L_C034AE4:;
    v0_4 = ((*(int *)((v0_4 + 0x0))));
    goto L_C034AEC;
    L_C034AE2:;
    v0_4 = ((R1044));
    goto L_C034AE4;
    L_C034AE8:;
    v0_4 = ((R1036));
    goto L_C034AEA;
    L_C034E06:;
    return FUN_0c02877a(0x0);
}
