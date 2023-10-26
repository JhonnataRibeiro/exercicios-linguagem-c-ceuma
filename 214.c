/* Exercício de concatenação de strings: */

#include <stdio.h>
#include <string.h>

int main() {
    char palavra1[] = {"Hello, "};
    char palavra2[] = {"World!"};

    strcat(palavra1, palavra2);

    printf("%s", palavra1);
}