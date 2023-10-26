// Escreva um programa que solicite ao usuário digitar um número inteiro
// positivo e depois calcule o somatórios de todos os números pares no
// intervalo de 0 até o número digitado.

#include <stdio.h>

int main() {
    int number, index = 0, sum = 0;

    printf("Digite um numero para ver a soma no intervalo: ");
    scanf("%d", &number);

    do {
        sum += index;
        index += 2;
    } while (index <= number);

    printf("O somatorio dos numeros pares no intervalo e %d", sum);
    
}