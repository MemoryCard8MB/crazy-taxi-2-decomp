/* Straight-line functions with calls and guards (batch gen_gh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c07fdc8(void);
int CheckColliWallEdge(int a4, int a5);

int CheckColliWallEdge(int a4, int a5)
{
    register int t24;
    register int t26;
    register int t32;

    register int R1;
    register int R2;
    register int R3;
    register float F0;
    register float F2;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    v0_2 = a4;
    v0_0 = a5;
    v0_1 = *(int *)((v0_2 + 0x0));
    w0_1 = (((struct o4_float *)(v0_1))->v);
    v0_3 = (0x14);
    v0_1 = (v0_1);
    w0_0 = (w0_1);
    if ((w0_1 > ((((struct o14_float *)(v0_0))->v)))) goto L_C02C664;
    if (((((((struct o18_float *)(v0_0))->v)) - (*(float *)((v0_2 + v0_3)))) > w0_0)) goto L_C02C664;
    w0_0 = (((struct o8_float *)(v0_1))->v);
    w0_3 = (((struct oC_float *)(v0_0))->v);
    w0_4 = *(float *)((v0_0 + 0x0));
    w0_1 = ((((((struct o8_float *)(v0_0))->v)) - (*(float *)((v0_1 + 0x0)))) * ((((struct o4_float *)(v0_0))->v)));
    w0_2 = ((w0_3 - w0_0) * w0_4);
    w0_0 = (((w0_3 - w0_0) * w0_4));
    w0_0 = ((w0_1 - w0_2));
    if ((!((w0_1 - w0_2) > 0.0f))) goto L_C02C664;
    if ((!(((((struct o1C_float *)(v0_0))->v)) > w0_0))) goto L_C02C664;
    FUN_0c07fdc8();
    w0_0 = (((((struct o4_float *)(t24))->v)) * ((((struct o8_float *)(t26))->v)));
    w0_0 = w0_0 + (*(float *)((t26 + 0x0))) * (*(float *)((t24 + 0x0)));
    (((struct o10_float *)(t32))->v) = (w0_0 + ((((struct o10_float *)(t24))->v)));
    return 0x1;
    L_C02C664:;
    return 0x0;
}
