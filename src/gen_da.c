/* Straight-line functions with calls and guards (batch gen_da): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o100_int { char p[0x100]; int v; };
struct o104_int { char p[0x104]; int v; };
struct o108_int { char p[0x108]; int v; };
struct oA8_int { char p[0xA8]; int v; };
struct oAC_int { char p[0xAC]; int v; };
struct oF0_int { char p[0xF0]; int v; };
struct oF0_uint { char p[0xF0]; unsigned int v; };
struct oF4_int { char p[0xF4]; int v; };
struct oF8_int { char p[0xF8]; int v; };
struct oFC_int { char p[0xFC]; int v; };
int send_message_in_current_mode(void);
int syIntAdrChk_dumpline(int, int, int);
int syIntAdrChk_finish(void);
int syIntAdrChk_getchar(void);
int syIntAdrChk_init(void);
int syIntAdrChk_printh(int);
int syIntChkDump(int a4, int a5);

int syIntChkDump(int a4, int a5)
{
    int stk[3];
    register int t0;
    register int t16;
    register int t56;
    register int t57;
    register int t76;

    *(unsigned short *)(((int)stk + 0)) = a4;
    t0 = *(short *)(((int)stk + 0));
    if (((unsigned short)t0 != 0x300) && (((unsigned short)t0 != 0x340) && (((unsigned short)t0 != 0x380) && ((unsigned short)t0 != 0x3C0)))) {
        return (unsigned short)t0;
    }
    *(unsigned int *)0xC30BA60 = a5;
    *(unsigned int *)(((int)stk + 8)) = (syIntAdrChk_init());
    send_message_in_current_mode();
    syIntAdrChk_dumpline(0xC172DC0, 0xA, 0x8);
    syIntAdrChk_dumpline(0xC172DCC, 0x12, 0x8);
    syIntAdrChk_dumpline(0xC172DD8, 0x1A, 0x8);
    syIntAdrChk_dumpline(0xC172DE4, 0x22, 0x8);
    send_message_in_current_mode();
    syIntAdrChk_printh(((((struct oA8_int *)((*(int *)0xC30BA60)))->v)));
    send_message_in_current_mode();
    syIntAdrChk_printh(((((struct oAC_int *)((*(int *)0xC30BA60)))->v)));
    syIntAdrChk_dumpline(0xC172E04, 0x2D, 0x8);
    t16 = *(int *)0xC30BA60;
    *(unsigned int *)(((int)stk + 4)) = ((((struct oF0_int *)(t16))->v));
    (((struct oF0_uint *)(t16))->v) = (*(int *)(((*(int *)0xC30BA60) + 0x4)));
    syIntAdrChk_dumpline(0xC172E14, 0x35, 0x8);
    (((struct oF0_uint *)((*(int *)0xC30BA60)))->v) = (*(int *)(((int)stk + 4)));
    syIntAdrChk_dumpline(0xC172E20, 0x2, 0x8);
    send_message_in_current_mode();
    syIntAdrChk_printh(((((struct oF0_int *)((*(int *)0xC30BA60)))->v)));
    send_message_in_current_mode();
    syIntAdrChk_printh(((((struct oF4_int *)((*(int *)0xC30BA60)))->v)));
    send_message_in_current_mode();
    syIntAdrChk_printh(((((struct oF8_int *)((*(int *)0xC30BA60)))->v)));
    send_message_in_current_mode();
    syIntAdrChk_printh(((((struct oFC_int *)((*(int *)0xC30BA60)))->v)));
    send_message_in_current_mode();
    syIntAdrChk_printh((*(int *)(((*(int *)0xC30BA60) + 0x0))));
    send_message_in_current_mode();
    syIntAdrChk_printh(((((struct o100_int *)((*(int *)0xC30BA60)))->v)));
    send_message_in_current_mode();
    syIntAdrChk_printh(((((struct o104_int *)((*(int *)0xC30BA60)))->v)));
    send_message_in_current_mode();
    syIntAdrChk_printh(((((struct o108_int *)((*(int *)0xC30BA60)))->v)));
    t56 = 0x0;
    for (;;) {
        t57 = ((~(((~t56) + 0x1) & 0x3)) + 0x1);
        if ((int)t56 >= 0) {
            t57 = (t56 & 0x3);
        }
        if (t57 == 0) {
            send_message_in_current_mode();
        }
        syIntAdrChk_printh((*(int *)((((t56 << 2) + 0xC172C88) + 0x0))));
        send_message_in_current_mode();
        syIntAdrChk_printh((*(int *)(((*(int *)((((t56 << 2) + 0xC172C88) + 0x0))) + 0x0))));
        send_message_in_current_mode();
        t56 = (t56 + 0x1);
        if ((int)t56 >= (int)0x45) {
            break;
        }
    }
    send_message_in_current_mode();
    *(volatile int *)(((int)stk + 8));
    
    send_message_in_current_mode();
    for (;;) {
        t76 = syIntAdrChk_getchar();
        if ((signed char)t76 == 13) {
            break;
        }
    }
    *(unsigned int *)0xFF000024 = (unsigned short)(*(short *)(((int)stk + 0)));
    return syIntAdrChk_finish();
}
