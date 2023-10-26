#include <stdio.h>
#include <time.h>

int main() {
    int i, j;
    int matriz[3][3];

    srand(time(NULL));

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            matriz[i][j] = rand() % 11;
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}