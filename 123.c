/* Um programa deve solicitar ao usuário que seja digitado um valor positivo. Faça
com que essa validação seja repetidamente realizada, até que esse número
positivo seja informado */

#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero < 0) {
        while (numero < 0) {
            printf("Digite um número: ");
            scanf("%d", &numero);
        }
        printf("Número positivo informado.");
    } else {
        printf("Número positivo informado.");
    }

    
}