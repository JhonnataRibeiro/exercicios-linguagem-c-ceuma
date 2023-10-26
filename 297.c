/* Escreva um programa que tenha uma matriz de 12 elementos
quaisquer informados pelo usuário e imprima quantos
elementos são pares e quantos são ímpares, bem como a soma
total de cada um. */

#include <stdio.h>

int main() {
    int matriz[4][3];
    int pares = 0, impares = 0, totalPar = 0, totalImpar = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite um numero: ");
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] % 2 == 0) {
                pares++;
                totalPar += matriz[i][j];
            } else {
                impares++;
                totalImpar += matriz[i][j];
            }
        }
    }

    printf("\nResumo:\n");
    printf("A quantidade de pares eh %d\n", pares);
    printf("A quantidade de impares eh %d\n", impares);
    printf("O total de pares eh %d\n", totalPar);
    printf("O total de impares eh %d", totalImpar);
}