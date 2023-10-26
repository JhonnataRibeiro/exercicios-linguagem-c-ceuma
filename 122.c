/* Escreva um programa que leia um caractere e verifique se ele é uma letra maiúscula, uma letra minúscula ou um número. */

#include <stdio.h>

int main() {
    char letra;

    printf("Digite uma letra: ");
    scanf("%c", &letra);

    if ((letra >= 'A') && (letra <= 'Z')) {
        printf("A letra é Maiúscula");
    } else if ((letra >= 'a') && (letra <= 'z')) {
        printf("A letra é Minúscula");
    } else if ((letra >= '0') && (letra <= '9')) {
        printf("É um número");
    } else {
        printf("Agora deu o caralho mesmo viu, tá usando outra porra");
    }
}