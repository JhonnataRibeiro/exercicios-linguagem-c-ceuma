/* Construa um programa que leia um número de 1 a 7 e que informa o dia da
semana correspondente, sendo que o domingo será associado ao número 1.
Se o número não corresponder a um dia da semana, deve ser exibida uma
mensagem de erro ao usuário. */

#include <stdio.h>

int main() {
    int semana;

    printf("Informe o dia da semana de 1 a 7: ");
    scanf("%d", &semana);

    if (semana == 1) {
        printf("Domingo");
    } else if (semana == 2) {
        printf("Segunda");
    } else if (semana == 3) {
        printf("Terça");
    } else if (semana == 4) {
        printf("Quarta");
    } else if (semana == 5) {
        printf("Quinta");
    } else if (semana == 6) {
        printf("Sexta");
    } else if (semana == 7) {
        printf("Sábado");
    }
}