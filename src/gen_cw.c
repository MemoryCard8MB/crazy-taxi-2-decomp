/* Straight-line functions with calls and guards (batch gen_cw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int cvFsFinish(void);
int kmSetCheapShadowMode(void);
int kmSetFogTable(void);
int kmiWriteRegister(void);
int mwRnaCreate(void);
int mwRnaExecServer(void);
int mwRnaFinish(void);
int mwRnaGetTime(void);
int mwRnaInit(void);
int mwRnaSetBitPerSmpl(void);
int mwRnaSetNumChan(void);
int mwRnaSetOutPan(void);
int mwRnaSetOutVol(void);
int mwRnaSetPlaySw(void);
int mwRnaSetSfreq(void);
int mwRnaSetTransSw(void);
int syCfgExit(void);
int thunk_kmiWriteRegister(void);
int thunk_mwRnaInit(void);
int thunk_kmSetFogTable_0c071a70(void);
int thunk_kmSetCheapShadowMode(void);
int thunk_syCfgExit(void);
int thunk_kmSetFogTable(void);
int thunk_mwRnaCreate(void);
int thunk_mwRnaFinish(void);
int thunk_mwRnaSetSfreq(void);
int thunk_mwRnaExecServer(void);
int thunk_mwRnaGetTime(void);
int thunk_mwRnaSetPlaySw(void);
int thunk_mwRnaSetTransSw(void);
int thunk_mwRnaSetNumChan(void);
int thunk_mwRnaSetOutVol(void);
int thunk_mwRnaSetOutPan(void);
int thunk_cvFsFinish(void);
int thunk_mwRnaSetBitPerSmpl(void);


int thunk_mwRnaInit(void)
{
    return mwRnaInit();
}




int thunk_kmSetFogTable(void)
{
    return kmSetFogTable();
}


int thunk_mwRnaFinish(void)
{
    return mwRnaFinish();
}

int thunk_mwRnaSetSfreq(void)
{
    return mwRnaSetSfreq();
}

int thunk_mwRnaExecServer(void)
{
    return mwRnaExecServer();
}

int thunk_mwRnaGetTime(void)
{
    return mwRnaGetTime();
}

int thunk_mwRnaSetPlaySw(void)
{
    return mwRnaSetPlaySw();
}





int thunk_cvFsFinish(void)
{
    return cvFsFinish();
}

