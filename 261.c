/* Faça um programa para calcular a expressão, abaixo, e depois exiba o
resultado. a x b x c ** 2 / 2 */

#include <stdio.h>

int main() {
    int a, b, c;
    float resultado;

    printf("Informe o valor de A: ");
    scanf("%d", &a);
    printf("Informe o valor de B: ");
    scanf("%d", &b);
    printf("Informe o valor de C: ");
    scanf("%d", &c);

    resultado = ((a * b * c) * (a * b * c)) / 2;

    printf("O resultado da operação é: %.2f", resultado);
}