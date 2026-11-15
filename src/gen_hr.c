/* Straight-line functions with calls and guards (batch gen_hr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o8_float { char p[0x8]; float v; };
int nlAddVector(int, int);
int nlGetAverageVector(int, int, int, float, float);
int FUN_0c02bbbc(void);

int FUN_0c02bbbc(void)
{
    int stk[2];

    register int R1;
    register int R2;
    register int R3;
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
    register float w0_0;
    register float w0_1;
    register float w0_2;
    v0_0 = *(int *)0xC1EC71C;
    v0_3 = (v0_0);
    v0_4 = (0xC273810);
    v0_1 = (0xCB83CB0);
    v0_2 = (0xC273814);
    if ((v0_0 == 0)) goto L_C02BBEC;
    if ((v0_3 == 1)) goto L_C02BBFE;
    if ((v0_3 == 2)) goto L_C02BBFE;
    if ((v0_3 == -1)) goto L_C02BC02;
    L_C02BBEC:;
    *(unsigned int *)((v0_4 + 0x0)) = 0xCBA2B98;
    { struct mv8 { int w[8]; }; *(struct mv8 *)(v0_2) = *(struct mv8 *)(0xC112C18); }
    L_C02BC0E:;
    v0_0 = *(int *)0xC12941C;
    v0_3 = (v0_0);
    if ((v0_0 == 0)) goto L_C02BCE0;
    v0_3 = (0xC02BE40);
    v0_0 = (0x0);
    v0_1 = (0x0);
    v0_2 = (0x78);
    v0_4 = (0xC073B10);
    w0_0 = ((*(float *)0xC02BE40));
    L_C02BCDA:;
    if (!(((int)v0_1 < (int)0x14))) goto L_C02BCE0;
    *(unsigned int *)(((int)stk + 0)) = (0xC273834 + (((((v0_1 << 2) << 1) + v0_1) << 2) << 1));
    v0_3 = (((v0_1 * v0_2) + 0xC271E5C));
    v0_4 = (v0_0);
    goto L_C02BC66;
    L_C02BCE0:;
    return v0_3;
    L_C02BC66:;
    if (((unsigned int)v0_4 < (unsigned int)0x30)) goto L_C02BC44;
    v0_5 = (v0_0);
    v0_3 = (((v0_1 * 0x1C) + 0xC273DD4));
    v0_4 = (((((((v0_1 << 2) << 1) + v0_1) << 2) << 1) + 0xC273834));
    L_C02BCA0:;
    if (((int)v0_5 < (int)0x2)) goto L_C02BC8C;
    w0_1 = *(float *)(((v0_1 * v0_2) + 0xC271EC8));
    (((struct o18_float *)(((v0_1 * 0x1C) + 0xC273DD4)))->v) = w0_1;
    w0_1 = (((struct o8_float *)(((v0_1 * 0x1C) + 0xC273DD4)))->v);
    w0_2 = (((struct o18_float *)(((v0_1 * 0x1C) + 0xC273DD4)))->v);
    (((struct o8_float *)(((v0_1 * 0x1C) + 0xC273DD4)))->v) = (w0_1 - w0_2);
    w0_1 = (((struct o14_float *)(((v0_1 * 0x1C) + 0xC273DD4)))->v);
    w0_2 = (((struct o18_float *)(((v0_1 * 0x1C) + 0xC273DD4)))->v);
    (((struct o14_float *)(((v0_1 * 0x1C) + 0xC273DD4)))->v) = (w0_1 + w0_2);
    v0_4 = ((v0_1 * 0x1C) + 0xC273DD4);
    v0_3 = (0x14);
    v0_1 = ((v0_1 + 0x1));
    v0_4 = v0_4;
    goto L_C02BCDA;
    L_C02BC8C:;
    nlGetAverageVector(v0_4, (v0_4 + 0xC), v0_3, w0_0, w0_0);
    v0_5 = ((v0_5 + 0x1));
    v0_3 = ((v0_3 + 0xC));
    v0_4 = ((v0_4 + 0x18));
    goto L_C02BCA0;
    L_C02BC44:;
    v0_5 = *(int *)(((int)stk + 0));
    *(unsigned int *)(((int)stk + 4)) = (v0_3 + v0_4);
    nlGetAverageVector((*(int *)(((int)stk + 4))), ((v0_3 + v0_4) + 0x30), (v0_5 + v0_4), w0_0, w0_0);
    nlAddVector((v0_5 + v0_4), (v0_3 + 0x60));
    v0_4 = ((v0_4 + 0xC));
    goto L_C02BC66;
    L_C02BC02:;
    *(unsigned int *)((v0_4 + 0x0)) = v0_1;
    L_C02BC04:;
    { struct mv8 { int w[8]; }; *(struct mv8 *)(v0_2) = *(struct mv8 *)(0xC112F18); }
    goto L_C02BC0E;
    L_C02BBFE:;
    *(unsigned int *)((v0_4 + 0x0)) = v0_1;
    goto L_C02BC04;
}
