#include <stdio.h>

int main() {
    int i, j;
    int matriz1[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int matriz2[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int matriz3[3][3];

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matriz3[i][j]);
        }
        printf("\n");
    }
}