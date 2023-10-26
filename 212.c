#include <stdio.h>

int contadorDeString(char str[]) {
    int tamanho = 0, i = 0;

    while (str[i] != '\0') {
        tamanho++;
        i++;
    }
    return tamanho;
}

int main() {
    char texto[20] = {"oi"};

    printf("%d", contadorDeString(texto));
}