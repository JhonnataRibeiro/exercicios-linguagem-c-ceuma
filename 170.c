#include <stdio.h>
#include <time.h>

int main() {
    int i;
    int vetor1[25], vetor2[25], vetor3[25];

    srand(time(NULL));

    for (i = 0; i < 25; i++) {
        vetor1[i] = rand() % 11;
        vetor2[i] = rand() & 11;
    }

    for (i = 0; i < 25; i++) {
        vetor3[i] = vetor1[i] + vetor2[i];
    }

    printf("\nO vetor1:\n");
    for (i = 0; i < 25; i++) {
        printf("%d ", vetor1[i]);
    }

    printf("\n\nO vetor2:\n");
    for (i = 0; i < 25; i++) {
        printf("%d ", vetor2[i]);
    }

    printf("\n\nO vetor3:\n");
    for (i = 0; i < 25; i++) {
        printf("%d ", vetor3[i]);
    }
}