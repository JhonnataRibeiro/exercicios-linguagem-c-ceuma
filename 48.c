#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int valor;

    printf("Informe um número: ");
    scanf("%d", &valor);

    //Operador ternário aninhado
    valor < 0 ? printf("Número negativo\n") :
        valor == 0 ? printf("Número zero\n") : printf("Número positivo\n");

    return 0;
}
