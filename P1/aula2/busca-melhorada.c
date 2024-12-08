#include <stdio.h>

int main(){
    char Letras[10] = {'A','B','C','D','E','F','G','H','I','J'};
    char caracterParaBuscar;
    int posicao;
    printf("Digite um caractere para buscar no vetor: ");
    scanf("%c", &caracterParaBuscar);
    posicao = Busca(Letras,10,caracterParaBuscar);
    if(posicao != -1){
        printf("O caractere %c foi encontrado na posição %d\n",caracterParaBuscar,posicao);
    }else{
        printf("O caractere %c não foi encontrado no vetor\n",caracterParaBuscar);
    }
    return 0;
}