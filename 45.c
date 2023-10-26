#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int valor;

    printf("Informe um valor: ");
    scanf("%d", &valor);

    if (valor < 0) {
        printf("O número digitado é negativo\n");
    } else {
        printf("O número digitado é positivo\n");
        printf("O número digitado é positivo\n");
    }

    return 0;
}
