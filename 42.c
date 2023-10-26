#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char texto[20]; 

    printf("Escreva algo: ");
    scanf("%[^\n]", texto); //Para escrever texto grande com espaços

    printf("%s\n", texto);

    return 0;
}