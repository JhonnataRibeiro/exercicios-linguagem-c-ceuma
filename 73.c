#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    int opcao;

    printf("1 - Cadastrar produto\n");
    printf("2 - Vender produto\n");
    printf("3 - Buscar produto\n");
    printf("4 - Imprimir\n");
    printf("5 - Sair\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            printf("\nCadastrando novo produto.\n");
            break;
        case 2:
            printf("\nVerdendo um produto.\n");
            break;
        case 3:
            printf("\nBuscando novo produto.\n");
            break;
        case 4:
            printf("\nImprimindo produto.\n");
            break;
        case 5:
            printf("\nSaindo...\n");
            break;
        default:
            printf("\nOp��o invalida.\n");
    }

    return 0;
}
//Aula 50