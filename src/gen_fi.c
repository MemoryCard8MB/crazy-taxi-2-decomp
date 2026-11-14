/* Straight-line functions with calls and guards (batch gen_fi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o4_float { char p[0x4]; float v; };
int FUN_0c018b1c(int);
int FUN_0c018c8a(float, float);
int FUN_0c05cac6(float);
int camSetTarget(int, int);
int FUN_0c05cad0(float f4);

int FUN_0c05cad0(float f4)
{
    FUN_0c018b1c(0x1);
    camSetTarget(0xC175930, 0x2);
    FUN_0c018c8a(((((struct o4_float *)0xC05CB50)->v)), ((((struct o0_float *)0xC05CB50)->v)));
    return FUN_0c05cac6(f4);
}
