/* Escreva um programa que pergunte ao usuário qual é o dia da semana e imprima uma mensagem correspondente a esse dia. */

#include <stdio.h>

int main() {
    int semana;

    printf("Informe o dia da semana em número, [exemplo, 1 a 7]: ");
    scanf("%d", &semana);

    switch (semana) {
        case 1:
            printf("Domingo");
            break;
        case 2:
            printf("Segunda");
            break;
        case 3:
            printf("Terça");
            break;
        case 4:
            printf("Quarta");
            break;
        case 5:
            printf("Quinta");
            break;
        case 6:
            printf("Sexta");
            break;
        case 7:
            printf("Sábado");
            break;
        default:
            printf("Opção inválida");
    }
}