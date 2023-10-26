#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char letra;

    printf("Digite um caractere: ");
    letra = fgetc(stdin);

    printf("O caractere digitado foi: %c\n", letra);

    return 0;
}
