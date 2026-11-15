/* Straight-line functions with calls and guards (batch gen_ik): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01ec7a(int);
int Voice_ShutUp(int a4);

/* manual: one argument: the original reads only r4; r5-r7 reached FUN_0c01ec7a -> FUN_0c14e8e4 as leftovers neither reads */
int Voice_ShutUp(int a4)
{
    register int t2;

    if ((*(int *)(((((a4 << 2) << 2) + 0xC2B6770) + 0x0))) != 0) {
        t2 = FUN_0c01ec7a(a4);
        *(unsigned int *)(((((a4 << 2) << 2) + 0xC2B6770) + 0x0)) = 0x0;
        *(unsigned int *)(((((a4 << 2) << 2) + 0xC2B6770) + 0xC)) = 0x0;
    }
    return t2;
}
