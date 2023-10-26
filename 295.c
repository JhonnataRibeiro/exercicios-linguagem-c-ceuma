/* Faça um programa que leia uma matriz A que armazene 12
nomes de pessoas informados pelo usuário. O algoritmo deverá
procurar na matriz se existe um determinado nome que foi
informado pelo usuário. Caso exista, exibir uma mensagem
avisando que encontrou e em qual posição da matriz. Caso não,
exibir uma mensagem de que o nome não foi encontrado. */

#include <stdio.h>

int main() {
    char matriz[3][4][30] = {
        {"Jhonnata", "Helena", "Sofia", "Carla"},
        {"Laura", "Fernanda", "Giovanna", "Juliana"},
        {"Ester", "Poliana", "Karina", "Natalia"}
    };

    printf("Visualizando a MATRIZ:\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%s ", matriz[i][j]);
        }
        printf("\n");
    }

    // Buscando o nome na matriz
    char nome[30] = "Giovanna";


    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (nome == matriz[i][j]) {
                printf("Foi localizado");
                break;
            }
        }
    }
}