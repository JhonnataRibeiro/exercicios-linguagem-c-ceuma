#include <stdio.h>

int main(int argc, char const *argv[])
{
    // int numero;

    // printf("Informe um valor: ");
    // scanf("%d", &numero);
    // printf("%d\n", numero);

    int a, b, c;
    float resultado;

    printf("Informe o valor do A: ");
    scanf("%d", &a);
    printf("Informe o valor do B: ");
    scanf("%d", &b);
    printf("Informe o valor do C: ");
    scanf("%d", &c);

    resultado = ((a * b * c) * 2) / 2;

    printf("%f", resultado);

    return 0;
}
