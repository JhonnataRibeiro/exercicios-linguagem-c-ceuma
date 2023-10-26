#include <stdio.h>
#include <time.h>

int main() {
    int j, copia, i = 0, contador = 0, verifica = 0, numero = 0;
    int vetor[100];

    srand(time(NULL));

    numero = rand() % 101;
    vetor[i] = numero;
    i = 1;
    contador = 1;

    while (i != 100) {
        verifica = 0;
        numero = rand() % 101;

        for (i = 0; i <= contador; i++) {
            if (numero == vetor[i]) {
                verifica = 1;
                break;
            }
        }

        if (verifica) {
            continue;
        } else {
            vetor[i] = numero;
            i++;
            contador++;
        }
    }

    /* for (i = 0; i <= contador; i++) {
        printf("%d ", vetor[i]);
    } */
    //------------- ORDENAÇÃO ------------------------
    for (j = 1; j <= 100; j++) {
        for (i = 0; i < 100; i++) {
            if (vetor[i] > vetor[i + 1]) {
                copia = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = copia;
            }
        }
    }

    for (i = 0; i < 100; i++) {
        printf("%d ", vetor[i]);
    }
}