/* Faça um programa que solicite dois valores numéricos ao usuário, n1 e n2. E
depois, troque o conteúdo destas duas variáveis e exibi-las novamente. */

#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Informe o primeiro numero: ");
    scanf("%d", &num1);
    printf("Informe o segundo numero: ");
    scanf("%d", &num2);

    num3 = num1;
    num1 = num2;
    num2 = num3;

    printf("%d\n", num1);
    printf("%d\n", num2);
}