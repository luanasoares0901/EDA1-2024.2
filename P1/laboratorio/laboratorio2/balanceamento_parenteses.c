/*
Faça uma função recursiva que verifique se os parênteses de uma expressão aritmética estão balanceados. Sua função deve retornar:
0, caso os parênteses estejam balanceados
-1, caso fique parênteses abertos sem fechar
1, caso tenha mais fecha parênteses do que abre parênteses.

Uma vez que você concluir esta função, as saídas deverão ser geradas conforme os exemplos apresentados.
Input	                Result
((1 + 2) * (3 + 4))     Os parenteses estao balanceados.
((x + y) * z + (a - b)  Ficaram parenteses sem fechar.
((a + 2)) * (3 + c))    Tem mais fecha parenteses do que abre parenteses.






*/

#include <stdio.h>
#include <stdlib.h>

int ChecaParenteses(char *expr, int count){
    if(*expr == '\0'){
        if(count == 0){
            return 0;
        }
        return -1;
    }
    if(*expr == '('){
        count++;
    }
    if(*expr == ')'){
        count--;
    }
    if(count < 0){
        return 1;
    }
    return ChecaParenteses(expr + 1, count);
}

int main() {
    char *expression1 = "((1 + 2) * (3 + 4))";  
    char *expression2 = "((1 + 2) * (3 + 4)";   
    char *expression3 = "((1 + 2)) * (3 + 4))"; 
    char *expression4 = "((1 + 2) * (3 + 4)";
    printf("Resultado para expressão 1: %d\n", ChecaParenteses(expression1, 0)); // Deve retornar 0
    printf("Resultado para expressão 2: %d\n", ChecaParenteses(expression2, 0)); // Deve retornar -1
    printf("Resultado para expressão 3: %d\n", ChecaParenteses(expression3, 0)); // Deve retornar 1
    printf("Resultado : %d\n", ChecaParenteses(expression4,0));
    return 0;
}