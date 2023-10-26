#include <stdio.h>

int main() {
    char texto[20] = {"Texto qualquer que será alterado"};

    printf("Digite seu nome: ");
    scanf("%20[^\n]", &texto);

    printf("%s", texto);
}