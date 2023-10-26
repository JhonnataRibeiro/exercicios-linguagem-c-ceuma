#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 9999; i++) {
        if (i % 7 == 0) {
            printf("%d ", i);
        }
    }
}