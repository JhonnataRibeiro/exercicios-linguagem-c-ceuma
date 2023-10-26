/* Faça um programa que leia uma temperatura em graus Celsius e transformála em graus Fahrenheit */

#include <stdio.h>

int main() {
    int celsius;
    float fahrenheit;

    printf("Informe uma temperatura em celsius: ");
    scanf("%d", &celsius);

    fahrenheit = (celsius * 9 / 5.0) + 32;

    printf("%.1f", fahrenheit);
}