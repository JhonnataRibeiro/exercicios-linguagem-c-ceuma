#include <stdio.h>

int main() {
    int idade;

    printf("Informe sua idade: ");
    scanf("%d", &idade);

    if (idade <= 5 || idade >= 60) {
        printf("Passe livre\n");
    } else {
        printf("Vai pagar porra\n");
    }
}