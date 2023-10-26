#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char texto[100]; //declarar o tamanho que a string vai receber

    printf("Escreva algo: ");
    scanf("%s", texto); //Pra receber string de uma palavra, colocar a variavel sem o &

    printf("%s\n", texto);

    return 0;
}
