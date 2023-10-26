/* Escreva um programa que solicite ao usuário digitar um número inteiro positivo e 
imprima na tela todos os números ímpares no intervalo de 0 até o número digitado. */

#include <stdio.h>

int main() {
    int numero, indice;

    printf("Digite um numero para ver os impares no intervalo: ");
    scanf("%d", &numero);

    while (numero < 0) {
        printf("Digite um numero para ver os impares no intervalo: ");
        scanf("%d", &numero);
    }

    for (indice = 0; indice <= numero; indice++) {
        if (indice % 2 != 0) {
            printf("%d - numero impar\n", indice);
        }
    }
}