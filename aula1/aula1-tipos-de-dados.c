#include <stdio.h>

int main(){
    int num=5;
    float pi=3.14159;
    char letra='A'; //char DEVE ser declarado aspas simples ('')
    printf("Inteiro: %d\n", num);
    printf("Ponto flutuante: %.2f\n", pi); // .2f limita a 2 casas decimais
    printf("Caractere: %c\n", letra); // se colocar %d, vai imprimir o valor ASCII do caractere

    return 0;
}