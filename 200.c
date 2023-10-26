#include <stdio.h>
#include <string.h>

int main() {
    char palavra[50] = {"Eu sou feio demais"};
    char *ponteiro;

    ponteiro = strtok(palavra, " ");
    while (ponteiro) {
        printf("token: %s\n", ponteiro);
        ponteiro = strtok(NULL, " ");
    }
}