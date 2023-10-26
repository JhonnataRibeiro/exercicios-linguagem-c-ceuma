#include <stdio.h>

int main() {
    int numero1 = 2;
    int numero2 = 2;

    numero1 > numero2 ? printf("%d e %d\n", numero2, numero1) : 
        numero1 == numero2 ? printf("Os numeros são iguais\n") : printf("%d e %d\n", numero1, numero2);

    return 0;
}