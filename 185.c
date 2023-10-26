#include <stdio.h>

int main() {
    char texto[] = {"Diante dessa história, eu sou o mais o que sou eu"};

    printf("Digite seu nome: ");
    gets(texto); //Nunca usar o gets

    printf("%s", texto);
}