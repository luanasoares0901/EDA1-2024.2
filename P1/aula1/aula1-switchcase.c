#include <stdio.h>

int main(){
    int escolha;
    printf("Menu lindo: \n");
    printf("1 - Opção 1\n");
    printf("2 - Opção 2\n");
    scanf("%d", &escolha);
    switch (escolha){
    case 1:
        printf("Você escolheu a opção 1\n");
        break;
    case 2:
        printf("Você escolheu a opção 2\n");
        break;
    default:
        printf("Opção inválida\n");
        break;
    }

    return 0;
}