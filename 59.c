#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float celsius, fahrenheit;

    printf("Informe a temperatura em Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("O fahrenheit é %.2f\n", fahrenheit);

    return 0;
}
