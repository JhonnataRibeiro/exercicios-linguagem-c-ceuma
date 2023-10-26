/* Exercício 3: Separar uma string em tokens delimitados por múltiplos caracteres */

#include <stdio.h>
#include <string.h>

int main() {
    char texto[] = {"eu sou | o mais | feio | da sala"};
    char *torken;

    torken = strtok(texto, " | ");

    while (torken != NULL) {
        printf("%s\n", torken);
        torken = strtok(NULL, " |");
    }
}