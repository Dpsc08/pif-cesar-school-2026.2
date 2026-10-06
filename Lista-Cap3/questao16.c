#include <stdio.h>

int main() {
    int senha = 2026;
    int tentativa;
    int i;
    int acertou = 0;

    for (i = 1; i <= 3; i++) {
        printf("Digite a senha: ");
        scanf("%d", &tentativa);

        if (tentativa == senha) {
            acertou = 1;
            break;
        }
    }

    if (acertou == 1) {
        printf("Acesso Concedido!\n");
        printf("Tentativas utilizadas: %d\n", i);
    } else {
        printf("Conta Bloqueada por Seguranca!\n");
    }

    return 0;
}