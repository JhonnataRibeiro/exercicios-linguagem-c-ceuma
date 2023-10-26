#include <stdio.h>

int main() {
    int i;
    char nomes[5][25];

    for (i = 0; i < 5; i++) {
        printf("Digite o nome da posição %d: ", i);
        fgets(nomes[i], 25, stdin);
    }

    for (i = 0; i < 5; i++) {
        printf("%s", nomes[i]);
    }
}