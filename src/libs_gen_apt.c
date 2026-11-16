int FUN_0c16a44e(int);
/* Library code: C that behaves like this game's own bytes. */
/* Straight-line functions with calls and guards (batch gen_apt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern int _builtin_tas(char *);
int frame_make(void);
int mpdrv_dpf(int, int, int, int, int);
int mpdrv_v2p(int);
int mpdrv_frame_send(int a4, int a5, int a6, int a7);
struct o10B0_uint { char p[0x10B0]; unsigned int v; };
struct o10B4_int { char p[0x10B4]; int v; };
struct o10B4_uint { char p[0x10B4]; unsigned int v; };
struct o10B8_int { char p[0x10B8]; int v; };
struct o10B8_uint { char p[0x10B8]; unsigned int v; };
struct o10C0_int { char p[0x10C0]; int v; };
struct o10C0_uint { char p[0x10C0]; unsigned int v; };
struct o10D0_int { char p[0x10D0]; int v; };
struct o10F4_int { char p[0x10F4]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oFAC_int { char p[0xFAC]; int v; };
struct oFB0_int { char p[0xFB0]; int v; };
struct oFB0_uint { char p[0xFB0]; unsigned int v; };
struct oFC0_int { char p[0xFC0]; int v; };
struct oFC0_uint { char p[0xFC0]; unsigned int v; };
struct oFCC_uint { char p[0xFCC]; unsigned int v; };
struct oFD8_uint { char p[0xFD8]; unsigned int v; };
struct oFDC_uint { char p[0xFDC]; unsigned int v; };



int mpdrv_frame_send(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;

    t0 = 0xFFFFFFFD;
    if (((((struct oFC0_int *)((*(int *)0xC30817C)))->v)) != 1) {
    } else {
        t1 = 0xFFFFFFFF;
        if (((*(int *)((((((struct o10F4_int *)((*(int *)0xC30817C)))->v)) + 0x18))) & 0x1) != 0) {
        } else {
            if (_builtin_tas((char *)(*(int *)0xC16A484)) == 0) {
                mpdrv_dpf(a4, a5, a6, a7, 0xC171A40);
                t2 = 0xFFFFFFFE;
            } else {
                t3 = *(int *)0xC30817C;
                if (((((struct oFB0_int *)(t3))->v)) != ((((struct oFAC_int *)(t3))->v))) {
                    t3 = *(int *)0xC30817C;
                    (((struct oFB0_uint *)(t3))->v) = ((((struct oFAC_int *)(t3))->v));
                    if (((((struct oFAC_int *)((*(int *)0xC30817C)))->v)) != 0) {
                        (((struct o10C0_uint *)((*(int *)0xC30817C)))->v) = (((int)((int)((*(int *)0xC1713F4) * 0x3E8) / (int)0x14)) << 16);
                    } else {
                        (((struct o10C0_uint *)((*(int *)0xC30817C)))->v) = 0xC3500000;
                    }
                    *(unsigned int *)((((((struct o10F4_int *)((*(int *)0xC30817C)))->v)) + 0x14)) = 0x0;
                    t3 = *(int *)0xC30817C;
                    (((struct o80_uint *)(((((struct o10F4_int *)(t3))->v))))->v) = (((((struct o10C0_int *)(t3))->v)) | ((((struct o10D0_int *)(t3))->v)));
                    *(unsigned int *)((((((struct o10F4_int *)((*(int *)0xC30817C)))->v)) + 0x14)) = 0x1;
                }
                frame_make();
                t3 = *(int *)0xC30817C;
                (((struct o10B0_uint *)(t3))->v) = (*(int *)((((((((struct o10B8_int *)(t3))->v)) << 2) + (0x10A8 + t3)) + 0x0)));
                t3 = *(int *)0xC30817C;
                *(unsigned int *)(((((((struct o10F4_int *)(t3))->v)) + 0x4) + 0x0)) = (FUN_0c16a44e((*(int *)((((((((struct o10B8_int *)(t3))->v)) << 2) + (0x10A8 + t3)) + 0x0)))));
                *(unsigned int *)((((((struct o10F4_int *)((*(int *)0xC30817C)))->v)) + 0x18)) = 0x1;
                (((struct oFD8_uint *)((*(int *)0xC30817C)))->v) = 0x0;
                t3 = *(int *)0xC30817C;
                (((struct o10B8_uint *)(t3))->v) = (((((struct o10B8_int *)(t3))->v)) ^ 0x1);
                t3 = *(int *)0xC30817C;
                (((struct oFCC_uint *)(t3))->v) = (*(int *)((((((((struct o10B8_int *)(t3))->v)) << 2) + (0x10A8 + t3)) + 0x0)));
                t3 = *(int *)0xC30817C;
                t4 = (((struct o10B4_int *)(t3))->v);
                (((struct o10B4_uint *)(t3))->v) = (t4 ^ 0x1);
                t3 = *(int *)0xC30817C;
                (((struct oFDC_uint *)(t3))->v) = 0x0;
                t5 = 0xFDC;
                t6 = (t4 ^ 0x1);
                t4 = t3;
                t3 = ((*(int *)0xC30817C) + 0x28);
                t7 = 0x0;
                for (;;) {
                    if ((int)t7 >= (int)0x18) {
                        break;
                    }
                    t4 = 0xF90;
                    t5 = (*(int *)0xC30817C);
                    t4 = (t4 + t5);
                    t4 = (t4 + t7);
                    t6 = (*(signed char *)((t4 + 0x0)));
                    t7 = (t7 + 0x1);
                    if (t6 != 0) {
                        t5 = (*(signed char *)((t3 + 0x6)));
                        *(unsigned char *)((t3 + 0x7)) = t5;
                        t5 = 0x0;
                        *(unsigned char *)((t3 + 0x6)) = t5;
                        t4 = (*(int *)((t3 + 0x18)));
                        *(unsigned int *)((t3 + 0x1C)) = t4;
                        *(unsigned int *)((t3 + 0x18)) = t5;
                    }
                    t3 = (t3 + 0x2C);
                }
                (((struct oFC0_uint *)((*(int *)0xC30817C)))->v) = 0x0;
                *(unsigned char *)(((*(int *)0xC16A484) + 0x0)) = 0x0;
                t2 = 0x0;
            }
            t1 = t2;
        }
        t0 = t1;
    }
    return t0;
}
