/* Straight-line functions with calls and guards (batch gen_ct): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oE0_int { char p[0xE0]; int v; };
int FUN_0c05f470(int, int, float, float);
int FUN_0c05f6f8(int, int, int);
int FUN_0c066226(int);
int FUN_0c066c84(int);
int FUN_0c067718(int);
int Init_Adv_Global_Parm(void);
int gdc_PlayStreamSong(int);
int nlInitEvent(void);
int FUN_0c0662a8(int a4);
int FUN_0c01d37a(void);

int FUN_0c0662a8(int a4)
{
    int stk[4];
    int t5;
    register int t15;

    FUN_0c066226(a4);
    FUN_0c067718(a4);
    if (((*(signed char *)((a4 + 0xFE))) & 128) != 0) {
        FUN_0c05f470(a4, ((((struct oE0_int *)(a4))->v)), 0.0f, 15.0f);
        t5 = (((struct oE0_int *)(a4))->v);
        if ((t5 != 0xC90658C) && (t5 != 0xC907F88)) {
        } else {
            FUN_0c05f6f8(a4, 0x0, 0xC10FD3C);
        }
        FUN_0c066c84(a4);
        t15 = (((((struct o80_int *)(a4))->v)) + 0x1);
    } else {
        FUN_0c05f470(a4, ((((struct oE0_int *)(a4))->v)), 0.0f, 15.0f);
        t15 = 0x5;
    }
    (((struct o80_uint *)(a4))->v) = t15;
    (((struct o8_float *)(a4))->v) = (*(float *)0xC13B004);
    return 0x8;
}

int FUN_0c01d37a(void)
{
    register int t0;

    Init_Adv_Global_Parm();
    t0 = ((int (*)(void))(0xC04E6BC))();
    gdc_PlayStreamSong(0x1);
    (((struct o0_uint *)0xC1EC744)->v) = (((((struct o0_int *)0xC1EC744)->v)) + 0x1);
    (((struct o8_uint *)0xC1EC744)->v) = 0x0;
    t0 = nlInitEvent();
    (((struct o8_uint *)0xC1EC744)->v) = 0x0;
    *(unsigned int *)0xC175C80 = 0x0;
    *(unsigned int *)0xC1ECCA4 = 0x0;
    return t0;
}
