#include <stdio.h>

int main(){
    char inicial;
    printf("Digite a inicial do seu nome: ");
    scanf(" %c", &inicial); // utilize espaço antes do %c para evitar problemas com o buffer
    printf("A inicial do seu nome é %c\n", inicial);
    return 0;
}