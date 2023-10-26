#include <stdio.h>

int main() {
    int nota1, nota2, nota3, opcao;
    float media;

    printf("Informe a primeira nota: ");
    scanf("%d", &nota1);
    printf("Informe a segunda nota: ");
    scanf("%d", &nota2);
    printf("Informe a terceira nota: ");
    scanf("%d", &nota3);

    printf("--- Que tipo de média deseja? ---\n");
    printf("[1] Média aritmética\n");
    printf("[2] Média ponderada\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1: {
            media = (nota1 + nota2 + nota3) / 3;
            printf("A média aritmética é %f", media);
            break;
        }
        case 2: { //Peso 3, 3, 6
            media = (nota1 * 3 + nota2 * 3 + nota3 * 4) / 10;
            printf("A média ponderad é %f", media);
            break;
        }
        default: {
            printf("Comando inválido");
        }
    }

}