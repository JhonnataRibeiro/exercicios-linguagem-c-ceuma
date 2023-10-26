/* Escreva um programa que calcule a soma dos primeiros 30 números ímpares. */

#include <stdio.h>

int main() {
    int somatorio = 0, indice;

    for (indice = 0; indice <= 4; indice++) {
        if (indice % 2 != 0) {
            somatorio += indice;
        }
    }

    printf("A soma dos numeros impares no intervalo eh %d", somatorio);
}