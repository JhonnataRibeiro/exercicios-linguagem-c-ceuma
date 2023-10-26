/* O programa deve solicitar o valor do salário bruto e o valor do empréstimo.
Se o valor do empréstimo for menor que 20% do salário, imprimir:
“Empréstimo pode ser concedido”, caso contrário “Empréstimo não pode
ser concedido”. O programa deve exibir o valor máximo que pode ser
emprestado. */

#include <stdio.h>

int main() {
    float salario, emprestimo, maximo;

    printf("Informe o valor do salário bruto: ");
    scanf("%f", &salario);
    printf("Informe o valor do empréstimo: ");
    scanf("%f", &emprestimo);

    (emprestimo <= (salario * 0.20)) ? printf("Empréstimo pode ser concedido") : printf("Empréstimo não pode ser concetido\nValor máximo que pode ser solicitado: %.2f", (salario * 0.20));
}