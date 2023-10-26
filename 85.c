#include <stdio.h>

int main() {
    char nome[2] = "s";

    nome = "x";

    printf("%c", &nome);
    
    return 0;
}