#include <stdio.h>

void stringPorString(char string[]) {
    int i;

    while (string[i] != '\0') {
        printf("%c\n", string[i]);
        i++;
    }
}

int main() {
    char texto[] = {"Casamento"};

    stringPorString(texto);
}