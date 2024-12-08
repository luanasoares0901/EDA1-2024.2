#include <stdio.h>

float soma(float num1, float num2){
    return num1 + num2;
}

float subtracao(float num1, float num2){
    return num1 - num2;
}

float multiplicacao(float num1, float num2){
    return num1 * num2;
}

float divisao(float num1, float num2){
    return num1 / num2;
}


int main(){
    int opcao;
    int num1, num2;

    do {
        printf("--------------Calculadora linda--------------\n");
        printf("1 - Soma\n");
        printf("2 - Subtracao\n");
        printf("3 - Multiplicacao\n");
        printf("4 - Divisao\n");
        printf("5 - Sair\n");
        printf("Digite a opcao desejada: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Voce escolheu a opcao 1 - Soma\n");
                printf("Digite o primeiro numero: ");
                scanf("%d", &num1);
                printf("Digite o segundo numero: ");
                scanf("%d", &num2);
                printf("O resultado da soma eh: %.2f\n", soma(num1, num2));
                break;
            case 2:
                printf("Voce escolheu a opcao 2 - Subtracao\n");
                printf("Digite o primeiro numero: ");
                scanf("%d", &num1);
                printf("Digite o segundo numero: ");
                scanf("%d", &num2);
                printf("O resultado da subtracao eh: %.2f\n", subtracao(num1, num2));
                break;
            case 3:
                printf("Voce escolheu a opcao 3 - Multiplicacao\n");
                printf("Digite o primeiro numero: ");
                scanf("%d", &num1);
                printf("Digite o segundo numero: ");
                scanf("%d", &num2);
                printf("O resultado da multiplicacao eh: %.2f\n", multiplicacao(num1, num2));
                break;
            case 4:
                printf("Voce escolheu a opcao 4 - Divisao\n");
                printf("Digite o primeiro numero: ");
                scanf("%d", &num1);
                printf("Digite o segundo numero: ");
                scanf("%d", &num2);
                printf("O resultado da divisao eh: %.2f\n", divisao(num1, num2));
                break;
            case 5:
                printf("Voce escolheu a opcao 5 - Sair\n");
                break;
            default:
                printf("Opcao invalida\n");
        }
    } while (opcao != 5);

    return 0;
}