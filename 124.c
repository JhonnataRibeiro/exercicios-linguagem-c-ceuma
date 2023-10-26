/* Um programa deve receber o preço e a quantidade de 20 diferentes
produtos e mostrar o valor total da compra. Valide as entradas. */

#include <stdio.h>

int main() {
    int produto = 0;
    int somatorio = 0, contador = 1, limite = 1;

    while (limite <= 20){
        printf("Informe o preço do %dº produto: ", limite);
        scanf("%d", &produto);
        if (produto > 0) {
            somatorio = somatorio + produto;
            limite ++;
            contador ++;
        } else {
            printf("[ERROR] Valor negativo ou zero.\n");
        }
    }

    printf("O valor total dos produtos é R$ %d reais.", somatorio);
}