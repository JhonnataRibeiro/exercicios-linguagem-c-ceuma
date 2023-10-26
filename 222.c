/* Exercício de busca de um caractere em uma string a partir de uma posição específica: */

#include <stdio.h>

int main() {
    char texto[] = {"banana"};
    char procura[] = {'n'};
    char *ponteiro;
    int posicao = 2;
    int i, indice = 0;

    ponteiro = strchr(texto + posicao, procura[0]);

    for (i = 0; strlen(texto); i++) {
        if (texto[i] == procura[0]) {
            break;
        }
        indice++;
    }

    indice += posicao;

    if (ponteiro != NULL) {
        printf("A letra foi encontrada\n");
        printf("No indice %d", indice);
    } else {
        printf("A letra não foi encotrada\n");
    }
}