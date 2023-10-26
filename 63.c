#include <stdio.h>

int main() {
    int numero = 6;

    numero == 1 ? printf("Janeiro\n") :
        numero == 2 ? printf("Fevereiro\n") :
            numero == 3 ? printf("Março\n") :
                numero == 4 ? printf("Abril\n") :
                    numero == 5 ? printf("Maio\n") :
                        numero == 6 ? printf("Junho\n") :
                            numero == 7 ? printf("Julho\n") :
                                numero == 8 ? printf("Agosto\n") :
                                    numero == 9 ? printf("Setembro\n") :
                                        numero == 10 ? printf("Outubro\n") :
                                            numero == 11 ? printf("Novembro\n") :
                                                numero == 12 ? printf("Dezembro\n") : printf("Mes invalido\n");

    return 0;
}