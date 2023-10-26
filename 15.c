#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char a, b;

    printf("Digite o primeiro caractere: ");
    scanf("%c", &a);

    printf("Digite o segundo caractere: ");
    scanf(" %c", &b);
    //colocando o espaço aqui "scanf(" %c", &b)"" vai anular o ENTER, TAB e ESPAÇO

    printf("Primeiro caractere: %c\nSegundo caractere: %c\n", a, b);

    return 0;
}
