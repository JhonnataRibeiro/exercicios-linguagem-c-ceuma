#include <stdio.h>

int main() {
    int i;
    int vetor[10];
    int total = 0, quantidade = 0, salario = 1100;
    float comissao, reajuste;

    for (i = 0; i < 10; i++) {
        printf("Digite o preço do produto verdido: ");
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < 10; i++) {
        total += vetor[i];
        quantidade++;
    }

    comissao = total * 0.05;
    reajuste = salario + comissao;

    printf("\nSalario atual: R$ %d reais.\n", salario);
    printf("Valor total das vendas: R$ %d reais.\n", total);
    printf("Quantidade de vendas: %d unidades.\n", quantidade);
    printf("Comissão das vendas: R$ %.2f reais.\n", comissao);
    printf("Salario reajustado: R$ %.2f reais.\n", reajuste);
}