#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade <= 5 || idade >= 60) {
        printf("Tem direito a gratuidade\n");
    } else {
        printf("Não tem direito a gratuidade\n");
    }

    return 0;
}
