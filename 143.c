/* Exerc¡cio de m‚dia: Crie um programa em C que utilize o la‡o de repeti‡Æo "for" para calcular a m‚dia aritm‚tica de um conjunto de n£meros digitados pelo usu rio e imprimir o resultado na tela. */

#include <stdio.h>

int main() {
    int contador, numero, total;

    for (contador = 1; contador <= 5; contador++) {
        printf("Digite um numero para somar: ");
        scanf("%d", &numero);

        total += numero;
    }

    printf("O valor dos n£meros informado ‚ %d", total);
}