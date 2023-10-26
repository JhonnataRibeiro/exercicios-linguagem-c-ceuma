#include <stdio.h>

int main() {
    int i, c = 0;
    int vetor[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int vetor2[20];

    for (i = 19; i >= 0; i--) {
        vetor2[c] = vetor[i];
        c++;
    }

    printf("Vetor ao contrario:\n");
    for (i = 0; i < 20; i++) {
        printf("%d ", vetor2[i]);
    }
}