#include <stdio.h>

int main() {
    char senha[7];

    do {
        printf("Digite a senha para fazer o login: ");
        scanf("%s", &senha);

        if (senha != 'jhonnata') {
            printf("Senha Invalida\n");
        } else if (senha == 'jhonnata') {
            break;
        }
    } while (1);
    
    printf("Acesso Permitido");
}