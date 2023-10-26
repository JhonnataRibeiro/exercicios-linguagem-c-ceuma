/* Ler uma string do usuário e exibir na tela: */

#include <stdio.h>

int main() {
    char texto[100];

    printf("Digite um texto: ");
    fgets(texto, 100, stdin);

    printf("%s", texto);
}