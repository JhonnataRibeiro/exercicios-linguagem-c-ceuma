#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;

    !(a > b) ? printf("Era pra ser False, mais com negação ficou verdadeiro\n") : printf("Era pra ser True, mas usando negação ficou falso\n");
}