#include <stdio.h>

int main() {
    float valor, soma = 0, media;
    int qtd = 0;

    printf("Digite um valor (negativo para parar): ");
    scanf("%f", &valor);

    while (valor >= 0) {
        soma = soma + valor;
        qtd++;
        printf("Digite um valor (negativo para parar): ");
        scanf("%f", &valor);
    }

    if (qtd == 0) {
        printf("Nenhum valor valido foi digitado.\n");
    } else {
        media = soma / qtd;
        printf("Quantidade: %d\n", qtd);
        printf("Soma: %.2f\n", soma);
        printf("Media: %.2f\n", media);
    }

    return 0;
}