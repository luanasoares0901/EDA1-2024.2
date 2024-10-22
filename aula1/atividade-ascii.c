/* utilizando o %d para char, fazer um algoritmo que identfique se a letra digitada é maiúscula ou minúscula.
dica: apenas um if que verifca o range da tabela asccii relacionada às letras maiúsculas eou minusculas */

#include <stdio.h>

int main(){
    char letra;
    printf("Digite uma letra: ");
    scanf("%c", &letra);

    if(letra >= 65 && letra <= 90){
        printf("Letra digitada e maiuscula\n");
    }else if(letra >= 97 && letra <= 122){
        printf("Letra digitada e minuscula\n");
    }else{
        printf("Caractere digitado nao e uma letra\n");
    }

    return 0;
}