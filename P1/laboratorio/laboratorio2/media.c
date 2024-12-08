/*
Cálculo da média dos dígitos de um número natural

Faça uma função recursiva chamada MediaDig que receba como argumento um número natural e devolva a média dos seus dígitos.
Para fins de cálculos por recursividade, a função usa dois parâmetros extras inicialmente nulos: o tamanho do número e a soma dos dígitos.

Uma vez que você concluir esta função, as saídas deverão ser geradas conforme os exemplos apresentados.

Input	Result
1234    Media dos digitos: 2.50
12345   Media dos digitos: 3.00
35987651    Media dos digitos: 5.50
0   Media dos digitos: 0.00
*/

#include <stdio.h>
#include <stdlib.h>

float MediaDig(int Numero, unsigned int Tamanho, float Soma){
    if(Numero == 0){
        if(Tamanho == 0){
            return 0;
        }
        return Soma / Tamanho;
    }
    return MediaDig(Numero / 10, Tamanho + 1, Soma + (Numero % 10));
}

int main(){
    printf("Media dos digitos: %.2f\n", MediaDig(1234, 0, 0));
    printf("Media dos digitos: %.2f\n", MediaDig(12345, 0, 0));
    printf("Media dos digitos: %.2f\n", MediaDig(0, 0, 0)); /// esse deve retornar 0.00
    printf("Media dos digitos: %.2f\n", MediaDig(35987651, 0, 0));
    return 0;
}