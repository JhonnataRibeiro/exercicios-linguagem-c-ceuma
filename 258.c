/*  Faça um programa que leia a idade de uma pessoa expressa em anos e
escreva a respectiva idade em dias. Considere que o ano é de 365 dias. */

#include <stdio.h>

int main() {
    int idade, idade_dias;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    idade_dias = idade * 365;

    printf("A quantidade da idade em dias é: %d", idade_dias);
}