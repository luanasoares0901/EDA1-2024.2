#include <stdio.h>
#include <stdlib.h>
#include "tipos.h"
 
int menu (){
    int opcao;
    do{
        print("Menu lindo");
        printf("1 - Reset\n");
        printf("2 - Inserir medida\n");
        printf("3 - Estatística\n");
        printf("4 - Sair\n");
        printf("Digite a opção desejada: ");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            printf("Reset");
            
            break;
        case 2:
            printf("Inserir medida");
            break;
        case'3':
            printf("Estatística");
            break;    
        
        default:
            break;
        }
    }while (opcao != 4);
}

void reset (qtde_dias, qtde_medidas, medidas){
    qtde_dias = 0;
    qtde_medidas = 0;
    medidas = NULL;
}

void inserir_medida(cidade, temperatura){
    printf("Digite a cidade: ");
    scanf("%s", cidade);
    printf("Digite a temperatura: ");
    scanf("%f", temperatura);

    


}

int main(){


}