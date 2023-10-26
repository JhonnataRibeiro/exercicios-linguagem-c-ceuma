#include <stdio.h>

void recursivo(int numero) {
    if (numero == 0) {
        printf("%d ", numero);
    } else {
        recursivo(numero - 1);
        printf("%d ", numero);
    }
}

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    recursivo(numero);
}