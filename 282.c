// Escreva um programa que receba uma quantidade indeterminada de números
//  positivos e diga quantos deles estão no intervalo de 0 a 25, quantos estão no
//  intervalo de 26 a 50 e quantos são maiores que 50. O programa deve parar quando
//  o usuário digitar um número negativo.

#include <stdio.h>

int main() {
    int numero, intervalo0a25 = 0, intervalo26a50 = 0, intervalo50maior = 0;

    do {
        printf("Informe um valor: ");
        scanf("%d", &numero);

        if (numero >= 0 && numero <= 25) {
            intervalo0a25++;
        } else if (numero <= 50) {
            intervalo26a50++;
        } else {
            intervalo50maior++;
        }
    } while (numero >= 0);

    printf("\n::... Resultado ...::\n");
    printf("Quantidade de numeros no intervalo de 0 a 25 foi: %d\n", intervalo0a25);
    printf("Quantidade de numeros no intervalo de 26 a 50 foi: %d\n", intervalo26a50);
    printf("Quantidade de numeros no intervalo maior que 50 foi: %d\n", intervalo50maior);
}