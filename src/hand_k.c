/* Hand-written C (step 8 preparation): functions the generator could not draw cases for. */

int FUN_0c05ef18(void);
int nlPushMatrix(int);
int nlPopMatrix(int);
void nlLoadMatrix8(int);
void nlObjPutUseViewMatrix(int *);
void FUN_0c072230(int, int);
void FUN_0c072290(int, int);

#define ENTRIES   ((int *)0xC137114)     /* 197 entries of 28 bytes: a slot number, then two parts the two calls take */
#define LIMITS    ((int *)0xC1387FC)     /* the entry numbers after which the next matrix applies */
#define MATRICES  0xC1386A8              /* 64-byte matrices: the first is pushed, each next one loaded */
#define SLOTS     0xC636F00              /* one word per slot number, bit 0 set when its entry is filled */

/* manual: fills the slot of each of the 197 entries (FUN_0c072230 and FUN_0c072290 with the entry's parts), marks the slot, and
   loads the next matrix after each entry number LIMITS names; then draws with the view matrix (a jump: nothing comes back here).
   The generator's cases ran out of steps in the 197 passes (each divides by 28 through _divls) and took that for a loop that never
   ends. */
void FUN_0c05f12c(void)
{
    int *e = ENTRIES;
    int *lim = LIMITS;
    int m = MATRICES;
    int n = 197;
    int *slot;

    FUN_0c05ef18();
    nlPushMatrix(MATRICES);
    do {
        slot = (int *)(SLOTS + (e[0] << 2));
        FUN_0c072230((int)e + 4, (int)slot);
        *slot |= 1;
        FUN_0c072290((int)e + 16, (int)slot + 12);
        e = (int *)((int)e + 28);
        n--;
        if (((int)e - (int)ENTRIES) / 28 > *lim) {
            lim++;
            m += 64;
            nlLoadMatrix8(m);
        }
    } while (n > 0);
    nlPopMatrix(1);
    nlObjPutUseViewMatrix((int *)SLOTS);
}
