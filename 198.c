#include <stdio.h>
#include <string.h>

int main() {
    char palavra[50] = {"Bom dia simpatia!"};
    char procura[] = {"uia"};
    char *ponteiro;

    // procurando string dentro de string
    ponteiro = strstr(palavra, procura);

    if (ponteiro) {
        printf("%c%c%c", *ponteiro, *(ponteiro +1), *(ponteiro + 2));
    } else {
        printf("Ponteiro nulo.");
    }
}