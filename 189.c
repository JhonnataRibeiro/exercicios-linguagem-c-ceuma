#include <stdio.h>

int main() {
    int i;
    char texto[55] = {"Diante dessa história, eu sou o mais o que sou eu?"};

    fgets (texto, 16, stdin);
    
    i = 0;
    while (texto[i] != '\0') {
        printf("%d = %c\n", i, texto[i]);
        i++;
    }
    printf("\n");
}