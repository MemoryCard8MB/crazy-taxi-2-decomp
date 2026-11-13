/* Straight-line functions with calls and guards (batch gen_bo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o100_float { char p[0x100]; float v; };
struct o104_float { char p[0x104]; float v; };
struct o108_uchar { char p[0x108]; unsigned char v; };
struct o10B4_int { char p[0x10B4]; int v; };
struct o10C4_int { char p[0x10C4]; int v; };
struct o10CC_int { char p[0x10CC]; int v; };
struct o110_uint { char p[0x110]; unsigned int v; };
struct o114_uint { char p[0x114]; unsigned int v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o11C_uint { char p[0x11C]; unsigned int v; };
struct o120_uint { char p[0x120]; unsigned int v; };
struct o124_uint { char p[0x124]; unsigned int v; };
struct o130_float { char p[0x130]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o14_short { char p[0x14]; short v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o14_ushort { char p[0x14]; unsigned short v; };
struct o16_short { char p[0x16]; short v; };
struct o16_ushort { char p[0x16]; unsigned short v; };
struct o16C_float { char p[0x16C]; float v; };
struct o170_float { char p[0x170]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o18_short { char p[0x18]; short v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o18_ushort { char p[0x18]; unsigned short v; };
struct o1A_short { char p[0x1A]; short v; };
struct o1A_ushort { char p[0x1A]; unsigned short v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o2_short { char p[0x2]; short v; };
struct o20_float { char p[0x20]; float v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o28_int { char p[0x28]; int v; };
struct o28_short { char p[0x28]; short v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_int { char p[0x2C]; int v; };
struct o2C_short { char p[0x2C]; short v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o30_float { char p[0x30]; float v; };
struct o30_int { char p[0x30]; int v; };
struct o34_float { char p[0x34]; float v; };
struct o34_int { char p[0x34]; int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o38_float { char p[0x38]; float v; };
struct o38_int { char p[0x38]; int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_short { char p[0x4]; short v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_float { char p[0x44]; float v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o48_float { char p[0x48]; float v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o58_int { char p[0x58]; int v; };
struct o70_int { char p[0x70]; int v; };
struct o78_int { char p[0x78]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o8_ushort { char p[0x8]; unsigned short v; };
struct o80_int { char p[0x80]; int v; };
struct o80_short { char p[0x80]; short v; };
struct o82_short { char p[0x82]; short v; };
struct o82_ushort { char p[0x82]; unsigned short v; };
struct o84_uint { char p[0x84]; unsigned int v; };
struct o88_short { char p[0x88]; short v; };
struct o88_uint { char p[0x88]; unsigned int v; };
struct o8A_short { char p[0x8A]; short v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8C_short { char p[0x8C]; short v; };
struct o90_float { char p[0x90]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o9C_int { char p[0x9C]; int v; };
struct oA4_uchar { char p[0xA4]; unsigned char v; };
struct oA6_ushort { char p[0xA6]; unsigned short v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
struct oB0_float { char p[0xB0]; float v; };
struct oB0_short { char p[0xB0]; short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB4_short { char p[0xB4]; short v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_uint { char p[0xBC]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oC0_uint { char p[0xC0]; unsigned int v; };
struct oC4_float { char p[0xC4]; float v; };
struct oC8_float { char p[0xC8]; float v; };
struct oCC_float { char p[0xCC]; float v; };
struct oD0_float { char p[0xD0]; float v; };
struct oD4_int { char p[0xD4]; int v; };
struct oDC_uint { char p[0xDC]; unsigned int v; };
struct oE0_float { char p[0xE0]; float v; };
struct oE8_float { char p[0xE8]; float v; };
struct oF0_float { char p[0xF0]; float v; };
struct oF8_float { char p[0xF8]; float v; };
struct oFC_float { char p[0xFC]; float v; };
struct oFCC_int { char p[0xFCC]; int v; };
struct oFCC_uint { char p[0xFCC]; unsigned int v; };
struct oFD8_int { char p[0xFD8]; int v; };
struct oFD8_uint { char p[0xFD8]; unsigned int v; };
struct oFDC_int { char p[0xFDC]; int v; };
struct oFDC_uint { char p[0xFDC]; unsigned int v; };
int FUN_0c0148f4(void);
int FUN_0c0164fc(void);
int FUN_0c016cca(int);
int FUN_0c018df2(void);
int FUN_0c026c02(void);
int FUN_0c026ce6(void);
int FUN_0c026e8a(void);
int FUN_0c027f28(int);
int FUN_0c027fdc(float);
int FUN_0c02803a(int, int, int, int);
int FUN_0c029b12(int, float);
int FUN_0c02a798(void);
int FUN_0c02d37c(void);
int FUN_0c02fe92(void);
int FUN_0c030b6c(int);
int FUN_0c03346e(int, int, int, int, float, float, float);
int FUN_0c033578(int, int, int, float, float, float);
int FUN_0c0336c8(int, int, float, float, float, float);
int FUN_0c03fbd8(int, int);
int FUN_0c0401d8(int);
int FUN_0c04027a(int, int, float);
int FUN_0c040bec(int, int);
int FUN_0c0423e6(int);
int FUN_0c044940(int, int);
int FUN_0c044964(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c046466(void);
int FUN_0c0464de(int);
int FUN_0c0464f0(int, int, int, int, int);
int FUN_0c0469e2(int, int, int, int, int);
int FUN_0c046fde(int, int, int);
int FUN_0c0476dc(int);
int FUN_0c047aa4(void);
int FUN_0c0494a4(void);
int FUN_0c04d5fa(void);
int FUN_0c05074c(int);
int FUN_0c050d20(void);
int FUN_0c05163e(int, int, int, int, int, int, int, int, int);
int FUN_0c051e22(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0521dc(int, int, int, int, int, int, int);
int FUN_0c0525d8(int, int, int, int, int, int);
int FUN_0c05268c(int, int, int, int, int, int);
int FUN_0c052722(int, int, int, int, int, int);
int FUN_0c052866(int, int);
int FUN_0c052ba6(void);
int FUN_0c052c00(int, int);
int FUN_0c056d8e(void);
int FUN_0c058ca6(int, int);
int FUN_0c059298(void);
int FUN_0c05b3fc(void);
int FUN_0c05b410(void);
float FUN_0c05b422(int, float);
int FUN_0c05d156(int, int, int, float);
int FUN_0c05d1bc(int, int, int, int);
int FUN_0c05f1b6(int, int, float);
int FUN_0c05f6d4(int, float);
int FUN_0c060384(void);
int FUN_0c06b3a6(void);
int FUN_0c070430(int);
int FUN_0c072230(int, int);
int FUN_0c072ff0(void);
int FUN_0c073360(void);
int FUN_0c0739a0(int);
int FUN_0c073a30(float, float, float);
int FUN_0c073a60(int);
int FUN_0c073ab0(void);
int FUN_0c074f20(float);
int FUN_0c075ba0(void);
int FUN_0c076230(float, float, float);
extern int FUN_0c07ada0();
int FUN_0c07fdc8(void);
int FUN_0c07ff00(void);
int FUN_0c08f134(int, int);
int FUN_0c08f9c4(int, int);
int FUN_0c08fd60(int, int);
int FUN_0c16a44e(int);
int GetRotVec(int);
extern void _builtin_set_imask(int);
int buIsFormat(int);
int hudDrawJudgement2(int, int);
int kmInitDevice(int);
int kmSetCullingRegister(float);
int kmSetDisplayMode(int, int, int, int);
int kmSetPALEXTCallback(int);
int kmSetWaitVsyncCount(int);
int kmiCreateRegionArray(int, int, int, int, int, int);
int mpdrv_insertnop(int);
int nlArcTan2(float, float);
int nlExecuteEvent(void);
int nlGetMatrix(int);
float nlLength(int, int);
int nlObjPut(int);
int nlObjPutUseViewMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlSetWindowSize(float, float, float, float);
int nlSysInitStripContextBG(int);
int nlSysInitStripContextVtx(int);
int nl_system_config_init(int);
int pfSize(float, float);
int pfTextPut(int, int, int);
int sys_init(void);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
int FUN_0c01d7b0(void);
int FUN_0c056e00(void);
void FUN_0c06f610(int a4, int a5, int a6);
int FUN_0c03ff4a(int a4);
int FUN_0c0345ec(int a4, int a5, int a6, float f4, float f5, float f6);
int kmiStartNextRender(void);
int FUN_0c0438c0(int a4);
int vmsfs_findfirst_ex(int a4, int a5, int a6);
int mpdrv_setcmd_force(int a4, int a5, int a6, int a7, int a8, int a9);
int FUN_0c057374(void);
int FUN_0c050104(void);
int FUN_0c05f4c8(int a4, int a5, int a6, int a7, float f4);
int FUN_0c0106f4(int a4);
int FUN_0c067f60(int a4);

int FUN_0c01d7b0(void)
{
    int stk[4];
    register int t4;
    register int t6;
    register int t34;
    register int t54;
    register int t66;

    FUN_0c026c02();
    FUN_0c026ce6();
    FUN_0c018df2();
    FUN_0c016cca(0x0);
    t4 = FUN_0c0476dc(0x0);
    if (t4 != 4) {
        FUN_0c0148f4();
        t6 = FUN_0c047aa4();
        if (t6 == 0) {
            FUN_0c0164fc();
        }
        FUN_0c02fe92();
        FUN_0c02d37c();
        FUN_0c060384();
        FUN_0c06b3a6();
    } else {
        FUN_0c073360();
        FUN_0c073a60(0xC175930);
        nlRotateAY((unsigned short)((((struct o2_short *)0xC17593C)->v)));
        nlRotateAX((unsigned short)((((struct o0_short *)0xC17593C)->v)));
        nlRotateAZ((unsigned short)((((struct o4_short *)0xC17593C)->v)));
        nlPushMatrix(0x0);
        nlRotateAX((unsigned short)((((struct o28_short *)0xC17593C)->v)));
        nlRotateAZ((unsigned short)((((struct o2C_short *)0xC17593C)->v)));
        FUN_0c073a30(0.0f, -2.5f, 0.0f);
        nlGetMatrix(0xC17596C);
        nlObjPutUseViewMatrix((*(int *)(((((*(int *)0xC175C80) & 0x7) << 2) + 0xC11D098))));
        nlPopMatrix(0x1);
        nlPopMatrix(0x1);
        *(unsigned int *)(((int)stk + 0)) = 0x12C;
        t34 = 0xC118760;
        for (;;) {
            FUN_0c07ff00();
            *(float *)(((int)stk + 8)) = ((((struct o18_float *)((FUN_0c029b12((((int)stk + 0) + 0x4), 0.0f))))->v));
            nlPushMatrix(0x0);
            FUN_0c073a60((((int)stk + 0) + 0x4));
            nlRotateAY((unsigned short)(*(short *)0xC177D52));
            nlObjPutUseViewMatrix(0xC5101A0);
            nlPopMatrix(0x1);
            *(volatile signed char *)((t34 + 0xD));
            FUN_0c07ff00();
            *(float *)(((int)stk + 8)) = ((((struct o18_float *)((FUN_0c029b12((((int)stk + 0) + 0x4), 0.0f))))->v));
            nlPushMatrix(0x0);
            FUN_0c073a60((((int)stk + 0) + 0x4));
            nlRotateAY((unsigned short)(*(short *)0xC177D52));
            nlObjPutUseViewMatrix(0xC510298);
            nlPopMatrix(0x1);
            t54 = *(int *)(((int)stk + 0));
            t34 = (t34 + 0x14);
            *(unsigned int *)(((int)stk + 0)) = (t54 - 1);
            if ((t54 - 1) == 0) {
                break;
            }
        }
    }
    FUN_0c0423e6(0x1);
    t66 = FUN_0c0476dc(0x0);
    if (t66 != 4) {
        FUN_0c03ff4a(0x1);
        FUN_0c04d5fa();
        nlExecuteEvent();
        FUN_0c02a798();
    }
    FUN_0c0494a4();
    FUN_0c059298();
    FUN_0c026e8a();
    return (FUN_0c0464f0(0x1, 0x0, 0x0, 0x0, *(int *)((int)stk + 0)));
}

int FUN_0c056e00(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register float u0;
    register float u1;
    register float u2;

    FUN_0c076230(0.75f, 0.0f, 0.0f);
    t0 = 0x0;
    for (;;) {
        t1 = (((struct o0_int *)0xC2B3280)->v);
        if ((int)t0 < (int)0x8) {
            t2 = t0;
            t2 = (t2 << 2);
            t2 = (t2 << 1);
            t3 = t0;
            t2 = (t2 - t3);
            if ((int)t1 <= (int)t2) {
                t4 = t3;
                t5 = t2;
            } else {
                t6 = t2;
                u1 = u0;
                if ((int)t1 < (int)0x38) {
                    t2 = 0xC07FC48;
                    t7 = 0xC07FC48;
                    if (((int)((int)t1 % (int)0x7)) == 0) {
                        t2 = 0xC058CA6;
                        FUN_0c058ca6(0x5A9, 0x0);
                        t3 = ((((struct oC_int *)0xC2B3280)->v));
                        t3 = (t3 + 0x1);
                        t2 = 0xC2B3170;
                        (((struct oC_uint *)0xC2B3280)->v) = t3;
                        t3 = 0xC2B316C;
                        *(unsigned int *)((t2 + 0x0)) = 0x1;
                        *(unsigned short *)((t3 + 0x0)) = 0x0;
                        (((struct o4_float *)0xC2B3164)->v) = 0.5f;
                        (((struct o10_float *)0xC2B3164)->v) = 0.0f;
                        t7 = t2;
                    } else {
                        u2 = u0;
                    }
                    t6 = t7;
                    u1 = u2;
                }
                u0 = u1;
                t2 = t6;
                if ((int)t0 < (int)0x5) {
                    t2 = (*(int *)((0xC132420 + (t0 << 2))));
                    t3 = 0x2;
                    (((struct o0_uint *)0xC2B3114)->v) = t2;
                    if ((int)t0 > (int)t3) {
                        t2 = (t0 - 2);
                        t2 = (t2 << 2);
                        t6 = (((((t0 - 2) << 2) << 2) << 1) - t2);
                    } else {
                        t6 = ((((t0 - 2) << 2) << 2) << 1);
                    }
                    u0 = (float)((t6 + (t0 << 1)) + 0x9C);
                    (((struct o4_float *)0xC2B3114)->v) = u0;
                    (((struct o34_uint *)0xC2B3114)->v) = 0x200A;
                    t2 = ((((struct o0_int *)0xC2B3164)->v));
                    t2 = (t2 + 0x18C);
                    u0 = (float)t2;
                    (((struct o8_float *)0xC2B3114)->v) = u0;
                    (((struct oC_float *)0xC2B3114)->v) = 0.150000006f;
                    u0 = ((((struct o10_float *)0xC2B3164)->v));
                    u0 = (u0 + 1.0f);
                    (((struct o10_float *)0xC2B3114)->v) = u0;
                    u0 = ((((struct o10_float *)0xC2B3164)->v));
                    u0 = (u0 + 1.0f);
                    (((struct o14_float *)0xC2B3114)->v) = u0;
                    (((struct o1C_float *)0xC2B3114)->v) = 0.0f;
                    t6 = 0x24;
                    t7 = 0x18C;
                    t8 = (t0 << 1);
                    u1 = 0.150000006f;
                } else {
                    t2 = t0;
                    (((struct o34_uint *)0xC2B3114)->v) = 0xA;
                    t2 = (t2 - 4);
                    t2 = (t2 << 2);
                    t2 = (t2 << 2);
                    (((struct o0_uint *)0xC2B3114)->v) = 0x1ED;
                    t2 = (t2 + 0xE6);
                    u0 = (float)t2;
                    (((struct o4_float *)0xC2B3114)->v) = u0;
                    t2 = ((((struct o0_int *)0xC2B3164)->v));
                    t2 = (t2 + 0x18B);
                    u0 = (float)t2;
                    (((struct o8_float *)0xC2B3114)->v) = u0;
                    u0 = ((((struct o10_float *)0xC2B3164)->v));
                    u0 = (u0 + 0.400000006f);
                    (((struct o10_float *)0xC2B3114)->v) = u0;
                    u0 = ((((struct o10_float *)0xC2B3164)->v));
                    u0 = (u0 + 1.5f);
                    (((struct o14_float *)0xC2B3114)->v) = u0;
                    (((struct o18_float *)0xC2B3114)->v) = 0.600000024f;
                    t6 = 0x20;
                    t7 = 0x18B;
                    u1 = 0.600000024f;
                }
                *(float *)((0xC2B3114 + t6)) = 1.0f;
                (((struct o28_uint *)0xC2B3114)->v) = 0x0;
                FUN_0c07ada0(0xC2B3114, t7, t8, u1);
                u0 = ((((struct o10_float *)0xC2B3164)->v));
                u0 = (u0 + 1.0f);
                (((struct o10_float *)0xC2B3114)->v) = u0;
                u0 = ((((struct o10_float *)0xC2B3164)->v));
                u0 = (u0 + 1.0f);
                (((struct o14_float *)0xC2B3114)->v) = u0;
                (((struct o18_float *)0xC2B3114)->v) = 0.0f;
            }
            t0 = (t0 + 0x1);
            t3 = t4;
            t2 = t5;
            continue;
        }
        break;
    }
    if ((int)t1 >= (int)0x3D) {
        if (t1 == 61) {
            (((struct o10_uint *)0xC2B3280)->v) = (((((struct o10_int *)0xC2B3280)->v)) + 0x1);
            FUN_0c058ca6(0x105A9, 0x0);
            (((struct oC_uint *)0xC2B3164)->v) = 0x1;
            (((struct o8_ushort *)0xC2B3164)->v) = 0x0;
            (((struct o4_float *)0xC2B3164)->v) = 0.5f;
            (((struct o10_float *)0xC2B3164)->v) = 0.0f;
        }
        FUN_0c056d8e();
    }
    (((struct o0_uint *)0xC2B3280)->v) = (((((struct o0_int *)0xC2B3280)->v)) + 0x1);
    (((struct oC_float *)0xC2B3114)->v) = 0.200000003f;
    return FUN_0c026ce6();
}

void FUN_0c06f610(int a4, int a5, int a6)
{
    register int t25;
    register int t26;
    register int t31;

    (((struct o0_uint *)0xC2BB500)->v) = 0x0;
    if (a4 == 0) {
        (((struct o0_uint *)0xC2BB500)->v) = 0x1;
    }
    (((struct o4_uint *)0xC2BB500)->v) = 0x0;
    if ((a4 == 25) || ((a4 == 24) || ((a4 == 26) || (a4 == 27)))) {
        (((struct o4_uint *)0xC2BB500)->v) = 0x1;
    }
    _builtin_set_imask(0xE);
    if ((int)(*(int *)0xA05F689C) >= (int)0x8) {
        (((struct o0_uint *)0xC2BB4A4)->v) = 0x1;
    } else {
        (((struct o0_uint *)0xC2BB4A4)->v) = 0x0;
    }
    sys_init();
    (((struct o18_ushort *)0xC2BF8DC)->v) = 0x0;
    (((struct o1A_ushort *)0xC2BF8DC)->v) = 0x0;
    if ((0x80 & a5) != 0) {
        (((struct o18_ushort *)0xC2BF8DC)->v) = 0x1;
    }
    if ((0x8000 & a5) != 0) {
        (((struct o1A_ushort *)0xC2BF8DC)->v) = 0x1;
    }
    (((struct o20_uint *)0xC2BB500)->v) = (*(int *)((((a5 & 0xF) << 2) + 0xC113A08)));
    kmInitDevice((*(int *)(((((a4 << 1) + a4) << 2) + 0xC1138B8))));
    if (((((struct o4_int *)0xC2BB500)->v)) == 1) {
        kmSetPALEXTCallback(0xC06F1E0);
    }
    kmSetDisplayMode((*(int *)((((((a4 << 1) + a4) << 2) + 0xC1138B8) + 0x4))), ((((struct o20_int *)0xC2BB500)->v)), ((((struct o18_short *)0xC2BF8DC)->v)), ((((struct o1A_short *)0xC2BF8DC)->v)));
    (((struct o14_ushort *)0xC2BF8DC)->v) = (*(short *)((((((a4 << 1) + a4) << 2) + 0xC1138B8) + 0x8)));
    (((struct o16_ushort *)0xC2BF8DC)->v) = (*(short *)((((((a4 << 1) + a4) << 2) + 0xC1138B8) + 0xA)));
    nlSysInitStripContextBG(0xC2BBAE8);
    nlSysInitStripContextVtx(0xC2BF128);
    (((struct o0_uint *)0xC2BF728)->v) = 0xC2BF128;
    (((struct o4_uint *)0xC2BF728)->v) = 0x0;
    (((struct o4_uint *)0xC2BF8DC)->v) = 0xFFFFFFFF;
    (((struct oC_uint *)0xC2BF8DC)->v) = 0x0;
    (((struct o1C_uint *)0xC2BF8DC)->v) = 0x0;
    (((struct o0_uint *)0xC2BF8DC)->v) = 0x0;
    (((struct o30_float *)0xC2BF8DC)->v) = 0.0f;
    (((struct o34_float *)0xC2BF8DC)->v) = 0.0f;
    (((struct o38_float *)0xC2BF8DC)->v) = 0.0f;
    (((struct o3C_float *)0xC2BF8DC)->v) = 0.0f;
    (((struct o20_uint *)0xC2BF8DC)->v) = 0x0;
    (((struct o24_uint *)0xC2BF8DC)->v) = 0x0;
    (((struct o28_uint *)0xC2BF8DC)->v) = 0x0;
    (((struct o2C_uint *)0xC2BF8DC)->v) = 0x0;
    (((struct o0_float *)0xC2C4DC8)->v) = 1.0f;
    (((struct o1C_uint *)0xC2C4DC8)->v) = 0x0;
    t25 = (((struct o16_short *)0xC2BF8DC)->v);
    t26 = (((struct o14_short *)0xC2BF8DC)->v);
    if (0x0 != 0) {
        t31 = (short)t25;
        if (((((struct o1A_short *)0xC2BF8DC)->v)) == 1) {
            t31 = ((short)t25 + (short)t25);
            if ((int)((short)t25 + (short)t25) > (int)0x1E0) {
                t31 = 0x1E0;
            }
        }
        nlSetWindowSize(0.0f, 0.0f, (float)t26, (float)t31);
    } else {
        nlSetWindowSize(0.0f, 0.0f, (float)t26, (float)(short)t25);
    }
    kmSetCullingRegister((*(float *)0xC06F8E0));
    (((struct o0_uint *)0xFF000038)->v) = 0xC;
    (((struct o4_uint *)0xFF000038)->v) = 0xC;
    (((struct o8_uint *)0xC2BB500)->v) = a6;
    kmSetWaitVsyncCount(a6);
    nl_system_config_init(0x200000);
    FUN_0c070430(0x0);
    (((struct o28_uint *)0xC2BB500)->v) = 0x0;
    (((struct o4_uint *)0xC2BB4A4)->v) = 0x68;
    _builtin_set_imask(0x0);
}

int FUN_0c03ff4a(int a4)
{
    int stk[9];
    register int t7;
    register int t8;
    register int t9;
    register int t13;
    register int t46;
    register int t63;
    register int t85;
    int t2;
    int t64;

    if (a4 == 0) {
        (((struct o4_uint *)0xC2A59BC)->v) = 0x0;
        (((struct o8_uint *)0xC2A59BC)->v) = 0x0;
        (((struct oC_uint *)0xC2A59BC)->v) = 0x0;
        *(unsigned int *)0xC2AB7F4 = 0x4;
        (((struct o4_uint *)0xC2A5A18)->v) = 0x0;
        if ((((((struct o0_int *)0xC1EC71C)->v)) == 2) && (t2 = (((struct o8_int *)0xC1EC71C)->v), t2 != 8)) {
            (((struct o0_float *)0xC2A59BC)->v) = 4000.0f;
        } else {
            (((struct o0_float *)0xC2A59BC)->v) = 1300.0f;
        }
        (((struct o18_uint *)0xC2A59BC)->v) = 0xC1758B4;
        FUN_0c07ff00();
        (((struct o28_uint *)0xC2A59BC)->v) = 0x0;
        t7 = (((struct o4_int *)0xC1EC71C)->v);
        t8 = (((struct o8_int *)0xC1EC71C)->v);
        t9 = *(int *)(((((t7 + t8) << 2) + 0xC0F34E8) + 0x0));
        (((struct o10_uint *)0xC2A59BC)->v) = (*(int *)((((((t9 << 1) + t9) << 2) + (*(int *)0xC2ADA7C)) + 0x0)));
        t13 = *(int *)(((((t7 + t8) << 2) + 0xC0F34E8) + 0x0));
        (((struct o14_uint *)0xC2A59BC)->v) = (*(int *)(((*(int *)((((((t13 << 1) + t13) << 2) + (*(int *)0xC2ADA7C)) + 0x4))) + 0x0)));
        FUN_0c0401d8(0x0);
        FUN_0c04027a(0x0, 0x0, 0.0f);
        if (((((struct o0_int *)0xC1EC71C)->v)) == 1) {
            FUN_0c044964(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        }
        FUN_0c03fbd8(0x0, 0xC2A59D8);
        FUN_0c075ba0();
        FUN_0c044940(0x0, 0x0);
        t85 = (FUN_0c040bec(0x0, 0x0));
    } else {
        if ((*(int *)0xC2AC2F0) == 0) {
            *(unsigned int *)0xC2AC5E0 = ((((struct o0_int *)0xC2A5A18)->v));
        }
        t46 = 0x1;
        if (((((struct o0_int *)0xC1EC71C)->v)) == 1) {
            if (((((struct o4_int *)0xC2ADEC0)->v)) == 47) {
                (((struct o0_float *)0xC2A59BC)->v) = 800.0f;
                t46 = 0x0;
            } else {
                (((struct o0_float *)0xC2A59BC)->v) = 1300.0f;
                t46 = 0x1;
            }
            if (((((struct o0_int *)0xC2ADEC0)->v)) == 2) {
                t46 = 0x0;
            }
        }
        if (t46 == 1) {
            FUN_0c0401d8(0x1);
        }
        if (((((struct o4_int *)0xC2A5A18)->v)) != 0) {
            (((struct o4_uint *)0xC2A5A18)->v) = (((((struct o4_int *)0xC2A5A18)->v)) - 1);
        }
        t63 = FUN_0c0464de(0x2);
        if ((t63 == 1) && (t64 = (((struct o0_int *)0xC2ADEC0)->v), t64 != 2)) {
            FUN_0c04027a(0x1, 0xC2A59D8, ((((struct o0_float *)0xC2A59BC)->v)));
        }
        if (((((struct o0_int *)0xC1EC71C)->v)) == 1) {
            FUN_0c044964(0x1, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        }
        FUN_0c03fbd8(0x1, 0xC2A59D8);
        FUN_0c044940(0x1, 0xC177D38);
        FUN_0c07ff00();
        *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + (*(float *)0xC0401B4));
        nlPushMatrix(0x0);
        FUN_0c0739a0((((((struct o18_int *)0xC2A59BC)->v)) + 0x7C));
        nlRotateAY((unsigned short)((((struct o8A_short *)(((((struct o18_int *)0xC2A59BC)->v))))->v)));
        FUN_0c072230(((int)stk + 0), 0xC2A59D8);
        t85 = (nlPopMatrix(0x1));
    }
    return t85;
}

int FUN_0c0345ec(int a4, int a5, int a6, float f4, float f5, float f6)
{
    register float u0;
    register int t1;
    register int t45;
    register int t89;
    register int t95;
    register int t118;
    register int t122;
    register float u126;
    int t41;
    register int t43;
    register float u85;
    register float u86;
    register float u87;
    register float u72;
    register float u73;
    register float u74;
    register float u59;
    register float u60;
    register float u61;

    u0 = (((struct o1C_float *)0xC2A583C)->v);
    t1 = *(int *)0xC2A4658;
    if ((a4 & 0x4) != 0) {
        t41 = (a4 & 0xFFFFFFFB);
        if (t1 != 0) {
            t41 = ((a4 & 0xFFFFFFFB) | 0x5);
            if (t1 != 2) {
                t41 = ((a4 & 0xFFFFFFFB) | 0x6);
                if (t1 != 3) {
                    t41 = ((a4 & 0xFFFFFFFB) | 0x7);
                    if (t1 != 4) {
                        t41 = ((a4 & 0xFFFFFFFB) | 0x4);
                    }
                }
            }
        }
        t43 = a6;
    } else {
        t41 = a4;
        if ((a4 & 0x8) != 0) {
            t41 = ((a4 & 0xFFFFFFF7) | 0x4);
            if (t1 != 0) {
                t41 = ((a4 & 0xFFFFFFF7) | 0x9);
                if (t1 != 2) {
                    t41 = ((a4 & 0xFFFFFFF7) | 0xA);
                    if (t1 != 3) {
                        t41 = ((a4 & 0xFFFFFFF7) | 0xB);
                        if (t1 != 4) {
                            t41 = ((a4 & 0xFFFFFFF7) | 0x8);
                        }
                    }
                }
            }
        }
        t43 = 0x8;
    }
    (((struct o1C_float *)0xC2A583C)->v) = f6;
    (((struct o0_uint *)0xC2A583C)->v) = 0x3005;
    t45 = *(int *)0xC2A4658;
    if ((*(int *)((((((t45 << 1) + t45) << 2) + ((a5 * 0x3C) + 0xC0BDB98)) + 0x0))) != 0) {
        if ((*(int *)0xC2A4658) == 0) {
            if ((0xF0 & t41) != 16) {
                if ((0xF0 & t41) != 32) {
                    if ((0xF0 & t41) != 48) {
                        u59 = f4;
                        u60 = f5;
                        u61 = f6;
                    } else {
                        FUN_0c076230(1.0f, 0.769999981f, 0.0f);
                    }
                    u72 = u59;
                    u73 = u60;
                    u74 = u61;
                } else {
                    FUN_0c076230(1.0f, 1.0f, 1.0f);
                }
                u85 = u72;
                u86 = u73;
                u87 = u74;
            } else {
                FUN_0c076230(0.0f, 0.0f, 0.0f);
            }
            t89 = *(int *)0xC2A4658;
            FUN_0c03346e((*(int *)(((((a5 * 0x3C) + 0xC0BDB98) + (((t89 << 1) + t89) << 2)) + 0x0))), 0xC2A5808, (int)((float)(*(int *)(((((a5 * 0x3C) + 0xC0BDB98) + (((t89 << 1) + t89) << 2)) + 0x4))) + f4), (int)f5, u85, u86, u87);
            FUN_0c026ce6();
        } else {
            t95 = *(int *)0xC2A4658;
            FUN_0c033578(t41, (*(int *)((((((t95 << 1) + t95) << 2) + ((a5 * 0x3C) + 0xC0BDB98)) + 0x0))), t43, ((float)(*(int *)((((((t95 << 1) + t95) << 2) + ((a5 * 0x3C) + 0xC0BDB98)) + 0x4))) + f4), f5, 1.0f);
        }
    }
    if (a6 != 0) {
        t118 = *(int *)0xC2A4658;
        if ((*(int *)((((((t118 << 1) + t118) << 2) + ((a5 * 0x3C) + 0xC0BDB98)) + 0x8))) != 0) {
            t122 = *(int *)0xC2A4658;
            u126 = f5;
            if ((t122 == 0) && ((int)a5 < (int)0x36)) {
                u126 = (f5 + ((((struct o0_float *)0xC034860)->v)));
            }
            FUN_0c0336c8(t41, a6, ((float)(*(int *)(((((a5 * 0x3C) + 0xC0BDB98) + (((t122 << 1) + t122) << 2)) + 0x8))) + f4), u126, ((((struct o4_float *)0xC034860)->v)), 1.0f);
        }
    }
    (((struct o0_uint *)0xC2A583C)->v) = 0x300A;
    (((struct o1C_float *)0xC2A583C)->v) = u0;
    return 0x8;
}

int kmiStartNextRender(void)
{
    register int t0;
    register int t1;
    register int t2;

    t1 = 0x0;
    for (;;) {
        t2 = *(int *)((0xC300C1C + (t1 << 2)));
        if (t2 != 3) {
            t1 = (t1 + 0x1);
            if ((int)t1 < (int)0x4) continue;
            return t2;
        }
        if (((*(int *)(((0xC300AD8) + 0x0)))) != 0) {
            t1 = (t1 + 0x1);
            if ((int)t1 < (int)0x4) continue;
            return t2;
        }
        break;
    }
    if ((((t1 & 0x1) + 0x1) & ((((struct o10_int *)0xC300A80)->v))) != 0) {
        kmiCreateRegionArray(((((struct o0_int *)0xC300D2C)->v)), ((((struct o4_int *)0xC300D2C)->v)), 0x0, 0x1, (t1 & 0x1), ((~(*(int *)0xC300938)) & 0x1));
        (((struct o10_uint *)0xC300A80)->v) = (((~((t1 & 0x1) + 0x1)) & ((((struct o10_int *)0xC300A80)->v))) & 0x3);
    }
    *(unsigned int *)0xC300AD8 = 0x1;
    *(unsigned int *)(((t1 << 2) + 0xC300C1C)) = 0x4;
    if ((((((struct o0_int *)0xC3008D4)->v)) & 16) != 0) {
        (((struct o0_uint *)0xA05F8008)->v) = 0x2;
        (((struct o0_uint *)0xA05F8008)->v) = 0x0;
    }
    (((struct o24_uint *)0xA05F8008)->v) = (*(int *)((((((t1 & 0x1) << 2) << 2) << 1) + 0xC300D40)));
    (((struct o18_uint *)0xA05F8008)->v) = (*(int *)((((((t1 & 0x1) << 2) << 2) << 1) + 0xC300D54)));
    if (((((struct o30_int *)0xC3008D4)->v)) != 1) {
        if (((((((struct o1C_int *)0xC3008D4)->v)) & 0x1) != 1) && ((t0 = (((struct o1C_int *)0xC3008D4)->v), (t0 & 0x2C) == 32) && (0x1 != 0))) {
            t0 = (*(int *)(((((((struct o18_int *)0xC306E2C)->v)) << 2) + 0xC300C04)));
        } else {
            t0 = (*(int *)((((t1 & 0x1) << 2) + 0xC300C04)));
        }
        (((struct o18_uint *)0xA05F8048)->v) = t0;
    }
    (((struct o4_uint *)0xA05F8088)->v) = ((((struct o4_int *)0xC300A80)->v));
    (((struct o0_uint *)0xA05F8088)->v) = (((((struct o0_int *)0xC300A80)->v)) & 0xFFFFFFF0);
    (((struct o20_uint *)0xA05F8048)->v) = ((((struct o0_int *)0xC300B84)->v));
    (((struct o24_uint *)0xA05F8048)->v) = ((((struct o4_int *)0xC300B84)->v));
    (((struct o4_uint *)0xA05F8048)->v) = ((((struct o10_int *)0xC300B84)->v));
    (((struct o0_uint *)0xA05F8048)->v) = ((((struct o18_int *)0xC300B84)->v));
    *(unsigned int *)0xC306DEC = 0x0;
    if ((((((struct o1C_int *)0xC3008D4)->v)) & 0xFFFFFFED) == 32) {
        if (((((struct o18_int *)0xC306E2C)->v)) == 0) {
            t0 = (*(int *)0xC300BD0);
            t2 = 0x20000;
        } else {
            t0 = (*(int *)0xC300BD0);
            t2 = 0x60000;
        }
        *(unsigned int *)0xA05F80F4 = (t0 | t2);
    }
    (((struct o0_uint *)0xC306E2C)->v) = (*(int *)0xFFD8000C);
    *(unsigned int *)0xC300C30 = t1;
    (((struct o14_uint *)0xC306E2C)->v) = 0x1;
    (((struct oC_uint *)0xA05F8008)->v) = 0xFFFFFFFF;
    return 0xC300C30;
}

int FUN_0c0438c0(int a4)
{
    int stk[4];
    register int t15;
    register int t19;
    register int t39;
    register int t40;
    register int t43;
    register int t44;
    register int t49;
    register int t51;

    (((struct o90_float *)(a4))->v) = (((((struct o90_float *)(a4))->v)) + 1.0f);
    FUN_0c07ff00();
    (((struct oA4_uchar *)(a4))->v) = (*(signed char *)0xC0C367C);
    *(unsigned char *)(((0xA4 + a4) + 0x1)) = (*(signed char *)0xC0C367D);
    *(unsigned char *)(((0xA4 + a4) + 0x2)) = (*(signed char *)0xC0C367E);
    *(unsigned char *)(((0xA4 + a4) + 0x3)) = (*(signed char *)0xC0C367F);
    *(unsigned char *)(((0xA4 + a4) + 0x4)) = (*(signed char *)0xC0C3680);
    *(unsigned char *)(((0xA4 + a4) + 0x5)) = (*(signed char *)0xC0C3681);
    (((struct oAA_uchar *)(a4))->v) = (*(signed char *)0xC0C367C);
    *(unsigned char *)(((0xAA + a4) + 0x1)) = (*(signed char *)0xC0C367D);
    *(unsigned char *)(((0xAA + a4) + 0x2)) = (*(signed char *)0xC0C367E);
    *(unsigned char *)(((0xAA + a4) + 0x3)) = (*(signed char *)0xC0C367F);
    *(unsigned char *)(((0xAA + a4) + 0x4)) = (*(signed char *)0xC0C3680);
    *(unsigned char *)(((0xAA + a4) + 0x5)) = (*(signed char *)0xC0C3681);
    t15 = *(int *)((((((((struct o78_int *)(a4))->v)) * 0xA8) + 0xC0C0FCC) + 0x0));
    (((struct oB0_float *)(a4))->v) = (((((struct o14_float *)(t15))->v)) + ((((struct o10_float *)(t15))->v)));
    t19 = (((struct o9C_int *)(((((((struct o78_int *)(a4))->v)) * 0xA8) + 0xC0C0FCC)))->v);
    *(unsigned int *)(((int)stk + 12)) = t19;
    if (t19 != 0) {
        (((struct o7C_uint *)(a4))->v) = (*(int *)(((*(int *)(((int)stk + 12))) + (((FUN_0c046466()) & 0x1F) << 2))));
    } else {
        (((struct o7C_uint *)(a4))->v) = 0xFFFFFFFF;
    }
    (((struct oB4_float *)(a4))->v) = ((((struct o94_float *)((0xC0C0FCC + (((((struct o78_int *)(a4))->v)) * 0xA8))))->v));
    (((struct oB8_float *)(a4))->v) = 0.0f;
    (((struct oBC_uint *)(a4))->v) = 0x1;
    (((struct oC0_uint *)(a4))->v) = 0x0;
    (((struct oC4_float *)(a4))->v) = 0.0f;
    (((struct oC8_float *)(a4))->v) = 0.0f;
    (((struct oCC_float *)(a4))->v) = 0.0f;
    (((struct oD0_float *)(a4))->v) = 0.0f;
    (((struct oDC_uint *)(a4))->v) = 0x0;
    (((struct oF8_float *)(a4))->v) = 0.0f;
    (((struct oFC_float *)(a4))->v) = 0.0f;
    (((struct o100_float *)(a4))->v) = 0.0f;
    (((struct o104_float *)(a4))->v) = 0.0f;
    (((struct o108_uchar *)(a4))->v) = (*(signed char *)0xC0C367C);
    *(unsigned char *)(((0x108 + a4) + 0x1)) = (*(signed char *)0xC0C367D);
    *(unsigned char *)(((0x108 + a4) + 0x2)) = (*(signed char *)0xC0C367E);
    *(unsigned char *)(((0x108 + a4) + 0x3)) = (*(signed char *)0xC0C367F);
    *(unsigned char *)(((0x108 + a4) + 0x4)) = (*(signed char *)0xC0C3680);
    *(unsigned char *)(((0x108 + a4) + 0x5)) = (*(signed char *)0xC0C3681);
    FUN_0c07ff00();
    (((struct oF0_float *)(a4))->v) = 1.0f;
    (((struct o110_uint *)(a4))->v) = 0x0;
    (((struct o114_uint *)(a4))->v) = 0x0;
    (((struct o118_uint *)(a4))->v) = 0x0;
    (((struct o11C_uint *)(a4))->v) = 0x0;
    (((struct o120_uint *)(a4))->v) = 0x78;
    (((struct o88_uint *)(a4))->v) = 0x0;
    (((struct o84_uint *)(a4))->v) = 0xD;
    (((struct o124_uint *)(a4))->v) = 0x0;
    t39 = *(int *)0xC2ADA7C;
    t40 = (((struct o80_int *)(a4))->v);
    t43 = *(int *)((((((t40 << 1) + t40) << 2) + t39) + 0x0));
    t44 = *(int *)(((*(int *)((((((t40 << 1) + t40) << 2) + t39) + 0x4))) + 0x0));
    *(int *)((int)stk + 0) = (0x8C + a4);
    FUN_0c0469e2(0x0, t43, t44, (0xD4 + a4), (0x8C + a4));
    *(unsigned int *)(((int)stk + 8)) = ((((struct o80_int *)(a4))->v));
    *(unsigned int *)(((int)stk + 4)) = (((((struct oD4_int *)(a4))->v)) + 0x3);
    FUN_0c046fde((((int)stk + 0) + 0x8), (((int)stk + 0) + 0x4), 0x0);
    t49 = *(int *)(((int)stk + 8));
    t51 = *(int *)0xC2ADA7C;
    *(volatile int *)(((int)stk + 4));
    *(volatile int *)((((((t49 << 1) + t49) << 2) + t51) + 0x0));
    FUN_0c07ff00();
    (((struct oA6_ushort *)(a4))->v) = (nlArcTan2((((((struct oE0_float *)(a4))->v)) - ((((struct o8C_float *)(a4))->v))), (((((struct oE8_float *)(a4))->v)) - ((((struct o94_float *)(a4))->v)))));
    FUN_0c07ff00();
    (((struct o48_float *)(a4))->v) = 0.0f;
    (((struct o44_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 1.0f;
    (((struct o54_float *)(a4))->v) = 1.0f;
    (((struct o40_uint *)(a4))->v) = 0x0;
    *(unsigned int *)((a4 + 0x3C)) = (a4 + 0x44);
    return 0x40;
}

int vmsfs_findfirst_ex(int a4, int a5, int a6)
{
    int stk[20];
    register int t4;
    register int t8;
    register int t12;
    register int t23;
    register int t24;
    register int t26;
    register int t30;
    register int t34;
    register int t60;
    register int t62;
    register int t67;
    register int t68;
    register int t70;
    register int t74;
    register int t78;
    int t61;

    (((struct o4C_uint *)(((int)stk + 0)))->v) = a4;
    (((struct o48_uint *)(((int)stk + 0)))->v) = a5;
    (((struct o44_uint *)(((int)stk + 0)))->v) = a6;
    *(unsigned int *)(((int)stk + 44)) = (((*(int *)(((int)stk + 76))) * 0x154) + 0xC2C8D2C);
    if ((*(signed char *)(((((*(int *)(((int)stk + 76))) * 0x154) + 0xC2C8D2C) + 0x2))) == 0) {
        return 0xFFFFFF01;
    }
    t4 = vmsio_isready((*(int *)(((int)stk + 76))));
    if (t4 == 0) {
        vmsfs_unmount((*(int *)(((int)stk + 76))));
        return 0xFFFFFF01;
    }
    t8 = vmsio_ismount((*(int *)(((int)stk + 76))));
    if (t8 == 0) {
        return 0xFFFFFF01;
    }
    if ((*(signed char *)((((*(int *)(((int)stk + 76))) * 0x154) + 0xC2C8D34))) == 0) {
        return 0xFFFFFF01;
    }
    t12 = buIsFormat((*(int *)(((int)stk + 76))));
    if ((int)t12 < 0) {
        return 0xFFFFFF03;
    }
    *(unsigned int *)(((*(int *)(((int)stk + 44))) + 0x18)) = 0x0;
    *(unsigned int *)(((int)stk + 48)) = (FUN_0c08f9c4((*(int *)(((int)stk + 76))), (*(int *)(((*(int *)(((int)stk + 44))) + 0x18)))));
    *(unsigned int *)(((int)stk + 56)) = 0x0;
    *(unsigned int *)(((int)stk + 64)) = 0x0;
    for (;;) {
        t23 = *(int *)(((int)stk + 64));
        if ((int)t23 >= (int)(*(int *)(((*(int *)(((*(int *)(((int)stk + 44))) + 0x1C))) + 0x30)))) {
            t24 = *(int *)(((int)stk + 56));
            if (t24 == 0) {
                return 0xFFFFFF05;
            }
            *(unsigned int *)(((int)stk + 60)) = 0x0;
            for (;;) {
                if ((int)(*(int *)(((int)stk + 60))) >= (int)0xC) {
                    break;
                }
                t23 = 0x48;
                t26 = *(int *)((((int)stk + 0) + t23));
                t23 = (*(int *)(((int)stk + 60)));
                t30 = (t26 + t23);
                t23 = (*(int *)(((int)stk + 48)));
                *(unsigned char *)((t30 + 0x0)) = (*(signed char *)((((*(int *)(((int)stk + 60))) + 0x4) + t23)));
                t24 = (*(int *)(((int)stk + 60)));
                t24 = (t24 + 0x1);
                *(unsigned int *)(((int)stk + 60)) = t24;
            }
            *(unsigned char *)(((*(int *)(((int)stk + 72))) + 0xC)) = 0x0;
            t34 = *(int *)(((int)stk + 44));
            *(unsigned int *)((t34 + 0x18)) = ((*(int *)((t34 + 0x18))) + 0x1);
            FUN_0c08f134((*(int *)(((int)stk + 48))), ((int)stk + 0));
            *(unsigned int *)(((*(int *)(((int)stk + 68))) + 0x0)) = ((*(int *)(((int)stk + 40))) * ((*(int *)(((*(int *)(((*(int *)(((int)stk + 44))) + 0x1C))) + 0x2C))) + 0x1));
            *(unsigned short *)(((*(int *)(((int)stk + 68))) + 0x4)) = (*(int *)(((int)stk + 40)));
            *(unsigned char *)(((*(int *)(((int)stk + 68))) + 0x6)) = (*(signed char *)(((int)stk + 4)));
            *(unsigned char *)(((*(int *)(((int)stk + 68))) + 0x7)) = (*(signed char *)(((int)stk + 10)));
            *(unsigned short *)(((*(int *)(((int)stk + 68))) + 0x8)) = (*(short *)(((int)stk + 8)));
            if ((*(int *)(((int)stk + 4))) == 0xCC) {
                *(unsigned char *)(((*(int *)(((int)stk + 68))) + 0x6)) = 0x1;
            } else {
                *(unsigned char *)(((*(int *)(((int)stk + 68))) + 0x6)) = 0x0;
            }
            FUN_0c08fd60(((*(int *)(((int)stk + 68))) + 0xA), (((int)stk + 0) + 0x20));
            return 0x0;
        }
        *(unsigned char *)(((int)stk + 55)) = (*(signed char *)(((*(int *)(((int)stk + 48))) + 0x0)));
        t60 = *(signed char *)(((int)stk + 55));
        if (((unsigned char)t60 != 51) && (t61 = *(signed char *)(((int)stk + 55)), (unsigned char)t61 != 0xCC)) {
            t62 = *(int *)(((int)stk + 44));
            *(unsigned int *)((t62 + 0x18)) = ((*(int *)((t62 + 0x18))) + 0x1);
            *(unsigned int *)(((int)stk + 64)) = ((*(int *)(((int)stk + 64))) + 0x1);
            *(unsigned int *)(((int)stk + 48)) = ((*(int *)(((int)stk + 48))) + 0x20);
            continue;
        }
        break;
    }
    *(unsigned int *)(((int)stk + 56)) = 0x1;
    t68 = *(int *)(((int)stk + 56));
    if (t68 == 0) {
        return 0xFFFFFF05;
    }
    *(unsigned int *)(((int)stk + 60)) = 0x0;
    t67 = (unsigned char)t60;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 60))) >= (int)0xC) {
            break;
        }
        t67 = 0x48;
        t70 = *(int *)((((int)stk + 0) + t67));
        t67 = (*(int *)(((int)stk + 60)));
        t74 = (t70 + t67);
        t67 = (*(int *)(((int)stk + 48)));
        *(unsigned char *)((t74 + 0x0)) = (*(signed char *)((((*(int *)(((int)stk + 60))) + 0x4) + t67)));
        t68 = (*(int *)(((int)stk + 60)));
        t68 = (t68 + 0x1);
        *(unsigned int *)(((int)stk + 60)) = t68;
    }
    *(unsigned char *)(((*(int *)(((int)stk + 72))) + 0xC)) = 0x0;
    t78 = *(int *)(((int)stk + 44));
    *(unsigned int *)((t78 + 0x18)) = ((*(int *)((t78 + 0x18))) + 0x1);
    FUN_0c08f134((*(int *)(((int)stk + 48))), ((int)stk + 0));
    *(unsigned int *)(((*(int *)(((int)stk + 68))) + 0x0)) = ((*(int *)(((int)stk + 40))) * ((*(int *)(((*(int *)(((*(int *)(((int)stk + 44))) + 0x1C))) + 0x2C))) + 0x1));
    *(unsigned short *)(((*(int *)(((int)stk + 68))) + 0x4)) = (*(int *)(((int)stk + 40)));
    *(unsigned char *)(((*(int *)(((int)stk + 68))) + 0x6)) = (*(signed char *)(((int)stk + 4)));
    *(unsigned char *)(((*(int *)(((int)stk + 68))) + 0x7)) = (*(signed char *)(((int)stk + 10)));
    *(unsigned short *)(((*(int *)(((int)stk + 68))) + 0x8)) = (*(short *)(((int)stk + 8)));
    if ((*(int *)(((int)stk + 4))) == 0xCC) {
        *(unsigned char *)(((*(int *)(((int)stk + 68))) + 0x6)) = 0x1;
    } else {
        *(unsigned char *)(((*(int *)(((int)stk + 68))) + 0x6)) = 0x0;
    }
    FUN_0c08fd60(((*(int *)(((int)stk + 68))) + 0xA), (((int)stk + 0) + 0x20));
    return 0x0;
}

int mpdrv_setcmd_force(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int stk[7];
    register int t2;
    register int t3;
    register int t17;
    register int t21;
    register int t22;
    register int t23;
    register int t30;
    register int t42;
    register int t37;
    register int t38;
    register int t39;
    register int t40;
    register int t53;
    register int t47;
    register int t48;
    register int t49;
    register int t50;
    register int t68;
    register int t69;
    register int t70;
    register int t81;
    register int t82;
    register int t83;
    register int t84;
    register int t99;
    register int t5;
    int t6;
    register int t7;
    register int t61;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned char *)(((int)stk + 20)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    *(unsigned int *)(((int)stk + 12)) = ((a7 + a9) + 0x3);
    *(unsigned char *)(((int)stk + 16)) = (*(signed char *)(((*(int *)(((int)stk + 4))) + 0xC171A94)));
    t2 = *(signed char *)(((((int)stk + 4) + 0xC) + 0x0));
    t3 = *(int *)0xC30817C;
    if (((int)((((struct o10CC_int *)(t3))->v)) > 0) && ((t5 = (((struct oFD8_int *)(t3))->v), (int)t5 > 0) && (t6 = (((struct oFCC_int *)(t3))->v), t7 = *(int *)((t6 + 0x0)), (((int)(unsigned char)(t2 & 0xC0) >> 6) & 0x3) == ((short)((unsigned int)t7 >> 16) & 0x3)))) {
        mpdrv_insertnop(((((struct o10CC_int *)(t3))->v)));
    }
    t17 = *(int *)0xC30817C;
    (((struct oFCC_uint *)(t17))->v) = (((((struct oFCC_int *)(t17))->v)) + (((((struct oFD8_int *)(t17))->v)) << 2));
    t21 = (((struct oFCC_int *)((*(int *)0xC30817C)))->v);
    *(unsigned int *)(((int)stk + 24)) = (unsigned char)(a7 + a9);
    *(unsigned int *)((t21 + 0x0)) = (((((int)(unsigned char)(t2 & 0xC0) >> 6) & 0x3) << 16) | (unsigned char)(a7 + a9));
    *(int *)((int)stk + 0) = (t21 + 0x4);
    t22 = *(int *)0xC30817C;
    t23 = (((struct o10B4_int *)(t22))->v);
    *(unsigned int *)(((t21 + 0x4) + 0x0)) = (FUN_0c16a44e((*(int *)((((*(int *)(((int)stk + 4))) << 2) + ((t22 + 0xFE8) + (((((t23 << 1) + t23) << 2) << 2) << 1)))))));
    t30 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 8)) = (unsigned char)(*(signed char *)(((int)stk + 20)));
    *(unsigned int *)(((int)stk + 4)) = (unsigned char)(*(signed char *)(((int)stk + 16)));
    if (((((struct o10C4_int *)((*(int *)0xC30817C)))->v)) == 1) {
        *(unsigned int *)((((t21 + 0x4) + 0x4) + 0x0)) = (((((((*(int *)(((int)stk + 8))) << 16) << 8) & 0xFF000000) | (((*(int *)(((int)stk + 4))) << 16) & 0xFF0000)) | (((unsigned char)(t2 & 0xC0) << 8) & 0xFF00)) | (*(int *)(((int)stk + 24))));
        t42 = (((t21 + 0x4) + 0x4) + 0x4);
        if ((int)a7 > 0) {
            t37 = t30;
            t38 = 0x0;
            t39 = (((t21 + 0x4) + 0x4) + 0x4);
            for (;;) {
                t40 = *(int *)((t37 + 0x0));
                t37 = (t37 + 0x4);
                t38 = (t38 + 0x1);
                *(unsigned int *)((t39 + 0x0)) = t40;
                t39 = (t39 + 0x4);
                if ((int)t38 >= (int)a7) {
                    break;
                }
            }
            t42 = t39;
        }
        t61 = t42;
    } else {
        *(unsigned int *)((((t21 + 0x4) + 0x4) + 0x0)) = ((((((unsigned char)(t2 & 0xC0) << 16) & 0xFF0000) | (((*(int *)(((int)stk + 4))) << 8) & 0xFF00)) | ((((a7 + a9) << 16) << 8) & 0xFF000000)) | (*(int *)(((int)stk + 8))));
        t53 = (((t21 + 0x4) + 0x4) + 0x4);
        if ((int)a7 > 0) {
            t47 = t30;
            t48 = 0x0;
            t49 = (((t21 + 0x4) + 0x4) + 0x4);
            for (;;) {
                t50 = *(int *)((t47 + 0x0));
                t47 = (t47 + 0x4);
                t48 = (t48 + 0x1);
                *(unsigned int *)((t49 + 0x0)) = ((((((t50 << 16) << 8) & 0xFF000000) | ((t50 << 8) & 0xFF0000)) | (((int)t50 >> 8) & 0xFF00)) | (unsigned char)(signed char)((unsigned int)((unsigned int)t50 >> 16) >> 8));
                t49 = (t49 + 0x4);
                if ((int)t48 >= (int)a7) {
                    break;
                }
            }
            t53 = t49;
        }
        t61 = t53;
    }
    if (((((struct o10C4_int *)((*(int *)0xC30817C)))->v)) == 1) {
        if ((int)a9 > 0) {
            t68 = a8;
            t69 = 0x0;
            t70 = t61;
            for (;;) {
                t69 = (t69 + 0x1);
                *(unsigned int *)((t70 + 0x0)) = ((((((*(signed char *)((t68 + 0x1))) << 16) & 0xFF0000) | (((*(signed char *)((t68 + 0x2))) << 8) & 0xFF00)) | ((((*(signed char *)((t68 + 0x0))) << 16) << 8) & 0xFF000000)) | (unsigned char)(*(signed char *)((t68 + 0x3))));
                t70 = (t70 + 0x4);
                t68 = (t68 + 0x4);
                if ((int)t69 >= (int)a9) {
                    break;
                }
            }
        }
    } else {
        if ((int)a9 > 0) {
            t81 = 0x0;
            t82 = a8;
            t83 = t61;
            for (;;) {
                t84 = *(int *)((t82 + 0x0));
                t82 = (t82 + 0x4);
                t81 = (t81 + 0x1);
                *(unsigned int *)((t83 + 0x0)) = t84;
                t83 = (t83 + 0x4);
                if ((int)t81 >= (int)a9) {
                    break;
                }
            }
        }
    }
    (((struct oFD8_uint *)((*(int *)0xC30817C)))->v) = (*(int *)(((int)stk + 12)));
    t99 = *(int *)0xC30817C;
    (((struct oFDC_uint *)(t99))->v) = (((((struct oFDC_int *)(t99))->v)) + ((*(int *)(((int)stk + 12))) << 2));
    return 0x0;
}

int FUN_0c057374(void)
{
    int t0;
    int t1;
    int t2;
    register int t3;
    register int t4;
    register int t5;
    register float u0;

    t3 = (((struct o0_int *)0xC2B31C4)->v);
    t4 = (((struct o0_int *)0xC2B3110)->v);
    if (((int)t4 <= (int)(t3 + 0x78)) && (t0 = (((struct o38_int *)0xC2B31C4)->v), t0 != 1)) {
        t5 = t0;
    } else {
        t0 = t3;
        if (((((struct o38_int *)0xC2B31C4)->v)) == 0) {
            if (t4 == (t3 + 0x79)) {
                FUN_0c058ca6(0x505A9, 0x0);
                *(unsigned int *)0xC132204 = ((*(int *)0xC132204) + 0x1);
                (((struct oC_uint *)0xC2B3164)->v) = 0x1;
            } else {
                t4 = (t3 + 0x79);
            }
            t0 = t4;
        }
        if ((int)((((struct o34_int *)0xC2B31C4)->v)) >= (int)0x64) {
            (((struct o4_uint *)0xC2B3110)->v) = 0x218;
            (((struct o8_float *)0xC2B3110)->v) = 472.0f;
            (((struct oC_float *)0xC2B3110)->v) = (float)(0x18C + ((((struct o0_int *)0xC2B3164)->v)));
            (((struct o14_float *)0xC2B3110)->v) = (((((struct o10_float *)0xC2B3164)->v)) + 1.0f);
            (((struct o18_float *)0xC2B3110)->v) = (((((struct o10_float *)0xC2B3164)->v)) + 1.0f);
            (((struct o20_float *)0xC2B3110)->v) = 0.0f;
            (((struct o28_float *)0xC2B3110)->v) = 1.0f;
            (((struct o2C_uint *)0xC2B3110)->v) = 0x0;
            t3 = t0;
            u0 = 472.0f;
        } else {
            (((struct o4_uint *)0xC2B3110)->v) = 0x210;
            (((struct o8_float *)0xC2B3110)->v) = 472.0f;
            (((struct oC_float *)0xC2B3110)->v) = (float)(((((struct o0_int *)0xC2B3164)->v)) + 0x18C);
            (((struct o10_float *)0xC2B3110)->v) = 0.25f;
            (((struct o14_float *)0xC2B3110)->v) = (((((struct o10_float *)0xC2B3164)->v)) + 1.0f);
            (((struct o18_float *)0xC2B3110)->v) = (((((struct o10_float *)0xC2B3164)->v)) + 1.0f);
            (((struct o20_float *)0xC2B3110)->v) = 0.0f;
            (((struct o28_float *)0xC2B3110)->v) = 1.0f;
            (((struct o38_uint *)0xC2B3110)->v) = 0xA;
            (((struct o2C_uint *)0xC2B3110)->v) = 0x0;
            t4 = ((int (*)(int, int, float))(FUN_0c07ada0))(0xC2B3114, t0, 472.0f);
            FUN_0c076230(0.0f, 0.0f, 0.0f);
            (((struct o10_float *)0xC2B3110)->v) = 0.200000003f;
            (((struct o8_float *)0xC2B3110)->v) = 400.0f;
            (((struct oC_float *)0xC2B3110)->v) = (float)(0x18C + ((((struct o0_int *)0xC2B3164)->v)));
            (((struct o14_float *)0xC2B3110)->v) = (((((struct o10_float *)0xC2B3164)->v)) + 1.0f);
            (((struct o18_float *)0xC2B3110)->v) = (((((struct o10_float *)0xC2B3164)->v)) + 1.0f);
            (((struct o20_float *)0xC2B3110)->v) = 0.0f;
            (((struct o28_float *)0xC2B3110)->v) = 1.0f;
            (((struct o38_uint *)0xC2B3110)->v) = 0x300A;
            FUN_0c076230(1.0f, 1.0f, 1.0f);
            if ((((((struct o2C_int *)0xC2B31C4)->v)) == 0) && (t1 = (((struct o28_int *)0xC2B31C4)->v), t1 == 0)) {
            } else {
                (((struct o4_uint *)0xC2B3110)->v) = (((((struct o28_int *)0xC2B31C4)->v)) + 0x206);
                (((struct o8_float *)0xC2B3110)->v) = 444.0f;
                t0 = ((int (*)(int))(FUN_0c07ada0))(0xC2B3114);
            }
            (((struct o4_uint *)0xC2B3110)->v) = (((((struct o24_int *)0xC2B31C4)->v)) + 0x206);
            (((struct o8_float *)0xC2B3110)->v) = 498.0f;
            t0 = ((int (*)(int))(FUN_0c07ada0))(0xC2B3114);
            (((struct o4_uint *)0xC2B3110)->v) = 0x214;
            (((struct o14_float *)0xC2B3110)->v) = (((((struct o10_float *)0xC2B3164)->v)) + 1.0f);
            (((struct o18_float *)0xC2B3110)->v) = (((((struct o10_float *)0xC2B3164)->v)) + 1.0f);
            (((struct oC_float *)0xC2B3110)->v) = (float)(((((struct o0_int *)0xC2B3164)->v)) + 0x19C);
            if ((((((struct o2C_int *)0xC2B31C4)->v)) == 0) && (t2 = (((struct o28_int *)0xC2B31C4)->v), t2 == 1)) {
            } else {
                t0 = (((struct o24_int *)0xC2B31C4)->v);
                if (t0 == 1) {
                    (((struct o4_uint *)0xC2B3110)->v) = 0x213;
                } else {
                    if (t0 == 2) {
                        (((struct o4_uint *)0xC2B3110)->v) = 0x211;
                    } else {
                        if (((((struct o24_int *)0xC2B31C4)->v)) == 3) {
                            (((struct o4_uint *)0xC2B3110)->v) = 0x212;
                        }
                    }
                }
            }
            (((struct o8_float *)0xC2B3110)->v) = 554.0f;
        }
        t5 = (((int (*)(int, int, float))(FUN_0c07ada0))(0xC2B3114, t3, u0));
    }
    return t5;
}

int FUN_0c050104(void)
{
    int stk[8];
    register int t4;
    register int t42;
    register int t156;
    register int t138;
    register int t147;
    int t5;
    register int t36;
    register int t78;
    register int t97;
    int t122;
    int t127;
    int t139;
    int t144;

    if (((*(int *)0xC2B1DD4) & 0x1) == 1) {
        FUN_0c05074c(0x0);
    }
    t4 = *(int *)0xC2B1DD4;
    if (((t4 & 0x80) == 0x80) && (((t4 & 0x10000000) != 0x10000000) && (t5 = *(int *)0xC1EC71C, t5 != 2))) {
        FUN_0c051e22((t4 & 0x10000000), 0x80, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    } else {
        t36 = 0x80;
    }
    if (((*(int *)0xC2B1DD4) & 0x100) == 0x100) {
        FUN_0c0521dc(0x100, t36, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8));
    } else {
        t42 = 0x100;
    }
    t97 = t36;
    if ((*(int *)0xC1EC71C) != 2) {
        if (((*(int *)0xC2B1DD4) & 0x400) == 0x400) {
            FUN_0c05163e(0x400, t36, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16));
        } else {
        }
        if (((*(int *)0xC2B1DD4) & 0x800) == 0x800) {
            hudDrawJudgement2(0x800, t36);
        } else {
            t42 = 0x800;
        }
        t97 = t36;
    }
    if (((*(int *)0xC2B1DD4) & 0x20) == 32) {
        FUN_0c050d20();
    } else {
    }
    if (((*(int *)0xC2B1DD4) & 0x1000000) == 0x1000000) {
        FUN_0c0525d8(0x1000000, t97, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4));
    } else {
    }
    if (((*(int *)0xC2B1DD4) & 0x2000000) == 0x2000000) {
        FUN_0c05268c(0x2000000, t97, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4));
    } else {
    }
    if (((*(int *)0xC2B1DD4) & 0x4000000) == 0x4000000) {
        FUN_0c052722(0x4000000, t97, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4));
    } else {
        t78 = 0x4000000;
    }
    if (((*(int *)0xC2B1DD4) & 0x10000000) == 0x10000000) {
        FUN_0c052866(t78, t97);
    } else {
    }
    if (((*(int *)0xC2B1DD4) & 0x100000) == 0x100000) {
        FUN_0c052ba6();
    } else {
    }
    if (((*(int *)0xC2B1DD4) & 0x200000) == 0x200000) {
        FUN_0c052c00(0x200000, t97);
    }
    t156 = 0xC050320;
    if ((*(int *)0xC175C84) != 0) {
        FUN_0c027f28(0x0);
        pfSize(1.0f, 1.0f);
        FUN_0c027fdc(0.150000006f);
        FUN_0c02803a(0xFF00FF00, 0xFFFFFF00, 0xFF00FF00, 0xFFFFFF00);
        t156 = (pfTextPut(0x1C7, 0x19F, 0xC10C9E4));
    }
    if ((((((struct o4_int *)0xC2B1B9C)->v)) == 0) && (t122 = (((struct o0_int *)0xC2B1B9C)->v), t122 == 0)) {
    } else {
        FUN_0c027f28(0x0);
        pfSize(1.0f, 1.0f);
        t147 = FUN_0c027fdc(0.150000006f);
        if ((((((struct o4_int *)0xC2B1B9C)->v)) != 0) && (t127 = (((struct o0_int *)0xC2B1B9C)->v), t127 == 0)) {
            FUN_0c02803a(0xFFFFFF00, 0xFFFFFFFF, 0xFFFFFF00, 0xFFFFFFFF);
            t156 = (pfTextPut(0x1D1, 0x1B1, 0xC10C9F0));
        } else {
            t138 = (((struct o4_int *)0xC2B1B9C)->v);
            if ((t138 == 0) && (t139 = (((struct o0_int *)0xC2B1B9C)->v), t139 != 0)) {
                FUN_0c02803a(0xFFFF0000, 0xFF88FFFF, 0xFFFF0000, 0xFF88FFFF);
                t156 = (pfTextPut(0x186, 0x1B1, 0xC10C9FC));
            } else {
                if ((t138 != 0) && (t144 = (((struct o0_int *)0xC2B1B9C)->v), t144 != 0)) {
                    FUN_0c02803a(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
                    t147 = (pfTextPut(0x1E5, 0x1B1, 0xC10CA10));
                }
                t156 = t147;
            }
        }
    }
    return t156;
}

int FUN_0c05f4c8(int a4, int a5, int a6, int a7, float f4)
{
    int stk[5];

    register int R1;
    register int R2;
    register int R3;
    register int R8;
    register int R12;
    register float F2;
    register float F15;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    v0_5 = a4;
    v0_2 = a5;
    v0_3 = a6;
    v0_4 = a7;
    w0_0 = f4;
    v0_0 = (0x0);
    v0_1 = (v0_5);
    if (((*(int *)((v0_5 + 0x0))) != 0)) goto L_C05F514;
    v0_5 = (0x0);
    L_C05F6CA:;
    return v0_5;
    L_C05F514:;
    v0_6 = *(signed char *)(((v0_1 + 0x3F) + 0x0));
    v0_5 = (v0_6);
    if (((v0_6 & 32) == 0)) goto L_C05F586;
    *(unsigned int *)(((int)stk + 0)) = (*(int *)((v0_1 + 0x0)));
    *(float *)(((int)stk + 4)) = ((((struct o4_float *)(v0_1))->v));
    *(unsigned int *)(((int)stk + 8)) = (*(int *)((v0_1 + 0x14)));
    *(float *)(((int)stk + 12)) = ((((struct o18_float *)(v0_1))->v));
    *(float *)(((int)stk + 16)) = ((((struct o1C_float *)(v0_1))->v));
    if ((((*(signed char *)(((v0_1 + 0x3F) + 0x0))) & 64) != 0)) goto L_C05F54E;
    FUN_0c05f1b6(((int)stk + 0), (*(int *)((v0_1 + 0xC))), w0_0);
    L_C05F54E:;
    w0_1 = (((struct o20_float *)(v0_1))->v);
    w0_2 = (((struct o1C_float *)(v0_1))->v);
    (((struct o1C_float *)(v0_1))->v) = (w0_2 + w0_1);
    if ((1.0f > (w0_2 + w0_1))) goto L_C05F64C;
    *(unsigned int *)((v0_1 + 0x0)) = (*(int *)((v0_1 + 0x14)));
    (((struct o4_float *)(v0_1))->v) = ((((struct o18_float *)(v0_1))->v));
    *(unsigned int *)((v0_1 + 0x3C)) = ((*(int *)((v0_1 + 0x3C))) & 0xDFFFFFFF);
    if (((*(int *)((v0_1 + 0x2C))) == 0)) goto L_C05F64C;
    v0_5 = ((int (*)(int, int, int, int, float))((*(int *)((v0_1 + 0x2C)))))(v0_1, v0_2, v0_3, v0_4, w0_0);
    *(unsigned int *)((v0_1 + 0x2C)) = v0_0;
    L_C05F64C:;
    if (((*(int *)((v0_1 + 0x34))) == 0)) goto L_C05F65A;
    v0_5 = ((int (*)(int, int, int, int, float))((*(int *)((v0_1 + 0x34)))))(v0_1, v0_2, v0_3, v0_4, w0_0);
    *(unsigned int *)((v0_1 + 0x34)) = v0_0;
    L_C05F65A:;
    if ((((*(signed char *)(((v0_1 + 0x3F) + 0x0))) & 64) != 0)) goto L_C05F6BA;
    if (((*(int *)((v0_1 + 0x24))) == 0)) goto L_C05F688;
    v0_5 = *(int *)((v0_1 + 0x10));
    *(unsigned int *)(((*(int *)(((v0_5 << 2) + 0xC13AC90))) + 0x28)) = (*(int *)((((*(int *)(((v0_5 << 2) + 0xC13ADD8))) + ((FUN_0c05f6d4((*(int *)((v0_1 + 0x24))), ((((struct o4_float *)(v0_1))->v)))) << 2)) + 0x0)));
    v0_5 = ((v0_5 << 2));
    L_C05F688:;
    if (((*(int *)((v0_1 + 0x28))) == 0)) goto L_C05F6B2;
    v0_5 = *(int *)((v0_1 + 0x10));
    (((struct o40_uint *)((*(int *)(((v0_5 << 2) + 0xC13AC90)))))->v) = (*(int *)((((*(int *)(((v0_5 << 2) + 0xC13ADD8))) + (((FUN_0c05f6d4((*(int *)((v0_1 + 0x28))), ((((struct o4_float *)(v0_1))->v)))) + 0x4) << 2)) + 0x0)));
    v0_5 = ((v0_5 << 2));
    L_C05F6B2:;
    FUN_0c05d1bc((*(int *)((v0_1 + 0x10))), (*(int *)((v0_1 + 0xC))), v0_3, v0_4);
    L_C05F6BA:;
    if (((*(int *)((v0_1 + 0x38))) == 0)) goto L_C05F6C8;
    v0_2 = ((int (*)(int, int, int, int, float))((*(int *)((v0_1 + 0x38)))))(v0_1, v0_2, v0_3, v0_4, w0_0);
    *(unsigned int *)((v0_1 + 0x38)) = v0_0;
    L_C05F6C8:;
    v0_5 = (0xC2B9738);
    goto L_C05F6CA;
    L_C05F586:;
    if (((v0_5 & 64) != 0)) goto L_C05F59C;
    v0_5 = *(int *)((v0_1 + 0xC));
    w0_1 = (((struct o4_float *)(v0_1))->v);
    v0_6 = *(int *)((v0_1 + 0x0));
    *(unsigned int *)0xC136D80 = v0_6;
    FUN_0c05d156(v0_6, v0_5, 0xC2B9738, w0_1);
    L_C05F59C:;
    if ((((*(signed char *)(((v0_1 + 0x3F) + 0x0))) & 16) != 0)) goto L_C05F5B4;
    (((struct o4_float *)(v0_1))->v) = (((((struct o4_float *)(v0_1))->v)) + ((((struct o8_float *)(v0_1))->v)));
    L_C05F5B4:;
    w0_1 = (0.0f);
    if ((0.0f > ((((struct o8_float *)(v0_1))->v)))) goto L_C05F60C;
    w0_1 = (((struct o4_float *)(v0_1))->v);
    v0_5 = *(int *)(((*(int *)((v0_1 + 0x0))) + 0x0));
    w0_2 = (w0_1);
    FPUL_ = ((v0_5 - 1));
    if (((float)(v0_5 - 1) > w0_1)) goto L_C05F64C;
    if ((((*(signed char *)(((v0_1 + 0x3F) + 0x0))) & 128) == 0)) goto L_C05F5EC;
    w0_1 = FUN_0c05b422((*(int *)(((*(int *)((v0_1 + 0x0))) + 0x0))), ((((struct o4_float *)(v0_1))->v)));
    (((struct o4_float *)(v0_1))->v) = w0_1;
    w0_1 = (w0_1);
    L_C05F602:;
    if (((*(int *)((v0_1 + 0x30))) != 0)) goto L_C05F644;
    goto L_C05F64C;
    L_C05F644:;
    v0_5 = ((int (*)(int, int, int, int, float))((*(int *)((v0_1 + 0x30)))))(v0_1, v0_2, v0_3, v0_4, w0_0);
    *(unsigned int *)((v0_1 + 0x30)) = v0_0;
    goto L_C05F64C;
    L_C05F5EC:;
    v0_5 = *(int *)(((*(int *)((v0_1 + 0x0))) + 0x0));
    (((struct o4_float *)(v0_1))->v) = (float)(v0_5 - 1);
    *(unsigned int *)((v0_1 + 0x3C)) = ((*(int *)((v0_1 + 0x3C))) | 0x10000000);
    FPUL_ = ((v0_5 - 1));
    goto L_C05F602;
    L_C05F60C:;
    if ((((((struct o4_float *)(v0_1))->v)) > w0_1)) goto L_C05F64C;
    if ((((*(signed char *)(((v0_1 + 0x3F) + 0x0))) & 128) == 0)) goto L_C05F630;
    w0_1 = FUN_0c05b422((*(int *)(((*(int *)((v0_1 + 0x0))) + 0x0))), ((((struct o4_float *)(v0_1))->v)));
    (((struct o4_float *)(v0_1))->v) = w0_1;
    w0_1 = (w0_1);
    L_C05F63E:;
    if (((*(int *)((v0_1 + 0x30))) == 0)) goto L_C05F64C;
    goto L_C05F644;
    L_C05F630:;
    (((struct o4_float *)(v0_1))->v) = 0.0f;
    *(unsigned int *)((v0_1 + 0x3C)) = ((*(int *)((v0_1 + 0x3C))) | 0x10000000);
    goto L_C05F63E;
}

int FUN_0c0106f4(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;
    register float u1;
    register float u2;

    t1 = (((struct o58_int *)(((a4 * 0x3CC) + 0xC1758B4)))->v);
    if ((t1 != 3) && ((t1 != 4) && ((t1 != 1) && (t0 = *(int *)0xC177D58, t0 != 1)))) {
        t0 = *(int *)0xC118758;
        *(unsigned int *)0xC118758 = (t0 - 1);
        if ((int)(t0 - 1) < 0) {
            *(unsigned int *)0xC118758 = 0x0;
        }
    } else {
        t0 = *(int *)0xC118758;
        *(unsigned int *)0xC118758 = (t0 + 0x1);
        if ((int)(t0 + 0x1) > (int)0x14) {
            *(unsigned int *)0xC118758 = 0x14;
        }
    }
    nlPushMatrix(0x0);
    FUN_0c0739a0((((a4 * 0x3CC) + 0xC1758B4) + 0x7C));
    nlRotateAY((unsigned short)((((struct o8A_short *)(((a4 * 0x3CC) + 0xC1758B4)))->v)));
    nlRotateAX((unsigned short)((((struct o88_short *)(((a4 * 0x3CC) + 0xC1758B4)))->v)));
    nlRotateAZ((unsigned short)((((struct o8C_short *)(((a4 * 0x3CC) + 0xC1758B4)))->v)));
    nlPushMatrix(0x0);
    nlRotateAX((unsigned short)((((struct oB0_short *)(((a4 * 0x3CC) + 0xC1758B4)))->v)));
    nlRotateAZ((unsigned short)((((struct oB4_short *)(((a4 * 0x3CC) + 0xC1758B4)))->v)));
    FUN_0c073a30(0.0f, -1.20000005f, 0.0f);
    nlGetMatrix((0xB8 + ((a4 * 0x3CC) + 0xC1758B4)));
    nlObjPutUseViewMatrix((*(int *)((((((struct o78_int *)(((a4 * 0x3CC) + 0xC1758B4)))->v)) + 0x10))));
    if (((((struct o58_int *)(((a4 * 0x3CC) + 0xC1758B4)))->v)) == 0) {
        t0 = (*(int *)((((((struct o78_int *)(((a4 * 0x3CC) + 0xC1758B4)))->v)) + 0x18)));
    } else {
        t0 = (*(int *)((((((struct o78_int *)(((a4 * 0x3CC) + 0xC1758B4)))->v)) + 0x14)));
    }
    nlObjPutUseViewMatrix(t0);
    nlObjPutUseViewMatrix((*(int *)((((((int)((int)(*(int *)0xC118758) / (int)0x5)) << 2) + ((((struct o78_int *)(((a4 * 0x3CC) + 0xC1758B4)))->v))) + 0x20))));
    FUN_0c030b6c((*(int *)0xC175C80));
    GetRotVec((((a4 * 0x3CC) + 0xC1758B4) + 0x30));
    nlPopMatrix(0x1);
    u0 = (((struct o0_float *)0xC010968)->v);
    u1 = (((struct o4_float *)0xC010968)->v);
    t0 = ((((struct o78_int *)(((a4 * 0x3CC) + 0xC1758B4)))->v));
    t1 = ((((struct o70_int *)(((a4 * 0x3CC) + 0xC1758B4)))->v));
    t2 = 0x0;
    t3 = (0x1A4 + ((a4 * 0x3CC) + 0xC1758B4));
    for (;;) {
        if ((int)t2 < (int)0x2) {
            u2 = (((struct o16C_float *)(((a4 * 0x3CC) + 0xC1758B4)))->v);
            t4 = (((((struct o82_short *)(t3))->v)) + (int)(u2 * u1));
        } else {
            u2 = (((struct o170_float *)(((a4 * 0x3CC) + 0xC1758B4)))->v);
            t4 = (((((struct o82_short *)(t3))->v)) + (int)(u2 * u1));
        }
        (((struct o82_ushort *)(t3))->v) = t4;
        nlPushMatrix(0x0);
        FUN_0c073a30((*(float *)((t1 + 0x0))), ((((((struct o130_float *)(((a4 * 0x3CC) + 0xC1758B4)))->v)) - ((((struct o30_float *)(t3))->v))) + u0), ((((struct o8_float *)(t1))->v)));
        nlRotateAY((unsigned short)((((struct o80_short *)(t3))->v)));
        FUN_0c072230(((((t2 << 1) + t2) << 2) + 0xC096E18), (t3 + 0x5C));
        nlRotateAX((unsigned short)((((struct o82_short *)(t3))->v)));
        t4 = *(int *)((t0 + 0x0));
        t0 = (t0 + 0x4);
        nlObjPutUseViewMatrix(t4);
        nlPopMatrix(0x1);
        t2 = (t2 + 0x1);
        t3 = (t3 + 0x84);
        t1 = (t1 + 0xC);
        if ((int)t2 >= (int)0x4) {
            break;
        }
    }
    return nlPopMatrix(0x1);
}

int FUN_0c067f60(int a4)
{
    int stk[4];
    register int t81;
    register int t16;
    register float t37;
    register int t41;
    register float u62;
    register int t2;
    register int t3;
    register int t103;

    FUN_0c07fdc8();
    if (((*(int *)0xC177D58) != 0) && ((t2 = *(int *)0xC177D58, t2 != 1) && ((t3 = *(int *)0xC177D58, t3 != 2) && (t103 = *(int *)0xC177D58, t103 != 13)))) {
    } else {
        t81 = *(signed char *)(((a4 + 0x63) + 0x0));
        t103 = t81;
        if ((t81 & 2) == 0) {
        } else {
            if ((*(int *)0xC177CE8) == 0) {
            } else {
                t16 = *(int *)0xC1EC720;
                t81 = t16;
                if (t16 == 2) {
                } else {
                    FUN_0c073360();
                    FUN_0c073a30(((((struct o40_float *)(a4))->v)), (((((struct o44_float *)(a4))->v)) + ((((struct o1C_float *)(a4))->v))), ((((struct o48_float *)(a4))->v)));
                    nlRotateAY((*(int *)((a4 + 0x24))));
                    *(volatile float *)((a4 + 0x54));
                    *(volatile float *)((a4 + 0x50));
                    *(volatile float *)((a4 + 0x4C));
                    FUN_0c05b410();
                    nlPushMatrix(0x0);
                    if ((*(int *)0xC17590C) != 0) {
                        nlScale(0.5f, 0.5f, 0.5f);
                        FUN_0c074f20(0.5f);
                    }
                    t37 = nlLength((a4 + 0x40), 0xC177D38);
                    t41 = 0xC3CC208;
                    if (450.0f > t37) {
                    } else {
                        nlObjPutUseViewMatrix(0xC3CCC68);
                        nlRotateAY(0x8000);
                        t41 = 0xC3CCC68;
                    }
                    nlObjPutUseViewMatrix(t41);
                    nlPopMatrix(0x1);
                    FUN_0c072ff0();
                    FUN_0c073ab0();
                    if ((*(int *)0xC17590C) != 0) {
                        nlScale(0.5f, 0.5f, 0.5f);
                        FUN_0c074f20(0.5f);
                    }
                    nlObjPut((*(int *)((((((*(int *)((a4 + 0x4))) - 1) << 2) + ((int)stk + 0)) + 0x0))));
                    FUN_0c05b3fc();
                    nlPopMatrix(0x1);
                    (((struct o1C_float *)(a4))->v) = (((((struct o1C_float *)(a4))->v)) + ((((struct o20_float *)(a4))->v)));
                    u62 = (((struct o0_float *)0xC0681F4)->v);
                    if (u62 > ((((struct o1C_float *)(a4))->v))) {
                        (((struct o1C_float *)(a4))->v) = u62;
                        (((struct o20_float *)(a4))->v) = ((((struct o4_float *)0xC0681F4)->v));
                    }
                    (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) - 0.0250000004f);
                    *(unsigned int *)((a4 + 0x24)) = ((*(int *)((a4 + 0x24))) + 0x100);
                    t81 = 0x20;
                }
            }
            t103 = t81;
        }
    }
    return t103;
}
