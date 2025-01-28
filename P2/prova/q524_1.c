#include <stdio.h> // esse é insertion sort

int Q5(char vetor[], int tamanho){ //soares 6
    int trocas = 0, j , i;
    char chave;
    for (i = 1; i < tamanho; i++)
    {
        chave = vetor[i]; // pega o caractere na posição i
        j = i-1; // pega o caractere anterior ao caractere na posição i
        printf("%d, %d, %c\n", i, j, chave); // 1, 0, o
        while (j >= 0 && vetor[j] > chave) // enquanto j for maior ou igual a 0 e o caractere na posição j for maior que a chave -> vetor[j](s) > chave(o)
        {
            printf("%s\n", vetor);
            vetor[j+1] = vetor[j]; // o caractere na posição j+1 recebe o caractere na posição j -> organizando de forma crescente
            printf("%s\n", vetor);
            j--; trocas++; // decrementa j e incrementa o contador de trocas
        }
        vetor[j+1]= chave; // o caractere na posição j+1 recebe a chave
        printf("%s\n\n", vetor);
    }
    return trocas; // retorna a quantidade de trocas feitas
}

int main(){
    char nc[] = "luana";
    int res = Q5(nc, 5); // last nome, qtd de letras last nome;
    printf("resposta = %d\n\n", res);
    return 0;
}