/* Straight-line functions with calls and guards (batch gen_bn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_short { short v; };
struct o2_short { char p[0x2]; short v; };
struct o28_float { char p[0x28]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_int { char p[0x54]; int v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c05d1b4(int, int, float);
int FUN_0c05edbe(int);
int FUN_0c06c71e(int, float, float);
int FUN_0c06c8ea(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c06e700(int, int, float);
int FUN_0c070730(float);
int FUN_0c072290(int, int);
int FUN_0c073360(void);
float FUN_0c073b40(int, int);
int FUN_0c073c40(int, int, float);
float FUN_0c073c60(int);
int FUN_0c07ff00(void);
int nlAddVector(int, int);
int nlGetMatrix33on44(int);
int nlMultiMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlSubVector(int, int);
int nlSubVector3op(int, int, int);
int FUN_0c06c4e6(int a4, float f4, float f5);
int FUN_0c04739a(int a4);

int FUN_0c06c4e6(int a4, float f4, float f5)
{
    int stk[11];
    register float t75;
    register float t78;
    register int t80;
    register int t81;
    register float t83;
    register int t84;
    register float u105;
    register float u106;
    register int t44;
    register float u17;
    float u20;
    register float u26;

    if (27.0f > ((((struct o44_float *)(a4))->v))) {
        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) * 0.975000024f);
        t44 = 0x0;
    } else {
        if (45.0f > ((((struct o44_float *)(a4))->v))) {
            if (((((struct o54_int *)(a4))->v)) != 0) {
                u17 = (((((struct o50_float *)(a4))->v)) + 3.00000011e-06f);
            } else {
                u17 = (((((struct o50_float *)(a4))->v)) - 3.00000011e-06f);
            }
            (((struct o50_float *)(a4))->v) = u17;
            t44 = 0x1;
        } else {
            if (!(80.0f > ((((struct o44_float *)(a4))->v))) && (u20 = (((struct o44_float *)(a4))->v), 98.0f > u20)) {
                if (((((struct o54_int *)(a4))->v)) != 0) {
                    u26 = (((((struct o50_float *)(a4))->v)) + 3.00000011e-06f);
                } else {
                    u26 = (((((struct o50_float *)(a4))->v)) - 3.00000011e-06f);
                }
                (((struct o50_float *)(a4))->v) = u26;
                t44 = 0x1;
            } else {
                (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) * 0.997500002f);
                t44 = 0x0;
            }
        }
    }
    if (((((struct o50_float *)(a4))->v)) > 0.000300000014f) {
        (((struct o50_float *)(a4))->v) = 0.000300000014f;
    } else {
        if (-0.000300000014f > ((((struct o50_float *)(a4))->v))) {
            (((struct o50_float *)(a4))->v) = -0.000300000014f;
        }
    }
    FUN_0c06c71e((((int)stk + 0) + 0xC), ((((struct o4C_float *)(a4))->v)), f5);
    (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
    if (!(4.0f > ((((struct o4C_float *)(a4))->v)))) {
        (((struct o54_uint *)(a4))->v) = 0x0;
    } else {
        if (!(((((struct o4C_float *)(a4))->v)) > 0.0f)) {
            (((struct o54_uint *)(a4))->v) = 0x1;
        }
    }
    nlSubVector3op(((int)stk + 0), (((int)stk + 0) + 0xC), (a4 + 0x34));
    t75 = FUN_0c073c60(((int)stk + 0));
    if (t75 > ((((struct o0_float *)0xC06C7B0)->v))) {
        FUN_0c073c40(((int)stk + 0), ((int)stk + 0), (1.0f / t75));
        t78 = FUN_0c073b40(((int)stk + 0), (a4 + 0x24));
        t80 = (int)((int)(FUN_0c070730(t78)) / (int)0xA);
        t81 = t80;
        if ((int)t80 > (int)0x40) {
            t81 = 0x40;
        }
        t83 = FUN_0c073b40(((int)stk + 0), (a4 + 0x4));
        t84 = t81;
        if (0.0f > t83) {
            t84 = (-t81);
        }
        FUN_0c073360();
        nlRotateAY(t84);
        nlMultiMatrix((a4 + 0x4));
        nlGetMatrix33on44((a4 + 0x4));
        nlPopMatrix(0x1);
        nlSubVector3op(((int)stk + 0), (((int)stk + 0) + 0xC), (a4 + 0x34));
        FUN_0c06e700((a4 + 0x34), ((int)stk + 0), ((((struct o28_float *)0xC06C7B0)->v)));
    }
    nlPushMatrix((a4 + 0x4));
    FUN_0c05d1b4(0xCB1C150, 0x0, ((((struct o44_float *)(a4))->v)));
    FUN_0c05edbe(0x4);
    if (t44 != 0) {
        FUN_0c06c8ea(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    }
    u105 = (((struct o44_float *)(a4))->v);
    u106 = (((struct o48_float *)(a4))->v);
    (((struct o44_float *)(a4))->v) = (u105 + u106);
    if (!((float)((*(int *)0xCB1C150) - 1) > (u105 + u106))) {
        (((struct o44_float *)(a4))->v) = 0.0f;
    }
    return (nlPopMatrix(0x1));
}

int FUN_0c04739a(int a4)
{
    int stk[6];
    int t2;
    register int t7;
    register int t15;
    int t22;
    register int t25;
    register int t30;
    register float u35;
    int t36;
    register int t39;
    register int t46;
    register float u51;
    register int t71;
    float u23;
    float u28;
    float u37;
    float u43;

    if (a4 == 0) {
        t71 = FUN_0c07ff00();
        (((struct oC_float *)0xC2ADA6C)->v) = 0.0f;
    } else {
        t2 = *(int *)0xC1EC758;
        t7 = 0x0;
        if ((0x80 & t2) != 0) {
            t7 = 0x0;
            if (((((struct o4_float *)0xC2ADA6C)->v)) > -0.0799999982f) {
                t7 = 0x1;
            }
        }
        t15 = 0x0;
        if ((0x40 & t2) != 0) {
            t15 = 0x0;
            if (0.0799999982f > ((((struct o4_float *)0xC2ADA6C)->v))) {
                t15 = 0x1;
            }
        }
        (((struct o4_float *)0xC2ADA6C)->v) = (((((struct o4_float *)0xC2ADA6C)->v)) - (((float)(t7 - t15) * 0.00400000019f)));
        (((struct o4_float *)0xC2ADA6C)->v) = (((((struct o4_float *)0xC2ADA6C)->v)) * 0.800000012f);
        t22 = *(int *)0xC1EC758;
        t25 = 0x0;
        if (((0x20 & t22) != 0) && (u23 = (((struct o0_float *)0xC2ADA6C)->v), 0.0599999987f > u23)) {
            t25 = 0x1;
        }
        t30 = 0x0;
        if (((0x10 & t22) != 0) && (u28 = (((struct o0_float *)0xC2ADA6C)->v), u28 > -0.0599999987f)) {
            t30 = 0x1;
        }
        u35 = ((((struct o0_float *)0xC2ADA6C)->v));
        u35 = u35 + 0.00400000019f * ((float)(t25 - t30));
        (((struct o0_float *)0xC2ADA6C)->v) = (u35 * 0.800000012f);
        t36 = *(int *)0xC1EC758;
        t39 = 0x0;
        if (((0x4 & t36) != 0) && (u37 = (((struct oC_float *)0xC2ADA6C)->v), 8.0f > u37)) {
            t39 = 0x1;
        }
        t46 = 0x0;
        if (((0x2 & t36) != 0) && (u43 = (((struct oC_float *)0xC2ADA6C)->v), u43 > -8.0f)) {
            t46 = 0x1;
        }
        u51 = ((((struct oC_float *)0xC2ADA6C)->v));
        u51 = u51 + 0.400000006f * ((float)(t39 - t46));
        (((struct oC_float *)0xC2ADA6C)->v) = (u51 * 0.800000012f);
        FUN_0c07ff00();
        nlSubVector(((int)stk + 0), 0xC177D38);
        FUN_0c073360();
        nlRotateAY(((unsigned short)((((struct o2_short *)0xC177D50)->v)) + ((int)((((((((struct o4_float *)0xC2ADA6C)->v)) * 65536.0f) / 6.28318548f)) + 0.5f) & 0xFFFF)));
        nlRotateAX(((unsigned short)((((struct o0_short *)0xC177D50)->v)) + ((int)((((((((struct o0_float *)0xC2ADA6C)->v)) * 65536.0f) / 6.28318548f)) + 0.5f) & 0xFFFF)));
        *(float *)(((int)stk + 16)) = 0.0f;
        *(float *)(((int)stk + 12)) = 0.0f;
        *(float *)(((int)stk + 20)) = (-((((struct oC_float *)0xC2ADA6C)->v)));
        FUN_0c072290((((int)stk + 0) + 0xC), (((int)stk + 0) + 0xC));
        nlAddVector(0xC177D38, (((int)stk + 0) + 0xC));
        *(float *)(((int)stk + 16)) = 0.0f;
        *(float *)(((int)stk + 12)) = 0.0f;
        *(float *)(((int)stk + 20)) = (-(FUN_0c073c60(((int)stk + 0))));
        FUN_0c072290((((int)stk + 0) + 0xC), (((int)stk + 0) + 0xC));
        nlAddVector((((int)stk + 0) + 0xC), 0xC177D38);
        FUN_0c07ff00();
        t71 = (nlPopMatrix(0x1));
    }
    return t71;
}
