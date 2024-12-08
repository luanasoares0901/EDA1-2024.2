#include <stdio.h>

int main(){
    int matriz [2] [3] [4] = {{{0}}}; //Declara uma matriz 2x3x4 de inteiros, todos inicializados com 0

    matriz [1] [2] [3] = 10; //Atribui o valor 10 ao elemento na segunda camada, terceira linda e quarta coluna

    for (int i=0;i<2;i++){ //começando o for pelo i ele vai imprimir a matriz camada por camada
        for (int j=0;j<3;j++){ //começando o for pelo j ele vai imprimir a matriz linha por linha
            for (int k=0;k<4;k++){
                printf("%d ", matriz[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}