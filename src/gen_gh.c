/* Straight-line functions with calls and guards (batch gen_gh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o8_float { char p[0x8]; float v; };
int nlAddVector(int, int);
int nlGetAverageVector(int, int, int, float, float);
int FUN_0c02bcf8(int a4);

int FUN_0c02bcf8(int a4)
{
    int stk[3];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register float F2;
    register float F3;
    register float F4;
    register float F5;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    v0_6 = a4;
    *(unsigned int *)0xC273810 = (*(int *)(((v0_6 << 2) + 0xC129420)));
    { struct mv8 { int w[8]; }; *(struct mv8 *)(0xC273814) = *(struct mv8 *)((((((*(int *)(((v0_6 << 2) + 0xC09FC9C))) << 2) << 2) << 1) + 0xC1131F8)); }
    v0_5 = (0xC129458);
    v0_6 = ((v0_6 << 2));
    if (((*(int *)0xC129458) == 0)) goto L_C02BDFE;
    v0_0 = (0xC073B10);
    v0_0 = (0x0);
    v0_1 = (0x0);
    v0_2 = (0x78);
    v0_3 = (0x1C);
    w0_0 = (0.5f);
    L_C02BD46:;
    *(unsigned int *)(((int)stk + 4)) = (0xC273834 + (((((v0_1 << 2) << 1) + v0_1) << 2) << 1));
    v0_4 = (((v0_1 * v0_2) + 0xC271E5C));
    v0_5 = (v0_0);
    L_C02BD64:;
    v0_6 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 0)) = (v0_6 + v0_5);
    *(unsigned int *)(((int)stk + 8)) = (v0_4 + v0_5);
    nlGetAverageVector((*(int *)(((int)stk + 8))), ((v0_4 + v0_5) + 0x30), (v0_6 + v0_5), w0_0, w0_0);
    nlAddVector((*(int *)(((int)stk + 0))), (v0_4 + 0x60));
    v0_6 = (unsigned int)(v0_5 + 0xC) < (unsigned int)0x30;
    v0_5 = ((v0_5 + 0xC));
    if (v0_6) goto L_C02BD64;
    *(unsigned int *)(((int)stk + 0)) = v0_0;
    v0_4 = (((v0_1 * v0_3) + 0xC273DD4));
    v0_5 = (((((((v0_1 << 2) << 1) + v0_1) << 2) << 1) + 0xC273834));
    L_C02BDA8:;
    nlGetAverageVector(v0_5, (v0_5 + 0xC), v0_4, w0_0, w0_0);
    v0_6 = *(int *)(((int)stk + 0));
    *(unsigned int *)(((int)stk + 0)) = (v0_6 + 0x1);
    v0_4 = ((v0_4 + 0xC));
    v0_5 = ((v0_5 + 0x18));
    if (((int)(v0_6 + 0x1) < (int)0x2)) goto L_C02BDA8;
    w0_1 = *(float *)(((v0_1 * v0_2) + 0xC271EC8));
    (((struct o18_float *)(((v0_1 * v0_3) + 0xC273DD4)))->v) = w0_1;
    w0_1 = (((struct o8_float *)(((v0_1 * v0_3) + 0xC273DD4)))->v);
    w0_2 = (((struct o18_float *)(((v0_1 * v0_3) + 0xC273DD4)))->v);
    (((struct o8_float *)(((v0_1 * v0_3) + 0xC273DD4)))->v) = (w0_1 - w0_2);
    w0_1 = (((struct o14_float *)(((v0_1 * v0_3) + 0xC273DD4)))->v);
    w0_2 = (((struct o18_float *)(((v0_1 * v0_3) + 0xC273DD4)))->v);
    v0_4 = (int)(v0_1 + 0x1) < (int)0x14;
    (((struct o14_float *)(((v0_1 * v0_3) + 0xC273DD4)))->v) = (w0_1 + w0_2);
    v0_6 = ((v0_1 * v0_3) + 0xC273DD4);
    v0_5 = (0x14);
    v0_1 = ((v0_1 + 0x1));
    v0_6 = v0_6;
    if (v0_4) goto L_C02BD46;
    L_C02BDFE:;
    return v0_5;
}
