#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int numero;
    int numero1, numero2, numero3;

    printf("-----------------------------------------------\n");
    printf("Informe um numero: ");
    scanf("%d", &numero);
    printf("-----------------------------------------------\n");

    printf("O numero informado foi: %d\n", numero);

    printf("Infome o primeiro numero: %d");
    scanf("%d", &numero1);

    printf("Informe o segundo numero: %d");
    scanf("%d", &numero2);

    printf("Informe o terceiro numero: %d");
    scanf("%d", &numero3);

    printf("O primeiro numero informado foi: %d\n", numero1);
    printf("O segundo numero informado foi: %d\n", numero2);
    printf("O terceiro numero informado foi %d\n", numero3);


    // comentários

    float fracao1, fracao2;

    printf("informe dois numeros reais: ");
    scanf("%f %f", &fracao1, fracao2);

    printf("As frações informada foram: %f %f\n", &fracao1, &fracao2);


    char letra;
    int numero;
    float fracao;

    char numero; int numero; float; char caracteres;

    printf("-----------------------------------------------\n");
    printf("[1] Entrada [2] Saida [3] Outexit [4] Help");


    return 0;
}
