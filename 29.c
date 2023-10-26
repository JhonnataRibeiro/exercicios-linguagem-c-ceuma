#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a = 10, b = 20;
    float pi = 3.1415;

    printf("Adição: %d\n", a + b);
    printf("Subtração: %d\n", a - b);
    printf("Multiplicação: %d\n", a * b);
    printf("Divisão: %f\n", (float)a / b);

    int c;
    c = (int)pi;
    printf("\nValor do C: %d\n", c);
    
    return 0;
}
