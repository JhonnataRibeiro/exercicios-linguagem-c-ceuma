/* Construa um programa que leia um número de 1 a 7 e que informa o dia
da semana correspondente, sendo que o domingo será associado ao
número 1. Se o número não corresponder a um dia da semana, deve ser
exibida uma mensagem de erro ao usuário */

#include <stdio.h>

int main() {
    int semana;

    printf("Informe um dia da semana em numero, de 1 a 7: ");
    scanf("%d", &semana);

    (semana == 1) ? printf("Domingo") :
        (semana == 2) ? printf("Segunda") :
            (semana == 3) ? printf("Terça") :
                (semana == 4) ? printf("Quarta") :
                    (semana == 5) ? printf("Quinta") :
                        (semana == 6) ? printf("Sexta") :
                            (semana == 7) ? printf("Sábado") : printf("Dia da semana informado inválido");
}