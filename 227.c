/* Exercício 1: Encontrar a última ocorrência de um caractere em uma string */

#include <stdio.h>

int main() {
    char texto[] = {"eu sou lindo e eu sou o mais melhor que isso vei kkk"};
    char procura = 'e';
    int ultimo_indice, indice = 0;
    char *ponteiro;

    ponteiro = strrchr(texto, procura);

    while (texto[indice] != '\0') {
        if (texto[indice] == procura) {
            ultimo_indice = indice;
        }
        indice++;
    }

    if (ponteiro != NULL) {
        printf("A letra foi encontrada.\n");
        printf("No indice %d", ultimo_indice);
    } else {
        printf("Não foi encontrada.");
    }
}