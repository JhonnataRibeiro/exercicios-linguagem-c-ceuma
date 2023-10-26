#include <stdio.h>

int main() {
    int numero = 8;

    numero == 1 ? printf("Domingo\n") :
        numero == 2 ? printf("Segunda\n") :
            numero == 3 ? printf("Terça\n") :
                numero == 4 ? printf("Quarta\n") :
                    numero == 5 ? printf("Quinta\n") :
                        numero == 6 ? printf("Sexta\n") :
                            numero == 7 ? printf("Sábado\n") : printf("Semana invalida\n");

    return 0;
}