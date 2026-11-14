/* Straight-line functions with calls and guards (batch gen_gi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int pdGetPeripheral(int);
int ndPuru2Check(int a4);

int ndPuru2Check(int a4)
{

    register int R1;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    v0_1 = a4;
    *(unsigned int *)0xC2B32C0 = (pdGetPeripheral(v0_1));
    v0_2 = (0xC2B32C0);
    v0_1 = (0xC1EC758);
    v0_0 = (0xC2B32E8);
    if (((unsigned char)(*(signed char *)0xC1EC783) != 2)) goto L_C057A7A;
    v0_2 = *(signed char *)((v0_1 + 0x2C));
    v0_1 = ((unsigned char)v0_2);
    if (((unsigned char)v0_2 != 5)) goto L_C057A9A;
    *(unsigned int *)((v0_0 + 0x0)) = 0x1;
    L_C057A94:;
    return 0x1;
    L_C057A9A:;
    return 0x0;
    L_C057A7A:;
    if (((unsigned char)(*(signed char *)((v0_1 + 0x2C))) != 2)) goto L_C057A9A;
    v0_2 = *(int *)(((*(int *)(((*(int *)((v0_2 + 0x0))) + 0x30))) + 0x0));
    v0_1 = (v0_2);
    if (((v0_2 & 0x100) == 0)) goto L_C057A9A;
    *(unsigned int *)((v0_0 + 0x0)) = 0x0;
    goto L_C057A94;
}
