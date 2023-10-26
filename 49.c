#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int valor;

    printf("Informe um número: ");
    scanf("%d", &valor);

    // Operador lógico negação
    if (!(valor < 0)) {
        printf("Número negativo\n");
    } else {
        printf("Número positivo\n");
    }

    return 0;
}
