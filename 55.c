#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int numero;

    printf("Informe um número: ");
    scanf("%d", &numero);

    --numero;
    printf("O antecessor, %d\n", numero);
    ++numero;
    printf("O número normal, %d\n", numero);
    ++numero;
    printf("O número sucessor, %d\n", numero);

    return 0;
}
