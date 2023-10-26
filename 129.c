/* Um programa deve solicitar 10 valores quaisquer informados pelo usuário e calcular
a quantidade de valores positivos e a quantidade de valores negativos. Validade a
entrada. Valide a entrada */

#include <stdio.h>

int main() {
    int numero, positivo = 0, negativo = 0, contador = 1;

    while (1) {
        printf("Informe o valor do %dº numero: ", contador);
        scanf("%d", &numero);

        if (numero >= 0) {
            positivo ++;
        } else {
            negativo ++;
        }

        if (contador == 10){
            break;
        }
        contador ++;
    }

    printf("Quantidade de numeros positivos é %d\n", positivo);
    printf("Quantidade de numeros negativo é %d", negativo);
}