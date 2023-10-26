#include <stdio.h>

int main() {
    int opcao, valor1, valor2, valor3 = 0.0;
    float resultado;

    printf("----- Calculadora -----\n");
    printf("[1] Adição\n");
    printf("[2] Subtração\n");
    printf("[3] Multiplicação\n");
    printf("[4] Divisão\n");
    printf("[0] Sair\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Informe o primeiro valor: ");
            scanf("%d", &valor1);
            printf("Informe o segundo valor: ");
            scanf("%d", &valor2);

            resultado = valor1 + valor2;

            printf("A adição de %d + %d é = %.0f", valor1, valor2, resultado);
            break;
        case 2:
            printf("Informe o primeiro valor: ");
            scanf("%d", &valor1);
            printf("Informe o segundo valor: ");
            scanf("%d", &valor2);

            resultado = valor1 - valor2;

            printf("A subtração de %d - %d é = %.0f", valor1, valor2, resultado);
            break;
        case 3:
            printf("Informe o primeiro valor: ");
            scanf("%d", &valor1);
            printf("Informe o segundo valor: ");
            scanf("%d", &valor2);

            resultado = valor1 * valor2;

            printf("A multiplicação de %d * %d é = %.0f", valor1, valor2, resultado);
            break;
        case 4:
            printf("Informe o primeiro valor: ");
            scanf("%d", &valor1);
            printf("Informe o segundo valor: ");
            scanf("%d", &valor3);

            if (valor2 == 0) {
                while (1) {
                    printf("[NOTICE] Não pode dividir zero\n");
                    printf("Informe o segundo valor: ");
                    scanf("%d", &valor3);

                    if (valor3 > 0) {
                        break;
                    } else {
                        continue;
                    }
                }
            }

            resultado = valor1 / valor3;

            printf("A divisão de %d / %d é = %.2f", valor1, valor3, resultado);
            break;
        case 0:
            printf("Saindo do programa...");
            break;
        default:
            printf("Comando inválido");
    }
}