/* Straight-line functions with calls and guards (batch gen_bl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_uint { unsigned int v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o11_uchar { char p[0x11]; unsigned char v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct oC_uchar { char p[0xC]; unsigned char v; };
struct oD_uchar { char p[0xD]; unsigned char v; };
struct oE_uchar { char p[0xE]; unsigned char v; };
struct oE_ushort { char p[0xE]; unsigned short v; };
struct oF_uchar { char p[0xF]; unsigned char v; };
int FUN_0c029574(int);
int FUN_0c04b180(int);
int strlen(int);
int strncmp(int, int, int);
int FUN_0c04906c(int a4, int a5);
int FUN_0c0233aa(void);

int FUN_0c04906c(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t10;
    register int t2;
    register int t5;

    t0 = strlen(a4);
    t1 = strlen(a5);
    t10 = 0x0;
    if ((unsigned int)((t1 + a4) - 1) < (unsigned int)(a4 + t0)) {
        t2 = ((t1 + a4) - 1);
        for (;;) {
            if ((*(signed char *)((t2 + 0x0))) == (*(signed char *)((((t1 - 1) + a5) + 0x0)))) {
                t5 = strncmp(((t2 - t1) + 0x1), a5, t1);
                if (t5 == 0) {
                    break;
                }
                t2 = (t2 + (*(int *)((0xC2ADA90 + ((*(signed char *)((t2 + 0x0))) << 2)))));
                if ((unsigned int)t2 >= (unsigned int)(a4 + t0)) {
                    return 0x0;
                }
                continue;
            }
            t2 = (t2 + (*(int *)((0xC2ADA90 + ((*(signed char *)((t2 + 0x0))) << 2)))));
            if ((unsigned int)t2 >= (unsigned int)(a4 + t0)) {
                return 0x0;
            }
        }
        t10 = 0x1;
    }
    return t10;
}

int FUN_0c0233aa(void)
{
    (((struct o0_uint *)0xC270924)->v) = 0x0;
    (((struct o14_uint *)0xC270924)->v) = 0x1;
    (((struct o0_uint *)0xC2709A8)->v) = 0x0;
    (((struct o4_uint *)0xC2709A8)->v) = 0x0;
    (((struct o0_float *)0xC175930)->v) = 0.0f;
    (((struct o4_float *)0xC175930)->v) = 0.0f;
    (((struct o8_float *)0xC175930)->v) = 400.0f;
    (((struct oC_uchar *)0xC175930)->v) = (*(signed char *)0xC097434);
    (((struct oD_uchar *)0xC175930)->v) = (*(signed char *)0xC097435);
    (((struct oE_uchar *)0xC175930)->v) = (*(signed char *)0xC097436);
    (((struct oF_uchar *)0xC175930)->v) = (*(signed char *)0xC097437);
    (((struct o10_uchar *)0xC175930)->v) = (*(signed char *)0xC097438);
    (((struct o11_uchar *)0xC175930)->v) = (*(signed char *)0xC097439);
    (((struct oE_ushort *)0xC175930)->v) = 0x8000;
    FUN_0c04b180(0x7);
    return FUN_0c029574(0x7);
}
