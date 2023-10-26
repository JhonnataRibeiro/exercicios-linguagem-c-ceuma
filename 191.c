#include <stdio.h>

int main() {
    int i, tamanho = 0;
    char texto[] = {"Eu sou feio e burro, só queria uma pessoa legal com gostos comuns e linda"};

    printf("Digite algo: ");
    fgets(texto, 15, stdin);

    i = 0;
    while (texto[i] != '\0') {
        if (texto[i] == '\n') {
            texto[i] = '\0';
        }
        i++;
    }

    i = 0;
    while (texto[i] != '\0') {
        tamanho++;
        i++;
    }

    printf("O tamanho da string é %d", tamanho);
}