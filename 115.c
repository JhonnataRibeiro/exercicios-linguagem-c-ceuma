/* Escreva um programa que pergunte ao usuário qual é o seu sabor de sorvete favorito e imprima uma mensagem correspondente a esse sabor. */

#include <stdio.h>

int main() {
    int opcao;

    printf("Informe seu sabor de sorvete preferido: \n");
    printf("[1] Morango\n");
    printf("[2] Chocolate\n");
    printf("[3] Coco\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Sabor preferido Morango");
            break;
        case 2:
            printf("Sabor preferido Chocolate");
            break;
        case 3:
            printf("Sabor preferido Coco");
            break;
        default:
            printf("Comando inválido");
    }
}