/* Straight-line functions with calls and guards (batch gen_bu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_float { char p[0x20]; float v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o200_uint { char p[0x200]; unsigned int v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o22C_uint { char p[0x22C]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o24_ushort { char p[0x24]; unsigned short v; };
struct o26_short { char p[0x26]; short v; };
struct o26_ushort { char p[0x26]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o28_ushort { char p[0x28]; unsigned short v; };
struct o2A_ushort { char p[0x2A]; unsigned short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o2C_ushort { char p[0x2C]; unsigned short v; };
struct o2E_ushort { char p[0x2E]; unsigned short v; };
struct o30_float { char p[0x30]; float v; };
struct o30_int { char p[0x30]; int v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o34_float { char p[0x34]; float v; };
struct o34_int { char p[0x34]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o38_int { char p[0x38]; int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3C_int { char p[0x3C]; int v; };
struct o3C_uint { char p[0x3C]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_int { char p[0x40]; int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_int { char p[0x44]; int v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oA0_int { char p[0xA0]; int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int FUN_0c029b12(int, float);
int FUN_0c03b318(int);
int FUN_0c03f154(int);
int FUN_0c050386(int, int, int, int, int);
int FUN_0c0565d6(void);
int FUN_0c058ca6(int, int);
int FUN_0c05b56c(int, int, int);
int FUN_0c06e990(int);
int FUN_0c070890(float);
int FUN_0c070e60(void);
float FUN_0c070e80(void);
int FUN_0c072230(int, int);
int FUN_0c072290(int, int);
int FUN_0c072ff0(void);
int FUN_0c073360(void);
float FUN_0c073b40(int, int);
int FUN_0c073c40(int, int, float);
float FUN_0c073c60(int);
int FUN_0c0755f0(int);
int FUN_0c076230(float, float, float);
int FUN_0c078810(int, int, int);
int FUN_0c078890(float);
int FUN_0c07ada0(int);
int FUN_0c07ff00(void);
int FUN_0c08d87e(int, int);
int FUN_0c08eee0(int);
int FUN_0c08f204(int, int, int);
int FUN_0c08f5d8(int);
int FUN_0c08f9c4(int, int);
int FUN_0c08f9f6(int, int);
int FUN_0c08faa8(int, int);
int FUN_0c08fabc(int, int);
int FUN_0c08fc6c(int, int);
int FUN_0c08fd60(int, int);
int FUN_0c090b10(int, int);
int FUN_0c090e4c(int, int, int, int);
int FUN_0c14f7a8(int, int, int, int);
int FUN_0c14f8ac(int);
extern int _builtin_get_imask(void);
extern void _builtin_prefetch(void *);
extern void _builtin_set_imask(int);
int buIsFormat(int);
int kdGetDevice(int);
int kdGetDeviceInfo(int);
int kdGetStatus(int);
int kdIsChanged(int);
int kdRecognizeChanged(int);
int kmSetHSyncCallback(int, int);
int kmSetVSyncCallback(int, int);
int nlMultiMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlSubVector3op(int, int, int);
int set_event(int, int);
int vmsfb_sleep(void);
int vmsfs_diskfree(int, int);
int vmsfs_fclose(int, int);
int vmsfs_fgetinfo(int, int, int);
int vmsfs_fgetsize(int, int);
int vmsfs_fopen(int, int, int);
int vmsfs_fseek(int, int, int);
int vmsfs_lockbank(int, int);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
int vmsio_kd_bank_command(int, int, int, int, int);
int FUN_0c02f4ca(int a4, int a5, int a6);
int FUN_0c01fd96(int a4);
int FUN_0c01e15a(void);
float FUN_0c028280(int a4, int a5, int a6, int a7, float f4);
int FUN_0c056428(void);
int FUN_0c06c8ea(int a4);
int vmsio_bank_lock(int a4, int a5);
int syChainAddHandler(int a4, int a5, int a6, int a7);
int FUN_0c011d52(int a4, int a5, int a6);
void FUN_0c05b0dc(void);
float FUN_0c065170(int a4);
int FUN_0c08dad0(int a4, int a5, int a6);
int FUN_0c04c194(int a4);
int FUN_0c090c94(int a4, int a5, int a6, int a7, int a8);
int vmsfs_getinfo(int a4, int a5);
int vmsfs_frename(int a4, int a5, int a6);
int vmsfs_fsettime(int a4, int a5, int a6);

int FUN_0c02f4ca(int a4, int a5, int a6)
{
    int stk[7];
    register int t0;
    register float t1;
    register float u2;
    register int t85;
    register int t7;
    register float u28;
    register int t29;
    register int t32;
    register int t40;
    register float u44;
    register float u46;
    register int t48;
    register float u53;
    register float u55;
    register int t57;
    register float u62;
    register float u64;
    register int t66;
    register int t70;
    register int t77;
    register int t30;
    register int t31;
    register float u33;
    register int t80;
    int R1000;
    int R1004;

    R1000 = *(int *)((int)stk + 0);
    R1004 = *(int *)((int)stk + 4);

    *(unsigned int *)(((int)stk + 8)) = a4;
    R1004 = a5;
    t0 = (((struct o0_int *)0xC279048)->v);
    t1 = FUN_0c073c60(a5);
    u2 = (((struct o0_float *)0xC02F6B0)->v);
    t85 = 0xC02F6B4;
    if (((((struct o4_float *)0xC02F6B0)->v)) > (t1 * u2)) {
    } else {
        if ((int)a6 > (int)(0x5A - t0)) {
            if ((int)((a6 + 0x1) >> 1) > (int)(0x5A - t0)) {
                (((struct o0_uint *)0xC279048)->v) = 0x5A;
                t7 = (((struct o4_int *)0xC279048)->v);
                (((struct o4_uint *)0xC279048)->v) = (t7 + (((a6 + 0x1) >> 1) - (0x5A - t0)));
                if ((int)(t7 + (((a6 + 0x1) >> 1) - (0x5A - t0))) >= (int)0x5A) {
                    (((struct o4_uint *)0xC279048)->v) = (((((struct o4_int *)0xC279048)->v)) - 0x5A);
                }
            } else {
                (((struct o0_uint *)0xC279048)->v) = (((((struct o0_int *)0xC279048)->v)) + ((a6 + 0x1) >> 1));
            }
            t32 = ((a6 + 0x1) >> 1);
        } else {
            (((struct o0_uint *)0xC279048)->v) = (((((struct o0_int *)0xC279048)->v)) + a6);
            t32 = a6;
        }
        FUN_0c073360();
        FUN_0c072ff0();
        u28 = (((struct o20_float *)0xC02F6B0)->v);
        t29 = 0xC02F6D0;
        for (;;) {
            if (t32 != 0) {
                t30 = ((((struct o8_int *)0xC279048)->v));
                *(volatile int *)(((int)stk + 8));
                t31 = t30;
                t30 = (t30 << 2);
                t30 = (t30 << 1);
                t30 = (t30 + t31);
                t31 = 0xC07FF00;
                t30 = (t30 << 2);
                t30 = (t30 + 0xC2783A0);
                t29 = 0xC;
                t29 = (FUN_0c07ff00());
                t29 = ((((struct o8_int *)0xC279048)->v));
                t31 = t29;
                t29 = (t29 << 2);
                t29 = (t29 << 1);
                t29 = (t29 + t31);
                t29 = (t29 << 2);
                t31 = 0xC;
                t29 = (t29 + 0xC2783A0);
                t31 = (t31 + t29);
                t40 = t31;
                R1000 = t40;
                u33 = (*(float *)(((R1004) + 0x0)));
                t29 = 0x4;
                u44 = (t1 * u2);
                u46 = u33;
                u46 = u46 + u44 * (((FUN_0c070e80()) + u28));
                u33 = u46;
                u33 = (u33 * (1.0f + 1.0f));
                *(float *)((t40 + 0x0)) = u33;
                t31 = ((((struct o8_int *)0xC279048)->v));
                t48 = t31;
                t31 = (t31 << 2);
                t31 = (t31 << 1);
                t31 = (t31 + t48);
                t31 = (t31 << 2);
                t31 = (t31 + 0xC2783A0);
                R1000 = (0x10 + t31);
                t30 = (R1004);
                u33 = (*(float *)((t30 + t29)));
                t30 = (0x10 + t31);
                t29 = 0x8;
                u53 = (t1 * u2);
                u55 = u33;
                u55 = u55 + u53 * (((FUN_0c070e80()) + u28));
                u33 = u55;
                u33 = (u33 * (1.0f + 1.0f));
                *(float *)((t30 + 0x0)) = u33;
                t31 = ((((struct o8_int *)0xC279048)->v));
                t57 = t31;
                t31 = (t31 << 2);
                t31 = (t31 << 1);
                t31 = (t31 + t57);
                t31 = (t31 << 2);
                t31 = (t31 + 0xC2783A0);
                R1000 = (0x14 + t31);
                t30 = (R1004);
                u33 = (*(float *)((t30 + t29)));
                t30 = (0x14 + t31);
                u62 = (t1 * u2);
                u64 = u33;
                u64 = u64 + u62 * (((FUN_0c070e80()) + u28));
                u33 = u64;
                u33 = (u33 * (1.0f + 1.0f));
                *(float *)((t30 + 0x0)) = u33;
                t30 = 0x1E;
                t31 = ((((struct o8_int *)0xC279048)->v));
                t66 = t31;
                t31 = (t31 << 2);
                t31 = (t31 << 1);
                t31 = (t31 + t66);
                t31 = (t31 << 2);
                t31 = (t31 + 0xC2783A0);
                *(unsigned int *)((t31 + 0x18)) = t30;
                t31 = ((((struct o8_int *)0xC279048)->v));
                t30 = ((((struct o14_int *)0xC279048)->v));
                t70 = t31;
                t31 = (t31 << 2);
                t31 = (t31 << 1);
                t31 = (t31 + t70);
                t31 = (t31 << 2);
                t31 = (t31 + 0xC2783A0);
                *(unsigned int *)((t31 + 0x1C)) = t30;
                t31 = ((((struct o14_int *)0xC279048)->v));
                t31 = (t31 ^ 0x1);
                (((struct o14_uint *)0xC279048)->v) = t31;
                t31 = 0xC072230;
                t29 = (FUN_0c072230((*(int *)(((int)stk + 8))), (((int)stk + 4) + 0xC)));
                t31 = 0xC07FF00;
                *(unsigned int *)((((((((((struct o8_int *)0xC279048)->v)) << 2) << 2) << 1) + 0xC277840) + 0x0)) = 0x1;
                t77 = (((struct o8_int *)0xC279048)->v);
                *(unsigned int *)(((int)stk + 12)) = ((((t77 << 2) << 2) << 1) + 0xC277840);
                t30 = (((((t77 << 2) << 2) << 1) + 0xC277840) + 0x8);
                t30 = (t30 + 0xC);
                t29 = 0xC;
                t29 = (FUN_0c07ff00());
                t30 = t80;
                t29 = 0xC;
                t29 = (FUN_0c07ff00());
                t30 = ((((struct o8_int *)0xC279048)->v));
                t31 = 0x5A;
                t30 = (t30 + 0x1);
                (((struct o8_uint *)0xC279048)->v) = t30;
                if ((int)t30 >= (int)t31) {
                    t30 = 0x0;
                    (((struct o8_uint *)0xC279048)->v) = t30;
                }
                t32 = (t32 - 1);
                continue;
            }
            break;
        }
        t85 = (nlPopMatrix(0x1));
    }
    return t85;
}

int FUN_0c01fd96(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    if (a4 != 0) {
        if (a4 != 1) {
            t0 = a4;
            if (a4 == 2) {
                FUN_0c14f7a8(0x0, 0xC09AEF0, 0x0, 0xC26E72C);
                t1 = 0x0;
                for (;;) {
                    t2 = FUN_0c14f8ac(0x0);
                    if (t2 == 4) {
                        t1 = (t1 + 0x1);
                        if ((int)t1 > (int)0xA) {
                            *(unsigned int *)0xC1EC718 = ((*(int *)0xC1EC718) + 0x1);
                        }
                    }
                    if (t2 == 3) {
                        break;
                    }
                }
                (((struct o0_uint *)0xC2707E0)->v) = 0xC09ABCC;
                (((struct o4_uint *)0xC2707E0)->v) = 0xC09ABF4;
                (((struct o8_uint *)0xC2707E0)->v) = 0xA;
                (((struct oC_uint *)0xC2707E0)->v) = 0x9D;
                *(unsigned int *)0xC123E50 = 0xC145FF4;
                (((struct o0_uint *)0xC1ECD40)->v) = 0xC12311C;
                (((struct o4_uint *)0xC1ECD40)->v) = 0xC1231F8;
                t0 = 0xC145FF4;
            }
            t1 = t0;
        } else {
            FUN_0c14f7a8(0x0, 0xC09AEE4, 0x0, 0xC26E72C);
            t0 = 0x0;
            for (;;) {
                t2 = FUN_0c14f8ac(0x0);
                if (t2 == 4) {
                    t0 = (t0 + 0x1);
                    if ((int)t0 > (int)0xA) {
                        *(unsigned int *)0xC1EC718 = ((*(int *)0xC1EC718) + 0x1);
                    }
                }
                if (t2 == 3) {
                    break;
                }
            }
            (((struct o0_uint *)0xC2707E0)->v) = 0xC09A178;
            (((struct o4_uint *)0xC2707E0)->v) = 0xC09A5D0;
            (((struct o8_uint *)0xC2707E0)->v) = 0x116;
            (((struct oC_uint *)0xC2707E0)->v) = 0x17F;
            *(unsigned int *)0xC123E50 = 0xC144744;
            (((struct o0_uint *)0xC1ECD40)->v) = 0xC11FD50;
            (((struct o4_uint *)0xC1ECD40)->v) = 0xC12131C;
            t1 = 0xC144744;
        }
        t0 = t1;
    } else {
        FUN_0c14f7a8(0x0, 0xC09AED8, 0x0, 0xC26E72C);
        t1 = 0x0;
        for (;;) {
            t2 = FUN_0c14f8ac(0x0);
            if (t2 == 4) {
                t1 = (t1 + 0x1);
                if ((int)t1 > (int)0xA) {
                    *(unsigned int *)0xC1EC718 = ((*(int *)0xC1EC718) + 0x1);
                }
            }
            if (t2 == 3) {
                break;
            }
        }
        (((struct o0_uint *)0xC2707E0)->v) = 0xC099898;
        (((struct o4_uint *)0xC2707E0)->v) = 0xC099BE8;
        (((struct o8_uint *)0xC2707E0)->v) = 0xD4;
        (((struct oC_uint *)0xC2707E0)->v) = 0x164;
        *(unsigned int *)0xC123E50 = 0xC142FE4;
        (((struct o0_uint *)0xC1ECD40)->v) = 0xC11D0C8;
        (((struct o4_uint *)0xC1ECD40)->v) = 0xC11E16C;
        t0 = 0xC142FE4;
    }
    return t0;
}

int FUN_0c01e15a(void)
{
    int t0;
    register int t1;
    register int t2;

    (((struct o24_uint *)0xC1ECCE8)->v) = 0x0;
    if (((((struct o0_int *)0xC1EC720)->v)) != 2) {
        (((struct o2C_uint *)0xC1ECCE8)->v) = 0x16E;
    } else {
        (((struct o2C_uint *)0xC1ECCE8)->v) = 0xBE;
    }
    (((struct o0_uint *)0xC1ECCA8)->v) = 0x0;
    (((struct o4_uint *)0xC1ECCA8)->v) = 0x0;
    (((struct o8_uint *)0xC1ECCA8)->v) = 0x0;
    *(unsigned int *)0xC11D0BC = 0x1;
    FUN_0c03b318(0x1);
    if (((((struct o0_int *)0xC1EC720)->v)) != 2) {
        if (((((struct o20_int *)0xC1EC720)->v)) == 1) {
            t0 = FUN_0c03f154(0x0);
            if (t0 != 3) {
                t0 = FUN_0c03f154(0x1);
                if ((t0 != 4) && (t0 != 0)) {
                    switch (t0) {
                    case 1:
                        (((struct o28_uint *)0xC1ECCE8)->v) = 0x1;
                        (((struct oC_uint *)0xC1ECCA8)->v) = 0x2A30;
                        break;
                    case 2:
                        (((struct o28_uint *)0xC1ECCE8)->v) = 0x2;
                        (((struct oC_uint *)0xC1ECCA8)->v) = 0x4650;
                        break;
                    case 3:
                        (((struct o28_uint *)0xC1ECCE8)->v) = 0x3;
                        (((struct oC_uint *)0xC1ECCA8)->v) = 0x8CA0;
                        break;
                    default:
                        (((struct o28_uint *)0xC1ECCE8)->v) = 0x0;
                        (((struct oC_uint *)0xC1ECCA8)->v) = (((((struct o4_int *)0xC096520)->v)) * 0x3C);
                        break;
                    }
                } else {
                    (((struct o28_uint *)0xC1ECCE8)->v) = 0x0;
                    (((struct oC_uint *)0xC1ECCA8)->v) = (((((struct o4_int *)0xC096520)->v)) * 0x3C);
                }
            } else {
                (((struct o28_uint *)0xC1ECCE8)->v) = 0x4;
                (((struct oC_uint *)0xC1ECCA8)->v) = 0x12C0;
            }
        } else {
            (((struct o28_uint *)0xC1ECCE8)->v) = 0x0;
            (((struct oC_uint *)0xC1ECCA8)->v) = (((((struct o0_int *)0xC096520)->v)) * 0x3C);
        }
    } else {
        (((struct o28_uint *)0xC1ECCE8)->v) = 0x5;
        t0 = (((struct o4_int *)0xC1EC720)->v);
        (((struct oC_uint *)0xC1ECCA8)->v) = ((*(int *)(((((t0 << 1) + t0) << 2) + 0xC09C8F8))) * 0x3C);
    }
    (((struct o10_uint *)0xC1ECCA8)->v) = 0x0;
    (((struct o14_uint *)0xC1ECCA8)->v) = 0x0;
    (((struct o18_uint *)0xC1ECCA8)->v) = 0x0;
    (((struct o1C_float *)0xC1ECCA8)->v) = 0.0f;
    (((struct o24_uint *)0xC1ECCA8)->v) = 0x0;
    (((struct o20_uint *)0xC1ECCA8)->v) = 0x0;
    (((struct o2C_uint *)0xC1ECCA8)->v) = 0x0;
    (((struct o28_uint *)0xC1ECCA8)->v) = 0x0;
    (((struct o30_uint *)0xC1ECCA8)->v) = 0x0;
    (((struct o34_float *)0xC1ECCA8)->v) = 0.0f;
    (((struct o38_float *)0xC1ECCA8)->v) = 0.0f;
    (((struct o3C_uint *)0xC1ECCA8)->v) = 0x0;
    (((struct o0_uint *)0xC1ECCE8)->v) = 0x1;
    (((struct o4_uint *)0xC1ECCE8)->v) = 0x0;
    (((struct o8_uint *)0xC1ECCE8)->v) = ((((struct o0_int *)0xC097670)->v));
    (((struct oC_uint *)0xC1ECCE8)->v) = ((((struct o30_int *)0xC097670)->v));
    (((struct o14_uint *)0xC1ECCE8)->v) = 0x1;
    (((struct o18_uint *)0xC1ECCE8)->v) = 0x0;
    (((struct o1C_uint *)0xC1ECCE8)->v) = 0x0;
    (((struct o20_uint *)0xC1ECCE8)->v) = 0x384;
    (((struct o30_uint *)0xC1ECCE8)->v) = 0x0;
    FUN_0c050386(0xC1ECCB4, 0xC1ECCB8, 0xC1ECCC8, 0xC1ECCCC, 0xC1759D8);
    t0 = (((struct o0_int *)0xC1EC720)->v);
    t1 = (((struct o4_int *)0xC1EC720)->v);
    t2 = *(int *)(((((t0 + t1) << 2) + 0xC0F34E8) + 0x0));
    (((struct o0_uint *)0xC2A59CC)->v) = (*(int *)(((((t2 << 1) + t2) << 2) + (*(int *)0xC2ADA7C))));
    t2 = *(int *)(((((t0 + t1) << 2) + 0xC0F34E8) + 0x0));
    (((struct o4_uint *)0xC2A59CC)->v) = (*(int *)(((*(int *)((((((t2 << 1) + t2) << 2) + (*(int *)0xC2ADA7C)) + 0x4))) + 0x0)));
    return 0xC2A59CC;
}

float FUN_0c028280(int a4, int a5, int a6, int a7, float f4)
{
    int stk[2];
    int t1;
    register float u6;
    register float u9;
    register float u10;
    register float u15;
    register float u16;
    register float u17;
    register float u18;
    register float u20;
    register float u21;
    register int t22;
    register float u23;
    register float u24;
    register float u25;
    register float u28;
    register float u31;
    register float u34;
    register float u37;
    register int t39;
    register int t40;
    register int t41;
    register int t42;
    register int t44;
    register int t45;
    register int t46;
    register int t47;
    register int t48;
    register int t49;
    register int t50;
    register int t60;
    register float u113;
    register float u93;
    register float u75;
    int R1000;

    R1000 = *(int *)((int)stk + 0);

    t1 = *(int *)(((*(int *)0xC2D0C3C) + 0x8));
    R1000 = 0xC128ACC;
    if ((int)(signed char)a4 < (int)0x20) {
    } else {
        if ((int)(signed char)a4 > (int)0x7F) {
        } else {
            if (0.0f > (*(float *)(((((((struct o0_int *)0xC270D14)->v)) + (((signed char)(a4 - 32) << 2) << 2)) + 0x0)))) {
                u6 = (((struct oC_float *)0xC270D14)->v);
                u9 = ((((struct o0_float *)0xC128ADC)->v));
                u9 = u9 + u6 * ((((((struct o4_float *)((((((struct o0_int *)0xC270D14)->v)) + (((signed char)(a4 - 32) << 2) << 2))))->v)) + -1.0f));
                (((struct o0_float *)0xC128ADC)->v) = u9;
                u75 = u6;
            } else {
                u10 = (((struct o0_float *)0xC128ADC)->v);
                (((struct o2C_float *)0xC128A54)->v) = u10;
                (((struct o18_float *)0xC128A54)->v) = u10;
                u15 = ((((struct o0_float *)0xC128ADC)->v));
                u15 = u15 + ((((struct oC_float *)0xC270D14)->v)) * ((((struct o4_float *)((((((struct o0_int *)0xC270D14)->v)) + (((signed char)(a4 - 32) << 2) << 2))))->v));
                (((struct o14_float *)0xC128A94)->v) = u15;
                (((struct o0_float *)0xC128A94)->v) = u15;
                u16 = (((struct o4_float *)0xC128ADC)->v);
                (((struct o4_float *)0xC128A94)->v) = u16;
                (((struct o1C_float *)0xC128A54)->v) = u16;
                u17 = (((struct o4_float *)0xC128ADC)->v);
                u18 = (((struct o1C_float *)0xC270D14)->v);
                (((struct o18_float *)0xC128A94)->v) = (u17 + u18);
                (((struct o30_float *)0xC128A54)->v) = (u17 + u18);
                u20 = (((struct o24_float *)0xC270D14)->v);
                u21 = *(float *)(((((((struct o0_int *)0xC270D14)->v)) + (((signed char)(a4 - 32) << 2) << 2)) + 0x0));
                (((struct o38_float *)0xC128A54)->v) = (u21 * u20);
                (((struct o24_float *)0xC128A54)->v) = (u21 * u20);
                t22 = (((struct o0_int *)0xC270D14)->v);
                *(unsigned int *)(((int)stk + 4)) = (t22 + (((signed char)(a4 - 32) << 2) << 2));
                u23 = *(float *)(((t22 + (((signed char)(a4 - 32) << 2) << 2)) + 0x0));
                u24 = (((struct o4_float *)((t22 + (((signed char)(a4 - 32) << 2) << 2))))->v);
                u25 = (((struct o24_float *)0xC270D14)->v);
                (((struct o20_float *)0xC128A94)->v) = ((u23 + u24) * u25);
                (((struct oC_float *)0xC128A94)->v) = ((u23 + u24) * u25);
                u28 = *(float *)((((*(int *)(((((((struct o0_int *)0xC270D14)->v)) + (((signed char)(a4 - 32) << 2) << 2)) + 0x8))) << 2) + 0xC09DA24));
                (((struct o10_float *)0xC128A94)->v) = u28;
                (((struct o28_float *)0xC128A54)->v) = u28;
                u31 = *(float *)((((*(int *)(((((((struct o0_int *)0xC270D14)->v)) + (((signed char)(a4 - 32) << 2) << 2)) + 0x8))) << 2) + 0xC09DA7C));
                (((struct o24_float *)0xC128A94)->v) = u31;
                (((struct o3C_float *)0xC128A54)->v) = u31;
                u34 = (((struct oC_float *)0xC270D14)->v);
                u37 = ((((struct o0_float *)0xC128ADC)->v));
                u37 = u37 + u34 * ((((((struct o4_float *)((((((struct o0_int *)0xC270D14)->v)) + (((signed char)(a4 - 32) << 2) << 2))))->v)) + -1.0f));
                (((struct o0_float *)0xC128ADC)->v) = u37;
                (((struct o0_uint *)0xFF000038)->v) = ((unsigned int)((unsigned int)t1 >> 16) >> 8);
                (((struct o4_uint *)0xFF000038)->v) = ((unsigned int)((unsigned int)t1 >> 16) >> 8);
                (((struct o0_uint *)0xC128A54)->v) = (((((struct o0_int *)0xC128A54)->v)) | 0x18000);
                t39 = 0x18000;
                t40 = 0x8;
                t41 = ((0x3FFFFFF & t1) | 0xE0000000);
                t42 = 0xC128A4C;
                for (;;) {
                    if (t40 == 0) {
                        break;
                    }
                    t39 = *(int *)((t42 + 0x0));
                    t42 = (t42 + 0x4);
                    t40 = (t40 - 1);
                    *(unsigned int *)((t41 + 0x0)) = t39;
                    t41 = (t41 + 0x4);
                }
                _builtin_prefetch((void *)((0x3FFFFFF & t1) | 0xE0000000));
                t44 = 0xFF000038;
                t45 = t39;
                t46 = 0xC128A54;
                t47 = (((0x3FFFFFF & t1) | 0xE0000000) + 0x20);
                t48 = 0xC128A6C;
                t49 = 0x4;
                t50 = 0xC128ABC;
                for (;;) {
                    if (t49 == 0) {
                        break;
                    }
                    t44 = t49;
                    if (t44 == 1) {
                        *(unsigned int *)((t47 + 0x0)) = 0xF0000000;
                    } else {
                        *(unsigned int *)((t47 + 0x0)) = 0xE0000000;
                    }
                    t45 = (*(int *)((t48 + 0x0)));
                    t48 = (t48 + 0x4);
                    t47 = (t47 + 0x4);
                    *(unsigned int *)((t47 + 0x0)) = t45;
                    t47 = (t47 + 0x4);
                    t45 = (*(int *)((t48 + 0x0)));
                    t48 = (t48 + 0x4);
                    *(unsigned int *)((t47 + 0x0)) = t45;
                    t47 = (t47 + 0x4);
                    t45 = (*(int *)((t48 + 0x0)));
                    t48 = (t48 + 0x4);
                    *(unsigned int *)((t47 + 0x0)) = t45;
                    t47 = (t47 + 0x4);
                    t45 = (*(int *)((t48 + 0x0)));
                    t48 = (t48 + 0x4);
                    *(unsigned int *)((t47 + 0x0)) = t45;
                    t47 = (t47 + 0x4);
                    t45 = (*(int *)((t48 + 0x0)));
                    t48 = (t48 + 0x4);
                    *(unsigned int *)((t47 + 0x0)) = t45;
                    t47 = (t47 + 0x4);
                    t45 = (*(int *)((t50 + 0x0)));
                    t50 = (t50 + 0x4);
                    *(unsigned int *)((t47 + 0x0)) = t45;
                    t47 = (t47 + 0x4);
                    t46 = (R1000);
                    t46 = (t46 + 0x4);
                    R1000 = t46;
                    t46 = (t46 - 4);
                    t45 = (*(int *)((t46 + 0x0)));
                    *(unsigned int *)((t47 + 0x0)) = t45;
                    _builtin_prefetch((void *)t47);
                    t49 = (t49 - 1);
                    t47 = (t47 + 0x4);
                }
                t60 = *(int *)0xC2D0C3C;
                *(unsigned int *)(((t60 + 0x8) + 0x0)) = (((*(int *)(((t60 + 0x8) + 0x0))) & 0xFC000000) | (t47 & 0x3FFFFFF));
                u75 = u34;
            }
            u93 = u75;
        }
        u113 = u93;
    }
    return u113;
}

int FUN_0c056428(void)
{
    register int t1;
    int t10;
    register int t24;
    int t25;

    FUN_0c076230(0.0f, 0.0f, 0.0f);
    t1 = (((struct o0_int *)0xC2B3110)->v);
    if ((int)t1 <= (int)0x58) {
    } else {
        if (t1 == 89) {
            FUN_0c058ca6(0x104A9, 0x0);
            (((struct o0_uint *)0xC1321F4)->v) = (((((struct o0_int *)0xC1321F4)->v)) + 0x1);
        }
        if ((((((struct o0_int *)0xC2B3264)->v)) == 1) && (t10 = (((struct o10_int *)0xC2B3264)->v), t10 == 0)) {
            FUN_0c058ca6(0x204A9, 0x0);
            (((struct o4_uint *)0xC1321F4)->v) = (((((struct o4_int *)0xC1321F4)->v)) + 0x1);
            (((struct o10_uint *)0xC2B3264)->v) = 0x1;
        }
        (((struct o4_uint *)0xC2B3110)->v) = 0x1B2;
        (((struct o38_uint *)0xC2B3110)->v) = 0x200A;
        (((struct o8_float *)0xC2B3110)->v) = 80.0f;
        (((struct oC_float *)0xC2B3110)->v) = (float)(((((struct o0_int *)0xC2B3164)->v)) + 0xDE);
        (((struct o14_float *)0xC2B3110)->v) = (((((struct o10_float *)0xC2B3164)->v)) + 1.0f);
        (((struct o18_float *)0xC2B3110)->v) = (((((struct o10_float *)0xC2B3164)->v)) + 1.0f);
        (((struct o20_float *)0xC2B3110)->v) = 0.0f;
        (((struct o28_float *)0xC2B3110)->v) = 1.0f;
        (((struct o2C_uint *)0xC2B3110)->v) = 0x0;
        FUN_0c07ada0(0xC2B3114);
        FUN_0c0565d6();
        (((struct o38_uint *)0xC2B3110)->v) = 0x200A;
        if (((*(int *)0xC2B31E4) == 0) && ((t24 = (((struct o3C_int *)0xC2B31A4)->v), t24 == 0) && (t25 = (((struct o38_int *)0xC2B31A4)->v), t25 == 0))) {
        } else {
            (((struct o4_uint *)0xC2B3110)->v) = 0x1B1;
            (((struct o8_float *)0xC2B3110)->v) = 214.0f;
            (((struct oC_float *)0xC2B3110)->v) = (float)(((((struct o0_int *)0xC2B3164)->v)) + 0xEE);
            (((struct o14_float *)0xC2B3110)->v) = (((((struct o10_float *)0xC2B3164)->v)) + 1.0f);
            (((struct o18_float *)0xC2B3110)->v) = (((((struct o10_float *)0xC2B3164)->v)) + 1.0f);
            (((struct o20_float *)0xC2B3110)->v) = 0.0f;
            (((struct o28_float *)0xC2B3110)->v) = 1.0f;
            (((struct o2C_uint *)0xC2B3110)->v) = 0x0;
            FUN_0c07ada0(0xC2B3114);
        }
        (((struct o4_uint *)0xC2B3110)->v) = 0x1B3;
        (((struct o8_float *)0xC2B3110)->v) = 332.0f;
        (((struct oC_float *)0xC2B3110)->v) = (float)(((((struct o0_int *)0xC2B3164)->v)) + 0xEE);
        (((struct o14_float *)0xC2B3110)->v) = (((((struct o10_float *)0xC2B3164)->v)) + 1.0f);
        (((struct o18_float *)0xC2B3110)->v) = (((((struct o10_float *)0xC2B3164)->v)) + 1.0f);
        (((struct o20_float *)0xC2B3110)->v) = 0.0f;
        (((struct o28_float *)0xC2B3110)->v) = 1.0f;
        FUN_0c07ada0(0xC2B3114);
        (((struct o0_uint *)0xC2B31A4)->v) = (((((struct o0_int *)0xC2B31A4)->v)) + 0x1);
    }
    return FUN_0c076230(1.0f, 1.0f, 1.0f);
}

int FUN_0c06c8ea(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t0 = *(int *)0xC1EC83C;
    t1 = ((~(((~t0) + 0x1) & 0x3)) + 0x1);
    if ((int)t0 >= 0) {
        t1 = (t0 & 0x3);
    }
    if (t1 != 0) {
        return t1;
    }
    nlPushMatrix((a4 + 0x4));
    t0 = 0xC06CAA8;
    t1 = 0x0;
    t2 = 0xC1129C4;
    t3 = 0x0;
    for (;;) {
        if ((int)t1 >= (int)((((struct o0_int *)0xC11299C)->v))) {
            break;
        }
        t0 = (set_event(0x38, 0xC06C760));
        t4 = t0;
        if (t4 != 0) {
            t0 = (nlPushMatrix(0x0));
            t0 = (nlMultiMatrix((((((*(int *)((t2 + 0x0))) << 2) << 2) << 2) + 0xC1386A8)));
            t0 = (FUN_0c072230((0xC112978 + t3), (t4 + 0x14)));
            t0 = (FUN_0c070e60());
            t0 = (FUN_0c070e60());
            t0 = (FUN_0c070e60());
            t0 = (FUN_0c05b56c((t0 & 0x3FF), (t0 & 0x3FF), (t0 & 0x3FF)));
            t0 = (FUN_0c072290((0xC1129A0 + t3), (t4 + 0x20)));
            t0 = (FUN_0c070e60());
            t0 = (t0 & 0xF);
            t0 = (FUN_0c073c40((t4 + 0x20), (t4 + 0x20), (((((float)t0 * 1.5f) / 15.0f)) + 0.5f)));
            t0 = (FUN_0c070e60());
            t0 = (t0 & 0xF);
            t5 = t0;
            t0 = 0x2C;
            *(float *)((t4 + t0)) = (((((float)t5 * (1.0f + 1.0f)) / 15.0f)) + (1.0f + 1.0f));
            t0 = (FUN_0c070e60());
            t5 = t0;
            t0 = ((((struct o34_int *)0xC11299C)->v));
            t0 = ((int)((int)t5 % (int)t0));
            t0 = (t0 << 2);
            t5 = *(int *)((0xC13C304 + t0));
            t0 = 0x0;
            *(unsigned int *)((t4 + 0x30)) = t5;
            *(unsigned int *)((t4 + 0x34)) = t0;
            t0 = (nlPopMatrix(0x1));
        }
        t2 = (t2 + 0x4);
        t3 = (t3 + 0xC);
        t1 = (t1 + 0x1);
    }
    return nlPopMatrix(0x1);
}

int vmsio_bank_lock(int a4, int a5)
{
    int stk[9];
    register int t1;
    register int t31;
    register int t36;
    register int t40;
    register int t18;
    register int t19;
    register int t20;
    int t21;

    *(unsigned int *)(((int)stk + 32)) = a4;
    *(unsigned int *)(((int)stk + 28)) = a5;
    t1 = *(int *)((((*(int *)(((int)stk + 32))) << 2) + 0xC11833C));
    *(unsigned int *)(((int)stk + 24)) = t1;
    *(unsigned int *)(((int)stk + 16)) = (kdGetDevice(t1));
    *(unsigned int *)(((int)stk + 12)) = (kdGetDeviceInfo((*(int *)(((int)stk + 24)))));
    if ((*(signed char *)(((*(int *)(((int)stk + 16))) + 0x0))) == 0) {
        vmsfb_sleep();
        return 0xFFFFFF01;
    }
    if (((*(int *)(((*(int *)(((int)stk + 12))) + 0x0))) & 2) == 0) {
        vmsfb_sleep();
        return 0xFFFFFF01;
    }
    kdRecognizeChanged((*(int *)(((int)stk + 24))));
    *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 12))) + 0x14);
    if (((*(signed char *)(((*(int *)(((int)stk + 8))) + 0x0))) == 66) && ((t18 = *(int *)(((int)stk + 8)), t19 = *(signed char *)((t18 + 0x1)), t19 == 65) && ((t20 = *(signed char *)((t18 + 0x2)), t20 == 78) && (t21 = *(signed char *)((t18 + 0x3)), t21 == 75)))) {
        for (;;) {
            for (;;) {
                *(unsigned int *)(((int)stk + 16)) = (kdGetDevice((*(int *)(((int)stk + 24)))));
                *(int *)((int)stk + 0) = 0x0;
                *(unsigned int *)(((int)stk + 20)) = (vmsio_kd_bank_command((*(int *)(((int)stk + 24))), 0x1, (*(int *)(((int)stk + 28))), 0x0, 0x0));
                if ((int)(*(int *)(((int)stk + 20))) >= 0) {
                    break;
                }
                vmsfb_sleep();
            }
            for (;;) {
                *(volatile int *)(((int)stk + 20));
                t31 = kdGetStatus((*(int *)(((int)stk + 24))));
                if (t31 != 0) {
                    break;
                }
                vmsfb_sleep();
            }
            *(unsigned int *)(((int)stk + 16)) = (kdGetDevice((*(int *)(((int)stk + 24)))));
            t36 = kdIsChanged((*(int *)(((int)stk + 24))));
            if (t36 != 0) {
                break;
            }
            *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((*(int *)(((int)stk + 16))) + 0x8))) + 0x8);
            t40 = *(signed char *)(((*(int *)(((int)stk + 16))) + 0x4));
            if ((unsigned char)t40 != 8) {
                if ((unsigned char)t40 != 0xFC) {
                    if ((unsigned char)t40 != 0xFB) {
                        return 0xFFFFFF01;
                    }
                    return 0xFFFF0000;
                }
                continue;
            }
            *(unsigned int *)(((int)stk + 4)) = (unsigned char)(*(signed char *)(((*(int *)(((int)stk + 8))) + 0x1)));
            if ((*(int *)(((int)stk + 28))) != 0) {
                *(unsigned int *)(((int)stk + 28)) = 0xFF;
                if ((*(int *)(((int)stk + 4))) != 0xFF) {
                    return 0xFFFF0000;
                }
                return 0x0;
            }
            *(unsigned int *)(((int)stk + 28)) = 0x0;
            if ((*(int *)(((int)stk + 4))) != 0x0) {
                return 0xFFFF0000;
            }
            return 0x0;
        }
        vmsfb_sleep();
        return 0xFFFFFF30;
    }
    return 0x0;
}

int syChainAddHandler(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t1;
    register int t4;
    int t5;
    register int t8;
    register int t48;
    register int t3;
    int t6;
    register int t79;

    *(unsigned short *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    *(unsigned short *)(((int)stk + 8)) = (_builtin_get_imask());
    _builtin_set_imask(0xF);
    t1 = *(short *)(((int)stk + 4));
    t5 = *(int *)((0xC301E60 + (((int)t1 >> 4) << 2)));
    t4 = t5;
    for (;;) {
        if ((t4 != 0) && (t6 = *(int *)((t4 + 0xC)), t3 = t6, (unsigned int)t3 < (unsigned int)(a6 | 0x80000000))) {
            t5 = t4;
            t4 = (*(int *)((t4 + 0x4)));
            continue;
        }
        break;
    }
    t8 = 0x1;
    for (;;) {
        if (((*(int *)(((((t8 << 2) << 2) + 0xC300E60) + 0xC))) & 0x80000000) != 0) {
            t8 = (t8 + 0x1);
            if ((unsigned int)t8 >= (unsigned int)0x100) {
                break;
            }
            continue;
        }
        break;
    }
    if ((unsigned int)t8 >= (unsigned int)0x100) {
        t79 = 0x0;
    } else {
        if ((t4 == 0) && (t5 == 0)) {
            if ((int)t1 < (int)0x900) {
                (((struct o200_uint *)((((int)_builtin_get_vbr()) + ((((0xFFFFFE00 + t1) >> 1) >> 1) >> 1))))->v) = 0xC15DBF2;
            } else {
                if (t1 == 0x900) {
                    kmSetVSyncCallback(0xC15DC16, 0x0);
                } else {
                    if (t1 == 0x920) {
                        kmSetHSyncCallback(0xC15DC60, 0x0);
                    } else {
                        (((struct o22C_uint *)(((int)_builtin_get_vbr())))->v) = 0xC15DC86;
                    }
                }
            }
            *(unsigned int *)((0xC301E60 + (((int)t1 >> 4) << 2))) = (((t8 << 2) << 2) + 0xC300E60);
            *(unsigned int *)(((((t8 << 2) << 2) + 0xC300E60) + 0x4)) = 0x0;
            *(unsigned int *)(((((t8 << 2) << 2) + 0xC300E60) + 0x0)) = (*(int *)(((int)stk + 0)));
            *(unsigned int *)(((((t8 << 2) << 2) + 0xC300E60) + 0x8)) = a7;
            *(unsigned int *)(((((t8 << 2) << 2) + 0xC300E60) + 0xC)) = (a6 | 0x80000000);
            t48 = *(short *)(((int)stk + 4));
            if (((int)t1 >> 8) == 10) {
                (((struct o0_uint *)0xA05F6920)->v) = (((((struct o0_int *)0xA05F6920)->v)) | ((int)0x1 << (int)(((unsigned int)((unsigned int)((unsigned int)(unsigned char)t48 >> 2) >> 2) >> 1) + 0xC)));
            } else {
                if (((int)t1 >> 8) == 11) {
                    (((struct o4_uint *)0xA05F6920)->v) = (((((struct o4_int *)0xA05F6920)->v)) | ((int)0x1 << (int)((unsigned int)((unsigned int)((unsigned int)(unsigned char)t48 >> 2) >> 2) >> 1)));
                }
            }
        } else {
            if (t4 == (*(int *)((0xC301E60 + (((int)t1 >> 4) << 2))))) {
                *(unsigned int *)(((((t8 << 2) << 2) + 0xC300E60) + 0x4)) = t4;
                *(unsigned int *)((0xC301E60 + (((int)t1 >> 4) << 2))) = (((t8 << 2) << 2) + 0xC300E60);
            } else {
                *(unsigned int *)((t5 + 0x4)) = (((t8 << 2) << 2) + 0xC300E60);
                *(unsigned int *)(((((t8 << 2) << 2) + 0xC300E60) + 0x4)) = t4;
            }
            *(unsigned int *)(((((t8 << 2) << 2) + 0xC300E60) + 0x0)) = (*(int *)(((int)stk + 0)));
            *(unsigned int *)(((((t8 << 2) << 2) + 0xC300E60) + 0x8)) = a7;
            *(unsigned int *)(((((t8 << 2) << 2) + 0xC300E60) + 0xC)) = (a6 | 0x80000000);
        }
        t79 = t8;
    }
    _builtin_set_imask(((unsigned int)((((unsigned short)(*(short *)(((int)stk + 8))) & 0xF) << 2) << 2) >> 4));
    return t79;
}

int FUN_0c011d52(int a4, int a5, int a6)
{
    int stk[5];

    register int R0;
    register int R1;
    register int R2;
    register int R3;
    register int R8;
    register int R9;
    register int R10;
    register int R11;
    register float F2;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    float R1012;
    float R1016;
    R1012 = *(float *)((int)stk + 12);
    R1016 = *(float *)((int)stk + 16);
    v0_0 = a4;
    v0_1 = a5;
    v0_2 = a6;
    v0_2 = (0xC070890);
    v0_2 = ((short)v0_1);
    v0_0 = (v0_0);
    w0_1 = (1.0f);
    w0_2 = (16384.0f);
    w0_0 = (0.200000003f);
    w0_4 = (((float)(short)v0_1 * 0.000224946518f));
    FPUL_ = ((short)v0_1);
    if (((int)(short)v0_1 < 0)) goto L_C011E02;
    if (((int)v0_2 > (int)0x480)) goto L_C011DAC;
    w0_3 = (w0_4);
    L_C011DDC:;
    if ((30.6122437f > ((((struct o10_float *)(v0_0))->v)))) goto L_C011E48;
    if ((!(51.0204086f > ((((struct o10_float *)(v0_0))->v))))) goto L_C011EBC;
    w0_4 = (((struct o10_float *)(v0_0))->v);
    *(float *)(((int)stk + 4)) = (w0_4 + -30.6122437f);
    w0_4 = ((w0_4 + -30.6122437f));
    L_C011E6A:;
    *(float *)(((int)stk + 0)) = w0_4;
    v0_1 = FUN_0c070890((w0_4 / 20.4081631f));
    w0_2 = (w0_4 * ((-((float)v0_1 / w0_2)) + w0_1));
    w0_1 = 6.12244892f;
    w0_1 = w0_1 + w0_0 * w0_2;
    w0_4 = (w0_0);
    w0_4 = (w0_1);
    FPUL_ = (v0_1);
    L_C011ED2:;
    w0_0 = (((struct o8_float *)0xC012048)->v);
    v0_1 = !(((((struct oC_float *)0xC012048)->v)) > (w0_4 * w0_0));
    w0_4 = ((w0_4 * w0_0));
    if (v0_1) goto L_C011EE4;
    w0_4 = (((((struct oC_float *)0xC012048)->v)));
    L_C011EE4:;
    (((struct o20_float *)(v0_0))->v) = (w0_3 * w0_4);
    return 0x20;
    L_C011EBC:;
    w0_1 = (((struct o4_float *)0xC012048)->v);
    w0_0 = ((((((struct o10_float *)(v0_0))->v)) + ((((struct o0_float *)0xC012048)->v))) * w0_0);
    w0_0 = -w0_0;
    w0_4 = (w0_1);
    w0_4 = ((w0_0 + w0_1));
    goto L_C011ED2;
    L_C011E48:;
    w0_4 = ((((((struct o10_float *)(v0_0))->v)) * w0_0));
    goto L_C011ED2;
    L_C011DAC:;
    R1012 = (float)(v0_2 - 1152);
    v0_1 = FUN_0c070890(((float)(v0_2 - 1152) / 5376.0f));
    w0_4 = (((-((float)v0_1 / w0_2)) + w0_1) * (R1012));
    w0_3 = 0.259138376f;
    w0_3 = w0_3 + 8.03380462e-05f * w0_4;
    w0_4 = (8.03380462e-05f);
    w0_3 = (w0_3);
    FPUL_ = (v0_1);
    goto L_C011DDC;
    L_C011E02:;
    if (((int)v0_2 < (int)0xFFFFFB80)) goto L_C011E0C;
    w0_3 = (w0_4);
    L_C011E3C:;
    if ((!(30.6122437f > ((((struct o10_float *)(v0_0))->v))))) goto L_C011E50;
    goto L_C011E48;
    L_C011E50:;
    if ((!(51.0204086f > ((((struct o10_float *)(v0_0))->v))))) goto L_C011EBC;
    w0_4 = (((struct o10_float *)(v0_0))->v);
    *(float *)(((int)stk + 8)) = (w0_4 + -30.6122437f);
    w0_4 = ((w0_4 + -30.6122437f));
    goto L_C011E6A;
    L_C011E0C:;
    R1016 = (float)(v0_2 + 0x480);
    v0_1 = FUN_0c070890(((float)(v0_2 + 0x480) / -5376.0f));
    w0_4 = (((-((float)v0_1 / w0_2)) + w0_1) * (R1016));
    w0_3 = -0.259138376f;
    w0_3 = w0_3 + 8.03380462e-05f * w0_4;
    w0_4 = (8.03380462e-05f);
    w0_3 = (w0_3);
    FPUL_ = (v0_1);
    goto L_C011E3C;
}

void FUN_0c05b0dc(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = (((struct o0_int *)0xC2B967C)->v);
    if ((int)t0 > 0) {
        *(unsigned int *)(((((((t0 << 2) << 1) + t0) << 2) + 0xC2B928C) + 0x0)) = 0x0;
        t1 = (((struct o0_int *)0xC2B967C)->v);
        *(unsigned int *)(((((((t1 << 2) << 1) + t1) << 2) + 0xC2B928C) + 0x8)) = 0x0;
        (((struct o0_uint *)0xC2B967C)->v) = (((((struct o0_int *)0xC2B967C)->v)) - 1);
        t1 = (((struct o0_int *)0xC2B967C)->v);
        t2 = FUN_0c06e990((*(int *)(((((((t1 << 2) << 1) + t1) << 2) + 0xC2B928C) + 0x8))));
        t1 = (((struct o0_int *)0xC2B967C)->v);
        if (((*(int *)(((((((t1 << 2) << 1) + t1) << 2) + 0xC2B928C) + 0x20))) & 0xFF00) == 0) {
            t1 = t2;
            t3 = 0x0;
            for (;;) {
                t4 = (((struct o0_int *)0xC2B967C)->v);
                if ((int)t3 >= (int)(*(int *)(((((((t4 << 2) << 1) + t4) << 2) + 0xC2B928C) + 0x14)))) {
                    break;
                }
                t1 = ((((struct o0_int *)0xC2B967C)->v));
                t4 = t1;
                t1 = (t1 << 2);
                t1 = (t1 << 1);
                t1 = (t1 + t4);
                t1 = (t1 << 2);
                t1 = (t1 + 0xC2B928C);
                t1 = (*(int *)((t1 + 0x10)));
                t1 = (FUN_0c0755f0((*(int *)(((t3 << 2) + t1)))));
                t3 = (t3 + 0x1);
            }
        } else {
            t1 = t2;
            t2 = 0x0;
            for (;;) {
                t3 = (((struct o0_int *)0xC2B967C)->v);
                if ((int)t2 >= (int)(*(int *)(((((((t3 << 2) << 1) + t3) << 2) + 0xC2B928C) + 0x14)))) {
                    break;
                }
                t3 = ((((struct o0_int *)0xC2B967C)->v));
                t4 = t3;
                t3 = (t3 << 2);
                t3 = (t3 << 1);
                t3 = (t3 + t4);
                t3 = (t3 << 2);
                t3 = (t3 + 0xC2B928C);
                t1 = (*(int *)((t3 + 0x10)));
                t1 = (FUN_0c0755f0(((*(int *)(((t2 << 2) + t1))) + ((*(int *)((t3 + 0x0))) << 2))));
                t2 = (t2 + 0x1);
            }
        }
        t1 = (((struct o0_int *)0xC2B967C)->v);
        *(unsigned int *)(((((((t1 << 2) << 1) + t1) << 2) + 0xC2B928C) + 0x4)) = 0x0;
        t1 = (((struct o0_int *)0xC2B967C)->v);
        *(unsigned int *)(((((((t1 << 2) << 1) + t1) << 2) + 0xC2B928C) + 0xC)) = 0x0;
        t1 = (((struct o0_int *)0xC2B967C)->v);
        *(unsigned int *)(((((((t1 << 2) << 1) + t1) << 2) + 0xC2B928C) + 0x10)) = 0x0;
        t1 = (((struct o0_int *)0xC2B967C)->v);
        *(unsigned int *)(((((((t1 << 2) << 1) + t1) << 2) + 0xC2B928C) + 0x14)) = 0x0;
        t1 = (((struct o0_int *)0xC2B967C)->v);
        *(unsigned int *)(((((((t1 << 2) << 1) + t1) << 2) + 0xC2B928C) + 0x18)) = 0x0;
        t1 = (((struct o0_int *)0xC2B967C)->v);
        *(unsigned int *)(((((((t1 << 2) << 1) + t1) << 2) + 0xC2B928C) + 0x20)) = 0xFFFFFFFF;
        t1 = (((struct o0_int *)0xC2B967C)->v);
        *(unsigned int *)(((((((t1 << 2) << 1) + t1) << 2) + 0xC2B928C) + 0x1C)) = 0x0;
        if (((((struct o0_int *)0xC2B967C)->v)) == ((((struct o8_int *)0xC2B967C)->v))) {
            (((struct o4_uint *)0xC2B967C)->v) = 0x0;
        }
        FUN_0c06e990(0x0);
    return;
    }
    if (t0 != 0) {
        for (;;) {
        }
    }
}

float FUN_0c065170(int a4)
{
    int stk[6];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register float F0;
    register float F2;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    register float w0_5;
    v0_1 = a4;
    v0_0 = (0x0);
    v0_2 = (0xC1758B4);
    v0_1 = (v0_1);
    v0_3 = (0x1);
    v0_4 = (0x1);
    if (((*(int *)0xC1ECCA8) == 1)) goto L_C0651A8;
    if (((*(int *)0xC1EC740) == 0)) goto L_C0651A8;
    L_C0652C4:;
    if ((v0_4 == 0)) goto L_C0652EA;
    if ((!(_builtin_fabsf((*(float *)0xC175A14)) > (*(float *)0xC0653C4)))) goto L_C0652E0;
    (((struct oA0_uint *)(v0_1))->v) = (((((struct oA0_int *)(v0_1))->v)) - 4);
    L_C0652E0:;
    v0_2 = (0xA0);
    if (((int)((((struct oA0_int *)(v0_1))->v)) >= 0)) goto L_C0652EA;
    *(unsigned int *)((v0_1 + v0_2)) = v0_0;
    L_C0652EA:;
    v0_2 = (0xA0);
    if (((int)((((struct oA0_int *)(v0_1))->v)) < (int)0x14)) goto L_C065300;
    (((struct o80_uint *)(v0_1))->v) = 0x6;
    (((struct oA0_uint *)(v0_1))->v) = v0_0;
    v0_2 = (0xA0);
    L_C065300:;
    return F0;
    L_C0651A8:;
    nlSubVector3op((((int)stk + 0) + 0xC), (v0_1 + 0x70), ((0xB8 + v0_2) + 0x30));
    w0_1 = FUN_0c073b40((((int)stk + 0) + 0xC), ((0xB8 + v0_2) + 0x20));
    v0_5 = (0xC073CB0);
    F0 = (w0_1);
    w0_0 = (w0_1);
    if ((-27.0f > w0_1)) goto L_C065202;
    if ((w0_0 > 22.0f)) goto L_C065202;
    w0_1 = FUN_0c073b40((((int)stk + 0) + 0xC), (0xB8 + v0_2));
    F0 = (w0_1);
    w0_0 = (w0_1);
    if ((-8.0f > w0_1)) goto L_C065202;
    if ((w0_0 > 8.0f)) goto L_C065202;
    (((struct oA0_uint *)(v0_1))->v) = (((((struct oA0_int *)(v0_1))->v)) + 0x14);
    v0_4 = (v0_0);
    L_C065202:;
    if ((v0_4 == 0)) goto L_C0652EA;
    v0_5 = (0xC2B9D24);
    v0_2 = (0x23);
    w0_1 = (9.99999975e-05f);
    w0_2 = (15.0f);
    w0_3 = (0.0f);
    L_C0652C0:;
    if (((int)v0_2 > (int)v0_3)) goto L_C065216;
    goto L_C0652C4;
    L_C065216:;
    nlSubVector3op((((int)stk + 0) + 0xC), (v0_5 + 0xC), v0_5);
    *(float *)(((int)stk + 16)) = w0_3;
    w0_0 = FUN_0c073c60((((int)stk + 0) + 0xC));
    F0 = (w0_0);
    w0_4 = (w0_0);
    if ((w0_1 > w0_0)) goto L_C0652BE;
    FUN_0c073c40((((int)stk + 0) + 0xC), (((int)stk + 0) + 0xC), (1.0f / w0_4));
    nlSubVector3op(((int)stk + 0), (v0_1 + 0x70), v0_5);
    *(float *)(((int)stk + 4)) = w0_3;
    w0_5 = FUN_0c073b40((((int)stk + 0) + 0xC), ((int)stk + 0));
    F0 = (w0_5);
    w0_0 = (w0_5);
    if ((0.0f > w0_5)) goto L_C0652BC;
    if ((w0_0 > w0_4)) goto L_C0652BC;
    w0_0 = FUN_0c073c60(((int)stk + 0));
    F0 = (w0_0);
    if ((!(w0_2 > w0_0))) goto L_C0652BC;
    (((struct oA0_uint *)(v0_1))->v) = (((((struct oA0_int *)(v0_1))->v)) + (v0_2 >> 1));
    v0_4 = (v0_0);
    goto L_C0652C4;
    L_C0652BC:;
    v0_5 = ((v0_5 + 0xC));
    L_C0652BE:;
    v0_2 = ((v0_2 - 1));
    goto L_C0652C0;
}

int FUN_0c08dad0(int a4, int a5, int a6)
{
    int stk[8];
    register int t0;
    register int t3;
    register int t10;
    register int t14;
    register int t19;
    register int t22;
    int R1000;

    R1000 = *(int *)((int)stk + 0);

    *(unsigned int *)(((int)stk + 28)) = a4;
    *(unsigned int *)(((int)stk + 24)) = a5;
    *(unsigned int *)(((int)stk + 20)) = a6;
    t0 = *(int *)(((int)stk + 28));
    R1000 = ((t0 * 0x154) + 0xC2C8D2C);
    *(unsigned int *)((((t0 * 0x154) + 0xC2C8D2C) + 0x30)) = 0x1;
    t3 = *(int *)(((R1000) + 0x4));
    *(unsigned int *)(((R1000) + 0x34)) = (*(int *)(((((((t3 << 1) + t3) << 2) << 2) << 1) + 0xC147884)));
    if ((*(signed char *)(((((*(int *)(((int)stk + 28))) * 0x154) + 0xC2C8D2C) + 0x2))) == 0) {
        return 0xFFFFFF01;
    }
    t10 = vmsio_isready((*(int *)(((int)stk + 28))));
    if (t10 == 0) {
        vmsfs_unmount((*(int *)(((int)stk + 28))));
        return 0xFFFFFF01;
    }
    t14 = vmsio_ismount((*(int *)(((int)stk + 28))));
    if (t14 == 0) {
        return 0xFFFFFF01;
    }
    if ((*(signed char *)((((*(int *)(((int)stk + 28))) * 0x154) + 0xC2C8D34))) == 0) {
        return 0xFFFFFF01;
    }
    t19 = buIsFormat((*(int *)(((int)stk + 28))));
    if ((int)t19 < 0) {
        return 0xFFFFFF03;
    }
    *(unsigned int *)(((int)stk + 16)) = 0x0;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 16))) >= (int)(*(int *)(((int)stk + 20)))) {
            *(unsigned int *)(((int)stk + 8)) = 0x0;
            *(unsigned int *)(((int)stk + 16)) = 0x0;
            t22 = 0x0;
            for (;;) {
                if ((int)(*(int *)(((int)stk + 16))) >= (int)(*(int *)(((int)stk + 20)))) {
                    break;
                }
                t19 = (*(int *)(((int)stk + 24)));
                t19 = (FUN_0c08d87e((*(int *)(((int)stk + 28))), (*(int *)((((*(int *)(((int)stk + 16))) << 2) + t19)))));
                *(unsigned int *)(((int)stk + 12)) = t19;
                if ((int)t19 < 0) {
                    *(unsigned int *)(((int)stk + 8)) = 0x1;
                }
                t22 = (*(int *)(((int)stk + 16)));
                t22 = (t22 + 0x1);
                *(unsigned int *)(((int)stk + 16)) = t22;
            }
            t19 = (FUN_0c090e4c((*(int *)(((int)stk + 28))), 0x0, (((int)stk + 0) + 0x4), 0x0));
            t19 = (vmsfs_lockbank((*(int *)(((int)stk + 28))), 0x1));
            t19 = (FUN_0c08eee0((*(int *)(((int)stk + 28)))));
            *(unsigned int *)(((int)stk + 12)) = t19;
            if (!((int)t19 < 0)) {
                t19 = (FUN_0c08f5d8((*(int *)(((int)stk + 28)))));
                *(unsigned int *)(((int)stk + 12)) = t19;
                if (!((int)t19 < 0)) {
                    if ((*(int *)(((int)stk + 8))) != 0) {
                        *(unsigned int *)(((int)stk + 12)) = 0xFFFFFF0A;
                    }
                }
            }
            t19 = (vmsfs_lockbank((*(int *)(((int)stk + 28))), (*(int *)(((int)stk + 4)))));
            t19 = (*(int *)(((int)stk + 12)));
            return t19;
        }
        t19 = (*(int *)(((int)stk + 24)));
        t19 = (FUN_0c08faa8((*(int *)(((int)stk + 28))), (*(int *)((((*(int *)(((int)stk + 16))) << 2) + t19)))));
        if ((int)t19 < 0) {
            break;
        }
        *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + 0x1);
    }
    return 0xFFFFFF0A;
}

int FUN_0c04c194(int a4)
{
    int stk[13];
    register float u2;
    register int t4;
    register float u7;
    int t8;
    register int t9;
    register float u12;
    register float u17;
    register float u19;
    register float u21;
    register float u23;
    register float u24;
    register float u26;
    register float u28;
    register float u29;
    register float u32;
    register float u33;
    register int t37;
    register int t44;
    register int t69;
    register int t10;
    register float u11;
    register float u41;
    register float u48;

    if ((int)a4 >= 0) {
        if ((int)a4 >= (int)((((struct o14_int *)0xC2ADF10)->v))) {
        } else {
            u2 = *(float *)0xC175934;
            (((struct o4_float *)(((((int)stk + 0) + 0x1C) + 0xC)))->v) = u2;
            (((struct o4_float *)((((int)stk + 0) + 0x1C)))->v) = u2;
            FUN_0c078890((1.0f + 1.0f));
            t4 = (((struct o0_int *)0xC2ADF10)->v);
            (((struct oC_float *)((((int)stk + 0) + 0x1C)))->v) = ((((struct o18_float *)(((((a4 << 2) << 1) << 2) + t4)))->v));
            u7 = (((struct o1C_float *)(((((a4 << 2) << 1) << 2) + t4)))->v);
            (((struct o8_float *)(((((int)stk + 0) + 0x1C) + 0xC)))->v) = u7;
            *(unsigned int *)(((int)stk + 0)) = (((((a4 << 2) << 1) << 2) + t4) + 0x20);
            t8 = 0xC04C23C;
            t9 = ((((a4 << 2) << 1) << 2) + t4);
            u12 = u7;
            for (;;) {
                if ((unsigned int)t9 >= (unsigned int)(*(int *)(((int)stk + 0)))) {
                    break;
                }
                t8 = 0x4;
                u12 = (*(float *)((t9 + 0x0)));
                t10 = 0x0;
                (((struct o1C_float *)(((int)stk + 0)))->v) = u12;
                u11 = (*(float *)((t9 + t8)));
                t8 = 0x8;
                *(float *)(((((int)stk + 0) + 0x1C) + t8)) = u11;
                for (;;) {
                    t8 = 0x8;
                    u12 = ((((struct oC_float *)((((int)stk + 0) + 0x1C)))->v));
                    u17 = (((struct o1C_float *)(((int)stk + 0)))->v);
                    u11 = (float)t10;
                    u12 = (u12 - u17);
                    u19 = u17;
                    u19 = u19 + ((u11 / 16.0f)) * u12;
                    (((struct o4_float *)(((int)stk + 0)))->v) = u19;
                    u12 = (*(float *)((((((int)stk + 0) + 0x1C) + 0xC) + t8)));
                    u21 = *(float *)(((((int)stk + 0) + 0x1C) + t8));
                    u12 = (u12 - u21);
                    u23 = (u11 / 16.0f);
                    u11 = u21;
                    u24 = u11;
                    u24 = u24 + u23 * u12;
                    u11 = u24;
                    *(float *)(((((int)stk + 0) + 0x4) + t8)) = u11;
                    u11 = (float)(t10 + 0x1);
                    u12 = ((((struct oC_float *)((((int)stk + 0) + 0x1C)))->v));
                    u26 = (((struct o1C_float *)(((int)stk + 0)))->v);
                    u12 = (u12 - u26);
                    u28 = u26;
                    u28 = u28 + ((u11 / 16.0f)) * u12;
                    (((struct oC_float *)((((int)stk + 0) + 0x4)))->v) = u28;
                    u29 = *(float *)(((((int)stk + 0) + 0x1C) + t8));
                    u12 = (*(float *)((((((int)stk + 0) + 0x1C) + 0xC) + t8)));
                    u32 = (u11 / 16.0f);
                    u11 = u29;
                    u12 = (u12 - u29);
                    u33 = u11;
                    u33 = u33 + u32 * u12;
                    u11 = u33;
                    *(float *)((((((int)stk + 0) + 0x4) + 0xC) + t8)) = u11;
                    t8 = (t8 + 0x78);
                    u12 = (*(float *)((0xC1758B4 + t8)));
                    t8 = 0x4;
                    *(float *)((((((int)stk + 0) + 0x4) + 0xC) + t8)) = u12;
                    *(float *)(((((int)stk + 0) + 0x4) + t8)) = u12;
                    t8 = (FUN_0c029b12((((int)stk + 0) + 0x4), 100.0f));
                    t37 = t8;
                    t8 = (*(int *)((t8 + 0x1C)));
                    if ((t8 != -1) && ((t8 != 2) && (t8 != 6))) {
                        t8 = 0x4;
                        u12 = (*(float *)((t37 + t8)));
                        *(float *)(((((int)stk + 0) + 0x4) + t8)) = u12;
                        u41 = u12;
                    }
                    u12 = u41;
                    t8 = (FUN_0c029b12(((((int)stk + 0) + 0x4) + 0xC), 100.0f));
                    t44 = t8;
                    t8 = (*(int *)((t8 + 0x1C)));
                    if ((t8 != -1) && ((t8 != 2) && (t8 != 6))) {
                        t8 = 0x4;
                        u12 = (*(float *)((t44 + t8)));
                        *(float *)((((((int)stk + 0) + 0x4) + 0xC) + t8)) = u12;
                        u48 = u12;
                    }
                    u12 = u48;
                    t8 = 0x4;
                    u12 = (*(float *)(((((int)stk + 0) + 0x4) + t8)));
                    u12 = (u12 + 5.0f);
                    *(float *)(((((int)stk + 0) + 0x4) + t8)) = u12;
                    u11 = (*(float *)((((((int)stk + 0) + 0x4) + 0xC) + t8)));
                    u11 = (u11 + 5.0f);
                    *(float *)((((((int)stk + 0) + 0x4) + 0xC) + t8)) = u11;
                    t8 = (FUN_0c078810((((int)stk + 0) + 0x4), ((((int)stk + 0) + 0x4) + 0xC), 0xFF0000FF));
                    t10 = (t10 + 0x1);
                    u12 = (float)t10;
                    if (!(16.0f > u12)) {
                        break;
                    }
                }
                t8 = 0x8;
                u12 = ((((struct o1C_float *)(((int)stk + 0)))->v));
                t9 = (t9 + 0x8);
                (((struct oC_float *)((((int)stk + 0) + 0x1C)))->v) = u12;
                u11 = (*(float *)(((((int)stk + 0) + 0x1C) + t8)));
                *(float *)((((((int)stk + 0) + 0x1C) + 0xC) + t8)) = u11;
            }
            t69 = (FUN_0c078890(1.60000002f));
        }
    }
    return t69;
}

int FUN_0c090c94(int a4, int a5, int a6, int a7, int a8)
{
    int stk[26];
    register int t1;
    register int t5;
    register int t10;
    register int t28;
    register int t31;
    register int t40;
    register int t50;
    register int t72;
    register int t75;
    register int t84;
    register int t94;
    register int t13;

    stk[17] = a8;
    *(unsigned int *)(((int)stk + 64)) = a4;
    *(unsigned int *)(((int)stk + 60)) = a5;
    *(unsigned int *)(((int)stk + 56)) = a6;
    *(unsigned int *)(((int)stk + 52)) = a7;
    *(unsigned int *)(((int)stk + 32)) = (*(int *)(((int)stk + 56)));
    t1 = *(int *)(((int)stk + 64));
    *(unsigned int *)(((int)stk + 4)) = ((t1 * 0x154) + 0xC2C8D2C);
    *(unsigned int *)((((t1 * 0x154) + 0xC2C8D2C) + 0x30)) = 0x1;
    *(unsigned int *)(((*(int *)(((int)stk + 4))) + 0x34)) = a8;
    t5 = vmsfs_fgetinfo((*(int *)(((int)stk + 64))), (*(int *)(((int)stk + 60))), (((int)stk + 4) + 0x8));
    *(unsigned int *)(((int)stk + 44)) = t5;
    if ((int)t5 < 0) {
        return t5;
    }
    if ((*(signed char *)(((int)stk + 18))) != 0) {
        return 0xFFFFFF0B;
    }
    if (a8 == 0) {
        t10 = vmsfs_fgetsize((*(int *)(((int)stk + 64))), (*(int *)(((int)stk + 60))));
        *(unsigned int *)(((int)stk + 40)) = t10;
        if ((int)t10 < 0) {
            return t10;
        }
        t13 = ((*(int *)(((int)stk + 40))) - (*(int *)(((int)stk + 52))));
        *(unsigned int *)(((int)stk + 68)) = t13;
        if ((unsigned int)(*(int *)(((int)stk + 52))) >= (unsigned int)(unsigned short)(*(short *)(((int)stk + 16)))) {
            return 0xFFFFFF00;
        }
        if ((unsigned int)((((struct o44_int *)(((int)stk + 4)))->v)) > (unsigned int)(unsigned short)(*(short *)(((int)stk + 16)))) {
            return 0xFFFFFF00;
        }
        if ((unsigned int)((*(int *)(((int)stk + 52))) + t13) > (unsigned int)(unsigned short)(*(short *)(((int)stk + 16)))) {
            return 0xFFFFFF00;
        }
        t28 = FUN_0c08fabc((*(int *)(((int)stk + 64))), (*(int *)(((int)stk + 60))));
        *(unsigned int *)(((int)stk + 44)) = t28;
        if ((int)t28 < 0) {
            return t28;
        }
        t31 = vmsfs_fopen((*(int *)(((int)stk + 64))), (*(int *)(((int)stk + 60))), (((int)stk + 4) + 0x4));
        *(unsigned int *)(((int)stk + 44)) = t31;
        if ((int)t31 < 0) {
            return t31;
        }
        FUN_0c090e4c((*(int *)(((int)stk + 64))), 0x0, (((int)stk + 4) + 0x20), 0x0);
        vmsfs_lockbank((*(int *)(((int)stk + 64))), 0x0);
        vmsfs_fseek((*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 52))), 0x0);
        *(unsigned int *)(((int)stk + 32)) = (*(int *)(((int)stk + 56)));
        t40 = *(int *)(((int)stk + 64));
        *(unsigned int *)(((int)stk + 4)) = ((t40 * 0x154) + 0xC2C8D2C);
        *(unsigned int *)((((t40 * 0x154) + 0xC2C8D2C) + 0x30)) = 0x1;
        *(unsigned int *)(((*(int *)(((int)stk + 4))) + 0x34)) = t13;
        *(unsigned int *)(((int)stk + 48)) = 0x0;
        for (;;) {
            if ((unsigned int)(*(int *)(((int)stk + 48))) >= (unsigned int)t13) {
                vmsfs_fclose((*(int *)(((int)stk + 8))), 0x0);
                vmsfs_lockbank((*(int *)(((int)stk + 64))), (*(int *)(((int)stk + 36))));
                return 0x0;
            }
            t50 = FUN_0c090b10((*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 32))));
            *(unsigned int *)(((int)stk + 44)) = t50;
            if ((int)t50 < 0) {
                break;
            }
            *(unsigned int *)(((int)stk + 32)) = ((*(int *)(((int)stk + 32))) + 0x200);
            *(unsigned int *)(((int)stk + 48)) = ((*(int *)(((int)stk + 48))) + 0x1);
        }
    } else {
        if ((unsigned int)(*(int *)(((int)stk + 52))) >= (unsigned int)(unsigned short)(*(short *)(((int)stk + 16)))) {
            return 0xFFFFFF00;
        }
        if ((unsigned int)((((struct o44_int *)(((int)stk + 4)))->v)) > (unsigned int)(unsigned short)(*(short *)(((int)stk + 16)))) {
            return 0xFFFFFF00;
        }
        if ((unsigned int)((*(int *)(((int)stk + 52))) + a8) > (unsigned int)(unsigned short)(*(short *)(((int)stk + 16)))) {
            return 0xFFFFFF00;
        }
        t72 = FUN_0c08fabc((*(int *)(((int)stk + 64))), (*(int *)(((int)stk + 60))));
        *(unsigned int *)(((int)stk + 44)) = t72;
        if ((int)t72 < 0) {
            return t72;
        }
        t75 = vmsfs_fopen((*(int *)(((int)stk + 64))), (*(int *)(((int)stk + 60))), (((int)stk + 4) + 0x4));
        *(unsigned int *)(((int)stk + 44)) = t75;
        if ((int)t75 < 0) {
            return t75;
        }
        FUN_0c090e4c((*(int *)(((int)stk + 64))), 0x0, (((int)stk + 4) + 0x20), 0x0);
        vmsfs_lockbank((*(int *)(((int)stk + 64))), 0x0);
        vmsfs_fseek((*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 52))), 0x0);
        *(unsigned int *)(((int)stk + 32)) = (*(int *)(((int)stk + 56)));
        t84 = *(int *)(((int)stk + 64));
        *(unsigned int *)(((int)stk + 4)) = ((t84 * 0x154) + 0xC2C8D2C);
        *(unsigned int *)((((t84 * 0x154) + 0xC2C8D2C) + 0x30)) = 0x1;
        *(unsigned int *)(((*(int *)(((int)stk + 4))) + 0x34)) = a8;
        *(unsigned int *)(((int)stk + 48)) = 0x0;
        for (;;) {
            if ((unsigned int)(*(int *)(((int)stk + 48))) >= (unsigned int)a8) {
                vmsfs_fclose((*(int *)(((int)stk + 8))), 0x0);
                vmsfs_lockbank((*(int *)(((int)stk + 64))), (*(int *)(((int)stk + 36))));
                return 0x0;
            }
            t94 = FUN_0c090b10((*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 32))));
            *(unsigned int *)(((int)stk + 44)) = t94;
            if ((int)t94 < 0) {
                break;
            }
            *(unsigned int *)(((int)stk + 32)) = ((*(int *)(((int)stk + 32))) + 0x200);
            *(unsigned int *)(((int)stk + 48)) = ((*(int *)(((int)stk + 48))) + 0x1);
        }
    }
    vmsfs_fclose((*(int *)(((int)stk + 8))), 0x0);
    vmsfs_lockbank((*(int *)(((int)stk + 64))), (*(int *)(((int)stk + 36))));
    return 0x0;
}

int vmsfs_getinfo(int a4, int a5)
{
    int stk[7];
    register int t4;
    register int t8;
    register int t13;
    register int t14;
    register int t24;
    register int t25;
    int R1000;

    R1000 = *(int *)((int)stk + 0);

    *(unsigned int *)(((int)stk + 24)) = a4;
    *(unsigned int *)(((int)stk + 20)) = a5;
    R1000 = (((*(int *)(((int)stk + 24))) * 0x154) + 0xC2C8D2C);
    if ((*(signed char *)(((((*(int *)(((int)stk + 24))) * 0x154) + 0xC2C8D2C) + 0x2))) == 0) {
        return 0xFFFFFF01;
    }
    t4 = vmsio_isready((*(int *)(((int)stk + 24))));
    if (t4 == 0) {
        vmsfs_unmount((*(int *)(((int)stk + 24))));
        return 0xFFFFFF01;
    }
    t8 = vmsio_ismount((*(int *)(((int)stk + 24))));
    if (t8 == 0) {
        return 0xFFFFFF01;
    }
    if ((*(signed char *)((((*(int *)(((int)stk + 24))) * 0x154) + 0xC2C8D34))) == 0) {
        return 0xFFFFFF01;
    }
    t13 = buIsFormat((*(int *)(((int)stk + 24))));
    if ((int)t13 < 0) {
        return 0xFFFFFF03;
    }
    *(unsigned int *)(((int)stk + 16)) = 0x0;
    t14 = 0x0;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 16))) >= (int)0x20) {
            break;
        }
        t13 = (*(int *)(((int)stk + 20)));
        t14 = (*(int *)(((int)stk + 16)));
        t14 = (t14 + t13);
        t13 = (*(int *)(((R1000) + 0x20)));
        *(unsigned char *)((t14 + 0x0)) = (*(signed char *)((((*(int *)(((int)stk + 16))) + 0x10) + t13)));
        *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + 0x1);
        t14 = (*(int *)(((int)stk + 12)));
        t14 = (t14 + 0x1);
        *(unsigned int *)(((int)stk + 12)) = t14;
    }
    *(unsigned int *)(((int)stk + 16)) = 0x0;
    t24 = t13;
    t25 = 0x20;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 16))) >= (int)0x8) {
            break;
        }
        t25 = (*(int *)(((int)stk + 16)));
        t25 = (t25 + (((int)stk + 0) + 0x4));
        t24 = (R1000);
        t24 = (*(int *)((t24 + 0x20)));
        *(unsigned char *)((t25 + 0x0)) = (*(signed char *)((((*(int *)(((int)stk + 16))) + 0x30) + t24)));
        t25 = (*(int *)(((int)stk + 16)));
        t25 = (t25 + 0x1);
        *(unsigned int *)(((int)stk + 16)) = t25;
    }
    FUN_0c08fd60(((*(int *)(((int)stk + 20))) + 0x30), (((int)stk + 0) + 0x4));
    (((struct o20_ushort *)((*(int *)(((int)stk + 20)))))->v) = ((*(int *)(((*(int *)(((R1000) + 0x1C))) + 0x0))) + 0x1);
    (((struct o22_ushort *)((*(int *)(((int)stk + 20)))))->v) = (*(int *)(((*(int *)(((R1000) + 0x1C))) + 0x30)));
    (((struct o26_ushort *)((*(int *)(((int)stk + 20)))))->v) = (vmsfs_diskfree((*(int *)(((int)stk + 24))), 0x0));
    (((struct o24_ushort *)((*(int *)(((int)stk + 20)))))->v) = ((((struct o26_short *)((*(int *)(((int)stk + 20)))))->v));
    (((struct o28_ushort *)((*(int *)(((int)stk + 20)))))->v) = (*(int *)(((*(int *)(((R1000) + 0x1C))) + 0x38)));
    (((struct o2A_ushort *)((*(int *)(((int)stk + 20)))))->v) = (vmsfs_diskfree((*(int *)(((int)stk + 24))), 0x1));
    (((struct o2C_ushort *)((*(int *)(((int)stk + 20)))))->v) = ((*(int *)(((*(int *)(((R1000) + 0x1C))) + 0x2C))) + 0x1);
    (((struct o2E_ushort *)((*(int *)(((int)stk + 20)))))->v) = (unsigned char)(*(signed char *)(((*(int *)(((R1000) + 0x20))) + 0x4E)));
    return 0x0;
}

int vmsfs_frename(int a4, int a5, int a6)
{
    int stk[18];
    register int t0;
    register int t3;
    register int t10;
    register int t14;
    register int t18;
    register int t21;
    register int t24;
    register int t27;
    register int t31;
    register int t32;
    register int t38;

    (((struct o44_uint *)(((int)stk + 0)))->v) = a4;
    (((struct o40_uint *)(((int)stk + 0)))->v) = a5;
    *(unsigned int *)(((int)stk + 60)) = a6;
    t0 = *(int *)(((int)stk + 68));
    *(unsigned int *)(((int)stk + 0)) = ((t0 * 0x154) + 0xC2C8D2C);
    *(unsigned int *)((((t0 * 0x154) + 0xC2C8D2C) + 0x30)) = 0x1;
    t3 = *(int *)(((*(int *)(((int)stk + 0))) + 0x4));
    *(unsigned int *)(((*(int *)(((int)stk + 0))) + 0x34)) = (*(int *)(((((((t3 << 1) + t3) << 2) << 2) << 1) + 0xC147860)));
    if ((*(signed char *)(((((*(int *)(((int)stk + 68))) * 0x154) + 0xC2C8D2C) + 0x2))) == 0) {
        return 0xFFFFFF01;
    }
    t10 = vmsio_isready((*(int *)(((int)stk + 68))));
    if (t10 == 0) {
        vmsfs_unmount((*(int *)(((int)stk + 68))));
        return 0xFFFFFF01;
    }
    t14 = vmsio_ismount((*(int *)(((int)stk + 68))));
    if (t14 == 0) {
        return 0xFFFFFF01;
    }
    if ((*(signed char *)((((*(int *)(((int)stk + 68))) * 0x154) + 0xC2C8D34))) == 0) {
        return 0xFFFFFF01;
    }
    t18 = buIsFormat((*(int *)(((int)stk + 68))));
    if ((int)t18 < 0) {
        return 0xFFFFFF03;
    }
    t21 = FUN_0c08faa8((*(int *)(((int)stk + 68))), (*(int *)(((int)stk + 64))));
    if ((int)t21 < 0) {
        return 0xFFFFFF0B;
    }
    t24 = FUN_0c08f204((*(int *)(((int)stk + 68))), (*(int *)(((int)stk + 64))), (((int)stk + 0) + 0x4));
    *(unsigned int *)(((int)stk + 52)) = t24;
    if ((int)t24 < 0) {
        return 0xFFFFFF05;
    }
    t27 = FUN_0c08f204((*(int *)(((int)stk + 68))), (*(int *)(((int)stk + 60))), (((int)stk + 0) + 0x4));
    if ((int)t27 >= 0) {
        return 0xFFFFFF06;
    }
    t31 = FUN_0c08f9c4((*(int *)(((int)stk + 68))), (*(int *)(((int)stk + 52))));
    *(unsigned int *)(((int)stk + 48)) = t31;
    *(unsigned int *)(((int)stk + 56)) = 0x0;
    t32 = 0x0;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 56))) >= (int)0xC) {
            break;
        }
        t31 = (*(int *)(((int)stk + 48)));
        t32 = (*(int *)(((int)stk + 60)));
        t38 = (((*(int *)(((int)stk + 56))) + 0x4) + t31);
        t31 = (*(int *)(((int)stk + 56)));
        *(unsigned char *)((t38 + 0x0)) = (*(signed char *)((t32 + t31)));
        t32 = (*(int *)(((int)stk + 56)));
        t32 = (t32 + 0x1);
        *(unsigned int *)(((int)stk + 56)) = t32;
    }
    FUN_0c08f9f6((*(int *)(((int)stk + 68))), (*(int *)(((int)stk + 52))));
    return (FUN_0c08eee0((*(int *)(((int)stk + 68)))));
}

int vmsfs_fsettime(int a4, int a5, int a6)
{
    int stk[20];
    register int t0;
    register int t3;
    register int t10;
    register int t14;
    register int t18;
    register int t21;
    register int t24;
    register int t30;

    (((struct o4C_uint *)(((int)stk + 0)))->v) = a4;
    (((struct o48_uint *)(((int)stk + 0)))->v) = a5;
    (((struct o44_uint *)(((int)stk + 0)))->v) = a6;
    t0 = *(int *)(((int)stk + 76));
    *(unsigned int *)(((int)stk + 0)) = ((t0 * 0x154) + 0xC2C8D2C);
    *(unsigned int *)((((t0 * 0x154) + 0xC2C8D2C) + 0x30)) = 0x1;
    t3 = *(int *)(((*(int *)(((int)stk + 0))) + 0x4));
    *(unsigned int *)(((*(int *)(((int)stk + 0))) + 0x34)) = (*(int *)(((((((t3 << 1) + t3) << 2) << 2) << 1) + 0xC147868)));
    if ((*(signed char *)(((((*(int *)(((int)stk + 76))) * 0x154) + 0xC2C8D2C) + 0x2))) == 0) {
        return 0xFFFFFF01;
    }
    t10 = vmsio_isready((*(int *)(((int)stk + 76))));
    if (t10 == 0) {
        vmsfs_unmount((*(int *)(((int)stk + 76))));
        return 0xFFFFFF01;
    }
    t14 = vmsio_ismount((*(int *)(((int)stk + 76))));
    if (t14 == 0) {
        return 0xFFFFFF01;
    }
    if ((*(signed char *)((((*(int *)(((int)stk + 76))) * 0x154) + 0xC2C8D34))) == 0) {
        return 0xFFFFFF01;
    }
    t18 = buIsFormat((*(int *)(((int)stk + 76))));
    if ((int)t18 < 0) {
        return 0xFFFFFF03;
    }
    t21 = FUN_0c08faa8((*(int *)(((int)stk + 76))), (*(int *)(((int)stk + 72))));
    if ((int)t21 < 0) {
        return 0xFFFFFF0B;
    }
    t24 = FUN_0c08f204((*(int *)(((int)stk + 76))), (*(int *)(((int)stk + 72))), (((int)stk + 0) + 0x4));
    *(unsigned int *)(((int)stk + 60)) = t24;
    if ((int)t24 < 0) {
        return 0xFFFFFF05;
    }
    *(unsigned int *)(((int)stk + 56)) = (FUN_0c08f9c4((*(int *)(((int)stk + 76))), (*(int *)(((int)stk + 60)))));
    FUN_0c08fc6c((((int)stk + 0) + 0x30), (*(int *)(((int)stk + 68))));
    *(unsigned int *)(((int)stk + 64)) = 0x0;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 64))) >= (int)0x8) {
            break;
        }
        t30 = (*(int *)(((int)stk + 64)));
        t30 = (t30 + 0x10);
        *(unsigned char *)((t30 + (*(int *)(((int)stk + 56))))) = (*(signed char *)(((((((struct o40_int *)(((int)stk + 0)))->v)) + (((int)stk + 0) + 0x30)) + 0x0)));
        t30 = (*(int *)(((int)stk + 64)));
        t30 = (t30 + 0x1);
        *(unsigned int *)(((int)stk + 64)) = t30;
    }
    FUN_0c08f9f6((*(int *)(((int)stk + 76))), (*(int *)(((int)stk + 60))));
    return (FUN_0c08eee0((*(int *)(((int)stk + 76)))));
}
