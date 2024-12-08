//Escreva um programa que inicialize um vetor com quantidades aleatórias para 10 produtos diferentes,
//permita ao usuário comprar produtos e adicionar novos produtos ao estoque.
//O programa deve exibir o estoque atualizado após cada operação.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    int estoque [10] = {0};
    int opcao = 0;
    int produto;
    int quantidade;

    srand(time(NULL));
    for (int i = 0; i < 10; i++) {
        estoque[i] = rand() % 100;
    }


    do{
        printf("--------------Mercadinho da Luaninha--------------\n");
        printarEstoque(estoque);
        printf("1 - Comprar produtos\n");
        printf("2 - Adicionar produtos\n");
        printf("3 - Sair\n");
        switch (opcao){
            case 1:
                printf("Digite o número do produto que deseja comprar: ");
                
                scanf("%d", &produto);
                printf("Digite a quantidade que deseja comprar: ");
                
                scanf("%d", &quantidade);
                if (estoque[produto] >= quantidade){
                    estoque[produto] -= quantidade;
                    printf("Compra realizada com sucesso!\n");
                } else {
                    printf("Quantidade insuficiente no estoque\n");
                }
                printarEstoque(estoque);
            break;
            case 2:
                printf("Digite o número do produto que deseja adicionar: ");
                scanf("%d", &produto);
                printf("Digite a quantidade que deseja adicionar: ");
                scanf("%d", &quantidade);
                estoque[produto] += quantidade;
                printarEstoque(estoque);
            break;
            case 3:
                printf("Saindo do programa\n");
            break;
        }
    } while (opcao != 3);
    return 0;
}

void printarEstoque(int estoque[]){
    for (int i = 0; i < 10; i++){
        printf("Produto %d: %d\n", i, estoque[i]);
    }
}