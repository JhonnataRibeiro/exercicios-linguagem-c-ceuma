#include <stdio.h>
#include <string.h>

int main() {
    int i, j, verifica = 0, tamanho;
    char palavra[50];
    char inversa[50];
    char copia[50];

    printf("Digite uma palavra: ");
    scanf("%[^\n]", &palavra);

    tamanho = strlen(palavra);

    j = 0;
    for (i = 0; i < tamanho; i++) {
        if (palavra[i] != ' ') {
            copia[j] = palavra[i];
            j++;
        }
    }

    j = (strlen(copia) - 1);

    tamanho = strlen(copia);
    for (i = 0; i < tamanho; i++) {
        inversa[i] = copia[j];
        j--;
    }

    for (i = 0; i < tamanho; i++) {
        if (copia[i] == inversa[i]) {
            verifica++;
        }
    }

    /* printf("%s\n%s\n%s", palavra, inversa, copia); */

    if (verifica == tamanho) {
        printf("A palavra é palíndroma");
    } else {
        printf("A palavra não é palíndroma");
    }
}