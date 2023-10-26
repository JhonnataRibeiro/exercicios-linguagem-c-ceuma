/* Exercício de busca de um caractere que não está na string: */

#include <stdio.h>

int main() {
    char texto[100] = {"eu sou a universal"};
    char *ponteiro;
    char procura = 'k';
    int i = 0;

    ponteiro = strchr(texto, procura);

    if (ponteiro != NULL) {
        printf("A letra foi encontrada.");
    } else {
        printf("A letra não foi encontrada na frase.");
    }

}