/* Straight-line functions with calls and guards (batch gen_ga): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uint { unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o4_int { char p[0x4]; int v; };
int FUN_0c029b12(int, float);
int FUN_0c04bfe0(float f4);

int FUN_0c04bfe0(float f4)
{

    register int R1;
    register int R2;
    register int R3;
    register int R13;
    register float F2;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register float w0_0;
    w0_0 = f4;
    v0_0 = R13;
    v0_1 = *(int *)0xC2ADF60;
    v0_2 = FUN_0c029b12(0xC177D38, (*(float *)0xC04C09C));
    v0_3 = *(int *)((v0_2 + 0x1C));
    v0_0 = (v0_3);
    R13 = (0xC2ADF60);
    v0_1 = (v0_1);
    v0_2 = (v0_2);
    if ((v0_3 == -1)) goto L_C04C02E;
    v0_3 = *(int *)((v0_2 + 0x1C));
    v0_4 = *(int *)((R13 + 0x0));
    v0_4 = (v0_4);
    v0_5 = (v0_3);
    if (((int)v0_3 < (int)0x11)) goto L_C04C018;
    if (((int)v0_5 >= (int)0x16)) goto L_C04C018;
    v0_0 = (v0_4);
    if ((v0_4 == 18)) goto L_C04C02E;
    v0_1 = (((struct o4_int *)0xC2ADEBC)->v);
    v0_1 = (v0_1);
    L_C04C02C:;
    *(unsigned int *)((R13 + 0x0)) = v0_1;
    L_C04C02E:;
    (((struct o0_uint *)0xC2ADEBC)->v) = v0_1;
    return v0_0;
    L_C04C018:;
    if (((int)v0_4 < (int)0x1)) goto L_C04C02E;
    v0_2 = !((*(float *)0xC177D3C) > ((((struct o18_float *)(v0_2))->v)));
    v0_0 = (0x18);
    if (v0_2) goto L_C04C02E;
    v0_1 = (0x0);
    goto L_C04C02C;
}
