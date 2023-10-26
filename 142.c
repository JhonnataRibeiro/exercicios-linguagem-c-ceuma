/* Exercício de tabuada: Crie um programa em C que utilize o laço de repetição "for" para imprimir a tabuada de multiplicação de um número escolhido pelo usuário. */

#include <stdio.h>

int main() {
    int tabuada, contador;

    printf("Digite um número para ver a tabuada: ");
    scanf("%d", &tabuada);

    for (contador = 1; contador <= 10; contador++) {
        printf("%d x %d = %d\n", tabuada, contador, tabuada * contador);
    }
}