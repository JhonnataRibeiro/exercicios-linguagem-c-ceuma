/* Escreva um algoritmo que determine o ano em que a população brasileira supera
ou iguala a população americana. O usuário deverá informar as populações e o
ano referente a estas informações. Além disso, o cálculo do reajuste da população
brasileira deve ser de 4% ao ano e a americana de 2% ao ano. */

#include <stdio.h>

int main() {
    int eua, brasil, anos = 0, ano_atual = 2023;

    eua = 331900000;
    brasil = 214300000;

    while (brasil < eua) {
        eua = eua * 1.02;
        brasil = brasil * 1.04;
        anos ++;
    }

    printf("A população brasileira vai superar a população dos estadunidenses em %d anos.\n", ano_atual + anos);
    printf("----- Estatísticas -----\n");
    printf("População do Brasil: %d habitantes.\n", brasil);
    printf("População dos Estados Unidos: %d habitantes.\n", eua);
    printf("Quantidade de anos até a superação: %d anos.", anos);

}