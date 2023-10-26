#include <stdio.h>

int main() {
    float salario1, salario2, salario3;
    float resultdo1, resultado2, resultado3;

    printf("Informe o primeiro salario: ");
    scanf("%f", &salario1);
    printf("Informe o segundo salario: ");
    scanf("%f", &salario2);
    printf("Informe o terceiro salario: ");
    scanf("%f", &salario3);

    resultado = (salario1 > 1000) ? salario1 * 1.05 : salario1 * 1.07;
}