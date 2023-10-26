/* Ler várias strings até que o usuário digite a palavra "fim": */

#include <stdio.h>
#include <string.h>

int main() {
    int i;
    char matriz_string[100][50];
    char texto[50];

    i = 0;
    do {
        printf("Digite um nome: ");
        fgets(matriz_string[i++], 50, stdin);

        matriz_string[i][strcspn(matriz_string[i], "\n")] = "\0";

    } while (strcmp(matriz_string[i], "fim") != 0);

    printf("Encerrando o programa...");
}