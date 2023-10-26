/* Exercício de busca: Crie um programa em C que utilize o laço de repetição "for" para buscar um número em um vetor de inteiros e imprimir sua posição na tela. Se o número não for encontrado, o programa deve imprimir uma mensagem informando que ele não está presente no vetor. */

#include <stdio.h>

int main() {
    int vetor[] = {10, 20, 30, 40, 50};
    int i, numero, posicao = -1;

    printf("Digite um numero para buscar no vetor se tem igual: ");
    scanf("%d", &numero);

    for (i = 0; i < 5; i++) {
        if (vetor[i] == numero) {
            posicao = i;
        }
    }

    if (posicao != -1) {
        printf("O número foi encontrado na posição %d", posicao);
    } else {
        printf("%d o número não foi encontrado no vetor", posicao);
    }
}