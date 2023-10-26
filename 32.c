#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int numero1, numero2, numero3, numero4;
    printf("Informe 4 numeros inteiros na mesma linha: ");
    scanf("%d %d %d %d", &numero1, &numero2, &numero3, &numero4);

    printf("Informando os numeros digitados: %d, %d, %d, e %d\n", numero1, numero2, numero3, numero4);

    printf("\n-----------------------------\n");
    printf("Agora a apuração: \n");
    printf("-----------------------------\n");

    return 0;
}
