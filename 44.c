#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a = 10;

    printf("Digite um valor qualquer: ");
    scanf("%d", &a);

    if (a < 0)
        printf("Valor negativo!\n");
    else
        printf("Valor positivo ou igual a zero!\n");
    
    printf("Continuando o programa...\n");

    return 0;
}