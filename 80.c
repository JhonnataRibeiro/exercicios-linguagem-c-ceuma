#include <stdio.h>

int main() {
    float salario;
    float resultado;
    int inteiro;

    printf("Informe o salario: ");
    scanf("%f", &salario);

    resultado = (salario > 1000) ? salario * 1.05 : salario * 1.07;

    inteiro = resultado;

    switch(inteiro) {
        case 1500:
            printf("sdfsdf");
        default:
            printf("sdfjsdkflsf");
    }

    printf("O reajuste é %f\n", resultado);

    
}