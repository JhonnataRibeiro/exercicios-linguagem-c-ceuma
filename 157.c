#include <stdio.h>

int main() {
    int i;
    int vetor[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    char vogais[5] = {'a', 'e', 'i', 'o', 'u'};

    for (i = 0; i < 9; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\n");

    for (i = 0; i < 5; i++) {
        printf("%c ", vogais[i]);
    }
}