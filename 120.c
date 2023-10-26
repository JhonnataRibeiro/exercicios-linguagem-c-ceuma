/* Escreva um programa que leia uma letra maiúscula e a transforme em minúscula. */

#include <stdio.h>

int main() {
    char letra;
    printf("Digite uma letra maiúscula: ");
    scanf("%c", &letra);
    
    switch(letra) {
        case 'A':
            letra = 'a';
            break;
        case 'B':
            letra = 'b';
            break;
        case 'C':
            letra = 'c';
            break;
        case 'D':
            letra = 'd';
            break;
        case 'E':
            letra = 'e';
            break;
        case 'F':
            letra = 'f';
            break;
        case 'G':
            letra = 'g';
            break;
        case 'H':
            letra = 'h';
            break;
        case 'I':
            letra = 'i';
            break;
        case 'J':
            letra = 'j';
            break;
        case 'K':
            letra = 'k';
            break;
        case 'L':
            letra = 'l';
            break;
        case 'M':
            letra = 'm';
            break;
        case 'N':
            letra = 'n';
            break;
        case 'O':
            letra = 'o';
            break;
        case 'P':
            letra = 'p';
            break;
        case 'Q':
            letra = 'q';
            break;
        case 'R':
            letra = 'r';
            break;
        case 'S':
            letra = 's';
            break;
        case 'T':
            letra = 't';
            break;
        case 'U':
            letra = 'u';
            break;
        case 'V':
            letra = 'v';
            break;
        case 'W':
            letra = 'w';
            break;
        case 'X':
            letra = 'x';
            break;
        case 'Y':
            letra = 'y';
            break;
        case 'Z':
            letra = 'z';
            break;
        default:
            printf("Caractere inválido.\n");
            return 0;
    }

    printf("%c", letra);
}