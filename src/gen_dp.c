/* Straight-line functions with calls and guards (batch gen_dp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[4]; } Stk4;
typedef struct { int w[1]; } Stk1;    /* a KMPACKEDARGB by value: one stack word (the callee reads @(4,r15) only) */
typedef struct { int w[2]; } Stk2v;   /* two of them (kmSetColorClampValue reads @(4,r15) and @(8,r15)) */
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o2C_float { char p[0x2C]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int FUN_0c022794(int);
int FUN_0c0227a0(int, int, int, int, float, float, float, float, float);
int FUN_0c0228cc(void);
int FUN_0c0228f0(int, int, int, int);
int FUN_0c023650(float, float, float);
int FUN_0c027f28(int);
int FUN_0c02803a(int, int, int, int);
int FUN_0c058aa0(int, int, int, int);
int kmiWriteRegister(int, int);
int pfSize(float, float);
int pfTextCenterPut(int, int, int);
int FUN_0c02345c(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8);
int kmSetFogVertexColor(Stk1 s);

int FUN_0c02345c(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8)
{
    register int t0;
    register int t1;
    int t2;
    register int t3;
    float u0;

    t3 = (((struct o0_int *)0xC2709A8)->v);
    switch (t3) {
    case 0:
        (((struct o0_uint *)0xC2709A8)->v) = (((((struct o0_int *)0xC2709A8)->v)) + 0x1);
        (((struct o8_float *)0xC2709A8)->v) = 0.0f;
        (((struct oC_uint *)0xC2709A8)->v) = 0x0;
        (((struct o4_uint *)0xC2709A8)->v) = 0x0;
        (((struct o14_uint *)0xC2709A8)->v) = 0x1;
        FUN_0c023650(0.0f, 50.0f, 0.0f);
        break;
    case 1:
        t3 = (((struct o4_int *)0xC2709A8)->v);
        if (t3 == 2) {
            FUN_0c0228cc();
            (((struct o0_uint *)0xC2709A8)->v) = 0x3;
        } else {
            if ((t3 == 0) && (u0 = (((struct o2C_float *)0xC175908)->v), -200.0f > u0)) {
                FUN_0c022794(0x2);
                (((struct o0_uint *)0xC2709A8)->v) = 0x2;
                *(unsigned int *)0xC177D58 = 0x8;
            } else {
                if (t3 == -1) {
                    FUN_0c022794(0x0);
                    (((struct o0_uint *)0xC175908)->v) = 0x0;
                    (((struct o0_uint *)0xC2709A8)->v) = 0x2;
                } else {
                    if ((int)(*(int *)0xC1ECCB4) <= 0) {
                        FUN_0c022794(0x1);
                        (((struct o0_uint *)0xC175908)->v) = 0x0;
                        (((struct o0_uint *)0xC2709A8)->v) = 0x2;
                    } else {
                        if (((*(int *)0xC175A58) != 0) && ((t0 = *(int *)0xC175ADC, t0 != 0) && ((t1 = *(int *)0xC175B60, t1 != 0) && (t2 = *(int *)0xC175BE4, t2 != 0)))) {
                        } else {
                            FUN_0c022794(0x3);
                            (((struct o0_uint *)0xC175908)->v) = 0x0;
                            (((struct o0_uint *)0xC2709A8)->v) = 0x2;
                        }
                    }
                }
            }
        }
        break;
    case 2:
        FUN_0c0227a0(0x0, 0xC2709AC, a6, a7, f4, f5, f6, f7, f8);
        break;
    case 3:
        FUN_0c0228f0(0x0, ((((struct oC_int *)0xC2709A8)->v)), a6, a7);
        break;
    }
    t0 = *(int *)0xC2AC2F0;
    if (t0 != 1) {
        FUN_0c027f28(0x0);
        pfSize(1.20000005f, 1.20000005f);
        FUN_0c02803a(0xFFFFFF00, 0xFFFFFF00, 0xFFFFFF00, 0xFFFFFF00);
        pfTextCenterPut(0x21C, 0x20, 0xC09CAA8);
        pfTextCenterPut(0x21C, 0x40, 0xC09CAB8);
        FUN_0c027f28(0x2);
        pfSize(1.0f, 1.0f);
        t1 = 0xFFFF0000;
        if (((((struct o8_float *)0xC2709A8)->v)) > 100.0f) {
            t1 = 0xFF00FF00;
        }
        FUN_0c02803a(t1, t1, t1, t1);
        return FUN_0c058aa0(0x21C, 0x54, ((((struct oC_int *)0xC2709A8)->v)), 0x2);
    }
    return t0;
}

int kmSetFogVertexColor(Stk1 s)
{
    kmiWriteRegister(0xB4, s.w[0]);
    return 0x0;
}
