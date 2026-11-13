/* Straight-line functions with calls and guards (batch gen_bq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o10_short { char p[0x10]; short v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o10A8_int { char p[0x10A8]; int v; };
struct o10A8_uint { char p[0x10A8]; unsigned int v; };
struct o10AC_uint { char p[0x10AC]; unsigned int v; };
struct o10C0_int { char p[0x10C0]; int v; };
struct o10D0_int { char p[0x10D0]; int v; };
struct o10F4_int { char p[0x10F4]; int v; };
struct o12_short { char p[0x12]; short v; };
struct o14_int { char p[0x14]; int v; };
struct o14_short { char p[0x14]; short v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o16_short { char p[0x16]; short v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_float { char p[0x20]; float v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o28_int { char p[0x28]; int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o38_int { char p[0x38]; int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o8C_uint { char p[0x8C]; unsigned int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oFC0_uint { char p[0xFC0]; unsigned int v; };
struct oFC4_int { char p[0xFC4]; int v; };
struct oFC4_uint { char p[0xFC4]; unsigned int v; };
struct oFC8_int { char p[0xFC8]; int v; };
struct oFC8_uint { char p[0xFC8]; unsigned int v; };
struct oFCC_uint { char p[0xFCC]; unsigned int v; };
int ADXF_OpenAfs(int, int);
int CheckColliWallPole(int, int);
int CheckColliWallSegment(int, int);
int FUN_0c014364(void);
int FUN_0c016398(void);
int FUN_0c016ab8(int);
int FUN_0c01e15a(void);
int FUN_0c01e43c(void);
int FUN_0c01f5fc(void);
int FUN_0c020d78(int);
int FUN_0c022d30(void);
int FUN_0c026c02(void);
int FUN_0c026ce6(void);
int FUN_0c026d10(void);
int FUN_0c027f28(int);
int FUN_0c027fbe(float, float);
int FUN_0c02803a(int, int, int, int);
int FUN_0c028196(void);
int FUN_0c0281d4(int, int);
int FUN_0c02842e(int);
int FUN_0c029528(void);
int FUN_0c02a5ca(int);
int FUN_0c02e42a(int, int, int);
int FUN_0c02ff06(void);
int FUN_0c030b34(void);
int FUN_0c03ff4a(int);
int FUN_0c0423e6(int);
int FUN_0c046460(int);
int FUN_0c0464f0(int, int, int, int, int);
int FUN_0c0491d8(void);
int FUN_0c04d58c(void);
int FUN_0c052d5c(int, int, int);
int FUN_0c058be4(int);
int FUN_0c058ca6(int, int);
int FUN_0c058f64(int, int, int, int);
int FUN_0c0590a8(void);
int FUN_0c05bef8(int);
int FUN_0c060104(void);
int FUN_0c06017e(void);
extern int FUN_0c069e54();
int FUN_0c06b370(void);
int FUN_0c06e990(int);
int FUN_0c06f550(int, int, int);
int FUN_0c070ea0(int);
int FUN_0c072230(int, int);
int FUN_0c073360(void);
int FUN_0c073a60(int);
int FUN_0c073c40(int, int, float);
float FUN_0c073c80(int);
int FUN_0c0755f0(int);
int FUN_0c075740(int, int, int, int, int, int, int, int, int, int, float, float, float, float, float, float, float, float);
int FUN_0c07ada0(int, int, int, int, float, float);
int FUN_0c07fdc8(void);
int FUN_0c07ff00(void);
int FUN_0c14ff0c(int);
int FUN_0c1500d2(int, int, int);
int FUN_0c1503dc(int);
extern int FUN_0c150460();
int Init_Standard(void);
int Voice_ShutUp(int);
int buStat(int);
int copy_device(void);
int kdRecvFrame(void);
int kmSetCheapShadowMode(void);
int kmiVQallocFB(int, int, int, int, int, int);
int kmytex_FBAllocEntry(void);
int kmytex_FBDeQueueEntry(int, int, int);
int kmytex_FBEnQueueTop(int, int, int);
int memset(int, int, int);
extern int mpdrv_frame_send();
int mpdrv_init_globals(void);
int mpdrv_set_dreq_ns(int);
int mpdrv_set_end_ns(void);
float nlFloor(float);
int nlInitEvent(void);
int nlInitHeapMemory(int, int);
float nlLength(int, int);
int nlObjPutLoadTexture(int, int);
int nlObjPutUseViewMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAY(int);
int nlSubVector3op(int, int, int);
int nlTriPutSetClipping(int, float, float, float, float);
int nlTriPutSetPoint(int, int, float, float, float, float, float, float, float, float);
int nlTriPutTextureInit(int, int, int);
int pfSize(float, float);
int vmsfs_c_execcallback(int, int, int);
int vmsfs_c_synch(int, int, int, int, float, float, float, float, float, float, float, float);
int vmsfs_isready(void);
int mpdrv_init_ex(int a4, int a5, int a6, int a7);
int FUN_0c01f098(void);
int FUN_0c05074c(int a4);
int FUN_0c01d4ac(void);
int FUN_0c04cbf8(void);
int FUN_0c15f33e(int a4, int a5, int a6, int a7);
int FUN_0c04ebe2(void);
int FUN_0c06aeba(int a4, int a5, int a6);
int vmsfs_setwork(int a4, int a5, int a6);
int VQalloc(int a4, int a5, int a6, int a7);
float FUN_0c0469e2(int a4, int a5, int a6, int a7, int a8, float f4);
float FUN_0c02be68(int a4, float f4);
void buExecServer(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
int PutGridPoly(int a4, int a5, float f4, float f5, float f6);
int FUN_0c04c354(void);

int mpdrv_init_ex(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t4;
    register int t6;
    register int t12;
    register int t15;
    register int t20;
    register int t22;
    register int t25;
    register int t28;
    register int t30;
    register int t31;
    register int t32;
    register int t33;
    register int t35;
    register int t36;
    register int t45;
    register int t47;
    register int t49;
    register int t51;
    register int t53;
    register int t56;
    register int t57;
    int t58;
    register int t73;
    register int t74;
    register int t75;
    register int t76;
    register int t77;
    register int t78;
    register int t99;
    register int t88;
    register int t89;
    register int t90;
    register int t91;

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    *(unsigned int *)0xC30817C = 0xC307080;
    *(unsigned int *)0xC308044 = a6;
    (((struct oFC8_uint *)((*(int *)0xC30817C)))->v) = (*(int *)(((int)stk + 0)));
    if ((((((struct oFC4_int *)((*(int *)0xC30817C)))->v)) & 0x1F) != 0) {
        t4 = *(int *)0xC30817C;
        (((struct oFC4_uint *)(t4))->v) = (((((struct oFC4_int *)(t4))->v)) + 0x20);
        t6 = *(int *)0xC30817C;
        (((struct oFC4_uint *)(t6))->v) = (((((struct oFC4_int *)(t6))->v)) & 0xFFFFFFE0);
    }
    t12 = *(int *)0xC30817C;
    if ((((((struct oFC8_int *)(t12))->v)) & 0x1F) != 0) {
        (((struct oFC8_uint *)(t12))->v) = (((((struct oFC8_int *)(t12))->v)) + 0x20);
        t15 = *(int *)0xC30817C;
        (((struct oFC8_uint *)(t15))->v) = (((((struct oFC8_int *)(t15))->v)) & 0xFFFFFFE0);
    }
    t20 = *(int *)0xC30817C;
    (((struct oFC4_uint *)(t20))->v) = (((((struct oFC4_int *)(t20))->v)) | 0xA0000000);
    t22 = *(int *)0xC30817C;
    (((struct oFC8_uint *)(t22))->v) = (((((struct oFC8_int *)(t22))->v)) | 0xA0000000);
    mpdrv_init_globals();
    t25 = 0x0;
    for (;;) {
        *(unsigned int *)((((0xFE8 + (*(int *)0xC30817C)) + t25) + 0x0)) = 0x0;
        t28 = ((0xFE8 + (*(int *)0xC30817C)) + t25);
        t25 = (t25 + 0x4);
        (((struct o60_uint *)(t28))->v) = 0x0;
        if ((unsigned int)t25 >= (unsigned int)0x60) {
            break;
        }
    }
    *(unsigned int *)(((int)stk + 4)) = (*(int *)(((int)stk + 8)));
    if ((int)a7 > 0) {
        t30 = 0x0;
        for (;;) {
            t31 = *(int *)(((int)stk + 0));
            *(unsigned int *)(((int)stk + 0)) = (t31 + 0x4);
            t32 = *(int *)((((t31 + 0x4) - 4) + 0x0));
            t33 = t32;
            if ((t32 & 0x1F) != 0) {
                t33 = ((t32 + 0x20) & 0xFFFFFFE0);
            }
            t35 = *(int *)(((int)stk + 4));
            t30 = (t30 + 0x1);
            *(unsigned int *)(((int)stk + 4)) = (t35 + 0x4);
            t36 = *(int *)((((t35 + 0x4) - 4) + 0x0));
            *(unsigned int *)((((0xFE8 + (*(int *)0xC30817C)) + (t36 << 2)) + 0x0)) = (t33 | 0xA0000000);
            (((struct o60_uint *)(((t36 << 2) + (0xFE8 + (*(int *)0xC30817C)))))->v) = ((t33 | 0xA0000000) + 0x400);
            if ((int)t30 >= (int)a7) {
                break;
            }
        }
    }
    t45 = *(int *)0xC30817C;
    (((struct o10A8_uint *)(t45))->v) = ((((struct oFC4_int *)(t45))->v));
    t47 = *(int *)0xC30817C;
    (((struct o10AC_uint *)(t47))->v) = (((a7 << 8) << 2) + ((((struct oFC4_int *)(t47))->v)));
    t49 = *(int *)0xC30817C;
    (((struct oFCC_uint *)(t49))->v) = ((((struct o10A8_int *)(t49))->v));
    t51 = 0x0;
    for (;;) {
        t53 = ((0xF90 + (*(int *)0xC30817C)) + t51);
        t51 = (t51 + 0x1);
        *(unsigned char *)((t53 + 0x0)) = 0x0;
        if ((int)t51 >= (int)0x18) {
            break;
        }
    }
    t57 = *(int *)(((int)stk + 8));
    if ((int)a7 > 0) {
        t56 = 0x0;
        for (;;) {
            t58 = *(int *)((t57 + 0x0));
            t57 = (t57 + 0x4);
            if (t58 != 0) {
                if ((t58 != 6) && ((t58 != 12) && (t58 != 18))) {
                    *(unsigned char *)(((t58 + (0xF90 + (*(int *)0xC30817C))) + 0x0)) = 0x65;
                } else {
                    *(unsigned char *)(((t58 + (0xF90 + (*(int *)0xC30817C))) + 0x0)) = 0x72;
                }
            } else {
                *(unsigned char *)(((t58 + (0xF90 + (*(int *)0xC30817C))) + 0x0)) = 0x72;
            }
            t56 = (t56 + 0x1);
            if ((int)t56 >= (int)a7) {
                break;
            }
        }
    }
    t73 = 0xC171AAC;
    t74 = 0xC171AAC;
    t75 = 0x72;
    t76 = 0x65;
    t77 = 0xC171AAC;
    t78 = 0xC171AAC;
    for (;;) {
        if ((*(signed char *)((((0xF90 + (*(int *)0xC30817C)) + (*(int *)((t78 + 0x0)))) + 0x0))) != 0) {
            t73 = (*(int *)((t77 + 0x0)));
            mpdrv_set_dreq_ns(t73);
        } else {
            t88 = t73;
            t89 = t74;
            t90 = t75;
            t91 = t76;
        }
        t78 = (t78 + 0x4);
        t73 = t88;
        t74 = t89;
        t75 = t90;
        t76 = t91;
        t77 = (t77 + 0x4);
        if ((unsigned int)t78 >= (unsigned int)0xC171ABC) {
            break;
        }
    }
    mpdrv_set_end_ns();
    (((struct oFC0_uint *)((*(int *)0xC30817C)))->v) = 0x1;
    (((struct o8C_uint *)(((((struct o10F4_int *)((*(int *)0xC30817C)))->v))))->v) = 0x615540FF;
    *(unsigned int *)((((((struct o10F4_int *)((*(int *)0xC30817C)))->v)) + 0x10)) = 0x0;
    t99 = *(int *)0xC30817C;
    (((struct o80_uint *)(((((struct o10F4_int *)(t99))->v))))->v) = (((((struct o10C0_int *)(t99))->v)) | ((((struct o10D0_int *)(t99))->v)));
    *(unsigned int *)((((((struct o10F4_int *)((*(int *)0xC30817C)))->v)) + 0x14)) = 0x1;
    return 0x0;
}

int FUN_0c01f098(void)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t1 = 0xC26ECC0;
    t2 = 0x0;
    t3 = 0x0;
    for (;;) {
        if ((int)(*(int *)((t1 + 0x10))) <= 0) {
            t4 = (*(signed char *)((t1 + 0x0)));
            t4 = (unsigned char)t4;
            if (t4 == 4) {
                *(unsigned char *)((t1 + 0x0)) = 0x0;
            }
            t5 = (*(int *)((t1 + 0xC)));
            t5 = (t5 + 0x1);
            *(unsigned int *)((t1 + 0xC)) = t5;
        }
        t4 = (*(signed char *)((t1 + 0x0)));
        t4 = (unsigned char)t4;
        if (t4 == 1) {
            t5 = (*(int *)((t1 + 0xC)));
            t5 = (t5 + 0x1);
            *(unsigned int *)((t1 + 0xC)) = t5;
            t4 = ((((struct o4_int *)0xC2707D8)->v));
            if ((t4 != 1) && (t0 = *(int *)((t1 + 0xC)), t5 = t0, (int)t3 < (int)t5)) {
                (((struct o0_uint *)0xC2707D8)->v) = t2;
                t3 = (*(int *)((t1 + 0xC)));
            }
        }
        *(unsigned int *)((t1 + 0x10)) = 0x0;
        t4 = *(int *)((t1 + 0x8));
        t2 = (t2 + t4);
        t2 = (t2 + 0x1);
        t1 = (t1 + (((((t4 + 0x1) << 1) + (t4 + 0x1)) << 2) << 1));
        if ((int)t2 >= (int)0x120) {
            break;
        }
    }
    if (((((struct o4_int *)0xC2707D8)->v)) != 1) {
        if (((((struct o0_int *)0xC2707D8)->v)) != -1) {
            (((struct o4_uint *)0xC2707D8)->v) = 0x1;
            t0 = (((struct o0_int *)0xC2707D8)->v);
            *(unsigned char *)(((((((t0 << 1) + t0) << 2) << 1) + 0xC26ECC0) + 0x0)) = 0x2;
        } else {
            (((struct o4_uint *)0xC2707D8)->v) = 0x0;
        }
    }
    t0 = (((struct o4_int *)0xC2707D8)->v);
    if (t0 == 1) {
        t1 = (((struct o0_int *)0xC2707D8)->v);
        t4 = *(signed char *)(((((((t1 << 1) + t1) << 2) << 1) + 0xC26ECC0) + 0x0));
        if ((unsigned char)t4 != 2) {
            if ((unsigned char)t4 != 3) {
                return (unsigned char)t4;
            }
            t4 = ((int (*)(int, int, int, int))(FUN_0c150460))((*(int *)0xC26ECBC), t2, t3, 0xC26ECC0);
            if (t4 == 3) {
                (((struct o4_uint *)0xC123E50)->v) = 0x0;
                *(unsigned char *)(((((((t1 << 1) + t1) << 2) << 1) + 0xC26ECC0) + 0x0)) = 0x4;
                *(unsigned int *)(((((((t1 << 1) + t1) << 2) << 1) + 0xC26ECC0) + 0xC)) = 0x0;
                (((struct o4_uint *)0xC2707D8)->v) = 0x2;
                FUN_0c14ff0c((*(int *)0xC26ECBC));
                FUN_0c06e990(0x9C4);
                nlObjPutLoadTexture((*(int *)(((((((t1 << 1) + t1) << 2) << 1) + 0xC26ECC0) + 0x14))), ((((struct o0_int *)0xC123E50)->v)));
                FUN_0c0755f0((*(int *)(((((((t1 << 1) + t1) << 2) << 1) + 0xC26ECC0) + 0x14))));
                FUN_0c06e990(0x0);
                (((struct o0_uint *)0xC2707D8)->v) = 0xFFFFFFFF;
                return ((int (*)(void))(0xC01EFD2))();
            }
            t2 = t4;
            if (t4 == 4) {
                t3 = FUN_0c14ff0c((*(int *)0xC26ECBC));
                *(unsigned char *)(((((((t1 << 1) + t1) << 2) << 1) + 0xC26ECC0) + 0x0)) = 0x2;
                t4 = (((struct o4_int *)0xC123E50)->v);
                (((struct o4_uint *)0xC123E50)->v) = (t4 + 0x1);
                if ((int)(t4 + 0x1) > (int)0xA) {
                    *(unsigned int *)0xC1EC718 = ((*(int *)0xC1EC718) + 0x1);
                }
                t2 = t3;
            }
            return t2;
        }
        t2 = ADXF_OpenAfs(0x0, (*(int *)(((((((t1 << 1) + t1) << 2) << 1) + 0xC26ECC0) + 0x4))));
        *(unsigned int *)0xC26ECBC = t2;
        if (t2 != 0) {
            t3 = FUN_0c1503dc((*(int *)0xC26ECBC));
            FUN_0c1500d2((*(int *)0xC26ECBC), t3, (*(int *)(((((((t1 << 1) + t1) << 2) << 1) + 0xC26ECC0) + 0x14))));
            *(unsigned char *)(((((((t1 << 1) + t1) << 2) << 1) + 0xC26ECC0) + 0x0)) = 0x3;
            t3 = ((int (*)(int))(FUN_0c150460))((*(int *)0xC26ECBC));
            if (t3 == 3) {
                (((struct o4_uint *)0xC123E50)->v) = 0x0;
                *(unsigned char *)(((((((t1 << 1) + t1) << 2) << 1) + 0xC26ECC0) + 0x0)) = 0x4;
                *(unsigned int *)(((((((t1 << 1) + t1) << 2) << 1) + 0xC26ECC0) + 0xC)) = 0x0;
                (((struct o4_uint *)0xC2707D8)->v) = 0x2;
                FUN_0c14ff0c((*(int *)0xC26ECBC));
                FUN_0c06e990(0x9C4);
                nlObjPutLoadTexture((*(int *)(((((((t1 << 1) + t1) << 2) << 1) + 0xC26ECC0) + 0x14))), ((((struct o0_int *)0xC123E50)->v)));
                FUN_0c0755f0((*(int *)(((((((t1 << 1) + t1) << 2) << 1) + 0xC26ECC0) + 0x14))));
                FUN_0c06e990(0x0);
                (((struct o0_uint *)0xC2707D8)->v) = 0xFFFFFFFF;
                return ((int (*)(void))(0xC01EFD2))();
            }
            t4 = t3;
            if (t3 == 4) {
                t3 = FUN_0c14ff0c((*(int *)0xC26ECBC));
                *(unsigned char *)(((((((t1 << 1) + t1) << 2) << 1) + 0xC26ECC0) + 0x0)) = 0x2;
                t1 = (((struct o4_int *)0xC123E50)->v);
                (((struct o4_uint *)0xC123E50)->v) = (t1 + 0x1);
                if ((int)(t1 + 0x1) > (int)0xA) {
                    *(unsigned int *)0xC1EC718 = ((*(int *)0xC1EC718) + 0x1);
                }
                t4 = t3;
            }
            return t4;
        }
        return t2;
    }
    return t0;
}

int FUN_0c05074c(int a4)
{
    int stk[3];
    register int t7;
    register int t15;
    int t10;
    register int t66;
    register int t48;
    register int t49;
    register float u50;
    register float u51;
    register float u52;

    *(unsigned int *)(((int)stk + 0)) = a4;
    FUN_0c07fdc8();
    FUN_0c052d5c((((int)stk + 0) + 0x4), ((int)((int)(*(int *)(((*(int *)0xC2B2950) + 0x0))) / (int)0x3C)), 0x2);
    t7 = (int)((int)(*(int *)(((*(int *)0xC2B2950) + 0x0))) % (int)0x3C);
    (((struct o4_float *)0xC2B26D0)->v) = 590.0f;
    (((struct o8_float *)0xC2B26D0)->v) = 430.0f;
    if (((int)(*(int *)(((*(int *)0xC2B2950) + 0x0))) >= (int)0x3C) && (t10 = *(int *)(((int)stk + 0)), t10 != 0)) {
        if ((int)t7 >= (int)0x1E) {
            (((struct o10_float *)0xC2B26D0)->v) = 1.0f;
            (((struct o0_uint *)0xC2B26D0)->v) = (*(int *)((0xC10CBB4 + ((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) << 2))));
            t48 = 0x1E;
            u50 = 430.0f;
        } else {
            t15 = (int)((int)(*(int *)(((*(int *)0xC2B2950) + 0x0))) % (int)0x1E);
            (((struct o10_float *)0xC2B26D0)->v) = (_builtin_fabsf((float)((int)(float)t15 - 15)) / 15.0f);
            if (15.0f > (float)t15) {
                if ((int)(*(int *)(((((int)stk + 0) + 0x4) + 0x0))) > 0) {
                    (((struct o0_uint *)0xC2B26D0)->v) = (*(int *)((0xC10CBB4 + (((int)((int)((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) - 1) % (int)0xA)) << 2))));
                } else {
                    (((struct o0_uint *)0xC2B26D0)->v) = (*(int *)0xC10CBB4);
                }
            } else {
                if ((int)(*(int *)(((((int)stk + 0) + 0x4) + 0x0))) > 0) {
                    (((struct o0_uint *)0xC2B26D0)->v) = (*(int *)((0xC10CBB4 + (((int)((int)(*(int *)(((((int)stk + 0) + 0x4) + 0x0))) % (int)0xA)) << 2))));
                } else {
                    (((struct o0_uint *)0xC2B26D0)->v) = (*(int *)0xC10CBB4);
                }
            }
            t48 = 0xC10CBB4;
            t49 = 0xA;
            u50 = (_builtin_fabsf((float)((int)(float)t15 - 15)) / 15.0f);
            u51 = (float)t15;
            u52 = 15.0f;
        }
        (((struct o28_uint *)0xC2B26D0)->v) = 0x0;
        t66 = (FUN_0c07ada0(0xC2B26D0, t48, 0xC10CBB4, t49, u51, u52));
    } else {
        FUN_0c028196();
        FUN_0c027f28(0x1);
        FUN_0c02803a(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
        pfSize(1.0f, 1.0f);
        FUN_0c0281d4(((int)((int)(*(int *)(((*(int *)0xC2B2950) + 0x0))) / (int)0x3C)), 0x1);
        FUN_0c027fbe(574.0f, 414.0f);
        t66 = (FUN_0c02842e((*(int *)0xC09DA20)));
    }
    return t66;
}

int FUN_0c01d4ac(void)
{
    int stk[3];
    register int t52;
    int t38;
    int t43;
    register int t64;

    FUN_0c022d30();
    FUN_0c06f550(0xFF3D3D46, 0xFF3D3D46, 0xFF3D3D46);
    FUN_0c02a5ca((*(int *)0xC175C80));
    FUN_0c020d78(((((struct o0_int *)0xC1EC71C)->v)));
    FUN_0c01f5fc();
    FUN_0c026c02();
    *(unsigned int *)0xC177EF0 = 0xC177EF4;
    nlInitHeapMemory(0xC177EF4, 0x30000);
    nlInitEvent();
    FUN_0c046460(0x3039);
    FUN_0c05bef8(0xD431);
    FUN_0c070ea0(0x3039);
    if (((((struct o24_int *)0xC1EC71C)->v)) != 0) {
        FUN_0c01e43c();
    }
    Init_Standard();
    FUN_0c01e15a();
    if (((((struct o4_int *)0xC1EC71C)->v)) != 2) {
        FUN_0c029528();
        *(volatile int *)0xC1EC71C;
        FUN_0c0491d8();
    }
    FUN_0c014364();
    FUN_0c016ab8(0x0);
    FUN_0c016398();
    FUN_0c02ff06();
    FUN_0c060104();
    FUN_0c06017e();
    FUN_0c06b370();
    FUN_0c058be4(0x0);
    FUN_0c0423e6(0x0);
    FUN_0c03ff4a(0x0);
    if ((((((struct o24_int *)0xC1EC71C)->v)) == 1) && (t38 = *(int *)0xC2AC2F4, t38 == 0)) {
        *(unsigned int *)0xC175908 = 0x1;
    }
    if ((((((struct o24_int *)0xC1EC71C)->v)) != 0) && (t43 = *(int *)0xC2AC2F4, t43 != 1)) {
    } else {
        FUN_0c0464f0(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 0));
    }
    FUN_0c0590a8();
    FUN_0c026d10();
    FUN_0c04d58c();
    FUN_0c030b34();
    t52 = (((struct o0_int *)0xC1EC71C)->v);
    if (t52 != 0) {
        if (t52 != 1) {
            t64 = t52;
            if (t52 != 2) {
            } else {
                t64 = (thunk_kmSetCheapShadowMode());
            }
        } else {
            t64 = (thunk_kmSetCheapShadowMode());
        }
    } else {
        *(volatile int *)0xC175C84;
        
        t64 = (thunk_kmSetCheapShadowMode());
    }
    (((struct o30_uint *)0xC1EC71C)->v) = 0x0;
    return t64;
}

int FUN_0c04cbf8(void)
{
    int stk[5];
    register int t0;
    register int t1;
    register int t2;
    register float t6;
    register float t17;
    register int t24;
    register int t30;
    register int t31;
    register int t32;
    register int t33;
    register float t38;
    register int t45;
    register int t50;
    register int t60;
    register int t52;
    int t7;
    register int t14;
    int t18;
    register int t28;
    int t39;
    register int t49;

    *(unsigned int *)(((int)stk + 4)) = 0x0;
    *(unsigned int *)(((int)stk + 0)) = 0x0;
    t0 = 0xC04CD3C;
    t1 = 0xC10C6EC;
    t2 = 0xC10C6EC;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 0))) >= (int)((((struct o0_int *)0xC10C704)->v))) {
            break;
        }
        t0 = (nlSubVector3op((((int)stk + 0) + 0x8), 0xC177D38, t2));
        t0 = 0xC;
        *(float *)((((int)stk + 0) + t0)) = 0.0f;
        t6 = FUN_0c073c80((((int)stk + 0) + 0x8));
        if ((1000000.0f > t6) && (t7 = (((struct oC_int *)0xC2ADEB4)->v), t7 == 0)) {
            *(unsigned int *)(((int)stk + 4)) = 0x1;
            if ((*(int *)0xC131714) == 0) {
                t0 = (FUN_0c058ca6(0x506A9, 0x0));
                *(unsigned int *)0xC131714 = 0x1;
                t14 = t0;
            }
        }
        t0 = t14;
        t17 = FUN_0c073c80((((int)stk + 0) + 0x8));
        if ((9000000.0f > t17) && (t18 = (((struct oC_int *)0xC2ADEB4)->v), t18 == 0)) {
            t0 = (nlPushMatrix(0x0));
            t0 = (FUN_0c073a60(t1));
            t0 = 0x1E;
            t0 = ((int)((int)(((((struct o0_int *)0xC2ADEB4)->v)) >> 1) % (int)t0));
            t24 = t0;
            t0 = 0xC131624;
            t0 = (nlObjPutUseViewMatrix((*(int *)(((t24 << 2) + t0)))));
            t0 = (nlPopMatrix(0x1));
            t28 = t0;
        }
        t0 = t28;
        t2 = (t2 + 0xC);
        t1 = (t1 + 0xC);
        *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0x1);
    }
    t30 = t0;
    t31 = 0x0;
    t32 = 0xC10C708;
    t33 = 0xC10C708;
    for (;;) {
        if ((int)t31 >= (int)((((struct o1C_int *)0xC10C704)->v))) {
            break;
        }
        t30 = (nlSubVector3op((((int)stk + 0) + 0x8), 0xC177D38, t33));
        t30 = 0xC;
        *(float *)((((int)stk + 0) + t30)) = 0.0f;
        t38 = FUN_0c073c80((((int)stk + 0) + 0x8));
        if ((9000000.0f > t38) && (t39 = (((struct oC_int *)0xC2ADEB4)->v), t39 == 0)) {
            t30 = (nlPushMatrix(0x0));
            t30 = (FUN_0c073a60(t32));
            t30 = 0x1E;
            t30 = ((int)((int)(((((struct o0_int *)0xC2ADEB4)->v)) >> 1) % (int)t30));
            t45 = t30;
            t30 = 0xC13169C;
            t30 = (nlObjPutUseViewMatrix((*(int *)(((t45 << 2) + t30)))));
            t30 = (nlPopMatrix(0x1));
            t49 = t30;
        }
        t30 = t49;
        t33 = (t33 + 0xC);
        t32 = (t32 + 0xC);
        t31 = (t31 + 0x1);
    }
    t50 = *(int *)(((int)stk + 4));
    t60 = t50;
    if (t50 == 0) {
        t52 = *(int *)0xC131714;
        t60 = t52;
        if (t52 == 1) {
            t60 = FUN_0c058ca6(0x606A9, 0x0);
            *(unsigned int *)0xC131714 = 0x0;
        }
    }
    return t60;
}

int FUN_0c15f33e(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = 0x0;
    if (((((struct o0_int *)0xC302724)->v)) == 0) {
    } else {
        (((struct o14_uint *)0xC302724)->v) = (((((struct o18_int *)0xC302724)->v)) - 1);
        (((struct o18_uint *)0xC302724)->v) = 0x0;
        t1 = a5;
        if (((((struct o10_int *)0xC302724)->v)) != 0) {
            (((struct o1C_uint *)0xC302724)->v) = (((((struct o0_int *)0xA05F80C4)->v)) & 0x3FF);
            (((struct o20_uint *)0xC302724)->v) = ((short)((unsigned int)((((struct o0_int *)0xA05F80C4)->v)) >> 16) & 0x3FF);
            t1 = 0xA05F80C4;
        }
        (((struct o10_uint *)0xC302724)->v) = 0x0;
        if (((((struct oC_int *)0xC302724)->v)) != 0) {
            *(unsigned int *)0xA05F8040 = ((((struct o8_int *)0xC302724)->v));
            (((struct o24_uint *)0xA05F80C4)->v) = (((((struct o24_int *)0xA05F80C4)->v)) & 0xFFFFFFF7);
            (((struct oC_uint *)0xC302724)->v) = 0x0;
        }
        if (((*(int *)0xA05F6908) & 0xF00) != 0) {
            if (((*(int *)0xA05F6908) & 0x800) != 0) {
                (((struct o1C_uint *)0xC3024A4)->v) = (((((struct o1C_int *)0xC3024A4)->v)) + 0x1);
                if (((((struct o38_int *)0xC3024A4)->v)) != 0) {
                    t2 = ((int (*)(int, int, int, int))(((((struct o38_int *)0xC3024A4)->v))))(0x1, 0xFFFFFFFE, ((((struct o8_int *)0xC3024A4)->v)), (*(int *)0xA05F6908));
                }
            }
            if (((*(int *)0xA05F6908) & 0x400) != 0) {
                (((struct o20_uint *)0xC3024A4)->v) = (((((struct o20_int *)0xC3024A4)->v)) + 0x1);
                if (((((struct o38_int *)0xC3024A4)->v)) != 0) {
                    t2 = ((int (*)(int, int, int, int))(((((struct o38_int *)0xC3024A4)->v))))(0x1, 0xFFFFFFFD, ((((struct o8_int *)0xC3024A4)->v)), (*(int *)0xA05F6908));
                }
            }
            if (((*(int *)0xA05F6908) & 0x200) != 0) {
                (((struct o24_uint *)0xC3024A4)->v) = (((((struct o24_int *)0xC3024A4)->v)) + 0x1);
                if (((((struct o38_int *)0xC3024A4)->v)) != 0) {
                    t2 = ((int (*)(int, int, int, int))(((((struct o38_int *)0xC3024A4)->v))))(0x1, 0xFFFFFFFC, ((((struct o8_int *)0xC3024A4)->v)), (*(int *)0xA05F6908));
                }
            }
            if (((*(int *)0xA05F6908) & 0x100) != 0) {
                (((struct o28_uint *)0xC3024A4)->v) = (((((struct o28_int *)0xC3024A4)->v)) + 0x1);
                if (((((struct o38_int *)0xC3024A4)->v)) != 0) {
                    t2 = ((int (*)(int, int, int, int))(((((struct o38_int *)0xC3024A4)->v))))(0x1, 0xFFFFFFFB, ((((struct o8_int *)0xC3024A4)->v)), (*(int *)0xA05F6908));
                }
            }
            *(unsigned int *)0xA05F6908 = 0xF00;
            kdRecvFrame();
            t2 = ((int (*)(void))(mpdrv_frame_send))();
            if ((int)t2 >= 0) {
                copy_device();
            } else {
                if (((((struct o38_int *)0xC3024A4)->v)) != 0) {
                    t0 = ((int (*)(int, int, int, int))(((((struct o38_int *)0xC3024A4)->v))))(0x1, 0xFFFFFFFA, ((((struct o8_int *)0xC3024A4)->v)), t2);
                }
            }
            t0 = t2;
        } else {
            t2 = ((int (*)(int, int, int, int))(mpdrv_frame_send))(0xC302730, t1, 0xC302734, a7);
            if ((int)t2 >= 0) {
                (((struct o30_uint *)0xC302724)->v) = 0x0;
                *(unsigned short *)((((((((struct o4_int *)0xC302724)->v)) << 1) + 0xC3024D8) + 0x0)) = 0x0;
                *(unsigned short *)((((((((struct o4_int *)0xC302724)->v)) << 1) + 0xC3024D0) + 0x0)) = ((*(int *)0xA05F810C) & 0x3FF);
                copy_device();
                (((struct o0_uint *)0xC3024A4)->v) = (((((struct o0_int *)0xC3024A4)->v)) + 0x1);
                (((struct o38_uint *)0xC302724)->v) = 0x0;
            } else {
                kdRecvFrame();
                (((struct o10_uint *)0xC3024A4)->v) = (((((struct o10_int *)0xC3024A4)->v)) + 0x1);
                (((struct o38_uint *)0xC302724)->v) = (((((struct o38_int *)0xC302724)->v)) + 0x1);
                if (((((struct o38_int *)0xC3024A4)->v)) != 0) {
                    t1 = ((int (*)(int, int, int, int))(((((struct o38_int *)0xC3024A4)->v))))(0x1, 0xFFFFFFF9, ((((struct o8_int *)0xC3024A4)->v)), t2);
                }
            }
            t0 = t2;
        }
    }
    return t0;
}

int FUN_0c04ebe2(void)
{
    int t70;
    register int t79;
    register int t125;
    register int t91;
    register int t108;
    register int t113;
    register int t9;
    int t10;
    register int t21;
    int t22;
    register int t33;
    int t34;
    register int t45;
    int t46;
    register int t57;
    int t58;
    register int t64;
    int t65;
    int t95;
    int t100;
    register int t101;
    int t114;
    int t119;
    int t120;

    if (0.200000003f > ((((struct o0_float *)0xC1EC804)->v))) {
        (((struct o0_uchar *)0xC2B1D78)->v) = ((*(signed char *)0xC2B1D78) | 0x1);
    }
    if (0.200000003f > ((((struct o4_float *)0xC1EC804)->v))) {
        (((struct o0_uchar *)0xC2B1D78)->v) = ((*(signed char *)0xC2B1D78) | 0x10);
    }
    (((struct o4_uint *)0xC2B1D78)->v) = 0x0;
    if (((((((struct o0_int *)0xC1EC758)->v)) & 0x80) == 0) && ((t9 = (((struct o4_int *)0xC1EC758)->v), (t9 & 0x80) == 0) && (t10 = (((struct o10_short *)0xC1EC758)->v), (int)(unsigned short)t10 <= (int)0xB000))) {
        if (((((((struct o0_int *)0xC1EC758)->v)) & 0x40) == 0) && ((t21 = (((struct o4_int *)0xC1EC758)->v), (t21 & 0x40) == 0) && (t22 = (((struct o10_short *)0xC1EC758)->v), (int)(unsigned short)t22 >= (int)0x5000))) {
        } else {
            (((struct o4_uint *)0xC2B1D78)->v) = (((((struct o4_int *)0xC2B1D78)->v)) | 0x40);
        }
    } else {
        (((struct o4_uint *)0xC2B1D78)->v) = (((((struct o4_int *)0xC2B1D78)->v)) | 0x80);
    }
    if (((((((struct o0_int *)0xC1EC758)->v)) & 0x10) == 0) && ((t33 = (((struct o4_int *)0xC1EC758)->v), (t33 & 0x10) == 0) && (t34 = (((struct o16_short *)0xC1EC758)->v), (int)(unsigned short)t34 >= (int)0x5000))) {
        if (((((((struct o0_int *)0xC1EC758)->v)) & 0x20) == 0) && ((t45 = (((struct o4_int *)0xC1EC758)->v), (t45 & 0x20) == 0) && (t46 = (((struct o16_short *)0xC1EC758)->v), (int)(unsigned short)t46 <= (int)0xB000))) {
        } else {
            (((struct o4_uint *)0xC2B1D78)->v) = (((((struct o4_int *)0xC2B1D78)->v)) | 0x20);
        }
    } else {
        (((struct o4_uint *)0xC2B1D78)->v) = (((((struct o4_int *)0xC2B1D78)->v)) | 0x10);
    }
    if (((((((struct o0_int *)0xC1EC758)->v)) & 0x10000) == 0) && ((t57 = (((struct o4_int *)0xC1EC758)->v), (t57 & 0x10000) == 0) && (t58 = (((struct o12_short *)0xC1EC758)->v), (int)(unsigned short)t58 <= (int)0x8000))) {
    } else {
        (((struct o4_uint *)0xC2B1D78)->v) = (((((struct o4_int *)0xC2B1D78)->v)) | 0x10000);
    }
    if (((((((struct o0_int *)0xC1EC758)->v)) & 0x20000) == 0) && ((t64 = (((struct o4_int *)0xC1EC758)->v), (t64 & 0x20000) == 0) && (t65 = (((struct o14_short *)0xC1EC758)->v), (int)(unsigned short)t65 <= (int)0x8000))) {
    } else {
        (((struct o4_uint *)0xC2B1D78)->v) = (((((struct o4_int *)0xC2B1D78)->v)) | 0x20000);
    }
    t70 = (((struct o4_int *)0xC2B1D78)->v);
    t108 = (((struct o8_int *)0xC2B1D78)->v);
    if (t70 != t108) {
        if ((t108 == 0) && (t70 != 0)) {
            (((struct o14_uint *)0xC2B1D78)->v) = 0x28;
            (((struct o8_uint *)0xC2B1D78)->v) = ((((struct o4_int *)0xC2B1D78)->v));
        } else {
            (((struct o8_uint *)0xC2B1D78)->v) = t70;
            (((struct o4_uint *)0xC2B1D78)->v) = 0x0;
        }
    } else {
        if (t70 != 0) {
            t79 = 0x14;
            if (((((struct o14_int *)0xC2B1D78)->v)) == 0) {
            } else {
                (((struct o4_uint *)0xC2B1D78)->v) = 0x0;
                t79 = (((((struct o14_int *)0xC2B1D78)->v)) - 1);
            }
            (((struct o14_uint *)0xC2B1D78)->v) = t79;
        }
    }
    t125 = t108;
    if (((((struct o0_float *)0xC2B1CE8)->v)) == 0.0f) {
        t91 = (((struct o18_int *)0xC2B1CE8)->v);
        if (((unsigned short)(*(short *)0xC28ED98) & 0x20) != 0) {
            t108 = (((struct o4_int *)0xC2B1D78)->v);
            if (((0x10 & t108) != 0) && (t95 = *(int *)((t91 + 0x0)), (int)t95 >= (int)0x4)) {
                *(unsigned int *)((t91 + 0x0)) = ((*(int *)((t91 + 0x0))) - 0x4);
            }
            if (((0x20 & ((((struct o4_int *)0xC2B1D78)->v))) != 0) && (t100 = (((struct o18_int *)0xC2B1CE8)->v), t101 = *(int *)((t100 + 0x0)), (int)t101 < (int)0x4)) {
                t108 = (((struct o18_int *)0xC2B1CE8)->v);
                *(unsigned int *)((t108 + 0x0)) = ((*(int *)((t108 + 0x0))) + 0x4);
            }
        }
        t113 = (((struct o18_int *)0xC2B1CE8)->v);
        if (((0x80 & ((((struct o4_int *)0xC2B1D78)->v))) != 0) && (t114 = *(int *)((t113 + 0x0)), (int)(t114 & 0x3) < (int)0x3)) {
            *(unsigned int *)((t113 + 0x0)) = ((*(int *)((t113 + 0x0))) + 0x1);
        }
        if (((0x40 & ((((struct o4_int *)0xC2B1D78)->v))) != 0) && (t119 = (((struct o18_int *)0xC2B1CE8)->v), t120 = *(int *)((t119 + 0x0)), (int)(0x3 & t120) > 0)) {
            *(unsigned int *)((t119 + 0x0)) = ((*(int *)((t119 + 0x0))) - 1);
        }
        t125 = t108;
    }
    return t125;
}

int FUN_0c06aeba(int a4, int a5, int a6)
{
    register int t47;

    (((struct o0_uint *)0xC13C09C)->v) = (*(int *)((((((int)((int)(((int (*)(int, int, int))(FUN_0c069e54))(a4, a5, a6)) % (int)(*(int *)(((a4 << 2) + 0xC112148))))) << 2) + ((*(int *)(((a4 << 2) + 0xC13BFBC))))) + 0x0)));
    if ((int)a6 <= (int)0x1) {
        (((struct o24_uint *)0xC13C09C)->v) = (*(int *)((((((int)((int)(((int (*)(void))(FUN_0c069e54))()) % (int)(*(int *)(((a5 << 2) + 0xC1121A8))))) << 2) + ((*(int *)(((a5 << 2) + 0xC13BFDC))))) + 0x0)));
        (((struct oC_uint *)0xC13C09C)->v) = (*(int *)((((*(int *)(((a4 << 2) + 0xC13C024)))) + (((int)((int)(((int (*)(void))(FUN_0c069e54))()) % (int)(*(int *)(((a4 << 2) + 0xC112298))))) << 2))));
        (((struct o30_uint *)0xC13C09C)->v) = 0xFFFFFFFF;
        Voice_ShutUp(0x2);
        t47 = 0xC11039C;
    } else {
        (((struct o24_uint *)0xC13C09C)->v) = (*(int *)((((*(int *)(((a5 << 2) + (*(int *)((0xC13C00C + ((a6 - 2) << 2)))))))) + (((int)((int)(((int (*)(void))(FUN_0c069e54))()) % (int)(*(int *)(((a5 << 2) + (*(int *)(((0xC13C018 + ((a6 - 2) << 2)) + 0x0)))))))) << 2))));
        (((struct oC_uint *)0xC13C09C)->v) = (*(int *)((((((int)((int)(((int (*)(void))(FUN_0c069e54))()) % (int)(*(int *)(((a4 << 2) + 0xC112318))))) << 2) + ((*(int *)(((a4 << 2) + 0xC13C044))))) + 0x0)));
        if (a6 == 2) {
            (((struct o30_uint *)0xC13C09C)->v) = 0xFFFFFFFF;
        } else {
            (((struct o30_uint *)0xC13C09C)->v) = (*(int *)((((((int)((int)(((int (*)(void))(FUN_0c069e54))()) % (int)(*(int *)(((a5 << 2) + (*(int *)(((0xC13C090 + ((a6 - 2) << 2)) + 0x0)))))))) << 2) + ((*(int *)(((a5 << 2) + (*(int *)((((a6 - 2) << 2) + 0xC13C084)))))))) + 0x0)));
        }
        Voice_ShutUp(0x2);
        t47 = 0xC1103AC;
    }
    FUN_0c058f64(0xC13C0C0, 0x2, (*(int *)(((a5 << 2) + t47))), 0x0);
    Voice_ShutUp(0x1);
    return (FUN_0c058f64(0xC13C09C, 0x1, (*(int *)(((a4 << 2) + 0xC11037C))), 0x0));
}

int vmsfs_setwork(int a4, int a5, int a6)
{
    int stk[10];

    register int R1;
    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    v0_0 = a4;
    v0_1 = a5;
    v0_2 = a6;
    *(unsigned int *)(((int)stk + 36)) = v0_0;
    *(unsigned int *)(((int)stk + 32)) = v0_1;
    *(unsigned int *)(((int)stk + 28)) = v0_2;
    if (((*(int *)(((*(int *)0xC2C8D28) + 0x8))) != 0)) goto L_C08AE3E;
    return 0xFFFFFF00;
    L_C08AE3E:;
    if (((*(int *)(((int)stk + 32))) != 0)) goto L_C08AE4E;
    return 0xFFFFFF00;
    L_C08AE4E:;
    v0_0 = *(int *)(((int)stk + 36));
    *(unsigned int *)(((int)stk + 0)) = ((v0_0 * 0x154) + 0xC2C8D2C);
    *(unsigned int *)(((int)stk + 8)) = (*(int *)((((v0_0 * 0x154) + 0xC2C8D2C) + 0x4)));
    v0_0 = *(int *)(((int)stk + 8));
    v0_1 = (v0_0);
    if ((v0_0 == 0)) goto L_C08AE84;
    if ((v0_1 == 1)) goto L_C08AE94;
    if ((v0_1 == 2)) goto L_C08AEA4;
    if ((v0_1 == 3)) goto L_C08AEB4;
    return 0xFFFFFF00;
    L_C08AEB4:;
    *(unsigned int *)(((int)stk + 16)) = ((((struct oC_int *)0xC147820)->v));
    *(unsigned int *)(((int)stk + 12)) = ((((struct o1C_int *)0xC147820)->v));
    L_C08AECE:;
    v0_0 = *(int *)(((int)stk + 12));
    v0_1 = *(int *)(((int)stk + 16));
    *(unsigned int *)(((int)stk + 4)) = (((((v0_1 + v0_0) + 0x1) << 8) << 1) + 0x20);
    if (((int)(((((v0_1 + v0_0) + 0x1) << 8) << 1) + 0x20) <= (int)(*(int *)(((int)stk + 28))))) goto L_C08AF10;
    return 0xFFFFFF00;
    L_C08AF10:;
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 32)));
    *(unsigned char *)(((*(int *)(((int)stk + 0))) + 0x2)) = 0x1;
    *(unsigned short *)(((*(int *)(((int)stk + 0))) + 0x0)) = (*(int *)(((int)stk + 36)));
    *(unsigned int *)(((*(int *)(((int)stk + 0))) + 0x1C)) = (((*(int *)(((int)stk + 36))) * 0x4C) + 0xC2CD7EC);
    *(unsigned char *)(((*(int *)(((int)stk + 0))) + 0xA)) = 0x0;
    *(unsigned char *)(((*(int *)(((int)stk + 0))) + 0xB)) = 0x0;
    *(unsigned char *)(((*(int *)(((int)stk + 0))) + 0xC)) = 0x0;
    *(unsigned int *)(((*(int *)(((int)stk + 0))) + 0x2C)) = (*(int *)(((int)stk + 20)));
    *(unsigned int *)(((*(int *)(((int)stk + 0))) + 0x20)) = ((*(int *)(((int)stk + 20))) + 0x20);
    *(unsigned int *)(((*(int *)(((int)stk + 0))) + 0x24)) = ((*(int *)(((int)stk + 20))) + 0x220);
    *(unsigned int *)(((*(int *)(((int)stk + 0))) + 0x28)) = ((((((*(int *)(((int)stk + 16))) + 0x1) << 8) << 1) + (*(int *)(((int)stk + 20)))) + 0x20);
    *(unsigned short *)(((*(int *)(((int)stk + 0))) + 0xE)) = 0x1;
    *(unsigned short *)(((*(int *)(((int)stk + 0))) + 0x10)) = (*(short *)(((int)stk + 16)));
    *(unsigned short *)(((*(int *)(((int)stk + 0))) + 0x12)) = (*(short *)(((int)stk + 12)));
    *(unsigned short *)(((*(int *)(((int)stk + 0))) + 0x14)) = 0x20;
    memset(((*(int *)(((int)stk + 0))) + 0x38), 0x0, 0x10);
    memset(((*(int *)(((int)stk + 0))) + 0x48), 0x0, 0x100);
    v0_1 = (0x47);
    v0_2 = (0x20);
    memset((*(int *)(((*(int *)(((int)stk + 0))) + 0x2C))), v0_1, v0_2);
    memset((*(int *)(((*(int *)(((int)stk + 0))) + 0x20))), 0x53, 0x20);
    memset((*(int *)(((*(int *)(((int)stk + 0))) + 0x24))), 0x46, 0x20);
    memset((*(int *)(((*(int *)(((int)stk + 0))) + 0x28))), 0x44, 0x20);
    *(unsigned int *)(((*(int *)(((*(int *)(((int)stk + 0))) + 0x1C))) + 0x30)) = (*(int *)(((*(int *)(((*(int *)(((int)stk + 0))) + 0x1C))) + 0x1C)));
    *(unsigned char *)(((*(int *)(((int)stk + 0))) + 0x8)) = 0x1;
    *(unsigned char *)(((*(int *)(((int)stk + 0))) + 0x9)) = 0x1;
    return 0x0;
    L_C08AEA4:;
    *(unsigned int *)(((int)stk + 16)) = ((((struct o8_int *)0xC147820)->v));
    *(unsigned int *)(((int)stk + 12)) = ((((struct o18_int *)0xC147820)->v));
    goto L_C08AECE;
    L_C08AE94:;
    *(unsigned int *)(((int)stk + 16)) = ((((struct o4_int *)0xC147820)->v));
    *(unsigned int *)(((int)stk + 12)) = ((((struct o14_int *)0xC147820)->v));
    goto L_C08AECE;
    L_C08AE84:;
    *(unsigned int *)(((int)stk + 16)) = ((((struct o0_int *)0xC147820)->v));
    *(unsigned int *)(((int)stk + 12)) = ((((struct o10_int *)0xC147820)->v));
    goto L_C08AECE;
}

int VQalloc(int a4, int a5, int a6, int a7)
{
    int stk[5];
    register int t0;
    register int t2;
    register int t5;
    register int t42;
    register int t46;
    register int t47;
    int t49;
    register int t7;
    int t9;
    register int t10;
    register int t11;
    register int t12;
    register int t13;
    register int t14;
    register int t50;
    register int t51;
    register int t112;
    register int t73;
    register int t8;
    register int t36;
    register int t38;
    int t22;
    register int t23;

    *(unsigned short *)(((int)stk + 16)) = a4;
    *(unsigned int *)(((int)stk + 12)) = a6;
    t0 = ((~(((~a5) + 0x1) & 0x1F)) + 0x1);
    if ((int)a5 >= 0) {
        t0 = (a5 & 0x1F);
    }
    t2 = a5;
    if (t0 != 0) {
        t2 = (a5 + (0x20 - t0));
    }
    t5 = *(short *)(((int)stk + 16));
    t10 = *(int *)((((((t5 << 2) + t5) << 2) + 0xC173DEC) + 0x8));
    t42 = 0x0;
    t46 = a5;
    t47 = 0x0;
    t49 = 0x0;
    if (t10 != 0) {
        t7 = (((t5 << 2) + t5) << 2);
        t9 = t5;
        t11 = a5;
        t12 = 0x0;
        t13 = 0x0;
        t14 = 0x0;
        for (;;) {
            if ((int)(*(int *)((t10 + 0x10))) >= (int)t2) {
                if (t13 == 0) {
                    t13 = t10;
                }
                t9 = 0xC07FC48;
                t8 = (*(int *)((t10 + 0xC)));
                t7 = 0x800;
                t7 = ((int)((int)t8 % (int)t7));
                if (t7 != 0) {
                    t11 = (*(int *)((t10 + 0xC)));
                    t9 = 0xFFFFF800;
                    *(unsigned int *)(((int)stk + 8)) = t11;
                    t11 = (t11 + 0x800);
                    t11 = (t11 & t9);
                    t8 = (*(int *)(((int)stk + 8)));
                    t8 = (t8 + (*(int *)((t10 + 0x10))));
                    *(unsigned int *)(((int)stk + 8)) = t8;
                    if (((int)t11 < (int)t8) && (t22 = *(int *)((t10 + 0xC)), t23 = ((int)t11 >= (int)t8), t8 = t11, t8 = (t8 - t22), (int)t8 < (int)t2)) {
                        if ((int)((*(int *)(((int)stk + 8))) - t11) >= (int)t2) {
                            t12 = 0x2;
                            t14 = t10;
                            t10 = 0x0;
                        } else {
                            t10 = (*(int *)((t10 + 0x8)));
                        }
                    } else {
                        t12 = 0x1;
                        t14 = t10;
                        t10 = 0x0;
                    }
                    t36 = t8;
                    t38 = t9;
                } else {
                    t11 = (*(int *)((t10 + 0xC)));
                    t12 = 0x1;
                    t14 = t10;
                    t10 = 0x0;
                    t38 = 0xC07FC48;
                }
            } else {
                t10 = (*(int *)((t10 + 0x8)));
                t36 = t8;
                t38 = t9;
            }
            t8 = t36;
            t9 = t38;
            if (t10 == 0) {
                break;
            }
        }
        t42 = t14;
        t46 = t11;
        t47 = t12;
        t49 = t13;
    }
    t50 = t42;
    t51 = t47;
    if ((t47 == 0) && (t49 != 0)) {
        t50 = t49;
        t51 = 0x1;
    }
    t112 = 0x3;
    if (t50 != 0) {
        if (t51 == 2) {
            *(int *)((int)stk + 4) = 0x1;
            *(int *)((int)stk + 0) = 0x0;
            t112 = (kmiVQallocFB((*(short *)(((int)stk + 16))), t46, t2, (*(int *)(((int)stk + 12))), 0x0, 0x1));
        } else {
            if ((*(int *)((t50 + 0x10))) == t2) {
                kmytex_FBDeQueueEntry((((((t5 << 2) + t5) << 2) + 0xC173DEC) + 0x8), (((((t5 << 2) + t5) << 2) + 0xC173DEC) + 0xC), t50);
                kmytex_FBEnQueueTop(((((t5 << 2) + t5) << 2) + 0xC173DEC), (((((t5 << 2) + t5) << 2) + 0xC173DEC) + 0x4), t50);
                *(unsigned int *)(((*(int *)(((int)stk + 12))) + 0x8)) = (*(int *)((t50 + 0xC)));
                *(unsigned int *)((t50 + 0x14)) = (*(int *)(((int)stk + 12)));
                *(unsigned short *)((t50 + 0x0)) = 0x1;
                if ((*(short *)(((int)stk + 16))) == 0) {
                    *(unsigned short *)((t50 + 0x0)) = ((*(short *)((t50 + 0x0))) | 0x200);
                } else {
                    *(unsigned short *)((t50 + 0x0)) = ((*(short *)((t50 + 0x0))) | 0x400);
                }
                *(unsigned short *)((t50 + 0x0)) = ((*(short *)((t50 + 0x0))) | 0x4);
                *(unsigned int *)((((((t5 << 2) + t5) << 2) + 0xC173DEC) + 0x10)) = ((*(int *)((((((t5 << 2) + t5) << 2) + 0xC173DEC) + 0x10))) - (*(int *)((t50 + 0x10))));
                t112 = 0x0;
            } else {
                t73 = kmytex_FBAllocEntry();
                t112 = 0x3;
                if (t73 == 0) {
                } else {
                    *(unsigned int *)((t73 + 0xC)) = (*(int *)((t50 + 0xC)));
                    *(unsigned int *)((t73 + 0x10)) = t2;
                    *(unsigned int *)((t50 + 0x10)) = ((*(int *)((t50 + 0x10))) - t2);
                    *(unsigned int *)((t50 + 0xC)) = ((*(int *)((t50 + 0xC))) + t2);
                    *(unsigned int *)(((int)stk + 8)) = ((((t5 << 2) + t5) << 2) + 0xC173DEC);
                    kmytex_FBEnQueueTop((*(int *)(((int)stk + 8))), (((((t5 << 2) + t5) << 2) + 0xC173DEC) + 0x4), t73);
                    *(unsigned int *)(((*(int *)(((int)stk + 12))) + 0x8)) = (*(int *)((t73 + 0xC)));
                    *(unsigned int *)((t73 + 0x14)) = (*(int *)(((int)stk + 12)));
                    if ((*(short *)(((int)stk + 16))) == 0) {
                        *(unsigned short *)((t73 + 0x0)) = ((*(short *)((t73 + 0x0))) | 0x200);
                    } else {
                        *(unsigned short *)((t73 + 0x0)) = ((*(short *)((t73 + 0x0))) | 0x400);
                    }
                    *(unsigned short *)((t73 + 0x0)) = ((*(short *)((t73 + 0x0))) | 0x4);
                    *(unsigned int *)((((((t5 << 2) + t5) << 2) + 0xC173DEC) + 0x10)) = ((*(int *)((((((t5 << 2) + t5) << 2) + 0xC173DEC) + 0x10))) - (*(int *)((t73 + 0x10))));
                    t112 = 0x0;
                }
            }
        }
    }
    return t112;
}

float FUN_0c0469e2(int a4, int a5, int a6, int a7, int a8, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    if (a4 != 2) {
        if (a4 != 1) {
            if (a4 == 4) {
                t0 = 0x0;
                t1 = 0x0;
                t2 = (*(int *)((a7 + 0x0)));
                u0 = 3.40282347e+38f;
                for (;;) {
                    if ((int)t2 < 0) {
                        t2 = (t2 + a6);
                    }
                    u1 = nlLength(a8, ((((t2 << 1) + t2) << 2) + a5));
                    t1 = (t1 + 0x1);
                    if (u0 > u1) {
                        t0 = t2;
                        u0 = u1;
                    }
                    t2 = (t2 - 1);
                    if ((int)t1 >= (int)0x7) {
                        break;
                    }
                }
                t1 = t0;
                t0 = 0x0;
                t2 = (*(int *)((a7 + 0x0)));
                u1 = u0;
                for (;;) {
                    if ((int)t2 >= (int)a6) {
                        t2 = (t2 - a6);
                    }
                    u0 = nlLength(a8, ((((t2 << 1) + t2) << 2) + a5));
                    t0 = (t0 + 0x1);
                    if (u1 > u0) {
                        t1 = t2;
                        u1 = u0;
                    }
                    t2 = (t2 + 0x1);
                    if ((int)t0 >= (int)0x7) {
                        break;
                    }
                }
                t0 = t1;
                u0 = u1;
            } else {
                if (a4 == 3) {
                    t1 = 0x0;
                    t2 = 0x0;
                    t3 = (*(int *)((a7 + 0x0)));
                    u1 = 3.40282347e+38f;
                    for (;;) {
                        if ((int)t3 >= (int)a6) {
                            t3 = (t3 - a6);
                        }
                        u2 = nlLength(a8, ((((t3 << 1) + t3) << 2) + a5));
                        t2 = (t2 + 0x1);
                        if (u1 > u2) {
                            t1 = t3;
                            u1 = u2;
                        }
                        t3 = (t3 + 0x1);
                        if ((int)t2 >= (int)0x7) {
                            break;
                        }
                    }
                    t2 = t1;
                    u2 = u1;
                } else {
                    t1 = 0x0;
                    u1 = 3.40282347e+38f;
                    if ((int)a6 > 0) {
                        t3 = 0x0;
                        t4 = 0x0;
                        u3 = 3.40282347e+38f;
                        for (;;) {
                            u4 = nlLength(a8, ((((t4 << 1) + t4) << 2) + a5));
                            if (u3 > u4) {
                                t3 = t4;
                                u3 = u4;
                            }
                            t4 = (t4 + 0x1);
                            if ((int)t4 >= (int)a6) {
                                break;
                            }
                        }
                        t1 = t3;
                        u1 = u3;
                    }
                    t2 = t1;
                    u2 = u1;
                }
                t0 = t2;
                u0 = u2;
            }
            t1 = t0;
            u1 = u0;
        } else {
            t0 = *(int *)((a7 + 0x0));
            t2 = t0;
            u0 = (nlLength(a8, ((((t0 << 1) + t0) << 2) + a5)));
            for (;;) {
                t0 = t2;
                t2 = (t2 + 0x1);
                if ((int)t2 >= (int)a6) {
                    t2 = 0x0;
                }
                u2 = u0;
                u0 = (nlLength(a8, ((((t2 << 1) + t2) << 2) + a5)));
                if (!(u2 > u0)) {
                    break;
                }
            }
            t1 = t0;
            u1 = u2;
        }
        t0 = t1;
        u0 = u1;
    } else {
        t1 = *(int *)((a7 + 0x0));
        u1 = nlLength(a8, ((((t1 << 1) + t1) << 2) + a5));
        t2 = t1;
        u2 = u1;
        for (;;) {
            t1 = t2;
            t2 = (t2 - 1);
            if ((int)t2 < 0) {
                t2 = (a6 - 1);
            }
            u3 = u2;
            u2 = (nlLength(a8, ((((t2 << 1) + t2) << 2) + a5)));
            if (!(u3 > u2)) {
                break;
            }
        }
        t2 = (*(int *)((a7 + 0x0)));
        u2 = u1;
        for (;;) {
            t3 = t2;
            t2 = (t2 + 0x1);
            if ((int)t2 >= (int)a6) {
                t2 = 0x0;
            }
            u1 = u2;
            u2 = (nlLength(a8, ((((t2 << 1) + t2) << 2) + a5)));
            if (!(u1 > u2)) {
                break;
            }
        }
        t2 = t1;
        u2 = u3;
        if (!(u1 > u3)) {
            t2 = t3;
            u2 = u1;
        }
        t0 = t2;
        u0 = u2;
    }
    *(unsigned int *)((a7 + 0x0)) = t0;
    return u0;
}

float FUN_0c02be68(int a4, float f4)
{
    int stk[14];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register float F2;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    register float w0_5;
    register float w0_6;
    v0_1 = a4;
    w0_1 = f4;
    w0_5 = nlFloor(((*(float *)((v0_1 + 0x0))) / ((((struct o20_float *)0xC273810)->v))));
    w0_6 = nlFloor((((((struct o8_float *)(v0_1))->v)) / ((((struct o20_float *)0xC273810)->v))));
    v0_2 = (((struct o4_int *)0xC273810)->v);
    v0_4 = (((struct o8_int *)0xC273810)->v);
    v0_5 = (((struct o14_int *)0xC273810)->v);
    v0_3 = (0xC273814);
    v0_0 = (v0_1);
    v0_1 = (((v0_5 * ((int)w0_6 - v0_4)) + ((int)w0_5 - v0_2)));
    w0_0 = (w0_6);
    w0_3 = (w0_1);
    w0_4 = (-3.40282347e+38f);
    w0_1 = (3.40282347e+38f);
    w0_2 = (3.40282347e+38f);
    FPUL_ = ((int)w0_6);
    if (((int)((v0_5 * ((int)w0_6 - v0_4)) + ((int)w0_5 - v0_2)) >= 0)) goto L_C02BED0;
    L_C02C030:;
    return w0_0;
    L_C02BED0:;
    if (((int)v0_1 < (int)(*(int *)((v0_3 + 0x18))))) goto L_C02BEDA;
    goto L_C02C030;
    L_C02BEDA:;
    v0_2 = (((struct o0_int *)0xC273810)->v);
    v0_6 = (v0_2);
    if (((*(int *)(((v0_1 << 2) + v0_2))) != 0)) goto L_C02BEEC;
    goto L_C02C030;
    L_C02BEEC:;
    *(unsigned int *)(((int)stk + 0)) = (v0_1 << 2);
    v0_1 = *(int *)((((((struct o0_int *)0xC273810)->v)) + (v0_1 << 2)));
    *(unsigned int *)(((int)stk + 28)) = v0_0;
    *(float *)(((int)stk + 48)) = w0_3;
    *(float *)(((int)stk + 52)) = w0_3;
    v0_4 = ((((int)stk + 0) + 0x4));
    v0_5 = ((((int)stk + 0) + 0x14));
    v0_1 = ((v0_1 + 0x4));
    v0_3 = ((*(short *)(((*(int *)((((((struct o0_int *)0xC273810)->v)) + (*(int *)(((int)stk + 0)))))) + 0x0))));
    v0_2 = (0xC273810);
    v0_7 = ((((int)stk + 0) + 0xC));
    L_C02BF88:;
    if ((v0_3 != 0)) goto L_C02BF1A;
    if ((!(w0_4 > 0.0f))) goto L_C02BFAC;
    w0_0 = (*(float *)((v0_0 + 0x0)));
    w0_0 = w0_0 + w0_4 * (*(float *)((v0_5 + 0x0)));
    *(float *)((v0_0 + 0x0)) = w0_0;
    w0_1 = ((((struct o8_float *)(v0_0))->v));
    w0_1 = w0_1 + w0_4 * ((((struct o4_float *)(v0_5))->v));
    (((struct o8_float *)(v0_0))->v) = w0_1;
    w0_0 = (w0_4);
    w0_4 = (w0_1);
    L_C02BFEE:;
    v0_2 = *(short *)(((*(int *)(((*(int *)((v0_2 + 0x0))) + (*(int *)(((int)stk + 0)))))) + 0x2));
    v0_6 = (v0_2);
    v0_3 = (v0_2);
    L_C02C02C:;
    if ((v0_3 != 0)) goto L_C02BFFA;
    goto L_C02C030;
    L_C02BFFA:;
    v0_2 = CheckColliWallPole((((int)stk + 0) + 0x1C), (*(int *)((v0_1 + 0x0))));
    v0_6 = (v0_2);
    v0_1 = ((v0_1 + 0x4));
    if ((v0_2 == 0)) goto L_C02C02A;
    w0_0 = (*(float *)((v0_0 + 0x0)));
    w0_0 = w0_0 + (*(float *)(((int)stk + 40))) * (*(float *)(((int)stk + 32)));
    *(float *)((v0_0 + 0x0)) = w0_0;
    w0_0 = (((struct o28_float *)(((int)stk + 0)))->v);
    w0_1 = ((((struct o8_float *)(v0_0))->v));
    w0_1 = w0_1 + w0_0 * ((((struct o24_float *)(((int)stk + 0)))->v));
    (((struct o8_float *)(v0_0))->v) = w0_1;
    v0_6 = (0x8);
    w0_0 = (w0_0);
    goto L_C02C030;
    L_C02C02A:;
    v0_3 = ((v0_3 - 1));
    goto L_C02C02C;
    L_C02BFAC:;
    w0_4 = ((w0_3 * (1.0f + 1.0f)));
    if ((!((w0_3 * (1.0f + 1.0f)) > w0_2))) goto L_C02BFD2;
    w0_0 = (*(float *)((v0_0 + 0x0)));
    w0_0 = w0_0 + w0_2 * (*(float *)((v0_7 + 0x0)));
    *(float *)((v0_0 + 0x0)) = w0_0;
    w0_1 = (((struct o4_float *)(v0_7))->v);
    w0_0 = ((((struct o8_float *)(v0_0))->v));
    w0_0 = w0_0 + w0_2 * w0_1;
    (((struct o8_float *)(v0_0))->v) = w0_0;
    w0_0 = (w0_2);
    w0_4 = (w0_1);
    goto L_C02BFEE;
    L_C02BFD2:;
    if ((!(w0_3 > w0_1))) goto L_C02BFEE;
    w0_0 = (*(float *)((v0_0 + 0x0)));
    w0_0 = w0_0 + w0_1 * (*(float *)((v0_4 + 0x0)));
    *(float *)((v0_0 + 0x0)) = w0_0;
    w0_2 = (((struct o4_float *)(v0_4))->v);
    w0_0 = ((((struct o8_float *)(v0_0))->v));
    w0_0 = w0_0 + w0_1 * w0_2;
    (((struct o8_float *)(v0_0))->v) = w0_0;
    w0_0 = (w0_1);
    w0_4 = (w0_2);
    goto L_C02BFEE;
    L_C02BF1A:;
    v0_8 = CheckColliWallSegment((((int)stk + 0) + 0x1C), (*(int *)((v0_1 + 0x0))));
    v0_6 = (v0_8);
    v0_1 = ((v0_1 + 0x4));
    if ((v0_8 == 1)) goto L_C02BF2E;
    if (!((v0_6 == 2))) goto L_C02BF86;
    if ((!(w0_1 > (*(float *)(((int)stk + 40)))))) goto L_C02BF86;
    w0_1 = *(float *)(((int)stk + 40));
    FUN_0c07fdc8();
    w0_1 = (w0_1);
    goto L_C02BF86;
    L_C02BF86:;
    v0_3 = ((v0_3 - 1));
    goto L_C02BF88;
    L_C02BF2E:;
    if ((!((*(float *)(((int)stk + 40))) > w0_3))) goto L_C02BF52;
    if ((!(w0_2 > (*(float *)(((int)stk + 40)))))) goto L_C02BF86;
    w0_2 = *(float *)(((int)stk + 40));
    FUN_0c07fdc8();
    w0_2 = (w0_2);
    goto L_C02BF86;
    L_C02BF52:;
    if ((!((*(float *)(((int)stk + 40))) > w0_4))) goto L_C02BF86;
    w0_4 = *(float *)(((int)stk + 40));
    FUN_0c07fdc8();
    w0_4 = (w0_4);
    goto L_C02BF86;
}

void buExecServer(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    int stk[7];
    register int t10;
    register int t11;
    register int t16;
    int t22;
    register int t24;
    int t25;
    int t50;
    register int t65;
    register int t66;
    int t67;
    register int t68;
    int t69;
    int t94;
    int t52;
    register int t53;
    register int t54;
    int t96;
    register int t97;
    register int t98;

    if ((*(int *)0xC147530) == 0) {
        return;
    }
    if (((((struct o10_int *)0xC2C3D18)->v)) != 0) {
        *(unsigned int *)(((int)stk + 0)) = 0xC076CAE;
    } else {
        *(unsigned int *)(((int)stk + 0)) = 0xC076D08;
    }
    vmsfs_c_synch(a4, a5, a6, a7, f4, f5, f6, f7, f8, f9, f10, f11);
    (((struct o0_uint *)0xC2C3D18)->v) = ((((struct o4_int *)0xC2C3D18)->v));
    (((struct o4_uint *)0xC2C3D18)->v) = (vmsfs_isready());
    (((struct o4_uint *)0xC2C3D18)->v) = (((((struct o4_int *)0xC2C3D18)->v)) & ((((struct o14_int *)0xC2C3D18)->v)));
    *(unsigned int *)(((int)stk + 8)) = 0x0;
    *(unsigned int *)(((int)stk + 20)) = 0x0;
    *(unsigned int *)(((int)stk + 16)) = 0x1;
    t10 = 0x0;
    t11 = 0x0;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 20))) >= (int)0x8) {
            break;
        }
        t10 = (buStat((*(int *)(((int)stk + 20)))));
        t16 = 0x0;
        if (t10 == 0) {
            t16 = (*(int *)(((int)stk + 16)));
        }
        *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) | t16);
        *(unsigned int *)(((int)stk + 20)) = ((*(int *)(((int)stk + 20))) + 0x1);
        t11 = (*(int *)(((int)stk + 16)));
        t11 = (t11 << 1);
        *(unsigned int *)(((int)stk + 16)) = t11;
    }
    t22 = (((struct o4_int *)0xC2C3D18)->v);
    *(unsigned int *)(((int)stk + 12)) = ((((((struct o0_int *)0xC2C3D18)->v)) ^ t22) & t22);
    *(unsigned int *)(((int)stk + 20)) = 0x0;
    *(unsigned int *)(((int)stk + 16)) = 0x1;
    t24 = t10;
    t25 = 0x1;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 20))) >= (int)0x8) {
            break;
        }
        if (((*(int *)(((int)stk + 16))) & (*(int *)(((int)stk + 12)))) != 0) {
            t25 = (*(int *)(((int)stk + 8)));
            if (((*(int *)(((int)stk + 16))) & t25) != 0) {
                t24 = (((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((int)stk + 0)))))((*(int *)(((int)stk + 20))), a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
                t25 = 0xC2C3D20;
                *(unsigned int *)((t25 + 0x0)) = ((*(int *)((t25 + 0x0))) & (~(*(int *)(((int)stk + 16)))));
            } else {
                t24 = (*(int *)(((int)stk + 16)));
                (((struct o8_uint *)0xC2C3D18)->v) = (((((struct o8_int *)0xC2C3D18)->v)) | t24);
            }
        }
        t50 = *(int *)(((int)stk + 8));
        t25 = (*(int *)(((int)stk + 16)));
        if (((t25 & t50) != 0) && (t52 = (((struct o8_int *)0xC2C3D18)->v), t53 = ((t25 & t50) == 0), t25 = t52, t54 = *(int *)(((int)stk + 16)), (t54 & t25) != 0)) {
            t24 = (((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((int)stk + 0)))))((*(int *)(((int)stk + 20))), a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
            t25 = 0xC2C3D20;
            *(unsigned int *)((t25 + 0x0)) = ((*(int *)((t25 + 0x0))) & (~(*(int *)(((int)stk + 16)))));
        }
        *(unsigned int *)(((int)stk + 20)) = ((*(int *)(((int)stk + 20))) + 0x1);
        t25 = (*(int *)(((int)stk + 16)));
        t25 = (t25 << 1);
        *(unsigned int *)(((int)stk + 16)) = t25;
    }
    t65 = (((struct o4_int *)0xC2C3D18)->v);
    t66 = (((struct o0_int *)0xC2C3D18)->v);
    t67 = (((struct o0_int *)0xC2C3D18)->v);
    *(unsigned int *)(((int)stk + 4)) = ((t66 ^ t65) & t67);
    *(unsigned int *)(((int)stk + 20)) = 0x0;
    *(unsigned int *)(((int)stk + 16)) = 0x1;
    t68 = t67;
    t69 = ((t66 ^ t65) & t67);
    for (;;) {
        if ((int)(*(int *)(((int)stk + 20))) >= (int)0x8) {
            break;
        }
        t69 = (*(int *)(((int)stk + 16)));
        if ((t69 & (*(int *)(((int)stk + 4)))) != 0) {
            t69 = (*(int *)(((int)stk + 8)));
            if (((*(int *)(((int)stk + 16))) & t69) != 0) {
                t68 = (vmsfs_c_execcallback((*(int *)(((int)stk + 20))), 0x2, 0x0));
                t69 = 0xC2C3D24;
                *(unsigned int *)((t69 + 0x0)) = ((*(int *)((t69 + 0x0))) & (~(*(int *)(((int)stk + 16)))));
            } else {
                t68 = (*(int *)(((int)stk + 16)));
                (((struct oC_uint *)0xC2C3D18)->v) = (((((struct oC_int *)0xC2C3D18)->v)) | t68);
            }
        }
        t94 = *(int *)(((int)stk + 8));
        t69 = (*(int *)(((int)stk + 16)));
        if (((t69 & t94) != 0) && (t96 = (((struct oC_int *)0xC2C3D18)->v), t97 = ((t69 & t94) == 0), t69 = t96, t98 = *(int *)(((int)stk + 16)), (t98 & t69) != 0)) {
            t68 = (vmsfs_c_execcallback((*(int *)(((int)stk + 20))), 0x2, 0x0));
            t69 = 0xC2C3D24;
            *(unsigned int *)((t69 + 0x0)) = ((*(int *)((t69 + 0x0))) & (~(*(int *)(((int)stk + 16)))));
        }
        *(unsigned int *)(((int)stk + 20)) = ((*(int *)(((int)stk + 20))) + 0x1);
        t69 = (*(int *)(((int)stk + 16)));
        t69 = (t69 << 1);
        *(unsigned int *)(((int)stk + 16)) = t69;
    }
}

int PutGridPoly(int a4, int a5, float f4, float f5, float f6)
{
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    nlTriPutTextureInit(0xC274BE8, 0xFFFFFFFF, 0x0);
    FUN_0c075740(0xC274BE8, 0x1, 0x0, 0xFFFFFFFF, 0x0, 0x0, 0x0, 0x0, 0x0, 0xA, 0.5f, 0.5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    *(unsigned int *)0xC274C08 = ((*(int *)0xC274C08) | 0xC0);
    nlTriPutSetPoint(0xC274BE8, 0x0, ((float)a4 * f6), (f5 - 1.0f), ((float)a5 * f6), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    nlTriPutSetPoint(0xC274BE8, 0x1, ((float)a4 * f6), (f4 + 1.0f), ((float)a5 * f6), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    u0 = ((float)a4 * f6);
    nlTriPutSetPoint(0xC274BE8, 0x2, (f6 + u0), (f5 - 1.0f), ((float)a5 * f6), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    nlTriPutSetPoint(0xC274BE8, 0x3, (f6 + u0), (f4 + 1.0f), ((float)a5 * f6), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    u1 = ((float)a5 * f6);
    nlTriPutSetPoint(0xC274BE8, 0x4, (f6 + u0), (f5 - 1.0f), (f6 + u1), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    nlTriPutSetPoint(0xC274BE8, 0x5, (f6 + u0), (f4 + 1.0f), (f6 + u1), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    nlTriPutSetPoint(0xC274BE8, 0x6, ((float)a4 * f6), (f5 - 1.0f), (f6 + u1), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    nlTriPutSetPoint(0xC274BE8, 0x7, ((float)a4 * f6), (f4 + 1.0f), (f6 + u1), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    nlTriPutSetPoint(0xC274BE8, 0x8, ((float)a4 * f6), (f5 - 1.0f), ((float)a5 * f6), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    nlTriPutSetPoint(0xC274BE8, 0x9, ((float)a4 * f6), (f4 + 1.0f), ((float)a5 * f6), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    u0 = (f6 * 0.5f);
    u1 = (f6 * 0.5f);
    u2 = ((float)a5 * f6);
    u3 = (u0 * 1.40999997f);
    u3 = u3 + 0.5f * (((f4 + 1.0f) - (f5 - 1.0f)));
    u0 = (f6 * 0.5f);
    u4 = ((float)a4 * f6);
    nlTriPutSetClipping(0xC274BE8, (u0 + u4), (((f4 + 1.0f) + (f5 - 1.0f)) * 0.5f), (u1 + u2), u3);
    return nlObjPutUseViewMatrix(0xC274BE8);
}

int FUN_0c04c354(void)
{
    int stk[7];
    register int t7;
    register int t64;
    register int t8;
    register int t10;
    register int t35;
    register int t52;
    register int t36;
    register int t38;
    register int t50;
    int t1;

    if (((*(int *)0xC175C74) == 4) && (t1 = *(int *)0xC2ADF74, t1 == 0)) {
        *(unsigned int *)0xC2ADF74 = 0x1;
    }
    t64 = *(int *)0xC175C74;
    if (t64 != 4) {
        *(unsigned int *)0xC2ADF74 = 0x0;
    }
    t7 = *(int *)0xC2ADF74;
    if ((int)t7 > 0) {
        if ((int)t7 < (int)0x4) {
            t8 = ((~(((~t7) + 0x1) & 0x1)) + 0x1);
            if ((int)t7 >= 0) {
                t8 = (t7 & 0x1);
            }
            if (t8 == 1) {
                t10 = 0xC175A58;
                for (;;) {
                    FUN_0c07ff00();
                    *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) - (1.0f + 1.0f));
                    FUN_0c07ff00();
                    FUN_0c073c40((((int)stk + 0) + 0x4), (((int)stk + 0) + 0x4), 0.200000003f);
                    FUN_0c02e42a((((int)stk + 0) + 0x10), (((int)stk + 0) + 0x4), 0x4);
                    FUN_0c026ce6();
                    t10 = (t10 + 0x84);
                    if ((unsigned int)t10 >= (unsigned int)0xC175C68) {
                        break;
                    }
                }
            }
        }
        t35 = *(int *)0xC2ADF74;
        t52 = t35;
        if (t35 == 1) {
            *(unsigned int *)(((int)stk + 0)) = 0x4;
            t36 = 0x0;
            for (;;) {
                FUN_0c07ff00();
                t38 = ((~(((~t36) + 0x1) & 0x1)) + 0x1);
                if ((int)t36 >= 0) {
                    t38 = (t36 & 0x1);
                }
                if (t38 != 0) {
                    *(float *)(((int)stk + 16)) = -0.800000012f;
                } else {
                    *(float *)(((int)stk + 16)) = 0.800000012f;
                }
                FUN_0c073360();
                nlRotateAY((unsigned short)(*(short *)0xC17593E));
                FUN_0c072230((((int)stk + 0) + 0x10), (((int)stk + 0) + 0x10));
                nlPopMatrix(0x1);
                *(float *)(((int)stk + 20)) = -1.0f;
                FUN_0c07ff00();
                *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + 5.0f);
                FUN_0c02e42a((((int)stk + 0) + 0x4), (((int)stk + 0) + 0x10), 0x3);
                t50 = FUN_0c026ce6();
                t36 = (t36 + 0x1);
                if ((int)t36 >= (int)(*(int *)(((int)stk + 0)))) {
                    break;
                }
            }
            t52 = t50;
        }
        *(unsigned int *)0xC2ADF74 = ((*(int *)0xC2ADF74) + 0x1);
        t64 = t52;
    }
    return t64;
}
