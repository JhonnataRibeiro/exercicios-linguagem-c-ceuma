/* Escreva um programa que cria um vetor de inteiros com duas posições
e, depois, troque o conteúdo entre essas posições. */

#include <stdio.h>

int main() {
    int vetor[2] = {10, 20};
    int backup = vetor[0];

    vetor[0] = vetor[1];
    vetor[1] = backup;

    printf("%d %d", vetor[0], vetor[1]);
}