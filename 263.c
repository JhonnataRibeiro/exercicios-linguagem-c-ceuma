/* Faça um programa que leia um número inteiro qualquer fornecido pelo
usuário e imprima na tela o seu sucesso e seu antecessor. */

#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    printf("O antecessor é %d\n", --numero);
    printf("O número atual é %d\n", ++numero);
    printf("O sucessor é %d", ++numero);
}