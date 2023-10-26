/* Faça um programa que imprima seu nome completo só que da seguinte
forma: 1º nome na 1ª linha, 2º nome na 2ª linha e assim sucessivamente. */

#include <stdio.h>

int main() {
    char nome[20] = "Jhonnata";
    char meio[20] = "Rodrigues";
    char sobrenome[20] = "Ribeiro";

    printf("%s\n", nome);
    printf("%s\n", meio);
    printf("%s\n", sobrenome);
}