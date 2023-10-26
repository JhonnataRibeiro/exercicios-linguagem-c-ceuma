#include <stdio.h>

int somatorioN(int numero) {
    if (numero == 0) {
        return 0;
    } else {
        return numero + somatorioN(numero - 1);
    }
}

int main() {
    int numero;

    printf("Digite um número para ver o somatorio do 0 a n: ");
    scanf("%d", &numero);

    printf("O somatorio de %d é %d", numero, somatorioN(numero));
}