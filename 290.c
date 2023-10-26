/*  Dado um conjunto de 30 valores reais faça um algoritmo que exiba os valores
positivos e calcule e exiba a média dos valores negativos. Caso não haja nenhum
valor positivo o programa deve sinalizar isto. */

#include <stdio.h>

int main() {
    float conjunto[5] = {-5.23, -3.40, -6.3, -3.1415, -9.3};
    float media = 0.0;
    int status = 0;

    for (int i = 0; i < 5; i++) {
        if (conjunto[i] < 0) {
            media += conjunto[i];
        } else {
            printf("VALOR POSITIVO: %f\n", conjunto[i]);
            status++;
        }
    }

    media = media / 5.0;

    printf("\nA media dos numeros negativos eh %.2f\n", media);

    if (status == 0) {
        printf("[AVISO] nenhum numero positivo encontrado no conjunto.");
    }
}