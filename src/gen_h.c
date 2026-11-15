/* Straight-line functions with calls and guards (batch gen_h): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int FUN_0c05872e(int, int);
int FUN_0c058782(int, int, int, int, int);
int lcdSync(int);
int pdGetPeripheral(int);
int FUN_0c0585ca(int a4, int a5);
int FUN_0c040bec(int a4, int a5, int a6, int a7, float f4, float f5);

int FUN_0c0585ca(int a4, int a5)
{
    int t0;

    t0 = (int)((unsigned int)a4 % (unsigned int)0x6);
    if ((t0 != 1) && (t0 != 2)) {
        return 0x0;
    }
    t0 = *(int *)(((*(int *)(((pdGetPeripheral(a4)) + 0x30))) + 0x0));
    if ((t0 & 0x4) == 0) {
        return 0x0;
    }
    if (a5 != 0) {
        *(unsigned int *)0xC2B337C = ((*(int *)0xC2B337C) | 0x4);
    } else {
        *(unsigned int *)0xC2B337C = ((*(int *)0xC2B337C) | 0x2);
    }
    FUN_0c05872e(0x0, a4);
    /* manual: the original passes five arguments (0C058658-0C05866E): the VMU image (0C10D348 with a5 set, else 0C10D284), 0, 0, 1
       and the port on the stack; the generated call through a variadic prototype kept only a4 */
    FUN_0c058782((a5 != 0) ? 0xC10D348 : 0xC10D284, 0x0, 0x0, 0x1, a4);
    return lcdSync(a4);
}

int FUN_0c040bec(int a4, int a5, int a6, int a7, float f4, float f5)
{
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;
    register float u1;

    t1 = *(int *)0xC2AC2F0;
    t2 = t1;
    if ((t1 != 1) && (((int)a4 >= 0) && ((int)a4 < (int)0xB))) {
        t1 = a6;
        t3 = a7;
        if ((int)(*(int *)(((a4 << 2) + 0xC0C0AA8))) > 0) {
            if ((int)((*(int *)0xC1EC83C) - ((((struct oC_int *)0xC2AB7D8)->v))) > (int)0x5A) {
                (((struct o0_uint *)0xC2AB7D8)->v) = 0x0;
            }
            t4 = *(int *)((0xC0C0AA8 + (a4 << 2)));
            t1 = (((struct o10_int *)0xC2AB7D8)->v);
            if (t4 == 1) {
                if ((*(int *)((0xC0C0AA8 + (t1 << 2)))) != 2) {
                    if (t1 != a4) {
                        (((struct o0_uint *)0xC2AB7D8)->v) = (((((struct o0_int *)0xC2AB7D8)->v)) + 0x2);
                    }
                } else {
                    (((struct o0_uint *)0xC2AB7D8)->v) = 0x0;
                }
            } else {
                if ((t4 == 2) && (t2 = *(int *)((0xC0C0AA8 + (t1 << 2))), t2 != 2)) {
                    (((struct o0_uint *)0xC2AB7D8)->v) = 0x0;
                }
            }
            (((struct o10_uint *)0xC2AB7D8)->v) = a4;
            (((struct oC_uint *)0xC2AB7D8)->v) = (*(int *)0xC1EC83C);
            t3 = 0xC2AB7D8;
        }
        t2 = ((int (*)(int, int, int, int))((*(int *)(((a4 << 2) + 0xC0C0A7C)))))(a4, a5, t1, t3);
        u0 = (((struct o0_float *)0xC040D44)->v);
        u1 = (((struct o8_float *)0xC2AB7D8)->v);
        if (u1 > u0) {
            (((struct o8_float *)0xC2AB7D8)->v) = u0;
            t2 = 0xC040D44;
        } else {
            u0 = (((struct o8_float *)0xC040D44)->v);
            if (u0 > u1) {
                (((struct o8_float *)0xC2AB7D8)->v) = u0;
            }
            t2 = 0xC040D4C;
        }
        *(unsigned int *)0xC2A5A18 = (int)((((struct o8_float *)0xC2AB7D8)->v));
    }
    return t2;
}
