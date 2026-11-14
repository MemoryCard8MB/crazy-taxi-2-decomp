/* Straight-line functions with calls and guards (batch gen_dn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmiWriteRegister(int, int);
int kmSetCullingRegister(float f4);

int kmSetCullingRegister(float f4)
{
    int stk[1];

    *(float *)(((int)stk + 0)) = f4;
    kmiWriteRegister(0x78, ((*(int *)((((int)stk + 0) + 0x0))) & 0x7FFFFFFF));
    return 0x0;
}
