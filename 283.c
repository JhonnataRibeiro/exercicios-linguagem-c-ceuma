#include <stdio.h>

int main() {
    int matriz[9] = {1, 2, 3, 4, 5, 6, 7, 8};

    printf("%d", matriz[1]);

    matriz[1] = 12;

    printf("%d", matriz[1]);
}