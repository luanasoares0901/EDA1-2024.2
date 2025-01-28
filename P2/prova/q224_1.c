char letra(int P)
{
    P = P % 26; // 20%26 = 20 é o mesmo que 20 mod 26
    return 'a' + P; // aqui ele vai pegar a letra do alfabeto que corresponde ao valor de P + 'a' = 20 + 'a' = 'u'
}
int Q2(char *nc, int matricula){ //luanaribeirosoares 202016720
    int p = 0, posic = -1;
    char chave = letra(matricula%100); //20 -> chama a função letra e passa 20 como parametro, agora vamos para a função 
    printf("%d\n", matricula%100); // 20
    while(nc[p] != '\0'){ //vai percorrer o nome completo
        if(chave == nc[p]) // se a chave for igual a letra na posição p do nome completo, ou seja, se a letra for 'u' ele retorna a posição
            posic = p; // no caso, o u está na posição 1
        p++;
    }
    return posic; // retorna a posição do 'u' no nome completo = 1
}

int main(){
    int res = Q2("luana ribeiro soares", 202016720);
    printf("resposta = %d\n\n", res); 
}