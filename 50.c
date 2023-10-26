#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int idade;
    char sexo;

    printf("Informe seu sexo [f] ou [m]:");
    scanf("%c", &sexo);

    printf("Informe sua idade: ");
    scanf("%d", &idade);

    if (sexo == 'm') {
        if (idade == 18) {
            printf("Alistamento obrigatório\n");
        } else {
            printf("Dispensado\n");
        }
    } else {
        printf("Não obrigatório\n");
    }

    return 0;
}
