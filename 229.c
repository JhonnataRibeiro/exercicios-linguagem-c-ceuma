/* Exercício 3: Substituir todas as ocorrências de um caractere em uma string por outro caractere */

#include <stdio.h>
#include <string.h>

int main() {
    char texto[] = {"ai se eu te pego ai ai se eu te pego novinha novinha ai ai"};
    char letra_alteracao = 'a';
    char alteracao[100];
    char *ponteiro;
    int i = 0;

    ponteiro = strchr(texto, letra_alteracao);

    while (ponteiro != NULL) {
        *ponteiro = 'x';
        ponteiro = strchr(ponteiro + 1, letra_alteracao);
    }

    printf("%s", texto);
}