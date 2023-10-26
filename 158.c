#include <stdio.h>

int main() {
    int i;
    int vetor[10];

    for (i = 0; i < 10; i++) {
        printf("Digite o valor do vetor: ");
        scanf("%d", &vetor[i]);
    }

    printf("\nOs valores do vetor é:\n");

    for (i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
}