/* Deseja-se calcular a conta de consumo de energia elétrica de um
consumidor. Para isto, escreva um programa que leia o código do
consumidor, o preço do Kw e a quantidade de Kw consumido. O programa
deve exibir ao final o código do consumidor e valor total a pagar.

    Regra de cálculo:
Total a pagar = preço do Kw x quantidade de kw consumida + taxa de
iluminação pública de R$ 25,50. */

#include <stdio.h>

int main() {
    int preco_kw, quantidade_kw;
    float total;

    printf("Informe o preço do Kw: ");
    scanf("%d", &preco_kw);
    printf("Informe a quantidade de consumo Kw: ");
    scanf("%d", &quantidade_kw);

    total = (preco_kw * quantidade_kw) + 25.50;

    printf("----- Resumo Conta -----\n");
    printf("Total da conta: R$ %.2f reais\n", total);
    printf("Valor do Kw: R$ %d reais\n", preco_kw);
    printf("Quantidade de consumo %d Kw\n", quantidade_kw);
    printf("Taxa de iluminação pública R$ 25,50 reais");
}