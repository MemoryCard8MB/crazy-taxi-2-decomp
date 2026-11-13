/* Straight-line functions with calls and guards (batch gen_u): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c07ada0(int, int, int, int, float, float, float, float, float);
int FUN_0c05639c(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8);
int FUN_0c0572ce(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8);

int FUN_0c05639c(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8)
{
    register int t0;
    register int t1;

    if ((int)((((struct o0_int *)0xC2B3110)->v)) > (int)0x58) {
        (((struct o4_uint *)0xC2B3110)->v) = 0x5E;
        (((struct oC_float *)0xC2B3110)->v) = (float)(((((struct o0_int *)0xC2B3164)->v)) + 0xFA);
        (((struct o14_float *)0xC2B3110)->v) = (((((struct o10_float *)0xC2B3164)->v)) + 1.0f);
        (((struct o18_float *)0xC2B3110)->v) = (((((struct o10_float *)0xC2B3164)->v)) + 1.0f);
        (((struct o20_float *)0xC2B3110)->v) = 0.0f;
        (((struct o28_float *)0xC2B3110)->v) = 1.0f;
        (((struct o38_uint *)0xC2B3110)->v) = 0xA;
        (((struct o2C_uint *)0xC2B3110)->v) = 0x0;
        t0 = 0x40;
        for (;;) {
            (((struct o8_float *)0xC2B3110)->v) = (float)t0;
            t1 = FUN_0c07ada0(0xC2B3114, a5, a6, a7, 1.0f, f5, f6, f7, f8);
            t0 = (t0 + 0x11);
            if ((int)t0 >= (int)0x1A5) {
                break;
            }
        }
        t0 = t1;
    }
    return t0;
}

int FUN_0c0572ce(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8)
{
    register int t0;
    register int t1;

    if ((int)((((struct o0_int *)0xC2B3110)->v)) > (int)0x58) {
        (((struct o4_uint *)0xC2B3110)->v) = 0x5E;
        (((struct oC_float *)0xC2B3110)->v) = (float)(((((struct o0_int *)0xC2B3164)->v)) + 0x1BC);
        (((struct o14_float *)0xC2B3110)->v) = (((((struct o10_float *)0xC2B3164)->v)) + 1.0f);
        (((struct o18_float *)0xC2B3110)->v) = (((((struct o10_float *)0xC2B3164)->v)) + 1.0f);
        (((struct o20_float *)0xC2B3110)->v) = 0.0f;
        (((struct o28_float *)0xC2B3110)->v) = 1.0f;
        (((struct o38_uint *)0xC2B3110)->v) = 0xA;
        (((struct o2C_uint *)0xC2B3110)->v) = 0x0;
        t0 = 0x16E;
        for (;;) {
            (((struct o8_float *)0xC2B3110)->v) = (float)t0;
            t1 = FUN_0c07ada0(0xC2B3114, a5, a6, a7, 1.0f, f5, f6, f7, f8);
            t0 = (t0 + 0x11);
            if ((int)t0 >= (int)0x24B) {
                break;
            }
        }
        t0 = t1;
    }
    return t0;
}
