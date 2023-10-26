#include <stdio.h>

int main() {
    int idade;

    printf("Informe sua idade: ");
    scanf("%d", &idade);

    if (idade <= 5) {
        printf("Passe livre\n");
    } else {
        if (idade >= 60) {
            printf("Passe livre\n");
        } else {
            printf("Vai pagar porra\n");
        }
    }
}