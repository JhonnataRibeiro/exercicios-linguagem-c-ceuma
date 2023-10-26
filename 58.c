#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int minuto, segundo;

    printf("Informe o minuto para ver em segundos: ");
    scanf("%d", &minuto);

    segundo = minuto * 60;

    printf("O minuto informado foi %d, e em segundo %d\n", minuto, segundo);

    return 0;
}
