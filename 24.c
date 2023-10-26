#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int num1, num2;

    printf("Informe o primeiro numero: ");
    scanf("%d", &num1);
    printf("Informe o segundo numero: ");
    scanf("%d", &num2);

    printf("\nA ADIÇÃO dos valores entre %d + %d é = %d\n", num1, num2, num1 + num2);
    printf("A SUBTRAÇÃO dos valores entre %d - %d é = %d\n", num1, num2, num1 - num2);
    printf("A MULTIPLICAÇÃO dos valores entre %d * %d é = %d\n", num1, num2, num1 * num2);
    printf("A DIVISÃO dos valores entre %d / %d é = %d\n", num1, num2, num1 / num2);

    return 0;
}
