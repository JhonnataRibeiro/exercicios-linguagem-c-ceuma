/* Faça um programa que calcule a média de 5 números informados pelo
usuário e imprima na tela o resultado. */

#include <stdio.h>

int main() {
    int numero1, numero2, numero3, numero4, numero5;
    float media;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &numero3);
    printf("Digite o quarto numero: ");
    scanf("%d", &numero4);
    printf("Digite o quinto numero: ");
    scanf("%d", &numero5);

    media = (numero1 + numero2 + numero3 + numero4 + numero5) / 5;

    printf("A média dos números é %.2f", media);
}
