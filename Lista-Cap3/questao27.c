#include <stdio.h>

int main() {
    int valor;
    int c100 = 0, c50 = 0, c20 = 0, c10 = 0, c5 = 0, c2 = 0;

    printf("Digite o valor do saque: ");
    scanf("%d", &valor);

    if (valor <= 0) {
        printf("Valor invalido!\n");
        return 0;
    }

    while (valor >= 100) {
        valor = valor - 100;
        c100++;
    }
    while (valor >= 50) {
        valor = valor - 50;
        c50++;
    }
    while (valor >= 20) {
        valor = valor - 20;
        c20++;
    }
    while (valor >= 10) {
        valor = valor - 10;
        c10++;
    }
    while (valor >= 5) {
        valor = valor - 5;
        c5++;
    }
    while (valor >= 2) {
        valor = valor - 2;
        c2++;
    }

    printf("Notas de 100: %d\n", c100);
    printf("Notas de 50: %d\n", c50);
    printf("Notas de 20: %d\n", c20);
    printf("Notas de 10: %d\n", c10);
    printf("Notas de 5: %d\n", c5);
    printf("Notas de 2: %d\n", c2);

    if (valor > 0) {
        printf("Sobrou R$ %d que nao da pra sacar com essas notas.\n", valor);
    }

    return 0;
}