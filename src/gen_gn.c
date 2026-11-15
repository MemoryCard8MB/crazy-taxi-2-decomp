/* Straight-line functions with calls and guards (batch gen_gn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o100_float { char p[0x100]; float v; };
struct o84_int { char p[0x84]; int v; };
struct oA4_short { char p[0xA4]; short v; };
struct oA6_short { char p[0xA6]; short v; };
struct oA8_short { char p[0xA8]; short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oC8_float { char p[0xC8]; float v; };
int FUN_0c072290(int, int);
extern int FUN_0c073360();
float FUN_0c073c60(int);
int nlPopMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScaleUnitVector(int, int, Stk3, float);
int nlSubVector(int, int);
void FUN_0c041298(int a4);

void FUN_0c041298(int a4)
{
    int stk[6];

    register int R1;
    register int R2;
    register int R5;
    register int R6;
    register int R7;
    register int R9;
    register int R12;
    register int R13;
    register float F1;
    register float F2;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    v0_1 = a4;
    v0_0 = ((int (*)(void))(FUN_0c073360))();
    nlRotateAZ((-(unsigned short)((((struct oA8_short *)(v0_1))->v))));
    nlRotateAX((-(unsigned short)((((struct oA4_short *)(v0_1))->v))));
    nlRotateAY((-(unsigned short)((((struct oA6_short *)(v0_1))->v))));
    FUN_0c072290((0x98 + v0_1), (((int)stk + 0) + 0xC));
    nlPopMatrix(0x1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((((int)stk + 0) + 0xC)); }
    *(float *)(((int)stk + 4)) = 0.0f;
    w0_1 = FUN_0c073c60(((int)stk + 0));
    v0_0 = (v0_1);
    w0_0 = (w0_1);
    w0_0 = (w0_1);
    if ((w0_1 > 0.0f)) goto L_C0412FE;
    L_C041494:;
    return;
    L_C0412FE:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(0xC0C3670); }
    v0_1 = (0xC0C3670);
    if (((((((struct o84_int *)(v0_0))->v)) & 32) != 0)) goto L_C041404;
    v0_2 = (0xC0413C8);
    if ((0.00999999978f > w0_0)) goto L_C04133A;
    v0_2 = (0xC8);
    if ((((((struct oC8_float *)(v0_0))->v)) == 0.0f)) goto L_C041352;
    if ((!(w0_0 > (*(float *)((v0_0 + v0_2)))))) goto L_C04133A;
    nlScaleUnitVector(((int)stk + 0), (((int)stk + 0) + 0xC), *(Stk3 *)(((int)stk + 0)), (*(float *)((v0_0 + v0_2))));
    L_C041352:;
    v0_1 = !(5000.0f > ((((struct oB4_float *)(v0_0))->v)));
    w0_0 = (_builtin_fabsf((*(float *)(((int)stk + 12)))));
    if (v0_1) goto L_C04136A;
    w0_3 = (0.5f);
    L_C04136C:;
    if ((!(w0_3 > w0_0))) goto L_C04137A;
    w0_0 = (0.899999976f);
    w0_1 = ((*(float *)(((int)stk + 12))));
    L_C0413F8:;
    w0_2 = (*(float *)(((int)stk + 0)));
    w0_2 = w0_2 + w0_0 * w0_1;
    *(float *)(((int)stk + 0)) = w0_2;
    w0_0 = (0.0149999997f);
    L_C041440:;
    w0_1 = (*(float *)(((int)stk + 0)));
    w0_1 = w0_1 + w0_0 * (*(float *)(((int)stk + 12)));
    *(float *)(((int)stk + 0)) = w0_1;
    w0_1 = (*(float *)(((int)stk + 8)));
    w0_1 = w0_1 + w0_0 * (*(float *)(((int)stk + 20)));
    *(float *)(((int)stk + 8)) = w0_1;
    v0_1 = ((int (*)(void))(FUN_0c073360))();
    nlRotateAY((unsigned short)((((struct oA6_short *)(v0_0))->v)));
    nlRotateAX((unsigned short)((((struct oA4_short *)(v0_0))->v)));
    nlRotateAZ((unsigned short)((((struct oA8_short *)(v0_0))->v)));
    FUN_0c072290(((int)stk + 0), ((int)stk + 0));
    nlPopMatrix(0x1);
    v0_2 = ((nlSubVector((0x98 + v0_0), ((int)stk + 0))));
    goto L_C041494;
    L_C04137A:;
    w0_4 = *(float *)(((int)stk + 12));
    w0_1 = (0.0f);
    w0_3 = (w0_4);
    w0_2 = (0.100000001f);
    if ((!(w0_4 > 0.0f))) goto L_C04138C;
    v0_1 = (0x1);
    L_C0413E2:;
    w0_1 = ((float)v0_1);
    w0_3 = ((w0_0 * 0.400000006f));
    FPUL_ = (v0_1);
    if ((!(w0_2 > (w0_0 * 0.400000006f)))) goto L_C0413F6;
    w0_0 = (w0_3);
    goto L_C0413F8;
    L_C0413F6:;
    w0_0 = (w0_2);
    goto L_C0413F8;
    L_C04138C:;
    if ((!(w0_1 > w0_3))) goto L_C0413E0;
    v0_1 = (0xFFFFFFFF);
    goto L_C0413E2;
    L_C0413E0:;
    v0_1 = (0x0);
    goto L_C0413E2;
    L_C04136A:;
    w0_3 = (1.0f);
    goto L_C04136C;
    L_C04133A:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((((int)stk + 0) + 0xC)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0xC)) = *(struct mv3 *)(v0_1); }
    goto L_C041352;
    L_C041404:;
    w0_1 = (((struct o100_float *)(v0_0))->v);
    FPUL_ = ((((9.99999994e-09f > w0_1)) ? 1 : 0));
    if ((_builtin_fabsf((float)(((9.99999994e-09f > w0_1)) ? 1 : 0)) == 0.0f)) goto L_C04143C;
    v0_2 = (0xC0414A8);
    if ((!(0.400000006f > w0_0))) goto L_C04143C;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((((int)stk + 0) + 0xC)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0xC)) = *(struct mv3 *)(v0_1); }
    L_C04143C:;
    w0_0 = (0.0500000007f);
    goto L_C041440;
}
