//  Escreva um programa que leia dois números quaisquer informados pelo
//  usuário e calcule a média aritmética de todos os números que
//  estiverem entre os números lidos, incluindo os números lidos.

#include <stdio.h>

int main() {
    int numero1, numero2, cont = 0, somatorio = 0.0;
    float media = 0.0;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    do {
        somatorio += numero1;
        cont++;
        numero1++;
    } while (numero1 <= numero2);

    media = (float) somatorio / cont;

    printf("A media dos numeros informados e %.2f", media);
    //printf("%d %d", somatorio, cont);

}