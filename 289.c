/* Escreva um programa que solicite ao usuário que informe 40 elementos inteiros
(valide isso). Após isso o programa deve calcular a quantidade de números
pares, a quantidade de números ímpares, a somatória dos números pares e a
somatória dos números ímpares. Ao final, exiba os resultados. */

// Validar numero inteiro
// Quantidade de pares e impares
// Somatorio de pares e impares

#include <stdio.h>

int main() {
    int numeros[10];
    int quanPar = 0, quanImpar = 0;
    int somaPar = 0, somaImpar = 0;
    float teste = 0.0;

    for (int i = 0; i < 10; i++) {
        printf("Digite um numero inteiro: ");
        scanf("%d", &numeros[i]);

        if (numeros[i] % 2 == 0) {
            quanPar++;
            somaPar += numeros[i];
        } else {
            quanImpar++;
            somaImpar += numeros[i];
        }
    }

    printf("\nA quantidade de numeros par informado foi: %d\n", quanPar);
    printf("A quantidade de numeros impar informado foi: %d\n", quanImpar);
    printf("O somatorio de numeros par informado foi: %d\n", somaPar);
    printf("O somatorio de numeros impar informado foi: %d\n", somaImpar);
}