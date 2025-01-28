#include <stdio.h>
#include <stdlib.h>

int Q1(int valor){ //202016720
    int *ptr, *pnumeros, pn = valor%10 , pp, psoma=0; //pn=0 
    if(pn<2) pn = 5 - pn; //pn=5
    pnumeros = (int*)malloc(pn*sizeof(int)); //pnumeros = 5
    ptr = pnumeros;
    for(pp=0; pp < pn; pp++) {
        *ptr = valor%10; // *ptr = 0
        valor = valor/10; // valor = 20201672
        ptr++; // ptr = 1
    }
    for(pp=0; pp<pn;pp++){
        if((pnumeros[pp]%2) == 1)
            psoma = psoma+pnumeros[pp]; //vai somar os numeros impares = 8
    }
    return psoma; 
}

int main(){
    int matricula = Q1(202016720);
    printf("resposta = %d\n", matricula); 
}