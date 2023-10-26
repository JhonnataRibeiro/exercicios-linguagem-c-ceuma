#include <stdio.h>
#include <string.h>

int main() {
    char palavra[50] = {"Bom dia Geice"};

    // strupr() para deixar todas as letras maiúsculas
    // strlwr() para deixar todas as letras minúsculas
    strupr(palavra);
    printf("%s\n", palavra);


    char palavra2[50] = {"AAAABBBBBCCCCC"};
    strlwr(palavra2);
    printf("%s", palavra2);
}