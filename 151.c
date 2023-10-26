#include <stdio.h>

int main() {
    int nota1, nota2;
    float media;

    printf("Digite a primeira nota: ");
    scanf("%d", &nota1);

    if (nota1 >= 0 && nota1 <= 10) {
        printf("Digite a segunda nota: ");
        scanf("%d", &nota2);

        if (nota2 >= 0 && nota2 <= 10) {
            media = (nota1 + nota2) / 2;
            printf("A média do aluno é %.1f", media);
        } else {
            printf("[ERROR] nota2 inválida.");
        }
    } else {
        printf("[ERROR] nota1 inválida.");
    }
}