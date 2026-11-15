/* Straight-line functions with calls and guards (batch gen_gq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
int FUN_0c026ce6(void);
int FUN_0c027f28(int);
int FUN_0c027fbe(float, float);
int FUN_0c02803a(int, int, int, int);
float FUN_0c02806c(int);
int FUN_0c02842e(int);
int FUN_0c076230(float, float, float);
int FUN_0c07ada0(int);
int nlCloseEvent(int);
int pfSize(float, float);
int FUN_0c0518b8(int a4, int a5, int a6, int a7);

int FUN_0c0518b8(int a4, int a5, int a6, int a7)
{
    int stk[8];
    register int t7;
    register int t101;
    register int t154;
    register float u17;
    register float u34;
    register float u51;
    register float u68;
    int t76;
    register int t77;
    int t118;

    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x14)) = *(struct mv3 *)(0xC10CA20); }
    if ((int)(*(int *)((a4 + 0x20))) >= (int)0x50) {
        (((struct o4_uint *)0xC2B2A78)->v) = 0x63;
        t154 = nlCloseEvent(a4);
        (((struct o0_uint *)0xC2B2A78)->v) = 0x0;
    } else {
        if ((*(int *)0xC177CE8) != 0) {
            FUN_0c027f28(0x0);
            FUN_0c02803a(0xFFFFAA00, 0xFFFFFF00, 0xFFFFAA00, 0xFFFFFF00);
            pfSize(1.0f, 1.0f);
            t7 = *(int *)((a4 + 0x18));
            switch (t7) {
            case 0:
                *(float *)(((int)stk + 12)) = (FUN_0c02806c(0xC10CA2C));
                if (((((struct o4_int *)0xC2B2A78)->v)) != (*(int *)((a4 + 0x18)))) {
                    u68 = ((((-((*(float *)(((int)stk + 12))) * 0.5f))) + ((((struct o14_float *)(a4))->v))) + 530.0f);
                } else {
                    u68 = (530.0f - (((*(float *)(((int)stk + 12))) * 0.5f)));
                }
                FUN_0c027fbe(u68, 136.0f);
                FUN_0c02842e(0xC10CA2C);
                break;
            case 1:
                *(float *)(((int)stk + 4)) = (FUN_0c02806c(0xC10CA3C));
                if (((((struct o4_int *)0xC2B2A78)->v)) != (*(int *)((a4 + 0x18)))) {
                    u51 = ((((-((*(float *)(((int)stk + 4))) * 0.5f))) + ((((struct o14_float *)(a4))->v))) + 530.0f);
                } else {
                    u51 = (530.0f - (((*(float *)(((int)stk + 4))) * 0.5f)));
                }
                FUN_0c027fbe(u51, 136.0f);
                FUN_0c02842e(0xC10CA48);
                break;
            case 2:
                *(float *)(((int)stk + 0)) = (FUN_0c02806c(0xC10CA58));
                if (((((struct o4_int *)0xC2B2A78)->v)) != (*(int *)((a4 + 0x18)))) {
                    u34 = ((((-((*(float *)(((int)stk + 0))) * 0.5f))) + ((((struct o14_float *)(a4))->v))) + 530.0f);
                } else {
                    u34 = (530.0f - (((*(float *)(((int)stk + 0))) * 0.5f)));
                }
                FUN_0c027fbe(u34, 136.0f);
                FUN_0c02842e(0xC10CA68);
                break;
            case 3:
                *(float *)(((int)stk + 8)) = ((FUN_0c02806c(0xC10CA78)) * 0.5f);
                if (((((struct o4_int *)0xC2B2A78)->v)) != (*(int *)((a4 + 0x18)))) {
                    u17 = (((-(*(float *)(((int)stk + 8)))) + ((((struct o14_float *)(a4))->v))) + 530.0f);
                } else {
                    u17 = (530.0f - (*(float *)(((int)stk + 8))));
                }
                FUN_0c027fbe(u17, 136.0f);
                FUN_0c02842e(0xC10CA88);
                break;
            }
            (((struct o0_uint *)0xC2B1E04)->v) = (*(int *)((a4 + 0x1C)));
            if (((int)(*(int *)0xC1ECCB4) > 0) && (t76 = (((struct o0_int *)0xC2B1E04)->v), t77 = (((struct o4_int *)0xC2B1E04)->v), (int)t77 < (int)t76)) {
                (((struct o4_uint *)0xC2B1E04)->v) = ((((struct o0_int *)0xC2B1E04)->v));
            }
            if ((int)(*(int *)((a4 + 0x1C))) <= (int)0x1) {
            } else {
                if ((int)(*(int *)((a4 + 0x1C))) > (int)0x63) {
                    *(unsigned int *)((a4 + 0x1C)) = 0x63;
                }
                *(unsigned int *)((((((int)stk + 0) + 0x14) + 0x8) + 0x0)) = ((int)((int)(*(int *)((a4 + 0x1C))) / (int)0x64));
                *(unsigned int *)(((((int)stk + 0) + 0x14) + 0x4)) = ((int)((int)((int)((int)(*(int *)((a4 + 0x1C))) / (int)0xA)) % (int)0xA));
                *(unsigned int *)(((((int)stk + 0) + 0x14) + 0x0)) = ((int)((int)((*(int *)((a4 + 0x1C))) - ((*(int *)((((((int)stk + 0) + 0x14) + 0x8) + 0x0))) * 0x64)) % (int)0xA));
                t101 = 0x0;
                if ((*(int *)((((((int)stk + 0) + 0x14) + 0x8) + 0x0))) == 0) {
                    t101 = 0x18;
                    if ((*(int *)(((((int)stk + 0) + 0x14) + 0x4))) == 0) {
                        t101 = 0x30;
                    }
                }
                FUN_0c02803a(0xFFFFFF00, 0xFFFFFFFF, 0xFFFFFF00, 0xFFFFFFFF);
                pfSize(1.0f, 1.0f);
                FUN_0c027fbe((float)(t101 + 0x1E0), 166.0f);
                FUN_0c02842e(0xC10CA98);
                *(unsigned int *)(((int)stk + 16)) = ((((int)stk + 0) + 0x14) + 0x8);
                (((struct o0_uint *)0xC2B2810)->v) = ((*(int *)((((((int)stk + 0) + 0x14) + 0x8) + 0x0))) + 0x51);
                (((struct o4_float *)0xC2B2810)->v) = (((((struct o14_float *)(a4))->v)) + 564.0f);
                (((struct o8_float *)0xC2B2810)->v) = 166.0f;
                FUN_0c076230(1.0f, 1.0f, 0.0f);
                if ((*(int *)(((*(int *)(((int)stk + 16))) + 0x0))) != 0) {
                    FUN_0c07ada0(0xC2B2810);
                }
                if (((*(int *)((((((int)stk + 0) + 0x14) + 0x4) + 0x0))) == 0) && (t118 = *(int *)(((((int)stk + 0) + 0x14) + 0x8)), t118 == 0)) {
                } else {
                    (((struct o0_uint *)0xC2B2810)->v) = ((*(int *)((((((int)stk + 0) + 0x14) + 0x4) + 0x0))) + 0x51);
                    (((struct o4_float *)0xC2B2810)->v) = (((((struct o14_float *)(a4))->v)) + 586.0f);
                    FUN_0c07ada0(0xC2B2810);
                }
                (((struct o0_uint *)0xC2B2810)->v) = ((*(int *)(((((int)stk + 0) + 0x14) + 0x0))) + 0x51);
                (((struct o4_float *)0xC2B2810)->v) = (((((struct o14_float *)(a4))->v)) + 610.0f);
                FUN_0c07ada0(0xC2B2810);
                FUN_0c026ce6();
            }
        }
        (((struct o14_float *)(a4))->v) = (((((struct o14_float *)(a4))->v)) * 0.699999988f);
        *(unsigned int *)((a4 + 0x20)) = ((*(int *)((a4 + 0x20))) + 0x1);
        t154 = 0x14;
    }
    return t154;
}
