/* Straight-line functions with calls and guards (batch gen_fz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o58_int { char p[0x58]; int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o63_uchar { char p[0x63]; unsigned char v; };
struct o8_int { char p[0x8]; int v; };
struct oFF_uchar { char p[0xFF]; unsigned char v; };
int FUN_0c06374e(int a4);

int FUN_0c06374e(int a4)
{

    register int R1;
    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    v0_0 = a4;
    if ((((*(signed char *)(((v0_0 + 0x63) + 0x0))) & 1) != 0)) goto L_C06376A;
    if (((int)((((struct o0_int *)0xC1ECCEC)->v)) > 0)) goto L_C06376A;
    (((struct o63_uchar *)(v0_0))->v) = ((*(signed char *)(((v0_0 + 0x63) + 0x0))) | 0x4);
    L_C06376A:;
    v0_1 = (0x0);
    if ((((*(signed char *)(((v0_0 + 0x63) + 0x0))) & 1) != 0)) goto L_C0637BA;
    v0_3 = (0xC1ECCEC);
    if (((int)((((struct o0_int *)0xC1ECCEC)->v)) > (int)(((((struct o8_int *)0xC1ECCEC)->v)) - 1))) goto L_C0637BA;
    v0_2 = (v0_1);
    v0_4 = (0x1);
    L_C0637A0:;
    if (!(((int)v0_2 < (int)(*(int *)((v0_0 + 0x4)))))) goto L_C0637A6;
    v0_5 = *(signed char *)((((v0_2 << 8) + (*(int *)((v0_0 + 0x0)))) + 0xFF));
    v0_3 = (v0_5);
    if (((v0_5 & 32) == 0)) goto L_C06379E;
    v0_4 = (v0_1);
    goto L_C0637A6;
    L_C0637A6:;
    if ((v0_4 == 0)) goto L_C06383A;
    *(unsigned int *)((v0_0 + 0x10)) = 0xA;
    v0_1 = *(signed char *)(((v0_0 + 0x63) + 0x0));
    (((struct o63_uchar *)(v0_0))->v) = (v0_1 | 0x80);
    v0_3 = ((v0_1 | 0x80));
    L_C06383A:;
    return v0_3;
    L_C06379E:;
    v0_2 = ((v0_2 + 0x1));
    goto L_C0637A0;
    L_C0637BA:;
    v0_3 = *(int *)0xC2B9CA8;
    v0_2 = (v0_3);
    if (((int)v0_3 <= 0)) goto L_C0637E4;
    (((struct o5C_uint *)(v0_0))->v) = v0_2;
    v0_2 = (v0_1);
    L_C0637DE:;
    if (!(((int)v0_2 < (int)(*(int *)((v0_0 + 0x4)))))) goto L_C0637E4;
    v0_3 = *(int *)((v0_0 + 0x0));
    (((struct oFF_uchar *)(((v0_2 << 8) + v0_3)))->v) = ((*(signed char *)(((0xFF + ((v0_2 << 8) + v0_3)) + 0x0))) | 0x8);
    v0_2 = ((v0_2 + 0x1));
    goto L_C0637DE;
    L_C0637E4:;
    v0_2 = *(signed char *)(((*(int *)((v0_0 + 0x0))) + 0xFF));
    v0_3 = (v0_2);
    if (((v0_2 & 16) != 0)) goto L_C06383A;
    v0_2 = (((struct o58_int *)(v0_0))->v);
    (((struct o58_uint *)(v0_0))->v) = (v0_2 + 0x1);
    v0_3 = (0x58);
    if (((int)(v0_2 + 0x1) <= (int)0x1A4)) goto L_C06383A;
    *(unsigned int *)((v0_0 + v0_3)) = v0_1;
    v0_2 = (v0_1);
    L_C063834:;
    if (((int)v0_2 < (int)(*(int *)((v0_0 + 0x4))))) goto L_C063820;
    goto L_C06383A;
    L_C063820:;
    v0_1 = *(int *)((v0_0 + 0x0));
    v0_3 = *(signed char *)(((0xFF + ((v0_2 << 8) + v0_1)) + 0x0));
    (((struct oFF_uchar *)(((v0_2 << 8) + v0_1)))->v) = (v0_3 | 0x10);
    v0_3 = ((v0_3 | 0x10));
    v0_2 = ((v0_2 + 0x1));
    goto L_C063834;
}
