/* scratch */
int FUN_0c02bbbc(void);
int FUN_0c07fdc8(void);
extern int kmiWriteRegister();
int kmfInitializeYUVConverter(int a4, int a5, int a6, int a7, int a8);
int FUN_0c029528(void);

int kmfInitializeYUVConverter(int a4, int a5, int a6, int a7, int a8)
{
    register int t0;
    register int t2;
    register int t4;
    register int t6;

    t0 = 0x0;
    if (a5 == 3) {
        t0 = 0x1000000;
    }
    t2 = (0x10000 | (((((a8 - 1) & 0x3F) << 8) | ((a7 - 1) & 0x3F)) | t0));
    if (a6 == 0) {
        t2 = (((((a8 - 1) & 0x3F) << 8) | ((a7 - 1) & 0x3F)) | t0);
    }
    t4 = ((int (*)(int, int, int, int))(kmiWriteRegister))(0x14C, t2, a6, ((a7 - 1) & 0x3F));
    t6 = ((int (*)(int, int))(kmiWriteRegister))(0x148, (*(int *)((a4 + 0x1C))));
    return 0x0;
}

int FUN_0c029528(void)
{
    register int t0;
    register int t2;
    register int t4;
    register int t3;
    register int t8;
    register int t9;

    t0 = 0xC09DF24;
    t2 = 0xC270F54;
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0xC09DF24 + 68)) < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
    t4 = *(int *)0xC1EC71C;
    if ((t4 != 0) && ((t4 == 1) || (t4 == 2))) {
        *(unsigned int *)0xC270F2C = 0xCB60000;
        FUN_0c07fdc8();
        t8 = 0xC112F58;
    } else {
        *(unsigned int *)0xC270F2C = 0xCB60000;
        FUN_0c07fdc8();
        t8 = 0xC112C58;
    }
    *(unsigned int *)((t9 + 0x0)) = t8;
    return FUN_0c02bbbc();
}

