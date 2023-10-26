#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int idade, dias;

    printf("Informe sua idade: ");
    scanf("%d", &idade);

    dias = idade * 365;

    printf("A quantidades de dias da sua idade %d anos é %d dias.\n", idade, dias);

    return 0;
}
