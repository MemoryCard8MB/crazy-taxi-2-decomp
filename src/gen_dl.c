/* Straight-line functions with calls and guards (batch gen_dl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uint { unsigned int v; };
struct o20_int { char p[0x20]; int v; };
int kmiDiscardRenderPipeline(void);
int kmiResetBoard(void);
int kmiWriteRegister(int, int);
int kmStopDisplayFrameBuffer(void);

int kmStopDisplayFrameBuffer(void)
{
    register int t10;

    kmiWriteRegister(0x44, (((((struct o20_int *)0xC300B78)->v)) & 0xFFFFFFFE));
    kmiWriteRegister(0xE8, ((*(int *)0xC300BD4) | 0x8));
    kmiDiscardRenderPipeline();
    kmiResetBoard();
    kmiWriteRegister(0x44, (((((struct o20_int *)0xC300B78)->v)) & 0xFFFFFFFE));
    kmiWriteRegister(0xE8, ((*(int *)0xC300BD4) | 0x8));
    t10 = *(int *)0xC300C40;
    for (;;) {
        if (t10 != (*(int *)0xC300C40)) {
            break;
        }
    }
    (((struct o0_uint *)0xC300B78)->v) = 0x1;
    return 0x0;
}
