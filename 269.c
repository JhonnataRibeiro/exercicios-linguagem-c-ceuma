/* Um programa deve receber o preço e a quantidade de 20 diferentes
produtos e mostrar o valor total da compra. Valide as entradas. */

#include <stdio.h>

int main() {
    int numero, contador = 1, total = 0;

    do {
        printf("Informe o valor do %d produto: ", contador);
        scanf("%d", &numero);

        if (numero > 0) {
            total += numero;
            contador++;
        }
    } while (contador <= 20);

    printf("\nO total da compra e R$%d reais", total);
}