#include <stdio.h>

int main(){
    int idade;
    float altura;
    printf("Digite sua idade: ");
    scanf("%d", &idade); // o & é necessário para indicar o endereço da variável
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("Sua idade é %d e sua altura é %.2f\n", idade, altura);
    return 0;
}