#include "defs.h"

int Sq64toSq120[BRD_SQ_NUM];
int Sq120toSq64[64];

void InitSq120to64(){
    int index = 0;
    int f = FILE_A;
    int r = RANK_1;

    int sq = A1;
    int sq64 = 0;
    for(index = 0;index < BRD_SQ_NUM;index++){
        Sq120toSq64[index] = 65;
    }

    for(index = 0;index < 64;index++){
        Sq64toSq120[index] = 120;
    }

    for(r = RANK_1;r <= RANK_8;r++){
        for(f = FILE_A;f <= FILE_H;f++){
            sq = FR2SQ(f,r);
            Sq64toSq120[sq64] = sq;
            Sq120toSq64[sq] = sq64;
            sq64++;
        }
    }
}

void AllInit(){
    InitSq120to64();
}