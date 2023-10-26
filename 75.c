#include <stdio.h>

int main() {
    int a, b, c;

    printf("Informe o valor de A: ");
    scanf("%d", &a);
    printf("Informe o valor de B: ");
    scanf("%d", &b);
    printf("Informe o valor de C: ");
    scanf("%d", &c);

    if ((a > b) && (b > c)) {
        printf("O maior:\nA: %d\nB: %d\nC: %d\n", a, b, c);
    } else if ((b > a) && (a > c)) {
        printf("O maior:\nB: %d\nA: %d\nC: %d\n", b, a, c);
    } else if ((c > a) && (a > b)) {
        printf("O maior:\nC: %d\nA: %d\nB: %d\n", c, a, b);
    } else {
        printf("O maior:\nC: %d\nB: %d\nA: %d\n", c, b, a);
    }

}