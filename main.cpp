#include <iostream>

#define ROWSIZE 3
#define COLSIZE 2

void printMatriz(int* pMatriz);

int main()
{
    int matriz[ROWSIZE][COLSIZE] = {{3,1}, {6,2}, {9,3}}; //array two dimensional

    printMatriz(&matriz[0][0]);
    return 0;
}


void printMatriz(int* pMatriz){
    for(int i=0; i<ROWSIZE; i++){
        for(int j=0; j<COLSIZE; j++){
            std::cout << *(pMatriz + (COLSIZE * i + j)) << std::endl;
        }
        std::cout << std::endl;
    }
}
