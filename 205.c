#include <stdio.h>
#include <string.h>

int main() {
    int i, j, verifica = 0, tamanho;
    char palavra[50];
    char inversa[50];

    printf("Digite uma palavra: ");
    scanf("%s", &palavra);

    tamanho = strlen(palavra);

    j = (strlen(palavra) - 1);

    for (i = 0; i < tamanho; i++) {
        inversa[i] = palavra[j];
        j--;
    }

    for (i = 0; i < tamanho; i++) {
        if (inversa[i] == palavra[i]) {
            verifica++;
        }
    }

    if (verifica == tamanho) {
        printf("A palavra é palíndroma");
    } else {
        printf("A palavra não é palíndroma");
    }
}