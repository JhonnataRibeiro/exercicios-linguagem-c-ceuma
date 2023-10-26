#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int valor, valor2;

    printf("Informe um valor inteiro: ");
    scanf("%d", &valor);

    printf("Informe o segundo valor: ");
    scanf("%d", &valor2);


    printf("O primeiro valor informado: %d\n", valor);
    printf("O valor informado foi: %d\n", valor2);
    //printf("O primeiro valor: %d\nO segundo valor: %d", valor, valor2)
    //forma simplificada

    return 0;
}
