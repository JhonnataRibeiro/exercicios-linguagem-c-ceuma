/* Verificar se duas strings são iguais ignorando maiúsculas usando strupr: */

#include <stdio.h>
#include <string.h>

int main() {
    char texto1[] = {"Eu sou lindo"};
    char texto2[] = {"Eu SOu LINdo"};
    int i, contador = 0, tamanho;

    tamanho = strlen(texto1);
    strupr(texto1);
    strupr(texto2);

    for (i = 0; i < tamanho; i++) {
        if (texto1[i] == texto2[i]) {
            contador++;
        }
    }

    if (contador == tamanho) {
        printf("O texto1 e o texto2 são iguais.");
    } else {
        printf("O textos não são iguais.");
    }
}