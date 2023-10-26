#include <stdio.h>

int main() {
    int i;
    int vetor[10], vetor2[10];

    for (i = 0; i < 10; i++) {
        printf("Digite um valor: ");
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < 10; i++) {
        vetor2[i] = vetor[i] * vetor[i];
    }

    printf("\nO vetor com os números informado:\n");

    for (i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\n\nO vetor com o quadrado dos números:\n");

    for (i = 0; i < 10; i++) {
        printf("%d ", vetor2[i]);
    }
}