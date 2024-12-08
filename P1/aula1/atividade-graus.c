// crie um programa que apresenta um menu de conversão em que o usuário escolhe entre converter graus Celsius para Farenheit ou graus Farenheit para Celsius. O programa deve pedir a temperatura e fazer a conversão.
// A fórmula de conversão é: F = C * 9/5 + 32

#include <stdio.h>

int main(){
    float celsius,farenheit;
    int opcao;

    do{
    printf("--------------Conversor de temperatura--------------\n");
    printf("1 - Celsius para Farenheit\n");
    printf("2 - Farenheit para Celsius\n");
    printf("3 - Sair\n");
    printf("Digite a opcao desejada: ");
    scanf("%d", &opcao);

    switch (opcao){
        case 1:
            printf("Voce escolheu a opcao 1 - Celsius para Farenheit\n");
            printf("Digite a temperatura em Celsius: ");
            scanf("%f", &celsius);
            farenheit = celsius * 9/5 + 32;
            printf("A temperatura em Farenheit eh: %.2f\n", farenheit);
            break;
        case 2:
            printf("Voce escolheu a opcao 2 - Farenheit para Celsius\n");
            printf("Digite a temperatura em Farenheit: ");
            scanf("%f", &farenheit);
            celsius = (farenheit - 32) * 5/9;
            printf("A temperatura em Celsius eh: %.2f\n", celsius);
            break;
        case 3:
            printf("Voce escolheu a opcao 3 - Sair\n");
            break;
    }
    }while (opcao != 3);

    return 0;
}
