/* Um programa deve gerar todos os múltiplos de um número qualquer
inteiro positivo informado pelo usuário. O intervalo de múltiplos a serem
gerados é até 20. Validade a entrada. */

#include <stdio.h>

int main() {
    int numero, multiplo, contador = 1;

    printf("Informe um numero para ver o multiplo dele 20x: ");
    scanf("%d", &numero);

    while (numero < 0) {
        printf("Informe um numero para ver o multiplo dele 20x: ");
        scanf("%d", &numero);
    }

    while (contador <= 20) {
        printf("%d\n", numero * contador);
        contador++;
    }
}