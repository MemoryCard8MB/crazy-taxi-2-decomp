/* Library code: C that behaves like this game's own bytes. */
/* Course collision lookups: GetCollision2D. */

extern float nlFloor(float x);

/* What FindCollisionHit fills in: the surface it met, how deep the point is past it, and how much of the move
   (a fraction of the vector) it got before it. t goes in as the fraction still left. */
typedef struct {
    int *e;
    float g;
    float t;
} Hit;

extern int FindCollisionHit(float *a, float *b, Hit *hit, float radius);

extern float nlScalor(float *v);
extern void nlPushUnitMatrix(void);
extern void nlUnitVectorsd(float *v, float *out);
extern void nlRotateV(float *v, float *m);
extern void nlTranslateNV(float *p);
extern void MakeCollisionCellList(float *a, float *b);
extern float nlLength(float *a, float *b);
extern int CheckCollisionPoly(float *q, int *entry, Hit *hit);
extern void nlPopMatrix(int n);

/* The query CheckCollisionPoly gets: the move's start, the vector, the point's radius, the vector's length and the radius
   plus the length (how far from the start a surface can still be touched). */
typedef struct {
    float pos[3];
    float mv[3];
    float radius;
    float len;
    float reach;
} Query;

/* What the wall and pole tests (CheckColliWallSegment, CheckColliWallPole) get: the point, what they give back (a push, x and z,
   and how far along it) and the point's radius. */
typedef struct {
    float *pos;
    float push[2];
    float t;
    float spare;
    float radius;
} WallQuery;

extern float _builtin_sqrtf(float);
extern int CheckColliWallSegment(WallQuery *q, float *wall);
extern int CheckColliWallPole(WallQuery *q, float *pole);


/* Is the point against this pole (a post: its centre x, z at +8 and +12, its radius at +16, the top at +20 and the bottom at +24)?
   Inside the heights and closer than the radii added: 2, pushed away from the centre by the overlap (q->t) along q->push. */
int CheckColliWallPole(WallQuery *q, float *p)
{
    float *pos = q->pos;
    float y = pos[1];
    float dx, dz, d, inv;

    if (y > p[5]) {
        return 0;
    }
    if (p[6] - q->radius > y) {
        return 0;
    }
    dx = pos[0] - p[2];
    dz = pos[2] - p[3];
    d = _builtin_sqrtf(dz * dz + dx * dx);
    if (!(q->radius + p[4] > d)) {
        return 0;
    }
    inv = 1.0f / d;
    q->push[0] = inv * dx;
    q->push[1] = inv * dz;
    q->t = q->radius + p[4] - d;
    return 2;
}
