#include <stdio.h>

int main() {
    int a = 2;
    int b = 4;

    if (!(a > b)) {
        printf("Era pra ser False, mas tá sendo True com negação\n");
    } else {
        printf("Era pra ser True, mas tá sendo falso pela negação\n");
    }
}