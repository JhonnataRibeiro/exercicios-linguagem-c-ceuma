#include <stdio.h>

int main() {
    int numero;
    
    printf("Informe um numero: ");
    scanf("%d", &numero);

    switch (numero) {
        case 9:
            printf("O número é 9");
            break;
        default:
            printf("aiainnnn");
    }
    
    return 0;
}