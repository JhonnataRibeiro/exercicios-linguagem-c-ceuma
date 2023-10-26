#include <stdio.h>
#include <time.h>

int main() {
    int i, j, somatorio;
    int matriz[5][7];

    srand(time(NULL));

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 7; j++) {
            matriz[i][j] = rand() % 101;
        }
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 7; j++) {
            somatorio += matriz[i][j];
        }
    }

    printf("A soma da matriz é %d", somatorio);
}