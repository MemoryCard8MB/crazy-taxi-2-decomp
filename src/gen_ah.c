/* Straight-line functions with calls and guards (batch gen_ah): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o4_int { char p[0x4]; int v; };
int vsprintf(int, int, int);
int FUN_0c16ada2(int fmt, ...);
int FUN_0c16bab0(int fmt, ...);

/* manual: printf-style error report of the MWRNA/ADX code: formats into 0xC3086E0 and hands the text to the hook at 0xC174408
   (with the word at 0xC17440C). A variadic function: SHC passes every argument of the call on the stack, the format first. */
int FUN_0c16ada2(int fmt, ...)
{
    int r;
    int (*hook)(int, int);

    r = vsprintf(0xC3086E0, fmt, (int)(&fmt + 1));
    hook = *(int (**)(int, int))0xC174408;
    if (hook != 0) {
        r = hook(*(int *)0xC17440C, 0xC3086E0);
    }
    return r;
}

/* manual: the same report for the stream code: text at 0xC309360, hook at 0xC174488 (with the word at 0xC17448C) */
int FUN_0c16bab0(int fmt, ...)
{
    int r;
    int (*hook)(int, int);

    r = vsprintf(0xC309360, fmt, (int)(&fmt + 1));
    hook = *(int (**)(int, int))0xC174488;
    if (hook != 0) {
        r = hook(*(int *)0xC17448C, 0xC309360);
    }
    return r;
}
