/* Exercício de soma: Crie um programa em C que utilize o laço de repetição "for" para somar todos os números inteiros de 1 a 100 e imprimir o resultado na tela.z */

#include <stdio.h>

int main() {
    int contador, somatorio;

    for (contador = 0; contador <= 100; contador++) {
        somatorio += contador;
    }

    printf("A soma de todos os valores entre o intervalo 1 a 100 é %d", somatorio);
}