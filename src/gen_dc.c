/* Straight-line functions with calls and guards (batch gen_dc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int thunk_kmSetFogTable_0c071a70(void);
int nlFogTableOff(void);

int nlFogTableOff(void)
{
    int stk[128];
    register int t0;

    t0 = ((int)stk + 0);
    for (;;) {
        *(float *)((t0 + 0x0)) = 0.0f;
        t0 = (t0 + 0x4);
        if ((unsigned int)t0 >= (unsigned int)(0x200 + ((int)stk + 0))) {
            break;
        }
    }
    return (thunk_kmSetFogTable_0c071a70());
}
