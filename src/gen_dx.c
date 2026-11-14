/* Straight-line functions with calls and guards (batch gen_dx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uint { unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
int nlExecuteEvent(int, int, int, int);
int FUN_0c01d368(int a4, int a5, int a6, int a7);

int FUN_0c01d368(int a4, int a5, int a6, int a7)
{
    (((struct o8_uint *)0xC1EC744)->v) = (((((struct o8_int *)0xC1EC744)->v)) + 0x1);
    (((struct o0_uint *)0xC1EC744)->v) = 0x2;
    return nlExecuteEvent(0xC1EC74C, a5, a6, a7);
}
