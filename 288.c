/*  Criar dois vetores de 10 elementos cada, sendo que estes valores serão
informados pelo usuário. O programa deve calcular e exibir a quantidade de
elementos do vetor B que são maiores do que o 1º elemento do vetor A. Exiba
também essas posições. */

#include <stdio.h>

int main() {
    int vetorA[10];
    int vetorB[10];
    int quantidade = 0;

    for(int i = 0; i < 10; i++) {
        printf("Digite o %d valor do vetorA: ", i + 1);
        scanf("%d", &vetorA[i]);
    }

    for(int j = 0; j < 10; j++) {
        printf("Digite o %d valor do vetorB: ", j + 1);
        scanf("%d", &vetorB[j]);
    }

    for (int k = 0; k < 10; k++) {
        if (vetorB[k] > vetorA[0]) {
            printf("No indice %d, o valor %d é maior do que o primeiro elemento do vetorA\n", k, vetorB[k]);
            quantidade++;
        }
    }

    printf("\nA quantidade de elementos do vetorB maior do que o primeiro elemento do vetorA foi: %d", quantidade);
}