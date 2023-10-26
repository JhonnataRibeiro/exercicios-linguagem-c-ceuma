#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int valor;

    printf("Digite um número: ");
    scanf("%d", &valor);

    //Versão extendida
    if (valor < 0) {
        printf("Número negativo\n");
    } else {
        if (valor == 0) {
            printf("Número 0\n");
        } else {
            printf("Número zero\n");
        }
    }

    
    //Verão contraida
    if (valor < 0) {
        printf("Número negativo\n");
    } else if (valor > 0) {
        printf("Número positivo");
    } else {
        printf("Número zero\n");
    }

    return 0;
}
