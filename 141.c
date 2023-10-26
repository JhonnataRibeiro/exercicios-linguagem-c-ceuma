/* Exercício de fatorial: Crie um programa em C que utilize o laço de repetição "for" para calcular o fatorial de um número e imprimir o resultado na tela. */

#include <stdio.h>

int main() {
    int numero, fatorial = 1, contador;

    printf("Informe o valor que queira ver o fatorial: ");
    scanf("%d", &numero);

    for (contador = 1; contador <= numero; contador++) {
        fatorial = fatorial * contador;
    }

    printf("O fatorial de %d é %d", numero, fatorial);
}