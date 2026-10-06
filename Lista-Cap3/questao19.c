#include <stdio.h>

int main() {
    int n, i;
    long long int a = 1, b = 1, prox;

    printf("Digite o numero do termo: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Termo invalido!\n");
    } else {
        for (i = 1; i <= n; i++) {
            if (i <= 2) {
                printf("%d: 1\n", i);
            } else {
                prox = a + b;
                printf("%d: %lld\n", i, prox);
                a = b;
                b = prox;
            }
        }
    }

    return 0;
}