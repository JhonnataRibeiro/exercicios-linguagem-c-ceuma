/* Dada uma matriz de 5x5 elementos float. Faça um programa que:
a) a inicialização de todos os elementos da matriz seja com valores
informados pelo usuário;
b) calcule e mostre na tela a soma de todos os seus elementos, bem como
a média desses elementos;
c) imprima os valores da diagonal principal e a soma desses valores. */

#include <stdio.h>

int main() {
    float matriz[5][5] = {{1.0, 1.0, 1.0, 1.0, 1.0}, {2.0, 2.0, 2.0, 2.0, 2.0}, {3.0, 3.0, 3.0, 3.0, 3.0}, {4.0, 4.0, 4.0, 4.0, 4.0}, {5.0, 5.0, 5.0, 5.0, 5.0}};
    float media = 0.0;

    printf("Exibindo a MATRIZ:\n");

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%.2f ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            media += matriz[i][j];
        }
    }

    printf("A soma dos elementos da matriz eh: %.2f\n", media);

    media = media / 25.0;

    printf("A media dos elementos da matriz eh: %.2f\n\n", media);

    printf("Valores dos elementos na diagonal da matriz:\n");

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (j == i) {
                printf("%.2f ", matriz[i][j]);
            } else {
                printf("     ");
            }
        }
        printf("\n");
    }
}