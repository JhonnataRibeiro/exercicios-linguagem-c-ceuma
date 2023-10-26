#include <stdio.h>

int main() {
    char texto[20] = {"Diante dessa história, eu sou o mais o que sou eu"};

    printf("Digite seu nome: ");
    fgets(texto, 20, stdin);

    printf("%s", texto);
}