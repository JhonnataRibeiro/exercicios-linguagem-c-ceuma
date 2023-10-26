/* Escreva um programa que pede ao usuário para digitar uma frase e conte o número de vogais (a, e, i, o, u) na frase. */

#include <stdio.h>
#include <string.h>

int main() {
    int a = 0, e = 0, i = 0, o = 0, u = 0;
    int indice, tamanho;
    char texto[100];

    printf("Digite algo: ");
    fgets(texto, 100, stdin);

    tamanho = strlen(texto);

    for (indice = 0; indice <= tamanho; indice++) {
        if (texto[indice] == 'a') {
            a++;
        } else if (texto[indice] == 'e') {
            e++;
        } else if (texto[indice] == 'i') {
            i++;
        } else if (texto[indice] == 'o') {
            o++;
        } else if (texto[indice] == 'u') {
            u++;
        }
    }

    printf("Quantidade de A: %d\n", a);
    printf("Quantidade de E: %d\n", e);
    printf("Quantidade de I: %d\n", i);
    printf("Quantidade de O: %d\n", o);
    printf("Quantidade de U: %d\n", u);
}