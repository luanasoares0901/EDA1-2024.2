#include <stdio.h>

int main(){
    //Matriz [Turmas][Alunos][Notas]
    float Notas[5][80][3],soma, media;
    for(int t=0; t<5; t++){
        printf("Digite as notas dos alunos da turma %d: \n", t+1);
        for (int a=0;a<80;a++){
            printf("Digite as notas do aluno %d: \n",a+1);
            for (int n=0;n<3;n++){
                printf("Digite a nota %d: ",n+1);
                scanf("%f",&Notas[t][a][n]);
            }
        }
    }

    return 0;
}