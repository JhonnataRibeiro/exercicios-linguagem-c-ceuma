#include <stdio.h>

int main() {
    int i, j;
    int matriz1[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    char matriz2[3][4] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l'};

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matriz1[i][j]);
        }
        printf("\n");
    }
}