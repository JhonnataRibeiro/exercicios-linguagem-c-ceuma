/* Faça um programa que imprima as seguintes informações e no seguinte
formato:
    Endereço: (coloque aqui seu endereço) 
    CEP: (coloque seu CEP)
    Fone: (no seguinte formato (098) 9555-8888
    Município: (coloque seu município) 
    Estado: (por extenso) 
    Sigla Estodo: */

#include <stdio.h>

int main() {
    char endereco[] = "Av. Jardim Tropical";
    char cep[] = "65110-000";
    char fone[] = "(98) 9 3263-2342";
    char municipio[] = "São Luís";
    char estado[] = "Maralhão";
    char sigla[] = "MA";

    printf("%s\n", endereco);
    printf("%s\n", cep);
    printf("%s\n", fone);
    printf("%s\n", municipio);
    printf("%s\n", estado);
    printf("%s", sigla);
}
