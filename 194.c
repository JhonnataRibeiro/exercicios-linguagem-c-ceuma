#include <stdio.h>
#include <string.h>

int main() {
    char string1[20] = {"aola"};
    char string2[20] = {"abacate"};

    printf("Resultado: %d", strcmp(string1, string2));
        //Resultados:
        // 0 as strings são iguais
        // -1 a string1 for menor que a string2 (isso pela primeira letra em ordem alfabetica, caso as duas primeiras for iguais e comparado a segunda letra)
        // 1 a string1 for maior que a string2
}