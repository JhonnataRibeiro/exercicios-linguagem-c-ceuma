#include <stdio.h>

void recursivo(int numero, int intervalo) {
    if (intervalo == numero) {
        printf("%d ", intervalo);
    } else {
        printf("%d ", intervalo);
        recursivo(numero, intervalo + 1);
    }
}

int main() {
    int numero;
    int intervalo = 0;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    recursivo(numero, intervalo);
}