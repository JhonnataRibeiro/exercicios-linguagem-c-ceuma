/* Exercício 1: Separar uma string em palavras individuais */

#include <stdio.h>
#include <string.h>

int main() {
    char texto[] = {"Jhonnata Rodrigues Ribeiro"};
    char *torken;

    torken = strtok(texto, " ");

    while (torken != NULL) {
        printf("%s\n", torken);
        torken = strtok(NULL, " ");
    }
}