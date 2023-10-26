#include <stdio.h>

int main() {
    int i;
    int vetor[10];

    for (i = 0; i < 10; i++) {
        printf("Digite um valor: ");
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < 10; i++) {
        vetor[i] = vetor[i] * 3;
    }

    printf("\n");

    for (i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
}