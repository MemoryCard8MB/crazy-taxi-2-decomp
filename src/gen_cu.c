/* Straight-line functions with calls and guards (batch gen_cu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o8_float { char p[0x8]; float v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oFF_uchar { char p[0xFF]; unsigned char v; };
int FUN_0c067718(int);
int FUN_0c06689c(int a4);
int FUN_0c066836(int a4);

int FUN_0c06689c(int a4)
{
    register int t3;

    FUN_0c067718(a4);
    (((struct o8_float *)(a4))->v) = (*(float *)0xC13B004);
    (((struct oFF_uchar *)(a4))->v) = ((*(signed char *)(((0xFF + a4) + 0x0))) & 0xF7);
    t3 = *(signed char *)(((0xFF + a4) + 0x0));
    (((struct oFF_uchar *)(a4))->v) = (t3 & 0xFB);
    return (t3 & 0xFB);
}

int FUN_0c066836(int a4)
{
    register int t1;
    register int t2;

    FUN_0c067718(a4);
    t1 = *(signed char *)(((a4 + 0x3F) + 0x0));
    t2 = t1;
    if ((t1 & 16) != 0) {
        (((struct o80_uint *)(a4))->v) = 0x6;
        t2 = 0x80;
    }
    return t2;
}
