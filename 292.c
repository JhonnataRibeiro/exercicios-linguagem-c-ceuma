/* Dada uma matriz de 4x5 elementos inteiros. Faça um programa que:
a) a inicialização de todos os elementos da matriz seja com valores
informados pelo usuário;
b) calcule e mostre na tela a soma de cada linha;
c) calcule e mostre na tela a soma de cada coluna; */

#include <stdio.h>

int main() {
    int matriz[4][5];
    int soma = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            printf("Na linha %d da coluna %d, digite um numero inteiro: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nVisualizando a Matriz:\n");

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nSoma de cada linha:\n");

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
           soma += matriz[i][j];
        }
        printf("A soma da %d linha eh: %d\n", i + 1, soma);
        soma = 0;
    }

    printf("\nSoma de cada coluna:\n");

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            soma += matriz[j][i];
        }
        printf("A soma da %d coluna eh: %d\n", i + 1, soma);
        soma = 0;
    }
}