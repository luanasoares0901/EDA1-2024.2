#include <stdio.h>

int Q3(char *nome, int tamanho, int matricula){ //nome="  aaabeeiilnoorrssu" tamanho=19 matricula=202016720
    int inicio = 0, meio, fim = tamanho -1, pcont = 0;
    char chave = nome[matricula%10]; //chave = nome[0] = ' '  
    while(inicio<=fim){
        pcont++;
        meio = (inicio+fim)/2; //meio = 9
        if(chave == nome[meio]) break; //se a chave for igual ao nome na posição meio, ele sai do loop -> ' ' =/ nome[9] = 'i'
        else if (chave < nome[meio]) fim = meio-1; // se a chave for menor que o nome na posição meio, ele diminui o fim -> ' ' < nome[9] = 'i' então agora o fim = 8
        else inicio = meio + 1; // se a chave for maior que o nome na posição meio, ele aumenta o inicio -> ' ' > nome[9] = 'i' então agora o inicio = 10
    }
    return pcont; // retorna a quantidade de vezes que o loop foi executado = 3
}
/*
Iteração 1: inicio = 0, fim = 18, meio = 9, pcont = 1 -> vai dimininuir o fim pois ' ' < nome[9] = 'i']
Iteração 2: inicio = 0, fim = 8, meio = 4, pcont = 2 -> vai dimininuir o fim pois ' ' < nome[4] = 'b']
Iteração 3: inicio = 0, fim = 3, meio = 1, pcont = 3 -> vai dimininuir o fim pois ' ' < nome[1] = 'a'] -> agora o fim = 0
*/





// qual resultado passando os parametros abaixo?
// letras do seu nome completo em ordem alfabetica e com os espaços no inicio ex. "thales henrique euflauzino dos santos" -> "    aaadeeefhhiillnnnooqrsssstttuuuz"
int main(){
    int res = Q3("    aaadeeefhhiillnnnooqrsssstttuuuz", 37, 222006178); // letras do nome em ordem alfabetica com espacos no inicio, n de chars do nome, matricula;
    printf("\n\nresultado = %d\n\n", res);
    // "    aaadeeefhhiillnnnooqrsssstttuuuz"
}