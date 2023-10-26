#include <stdio.h>

int main() {
    int i;
    char texto[55] = {"Diante dessa história, eu sou o mais o que sou eu"};

    for (i = 0; i < 55; i++) {
        printf("%d = %d\n", i, texto[i]);
    }
    printf("\n");
}