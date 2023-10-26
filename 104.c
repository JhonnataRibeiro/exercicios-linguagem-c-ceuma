/* Construa um programa que leia um número de 1 a 12 e informa o trimestre do
ano correspondente. Se o número não corresponder a um mês do ano, deve
ser exibida uma mensagem de erro. */

#include <stdio.h>

int main() {
    int mes;

    printf("Informe o mes pele numero, de 1 a 12: ");
    scanf("%d", &mes);

    if ((mes == 1) || (mes == 2) || (mes == 3)) {
        printf("Primeiro trimestre");
    } else if ((mes == 4) || (mes == 5) || (mes == 6)) {
        printf("Segundo trimestre");
    } else if ((mes == 7) || (mes == 8) || (mes == 9)) {
        printf("Terceiro trimestre");
    } else if ((mes == 10) || (mes == 11) || (mes == 12)) {
        printf("Quarto trimestre");
    } else {
        printf("Mes informado inválido");
    }
}