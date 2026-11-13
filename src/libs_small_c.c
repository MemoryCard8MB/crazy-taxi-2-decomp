/* Library code: C that behaves like this game's own bytes. */
extern int ExecBubble();
extern int Exec_ProposalWalker();
/* Small functions, batch c. */

int nlCalcPoint4(int a, float *out);
int nlProjectScreen3D(int a, float *out);
int SetSpark(int a, int b, int c);
int ndPuru2Start(int a, int b, int c);
int syG2AicaFifoIsEmpty(int *r);

typedef struct {
    int w[19];
} Words19;

typedef struct {
    int w[36];
} Words36;

int set_event(int a, int b);
int Init_ProposalWalker(int a, int b);

int mwRnaLockCs(int *r);
int mwlRnaExecSvrHndl(char *p);
int mwRnaUnlockCs(int *r);

float nlRandom(void);

typedef struct {
    int a;
    int b;
    int c;
} Vec12c;


void nlFastScreenPoint(int a, float *out)
{
    float f[4];
    float inv;

    nlCalcPoint4(a, f);
    inv = 1.0f / f[3];
    out[0] = f[0] * inv;
    out[1] = f[1] * inv;
    out[2] = inv;
}


int _pd_peripheral_error(int a, int b, unsigned char *p)
{
    unsigned int v;

    v = p[4];
    if (v == 252) {
        return 0xFF0000FC;
    }
    if (v == 255 || v == 8 || v == 5 || v == 6 || v == 0) {
        return 0;
    }
    return 0xFF000000;
}
