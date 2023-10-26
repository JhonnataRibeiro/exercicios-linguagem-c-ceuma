#include <stdio.h>

int main() {
    float salario, resultado;

    printf("Informe o salario: ");
    scanf("%f", &salario);

    resultado = ((salario >= 1000) && (salario <= 2000)) ? salario * 1.10 :
        ((salario >= 2000) && (salario <= 5000)) ? salario * 1.07 :
            (salario > 5000) ? salario * 1.05 : salario;

    printf("O reajuste é %f", resultado);
}