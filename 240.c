#include <stdio.h>

int fibonacci(numero) {
    if (numero == 0) {
        return numero;
    } else {
        return numero + fibonacci(numero - 1);
    }
    //ERRADO
}

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    printf("%d", fibonacci(numero));
}