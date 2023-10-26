#include <stdio.h>
#include <string.h>

int main() {
    char texto[50] = {"abacate"};
    char *letra;

    // strchr --> retorna a primeira ocorrência
    // strrchr --> retorna a ultima ocorrência

    letra = strchr(texto, 'a');
    printf("%c\n", *letra);
    printf("%c\n\n", *(letra + 1));


    letra = strrchr(texto, 'a');
    printf("%c\n", *letra);
    printf("%c\n", *(letra + 1));
}