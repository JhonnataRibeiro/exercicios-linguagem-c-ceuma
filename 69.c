#include <stdio.h>

int main() {
    int idade;
    char sexo;

    printf("Informe seu sexo [f] ou [m]: ");
    scanf("%c", &sexo);
    printf("Informe sua idade: ");
    scanf("%d", &idade);

    if (sexo == 'm') {
        if (sexo == 18) {
            printf("Alistamento obrigatório\n");
        } else {
            printf("Dispensado\n");
        }
    } else {
        printf("Dispensado\n");
    }
}