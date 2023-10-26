#include <stdio.h>
#include <time.h>

int tamanho = 5;
int linha = 0;
int coluna = 0;

void imprimirMatriz(int matriz[][5]) {
    int linhas, colunas;
    for (linhas = 0; linhas < tamanho; linhas++) {
        for (colunas = 0; colunas < tamanho; colunas++) {
            printf("%2d ", matriz[linhas][colunas]);
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


int somarColunas(int matriz[][5], int coluna) {
    int linhas, soma = 0;

    for (linhas = 0; linhas < tamanho; linhas++) {
        soma += matriz[linhas][coluna];
    }
    return soma;
}


int main() {
    int matriz[5][5];
    int linhas, colunas;

    srand(time(NULL));

    for (linhas = 0; linhas < tamanho; linhas++) {
        for (colunas = 0; colunas < tamanho; colunas++) {
            matriz[linhas][colunas] = rand() % 5;
        }
    }

    imprimirMatriz(matriz);

    printf("\nA soma da linha %d é: %d", linha, somarLinhas(matriz, linha));
    printf("\nA soma da coluna %d é: %d", coluna, somarColunas(matriz, coluna));
}