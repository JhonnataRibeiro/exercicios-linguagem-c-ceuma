/* Exercício de busca de um caractere em uma string: */

#include <stdio.h>
#include <string.h>

int main() {
    char nome[] = {"jhonnata"};
    char procura[] = {'o'};
    int *resultado;
    int indice = 0, i;

    resultado = strchr(nome, procura[0]);

    for (i = 0; i < strlen(nome); i++) {
        if (nome[i] == procura[0]) {
            break;
        }
        indice++;
    }
    
    if (resultado != NULL) {
        printf("A letra foi encontrada\nNo indice %d", indice);
    } else {
        printf("A letra não foi encontrada\n");
    }
}