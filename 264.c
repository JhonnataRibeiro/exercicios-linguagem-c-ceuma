/* Faça um programa para calcular o reajuste de salário de um funcionário,
sendo o salário fornecido pelo usuário. Considere que o aumento também
será de acordo com o percentual informado pelo usuário. Calcule e exibia o
salário inicial e o salário reajustado. */

#include <stdio.h>

int main() {
    int salario, percentual;
    float reajuste;

    printf("Digite o salário: ");
    scanf("%d", &salario);
    printf("Digite o percentual do reajuste: ");
    scanf("%d", &percentual);

    reajuste = (salario * (percentual / 100.0)) + salario;

    printf("O salário reajustado é %.2f", reajuste);
}