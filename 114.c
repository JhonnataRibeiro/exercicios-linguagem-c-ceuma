/* Escreva um programa que dada a idade de um nadador, classifique-o
em uma das seguintes categorias:

    Código Categoria:
        Menor de 5 anos Sem categoria.
        5 até 7 anos Infantil A
        8 até 10 anos Infantil B
        11 até 13 anos Juvenil A
        14 até 17 anos Juvenil B
        Maiores de 18 anos Adulto */

#include <stdio.h>

int main() {
    int idade;

    printf("Informe uma idade: ");
    scanf("%d", &idade);

    ((idade >= 1) && (idade < 5)) ? printf("Sem categoria") :
        ((idade > 5) && (idade <= 7)) ? printf("Infantil A") :
            ((idade >= 8) && (idade <= 10)) ? printf("Infantil B") :
                ((idade >= 11) && (idade <= 13)) ? printf("Juvenil A") :
                    ((idade >= 14) && (idade <= 17)) ? printf("Juvenil B") :
                        ((idade >= 18) && (idade <= 120)) ? printf("Adulto") : printf("Idade inválida");
}
