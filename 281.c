// ) Escreva um programa que apresente ao usuário as opções: (a) Saldo; (b) Depósito,
//  (c) Saque e (x) Sair. O algoritmo deve repetir até que o usuário digite “x”. O valor
//  inicial do saldo é R$ 0,00. Se o usuário escolher a opção depósito, deve digitar o
//  valor do depósito e o saldo é incrementado. Caso o usuário escolha a opção
//  saque, deve digitar o valor a ser sacado e exibir mensagem “Saldo insuficiente” (se
//  não houver saldo) ou debitar o valor, alterando o saldo. Em ambas as opções, o
//  novo saldo é exibido.

#include <stdio.h>
#include <stdlib.h>

int main() {
    char opcao;
    float saldo = 0.0, dinheiro;

    while (opcao != 'x') {
        printf("|----- Opcoes -----|\n");
        printf("[a] Saldo\n");
        printf("[b] Deposito\n");
        printf("[c] Saque\n");
        printf("[x] Sair\n");
        printf("Escolha uma opcao: ");
        opcao = getchar();
        fflush(stdin);

        switch (opcao) {
            case 'a': {
                printf("\n[SALDO] O seu saldo e R$ %.2f reais.\n\n", saldo);
                break;
            }
            case 'b': {
                printf("\nDigite o saldo que vai depositar: ");
                scanf("%f", &dinheiro);
                fflush(stdin);
                saldo += dinheiro;
                printf("\n[SUCCESS] Deposito feito com sucesso.\n\n");
                break;
            }
            case 'c': {
                printf("\nDigite o valor do saque: ");
                scanf("%f", &dinheiro);
                fflush(stdin);
                if (dinheiro <= saldo) {
                    saldo = saldo - dinheiro;
                    printf("\n[SUCCESS] Saque feito com sucesso.\n\n");
                } else {
                    printf("\n[ERROR] Nao pode sacar um valor maior do que o saldo.\n\n");
                }
                break;
            }
        }

    }

    printf("\n[EXIT] Fim do programa...");
}