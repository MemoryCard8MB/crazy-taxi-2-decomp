/* Hand-written C (step 6): functions that copy 12-byte vectors by value. The compiler writes each copy as a call to its
   runtime helper _quick_odd_mvn (r0 size, r1 to, r2 from), which the game's names list as FUN_0c07ff00.
   @runtime _quick_odd_mvn=FUN_0c07ff00 */

typedef struct { float x, y, z; } Vec3;

int FUN_0c058f64(int, int, int, int);
int FUN_0c01e990(int, int, int);
int FUN_0c047bda(int, int, Vec3 *);
int gdc_CoursePointLoadReq(Vec3, float);
int End_Adv_Title_LOGO(void);
int FUN_0c01e3cc(int);
int FUN_0c046d8c(int, int, int *, int *, int);
int FUN_0c046fde(int *, int *, int);
float nlLength(int, Vec3 *);
int nlGetAverageVector(Vec3 *, Vec3 *, Vec3 *, float, float);

typedef struct { Vec3 *pts; int n; int pad; } Line;      /* 12 bytes each, table at [0C2ADA7C] */
#define LINES ((Line *)G(0xC2ADA7C))

#define G(a) (*(int *)(a))
#define TIME   G(0xC1EC74C)
#define MODE   G(0xC1EC748)
#define STATE  G(0xC1EC744)
#define SKIP   G(0xC1EC71C)
#define VOICE  G(0xC1ECCA0)

/* manual: the title/attract camera step; one 12-byte local, passed by value after each FUN_0c047bda fills it */
void FUN_0c01bf10(void)
{
    Vec3 v;
    int end;
    float far = 800.0f;

    TIME = G(0xC1EC848);
    if (G(0xC11D044) > 0) {
        G(0xC11D044)--;
        if (TIME > 5)
            TIME = 5;
    }
    if (MODE == 0) {
        end = 421;
        if (TIME >= 40 && VOICE == 0) {
            FUN_0c058f64(0xC11D014, 0, 120, 0);
            VOICE = 1;
        }
        if (SKIP == 0) {
            if (TIME >= 121 && VOICE == 1) {
                FUN_0c01e990(0xC097444, 2, 0);
                VOICE = 2;
            }
        }
        if (SKIP == 0) {
            FUN_0c047bda(1, 0, &v);
            far = 1500.0f;
            gdc_CoursePointLoadReq(v, far);
            FUN_0c047bda(1, 1, &v);
            gdc_CoursePointLoadReq(v, far);
        } else {
            FUN_0c047bda(2, 0, &v);
            gdc_CoursePointLoadReq(v, 1000.0f);
            FUN_0c047bda(2, 1, &v);
            gdc_CoursePointLoadReq(v, far);
            FUN_0c047bda(2, 2, &v);
            gdc_CoursePointLoadReq(v, 600.0f);
            FUN_0c047bda(2, 3, &v);
            gdc_CoursePointLoadReq(v, 400.0f);
        }
    } else if (MODE == 1) {
        if (TIME == 30)
            FUN_0c058f64(0xC11D014, 0, 120, 0);
        end = 279;
        FUN_0c047bda(2, 0, &v);
        gdc_CoursePointLoadReq(v, far);
    }
    if (TIME >= end) {
        if (MODE == 0)
            STATE = 2;
        else if (MODE == 1)
            STATE = 4;
        End_Adv_Title_LOGO();
    } else {
        FUN_0c01e3cc(0);
    }
}

/* manual: walks a line of points from (line, idx) in direction dir until one is farther than dist from pos, then halves
   the last step until the distance settles (0.001), and stores the point found through out */
void FUN_0c045108(int dir, int pos, int line, int idx, Vec3 *out, float dist)
{
    Vec3 a, b, c;
    int step;
    float d, prev;

    FUN_0c046d8c(2, 0, &line, &idx, pos);
    a = LINES[line].pts[idx];
    step = dir >= 0 ? 1 : -1;
    do {
        idx += step;
        FUN_0c046fde(&line, &idx, 0);
        b = a;
        a = LINES[line].pts[idx];
        d = nlLength(pos, &a);
    } while (!(d > dist));
    do {
        prev = d;
        nlGetAverageVector(&a, &b, &c, 0.5f, 0.5f);
        d = nlLength(pos, &c);
        if (d > dist)
            a = c;
        else
            b = c;
        d -= dist;
        if (d < 0.0f) d = -d;
    } while (!(0.001f > (d - prev < 0.0f ? -(d - prev) : d - prev)));
    *out = c;
}
