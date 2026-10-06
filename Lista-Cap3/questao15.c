#include <stdio.h>

int main() {
    int num, i;
    int achou = 0;

    printf("Digite um numero positivo: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d ", i);
            achou = 1;
        }
    }

    if (achou == 0) {
        printf("Nenhum numero encontrado.");
    }
    printf("\n");

    return 0;
}