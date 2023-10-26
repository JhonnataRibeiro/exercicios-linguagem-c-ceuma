/* Escreva um programa que solicite ao usuário digitar um número inteiro
positivo e depois calcule o somatório de todos os números pares no
intervalo de 0 até o número digitado. */

#include <stdio.h>

int main() {
    int number, sum, index;

    printf("Informe um numero positivo: ");
    scanf("%d", &number);

    for (; number < 0;) {
        printf("Informe um numero positivo: ");
        scanf("%d", &number);
    }

    for (index = 2; index <= number; index = index + 2) {
        sum += index;
    }

    printf("\nO somatorio do intervalo e %d", sum);
}