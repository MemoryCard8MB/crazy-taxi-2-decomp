/* Hand-written C (step 6). */

void FUN_0c01b026(int, int, int, int);

/* manual: fills the 10 MB from 0C310000 with FFFFFFFF and goes on into FUN_0c01b026 (a jump, it does not come back here).
   The arguments are what the fill leaves in r4-r6 (count 0, end address, the fill word) and the caller's r7: FUN_0c01b026's C
   passes its registers on, so the check compares them. */
void FUN_0c01b1e8(int a4, int a5, int a6, int a7)
{
    int n = 0x280000;
    int *p = (int *)0xC310000;

    do {
        *p++ = -1;
    } while (--n);
    FUN_0c01b026(n, (int)p, -1, a7);
}
