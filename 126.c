/* Escreva um algoritmo que receba um número diversas vezes e mostre o
seu inverso (1/n). O algoritmo encerra quando o valor digitado é zero,
exibindo uma mensagem de erro que diz que não se pode dividir por
zero */

#include <stdio.h>

int main() {
    float numero;

    while (1) {
        printf("Informe o número para ver o inverso dele: ");
        scanf("%f", &numero);

        if (numero > 0) {
            printf("O numero inverso de %f, é %f\n", numero, 1/numero);
        } else if (numero == 0) {
            printf("[ERROR] Não é possivel dividir por zero\n");
            break;
        } else {
            printf("O numero inverso de %f, é %f\n", numero, 1/numero);
        }
    }
}