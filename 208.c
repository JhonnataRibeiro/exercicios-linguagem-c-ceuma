/* Ler um nome e uma idade do usuário e exibir na tela: */

#include <stdio.h>

int main() {
    char nome[100];
    int idade;

    printf("Digite seu nome: ");
    fgets(nome, 100, stdin);
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("O seu nome é: %s", nome);
    printf("A sua idade é: %d", idade);
}