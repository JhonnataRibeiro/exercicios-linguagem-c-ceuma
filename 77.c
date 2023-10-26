#include <stdio.h>

int main() {
    int numero;

    printf("Informe um numero: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("O numero %d e divisivel por 2\n", numero);
    } else {
        printf("O numero %d nao e divisivel por 2\n", numero);
    }
    if (numero % 3 == 0) {
        printf("O numero %d e divisivel por 3\n", numero);
    } else {
        printf("O numero %d nao e divisivel por 3\n", numero);
    }
    if (numero % 5 == 0) {
        printf("O numero %d e divisivel por 5\n", numero);
    } else {
        printf("O numero %d nao e divisivel por 5\n", numero);
    }
}