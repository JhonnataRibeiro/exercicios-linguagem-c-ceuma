#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    if (nota1 >= 0 && nota1 <= 10) {
        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);
        if (nota2 >= 0 && nota2 <= 10) {
            printf("Digite a terceira nota: ");
            scanf("%f", &nota3);
            if (nota3 >= 0 && nota3 <= 10) {
                media = (nota1 + nota2 + nota3) / 3;
                printf("A media do aluno é %.2f", media);
            }
        }
    }
}



