#include <stdio.h>

int main() {
    int i;
    float mes[12];
    float maior = 0.0, menor = 100.0;
    int id_maior, id_menor;
    //char mes_escrito[12] = {'Janeiro', 'Fevereiro', 'Março', 'Abril', 'Maio', 'Junho', 'Julho', 'Agosto', 'Setembro', 'Outubro', 'Novembro', 'Dezembro'};

    for (i = 0; i < 12; i++) {
        printf("Informe a temperatura média do mês %d: ", i + 1);
        scanf("%f", &mes[i]);
    }

    for (i = 0; i < 12; i++) {
        if (mes[i] > maior) {
            maior = mes[i];
            id_maior = i + 1;
        } else if (mes[i] < menor) {
            menor = mes[i];
            id_menor = i + 1;
        }
    }

    printf("\n");

    switch (id_maior) {
        case 1:
            printf("A maior temperatura foi %.2f no mês de Janeiro", maior);
            break;
        case 2:
            printf("A maior temperatura foi %.2f no mês de Fevereiro", maior);
            break;
        case 3:
            printf("A maior temperatura foi %.2f no mês de Março", maior);
            break;
        case 4:
            printf("A maior temperatura foi %.2f no mês de Abril", maior);
            break;
        case 5:
            printf("A maior temperatura foi %.2f no mês de Maior", maior);
            break;
        case 6:
            printf("A maior temperatura foi %.2f no mês de Junho", maior);
            break;
        case 7:
            printf("A maior temperatura foi %.2f no mês de Julho", maior);
            break;
        case 8:
            printf("A maior temperatura foi %.2f no mês de Agosto", maior);
            break;
        case 9:
            printf("A maior temperatura foi %.2f no mês de Setembro", maior);
            break;
        case 10:
            printf("A maior temperatura foi %.2f no mês de Outubro", maior);
            break;
        case 11:
            printf("A maior temperatura foi %.2f no mês de Novembro", maior);
            break;
        case 12:
            printf("A maior temperatura foi %.2f no mês de Dezembro", maior);
            break;
    }

    printf("\n");

    switch (id_menor) {
        case 1:
            printf("A menor temperatura foi %.2f no mês de Janeiro", menor);
            break;
        case 2:
            printf("A menor temperatura foi %.2f no mês de Fevereiro", menor);
            break;
        case 3:
            printf("A menor temperatura foi %.2f no mês de Março", menor);
            break;
        case 4:
            printf("A menor temperatura foi %.2f no mês de Abril", menor);
            break;
        case 5:
            printf("A menor temperatura foi %.2f no mês de Maior", menor);
            break;
        case 6:
            printf("A menor temperatura foi %.2f no mês de Junho", menor);
            break;
        case 7:
            printf("A menor temperatura foi %.2f no mês de Julho", menor);
            break;
        case 8:
            printf("A menor temperatura foi %.2f no mês de Agosto", menor);
            break;
        case 9:
            printf("A menor temperatura foi %.2f no mês de Setembro", menor);
            break;
        case 10:
            printf("A menor temperatura foi %.2f no mês de Outubro", menor);
            break;
        case 11:
            printf("A menor temperatura foi %.2f no mês de Novembro", menor);
            break;
        case 12:
            printf("A menor temperatura foi %.2f no mês de Dezembro", menor);
            break;
    }
}