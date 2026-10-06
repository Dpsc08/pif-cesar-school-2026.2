#include <stdio.h>

int main() {
    int n, i;
    long long int fat = 1;

    printf("Digite um numero: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Erro: nao existe fatorial de numero negativo!\n");
    } else {
        for (i = 2; i <= n; i++) {
            fat = fat * i;
        }
        printf("%d! = %lld\n", n, fat);
    }

    return 0;
}