/* Escreva um programa que leia dois números e exiba o maior e o menor
deles. Caso os números sejam iguais deve ser exibida uma mensagem ao
usuário informando isto. */

#include <stdio.h>

int main() {
    int numero1, numero2;

    printf("Informe o valor do numero1: ");
    scanf("%d", &numero1);
    printf("Informe o valor do numero2: ");
    scanf("%d", &numero2);

    (numero1 > numero2) ? printf("Maior numero: %d\nMenor numero: %d", numero1, numero2) :
        (numero1 == numero2) ? printf("Numeros iguais") : printf("Maior numero: %d\nMenor numero: %d", numero2, numero1);
}