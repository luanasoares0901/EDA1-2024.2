/*
Programa para verificar o balanceamento de expressões aritméticas. Função Empilha.

Esta atividade visa desenvolver habilidades em estruturas de dados, especificamente em pilhas, e sua aplicação em problemas práticos. 
A tarefa é completar a implementação de uma função crucial para um programa que identifica se os delimitadores em expressões aritméticas, 
parênteses “()”, chaves “{}” e colchetes “[]”, estão corretamente balanceados.
O programa fornecido já possui a maior parte da lógica necessária para verificar o balanceamento de delimitadores em uma expressão.
No entanto, ele está incompleto porque falta a implementação da função Empilha. Esta função é responsável por empilhar
um delimitador à pilha cada vez que um delimitador aberto é encontrado em uma expressão aritmética fornecida pelo usuário na main.c. 

A pilha utilizada pelo programa está implementada em uma lista simplesmente encadeada cujo nó está definido abaixo. 
O topo da pilha está na cabeça desta lista:

// Tipo pilha
typedef struct no{
char caracter;
struct no *proximo;
} No;

O analista de testes da equipe montou um programa (função main() abaixo) para testar 
expressões aritméticas fornecidas pelo usuário.

// Função Main
int main(){
char exp[50];
int retorno;
scanf("%49[^\n]", exp);
retorno = identifica_formacao(exp);
if (retorno == 1)
printf("BALANCEADA\n");
else
printf("DESBALANCEADA\n");
return 0;
}
if (pilha == NULL)
	return 1;
else
	return 0;
}
if (pilha == NULL)
	return 1;
else
	return 0;
}

Você está encarregado de desenvolver a função Empilha conforme abaixo.

No *Empilha(No *pilha, char x){
SEU CÓDIGO VAI AQUI!
}

Em suma, sua tarefa é postar o código da função No *Empilha(No *pilha, char x) . 
As outras funções do programa estão prontas e uma vez que você concluir esta função, 
o programa de testes será executado corretamente e gerará saídas conforme os exemplos apresentados.

*/

#include <stdio.h>
#include <stdlib.h>

// Tipo pilha
typedef struct no{
char caracter;
struct no *proximo;
} No;

// Função Empilha
No *Empilha(No *pilha, char x){
No *novo;
novo = (No *) malloc(sizeof(No));
novo->caracter = x;
novo->proximo = pilha;
return novo;
}

// Função Desempilha
No *Desempilha(No *pilha){
No *aux;
aux = pilha;
pilha = pilha->proximo;
free(aux);
return pilha;
}

// Função identifica_formacao
//Função para verificar o casamento de padrão de aberturas e fechamentos de parênteses ("()"), colchetes ("[]") e chaves ("{}").
// Assinatura: 
//int forma_par(char f, char d);
//Retorno
// 0 - Caso f não seja o fechamento de d
// 1 - Caso f seja o fechamento de d
/*Exemplo de casos que serão testados:
(a + b) * [8 + (c - d)] = BALANCEADA
((a + b) = DESBALANCEADA
(a * {b + c}) / [d - e] = BALANCEADA
*/
int identifica_formacao(char x[]){
No *pilha = NULL;
int i = 0;
while (x[i] != '\0'){
if (x[i] == '(' || x[i] == '[' || x[i] == '{')
pilha = Empilha(pilha, x[i]);
else if (x[i] == ')'){
if (pilha == NULL || pilha->caracter != '(')
return 0;
pilha = Desempilha(pilha);
}
else if (x[i] == ']'){
if (pilha == NULL || pilha->caracter != '[')
return 0;
pilha = Desempilha(pilha);
}
else if (x[i] == '}'){
if (pilha == NULL || pilha->caracter != '{')
return 0;
pilha = Desempilha(pilha);
}
i++;
}
if (pilha == NULL)
return 1;
else
return 0;
}

int main(){
char exp[50];
int retorno;
scanf("%49[^\n]", exp);
retorno = identifica_formacao(exp);
if (retorno == 1)
printf("BALANCEADA\n");
else
printf("DESBALANCEADA\n");
return 0;
}
