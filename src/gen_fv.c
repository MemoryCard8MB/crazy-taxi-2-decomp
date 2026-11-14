/* Straight-line functions with calls and guards (batch gen_fv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int FUN_0c14fd82(int, int);
int FUN_0c14ff0c(int);
int FUN_0c1500d2(int, int, int);
int FUN_0c150308(int, int, int);
int FUN_0c150460(int);
int nlFree(int);
int nlMalloc(int);
int FUN_0c06cc10(int a4);

int FUN_0c06cc10(int a4)
{

    register int R0;
    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R9;
    register int R10;
    register int R11;
    register int R12;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    v0_2 = a4;
    v0_0 = R12;
    v0_1 = R11;
    v0_2 = R10;
    v0_3 = R9;
    v0_0 = (0x0);
    L_C06CC20:;
    if (((int)v0_0 >= (int)0xA)) goto L_C06CCCC;
    R10 = (0xC112A40);
    R11 = (0x78);
    R12 = (0x0);
    R9 = (0xC14FD82);
    L_C06CC2E:;
    v0_1 = FUN_0c14fd82(R10, 0x0);
    v0_2 = (int)(R12 + 0x1) > (int)R11;
    R0 = (v0_1);
    R12 = ((R12 + 0x1));
    v0_1 = (v0_1);
    if (v0_2) goto L_C06CC9C;
    if ((v0_1 == 0)) goto L_C06CC2E;
    v0_2 = *(int *)((((*(int *)0xC175C80) << 2) + 0xC1129E0));
    R11 = (v0_2);
    if (((int)v0_2 >= 0)) goto L_C06CC52;
    R11 = ((R11 + 0x7FF));
    L_C06CC52:;
    FUN_0c150308(v0_1, ((int)R11 >> 11), 0x0);
    v0_3 = nlMalloc(0x3800);
    (((struct o8_uint *)0xC13C344)->v) = v0_3;
    R0 = (v0_3);
    R11 = (((int)R11 >> 11));
    v0_2 = (v0_3);
    if ((v0_3 == 0)) goto L_C06CCCC;
    (((struct oC_uint *)0xC13C344)->v) = ((v0_2 + 0x20) & 0xFFFFFFE0);
    FUN_0c1500d2(v0_1, 0x7, ((v0_2 + 0x20) & 0xFFFFFFE0));
    R10 = (0xC13C350);
    L_C06CCA0:;
    v0_3 = FUN_0c150460(v0_1);
    R12 = (0xC14FF0C);
    v0_2 = (v0_3);
    if ((v0_3 != 3)) goto L_C06CC8A;
    FUN_0c14ff0c(v0_1);
    (((struct o10_uint *)0xC13C344)->v) = (((*(int *)((((*(int *)0xC175C80) << 2) + 0xC1129E0))) - (((R11 << 8) << 2) << 1)) + (*(int *)((R10 + 0x0))));
    R0 = (0xC1129E0);
    L_C06CCCC:;
    return R0;
    L_C06CC8A:;
    if ((v0_2 != 4)) goto L_C06CCA0;
    FUN_0c14ff0c(v0_1);
    v0_1 = nlFree(((((struct o0_int *)0xC13C344)->v)));
    R0 = (v0_1);
    v0_1 = (0xC13C344);
    L_C06CC9C:;
    v0_0 = ((v0_0 + 0x1));
    goto L_C06CC20;
}
