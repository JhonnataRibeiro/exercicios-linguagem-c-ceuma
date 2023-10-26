#include <stdio.h>

int main() {
    int i, j;
    int matriz[3][3];

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite o valor da linha %d da coluna %d: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}