#include <stdio.h>

int main() {
    int idade;
    char sexo;

    printf("Informe seu sexo [f] ou [m]: ");
    scanf("%c", &sexo);
    printf("Informe sua idade: ");
    scanf("%d", &idade);

    if (sexo == 'm' && idade == 18) {
        printf("Alistamento obrigatório\n");
    } else if (sexo == 'm' && idade < 18) {
        printf("Ainda vai se alistar\n");
    } else if (sexo == 'm' && idade > 18) {
        printf("Já se alistou\n");
    } else if (sexo = 'f') {
        printf("Dispensado\n");
    }
}