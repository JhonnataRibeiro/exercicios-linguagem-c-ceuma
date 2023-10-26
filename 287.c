/* Escreva um algoritmo que verifique se dois vetores são iguais. Os vetores devem
ter 10 elementos cada. */

#include <stdio.h>

int main() {
    int vetorA[5] = {10, 20, 30, 40, 50};
    int vetorB[5] = {10, 20, 30, 40, 50};
    int status = 0;
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (vetorA[i] == vetorB[j]) {
                status++;
                break;
            }
        }
    }

    if (status == 5) {
        printf("Os dois vetores sao iquais");
    } else {
        printf("Os dois vetores NAO sao iguais");
    }
}