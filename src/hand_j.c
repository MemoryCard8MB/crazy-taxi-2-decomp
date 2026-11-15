/* Hand-written C (step 7): generated C patched by hand. */

struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
/* _builtin_sqrtf */

int CheckColliWallSegment(int a4, int a5)
{
    register int t0;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u7;
    register float u8;
    float s1;
    volatile float d;
    float x;


    t0 = *(int *)((a4 + 0x0));
    u0 = (((struct o4_float *)(t0))->v);
    if (!(u0 > ((((struct o14_float *)(a5))->v)))) {
        if (!((((((struct o18_float *)(a5))->v)) - ((((struct o18_float *)(a4))->v))) > u0)) {
            u0 = *(float *)((t0 + 0x0));
            u1 = (((struct o4_float *)(a5))->v);
            u2 = (((struct o8_float *)(t0))->v);
            u3 = *(float *)((a5 + 0x0));
            u4 = (((struct o10_float *)(a5))->v);
            u5 = (u1 * u2);
            u5 = u5 + u0 * u3;
            u6 = (((struct o14_float *)(a4))->v);
            u7 = ((((((struct o8_float *)(a5))->v)) - u0) * u1);
            u0 = ((((((struct oC_float *)(a5))->v)) - u2) * u3);
            d = u5 + u4;
            if (u6 > d) {
                if (d > (-u6)) {
                    (((struct o10_float *)(a4))->v) = d;
                    if (0.0f > (u7 - u0)) {
                        if ((u7 - u0) > (-((((struct o14_float *)(a4))->v)))) {
                            u1 = *(float *)((t0 + 0x0));
                            u2 = (((struct o8_float *)(a5))->v);
                            u3 = (((struct oC_float *)(a5))->v);
                            u6 = (((struct o8_float *)(t0))->v);
                            u8 = ((u6 - u3) * (u6 - u3));
                            u8 = u8 + ((u1 - u2)) * ((u1 - u2));
                            s1 = _builtin_sqrtf(u8);
                            if (((((struct o14_float *)(a4))->v)) > s1) {
                                (((struct oC_float *)(a4))->v) = (((((struct o14_float *)(a4))->v)) - s1);
                                (((struct o4_float *)(a4))->v) = ((1.0f / s1) * (u1 - u2));
                                (((struct o8_float *)(a4))->v) = ((1.0f / s1) * (u6 - u3));
                                return 0x2;
                            }
                            return 0x0;
                        }
                        return 0x0;
                    }
                    if (((((struct o1C_float *)(a5))->v)) > (u7 - u0)) {
                        { struct mv2 { int w[2]; }; *(struct mv2 *)((a4 + 0x4)) = *(struct mv2 *)(a5); }
                        x = (((struct o14_float *)(a4))->v);
                        (((struct oC_float *)(a4))->v) = x - d;
                        return 0x1;
                    }
                    return 0x0;
                }
                return 0x0;
            }
            return 0x0;
        }
        return 0x0;
    }
    return 0x0;
}
