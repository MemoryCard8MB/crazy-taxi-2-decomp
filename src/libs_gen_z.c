/* Library code: C that behaves like this game's own bytes. */
/* Straight-line functions with calls and guards (batch gen_z): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmiFBallocSub(int, int);
int kmytex_ABSalloc(int, int, int, int, int, int);
int kmiMIPallocSub(int, int, int);
typedef struct {
    int w[63];
} Block252;

int kmiSetVideoTimings(int a, int b, int c, int d, Block252 v);
int kmiCopyToFrameBuffer(int, int, int, int);
int vmsfs_c_getstate(int, int, int, int);
int vmsfs_c_setfname(int, int, int);
int vmsfs_c_setfunc(int, int);
int vmsfs_c_setparam(int, int, int, int, int, int, int);
int vmsfs_c_settime(int, int);


void kmLoadRectangleTexturePart(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t5;
    int t6;
    int t7;
    int t8;

    t0 = *(int *)((a4 + 0x18));
    if ((0x4 & t0) == 0) {
        if ((0x1 & t0) == 0) {
            if ((0x8 & t0) == 0) {
                if ((0x20 & t0) == 0) {
                    t1 = *(int *)((a4 + 0xC));
                    t2 = *(int *)((a4 + 0x1C));
                    t3 = ((((unsigned int)((a11 * (a12 << 1)) + (a10 << 1)) >> 2) << 2) + a5);
                    t5 = (a12 << 1);
                    if (a12 == 0) {
                        t3 = a5;
                        t5 = (a6 << 1);
                    }
                    if ((unsigned int)0x0 < (unsigned int)a7) {
                        t6 = 0x0;
                        t7 = t3;
                        t8 = (((a9 * (t1 << 1)) + (a8 << 1)) + t2);
                        do {
                            kmiCopyToFrameBuffer(t8, t7, (a6 << 1), t1);
                            t6 = (t6 + 0x1);
                            t8 = (t8 + (t1 << 1));
                            t7 = (t7 + (((unsigned int)t5 >> 2) << 2));
                        } while ((unsigned int)t6 < (unsigned int)a7);
                    }
                }
            }
        }
    }
}
