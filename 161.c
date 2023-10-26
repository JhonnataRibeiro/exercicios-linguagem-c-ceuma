#include <stdio.h>
#include <time.h>

int main() {
    int i;
    int vetor[10];

    srand(time(NULL));

    for (i = 0; i < 10; i++) {
        vetor[i] = rand() % 10; //Definindo o intervalo de 0 a 9
    }

    printf("\n");

    for (i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
}