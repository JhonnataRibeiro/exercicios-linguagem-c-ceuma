/* Construa um programa que leia um número de 1 a 12 e informa o trimestre
do ano correspondente. Se o número não corresponder a um mês do ano,
deve ser exibida uma mensagem de erro. */

#include <stdio.h>

int main() {
    int numero = 0;

    printf("Informe um número: ");
    scanf("%d", &numero);

    if (numero == 1) {
        printf("Janeiro\n");
    } else if (numero == 2) {
        printf("Fevereiro\n");
    } else if (numero == 3) {
        printf("Março\n");
    } else if (numero == 4) {
        printf("Abril\n");
    } else if (numero == 5) {
        printf("Maio\n");
    } else if (numero == 6) {
        printf("Junhio\n");
    } else if (numero == 7) {
        printf("Julho\n");
    } else if (numero == 8) {
        printf("Agosto\n");
    } else if (numero == 9) {
        printf("Setembro\n");
    } else if (numero == 10) {
        printf("Outubr\n");
    } else if (numero == 11) {
        printf("Fevereiro\n");
    } else if (numero == 12) {
        printf("Fevereiro\n");
    } else {
        printf("Número corresponde a mês inv");
    }
}
