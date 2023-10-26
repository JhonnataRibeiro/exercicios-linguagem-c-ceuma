/* Faça um programa que solicite dois valores numéricos ao usuário, n1 e n2. E
depois, troque o conteúdo destas duas variáveis e exibi-las novamente. */

#include <stdio.h>

int main() {
    int numero1, numero2, backup;

    printf("Digite o valor do numero1: ");
    scanf("%d", &numero1);
    printf("Digite o valor do numero2: ");
    scanf("%d", &numero2);

    backup = numero1;
    numero1 = numero2;
    numero2 = backup;

    printf("%d %d", numero1, numero2);
}