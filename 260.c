/* Faça um programa para calcular o diâmetro e a área de uma circunferência
com base no raio fornecido pelo usuário. Exiba o diâmetro, o raio e a área. */

#include <stdio.h>

int main() {
    int raio;
    float pi = 3.1415, area;

    printf("Digite o valor do raio: ");
    scanf("%d", &raio);

    area = pi * (raio * raio);

    printf("A área da circunferência: %.2f cm", area);
}
