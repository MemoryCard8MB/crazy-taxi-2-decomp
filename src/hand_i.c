/* Hand-written C (step 7): the people points of a city (pplDC1.BIN / pplDC2.BIN at 0C310000) streamed into the 80 active slots.
   The record copy is a 12-byte vector by value, which the compiler writes as a call to _quick_odd_mvn (r0 size, r1 to, r2 from),
   listed in the game as FUN_0c07ff00.
   @runtime _quick_odd_mvn=FUN_0c07ff00 */

typedef struct { float x, y, z; } Vec3;

/* pplDC<n>.BIN: 256 list heads (one per map area), then the records, 24 bytes each */
typedef struct {
    Vec3 pos;                /* +00 */
    float r;                 /* +0C */
    signed char a, b;        /* +10, +11 */
    short id;                /* +12 */
    int next;                /* +14 the next record of the area, or 0 */
} PplRec;

/* the active slots at 0C2B12CC, 28 bytes each; key -1 is a free slot */
typedef struct {
    int key;                 /* +00 the area the point came from */
    Vec3 pos;                /* +04 */
    float r;                 /* +10 */
    short a, b, id, n;       /* +14 .. +1A */
} PplSlot;

#define NSLOT   80
#define SLOTS   ((PplSlot *)0xC2B12CC)
#define STEP    (*(int *)0xC2B1B90)          /* which entry of AREAS is next, -1 after the last */
#define AREAS   ((int *)0xC2ADED0)           /* 14 area numbers, -1 ends them */
#define CUR     ((int *)0xC2ADEC4)           /* the area the taxi is in */

/* The file holds absolute pointers to its own load address, 0C310000, as stored on the disc. A build that moves the buffer
   (layout.txt `bss`) moves the hex address below but not the decimal one, so PPL_MOVED is how far the buffer moved: 0 in the
   original layout, where the C is the original's. */
#define PPL         ((int *)0xC310000)
#define PPL_AT      204537856                 /* 0x0C310000, the address the file's pointers assume */
#define PPL_MOVED   ((int)0xC310000 - PPL_AT)
#define REC(p)      ((PplRec *)((p) + PPL_MOVED))

/* manual: steps to the next area of AREAS (after the last, or at a -1, to the taxi's own area and STEP -1). Nothing happens when a
   slot already holds that area; when the area has as many points as there are free slots or more, STEP goes back one, to try again
   next time. Otherwise each point of the area goes into the next free slot. */
void FUN_0c04e03c(void)
{
    int *area;
    int p, n, nfree, i;
    PplSlot *s;
    PplRec *q;

    if (++STEP >= 14 || AREAS[STEP] == -1) {
        area = CUR;
        STEP = -1;
    } else {
        area = &AREAS[STEP];
    }
    nfree = 0;
    for (s = SLOTS; s < SLOTS + NSLOT; s++) {
        if (s->key == -1)
            nfree++;
        if (s->key == *area)
            return;
    }
    n = 0;
    for (p = PPL[*area]; p; p = REC(p)->next)
        n++;
    if (n >= nfree) {
        STEP--;
        return;
    }
    i = 0;
    for (p = PPL[*area]; p; p = q->next) {
        q = REC(p);
        while (SLOTS[i].key != -1)
            i++;
        s = &SLOTS[i];
        s->key = *area;
        s->pos = q->pos;
        s->r = q->r;
        s->a = q->a;
        s->b = q->b;
        s->id = q->id;
        s->n = 0;
    }
}
