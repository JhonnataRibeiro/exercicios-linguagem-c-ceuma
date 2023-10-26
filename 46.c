#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int valor;

    printf("Informe um número inteiro: ");
    scanf("%d", &valor);
    
    //Operador ternário ?
    valor < 0 ? printf("Número negativo\n") : printf("Número positivo\n");

    return 0;
}
