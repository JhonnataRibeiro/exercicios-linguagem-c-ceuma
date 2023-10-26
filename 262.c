#include <stdio.h>

int main() {
    int numero, somatorio, contador = 0;
    float media;

    printf("Digite um numero positivo: ");
    scanf("%d", &numero);
    
    if (numero >= 0) {
        somatorio += numero;
        contador = 1;
    }

    while (numero >= 0) {
        printf("Digite um numero positivo: ");
        scanf("%d", &numero);
        somatorio += numero;
        contador++;
    }

    media = somatorio / contador;

    printf("A média dos números informado é %f", media);
}