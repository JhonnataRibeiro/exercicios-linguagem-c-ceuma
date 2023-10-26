/* Exercício de concatenação de números: */

#include <stdio.h>
#include <string.h>

int main() {
    char string1[] = {"Eu sou muito "};
    char string2[] = {"interligente e engraçado kkkkk"};

    strcat(string1, string2);

    printf("%s", string1);
}