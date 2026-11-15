/* Straight-line functions with calls and guards (batch gen_ie): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uint { unsigned int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int FUN_0c052eca(void);
int FUN_0c058f64(int, int, int, int);
int FUN_0c06f550(int, int, int, float);
int FUN_0c05305e(int a4, int a5, float f4);

int FUN_0c05305e(int a4, int a5, float f4)
{
    register int t8;

    FUN_0c06f550(0xFFFFC500, 0xFFFFC500, 0xFFFFC500, f4);
    FUN_0c052eca();
    (((struct o8_uint *)0xC2B2C4C)->v) = a5;
    *(unsigned short *)0xC2B2B58 = ((*(short *)0xC2B2B58) | 0x1);
    if (a4 == 0) {
        t8 = (FUN_0c058f64(0xC11D02C, 0x0, 0x78, 0x0));
    } else {
        t8 = a4;
        if (a4 == -1) {
            (((struct o0_uint *)0xC2B2C4C)->v) = 0x1;
            (((struct o4_uint *)0xC2B2C4C)->v) = 0x0;
            t8 = 0x0;
        }
    }
    (((struct oC_uint *)0xC2B2C4C)->v) = a4;
    return t8;
}
