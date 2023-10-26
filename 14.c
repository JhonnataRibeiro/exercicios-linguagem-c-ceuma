#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char a, b;

    printf("Digite duas letras: ");
    scanf("%c %c", &a, &b);
    //espaço no "%c %c" é para o computador desconsiderar o ENTER, TAB e ESPAÇO

    //erro do buffer do teclado => tudo o que é digitado no teclado é caractere

    printf("Primeiro caractere: %c\n", a);
    printf("Segundo caractere: %c\n", b);

    return 0;
}
