/* Faça um programa para ler 40 números inteiros, calcular a média dos
mesmos e exibir todos os números que estiverem acima da média. */

#include <stdio.h>

int main() {
    float numeros[5];
    float numero;
    float total = 0.0;
    float media = 0.0;

    for (int i = 0; i < 5; i++) {
        printf("Informe um numero: ");
        scanf("%f", &numeros[i]);
        total += numeros[i];
    }

    media = total / 5.0;

    for (int i = 0; i < 5; i++) {
        if (numeros[i] > media) {
            printf("O numero %.1f eh maior do que a media, media: %.1f\n", numeros[i], media);
        }
    }
}