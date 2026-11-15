/* Straight-line functions with calls and guards (batch gen_fu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[2]; } Stk2;
typedef struct { int w[3]; } Stk3;
struct o0_int { int v; };
struct o24_int { char p[0x24]; int v; };
struct o4_int { char p[0x4]; int v; };
int FUN_0c01f4ca(int, int, float);
extern float nlLength();
int gdc_CoursePointLoadReq(int a4, Stk3 p, float f4);

int gdc_CoursePointLoadReq(int a4, Stk3 p, float f4)
{
    int stk[14];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register float F3;
    register int T_;
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
    stk[4] = p.w[0];
    stk[5] = p.w[1];
    stk[6] = p.w[2];
    v0_0 = a4;
    w0_2 = f4;
    *(float *)(((int)stk + 20)) = (0.0f);
    v0_0 = (0x34);
    v0_1 = (0xC2707E8);
    v0_2 = (0xC073B60);
    v0_2 = (((((struct o0_int *)0xC1ECD40)->v)));
    v0_3 = (0x0);
    w0_0 = (w0_2);
    w0_1 = (0.0f);
    if ((((((struct o24_int *)0xC1EC71C)->v)) != 0)) goto L_C01F76A;
    v0_4 = (((struct o0_int *)0xC1EC71C)->v);
    v0_0 = (v0_4);
    if ((v0_4 != 1)) goto L_C01F76A;
    v0_5 = (0x9);
    v0_4 = (v0_3);
    L_C01F760:;
    if (!(((int)v0_4 < (int)(*(int *)((v0_1 + 0x0)))))) goto L_C01F7A0;
    if (((int)v0_4 < (int)v0_5)) goto L_C01F734;
    if (((int)v0_4 <= (int)0x1C)) goto L_C01F75C;
    goto L_C01F734;
    L_C01F7A0:;
    v0_1 = (0xC2707EC);
    v0_4 = (((((struct o4_int *)0xC1ECD40)->v)));
    v0_2 = (v0_3);
    L_C01F7D6:;
    if (((int)v0_2 < (int)(*(int *)((v0_1 + 0x0))))) goto L_C01F7AA;
    return v0_0;
    L_C01F7AA:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((v0_4 + 0x4)); }
    *(float *)(((int)stk + 8)) = w0_1;
    w0_3 = ((int (*)(int, int, Stk3))(nlLength))(((int)stk + 4), (((int)stk + 4) + 0x30), *(Stk3 *)(((int)stk + 4)));
    w0_2 = (w0_3);
    w0_2 = (w0_3);
    if ((!(((*(float *)((v0_4 + 0x0))) + w0_0) > w0_3))) goto L_C01F7D2;
    v0_0 = ((FUN_0c01f4ca(v0_2, 0x1, w0_2)));
    L_C01F7D2:;
    v0_4 = ((v0_4 + 0x14));
    v0_2 = ((v0_2 + 0x1));
    goto L_C01F7D6;
    L_C01F734:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((v0_2 + 0x4)); }
    *(float *)(((int)stk + 8)) = w0_1;
    w0_3 = ((float (*)(int, int, Stk3))(nlLength))(((int)stk + 4), (((int)stk + 4) + 0x30), *(Stk3 *)(((int)stk + 4)));
    w0_2 = (w0_3);
    w0_2 = (w0_3);
    if ((!(((*(float *)((v0_2 + 0x0))) + w0_0) > w0_3))) goto L_C01F75C;
    v0_0 = ((FUN_0c01f4ca(v0_4, 0x0, w0_2)));
    L_C01F75C:;
    v0_4 = ((v0_4 + 0x1));
    v0_2 = ((v0_2 + 0x14));
    goto L_C01F760;
    L_C01F76A:;
    v0_4 = (v0_3);
    L_C01F79A:;
    if (((int)v0_4 < (int)(*(int *)((v0_1 + 0x0))))) goto L_C01F76E;
    goto L_C01F7A0;
    L_C01F76E:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((v0_2 + 0x4)); }
    *(float *)(((int)stk + 8)) = w0_1;
    w0_3 = ((float (*)(int, int, Stk3))(nlLength))(((int)stk + 4), (((int)stk + 4) + 0x30), *(Stk3 *)(((int)stk + 4)));
    w0_2 = (w0_3);
    w0_2 = (w0_3);
    if ((!(((*(float *)((v0_2 + 0x0))) + w0_0) > w0_3))) goto L_C01F796;
    v0_0 = ((FUN_0c01f4ca(v0_4, 0x0, w0_2)));
    L_C01F796:;
    v0_4 = ((v0_4 + 0x1));
    v0_2 = ((v0_2 + 0x14));
    goto L_C01F79A;
}
