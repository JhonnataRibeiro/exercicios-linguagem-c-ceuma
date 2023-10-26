/* Faça um programa que leia um valor em minutos e converta para segundos. */

#include <stdio.h>

int main() {
    int minutos, segundos;

    printf("Informe um valor me minutos para ser transformado em segundos: ");
    scanf("%d", &minutos);

    segundos = minutos * 60;

    printf("Segundos: %d segundos", segundos);
}