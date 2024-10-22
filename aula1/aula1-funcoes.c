// Funções devem retornar um valor, mesmo que seja void.

#include <stdio.h>

int getNumeroMisterioso(){
    return 42;
}

int soma (int a, int b){
    return a + b;
}

int main(){
    int numeroMisterioso = getNumeroMisterioso();
    int resultado = soma(10, 20);
    printf("O número misterioso é: %d\n", numeroMisterioso);
    printf("A soma de 10 + 20 é: %d\n", resultado);
    return 0;
}