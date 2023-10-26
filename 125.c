/* Um programa deve gerar todos os múltiplos de um número qualquer
inteiro positivo informado pelo usuário. O intervalo de múltiplos a serem
gerados é até 20. Validade a entrada. */

#include <stdio.h>

int main() {
    int numero, somatorio, contador = 1;

    printf("Informe um número para ver a sequencia de 20 vezes o dobro de se: ");
    scanf("%d", &numero);

    if (numero > 0) {
        while (contador <= 20) {
            somatorio = somatorio + numero;
            printf("%d\n", somatorio);
            contador ++;
        }
    } else {
        printf("[ERROR] Número negativo ou zero informado");
    }
}