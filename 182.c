#include <stdio.h>
#include <time.h>

int main() {
    int tamanho = 5;
    int l, c;
    int matriz[tamanho][tamanho];

    srand(time(NULL));

    for (l = 0; l < tamanho; l++) {
        for (c = 0; c < tamanho; c++) {
            matriz[l][c] = 10 + rand() % 51;
            printf("%3d ", matriz[l][c]);
        }
        printf("\n");
    }

    printf("\n");

    c = tamanho - 1;
    for (l = 0; l < tamanho; l++) {
        printf("%d ", matriz[l][c]);
        c--;
    }





    /* for (l = 0; l < tamanho; l++) {
        for (c = 0; c < tamanho; c++) {
            if (l == c) {
                printf("%d ", matriz[l][c]);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    } */

}