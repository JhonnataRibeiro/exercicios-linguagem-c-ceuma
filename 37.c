#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int resultado, contador = 10;

    contador--;
    contador -= 1;
    contador = contador -1;

    printf("Valor: %d\n", --contador);

    return 0;
}
