#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char sexo;
    //char sexo = 's';

    printf("Informe um caractere: ");
    scanf("%c", &sexo);

    printf("Valor do caractere é: %c\n", sexo);

    return 0;
}
