#include <stdio.h>

int idade2 = 35; //Variável global

void imprimir(int idade) {
    printf("Escopo: %d\n", idade);
    printf("Global: %d\n", idade2);
}

int main() {
    int idade = 20; // Escopo de variável

    printf("Escopo: %d\n", idade);
    imprimir(idade);
    printf("Global: %d\n", idade2);
}