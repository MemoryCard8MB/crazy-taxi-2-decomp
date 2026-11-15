/* Straight-line functions with calls and guards (batch gen_hd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[2]; } Stk2;
typedef struct { int w[3]; } Stk3;
struct o0_int { int v; };
struct o24_int { char p[0x24]; int v; };
struct o4_int { char p[0x4]; int v; };
int FUN_0c01f4ca(int, int, float);
extern float nlLength();
int gdc_CoursePointLoadReq(Stk2 s, float f4);

int gdc_CoursePointLoadReq(Stk2 s, float f4)
{
    int stk[14];
    register int t2;
    register int t4;
    register int t5;
    register int t6;
    int t7;
    register int t8;
    register int t9;
    register float u11;
    register int t20;
    register float u24;
    register float u25;
    register int t26;
    register int t27;
    register int t28;
    register float u30;
    register int t49;
    register int t50;
    register int t51;
    register float u53;
    register int t73;
    register int t74;
    register int t75;
    register float u76;
    register float u77;
    register int t63;
    register float u70;
    register float u71;
    register int t40;
    register float u47;
    register float u48;
    register float u10;
    register int t21;
    register int t22;
    register float u17;
    register float u18;
    register float u29;
    register int t35;
    register float u36;
    register float u37;
    register float u52;
    register int t58;
    register float u59;
    register float u60;
    register int t82;
    register float u83;
    register float u84;

    stk[4] = s.w[0];
    stk[5] = s.w[1];
    *(float *)(((int)stk + 20)) = (0.0f);
    t2 = (((struct o0_int *)0xC1ECD40)->v);
    if (((((struct o24_int *)0xC1EC71C)->v)) == 0) {
        t4 = (((struct o0_int *)0xC1EC71C)->v);
        if (t4 == 1) {
            t5 = t4;
            t6 = 0xC1EC740;
            t7 = 0xC1EC71C;
            t8 = 0x0;
            t9 = t2;
            u11 = f4;
            for (;;) {
                if ((int)t8 >= (int)((((struct o0_int *)0xC2707E8)->v))) {
                    break;
                }
                t20 = t5;
                u24 = u10;
                u25 = u11;
                if (((int)t8 >= (int)0x9) && (t7 = 0x1C, (int)t8 <= (int)t7)) {
                    t21 = t6;
                    t22 = t7;
                } else {
                    t7 = t9;
                    t6 = ((int)stk + 4);
                    t7 = (t7 + 0x4);
                    t5 = 0xC;
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(t6) = *(struct mv3 *)(t7); }
                    t5 = 0x4;
                    *(float *)((((int)stk + 4) + t5)) = 0.0f;
                    u10 = (*(float *)((t9 + 0x0)));
                    u11 = (((float (*)(int, int))(nlLength))(((int)stk + 4), (((int)stk + 4) + 0x30)));
                    u10 = (u10 + f4);
                    if (u10 > u11) {
                        t5 = (FUN_0c01f4ca(t8, 0x0, u11));
                        t20 = t5;
                    } else {
                        u17 = u10;
                        u18 = u11;
                    }
                    u24 = u17;
                    u25 = u18;
                }
                u10 = u24;
                u11 = u25;
                t5 = t20;
                t6 = t21;
                t8 = (t8 + 0x1);
                t7 = t22;
                t9 = (t9 + 0x14);
            }
            t40 = t5;
            u47 = u10;
            u48 = u11;
        } else {
            t26 = t4;
            t27 = 0x0;
            t28 = t2;
            u30 = f4;
            for (;;) {
                if ((int)t27 >= (int)((((struct o0_int *)0xC2707E8)->v))) {
                    break;
                }
                t26 = 0xC;
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((t28 + 0x4)); }
                t26 = 0x4;
                *(float *)((((int)stk + 4) + t26)) = 0.0f;
                u29 = (*(float *)((t28 + 0x0)));
                u30 = (((float (*)(int, int, Stk3))(nlLength))(((int)stk + 4), (((int)stk + 4) + 0x30), *(Stk3 *)(((int)stk + 4))));
                u29 = (u29 + f4);
                if (u29 > u30) {
                    t26 = (FUN_0c01f4ca(t27, 0x0, u30));
                    t35 = t26;
                } else {
                    u36 = u29;
                    u37 = u30;
                }
                u29 = u36;
                u30 = u37;
                t26 = t35;
                t27 = (t27 + 0x1);
                t28 = (t28 + 0x14);
            }
            t40 = t26;
            u47 = u29;
            u48 = u30;
        }
        t63 = t40;
        u70 = u47;
        u71 = u48;
    } else {
        t49 = 0x34;
        t50 = 0x0;
        t51 = t2;
        u53 = f4;
        for (;;) {
            if ((int)t50 >= (int)((((struct o0_int *)0xC2707E8)->v))) {
                break;
            }
            t49 = 0xC;
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((t51 + 0x4)); }
            t49 = 0x4;
            *(float *)((((int)stk + 4) + t49)) = 0.0f;
            u52 = (*(float *)((t51 + 0x0)));
            u53 = (((float (*)(int, int, Stk3))(nlLength))(((int)stk + 4), (((int)stk + 4) + 0x30), *(Stk3 *)(((int)stk + 4))));
            u52 = (u52 + f4);
            if (u52 > u53) {
                t49 = (FUN_0c01f4ca(t50, 0x0, u53));
                t58 = t49;
            } else {
                u59 = u52;
                u60 = u53;
            }
            u52 = u59;
            u53 = u60;
            t49 = t58;
            t50 = (t50 + 0x1);
            t51 = (t51 + 0x14);
        }
        t63 = t49;
        u70 = u52;
        u71 = u53;
    }
    t73 = t63;
    t74 = ((((struct o4_int *)0xC1ECD40)->v));
    t75 = 0x0;
    u76 = u70;
    u77 = u71;
    for (;;) {
        if ((int)t75 >= (int)((((struct o4_int *)0xC2707E8)->v))) {
            break;
        }
        t73 = 0xC;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((t74 + 0x4)); }
        t73 = 0x4;
        *(float *)((((int)stk + 4) + t73)) = 0.0f;
        u76 = (*(float *)((t74 + 0x0)));
        u77 = (((float (*)(int, int, Stk3))(nlLength))(((int)stk + 4), (((int)stk + 4) + 0x30), *(Stk3 *)(((int)stk + 4))));
        u76 = (u76 + f4);
        if (u76 > u77) {
            t73 = (FUN_0c01f4ca(t75, 0x1, u77));
            t82 = t73;
        } else {
            u83 = u76;
            u84 = u77;
        }
        u76 = u83;
        u77 = u84;
        t73 = t82;
        t75 = (t75 + 0x1);
        t74 = (t74 + 0x14);
    }
    return t73;
}
