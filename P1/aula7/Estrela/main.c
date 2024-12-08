#include <stdio.h>
#include <stdlib.h>

void box(char **Tela, int x, int y, int r, char line_symbol) {
    int minX = x - r;
    int maxX = x + r;
    int minY = y - r;
    int maxY = y + r;

    // Desenha apenas as bordas do quadrado
    for (int i = minY; i <= maxY; i++) {
        for (int j = minX; j <= maxX; j++) {
            if ((i == minY || i == maxY || j == minX || j == maxX) && 
                (i >= 0 && i < 1000 && j >= 0 && j < 1000)) { // Verificar limites da tela
                Tela[i][j] = line_symbol;
            }
        }
    }
}

void mostra_tela(char **Tela, int Dim) {
    for (int i = 0; i < Dim; i++) {
        for (int j = 0; j < Dim; j++) {
            printf("%c", Tela[i][j]);
        }
        printf("\n");
    }
    getchar();
}

void estrela(char **Tela, int Dim, int x, int y, int r) {
    if(r > 0) {
        estrela(Tela, Dim, x-r,y+r,r/2);
        estrela(Tela, Dim, x+r,y+r,r/2);
        estrela(Tela, Dim, x-r,y-r,r/2);
        estrela(Tela, Dim, x+r,y-r,r/2);
        box(Tela,x,y,r,'#');
        mostra_tela(Tela, Dim);

    }
}

int main() {
    // Alocar a matriz Tela
    int Dim = 100;
    char **Tela = (char **)malloc(Dim * sizeof(char *));
    for (int i = 0; i < Dim; i++) {
        Tela[i] = (char *)malloc(Dim * sizeof(char));
        for (int j = 0; j < Dim; j++) {
            Tela[i][j] = ' ';
        }
    }

    // Desenhar uma estrela na tela
    estrela(Tela, Dim, 50, 50, 10);

    // Desenhar um quadrado na tela
//    box(Tela, 50, 50, 5, '#'); // Quadrado centrado em (500,500) com raio 100

    // Mostrar a tela
    mostra_tela(Tela, Dim);

    // Liberar memória
    for (int i = 0; i < Dim; i++) {
        free(Tela[i]);
    }
    free(Tela);

    return 0;
}