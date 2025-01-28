/*
Cálculo de esforção do método QuickSort

Abaixo é apresentado o código do método de ordenação QuickSort. Adapte as funções quicksort e separa abaixo para:
1- Ordenar um vetor de carcteres;
2- Extrair quantas trocas de elementos do vetor são realizadas até que a ordenação termine.

############ CÓDIGOS ####################
int separa (int v[], int p, int r) {
    int c = v[r]; // pivô
    int t, j = p;
    for (int k = p; k < r; ++k)
        if (v[k] <= c) {
            t = v[j], v[j] = v[k], v[k] = t;
            ++j;
        }
    t = v[j], v[j] = v[r], v[r] = t;
    return j;
}
void quicksort (int v[], int p, int r){
   if (p < r) {
      int j = separa (v, p, r);
      quicksort (v, p, j-1);
      quicksort (v, j+1, r);
    } 
}
#########################################

Você está encarregado de adaptar as funções  quicksort e separa. 

Exemplo de aplicação para a ordenação de um vetor de char:

int main() {
    char v[1024];
    long int qt_trocas = 0;
    int n;
    if (fgets(v, sizeof(v), stdin) != NULL) {
        v[strcspn(v, "\n")] = '\0'; // Remove a nova linha, se existir
    }
    n = strlen(v);  // Obtém o tamanho do vetor de caracteres
    printf("Antes : %s\n", v);
    quicksort(v, 0, n - 1, &qt_trocas);
    printf("Depois: %s\n", v);
    printf("Trocas: %ld\n", qt_trocas);
    return 0;
}
Em suma, sua tarefa é postar os códigos das funções int separa e void quicksort  (nesta ordem) adaptados para o que se pede acima. Uma vez que você concluir esta função, as saídas deverão ser geradas conforme os exemplos apresentados.

For example:

Input	Result
uhjcba
Antes : uhjcba
Depois: abchju
Trocas: 9
estrutura
Antes : estrutura
Depois: aerrsttuu
Trocas: 13

*/

#include <stdio.h>
#include <string.h>

int separa (char v[], int p, int r, long int *qt_trocas) {
    char c = v[r]; // pivô
    char t;
    int j = p;
    for (int k = p; k < r; ++k)
        if (v[k] <= c) {
            t = v[j], v[j] = v[k], v[k] = t;
            ++j;
            *qt_trocas += 1;
        }
    t = v[j], v[j] = v[r], v[r] = t;
    *qt_trocas += 1;
    return j;
}

void quicksort (char v[], int p, int r, long int *qt_trocas){
   if (p < r) {
      int j = separa (v, p, r, qt_trocas);
      quicksort (v, p, j-1, qt_trocas);
      quicksort (v, j+1, r, qt_trocas);
    }
}

int main() {
    char v[1024];
    long int qt_trocas = 0;
    int n;
    if (fgets(v, sizeof(v), stdin) != NULL) {
        v[strcspn(v, "\n")] = '\0'; // Remove a nova linha, se existir
    }
    n = strlen(v);  // Obtém o tamanho do vetor de caracteres
    printf("Antes : %s\n", v);
    quicksort(v, 0, n - 1, &qt_trocas);
    printf("Depois: %s\n", v);
    printf("Trocas: %ld\n", qt_trocas);
    return 0;
}