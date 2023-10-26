/* Exercício 2: Contar quantas vezes uma substring aparece em uma string */

#include <stdio.h>
#include <string.h>

int main() {
    char texto[] = {"pitomba é minha fruta preferida porque a pitomba é doce e a pitomba é dificil de se encontrar"};
    char procura[] = {"pitomba"};
    char *ponteiro;
    int quantidade = 0;

    ponteiro = strstr(texto, procura);

    while (ponteiro != NULL) {
        if (ponteiro) {
            quantidade++;
        }
        ponteiro = strstr(ponteiro + 1, procura);
    }

    printf("A quantidade da palavra \"%s\" foi de %d", procura, quantidade);
}