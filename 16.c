#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float x = 1.0;

    printf("Tamanho de um float na memoria: %d bytes\n", sizeof x); //Aqui não é preciso de parenteses

    printf("Tamanho da memoria do int: %d bytes\n", sizeof(int));
    
    return 0;
}
