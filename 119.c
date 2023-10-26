/* Escreva um programa que leia um caractere e verifique se ele é uma vogal ou uma consoante. */

#include <stdio.h>

int main() {
    char letra; 

    printf("Digite uma letra para ver se é vogal ou consoante: ");
    scanf("%c", &letra);

    switch (letra) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("É vogal");
            break;
        default:
            printf("É consoante");
    }
}