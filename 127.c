/* O programa deve apresentar a tabuada de multiplicação de um número
inteiro positivo qualquer informado pelo usuário. Validade a entrada */

#include <stdio.h>

int main() {
    int tabuada, contador = 1;

    printf("Informe a tabuada que deseja ver: ");
    scanf("%d", &tabuada);

    if (tabuada > 0) {
        while (1) {
            printf("%d x %d = %d\n", tabuada, contador, tabuada * contador);
            if (contador == 10) {
                break;
            }
            contador ++;
        }
    } else {
        printf("[ERROR] É impossivel ter tabuada de 0 ou com numero negativo");
    }
}