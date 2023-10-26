/* Construa um programa que leia dois números e exiba-os em ordem crescente. */

#include <stdio.h>

int main() {
    int numero1, numero2;

    printf("Informe o valor de num1: ");
    scanf("%d", &numero1);
    printf("Informe o valor de num2: ");
    scanf("%d", &numero2);

    if (numero1 > numero2) {
        printf("%d %d", numero2, numero1);
    } else {
        printf("%d %d", numero1, numero2);
    }
}