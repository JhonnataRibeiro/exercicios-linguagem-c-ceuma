/* Construa um programa que leia um n£mero de 1 a 7 e que informa o dia
da semana correspondente, sendo que o domingo ser† associado ao
n£mero 1. Se o n£mero n∆o corresponder a um dia da semana, deve ser
exibida uma mensagem de erro ao usu†rio. */

#include <stdio.h>

int main() {
    int numero = 0;
    
    printf("Informe um n£mero: ");
    scanf("%d", &numero);

    if (numero == 1) {
        printf("Domingo\n");
    } else if (numero == 2) {
        printf("Segunda\n");
    } else if (numero == 3) {
        printf("Teráa\n");
    } else if (numero == 4) {
        printf("Quarta\n");
    } else if (numero == 5) {
        printf("Quinta\n");
    } else if (numero == 6) {
        printf("Sexta\n");
    } else if (numero == 7) {
        printf("S†bado\n");
    } else {
        printf("N£mero inv†lido para dias da semana\n");
    }
}