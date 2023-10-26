/*  O usuário deve informar um número inteiro, um número real. Estes números
devem ser exibidos na tela. */

#include <stdio.h>

int main() {
    int inteiro;
    float real;

    printf("Digite um numero inteiro: ");
    scanf("%d", &inteiro);
    printf("Digite um numero real: ");
    scanf("%f", &real);

    printf("O numero inteiro: %d\n", inteiro);
    printf("O numero real: %f", real);
}