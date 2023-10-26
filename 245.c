/* Converter uma string para maiúsculas usando strupr: */

#include <stdio.h>
#include <string.h>

int main() {
    char texto[] = {"jhonnata"};

    strupr(texto);

    printf("%s", texto);
}