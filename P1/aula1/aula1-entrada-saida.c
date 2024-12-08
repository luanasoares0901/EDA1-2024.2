#include <stdio.h>

int main(){
    char caractere;
    int inteiro;
    float flutuante;

//exemplo de uso do scanf com char
    scanf("%c", &caractere);
    printf("O caractere digitado foi: %c\n", caractere);
//limpa o buffer do teclado
    while(getchar() != '\n');
//exemplo de uso do scanf com int
    scanf("%d", &inteiro);
    printf("O inteiro digitado foi: %d\n", inteiro);
//exemplo de uso do scanf com float
    scanf("%f", &flutuante);
    printf("O flutuante digitado foi: %.2f\n", flutuante);
    return 0;
}