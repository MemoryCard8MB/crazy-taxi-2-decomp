/* Straight-line functions with calls and guards (batch gen_hc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[2]; } Stk2;
typedef struct { int w[3]; } Stk3;
struct o0_int { int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_int { char p[0x4]; int v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c070730(float);
int FUN_0c071920(int);
int FUN_0c072290(int, int);
int FUN_0c073360(void);
float FUN_0c073b40(int, int);
int FUN_0c073c40(int, int, float);
float FUN_0c073c60(int);
int FUN_0c073e10(int);
int nlGetAverageVector(int, int, int, float, float);
int nlGetMatrix33on44(int);
float nlLength(int, int, Stk3);
int nlLocate(int, int);
int nlMultiMatrix(int);
int nlOuterProduct(int, int, int);
int nlPopMatrix(int);
int nlPrintf(int, ...);
int nlRotateAxe(int, int);
int nlUnitMatrix(void);
int FUN_0c05b7aa(int a4, int a5, int a6, float f4);
int gdc_CoursePointChk(Stk2 s, float f4);

int FUN_0c05b7aa(int a4, int a5, int a6, float f4)
{
    int stk[6];
    register float t2;
    register float t10;
    register int t11;
    register float t14;
    register int t15;
    register float t19;
    register int t20;
    register float t21;
    register int t22;

    FUN_0c073360();
    nlOuterProduct(a4, a5, (((int)stk + 0) + 0xC));
    t2 = FUN_0c073c60((((int)stk + 0) + 0xC));
    if ((*(float *)0xC05B964) > t2) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0xC)) = *(struct mv3 *)((a4 + 0x20)); }
    } else {
        FUN_0c073c40((((int)stk + 0) + 0xC), (((int)stk + 0) + 0xC), (1.0f / t2));
    }
    t10 = FUN_0c073b40(a4, a5);
    t11 = FUN_0c070730(t10);
    nlOuterProduct(a5, (((int)stk + 0) + 0xC), ((int)stk + 0));
    FUN_0c073e10(((int)stk + 0));
    t14 = FUN_0c073b40(a4, ((int)stk + 0));
    t15 = t11;
    if (0.0f > t14) {
        t15 = (-t11);
    }
    nlRotateAxe((((int)stk + 0) + 0xC), t15);
    FUN_0c072290((a4 + 0x10), ((int)stk + 0));
    t19 = FUN_0c073b40((a5 + 0x10), ((int)stk + 0));
    t20 = FUN_0c070730(t19);
    t21 = FUN_0c073b40((a5 + 0x20), ((int)stk + 0));
    t22 = t20;
    if (!(0.0f > t21)) {
        t22 = (-t20);
    }
    nlUnitMatrix();
    nlRotateAxe(a5, (int)((float)t22 * f4));
    nlRotateAxe((((int)stk + 0) + 0xC), (int)((float)t15 * f4));
    nlMultiMatrix(a4);
    nlGetMatrix33on44(a6);
    nlGetAverageVector((a4 + 0x30), (a5 + 0x30), (a6 + 0x30), (1.0f - f4), f4);
    (((struct o2C_float *)(a6))->v) = 0.0f;
    (((struct o1C_float *)(a6))->v) = 0.0f;
    (((struct oC_float *)(a6))->v) = 0.0f;
    (((struct o3C_float *)(a6))->v) = 1.0f;
    return (nlPopMatrix(0x1));
}

int gdc_CoursePointChk(Stk2 s, float f4)
{
    int stk[17];
    register float u1;
    register float u13;
    register int t16;
    register int t17;
    register int t18;
    register float u21;
    register int t26;
    register int t36;
    register int t37;
    register int t38;
    register float u41;
    register int t46;
    register float u19;
    register float u20;
    register int t28;
    register float u29;
    register float u30;
    register float u31;
    register float u39;
    register float u40;
    register int t48;
    register float u49;
    register float u50;
    register float u51;

    stk[7] = s.w[0];
    stk[8] = s.w[1];
    *(float *)(((int)stk + 32)) = (0.0f);
    u1 = *(float *)0xC01FA58;
    t17 = (((struct o0_int *)0xC1ECD40)->v);
    if (((*(int *)0xC1EC790) & 16) != 0) {
        *(float *)0xC123E58 = ((*(float *)0xC123E58) + u1);
    }
    if (((*(int *)0xC1EC790) & 32) != 0) {
        *(float *)0xC123E58 = ((*(float *)0xC123E58) - u1);
    }
    nlLocate(0x1, 0x28);
    FUN_0c071920(0xFFFF0000);
    u13 = *(float *)0xC123E58;
    *(float *)(((int)stk + 12)) = u13;
    *(int *)((int)stk + 8) = 0xC09AE84;
    nlPrintf(0xC09AE84, u13);
    *(int *)((int)stk + 4) = 0xC09AE8C;
    t16 = (nlPrintf(0xC09AE8C));
    t18 = 0x0;
    u21 = f4;
    for (;;) {
        if ((int)t18 >= (int)((((struct o0_int *)0xC2707E8)->v))) {
            break;
        }
        t16 = 0xC;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((t17 + 0x4)); }
        t16 = 0x4;
        *(float *)((((int)stk + 16) + t16)) = 0.0f;
        u19 = (*(float *)((t17 + 0x0)));
        u20 = (*(float *)0xC123E58);
        u21 = (nlLength(((int)stk + 16), (((int)stk + 16) + 0x30), *(Stk3 *)(((int)stk + 16))));
        u19 = (u19 + u20);
        if (u19 > u21) {
            t26 = t18;
            *(int *)((int)stk + 12) = t26;
            *(int *)((int)stk + 8) = 0xC09AE90;
            t16 = (nlPrintf(0xC09AE90, t26));
            t28 = t16;
        } else {
            u29 = u19;
            u30 = u20;
            u31 = u21;
        }
        u19 = u29;
        u20 = u30;
        u21 = u31;
        t16 = t28;
        t18 = (t18 + 0x1);
        t17 = (t17 + 0x14);
    }
    *(int *)((int)stk + 12) = 0xC09AE98;
    t38 = (((struct o4_int *)0xC1ECD40)->v);
    t36 = (nlPrintf(0xC09AE98));
    t37 = 0x0;
    u41 = f4;
    for (;;) {
        if ((int)t37 >= (int)((((struct o4_int *)0xC2707E8)->v))) {
            break;
        }
        t36 = 0xC;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((t38 + 0x4)); }
        t36 = 0x4;
        *(float *)((((int)stk + 16) + t36)) = 0.0f;
        u39 = (*(float *)((t38 + 0x0)));
        u40 = (*(float *)0xC123E58);
        u41 = (nlLength(((int)stk + 16), (((int)stk + 16) + 0x30), *(Stk3 *)(((int)stk + 16))));
        u39 = (u39 + u40);
        if (u39 > u41) {
            t46 = t37;
            *(int *)((int)stk + 12) = t46;
            *(int *)((int)stk + 8) = 0xC09AE90;
            t36 = (nlPrintf(0xC09AE90, t46));
            t48 = t36;
        } else {
            u49 = u39;
            u50 = u40;
            u51 = u41;
        }
        u39 = u49;
        u40 = u50;
        u41 = u51;
        t36 = t48;
        t37 = (t37 + 0x1);
        t38 = (t38 + 0x14);
    }
    return (FUN_0c071920(0xFFFFFFFF));
}
