#include <stdio.h>
#include <string.h>

int main() {
    int tamanho;
    char texto[] = {"Eu"};

    tamanho = strlen(texto);

    printf("O tamanho da string é %d\n", tamanho);
    printf("Tamanho: %d", strlen(texto));
}