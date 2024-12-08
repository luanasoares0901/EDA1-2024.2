#include <stdio.h>
//unica diferença é que o do while executa pelo menos uma vez

int main(){
    int i = 0;
    do{
        printf("i = %d\n", i);
        i++;
    }while(i < 10);
    return 0;
}