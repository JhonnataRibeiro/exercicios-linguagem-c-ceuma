/* Um programa deve receba uma quantidade indeterminada de números positivos e
informar quantos deles estão no intervalo de 0 a 25, quantos estão no intervalo de
26 a 50 e quantos são maiores que 50. O algoritmo deve parar quando o usuário
digitar um número negativo. Valide a entrada */

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