#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a = 10;

    printf("Digite um valor qualquer: ");
    scanf("%d", &a);

    if (a < 0)
        printf("Valor negativo!\n");
    printf("Continuando o programa...\n");

    return 0;
}
