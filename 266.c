/* Faça um programa que leia um valor em minutos e converta para segundos. */

#include <stdio.h>

int main() {
    int minutos;

    printf("Digite um valor em minutos: ");
    scanf("%d", &minutos);

    printf("Você informou %d minutos e em segundos é %d segundos.", minutos, minutos * 60);
}