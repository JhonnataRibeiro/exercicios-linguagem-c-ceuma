#include <stdio.h>

int main() {
    int tabuada, i = 1;

    printf("Digite a tabuada que deseja ver: ");
    scanf("%d", &tabuada);

    do {
        printf("%d x %d = %d\n", i, tabuada, i * tabuada);
        i++;
    } while (i <= 10);
}