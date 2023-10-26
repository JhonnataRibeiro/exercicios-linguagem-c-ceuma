/* Exercício de fatorial: Crie um programa em C que utilize o laço de repetição "do while" para calcular o fatorial de um número escolhido pelo usuário e imprimir o resultado na tela. */

#include <stdio.h>

int main() {
    int numero, fatorial = 1, i = 1;

    printf("Digite um número para ver o fatorial dele: ");
    scanf("%d", &numero);

    do {
        fatorial *= i;
        i++;
    } while (i <= numero);

    printf("O fatorial de %d é %d", numero, fatorial);
}