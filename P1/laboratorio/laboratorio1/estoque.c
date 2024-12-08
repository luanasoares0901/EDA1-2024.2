#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;  //Código do produto
    int quantidade;  //Quantitativo do produto em estoque (QMP)
    float preco;  //Preço unitário do produto.
} TProduto;

typedef struct {
    int qtdeProdutos;  //Quantidade máxima de diferentes produtos
    TProduto *produtos; //Vetor contendo os detalhes de cada produto
} TEstoque;

void alocaEstoque(TEstoque *pEstoque){
    scanf("%d", &pEstoque->qtdeProdutos);
    pEstoque->produtos = (TProduto *) malloc(pEstoque->qtdeProdutos * sizeof(TProduto));
    if (pEstoque->produtos == NULL){
        printf("Erro de alocação de memória\n");
        exit(1);
    }
}

void incluirProdutos(TEstoque *pEstoque){
    for (int i = 0; i < pEstoque->qtdeProdutos; i++){
        scanf("%d", &pEstoque->produtos[i].id);
        scanf("%d", &pEstoque->produtos[i].quantidade);
        scanf("%f", &pEstoque->produtos[i].preco);
    }
}

void listarProdutos(TEstoque *pEstoque){
    for (int i = 0; i < pEstoque->qtdeProdutos; i++){
        printf("ID: %d, Qtd: %d, Preço: %.2f \n", pEstoque->produtos[i].id, pEstoque->produtos[i].quantidade, pEstoque->produtos[i].preco);
    };    
}

void desalocaEstoque(TEstoque *pEstoque){
    free(pEstoque->produtos);
    pEstoque->produtos = NULL;
    pEstoque->qtdeProdutos = 0;
};    



int main() {
TEstoque Estoque;
alocaEstoque(&Estoque);
incluirProdutos(&Estoque); 
listarProdutos(&Estoque);
desalocaEstoque(&Estoque);
return 0;

}