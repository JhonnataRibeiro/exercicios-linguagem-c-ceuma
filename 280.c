//  Escreva um programa que solicite ao usuário digitar um número inteiro positivo e
//  imprima na tela todos os números ímpares deste intervalo (de 0 até o número
//  digitado).

#include <stdio.h>

int main() {
    int numero1, numero2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    do {
        if (numero1 % 2 != 0) {
            printf("%d\n", numero1);
        }
        numero1++;
    } while (numero1 <= numero2);
}