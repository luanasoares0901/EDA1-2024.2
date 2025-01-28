#include <stdio.h>

int Q4(char *vet, int count){ //luana 5
    int pcont = 0;
    char aux;
    for (int i = 0; i < count; i++) // vai percorrer o vetor luana
        for (int j = i+1; j < count; j++) // vai percorrer o vetor luana a partir da posição i+1 então vai pegar o próximo caractere
        {
            if (vet[i] < vet[j])//se o caractere na posição i for menor que o caractere na posição j, ele vai trocar os caracteres de posição fazendo BUBBLE SORT
            {
                aux = vet[i]; vet[i] = vet[j]; vet[j] = aux; //troca os caracteres de posição
                pcont++; //conta quantas trocas foram feitas
            }
        }
    return pcont;
}
/*
Iteração 1: luana -> ulana -> pcont = 1
Iteração 2: ulana -> ulana -> pcont = 1
Iteração 3: ulana -> ulnaa -> pcont = 2
Iteração 4: ulnaa -> unlaa -> pcont = 3
*/

int main(){
    char nc[] = "luana";
    int res = Q4(nc, 5); // primeiro nome, qtd de letras 1o nome;
    printf("\n\nresposta = %d\n\nnc = %s\n\n", res, nc);
}