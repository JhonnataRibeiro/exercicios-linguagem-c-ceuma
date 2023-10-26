/* Construa um programa que leia um número de 1 a 12 e informa o trimestre
do ano correspondente. Se o número não corresponder a um mês do ano,
deve ser exibida uma mensagem de erro. */

#include <stdio.h>

int main() {
    int mes;

    printf("Informe o mes em numero, de 1 a 12: ");
    scanf("%d", &mes);

    (mes == 1) ? printf("Janeiro") :
        (mes == 2) ? printf("Fevereiro") :
            (mes == 3) ? printf("Março") :
                (mes == 4) ? printf("Abril") :
                    (mes == 5) ? printf("Maio") :
                        (mes == 6) ? printf("Junho") :
                            (mes == 7) ? printf("Julho") :
                                (mes == 8) ? printf("Agosto") :
                                    (mes == 9) ? printf("Setembro") :
                                        (mes == 10) ? printf("Outubro") :
                                            (mes == 11) ? printf("Novembro") :
                                                (mes == 12) ? printf("Dezembro") : printf("Mês informado inválido");
}