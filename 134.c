#include <stdio.h>

int main() {
    int lado1, lado2, lado3;

    printf("Informe o lado1 do triângulo: ");
    scanf("%d", &lado1);
    printf("Informe o lado2 do triângulo: ");
    scanf("%d", &lado2);
    printf("Informe o lado3 do triângulo: ");
    scanf("%d", &lado3);

    if (lado1 == lado2 && lado2 == lado3) {
        printf("Equilátero");
    } 
    else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
        printf("Isósceles");
    } 
    else {
        printf("Escaleno");
    }
}