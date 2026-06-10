#include<iostream>
#include "defs.h"

int main(){
    AllInit();
    // int k = 0;
    // for(int i =0;i<12;i++){
    //     for(int j = 0;j<10;j++){
    //         printf("%5d",Sq120toSq64[k++]);
    //     }
    //     std::cout<<std::endl<<std::endl;
    // }
    // std::cout<<std::endl<<std::endl;
    // k=0;
    // for(int i =0;i<8;i++){
    //     for(int j = 0;j<8;j++){
    //         printf("%5d",Sq64toSq120[k++]);
    //     }
    //     std::cout<<std::endl<<std::endl;
    // }
    U64 playBitBoard = 0ULL;
    playBitBoard |= (1ULL << SQ64(D2));
    playBitBoard |= (1ULL << SQ64(G2));
    PrintBitBoard(playBitBoard);

    return 0;
}