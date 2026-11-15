/* Straight-line functions with calls and guards (batch gen_hx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o24_float { char p[0x24]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
int FUN_0c029b12(int, float);
int FUN_0c05f434(void);
int FUN_0c05f6fe(int);
int FUN_0c066cc6(int, int);
int FUN_0c067494(int, int);
int nlGetMatrix33on44(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAY(int);
int FUN_0c0666c0(int a4, int a5);

int FUN_0c0666c0(int a4, int a5)
{

    register int R1;
    register int R2;
    register int R3;
    register int R10;
    register int R11;
    register int R12;
    register float F2;
    register float F4;
    register float F5;
    register float F6;
    register float F7;
    register float F9;
    register float F11;
    register float F13;
    register float F14;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register float w0_0;
    register float w0_1;
    v0_1 = a4;
    v0_0 = a5;
    FUN_0c067494(v0_1, 0x1);
    v0_0 = (v0_1);
    if (((*(int *)((v0_1 + 0x0))) != 0xC9263C8)) goto L_C066738;
    w0_0 = (69.0f);
    if ((69.0f > ((((struct o4_float *)(v0_0))->v)))) goto L_C066738;
    if ((!((((((struct o8_float *)(v0_0))->v)) + w0_0) > ((((struct o4_float *)(v0_0))->v))))) goto L_C066738;
    FUN_0c066cc6(v0_0, 0xC10FEB8);
    L_C066760:;
    v0_1 = *(signed char *)(((v0_0 + 0x3F) + 0x0));
    v0_2 = (v0_1);
    if (((v0_1 & 16) == 0)) goto L_C0667C6;
    v0_1 = FUN_0c05f434();
    nlPushMatrix(v0_1);
    nlRotateAY(0x8000);
    nlGetMatrix33on44((v0_0 + 0x40));
    nlPopMatrix(0x1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x70)) = *(struct mv3 *)(((FUN_0c05f434()) + 0x30)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x70)) = *(struct mv3 *)((FUN_0c029b12((v0_0 + 0x70), ((((struct o24_float *)0xC066864)->v))))); }
    FUN_0c05f6fe(v0_0);
    (((struct o80_uint *)(v0_0))->v) = (((((struct o80_int *)(v0_0))->v)) + 0x1);
    v0_2 = (0x80);
    L_C0667C6:;
    return v0_2;
    L_C066738:;
    if (((*(int *)((v0_0 + 0x0))) != 0xC927978)) goto L_C066760;
    w0_1 = (((struct o0_float *)0xC066864)->v);
    w0_0 = (w0_1);
    if ((w0_1 > ((((struct o4_float *)(v0_0))->v)))) goto L_C066760;
    if ((!((((((struct o8_float *)(v0_0))->v)) + w0_0) > ((((struct o4_float *)(v0_0))->v))))) goto L_C066760;
    FUN_0c066cc6(v0_0, 0xC10FED0);
    goto L_C066760;
}
