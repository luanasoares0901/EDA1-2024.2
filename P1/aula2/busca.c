#include <stdio.h>
// Função para buscar um caractere no vetor
int Busca(char vet[],int tam, char target){
    for(int i=0;i<tam;i++){
        if(vet[i] == target){
            return i;
        }
    }
    //Retorna -1 se não encontrar o caractere
    return -1;
}