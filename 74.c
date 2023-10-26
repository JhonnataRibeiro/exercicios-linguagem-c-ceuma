#include <stdio.h>

int main() {
    char opcao;

    printf("a - Cadastrar produto\n");
    printf("b - Vender produto\n");
    printf("c - Buscar produto\n");
    printf("d - Imprimir\n");
    printf("e - Sair\n");
    printf("Opcao: ");
    scanf("%c", &opcao);

    switch (opcao) {
        case 'a':
            printf("\nCadastrando novo produto\n");
            break;
        case 'b':
            printf("\nVendendo produto\n");
            break;
        case 'c':
            printf("\nBuscando produto\n");
            break;
        case 'd':
            printf("\nImprimindo\n");
            break;
        case 'e':
            printf("\nSaindo...\n");
            break;
        default:
            printf("\nOpcao invalida\n");
    }
}