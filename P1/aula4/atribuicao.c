#include <stdio.h>

int main() {
    int numero, *ptr;
    numero = 79417;
    ptr = &numero;
    printf("numero: %d\n",numero);
    *ptr = 90560;
    printf("numero agora: %d",numero);

    return 0;
}
