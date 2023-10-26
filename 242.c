/* Função fatorial recursiva: escreva uma função recursiva para calcular o fatorial de um número inteiro positivo n. O fatorial de um número n é o produto de todos os inteiros de 1 a n, denotado por n! Por exemplo, 5! = 5 x 4 x 3 x 2 x 1 = 120. */

#include <stdio.h>

int fatorial(int termo) {
    if (termo == 0) {
        return 1;
    } else {
        return termo * fatorial(termo - 1);
    }
}

int main() {
    int termo;

    printf("Digite um numero para ver o fatorial: ");
    scanf("%d", &termo);

    printf("O fatorial de %d! é %d", termo, fatorial(termo));
}