#include <stdio.h>

int main() {
    int numero = 0, soma025 = 0, soma2650 = 0, soma50 = 0;

    printf("Informe um número: ");
    scanf("%d", &numero);

    if (numero >= 0) {
        while (numero >= 0) {
            if ((numero >=0) && (numero <= 25)) {
                soma025 ++;
            } else if ((numero >= 26) && (numero <= 50)) {
                soma2650 ++;
            } else if (numero > 50) {
                soma50 ++;
            }

            printf("Informe um número: ");
            scanf("%d", &numero);
        }
    }

    printf("%d\n", soma025);
    printf("%d\n", soma2650);
    printf("%d\n", soma50);
}