/* Faça um programa que leia duas matrizes A e B, contendo cada um 10
elementos numéricos quaisquer. Crie uma nova matriz, também de 10
elementos, onde cada elemento corresponde a soma dos elementos de A
e B. Escreva na tela os elementos do novo conjunto, obtido. */

#include <stdio.h>

int main() {
    int vetorA[3];
    int vetorB[3];
    int vetorC[3];

    for (int i = 0; i < 3; i++) {
        printf("Digite o %d valor do vetorA: ", i + 1);
        scanf("%d", &vetorA[i]);
    }

    for (int j = 0; j < 3; j++) {
        printf("Digite o %d valor do vetorB: ", j + 1);
        scanf("%d", &vetorB[j]);
    }

    for (int k = 0; k < 3; k++) {
        vetorC[k] = vetorA[k] + vetorB[k];
        printf("%d ", vetorC[k]);
    }
}