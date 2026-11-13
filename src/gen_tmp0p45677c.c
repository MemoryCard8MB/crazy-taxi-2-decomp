/* scratch */
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o13_uchar { char p[0x13]; unsigned char v; };
struct o38_int { char p[0x38]; int v; };
struct oC8_uint { char p[0xC8]; unsigned int v; };
struct oCC_uint { char p[0xCC]; unsigned int v; };
struct oD0_uint { char p[0xD0]; unsigned int v; };
struct oD4_uint { char p[0xD4]; unsigned int v; };
struct oD8_uint { char p[0xD8]; unsigned int v; };
struct oDC_uint { char p[0xDC]; unsigned int v; };
struct oFF_uchar { char p[0xFF]; unsigned char v; };
int FUN_0c05f470(int, int, float, float);
int FUN_0c07ff00(void);
int FUN_0c069388(void);

int FUN_0c069388(void)
{
    int t6;
    register int t12;
    register int t7;
    register int t4;

    *(volatile int *)0xC2BA5F0;
    FUN_0c07ff00();
    FUN_0c07ff00();
    (((struct oCC_uint *)(t4))->v) = 0x0;
    (((struct oC8_uint *)(t4))->v) = 0x0;
    (((struct oD4_uint *)(t4))->v) = 0x0;
    (((struct oD0_uint *)(t4))->v) = 0x0;
    (((struct oDC_uint *)(t4))->v) = 0x0;
    (((struct oD8_uint *)(t4))->v) = 0x0;
    (((struct oFF_uchar *)(t4))->v) = ((*(signed char *)(((0xFF + t4) + 0x0))) & 0xFD);
    t6 = *(int *)0xC175908;
    t12 = t6;
    if ((t6 != 1) && (t6 != 2)) {
    } else {
        t7 = (((struct o38_int *)0xC2BA5B8)->v);
        (((struct oFF_uchar *)(t7))->v) = ((*(signed char *)(((0xFF + t7) + 0x0))) | 0x2);
        (((struct o0_uint *)0xC2BA694)->v) = (((((struct o0_int *)0xC2BA694)->v)) + 0x1);
        (((struct o13_uchar *)0xC2BA694)->v) = ((*(signed char *)0xC2BA6A7) | 0x10);
        FUN_0c05f470(0xC2BA5B0, 0xC889200, 0.0f, 0.0f);
        (((struct o0_float *)0xC2BA5B8)->v) = 1.0f;
        t12 = 0x90;
    }
    return t12;
}

