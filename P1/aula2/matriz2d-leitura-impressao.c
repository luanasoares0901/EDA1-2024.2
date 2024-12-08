#include <stdio.h>

int main(){
    float notas[80][3], soma;
    printf("Digite as notas dos alunos: \n");
    for (int i=0; i<80; i++){
        printf("Digite as notas do aluno %d: ", i+1);
        for (int j=0; j<3; j++){
            scanf("%f", &notas[i][j]);
        }
    }
    for (int i=0; i<80; i++){
        soma = 0;
        for (int j=0; j<3; j++){
            soma += notas[i][j];
        }
        printf("A média do aluno %d é %.2f\n", i+1, soma/3);
    }




    return 0;
}