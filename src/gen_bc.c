/* Straight-line functions with calls and guards (batch gen_bc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_float { char p[0x2C]; float v; };
struct o38_int { char p[0x38]; int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o3C_int { char p[0x3C]; int v; };
struct o3C_uint { char p[0x3C]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int FUN_0c026ce6(void);
int FUN_0c052186(void);
int FUN_0c058ca6(int, int);
int FUN_0c076230(float, float, float);
extern int FUN_0c07ada0();
int GS_GuestResult(void);
int FUN_0c051e22(void);

int FUN_0c051e22(void)
{
    int t0;
    int t1;
    register int t2;
    int t3;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    if ((((((struct o3C_int *)0xC2B29A4)->v)) == 0) && (t0 = (((struct o0_int *)0xC2B29E4)->v), (int)t0 <= (int)0x3)) {
        (((struct o38_uint *)0xC2B29A4)->v) = (*(int *)((((((struct o14_int *)0xC2B2964)->v)) + 0x0)));
    }
    if ((int)((((struct o38_int *)0xC2B29A4)->v)) <= 0) {
        *(volatile int *)0xC2B1DD4;
        if ((((((struct o0_int *)0xC2B29E4)->v)) == 2) && (t1 = (((struct o14_int *)0xC2B29E4)->v), t1 == 1)) {
            (((struct o0_uint *)0xC2B29E4)->v) = 0x6;
            t0 = t1;
        } else {
            t1 = (((struct o0_int *)0xC2B29E4)->v);
            t2 = t1;
            if (t1 != 3) {
            } else {
                (((struct o0_uint *)0xC2B29E4)->v) = 0x4;
                (((struct oC_uint *)0xC2B29E4)->v) = 0x0;
                (((struct o8_uint *)0xC2B29E4)->v) = 0x0;
                t2 = 0xC2B29EC;
            }
            t0 = t2;
        }
        return t0;
    }
    t0 = (int)((int)((((struct o38_int *)0xC2B29A4)->v)) / (int)0x3C);
    t1 = t0;
    if ((int)t0 > (int)0x3E7) {
        t1 = 0x3E7;
    }
    t2 = 0x0;
    t3 = t1;
    if ((int)t0 >= (int)0x64) {
        t0 = (int)((int)t1 / (int)0x64);
        t2 = t0;
        t3 = (t1 - (t0 * 0x64));
    }
    t0 = (int)((int)t3 / (int)0xA);
    t1 = (int)((int)t3 % (int)0xA);
    if (((((struct o3C_int *)0xC2B29A4)->v)) == 0) {
        t3 = GS_GuestResult();
        if (t3 == 2) {
            FUN_0c076230(0.0f, 1.0f, 0.0f);
        } else {
            if (t3 == 1) {
                FUN_0c076230(1.0f, 0.90196079f, 0.0f);
            } else {
                u0 = 0.988235295f;
                u1 = 0.0f;
                u2 = 0.0f;
                if ((t3 != 0) && (t3 == -1)) {
                    u0 = 0.686274529f;
                    u1 = 0.0980392173f;
                    u2 = 0.56078434f;
                }
                FUN_0c076230(u0, u1, u2);
            }
        }
        if ((int)((((struct o38_int *)0xC2B29A4)->v)) <= (int)(*(int *)0xC1ECCF4)) {
            if (((int)((int)((((struct o38_int *)0xC2B29A4)->v)) % (int)0x3C)) == 0) {
                FUN_0c058ca6(0x4A9, 0x0);
            }
        }
    } else {
        t3 = (((struct o8_int *)0xC2B1DF8)->v);
        if (t3 == 2) {
            FUN_0c076230(0.0f, 1.0f, 0.0f);
        } else {
            if (t3 == 1) {
                FUN_0c076230(1.0f, 0.90196079f, 0.0f);
            } else {
                u0 = 0.988235295f;
                u1 = 0.0f;
                u2 = 0.0f;
                if ((t3 != 0) && (t3 == -1)) {
                    u0 = 0.686274529f;
                    u1 = 0.0980392173f;
                    u2 = 0.56078434f;
                }
                FUN_0c076230(u0, u1, u2);
            }
        }
    }
    if (((((struct o0_int *)0xC2B29E4)->v)) == 3) {
        (((struct o2C_float *)0xC2B27C0)->v) = 0.0f;
        FUN_0c052186();
    }
    (((struct o3C_uint *)0xC2B2964)->v) = (int)((((struct o0_float *)0xC2B1DF8)->v));
    (((struct o0_uint *)0xC2B29A4)->v) = (int)((((struct o4_float *)0xC2B1DF8)->v));
    u0 = (((struct o0_float *)0xC052208)->v);
    if (((((struct o0_float *)0xC2B2964)->v)) > u0) {
        (((struct o0_float *)0xC2B2964)->v) = u0;
    }
    if (((((struct o4_float *)0xC2B2964)->v)) > u0) {
        (((struct o4_float *)0xC2B2964)->v) = u0;
    }
    (((struct o10_float *)0xC2B27C0)->v) = ((((struct o0_float *)0xC2B2964)->v));
    (((struct o14_float *)0xC2B27C0)->v) = ((((struct o4_float *)0xC2B2964)->v));
    (((struct o2C_float *)0xC2B27C0)->v) = 1.0f;
    (((struct o28_uint *)0xC2B27C0)->v) = 0x0;
    if (t2 != 0) {
        (((struct o4_float *)0xC2B27C0)->v) = (float)((((struct o3C_int *)0xC2B2964)->v));
        (((struct o8_float *)0xC2B27C0)->v) = (float)((((struct o0_int *)0xC2B29A4)->v));
        (((struct oC_float *)0xC2B27C0)->v) = ((((struct oC_float *)0xC052208)->v));
        (((struct o0_uint *)0xC2B27C0)->v) = (*(int *)(((t2 << 2) + 0xC10CBDC)));
        t3 = ((int (*)(int, float))(FUN_0c07ada0))(0xC2B27C0, u0);
    } else {
        u1 = u0;
    }
    u0 = (((struct o18_float *)0xC052208)->v);
    if ((t2 == 0) && (t0 == 0)) {
    } else {
        if (t2 != 0) {
            u2 = (float)((((struct o3C_int *)0xC2B2964)->v));
            u2 = u2 + u0 * ((((struct o0_float *)0xC2B2964)->v));
            u3 = u2;
        } else {
            u3 = (float)((((struct o3C_int *)0xC2B2964)->v));
        }
        (((struct o4_float *)0xC2B27C0)->v) = u3;
        (((struct o8_float *)0xC2B27C0)->v) = (float)((((struct o0_int *)0xC2B29A4)->v));
        (((struct oC_float *)0xC2B27C0)->v) = ((((struct o1C_float *)0xC052208)->v));
        (((struct o0_uint *)0xC2B27C0)->v) = (*(int *)(((t0 << 2) + 0xC10CBDC)));
        t3 = ((int (*)(int, float))(FUN_0c07ada0))(0xC2B27C0, u1);
    }
    t3 = (((struct o3C_int *)0xC2B2964)->v);
    u1 = (((struct o0_float *)0xC2B2964)->v);
    if (t2 != 0) {
        u2 = (float)t3;
        u2 = u2 + ((((struct o20_float *)0xC052208)->v)) * u1;
        (((struct o4_float *)0xC2B27C0)->v) = u2;
        u3 = u2;
    } else {
        u2 = (float)t3;
        if (t0 != 0) {
            u4 = (float)t3;
            u4 = u4 + u0 * u1;
            u2 = u4;
        }
        (((struct o4_float *)0xC2B27C0)->v) = u2;
        u3 = u2;
    }
    (((struct o8_float *)0xC2B27C0)->v) = (float)((((struct o0_int *)0xC2B29A4)->v));
    (((struct oC_float *)0xC2B27C0)->v) = ((((struct o24_float *)0xC052208)->v));
    (((struct o0_uint *)0xC2B27C0)->v) = (*(int *)(((t1 << 2) + 0xC10CBDC)));
    if ((int)((((struct o38_int *)0xC2B29A4)->v)) > 0) {
        t0 = ((int (*)(int, float, float))(FUN_0c07ada0))(0xC2B27C0, u3, u1);
    } else {
        u0 = u3;
    }
    (((struct o2C_float *)0xC2B27C0)->v) = 1.0f;
    return FUN_0c026ce6();
}
