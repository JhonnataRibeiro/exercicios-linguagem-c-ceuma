/* Exercício de soma de números: Crie um programa em C que utilize o laço de repetição "do while" para somar números digitados pelo usuário até que ele digite 0 e imprimir o resultado na tela. */

#include <stdio.h>

int main() {
    int numero, total = 0;

    do {
        printf("Informe um numero ou digite 0 para encerrar: ");
        scanf("%d", &numero);

        if (numero < 0) {
            printf("Número negativo informado\n");
            continue;
        }
        
        total += numero;
    } while (numero != 0);

    printf("O total é %d", total);
}