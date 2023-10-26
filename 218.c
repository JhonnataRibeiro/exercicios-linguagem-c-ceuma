/* Exercício de cópia de uma parte de uma string: */

#include <stdio.h>
#include <string.h>

int main() {
    char nome_completo[] = {"Jhonnata Rodrigues Ribeiro"};
    char copia[] = {};

    strcpy(copia, nome_completo);

    printf("%s", copia);
}