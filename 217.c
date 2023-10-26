/* Exercício de cópia de strings: */

#include <stdio.h>
#include <string.h>

int main() {
    char texto[] = {"Oi, eu sou um texto que será feito uma copia"};
    char copia[100];

    strcpy(copia, texto);

    printf("%s", copia);
}