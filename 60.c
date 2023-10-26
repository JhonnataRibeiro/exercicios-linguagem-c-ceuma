#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int valor;

    printf("Informe um numero: ");
    scanf("%d", &valor);

    valor < 0 ? printf("O valor é negativo") : printf("O valor é positivo");

    return 0;
}
