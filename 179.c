#include <stdio.h>
#include <stdio.h>

int main() {
    int l, c;
    int matriz1[3][3]; 
    int matriz2[3][3];
    int matriz3[3][3];

    srand(time(NULL));

    for (l = 0; l < 3; l++) {
        for (c = 0; c < 3; c++) {
            matriz1[l][c] = rand() % 3;
            matriz2[l][c] = rand() % 3;
            matriz3[l][c] = matriz1[l][c] + matriz2[l][c];
        }
    }

    printf("\nMatriz1:\n");
    for (l = 0; l < 3; l++) {
        for (c = 0; c < 3; c++) {
            printf("%d ", matriz1[l][c]);
        }
        printf("\n");
    }

    printf("\nMatriz2:\n");
    for (l = 0; l < 3; l++) {
        for (c = 0; c < 3; c++) {
            printf("%d ", matriz2[l][c]);
        }
        printf("\n");
    }

    printf("\nMatriz3:\n");
    for (l = 0; l < 3; l++) {
        for (c = 0; c < 3; c++) {
            printf("%d ", matriz3[l][c]);
        }
        printf("\n");
    }
}