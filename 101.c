/* Crie um programa que receba dois numeros e coloque em ordem crescente */

#include <stdio.h>

int main() {
    int num1, num2;

    printf("Informe o valor do num1: ");
    scanf("%d", &num1);
    printf("Informe o valor do num2: ");
    scanf("%d", &num2);

    if (num1 > num2) { //No if vai fazer a condicional para saber quem é o maior
        printf("%d %d", num2, num1); //Aqui a variavel deve ser trocado na ordem crescente
    } else{
        printf("%d %d", num1, num2); 
    }
}
