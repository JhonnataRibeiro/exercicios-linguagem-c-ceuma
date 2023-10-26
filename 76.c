#include <stdio.h>

int main() {
    int numero1, numero2, numero3, numero4, numero5;
    int negativo = 0, positivo = 0;

    printf("Informe o primeiro numero: ");
    scanf("%d", &numero1);
    printf("Informe o segundo numero: ");
    scanf("%d", &numero2);
    printf("Informe o quinto numero: ");
    scanf("%d", &numero3);
    printf("Informe o quarto numero: ");
    scanf("%d", &numero4);
    printf("Informe o quinto numero: ");
    scanf("%d", &numero5);

    if (numero1 >= 0) {
        positivo ++;
    } else {
        negativo ++;
    }
    if (numero2 >= 0) {
        positivo ++;
    } else {
        negativo ++;
    }
    if (numero3 >= 0) {
        positivo ++;
    } else {
        negativo ++;
    }
    if (numero4 >= 0) {
        positivo ++;
    } else {
        negativo ++;
    }
    if (numero5 >= 0) {
        positivo ++;
    } else {
        negativo ++;
    }

    printf("Postivos: %d, Negativos: %d", positivo, negativo);

}