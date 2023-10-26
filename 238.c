/* Exercício 2: Separar uma string em tokens delimitados por vírgulas */

#include <stdio.h>
#include <string.h>

int main() {
    char texto[] = {"laranja,uva,pera,pitomba,banana,kiwi"};
    char *torken;

    torken = strtok(texto, ",");

    while (torken) {
        printf("%s\n", torken);
        torken = strtok(NULL, ",");
    }
}