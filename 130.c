/* O programa deve solicitar ao usuário que digite um número inteiro positivo e depois
calcule o somatório de todos os números pares no intervalo de 0 até o número
digitado */

#include <stdio.h>

int main() {
    int intervalo, pares, contador = 0;

    printf("Informe um número: ");
    scanf("%d", &intervalo);

    while (contador <= intervalo) {
        if (contador % 2 == 0) {
            pares ++;
        }
        contador ++;
    }

    printf("A quantidade de pares entre o intervalo é %d", pares);
}