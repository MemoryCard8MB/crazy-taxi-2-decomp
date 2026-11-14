/* Straight-line functions with calls and guards (batch gen_fo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o14_int { char p[0x14]; int v; };
struct o18_int { char p[0x18]; int v; };
int FUN_0c058f64(int a4, int a5, int a6, int a7);

int FUN_0c058f64(int a4, int a5, int a6, int a7)
{

    register int R1;
    register int R2;
    register int R3;
    register int R14;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    v0_0 = a4;
    v0_4 = a5;
    v0_1 = a6;
    v0_2 = a7;
    v0_3 = R14;
    v0_5 = (((struct o14_int *)0xC1EC72C)->v);
    v0_3 = (v0_5);
    R14 = ((((v0_4 << 2) << 2) + 0xC2B6770));
    if ((v0_5 == 1)) goto L_C058F88;
    v0_5 = (((struct o0_int *)0xC1EC72C)->v);
    v0_3 = (v0_5);
    if ((v0_5 == 0)) goto L_C058FE2;
    if ((v0_4 != 0)) goto L_C058FE2;
    L_C058FD2:;
    v0_4 = (*(int *)((R14 + 0x0))) != 0;
    if (v0_4) goto L_C058FE2;
    *(unsigned int *)((R14 + 0x0)) = v0_0;
    *(unsigned int *)((R14 + 0x4)) = v0_1;
    *(unsigned int *)((R14 + 0x8)) = v0_2;
    *(unsigned int *)((R14 + 0xC)) = 0x0;
    L_C058FE2:;
    return v0_3;
    L_C058F88:;
    if ((v0_4 == 0)) goto L_C058FD2;
    v0_5 = (((struct o18_int *)0xC1EC72C)->v);
    v0_3 = (v0_5);
    if ((v0_5 == 4)) goto L_C058FC4;
    if ((v0_3 == 5)) goto L_C058FC4;
    if ((v0_3 == 2)) goto L_C058FE2;
    if ((v0_3 == 3)) goto L_C058FE2;
    if ((v0_3 == 8)) goto L_C058FE2;
    if ((v0_3 == 9)) goto L_C058FE2;
    if ((v0_3 == 10)) goto L_C058FE2;
    if ((v0_3 == 11)) goto L_C058FE2;
    if ((v0_3 == 12)) goto L_C058FE2;
    if ((v0_3 == 13)) goto L_C058FE2;
    if ((v0_3 == 14)) goto L_C058FE2;
    if ((v0_3 == 15)) goto L_C058FE2;
    L_C058FCA:;
    v0_4 = (*(int *)0xC2AC2F4) != 0;
    if (v0_4) goto L_C058FE2;
    goto L_C058FD2;
    L_C058FC4:;
    v0_3 = (v0_4);
    if ((v0_4 != 1)) goto L_C058FE2;
    goto L_C058FCA;
}
