/* Escreva um programa que solicite ao usuário digitar um número inteiro
positivo e depois calcule o somatório de todos os números pares no
intervalo de 0 até o número digitado. */

#include <stdio.h>

int main() {
    int numero, somatorio = 0, indice;

    printf("Digite um numero para ver o somatorio no intervalo: ");
    scanf("%d", &numero);

    while (numero < 0) {
        printf("Digite um numero para ver o somatorio no intervalo: ");
        scanf("%d", &numero);
    }

    for (indice = 2; indice <= numero; indice = indice + 2) {
        somatorio += indice;
    }

    printf("\nO somatorio do intervalo e %d", somatorio);
}