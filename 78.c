#include <stdio.h>

int main() {
    int dinheiro;
    int opcao;
    float operacao;

    printf("Informe o dinheiro: ");
    scanf("%d", &dinheiro);

    printf("Qual conversao que deseja fazer?");
    printf("\n[1] Dolar para Real");
    printf("\n[2] Real para Dolar");
    printf("\nOpcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            operacao = dinheiro * 5.30;
            printf("Dolar -> Real: %.2f\n", operacao);
            break;
        case 2:
            operacao = dinheiro / 5.30;
            printf("Real -> Dolar: %.2f\n", operacao);
            break;
    }
}