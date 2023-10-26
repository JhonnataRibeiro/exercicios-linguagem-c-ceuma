/* Escreva um programa que leia dois números e exiba o maior e o menor deles.
Caso os números sejam iguais deve ser exibida uma mensagem ao usuário
informando isto. */

#include <stdio.h>

int main() {
    int numero1, numero2;

    printf("Informe o primeiro numero: ");
    scanf("%d", &numero1);
    printf("Informe o segundo numero: ");
    scanf("%d", &numero2);

    if (numero1 > numero2) {
        printf("O maior numero é %d e o menor numero é %d", numero1, numero2);
    } else if (numero1 == numero2) {
        printf("Os numeros são iguais");
    } else {
        printf("O maior numero é %d e o menor numero é %d", numero2, numero1);
    }
}