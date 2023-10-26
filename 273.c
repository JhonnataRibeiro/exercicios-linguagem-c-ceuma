/* Escreva um algoritmo que leia as duas notas de cinco alunos de uma turma, calcule 
e mostre:
    a) A média aritmética de cada aluno;
    b) A mensagem de aluno reprovado, caso a média seja menor que 6.0; a mensagem 
       de aluno em recuperação, caso a média esteja entre 6.0 e 7.0; a mensagem de 
       aluno aprovado, caso a média seja maior ou igual a 7.0;
    c) O total de alunos aprovados, o total de alunos reprovados e o o total de 
       alunos em recuperação;
    d) A média geral da turma. */

#include <stdio.h>

int main() {
    int nota1, nota2, intervalo = 0, aluno = 1;
    int total_alunos = 0, alunos_aprovado = 0, alunos_reprovado = 0, alunos_recuperacao = 0;
    float media = 0.0;
    float media_turma = 0.0;

    while (intervalo < 5) {
        nota1 = 0, nota2 = 0, media = 0.0;

        printf("Digite a primeira nota do %d aluno: ", aluno);
        scanf("%d", &nota1);
        if (nota1 >= 0 && nota1 <= 10) {
            total_alunos += nota1;
            printf("Digite a segunda nota do %d aluno: ", aluno);
            scanf("%d", &nota2);
            if (nota1 >= 0 && nota1 <= 10) {
                total_alunos += nota2;
                intervalo++;
                aluno++;
            } else {
                printf("[ERROR] nota invalida, dever ser entre 0 a 10.\n\n");
                continue;
            }
        } else {
            printf("[ERROR] nota invalida, dever ser entre 0 a 10.\n\n");
            continue;
        }

        media = (nota1 + nota2) / 2;

        if (media < 6) {
            printf("\nMedia do %d Aluno: %.2f - Situacao: Reprovado\n\n", aluno, media);
            alunos_reprovado++;
        } else if (media <= 6) {
            printf("\nMedia do %d Aluno: %.2f - Situacao: Recuperacao\n\n", aluno, media);
            alunos_recuperacao++;
        } else if (media <= 10) {
            printf("\nMedia do %d Aluno: %.2f - Situacao: Aprovado\n\n", aluno, media);
            alunos_aprovado++;
        }
    }

    media_turma = total_alunos / 5;

    printf("|----- RESUMO -----|\n");
    printf("%d ALunos Reprovados\n", alunos_reprovado);
    printf("%d ALunos de Recuperacao\n", alunos_recuperacao);
    printf("%d ALunos Aprovado\n", alunos_aprovado);
    printf("Media geral da turma: %.2f\n", media_turma);
}