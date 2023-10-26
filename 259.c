/* Faça um programa que leia dois números quaisquer e realize as quatro
operações básicas da matemática entre eles. */

#include <stdio.h>

int main() {
    int numero1, numero2;

    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);
    printf("Digite o segundo número: ");
    scanf("%d", &numero2);

    float numerofake = numero2;

    printf("%d + %d = %d\n", numero1, numero2, numero1 + numero2);
    printf("%d - %d = %d\n", numero1, numero2, numero1 - numero2);
    printf("%d * %d = %d\n", numero1, numero2, numero1 * numero2);
    printf("%d / %d = %f", numero1, numero2, numero1 / numerofake);
}