#include <stdio.h>

void recursivo(int numero) {
    if (numero == 0) {
        printf("%d ", numero);
    } else {
        printf("%d ", numero);
        recursivo(numero - 1);
    }
}

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    recursivo(numero);
}