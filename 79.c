#include <stdio.h>

int main() {
    int numero;

    printf("Informe um numero: ");
    scanf("%d", &numero);

    (numero >= 0) ? printf("Numero postivo\n") : printf("Numero negativo\n");
}