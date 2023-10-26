/* Escreva um programa em C que lê uma lista de palavras do usuário e armazena-as em um vetor. Em seguida, use a função strlen para determinar o comprimento de cada palavra e imprima na tela as palavras e seus respectivos comprimentos. */

#include <stdio.h>
#include <string.h>

int main() {
    int tamanho;
    char palavras[200];
    char *ponteiro;

    printf("Digite uma frase de palavras: ");
    /* scanf("%s[^\n]", &palavras); */
    fgets(palavras, 200, stdin);

    ponteiro = strtok(palavras, " ");

    while (ponteiro) {
        tamanho = 0;
        printf("Palavra: %s, Tamanho: %d\n", ponteiro, strlen(ponteiro));
        ponteiro = strtok(NULL, " ");
    }
}

