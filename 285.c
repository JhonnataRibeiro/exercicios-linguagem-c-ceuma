/* Faça um programa para calcular a média final de uma turma
composta por 60 alunos. A média de cada aluno deve ser informada
pelo usuário. */

#include <stdio.h>

int main() {
    float notas[5];
    float media = 0.0;

    for (int i = 0; i < 5; i++) {
        printf("Digite a media do aluno: ");
        scanf("%f", &notas[i]);

        media += notas[i];
    }

    media = media / 5.0;

    printf("A media da sala eh %.2f.", media);
}