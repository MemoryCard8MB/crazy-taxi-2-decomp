/* Straight-line functions with calls and guards (batch gen_dk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o34_int { char p[0x34]; int v; };
struct o3C_int { char p[0x3C]; int v; };
struct oC_int { char p[0xC]; int v; };
int kmiWriteRegister(int, int);
int kmSetHSyncLine(int a4);

int kmSetHSyncLine(int a4)
{
    register int t0;
    register int t1;
    register int t26;
    register int t27;
    register int t29;
    int t31;
    register int t33;
    register int t3;
    register int t10;

    t0 = (((struct o34_int *)0xC3008F0)->v);
    t1 = (((struct o3C_int *)0xC3008F0)->v);
    if (((((((struct o0_int *)0xC3008F0)->v)) & 0x1) != 1) && ((t3 = (((struct o0_int *)0xC3008F0)->v), (t3 & 44) != 0) && (0x1 != 0))) {
        t10 = ((unsigned int)((unsigned int)((((struct oC_int *)0xC300BB4)->v)) >> 16) >> 1);
    } else {
        t10 = ((unsigned int)((((struct oC_int *)0xC300BB4)->v)) >> 16);
    }
    t26 = (a4 + (t1 + t0));
    if (((((((struct o0_int *)0xC3008F0)->v)) & 0x1) != 1) || (0x1 == 0)) {
        t26 = (a4 + (t1 + t0));
        if ((((((struct o0_int *)0xC3008F0)->v)) & 32) != 0) {
            t26 = ((((int)((unsigned int)((int)((unsigned int)a4 + (unsigned int)0x0)) + ((((int)0x0 > (int)a4)) ? 1u : 0u))) >> 1) + (t1 + t0));
        }
    }
    t27 = t26;
    if ((int)t26 < 0) {
        t27 = (t26 + t10);
    }
    t29 = t27;
    if ((int)t27 > (int)t10) {
        t29 = t10;
    }
    t31 = t29;
    if ((int)t29 < 0) {
        t31 = 0x0;
    }
    t33 = (((struct o0_int *)0xC300BB4)->v);
    (((struct o0_uint *)0xC300BB4)->v) = ((t33 & 0x3FF0000) | (0x3FF & t31));
    kmiWriteRegister(0xC8, ((t33 & 0x3FF0000) | (0x3FF & t31)));
    return 0x0;
}
