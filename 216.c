/* Exercício de concatenação de nomes: */

#include <stdio.h>
#include <string.h>

int main() {
    char nome[] = {"Jhonnata"};
    char meio[] = {"Rodrigues"};
    char sobrenome[] = {"Ribeiro"};
    char espaco[] = {" "};

    strcat(nome, espaco);
    strcat(nome, meio);
    strcat(nome, espaco);
    strcat(nome, sobrenome);

    printf("%s", nome);
}