/* Exercício 1: Verificar se uma substring está presente em uma string */

#include <stdio.h>
#include <string.h>

int main() {
    char texto[] = {"A linguagem C é de fato o principio da programação morderna"};
    char procura[] = {"linguagem"};
    char *ponteiro;

    ponteiro = strstr(texto, procura);

    if (ponteiro != NULL) {
        printf("A palavra foi encontrada.");
    } else {
        printf("Não foi encontrada.");
    }
}