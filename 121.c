/* Escreva um programa que leia um número inteiro e verifique se ele é par ou ímpar. */

#include <stdio.h>

int main() {
    int numero;

    printf("Informe um número: ");
    scanf("%d", &numero);

    switch (numero % 2 == 0) {
        case 1:
            printf("É par");
            break;
        case 0:
            printf("É impar");
            break;
        default:
            printf("Oxe, agora deu o caralho mesmo viu");
    }
}