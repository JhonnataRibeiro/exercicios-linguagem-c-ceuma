#include <stdio.h>

int main() {
    int matriz[4][5] = {{1, 1, 1, 1, 1}, {2, 2, 2, 2, 2}, {3, 3, 3, 3, 3}, {4, 4, 4, 4, 4}};
    int soma = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nSoma de cada LINHA:\n");

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
           soma += matriz[i][j];
        }
        printf("A soma da %d linha eh: %d\n", i + 1, soma);
        soma = 0;
    }

    printf("\nSoma de cada COLUNA:\n");
    
    for (int linha = 0; linha < 4; linha++) {
        for (int coluna = 0; coluna < 4; coluna++) {
            soma += matriz[coluna][linha];
        }
        printf("A soma da %d coluna eh: %d\n", linha + 1, soma);
        soma = 0;
    }
}