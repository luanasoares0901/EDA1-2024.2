#include <stdio.h>

int main (){
    int num, i, primo = 1;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for (i = 2; i < num; i++){ // i começa em 2 porque 1 não é primo. O loop vai até num - 1 porque num é divisível por ele mesmo
        if (num % i == 0){ // se num for divisível por i, num não é primo
            primo = 0; // primo recebe 0
            break;
        }
    }

    if (primo){
        printf("O numero %d eh primo\n", num);
    } else {
        printf("O numero %d nao eh primo\n", num);
    }


    return 0;
}