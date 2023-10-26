#include <stdio.h>
#include <string.h>

int main() {
    char palavra[50] = {"Mais!eu.sou.Eu sou feio demais"};
    char *ponteiro;

    ponteiro = strtok(palavra, "!. "); //Usando conjuntos para especificar o que vai ser cortado
    while (ponteiro) {
        printf("token: %s\n", ponteiro);
        ponteiro = strtok(NULL, "!. ");
    }
}