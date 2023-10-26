#include <stdio.h>

int main() {
    int valor;

    printf("Digite um valor maior que zero: ");
    scanf("%d", &valor);

    while (valor <= 0) {
        printf("Valor inválido. Digite um valor maior que zero: ");
        scanf("%d", &valor);
    }

    printf("Fim do programa.");
}