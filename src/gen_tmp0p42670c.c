/* scratch */
int FUN_0c07fdc8(void);
int SJ_SplitChunk(int a4, int a5, int a6);

int SJ_SplitChunk(int a4, int a5, int a6)
{
    register int t0;
    register int t7;
    register int t8;
    register int t1;
    register int t3;
    register int t5;

    t0 = FUN_0c07fdc8();
    *(unsigned int *)((t3 + 0x4)) = (*(int *)((t1 + 0x4)));
    if ((int)(*(int *)((t1 + 0x4))) > (int)t5) {
        *(unsigned int *)((t1 + 0x4)) = t5;
    }
    t7 = *(int *)((t3 + 0x4));
    t8 = *(int *)((t1 + 0x4));
    *(unsigned int *)((t3 + 0x4)) = (t7 - t8);
    if ((t7 - t8) == 0) {
        *(unsigned int *)((t3 + 0x0)) = 0x0;
    } else {
        *(unsigned int *)((t3 + 0x0)) = ((*(int *)((t1 + 0x0))) + (*(int *)((t1 + 0x4))));
    }
    return t0;
}

