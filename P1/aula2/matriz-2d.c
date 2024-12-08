#include <stdio.h>

int main(){
    int matriz [3] [4] = {{0}}; //Declara uma matriz 3x4 de inteiros, todos inicializados com 0

    matriz [2] [1] = 10; //Atribui o valor 10 ao elemento na terceira linha e segunda coluna

    for (int i=0;i<3;i++){ //começando o for pelo i ele vai imprimir a matriz linha por linha
        for (int j=0;j<4;j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    for (int i=0; i<3; i++){ //Vai imprimir o ptriangulo superior da matriz
        for (int j=i; j<4; j++){
            printf("%d ", matriz[j][i]);
        }
        printf("\n");

    }
    return 0;

}
