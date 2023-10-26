#include <stdio.h>
#include <string.h>

int main() {
    char string1[50] = {"Jhonnata"};
    char string2[50] = {"zzxxxx"};

    //     destino,  copia
    strcpy(string2, string1);

    printf("%s", string2);
}