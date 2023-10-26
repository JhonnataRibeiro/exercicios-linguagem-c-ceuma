#include <stdio.h>

int main() {
    int i, j = 0, opcao;
    float vetor[10], vetor2[10];

    for (i = 0; i < 10; i++) {
        printf("Digite um número real: ");
        scanf("%f", &vetor[i]);
    }

    do {
        printf("\n----- MENU -----\n");
        printf("[1] Imprimir o vetor na ordem normal.\n");
        printf("[2] Imprimir o vetor na ordem inversa.\n");
        printf("[0] Encerrar programa.\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("\n");
                for (i = 0; i < 10; i++) {
                    printf("%.2f ", vetor[i]);
                }
                break;
            case 2:
                printf("\n");
                for (i = 9; i >= 0; i--) {
                    vetor2[j] = vetor[i];
                    j++;
                }

                for(i = 0; i < 10; i++) {
                    printf("%.2f ", vetor2[i]);
                }
                break;
            case 0:
                printf("\nEncerrando programa...");
                break;
        }
    } while (opcao != 0);
}