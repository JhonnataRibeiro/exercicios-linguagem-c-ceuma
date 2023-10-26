/* Solicitar que o usuário informe o valor do salário bruto e o valor do empréstimo
que ele deseja. Estes valores devem ser exibidos na tela */

#include <stdio.h>

int main() {
    float salario, emprestimo;

    printf("Informe o salário: ");
    scanf("%f", &salario);
    printf("Informe o empréstimo: ");
    scanf("%f", &emprestimo);

    printf("\nO salário é: %.3f\n", salario);
    printf("O empréstimo é: %.3f", emprestimo);
}