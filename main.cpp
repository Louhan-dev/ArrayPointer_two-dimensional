#include <iostream>

using namespace std;

void printMatriz(int* pMatriz);

int main()
{
    int matriz[3][2] = {{3,1}, {6,2}, {9,3}}; //array two dimensional

    printMatriz(&matriz[0][0]);
    return 0;
}


void printMatriz(int* pMatriz){
    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            cout << *(pMatriz + (2 * i) + j) << endl;
        }
        cout << endl;
    }
}
