/* Straight-line functions with calls and guards (batch gen_fn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o20_float { char p[0x20]; float v; };
int FUN_0c068be8(int, int, int);
int FUN_0c068c14(int a4, int a5, float f4);

int FUN_0c068c14(int a4, int a5, float f4)
{

    register int R0;
    register int R2;
    register int R3;
    register int R6;
    register int R12;
    register int R13;
    register float F2;
    register float F3;
    register float F15;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    register float w0_1;
    v0_2 = a4;
    v0_1 = a5;
    w0_0 = f4;
    v0_0 = R13;
    v0_3 = R12;
    v0_0 = (v0_2);
    F15 = (w0_0);
    if ((v0_2 == 0)) goto L_C068C66;
    v0_2 = !(((((struct o20_float *)(v0_1))->v)) > 0.0f);
    R0 = (0x20);
    if (v0_2) goto L_C068C3E;
    w0_0 = *(float *)((v0_1 + R0));
    v0_1 = *(int *)((v0_1 + 0x14));
    R12 = ((int)(1.0f / w0_0));
    R13 = (v0_1);
    w0_1 = ((1.0f / w0_0));
    FPUL_ = ((int)(1.0f / w0_0));
    L_C068C60:;
    v0_1 = (*(int *)((v0_0 + 0x0))) != 0;
    if (!(v0_1)) goto L_C068C66;
    v0_1 = (*(int *)((v0_0 + 0x0))) != R13;
    if (v0_1) goto L_C068C5E;
    v0_1 = FUN_0c068be8((*(int *)((v0_0 + 0x4))), ((int)((float)(*(int *)((v0_0 + 0x8))) / F15) + R12), 0x2);
    R0 = (v0_1);
    goto L_C068C5E;
    L_C068C66:;
    return R0;
    L_C068C5E:;
    v0_0 = ((v0_0 + 0xC));
    goto L_C068C60;
    L_C068C3E:;
    v0_1 = *(int *)((v0_1 + 0x0));
    R12 = (0x0);
    R13 = (v0_1);
    goto L_C068C60;
}
