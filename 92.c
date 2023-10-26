/* Faça um programa que imprima as seguintes informações e no seguinte
formato:
Endereço: (coloque aqui seu endereço) 
CEP: (coloque seu CEP)
Fone: (no seguinte formato (098) 9555-8888
Município: (coloque seu município) 
Estado: (por extenso e Sigla): */

#include <stdio.h>

int main() {
    char endereco[30] = "av. mario martins";
    char cep[30] = "65230-000";
    char fone[30] = "(98) 9 32423-23423";
    char municipio[30] = "Cajapió";
    char estado[30] = "Maranhão MA";

    printf("%s\n", endereco);
    printf("%s\n", cep);
    printf("%s\n", fone);
    printf("%s\n", municipio);
    printf("%s\n", estado);
}