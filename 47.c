#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int valor;

    printf("Informe um número: ");
    scanf("%d", &valor);

    if (valor < 0) {
        printf("Número negativo\n");
    } else {
        if (valor == 0) {
            printf("Número zero\n");
        } else {
            printf("Número positivo\n");
        }
    }

    return 0;
}
