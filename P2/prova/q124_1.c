#include <stdio.h>
#include <stdlib.h>

int Q1(char *Nome, int qtde) { //soares 0
    int pc = 0;
    if (*Nome == '\0')
        return qtde;
    while (Nome[pc] != '\0')
        pc++;  // aqui ele faz um loop para contar quantos caracteres tem na string
    return Q1(Nome + 1, qtde + pc); // aqui ele chama a função novamente, passando o ponteiro para o próximo caractere e a quantidade de caracteres já contados
}
/*
1° chamada: Q1(soares, 6)
2° chamada: Q1(oares, 5)
3° chamada: Q1(ares, 4)
4° chamada: Q1(res, 3)
5° chamada: Q1(es, 2)
6° chamada: Q1(s, 1)
quando chega na 7° chamada, a string é vazia, então ele retorna a quantidade de caracteres contados = 21
*/