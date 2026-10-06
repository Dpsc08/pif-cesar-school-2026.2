#include <stdio.h>

int main() {
    int a, b, i, j;
    int divisores;
    int soma = 0;

    do {
        printf("Digite A: ");
        scanf("%d", &a);
        printf("Digite B: ");
        scanf("%d", &b);

        if (a <= 0 || b <= 0 || a >= b) {
            printf("Valores invalidos! A tem que ser menor que B e ambos positivos.\n");
        }
    } while (a <= 0 || b <= 0 || a >= b);

    for (i = a; i <= b; i++) {
        divisores = 0;
        for (j = 1; j <= i; j++) {
            if (i % j == 0) {
                divisores++;
            }
        }
        if (divisores == 2) {
            printf("%d ", i);
            soma = soma + i;
        }
    }

    printf("\nSoma dos primos: %d\n", soma);

    return 0;
}