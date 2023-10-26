#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char letra;

    printf("Digite um caractere: ");
    letra = getc(stdin);
    //com getc qualquer tecla do computador será lido como string

    printf("Caracter informado: %c\n", letra);

    return 0;
}
