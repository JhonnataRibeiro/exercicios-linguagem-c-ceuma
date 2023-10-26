#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    // int numero1, numero2, soma;

    // numero1 = 5;
    // numero2 = 4.0;

    // soma = numero1 / numero2;

    // printf("%d \n", soma);


    // float x;
    // x = 5 / 4;

    // printf("x = %f\n", x);

    // x = 5 / 4.0;
    // printf("x = %f\n", x);


    // int x;

    // x = 5 / 4;
    // printf("x = %d\n", x);
    // printf("----------------------------\n");


    // int numero = 1;

    // numero += 2;

    // numero++;
    // numero++;
    // numero++;
    // numero++;
    // numero++;
    // numero++;

    // printf("|--------------------------------|\n");
    // printf("\t valor do numero: %d\n", numero);
    // printf("|--------------------------------|\n");

    // int numero2, numero3;

    // printf("Informe o primeiro numero: ");
    // scanf("%d", &numero2);
    // printf("Informe o segundo numero: ");
    // scanf("%d", &numero3);
    // int numero4;
    // printf("Informe o terceiro numero: ");
    // scanf("%d", &numero4);
    // printf("O número informado foi: %d\n", numero2);
    // printf("O segundo numero informado foi: %d\n", numero3);
    // printf("O terceiro numero informado foi: %d\n", numero4);

    int num1, num2, num3, num4, num5;
    float media;

    printf("Informe o primeiro numero: ");
    scanf("%d", &num1);
    printf("Informe o segundo numero: ");
    scanf("%d", &num2);
    printf("Informe o terceiro numero: ");
    scanf("%d", &num3);
    printf("Informe o quarto numero: ");
    scanf("%d", &num4);
    printf("Informe o quinto numero: ");
    scanf("%d", &num5);

    media = (num1 + num2 + num3 + num4 + num5) / 5;

    printf("A média dos valores informado foi %.2f\n", media);

    return 0;
}
