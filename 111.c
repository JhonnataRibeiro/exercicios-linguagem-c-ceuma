/* O programa deve calcular o valor final do produto, considerando o preço
normal de etiqueta e a escolha da condição de pagamento. Deste modo,
o vendedor deve informar o valor do produto e o código da condição de
pagamento. Utilize os códigos da tabela a seguir para ler qual a condição
de pagamento escolhida e efetuar o cálculo adequado e mostrar na tela
o valor final:

    Código Condição de pagamento
    1 À vista em dinheiro ou cheque, recebe 10% de desconto.
    2 À vista no cartão de crédito, recebe 5% de desconto.
    3 Em duas vezes, preço normal de etiqueta sem juros.
    4 Em três vezes, preço normal de etiqueta mais juros de 2%. */

#include <stdio.h>

int main() {
    int produto, opcao;
    float total;

    printf("Informe o valor do produto final: ");
    scanf("%d", &produto);
    printf("\n----- Forma de Pagamento -----\n");
    printf("[1] À vista - dinheiro ou cheque\n");
    printf("[2] À vista - cartão de crédito\n");
    printf("[3] Em duas vezes\n");
    printf("[4] Em três vezes\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    (opcao == 1) ? total = produto / 1.10 :
        (opcao == 2) ? total = produto / 1.05 :
            (opcao == 3) ? total = produto :
                (opcao == 4) ? total = total = produto * 1.02 : printf("[ERROR] Comando inválido");
    
    printf("Valor do produto: %d reais\n", produto);
    printf("Valor total com a forma de pagamento: %.2f", total);
}
