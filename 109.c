/* Construa um programa que leia dois números e exiba-os em ordem
crescente. */

#include <stdio.h>

int main() {
    int numero1, numero2;

    printf("Informe o valor do numero1: ");
    scanf("%d", &numero1);
    printf("Informe o valor do numero2: ");
    scanf("%d", &numero2);

    (numero1 > numero2) ? printf("%d %d", numero2, numero1) : printf("%d %d", numero1, numero2);
}