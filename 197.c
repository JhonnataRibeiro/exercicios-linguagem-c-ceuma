/* Escreva um programa que pede ao usuário para digitar uma palavra e depois exibe essa palavra em ordem reversa. */

#include <stdio.h>


int main() {
    int i, j, tamanho = 0;
    char texto[100];

    printf("Digite um texto: ");
    fgets(texto, 100, stdin);

    i = 0;
    while (texto[i] != '\0') {
        tamanho++;
        i++;
    }

    for (i = (tamanho - 2); i >= 0; i--) {
        printf("%c\n", texto[i]);
    }
}