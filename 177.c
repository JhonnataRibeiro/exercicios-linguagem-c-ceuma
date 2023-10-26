#include <stdio.h>
#include <time.h>

int main() {
    int i, j, soma = 0;
    int matriz[5][10];
    int linhas[5];
    int colunas[10];

    srand(time(NULL));

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 10; j++) {
            matriz[i][j] = rand() % 3;
        }
    }

    for (i = 0; i < 5; i++) {
        soma = 0;
        for (j = 0; j < 10; j++) {
            soma += matriz[i][j];
        }
        linhas[i] = soma;
    }

    for (j = 0; j < 10; j++) {
        soma = 0;
        for (i = 0; i < 5; i++) {
            soma += matriz[i][j];
        }
        colunas[j] = soma;
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", linhas[i]);
    }

    printf("\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", colunas[i]);
    }
}