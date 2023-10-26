#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int numero;

    printf("Informe um numero para ver o antecessor e sucessor: ");
    scanf("%d", &numero);

    printf("O antecessor do numero é %d\n", --numero);
    printf("O numero é %d\n", ++numero);
    printf("O sucessor do numero é %d\n", ++numero);

    return 0;
}
