#include <stdio.h>

int main() {
    int i, numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    for (i = 1; i <= numero; i++) {
        if (i % 2 == 0) {
            printf("%d ", i * i);
        }
    }
}