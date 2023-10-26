// Escreva um programa que receba o preço e a quantidade de 20 diferentes produtos 
// e mostre o valor total da compra.

#include <stdio.h>

int main() {
    int produto, somatorio = 0, indice = 1;

    do {
        printf("Informe o valor do %d produto: ", indice);
        scanf("%d", &produto);

        somatorio += produto;
        indice++;
    } while (indice <= 20);

    printf("O somatorio dos valores dos produtos e R$ %d reais.", somatorio);
}