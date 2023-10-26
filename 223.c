#include <stdio.h>
#include <time.h>

int tamanho = 5;
int linha = 0;

void imprimirMatriz(int matriz[][5]) {
    int i, j;
    for (i = 0; i < tamanho; i++) {
        for (j = 0; j < tamanho; j++) {
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int somarLinhas(int matriz[][5], int linha) {
    int colunas, soma = 0;

    for (colunas = 0; colunas < tamanho; colunas++) {
        soma += matriz[linha][colunas];
    }

    return soma;
}

int main() {
    int matriz[5][5];
    int i, j;

    srand(time(NULL));

    for (i = 0; i < tamanho; i++) {
        for (j = 0; j < tamanho; j++) {
            matriz[i][j] = rand() % 5;
        }
    }

    imprimirMatriz(matriz);

    printf("\nA soma da linha %d é: %d", linha, somarLinhas(matriz, linha));
}