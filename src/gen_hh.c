/* Straight-line functions with calls and guards (batch gen_hh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o0_float { float v; };
struct o18_float { char p[0x18]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o64_float { char p[0x64]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oAC_int { char p[0xAC]; int v; };
struct oF4_uint { char p[0xF4]; unsigned int v; };
int FUN_0c018b1c(int);
int FUN_0c018b22(int, int, Stk3);
int FUN_0c018c8a(float, float);
float FUN_0c018cfc(void);
int FUN_0c02f698(void);
int FUN_0c067494(int, int);
int FUN_0c072290(int, int);
int FUN_0c073e10(int);
extern float _builtin_sqrtf(float);
int camSetTarget(int, int);
int nlArcTan2(float, float);
int nlGetMatrix(int);
int nlGetMatrix8(int);
int nlOuterProduct(int, int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlUnitMatrix(void);
int FUN_0c046814(int a4);
float FUN_0c019384(void);
int GetAng4Mat(int a4, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
int FUN_0c0667cc(int a4);

int FUN_0c046814(int a4)
{
    int stk[3];
    register int t1;
    register float u5;
    register float u6;
    register float u7;

    nlPushMatrix(0x0);
    t1 = nlGetMatrix(0x0);
    *(unsigned short *)((a4 + 0x2)) = (nlArcTan2(((((struct o20_float *)(t1))->v)), ((((struct o28_float *)(t1))->v))));
    u5 = (((struct o20_float *)(t1))->v);
    u6 = (((struct o28_float *)(t1))->v);
    u7 = (u6 * u6);
    u7 = u7 + u5 * u5;
    *(unsigned short *)((a4 + 0x0)) = (-(nlArcTan2(((((struct o24_float *)(t1))->v)), _builtin_sqrtf(u7))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(t1); }
    nlUnitMatrix();
    nlRotateAX((-(unsigned short)(*(short *)((a4 + 0x0)))));
    nlRotateAY((-(unsigned short)(*(short *)((a4 + 0x2)))));
    FUN_0c072290(((int)stk + 0), ((int)stk + 0));
    *(unsigned short *)((a4 + 0x4)) = (nlArcTan2((*(float *)(((int)stk + 4))), (*(float *)(((int)stk + 0)))));
    return (nlPopMatrix(0x1));
}

float FUN_0c019384(void)
{
    int stk[3];
    register float u4;
    register float t17;
    register float u18;
    register float u19;
    register float u20;
    register float u22;
    register float u23;

    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(0xC175930); }
    *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + ((((struct o18_float *)0xC019550)->v)));
    if ((*(int *)0xC177E80) != 0) {
        FUN_0c018b22(0xC177E74, 0x0, *(Stk3 *)(((int)stk + 0)));
        u4 = (((struct o28_float *)0xC019550)->v);
        FUN_0c018c8a(u4, u4);
        FUN_0c018b1c(0x1);
        FUN_0c02f698();
        *(unsigned int *)0xC177E80 = 0x0;
    }
    camSetTarget(((int)stk + 0), 0x2);
    t17 = FUN_0c018cfc();
    u18 = (((struct o0_float *)0xC019550)->v);
    u19 = (((struct o4_float *)0xC019550)->v);
    u20 = (((-t17) + u18) / u19);
    if (0.0f > (((-t17) + u18) / u19)) {
        u20 = 0.0f;
    }
    u22 = *(float *)0xC019590;
    u23 = u22;
    u23 = u23 + u22 * u20;
    *(float *)0xC177D9C = u23;
    return u22;
}

int GetAng4Mat(int a4, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    int stk[3];
    register int t0;
    register float u4;
    register float u5;
    register float u6;
    register int t17;

    t0 = nlGetMatrix8(0x0);
    *(unsigned int *)((a4 + 0x4)) = (nlArcTan2(((((struct o20_float *)(t0))->v)), ((((struct o28_float *)(t0))->v))));
    u4 = (((struct o20_float *)(t0))->v);
    u5 = (((struct o28_float *)(t0))->v);
    u6 = (u5 * u5);
    u6 = u6 + u4 * u4;
    *(unsigned int *)((a4 + 0x0)) = (-(nlArcTan2(((((struct o24_float *)(t0))->v)), _builtin_sqrtf(u6))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(t0); }
    nlUnitMatrix();
    nlRotateAX((-(*(int *)((a4 + 0x0)))));
    nlRotateAY((-(*(int *)((a4 + 0x4)))));
    FUN_0c072290(((int)stk + 0), ((int)stk + 0));
    t17 = nlArcTan2((*(float *)(((int)stk + 4))), (*(float *)(((int)stk + 0))));
    *(unsigned int *)((a4 + 0x8)) = t17;
    return t17;
}

int FUN_0c0667cc(int a4)
{
    int stk[3];

    (((struct o44_float *)(a4))->v) = 0.0f;
    FUN_0c073e10((a4 + 0x40));
    (((struct o64_float *)(a4))->v) = 0.0f;
    FUN_0c073e10((a4 + 0x60));
    nlOuterProduct(((a4 + 0x40) + 0x20), (a4 + 0x40), ((a4 + 0x40) + 0x10));
    FUN_0c067494(a4, 0x1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xE8 + a4)) = *(struct mv3 *)((((((struct oAC_int *)(a4))->v)) + 0x40)); }
    (((struct oF4_uint *)(a4))->v) = 0x12C;
    (((struct o80_uint *)(a4))->v) = (((((struct o80_int *)(a4))->v)) + 0x1);
    return 0x80;
}
