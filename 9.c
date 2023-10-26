#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char letra;

    printf("Digite uma letra: ");
    letra = getchar();

    printf("A letra informada é: %c\n", letra);

    return 0;
}
