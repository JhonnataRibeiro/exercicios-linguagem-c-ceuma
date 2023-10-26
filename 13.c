#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char sexo;
    int idade;
    float peso, altura;

    printf("Informe o sexo: ");
    scanf("%c", &sexo);

    printf("Informe a idade: ");
    scanf("%d", &idade);

    printf("Informe o peso: ");
    scanf("%f", &peso);

    printf("Informe a altura: ");
    scanf("%f", &altura);

    printf("\nDados:");
    printf("Sexo: %c\n", sexo);
    printf("Idade: %d\n", idade);
    printf("Peso: %f\n", peso);
    printf("Altura: %f\n", altura);

    return 0;
}
