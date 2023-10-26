// Escreva um programa que calcule a soma dos primeiros 30 números pares.

#include <stdio.h>

int main() {
    int number = 2, sum = 0;

    do {
        sum += number;
        number += 2;
    } while (number <= 4);

    printf("O somatorio dos numeros pares ate 30 eh = %d", sum);
}

