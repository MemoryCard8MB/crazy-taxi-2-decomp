/* Straight-line functions with calls and guards (batch gen_gw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o0_float { float v; };
struct o0_int { int v; };
struct o100_float { char p[0x100]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o84_int { char p[0x84]; int v; };
struct o8A_short { char p[0x8A]; short v; };
struct oA4_short { char p[0xA4]; short v; };
struct oA6_short { char p[0xA6]; short v; };
struct oA8_short { char p[0xA8]; short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oC8_float { char p[0xC8]; float v; };
int FUN_0c018b00(int);
int FUN_0c018b1c(int);
int FUN_0c018b22(int, int);
int FUN_0c018c18(int);
int FUN_0c018c2a(float, float);
int FUN_0c018c96(int, int, int, int);
int FUN_0c018cd6(int, int, int);
int FUN_0c018ce0(float, float);
int FUN_0c0297f4(int, int, float);
int FUN_0c029b12(int, float);
int FUN_0c0464ae(void);
int FUN_0c06e700(int, int, float);
int FUN_0c070e60(void);
int FUN_0c072230(int, int);
int FUN_0c072290(int, int);
extern int FUN_0c073360();
int FUN_0c073a60(int);
int FUN_0c073c40(int, int, float);
float FUN_0c073c60(int);
int FUN_0c073e10(int);
int MultiRot4Vec(int);
int camSetTarget(int, int);
int nlAddVector(int, int);
float nlLength(int, int);
int nlOuterProduct(int, int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScaleUnitVector(int, int, Stk3, float);
int nlSubVector(int, int);
int nlSubVector3op(int, int, int);
int nlUnitVectorsd(int, int);
int FUN_0c0195ec(void);
int FUN_0c06d6e0(void);
void FUN_0c041298(int a4);
int FUN_0c06b6f8(int a4, int a5);

int FUN_0c0195ec(void)
{
    int stk[6];

    register int R1;
    register int R2;
    register int R4;
    register int R5;
    register int R6;
    register int R7;
    register int R9;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    v0_1 = (((struct o0_int *)0xC177EA8)->v);
    v0_3 = (v0_1);
    v0_0 = (0xC177EA8);
    if ((v0_1 != 4)) goto L_C019608;
    L_C0197E4:;
    return v0_3;
    L_C019608:;
    FUN_0c073360();
    FUN_0c073a60(0xC175930);
    MultiRot4Vec(0xC1758E4);
    v0_1 = (0xC1758B4);
    v0_2 = (0xC018B22);
    v0_2 = (0xC072230);
    if (((*(int *)((v0_0 + 0x0))) != 0)) goto L_C01964C;
    nlAddVector(0xC177EB0, 0xC177EC8);
    FUN_0c072230(0xC177EB0, (((int)stk + 0) + 0xC));
    FUN_0c018b22((((int)stk + 0) + 0xC), 0x0);
    camSetTarget(0xC177EBC, 0x0);
    L_C01964C:;
    v0_3 = (((struct o4_int *)0xC177EA8)->v);
    (((struct o4_uint *)0xC177EA8)->v) = (v0_3 - 1);
    v0_2 = (0xC177EAC);
    w0_0 = (0.0f);
    if (!(((int)(v0_3 - 1) < 0))) goto L_C0197BA;
    v0_4 = *(int *)((v0_0 + 0x0));
    *(unsigned int *)((v0_0 + 0x0)) = (v0_4 + 0x1);
    v0_3 = ((v0_4 + 0x1));
    w0_1 = (10.0f);
    w0_2 = (-20.0f);
    if (((v0_4 + 0x1) == 0)) goto L_C019682;
    if ((v0_3 == 1)) goto L_C019686;
    if ((v0_3 == 2)) goto L_C0196F8;
    if ((v0_3 == 3)) goto L_C01974E;
    goto L_C019792;
    L_C0197BA:;
    *(float *)(((int)stk + 12)) = w0_0;
    *(float *)(((int)stk + 16)) = (*(float *)0xC019878);
    *(float *)(((int)stk + 20)) = w0_0;
    FUN_0c072230((((int)stk + 0) + 0xC), (((int)stk + 0) + 0xC));
    camSetTarget((((int)stk + 0) + 0xC), 0x0);
    v0_3 = ((nlPopMatrix(0x1)));
    goto L_C0197E4;
    L_C019792:;
    FUN_0c072230((((int)stk + 0) + 0xC), (((int)stk + 0) + 0xC));
    FUN_0c072290(((int)stk + 0), ((int)stk + 0));
    FUN_0c018b22((((int)stk + 0) + 0xC), 0x0);
    FUN_0c018c2a(w0_0, 1.0f);
    FUN_0c018c18(((int)stk + 0));
    goto L_C0197BA;
    L_C01974E:;
    *(float *)(((int)stk + 12)) = w0_0;
    *(float *)(((int)stk + 16)) = (1.0f + 1.0f);
    *(float *)(((int)stk + 20)) = w0_2;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(0xC0A2D08); }
    FUN_0c018b00(0x0);
    FUN_0c072230((((int)stk + 0) + 0xC), (((int)stk + 0) + 0xC));
    FUN_0c018b22((((int)stk + 0) + 0xC), 0x0);
    *(unsigned int *)((v0_2 + 0x0)) = 0x2710;
    v0_1 = nlPopMatrix(0x1);
    *(unsigned int *)((v0_0 + 0x0)) = ((*(int *)((v0_0 + 0x0))) + 0x1);
    v0_3 = (v0_1);
    goto L_C0197E4;
    L_C0196F8:;
    *(float *)(((int)stk + 12)) = w0_2;
    *(float *)(((int)stk + 16)) = w0_1;
    *(float *)(((int)stk + 20)) = w0_1;
    *(float *)(((int)stk + 0)) = w0_0;
    *(float *)(((int)stk + 4)) = w0_0;
    *(float *)(((int)stk + 8)) = ((((struct o0_float *)0xC019834)->v));
    FUN_0c018c96(0xF800, ((unsigned short)((((struct o8A_short *)(v0_1))->v)) + 0xC000), 0x0, 0x0);
    FUN_0c018cd6(0x0, 0xFFFFFFEB, 0x0);
    FUN_0c018ce0(w0_0, ((((struct o14_float *)0xC019834)->v)));
    FUN_0c018b1c(0x0);
    *(float *)0xC177D9C = ((((struct o20_float *)0xC019834)->v));
    *(unsigned int *)((v0_2 + 0x0)) = 0x46;
    goto L_C019792;
    L_C019686:;
    *(float *)(((int)stk + 12)) = w0_0;
    *(float *)(((int)stk + 16)) = 15.0f;
    *(float *)(((int)stk + 20)) = w0_1;
    *(float *)(((int)stk + 0)) = 0.5f;
    *(float *)(((int)stk + 4)) = 0.300000012f;
    *(float *)(((int)stk + 8)) = 0.300000012f;
    v0_0 = (0x28);
    w0_1 = (0.300000012f);
    L_C0196AA:;
    *(unsigned int *)((v0_2 + 0x0)) = v0_0;
    goto L_C019792;
    L_C019682:;
    v0_0 = (0x78);
    goto L_C0196AA;
}

int FUN_0c06d6e0(void)
{
    int stk[11];
    register int t10;
    register int t11;
    register int t18;
    register int t33;

    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x14)) = *(struct mv3 *)(0xC17599C); }
    FUN_0c06e700((((int)stk + 0) + 0x14), 0xC17596C, ((((struct o4_float *)0xC112AD4)->v)));
    FUN_0c06e700((((int)stk + 0) + 0x14), 0xC17597C, ((((struct o8_float *)0xC112AD4)->v)));
    FUN_0c06e700((((int)stk + 0) + 0x14), 0xC17598C, ((((struct oC_float *)0xC112AD4)->v)));
    camSetTarget((((int)stk + 0) + 0x14), 0x0);
    *(unsigned int *)(((int)stk + 0)) = ((int)((int)(FUN_0c0464ae()) % (int)((((struct o0_int *)0xC112AD4)->v))));
    t10 = 0xC06D830;
    t11 = 0x0;
    for (;;) {
        if ((int)t11 >= (int)((((struct o0_int *)0xC112AD4)->v))) {
            if (0x0 != 0) {
                *(unsigned int *)0xC2BB3D8 = ((*(int *)0xC2BB3D8) + 0x1);
                return t10;
            }
            *(unsigned int *)0xC2BB3D8 = 0x4;
            return t10;
        }
        t10 = ((((struct o0_int *)0xC112AD4)->v));
        t10 = ((int)((int)((((((struct o0_int *)0xC112AD4)->v)) + t11) + (*(int *)(((int)stk + 0)))) % (int)t10));
        *(unsigned int *)(((int)stk + 4)) = t10;
        t10 = 0xC;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x20)) = *(struct mv3 *)(0xC17599C); }
        t18 = *(int *)(((int)stk + 4));
        t10 = (FUN_0c06e700((((int)stk + 0) + 0x20), 0xC17596C, (*(float *)((((((t18 << 1) + t18) << 2) + 0xC112AA4) + 0x0)))));
        t10 = 0x4;
        t10 = (FUN_0c06e700((((int)stk + 0) + 0x20), 0xC17597C, (*(float *)((((((t18 << 1) + t18) << 2) + 0xC112AA4) + t10)))));
        t10 = 0x8;
        t10 = (FUN_0c06e700((((int)stk + 0) + 0x20), 0xC17598C, (*(float *)((((((t18 << 1) + t18) << 2) + 0xC112AA4) + t10)))));
        t10 = (nlSubVector3op((((int)stk + 0) + 0x8), (((int)stk + 0) + 0x20), (((int)stk + 0) + 0x14)));
        t10 = (FUN_0c0297f4((((int)stk + 0) + 0x14), (((int)stk + 0) + 0x8), 0.0f));
        t10 = (*(int *)((t10 + 0x1C)));
        if (t10 == -1) {
            break;
        }
        t11 = (t11 + 0x1);
    }
    FUN_0c018b22((((int)stk + 0) + 0x20), 0x0);
    FUN_0c073c40((((int)stk + 0) + 0x8), 0xC10D9E0, 0.25f);
    FUN_0c018c18((((int)stk + 0) + 0x8));
    t33 = FUN_0c018c2a(0.0f, 1.0f);
    if (0x1 != 0) {
        *(unsigned int *)0xC2BB3D8 = ((*(int *)0xC2BB3D8) + 0x1);
    } else {
        *(unsigned int *)0xC2BB3D8 = 0x4;
    }
    return t33;
}


int FUN_0c06b6f8(int a4, int a5)
{
    int stk[7];
    register int t0;
    register int t2;
    register int t3;
    register float u6;
    register float u12;
    register int t14;
    register float u16;
    register int t34;
    float u19;

    *(unsigned int *)(((int)stk + 0)) = 0xC1758B4;
    t0 = *(int *)((a4 + 0x4));
    *(unsigned int *)((a4 + 0x4)) = (t0 - 1);
    if ((int)(t0 - 1) > 0) {
    } else {
        { struct mv16 { int w[16]; }; *(struct mv16 *)((a4 + 0x8)) = *(struct mv16 *)(0xC147388); }
        nlPushMatrix(a5);
        t2 = FUN_0c070e60();
        t3 = 0xFFFFFFFF;
        if ((t2 & 1) != 0) {
            t3 = 0x1;
        }
        u6 = (((*(float *)0xC177D9C) * 39321.6016f) / 360.0f);
        nlRotateAY((t3 * ((int)(u6 + 0.5f) & 0xFFFF)));
        FUN_0c072290(0xC10DA04, (((int)stk + 0) + 0x10));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x4)) = *(struct mv3 *)((a5 + 0x30)); }
        u12 = ((float)((int)((int)(a4 - 0xC2BA6C8) / (int)0x64)) * 30.0f);
        u12 = u12 + 4.0f * (nlLength((a5 + 0x30), ((*(int *)(((int)stk + 0))) + 0x7C)));
        FUN_0c06e700((((int)stk + 0) + 0x4), (((int)stk + 0) + 0x10), u12);
        t14 = FUN_0c029b12((((int)stk + 0) + 0x4), 10.0f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x4)) = *(struct mv3 *)(t14); }
        u16 = 70.0f;
        u16 = u16 + 10.0f * (float)((int)((int)(a4 - 0xC2BA6C8) / (int)0x64));
        *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + u16);
        if (((*(int *)((t14 + 0x1C))) == 14) && (u19 = *(float *)(((int)stk + 8)), -20.0f > u19)) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x38)) = *(struct mv3 *)((((int)stk + 0) + 0x4)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x54)) = *(struct mv3 *)((a5 + 0x30)); }
            FUN_0c06e700((a4 + 0x54), (a5 + 0x20), (-u12));
            nlSubVector3op((((int)stk + 0) + 0x10), (a4 + 0x54), (((int)stk + 0) + 0x4));
            *(float *)(((int)stk + 20)) = 0.0f;
            nlUnitVectorsd((((int)stk + 0) + 0x10), (a4 + 0x28));
            nlOuterProduct(((a4 + 0x8) + 0x10), ((a4 + 0x8) + 0x20), (a4 + 0x8));
            FUN_0c073e10((a4 + 0x8));
            *(unsigned int *)((a4 + 0x0)) = ((*(int *)((a4 + 0x0))) + 0x1);
        }
        t34 = (nlPopMatrix(0x1));
    }
    return t34;
}
