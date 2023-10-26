#include <stdio.h>
#include <string.h>

int main() {
    int i;
    char nome[] = {"Jhonnata"};
    char copia[20];

    strcpy(copia, nome);

    for(i = 0; i < strlen(copia); i++) {
        if (copia[i] == 'a') {
            copia[i] = 'x';
        }
    }

    printf("Texto original: %s\n", nome);
    printf("Texto editado: %s", copia);
}