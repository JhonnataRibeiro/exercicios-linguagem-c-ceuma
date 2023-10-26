#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    //unsigned vai ignorar os negativos do valor int
    //depois de usar o unsigned, o x vale de 0 a ... 4.294.967.295
    
    // int x = 2147483647; //valor maximo que o inteiro pode receber
    // printf("%d\n", ++x);

    // unsigned %u
    // unsigned shor int %hu ou %d
    // short int -> %d ou %hi
    // unsigned long int %lu

    unsigned int x = 2147483647;
    printf("%u\n", ++x);

    unsigned short int y = 55000;
    printf("%hu\n", y);

    return 0;
}
