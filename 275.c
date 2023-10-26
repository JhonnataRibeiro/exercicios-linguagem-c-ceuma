/* Escreva um programa que calcule a soma dos primeiros 30 números ímpares. */

#include <stdio.h>

int main() {
    int number = 1, sum = 0;

    for (; number <= 30; number += 2) {
        sum += number;
    }

    printf("O somatorio dos numeros impares eh %d", sum);
}