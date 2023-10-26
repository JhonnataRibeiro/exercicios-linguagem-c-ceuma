#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float salario, reajuste, new;

    printf("Informe o salario: ");
    scanf("%f", &salario);

    printf("Informe o reajuste: ");
    scanf("%f", &reajuste);

    new = (salario * (reajuste / 100)) + salario;

    printf("New salario %.2f\n", new);

    return 0;
}
