#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float numero;
    //float numero = 3.14;
    numero = 3.14;

    //printf("Valor da fração: %f\n", numero);
    printf("Valor da fração: %.2f\n", numero);
    //%.2f vai fazer exibir apenas duas casas decimais

    printf("Informe uma fração: ");
    scanf("%f", &numero);

    printf("A fração informa foi: %f\n", numero);

    return 0;
}

