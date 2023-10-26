/* Faça um programa para calcular o reajuste de salário de um funcionário,
sendo o salário fornecido pelo usuário. Considere que o aumento também
será de acordo com o percentual informado pelo usuário. Calcule e exibia o
salário inicial e o salário reajustado. */

#include <stdio.h>

int main() {
    int salario = 0, reajuste = 0;
    float novo_salario = 0;
    float porcentagem;

    printf("Informe o salário atual: ");
    scanf("%d", &salario);
    printf("Informe o percentual do reajuste: ");
    scanf("%d", &reajuste);

    porcentagem = reajuste / 100.0;
    novo_salario = salario + (salario * porcentagem);


    printf("Salário: %d\n", salario);
    printf("Reajuste: %d\n", reajuste);
    printf("Salário Reajustado: %.0f\n", novo_salario);
}