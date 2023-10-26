#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char texto;

    printf("Escreva algo: ");
    scanf("%s", &texto);

    printf("O que foi escrito: %c\n", texto);

    return 0;
}
