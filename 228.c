/* Exercício 2: Contar quantas vezes um caractere aparece em uma string */

#include <stdio.h>
#include <string.h>

int main() {
    char texto[] = {"eu sei que ninguem gosta de mim, estou sozinho nessa parada"};
    char procura = 'a';
    int quantidade_letra = 0;
    char *ponteiro;

    ponteiro = strchr(texto, procura);

    while (ponteiro != NULL) {
        quantidade_letra++;
        ponteiro = strchr(ponteiro + 1, procura);
    }

    printf("A quantida de repetição da letra %c foi %d", procura, quantidade_letra);

}