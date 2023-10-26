/* Escreva um programa que leia dois números quaisquer informados pelo usuário e 
calcule a média aritmética de todos os números que estiverem entre os números lidos, 
incluindo os números lidos. Valide os números informados. */

#include <stdio.h>

int main() {
    int numero1, numero2, total;
    float media, contador = 0.0;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);
    while (numero1 < 0) {
        printf("Digite o primeiro numero: ");
        scanf("%d", &numero1);    
    }

    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);
    while (numero2 < 0) {
        printf("Digite o segundo numero: ");
        scanf("%d", &numero2);
    }

    while (numero1 <= numero2) {
        total += numero1;
        numero1++;
        contador++;
    }

    media = total / contador;

    printf("\nA media entre o intervalo eh %.2f", media);
}