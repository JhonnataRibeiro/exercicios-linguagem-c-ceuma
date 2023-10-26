#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //caracteres com acentos

int main(int argc, char const *argv[])
{
    // printf("Coração\n");

    setlocale (LC_ALL, "");
    setlocale (LC_ALL, "Portuguese");

    char letra = 'f';
    printf("%c\n", 102);

    return 0;
}
