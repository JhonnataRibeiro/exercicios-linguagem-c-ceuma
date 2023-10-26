#include <stdio.h>
#include <string.h>

int main() {
    int tamanho;
    char texto[] = {"Eu"};

    printf("Digite algo: ");
    fgets(texto, 15, stdin);
    
    tamanho = strlen(texto);

    printf("O tamanho da string é %d\n", tamanho);
    printf("Tamanho: %d", strlen(texto));
}