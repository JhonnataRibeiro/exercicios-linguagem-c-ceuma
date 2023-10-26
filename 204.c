/* Escreva um programa que pede ao usuário para digitar uma frase e substitui todas as ocorrências da letra 'a' pela letra 'o'. */

#include <stdio.h>
#include <string.h>

int main() {
    int i, tamanho;
    char texto[100];

    printf("Digite algo: ");
    fgets(texto, 100, stdin);

    tamanho = strlen(texto);

    for (i = 0; i <= tamanho; i++) {
        if (texto[i] == 'a') {
            texto[i] = 'o';
        }
    }

    printf("%s", texto);
}