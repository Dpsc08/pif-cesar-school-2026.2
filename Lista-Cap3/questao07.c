#include <stdio.h>

int main() {
    int i;

    for (i = 0; i <= 100; i++) {
        printf("%d ", i);
    }
    printf("\n");

    i = 0;
    while (i <= 100) {
        printf("%d ", i);
        i++;
    }
    printf("\n");

    i = 0;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 100);
    printf("\n");

    return 0;
}

/* O for e o mais adequado, porque ja sabemos que vai de 0 a 100,
   entao inicio, condicao e incremento ficam todos na mesma linha. */