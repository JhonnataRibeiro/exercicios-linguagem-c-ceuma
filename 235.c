/* Exercício 3: Substituir todas as ocorrências de uma substring em uma string por outra substring */

#include <stdio.h>
#include <string.h>

int main() {
    char texto[] = {"eu amo voce, mas voce não ama como eu amo, por isso amo mais"};
    char procura[] = {"amo"};
    char substituicao[] = {"odeio"};
    
    char *ponteiro = strstr(texto, procura);

    while (ponteiro != NULL) {
        strncpy(ponteiro, substituicao, strlen(texto));
        ponteiro = strstr(ponteiro + 1, procura);
    }

    printf("%s", texto);
}