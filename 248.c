/* Faça um programa que imprima seu nome completo só que da seguinte
forma: 1º nome na 1ª linha, 2º nome na 2ª linha e assim sucessivamente. */

#include <stdio.h>

int main() {
    char nome[] = "Jhonnata";
    char meio[] = "Rodrigues";
    char sobrenome[] = "Ribeiro";

    printf("%s", nome);
    printf("\n%s", meio);
    printf("\n%s", sobrenome);
}
