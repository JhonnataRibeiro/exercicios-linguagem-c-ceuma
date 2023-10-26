#include <stdio.h>

int main() {
    int i = 1, impares = 0;

    do {
        if (i % 2 != 0) {
            impares += i;
        }
        i++;
    } while(i <= 1000);

    printf("A soma total dos números impares é %d", impares);
}