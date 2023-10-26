/* Faça um programa que leia um número inteiro qualquer fornecido pelo
usuário e imprima na tela o seu sucesso e seu antecessor. */

#include <stdio.h>

int main() {
    int numero = 0;

    printf("Informe um número: ");
    scanf("%d", &numero);

    printf("%d\n", --numero);
    printf("%d\n", ++numero);
    printf("%d\n", ++numero);
}