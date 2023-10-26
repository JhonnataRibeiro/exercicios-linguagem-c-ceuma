#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a, b, c;

    printf("Informe o valor do A: ");
    scanf("%d", &a);

    printf("Informe o valor do B: ");
    scanf("%d", &b);

    c = a;
    a = b;
    b = c;

    printf("O valor do A: %d\n", a);
    printf("O vlor do B: %d\n", b);

    return 0;
}
