/* Escreva um programa em C que solicite ao usuário que digite uma palavra e, em seguida, determine o número de caracteres na palavra usando a função strlen. Em seguida, exiba o resultado na tela. */

#include <stdio.h>
#include <string.h>

int main() {
    char texto[100];
    int tamanho;

    printf("Digite algo para saber o tamanho: ");
    scanf("%s[^\n]", &texto);

    tamanho = strlen(texto);

    printf("O tamanho da palavra ou frase é %d", tamanho);
}