/* Escreva um programa que leia um caractere e verifique se ele é uma vogal ou uma consoante. */

#include <stdio.h>

int main() {
    char letra; 

    printf("Digite uma letra para ver se é vogal ou consoante: ");
    scanf("%c", &letra);

    switch (letra) {
        case 'a':
            printf("É vogal, letra A");
            break;
        case 'e':
            printf("É vogal, letra E");
            break;
        case 'i':
            printf("É vogal, letra I");
            break;
        case 'o':
            printf("É vogal, letra O");
            break;
        case 'u':
            printf("É vogal, letra U");
            break;
        default:
            printf("É consoante");
    }
}