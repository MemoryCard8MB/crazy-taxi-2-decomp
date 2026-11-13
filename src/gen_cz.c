/* Straight-line functions with calls and guards (batch gen_cz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o24_ushort { char p[0x24]; unsigned short v; };
struct o26_ushort { char p[0x26]; unsigned short v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_int { char p[0x2C]; int v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o3C_int { char p[0x3C]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_int { char p[0x40]; int v; };
struct o44_int { char p[0x44]; int v; };
struct o48_int { char p[0x48]; int v; };
struct o48_short { char p[0x48]; short v; };
struct o48_ushort { char p[0x48]; unsigned short v; };
struct o4A_short { char p[0x4A]; short v; };
struct o4A_ushort { char p[0x4A]; unsigned short v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o7C_ushort { char p[0x7C]; unsigned short v; };
struct o7E_ushort { char p[0x7E]; unsigned short v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o98_uint { char p[0x98]; unsigned int v; };
struct o9C_uint { char p[0x9C]; unsigned int v; };
struct oA8_ushort { char p[0xA8]; unsigned short v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
int ADX_DecodeInfoWav(int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c072150(int, int, int);
int FUN_0c073c40(int, int, float);
int FUN_0c075740(int, int, int, int, int, int, int, int, int, int, float, float, float, float, float, float, float, float);
int FUN_0c075a00(int, float, float, float);
int FUN_0c078810(int, int, int);
int FUN_0c07ff00(void);
int FUN_0c16d948(int, int, int, int, int);
int kmActivateFrameBuffer(int, int, int, int);
int kmCreateFrameBufferSurface(int, int, int, int, int);
extern int kmCreateTABuffer();
int kmCreateVertexBuffer(int, int, int, int, int);
int kmiMemCopy4(int, int, int);
int kmiReadRegister(int);
int kmiWriteRegister(int, int);
int memset(int, int, int);
int nlAddVector(int, int);
int nlAddVector3op(int, int, int);
int nlObjPutUseViewMatrix(int);
int nlTriPutSetClipping(int, float, float, float, float);
int nlTriPutSetPoint(int, int, float, float, float, float, float, float, float, float);
int nlTriPutTextureInit(int, int, int);
int thunk_kmiWriteRegister(void);
int kmiInitializeDevice(void);
int FUN_0c02cf88(int a4);
int kmiAllocSysConfig(int a4, float f4, float f5, float f6, float f7, float f8, float f9);
int FUN_0c02cc30(int a4);
int ADXB_DecodeHeaderSpsd(int a4, int a5, int a6);
int vmsio_kd_bank_command(int a4, int a5, int a6, int a7, int a8);

int kmiInitializeDevice(void)
{
    int stk[2];
    register int t1;
    int t17;
    register int t57;
    register int t58;
    register int t77;
    register int t80;
    register int t81;
    register int t14;
    register int t36;

    *(unsigned int *)0xC300BE4 = 0x0;
    *(unsigned int *)(((int)stk + 4)) = (kmiReadRegister(0x0));
    t1 = kmiReadRegister(0x4);
    (((struct o0_uint *)0xC3008D0)->v) = 0x5;
    if ((*(int *)(((int)stk + 4))) != 0x17FD11DB) {
        (((struct o0_uint *)0xC3008D0)->v) = 0x5;
        t14 = 0xDD18957;
    } else {
        if (t1 == 1) {
            (((struct o0_uint *)0xC3008D0)->v) = 0x5;
            t14 = 0xDD18957;
        } else {
            t14 = 0xDD18957;
            if ((unsigned int)t1 >= (unsigned int)0x11) {
                (((struct o0_uint *)0xC3008D0)->v) = 0x6;
                *(unsigned int *)0xC300BE4 = 0x800408;
                t14 = 0x15D1C951;
            }
        }
    }
    t17 = *(int *)0xA05F689C;
    if (t17 != 0) {
        if (t17 != 1) {
            if (t17 != 2) {
                if ((t17 != 4) && ((t17 != 5) && (t17 != 6))) {
                    if (t17 != 8) {
                        if (t17 != 9) {
                            (((struct o4_uint *)0xC3008D0)->v) = 0x8F;
                        } else {
                            (((struct o4_uint *)0xC3008D0)->v) = 0xF;
                        }
                    } else {
                        (((struct o4_uint *)0xC3008D0)->v) = 0x1F;
                    }
                    t36 = 0x101;
                } else {
                    (((struct o4_uint *)0xC3008D0)->v) = 0x7F;
                    t36 = 0x10101;
                }
            } else {
                (((struct o4_uint *)0xC3008D0)->v) = 0x3;
                t36 = 0x101;
            }
        } else {
            (((struct o4_uint *)0xC3008D0)->v) = 0x1;
            t36 = 0x0;
        }
    } else {
        (((struct o4_uint *)0xC3008D0)->v) = 0x0;
        t36 = 0x0;
    }
    kmiWriteRegister(0xA8, t14);
    kmiWriteRegister(0xA0, 0x20);
    kmiWriteRegister(0x8, 0x0);
    kmiWriteRegister(0xE4, 0x3);
    kmiWriteRegister(0x48, 0x9);
    if ((((((struct o1C_int *)0xC3008D0)->v)) & 1) != 0) {
        thunk_kmiWriteRegister();
    } else {
        thunk_kmiWriteRegister();
    }
    kmiWriteRegister(0x5C, 0x0);
    kmiWriteRegister(0x68, 0x2800000);
    kmiWriteRegister(0x6C, 0x1E00000);
    t57 = 0x110;
    t58 = 0x92039;
    if (((((struct o0_int *)0xC3008D0)->v)) == 6) {
        kmiWriteRegister(0x110, 0x93F39);
        t57 = 0x98;
        t58 = (*(int *)0xC300BE4);
    }
    kmiWriteRegister(t57, t58);
    kmiWriteRegister(0x4C, 0xA0);
    kmiWriteRegister(0x74, 0x0);
    kmiWriteRegister(0x78, 0x3F800000);
    kmiWriteRegister(0x84, 0x0);
    kmiWriteRegister(0x30, t36);
    kmiWriteRegister(0xB0, 0x7F7F7F);
    kmiWriteRegister(0xB4, 0x7F7F7F);
    kmiWriteRegister(0xC0, 0x0);
    kmiWriteRegister(0xBC, 0xFFFFFFFF);
    kmiWriteRegister(0x80, 0x7);
    kmiWriteRegister(0x88, 0x3727C5A0);
    kmiWriteRegister(0x8C, 0x1203000);
    kmiWriteRegister(0x74, 0x1);
    if (((((struct o0_int *)0xC3008D0)->v)) != 6) {
        for (;;) {
        }
    }
    t77 = 0x7DF77;
    if (((((struct o0_int *)0xC3008D0)->v)) == 6) {
        t77 = 0x27DF77;
    }
    kmiWriteRegister(0x7C, t77);
    *(unsigned int *)(((int)stk + 0)) = 0x0;
    t80 = 0x0;
    t81 = 0xA5000000;
    for (;;) {
        kmiMemCopy4(t81, ((int)stk + 0), 0x4);
        t80 = (t80 + 0x1);
        t81 = (t81 + 0x4);
        if ((int)t80 >= (int)0x200000) {
            break;
        }
    }
    return 0x1;
}

int FUN_0c02cf88(int a4)
{
    int stk[15];
    register int t2;
    register int t3;
    register int t4;
    register float u6;
    register float u7;
    register int t10;
    register int t11;
    register float u12;
    register float u13;
    register float u14;
    register int t17;
    register int t19;

    nlTriPutTextureInit(0xC274808, 0xFFFFFFFF, 0x0);
    t2 = ((((struct o48_int *)(a4))->v));
    *(int *)((int)stk + 20) = t2;
    *(int *)((int)stk + 16) = 0x0;
    *(int *)((int)stk + 12) = 0x0;
    *(int *)((int)stk + 8) = 0x0;
    *(int *)((int)stk + 4) = 0x0;
    *(int *)((int)stk + 0) = 0x0;
    t3 = (((struct o44_int *)(a4))->v);
    t4 = *(int *)0xC270F50;
    u6 = (((struct o8_float *)(((t3 * 0x1C) + t4)))->v);
    u7 = (((struct o4_float *)(((t3 * 0x1C) + t4)))->v);
    FUN_0c075740(0xC274808, 0x2, 0x0, 0xFFFFFFFF, 0x0, 0x0, 0x0, 0x0, 0x0, t2, 0.5f, 0.5f, u7, u6, ((((struct oC_float *)(((t3 * 0x1C) + t4)))->v)), 0.0f, 0.0f, 0.0f);
    *(unsigned int *)0xC274828 = ((*(int *)0xC274828) | 0xC0);
    t10 = (((struct o44_int *)(a4))->v);
    t11 = *(int *)0xC270F50;
    u12 = (((struct o4_float *)(((t10 * 0x1C) + t11)))->v);
    u13 = (((struct o8_float *)(((t10 * 0x1C) + t11)))->v);
    u14 = (((struct oC_float *)(((t10 * 0x1C) + t11)))->v);
    FUN_0c073c40(((int)stk + 24), a4, 0.00999999978f);
    FUN_0c07ff00();
    t17 = 0x0;
    for (;;) {
        if ((int)t17 >= (int)((((struct o48_int *)(a4))->v))) {
            break;
        }
        t19 = *(int *)(((t17 << 2) + 0xC1294CC));
        nlAddVector3op((((int)stk + 24) + 0x18), ((int)stk + 24), ((((t19 << 1) + t19) << 2) + (a4 + 0x14)));
        nlAddVector((((int)stk + 24) + 0xC), (((int)stk + 24) + 0x18));
        nlTriPutSetPoint(0xC274808, t17, (*(float *)(((int)stk + 48))), (*(float *)(((int)stk + 52))), (*(float *)(((int)stk + 56))), (*(float *)((a4 + 0x0))), ((((struct o4_float *)(a4))->v)), ((((struct o8_float *)(a4))->v)), 0.0f, 0.0f);
        t17 = (t17 + 0x1);
    }
    nlTriPutSetClipping(0xC274808, ((((struct o14_float *)(a4))->v)), ((((struct o4_float *)((a4 + 0x14)))->v)), ((((struct o8_float *)((a4 + 0x14)))->v)), ((((struct o10_float *)(a4))->v)));
    nlObjPutUseViewMatrix(0xC274808);
    FUN_0c073c40((((int)stk + 24) + 0xC), (((int)stk + 24) + 0xC), (1.0f / (float)((((struct o48_int *)(a4))->v))));
    FUN_0c073c40((((int)stk + 24) + 0x18), a4, (((((struct o10_float *)(a4))->v)) * 0.100000001f));
    nlAddVector((((int)stk + 24) + 0x18), (((int)stk + 24) + 0xC));
    return (FUN_0c078810((((int)stk + 24) + 0x18), (((int)stk + 24) + 0xC), (((0xFF000000 | ((unsigned char)(int)(u12 * 255.0f) << 16)) | ((unsigned char)(int)(u13 * 255.0f) << 8)) | (unsigned char)(int)(u14 * 255.0f))));
}

int kmiAllocSysConfig(int a4, float f4, float f5, float f6, float f7, float f8, float f9)
{
    register int t6;
    register int t204;
    register int t9;
    register int t95;
    register int t12;
    register int t14;
    register int t15;
    register int t22;
    register int t29;
    int t34;
    int t60;
    register int t109;
    register int t111;
    register int t112;
    register int t119;
    register int t126;
    int t131;
    int t157;
    register int t218;
    register int t304;
    register int t221;
    register int t223;
    register int t224;
    register int t231;
    register int t238;
    int t243;
    int t269;
    register int t318;
    register int t320;
    register int t321;
    register int t328;
    register int t335;
    int t340;
    int t366;
    register int t413;
    register int t192;
    register int t30;
    register int t31;
    register int t56;
    register int t57;
    register int t127;
    register int t128;
    register int t153;
    register int t154;
    register int t401;
    register int t239;
    register int t240;
    register int t265;
    register int t266;
    register int t336;
    register int t337;
    register int t362;
    register int t363;

    if (a4 == 1) {
        t6 = kmCreateVertexBuffer(((((struct o0_int *)0xC2D0BC0)->v)), ((((struct o4_int *)0xC2D0BC0)->v)), ((((struct o8_int *)0xC2D0BC0)->v)), ((((struct oC_int *)0xC2D0BC0)->v)), (((((struct o10_int *)0xC2D0BC0)->v))));
        t204 = t6;
        if (t6 == 0) {
            if (a4 == 2) {
                t9 = ((int (*)(int, int))(kmCreateTABuffer))(((((struct o0_int *)0xC2D0BC0)->v)), ((((struct o18_int *)0xC2D0C00)->v)));
                t95 = t9;
                if (t9 == 0) {
                    t12 = 0x2;
                    if (((((struct o1C_int *)0xC2D0BC0)->v)) == ((((struct o2C_int *)0xC2D0BC0)->v))) {
                        t12 = 0x1;
                    }
                    if ((unsigned int)0x0 < (unsigned int)t12) {
                        t14 = 0x0;
                        t15 = 0x0;
                        for (;;) {
                            t22 = kmCreateFrameBufferSurface((*(int *)(((0xC2D0BDC + t15) + 0x0))), (*(int *)(((0xC2D0BDC + t15) + 0x4))), (*(int *)(((0xC2D0BDC + t15) + 0x8))), ((((struct o18_int *)0xC2D0BC0)->v)), ((*(int *)(((0xC2D0BDC + t15) + 0xC)))));
                            if (t22 != 0) {
                                break;
                            }
                            t14 = (t14 + 0x1);
                            t15 = (t15 + 0x10);
                            if ((unsigned int)t14 >= (unsigned int)t12) {
                                t29 = kmActivateFrameBuffer(((((struct o3C_int *)0xC2D0BC0)->v)), ((((struct o0_int *)0xC2D0C00)->v)), ((((struct o18_int *)0xC2D0BC0)->v)), ((((struct o4_int *)0xC2D0C00)->v)));
                                if ((t29 == 0) && ((t30 = (((struct o0_int *)0xC300C14)->v), t30 == 1) || (t31 = *(int *)0xC1737E8, t31 == 1))) {
                                    (((struct o20_uint *)0xC300C14)->v) = ((((struct o18_int *)0xC300C14)->v));
                                    *(unsigned int *)(((((((struct o18_int *)0xC300C14)->v)) << 2) + 0xC300C1C)) = 0x0;
                                    (((struct o30_uint *)0xC300C14)->v) = 0x1;
                                    t34 = (((struct o18_int *)0xC300C14)->v);
                                    kmiWriteRegister(0x8, 0x1);
                                    kmiWriteRegister(0x8, 0x0);
                                    t15 = (0x1 & t34);
                                    t15 = (t15 << 2);
                                    t15 = (t15 << 2);
                                    t15 = (t15 << 1);
                                    kmiWriteRegister(0x124, (*(int *)((t15 + 0xC300D48))));
                                    kmiWriteRegister(0x12C, (*(int *)((t15 + 0xC300D4C))));
                                    kmiWriteRegister(0x128, (*(int *)((t15 + 0xC300D54))));
                                    kmiWriteRegister(0x130, (*(int *)((t15 + 0xC300D58))));
                                    kmiWriteRegister(0x164, (*(int *)((t15 + 0xC300D50))));
                                    kmiWriteRegister(0x144, 0x80000000);
                                    kmiReadRegister(0x144);
                                    (((struct o28_uint *)0xC300C14)->v) = 0x0;
                                    (((struct o24_uint *)0xC300C14)->v) = (*(int *)0xC300D38);
                                    return t29;
                                }
                                return t29;
                            }
                        }
                        t95 = t22;
                    } else {
                        t95 = kmActivateFrameBuffer(((((struct o3C_int *)0xC2D0BC0)->v)), ((((struct o0_int *)0xC2D0C00)->v)), ((((struct o18_int *)0xC2D0BC0)->v)), ((((struct o4_int *)0xC2D0C00)->v)));
                        if ((t95 == 0) && ((t56 = (((struct o0_int *)0xC300C14)->v), t56 == 1) || (t57 = *(int *)0xC1737E8, t57 == 1))) {
                            (((struct o20_uint *)0xC300C14)->v) = ((((struct o18_int *)0xC300C14)->v));
                            *(unsigned int *)(((((((struct o18_int *)0xC300C14)->v)) << 2) + 0xC300C1C)) = 0x0;
                            (((struct o30_uint *)0xC300C14)->v) = 0x1;
                            t60 = (((struct o18_int *)0xC300C14)->v);
                            kmiWriteRegister(0x8, 0x1);
                            kmiWriteRegister(0x8, 0x0);
                            kmiWriteRegister(0x124, (*(int *)((((((0x1 & t60) << 2) << 2) << 1) + 0xC300D48))));
                            kmiWriteRegister(0x12C, (*(int *)((((((0x1 & t60) << 2) << 2) << 1) + 0xC300D4C))));
                            kmiWriteRegister(0x128, (*(int *)((((((0x1 & t60) << 2) << 2) << 1) + 0xC300D54))));
                            kmiWriteRegister(0x130, (*(int *)((((((0x1 & t60) << 2) << 2) << 1) + 0xC300D58))));
                            kmiWriteRegister(0x164, (*(int *)((((((0x1 & t60) << 2) << 2) << 1) + 0xC300D50))));
                            kmiWriteRegister(0x144, 0x80000000);
                            kmiReadRegister(0x144);
                            (((struct o28_uint *)0xC300C14)->v) = 0x0;
                            (((struct o24_uint *)0xC300C14)->v) = (*(int *)0xC300D38);
                        }
                    }
                }
                t192 = t95;
            } else {
                t109 = 0x2;
                if (((((struct o1C_int *)0xC2D0BC0)->v)) == ((((struct o2C_int *)0xC2D0BC0)->v))) {
                    t109 = 0x1;
                }
                if ((unsigned int)0x0 < (unsigned int)t109) {
                    t111 = 0x0;
                    t112 = 0x0;
                    for (;;) {
                        t119 = kmCreateFrameBufferSurface((*(int *)(((0xC2D0BDC + t112) + 0x0))), (*(int *)(((0xC2D0BDC + t112) + 0x4))), (*(int *)(((0xC2D0BDC + t112) + 0x8))), ((((struct o18_int *)0xC2D0BC0)->v)), ((*(int *)(((0xC2D0BDC + t112) + 0xC)))));
                        if (t119 != 0) {
                            break;
                        }
                        t111 = (t111 + 0x1);
                        t112 = (t112 + 0x10);
                        if ((unsigned int)t111 >= (unsigned int)t109) {
                            t126 = kmActivateFrameBuffer(((((struct o3C_int *)0xC2D0BC0)->v)), ((((struct o0_int *)0xC2D0C00)->v)), ((((struct o18_int *)0xC2D0BC0)->v)), ((((struct o4_int *)0xC2D0C00)->v)));
                            if ((t126 == 0) && ((t127 = (((struct o0_int *)0xC300C14)->v), t127 == 1) || (t128 = *(int *)0xC1737E8, t128 == 1))) {
                                (((struct o20_uint *)0xC300C14)->v) = ((((struct o18_int *)0xC300C14)->v));
                                *(unsigned int *)(((((((struct o18_int *)0xC300C14)->v)) << 2) + 0xC300C1C)) = 0x0;
                                (((struct o30_uint *)0xC300C14)->v) = 0x1;
                                t131 = (((struct o18_int *)0xC300C14)->v);
                                kmiWriteRegister(0x8, 0x1);
                                kmiWriteRegister(0x8, 0x0);
                                t112 = (0x1 & t131);
                                t112 = (t112 << 2);
                                t112 = (t112 << 2);
                                t112 = (t112 << 1);
                                kmiWriteRegister(0x124, (*(int *)((t112 + 0xC300D48))));
                                kmiWriteRegister(0x12C, (*(int *)((t112 + 0xC300D4C))));
                                kmiWriteRegister(0x128, (*(int *)((t112 + 0xC300D54))));
                                kmiWriteRegister(0x130, (*(int *)((t112 + 0xC300D58))));
                                kmiWriteRegister(0x164, (*(int *)((t112 + 0xC300D50))));
                                kmiWriteRegister(0x144, 0x80000000);
                                kmiReadRegister(0x144);
                                (((struct o28_uint *)0xC300C14)->v) = 0x0;
                                (((struct o24_uint *)0xC300C14)->v) = (*(int *)0xC300D38);
                                return t126;
                            }
                            return t126;
                        }
                    }
                    t192 = t119;
                } else {
                    t192 = kmActivateFrameBuffer(((((struct o3C_int *)0xC2D0BC0)->v)), ((((struct o0_int *)0xC2D0C00)->v)), ((((struct o18_int *)0xC2D0BC0)->v)), ((((struct o4_int *)0xC2D0C00)->v)));
                    if ((t192 == 0) && ((t153 = (((struct o0_int *)0xC300C14)->v), t153 == 1) || (t154 = *(int *)0xC1737E8, t154 == 1))) {
                        (((struct o20_uint *)0xC300C14)->v) = ((((struct o18_int *)0xC300C14)->v));
                        *(unsigned int *)(((((((struct o18_int *)0xC300C14)->v)) << 2) + 0xC300C1C)) = 0x0;
                        (((struct o30_uint *)0xC300C14)->v) = 0x1;
                        t157 = (((struct o18_int *)0xC300C14)->v);
                        kmiWriteRegister(0x8, 0x1);
                        kmiWriteRegister(0x8, 0x0);
                        kmiWriteRegister(0x124, (*(int *)((((((0x1 & t157) << 2) << 2) << 1) + 0xC300D48))));
                        kmiWriteRegister(0x12C, (*(int *)((((((0x1 & t157) << 2) << 2) << 1) + 0xC300D4C))));
                        kmiWriteRegister(0x128, (*(int *)((((((0x1 & t157) << 2) << 2) << 1) + 0xC300D54))));
                        kmiWriteRegister(0x130, (*(int *)((((((0x1 & t157) << 2) << 2) << 1) + 0xC300D58))));
                        kmiWriteRegister(0x164, (*(int *)((((((0x1 & t157) << 2) << 2) << 1) + 0xC300D50))));
                        kmiWriteRegister(0x144, 0x80000000);
                        kmiReadRegister(0x144);
                        (((struct o28_uint *)0xC300C14)->v) = 0x0;
                        (((struct o24_uint *)0xC300C14)->v) = (*(int *)0xC300D38);
                    }
                }
            }
            t204 = t192;
        }
        t413 = t204;
    } else {
        if (a4 == 2) {
            t218 = ((int (*)(int, int, float, float, float, float, float, float))(kmCreateTABuffer))(((((struct o0_int *)0xC2D0BC0)->v)), ((((struct o18_int *)0xC2D0C00)->v)), f4, f5, f6, f7, f8, f9);
            t304 = t218;
            if (t218 == 0) {
                t221 = 0x2;
                if (((((struct o1C_int *)0xC2D0BC0)->v)) == ((((struct o2C_int *)0xC2D0BC0)->v))) {
                    t221 = 0x1;
                }
                if ((unsigned int)0x0 < (unsigned int)t221) {
                    t223 = 0x0;
                    t224 = 0x0;
                    for (;;) {
                        t231 = kmCreateFrameBufferSurface((*(int *)(((0xC2D0BDC + t224) + 0x0))), (*(int *)(((0xC2D0BDC + t224) + 0x4))), (*(int *)(((0xC2D0BDC + t224) + 0x8))), ((((struct o18_int *)0xC2D0BC0)->v)), ((*(int *)(((0xC2D0BDC + t224) + 0xC)))));
                        if (t231 != 0) {
                            break;
                        }
                        t223 = (t223 + 0x1);
                        t224 = (t224 + 0x10);
                        if ((unsigned int)t223 >= (unsigned int)t221) {
                            t238 = kmActivateFrameBuffer(((((struct o3C_int *)0xC2D0BC0)->v)), ((((struct o0_int *)0xC2D0C00)->v)), ((((struct o18_int *)0xC2D0BC0)->v)), ((((struct o4_int *)0xC2D0C00)->v)));
                            if ((t238 == 0) && ((t239 = (((struct o0_int *)0xC300C14)->v), t239 == 1) || (t240 = *(int *)0xC1737E8, t240 == 1))) {
                                (((struct o20_uint *)0xC300C14)->v) = ((((struct o18_int *)0xC300C14)->v));
                                *(unsigned int *)(((((((struct o18_int *)0xC300C14)->v)) << 2) + 0xC300C1C)) = 0x0;
                                (((struct o30_uint *)0xC300C14)->v) = 0x1;
                                t243 = (((struct o18_int *)0xC300C14)->v);
                                kmiWriteRegister(0x8, 0x1);
                                kmiWriteRegister(0x8, 0x0);
                                t224 = (0x1 & t243);
                                t224 = (t224 << 2);
                                t224 = (t224 << 2);
                                t224 = (t224 << 1);
                                kmiWriteRegister(0x124, (*(int *)((t224 + 0xC300D48))));
                                kmiWriteRegister(0x12C, (*(int *)((t224 + 0xC300D4C))));
                                kmiWriteRegister(0x128, (*(int *)((t224 + 0xC300D54))));
                                kmiWriteRegister(0x130, (*(int *)((t224 + 0xC300D58))));
                                kmiWriteRegister(0x164, (*(int *)((t224 + 0xC300D50))));
                                kmiWriteRegister(0x144, 0x80000000);
                                kmiReadRegister(0x144);
                                (((struct o28_uint *)0xC300C14)->v) = 0x0;
                                (((struct o24_uint *)0xC300C14)->v) = (*(int *)0xC300D38);
                                return t238;
                            }
                            return t238;
                        }
                    }
                    t304 = t231;
                } else {
                    t304 = kmActivateFrameBuffer(((((struct o3C_int *)0xC2D0BC0)->v)), ((((struct o0_int *)0xC2D0C00)->v)), ((((struct o18_int *)0xC2D0BC0)->v)), ((((struct o4_int *)0xC2D0C00)->v)));
                    if ((t304 == 0) && ((t265 = (((struct o0_int *)0xC300C14)->v), t265 == 1) || (t266 = *(int *)0xC1737E8, t266 == 1))) {
                        (((struct o20_uint *)0xC300C14)->v) = ((((struct o18_int *)0xC300C14)->v));
                        *(unsigned int *)(((((((struct o18_int *)0xC300C14)->v)) << 2) + 0xC300C1C)) = 0x0;
                        (((struct o30_uint *)0xC300C14)->v) = 0x1;
                        t269 = (((struct o18_int *)0xC300C14)->v);
                        kmiWriteRegister(0x8, 0x1);
                        kmiWriteRegister(0x8, 0x0);
                        kmiWriteRegister(0x124, (*(int *)((((((0x1 & t269) << 2) << 2) << 1) + 0xC300D48))));
                        kmiWriteRegister(0x12C, (*(int *)((((((0x1 & t269) << 2) << 2) << 1) + 0xC300D4C))));
                        kmiWriteRegister(0x128, (*(int *)((((((0x1 & t269) << 2) << 2) << 1) + 0xC300D54))));
                        kmiWriteRegister(0x130, (*(int *)((((((0x1 & t269) << 2) << 2) << 1) + 0xC300D58))));
                        kmiWriteRegister(0x164, (*(int *)((((((0x1 & t269) << 2) << 2) << 1) + 0xC300D50))));
                        kmiWriteRegister(0x144, 0x80000000);
                        kmiReadRegister(0x144);
                        (((struct o28_uint *)0xC300C14)->v) = 0x0;
                        (((struct o24_uint *)0xC300C14)->v) = (*(int *)0xC300D38);
                    }
                }
            }
            t401 = t304;
        } else {
            t318 = 0x2;
            if (((((struct o1C_int *)0xC2D0BC0)->v)) == ((((struct o2C_int *)0xC2D0BC0)->v))) {
                t318 = 0x1;
            }
            if ((unsigned int)0x0 < (unsigned int)t318) {
                t320 = 0x0;
                t321 = 0x0;
                for (;;) {
                    t328 = kmCreateFrameBufferSurface((*(int *)(((0xC2D0BDC + t321) + 0x0))), (*(int *)(((0xC2D0BDC + t321) + 0x4))), (*(int *)(((0xC2D0BDC + t321) + 0x8))), ((((struct o18_int *)0xC2D0BC0)->v)), ((*(int *)(((0xC2D0BDC + t321) + 0xC)))));
                    if (t328 != 0) {
                        break;
                    }
                    t320 = (t320 + 0x1);
                    t321 = (t321 + 0x10);
                    if ((unsigned int)t320 >= (unsigned int)t318) {
                        t335 = kmActivateFrameBuffer(((((struct o3C_int *)0xC2D0BC0)->v)), ((((struct o0_int *)0xC2D0C00)->v)), ((((struct o18_int *)0xC2D0BC0)->v)), ((((struct o4_int *)0xC2D0C00)->v)));
                        if ((t335 == 0) && ((t336 = (((struct o0_int *)0xC300C14)->v), t336 == 1) || (t337 = *(int *)0xC1737E8, t337 == 1))) {
                            (((struct o20_uint *)0xC300C14)->v) = ((((struct o18_int *)0xC300C14)->v));
                            *(unsigned int *)(((((((struct o18_int *)0xC300C14)->v)) << 2) + 0xC300C1C)) = 0x0;
                            (((struct o30_uint *)0xC300C14)->v) = 0x1;
                            t340 = (((struct o18_int *)0xC300C14)->v);
                            kmiWriteRegister(0x8, 0x1);
                            kmiWriteRegister(0x8, 0x0);
                            t321 = (0x1 & t340);
                            t321 = (t321 << 2);
                            t321 = (t321 << 2);
                            t321 = (t321 << 1);
                            kmiWriteRegister(0x124, (*(int *)((t321 + 0xC300D48))));
                            kmiWriteRegister(0x12C, (*(int *)((t321 + 0xC300D4C))));
                            kmiWriteRegister(0x128, (*(int *)((t321 + 0xC300D54))));
                            kmiWriteRegister(0x130, (*(int *)((t321 + 0xC300D58))));
                            kmiWriteRegister(0x164, (*(int *)((t321 + 0xC300D50))));
                            kmiWriteRegister(0x144, 0x80000000);
                            kmiReadRegister(0x144);
                            (((struct o28_uint *)0xC300C14)->v) = 0x0;
                            (((struct o24_uint *)0xC300C14)->v) = (*(int *)0xC300D38);
                            return t335;
                        }
                        return t335;
                    }
                }
                t401 = t328;
            } else {
                t401 = kmActivateFrameBuffer(((((struct o3C_int *)0xC2D0BC0)->v)), ((((struct o0_int *)0xC2D0C00)->v)), ((((struct o18_int *)0xC2D0BC0)->v)), ((((struct o4_int *)0xC2D0C00)->v)));
                if ((t401 == 0) && ((t362 = (((struct o0_int *)0xC300C14)->v), t362 == 1) || (t363 = *(int *)0xC1737E8, t363 == 1))) {
                    (((struct o20_uint *)0xC300C14)->v) = ((((struct o18_int *)0xC300C14)->v));
                    *(unsigned int *)(((((((struct o18_int *)0xC300C14)->v)) << 2) + 0xC300C1C)) = 0x0;
                    (((struct o30_uint *)0xC300C14)->v) = 0x1;
                    t366 = (((struct o18_int *)0xC300C14)->v);
                    kmiWriteRegister(0x8, 0x1);
                    kmiWriteRegister(0x8, 0x0);
                    kmiWriteRegister(0x124, (*(int *)((((((0x1 & t366) << 2) << 2) << 1) + 0xC300D48))));
                    kmiWriteRegister(0x12C, (*(int *)((((((0x1 & t366) << 2) << 2) << 1) + 0xC300D4C))));
                    kmiWriteRegister(0x128, (*(int *)((((((0x1 & t366) << 2) << 2) << 1) + 0xC300D54))));
                    kmiWriteRegister(0x130, (*(int *)((((((0x1 & t366) << 2) << 2) << 1) + 0xC300D58))));
                    kmiWriteRegister(0x164, (*(int *)((((((0x1 & t366) << 2) << 2) << 1) + 0xC300D50))));
                    kmiWriteRegister(0x144, 0x80000000);
                    kmiReadRegister(0x144);
                    (((struct o28_uint *)0xC300C14)->v) = 0x0;
                    (((struct o24_uint *)0xC300C14)->v) = (*(int *)0xC300D38);
                }
            }
        }
        t413 = t401;
    }
    return t413;
}

int FUN_0c02cc30(int a4)
{
    int stk[10];
    register float u9;
    register float u10;
    register float u14;
    register int t15;
    register int t16;
    register float u19;
    register float u22;
    register float u23;
    register float u33;
    register float u34;
    register float u38;

    if ((*(int *)0xC129460) != 0) {
        nlTriPutTextureInit(0xC274428, 0xFFFFFFFF, 0x0);
        *(int *)((int)stk + 20) = 0x22;
        *(int *)((int)stk + 16) = 0x0;
        *(int *)((int)stk + 12) = 0x0;
        *(int *)((int)stk + 8) = 0x0;
        *(int *)((int)stk + 4) = 0x0;
        *(int *)((int)stk + 0) = 0x0;
        FUN_0c075740(0xC274428, 0x2, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x22, 0.5f, 0.5f, 1.0f, 0.0f, 0.699999988f, 0.0f, 0.0f, 0.0f);
        *(unsigned int *)0xC274448 = ((*(int *)0xC274448) | 0xC0);
        *(unsigned int *)0xC129460 = 0x0;
    }
    u9 = 0.0f;
    u10 = 0.699999988f;
    if (((*(int *)((a4 + 0x18))) & 1) != 0) {
        u9 = 0.699999988f;
        u10 = 0.0f;
    }
    FUN_0c075a00(0xC274428, 1.0f, u9, u10);
    *(float *)(((int)stk + 36)) = ((((struct o8_float *)(a4))->v));
    u14 = (((struct oC_float *)(a4))->v);
    t15 = 0x0;
    t16 = 0x0;
    for (;;) {
        FUN_0c072150(t16, ((int)stk + 24), (((int)stk + 24) + 0x4));
        u19 = (((struct o10_float *)(a4))->v);
        u22 = (*(float *)(((int)stk + 36)));
        u22 = u22 + u19 * (*(float *)(((int)stk + 28)));
        u23 = u14;
        u23 = u23 + u19 * (*(float *)(((int)stk + 24)));
        *(float *)(((int)stk + 32)) = u23;
        nlTriPutSetPoint(0xC274428, t15, u22, ((((struct o14_float *)(a4))->v)), u23, (*(float *)(((int)stk + 28))), 0.0f, (*(float *)(((int)stk + 24))), 0.0f, 0.0f);
        nlTriPutSetPoint(0xC274428, (t15 + 0x1), u22, ((((struct o18_float *)(a4))->v)), (*(float *)(((int)stk + 32))), (*(float *)(((int)stk + 28))), 0.0f, (*(float *)(((int)stk + 24))), 0.0f, 0.0f);
        t16 = (t16 + 0x1000);
        t15 = (t15 + 0x2);
        if ((int)t16 > (int)0x10000) {
            break;
        }
    }
    u33 = (((struct o14_float *)(a4))->v);
    u34 = (((struct o18_float *)(a4))->v);
    u38 = ((((struct o10_float *)(a4))->v));
    u38 = u38 + 0.5f * ((u33 - u34));
    nlTriPutSetClipping(0xC274428, (*(float *)(((int)stk + 36))), ((u33 + u34) * 0.5f), u14, u38);
    return (nlObjPutUseViewMatrix(0xC274428));
}

int ADXB_DecodeHeaderSpsd(int a4, int a5, int a6)
{
    int stk[10];
    register int t2;
    register int t13;

    *(unsigned int *)(((int)stk + 32)) = a5;
    *(unsigned int *)(((int)stk + 36)) = a6;
    *(unsigned short *)((a4 + 0x2)) = 0x1;
    *(int *)((int)stk + 24) = (0xAA + a4);
    *(int *)((int)stk + 20) = (a4 + 0x10);
    *(int *)((int)stk + 16) = (a4 + 0x18);
    *(int *)((int)stk + 12) = (a4 + 0x14);
    *(int *)((int)stk + 8) = (a4 + 0xE);
    *(int *)((int)stk + 4) = (a4 + 0xF);
    *(int *)((int)stk + 0) = (a4 + 0xD);
    t2 = ADX_DecodeInfoWav((*(int *)(((int)stk + 32))), (*(int *)(((int)stk + 36))), (((int)stk + 0) + 0x1C), (a4 + 0xC), (a4 + 0xD), (a4 + 0xF), (a4 + 0xE), (a4 + 0x14), (a4 + 0x18), (a4 + 0x10), (0xAA + a4));
    t13 = 0x0;
    if ((int)t2 < 0) {
    } else {
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        (((struct o4A_ushort *)(a4))->v) = 0x0;
        (((struct o48_ushort *)(a4))->v) = 0x0;
        (((struct o26_ushort *)(a4))->v) = 0x0;
        (((struct o24_ushort *)(a4))->v) = 0x0;
        *(unsigned int *)((a4 + 0x34)) = 0x0;
        *(unsigned int *)((a4 + 0x30)) = 0x0;
        *(unsigned int *)((a4 + 0x2C)) = 0x0;
        *(unsigned int *)((a4 + 0x28)) = 0x0;
        *(unsigned int *)((a4 + 0x20)) = 0x0;
        (((struct o58_uint *)(a4))->v) = (*(signed char *)((a4 + 0xE)));
        (((struct o5C_uint *)(a4))->v) = (*(signed char *)((a4 + 0xF)));
        (((struct o60_uint *)(a4))->v) = (*(int *)((a4 + 0x10)));
        (((struct o64_uint *)(a4))->v) = (*(int *)((a4 + 0x3C)));
        (((struct o68_uint *)(a4))->v) = ((((struct o40_int *)(a4))->v));
        (((struct o6C_uint *)(a4))->v) = ((((struct o44_int *)(a4))->v));
        (((struct o7C_ushort *)(a4))->v) = ((((struct o48_short *)(a4))->v));
        (((struct o7E_ushort *)(a4))->v) = ((((struct o4A_short *)(a4))->v));
        (((struct o80_uint *)(a4))->v) = (a4 + 0x4C);
        (((struct o9C_uint *)(a4))->v) = 0x0;
        (((struct o98_uint *)(a4))->v) = 0x0;
        (((struct oA8_ushort *)(a4))->v) = 0x1;
        memset((a4 + 0x4C), 0x0, 0x4);
        t13 = (*(short *)(((int)stk + 28)));
    }
    return t13;
}

int vmsio_kd_bank_command(int a4, int a5, int a6, int a7, int a8)
{
    int stk[7];
    register int t0;
    register int t2;
    register int t4;
    register int t6;
    register int t8;
    register int t10;
    register int t12;

    *(unsigned int *)(((int)stk + 24)) = a4;
    *(unsigned int *)(((int)stk + 20)) = a5;
    *(unsigned int *)(((int)stk + 16)) = a6;
    *(unsigned int *)(((int)stk + 12)) = a7;
    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x4);
    t0 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = (t0 + 0x1);
    t2 = 0x0;
    if ((*(int *)(((int)stk + 20))) != 0) {
        t2 = 0xFF;
    }
    *(unsigned char *)((((t0 + 0x1) - 1) + 0x0)) = t2;
    t4 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = (t4 + 0x1);
    t6 = 0x0;
    if ((*(int *)(((int)stk + 16))) != 0) {
        t6 = 0xFF;
    }
    *(unsigned char *)((((t4 + 0x1) - 1) + 0x0)) = t6;
    t8 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = (t8 + 0x1);
    t10 = 0x0;
    if ((*(int *)(((int)stk + 12))) != 0) {
        t10 = 0xFF;
    }
    *(unsigned char *)((((t8 + 0x1) - 1) + 0x0)) = t10;
    t12 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = (t12 + 0x1);
    *(unsigned char *)((((t12 + 0x1) - 1) + 0x0)) = a8;
    *(int *)((int)stk + 0) = 0x1;
    return (FUN_0c16d948((*(int *)(((int)stk + 24))), 0x2, 0x1F, (((int)stk + 0) + 0x8), 0x1));
}
