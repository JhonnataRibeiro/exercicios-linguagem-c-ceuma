#include <stdio.h>
#include <time.h>

int main() {
    int i;
    int vetor[10];

    srand(time(NULL));

    for (i = 0; i < 10; i++) {
        vetor[i] = 1 + rand() % 10; //Vai somar o 0 + 1 assim não terá 0 na lista
    }

    printf("\n");

    for (i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
}