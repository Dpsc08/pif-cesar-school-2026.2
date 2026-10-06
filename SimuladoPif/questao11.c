#include <stdio.h>

int main() {
    int dias;
    float bruto, gratificacao, imposto, liquido;

    printf("Dias trabalhados: ");
    scanf("%d", &dias);

    bruto = dias * 45.0;
    gratificacao = bruto * 0.05;
    imposto = bruto * 0.08;
    liquido = bruto + gratificacao - imposto;

    printf("\n--- HOLERITE ---\n");
    printf("Dias trabalhados: %d\n", dias);
    printf("Salario bruto: R$ %.2f\n", bruto);
    printf("Gratificacao (5%%): R$ %.2f\n", gratificacao);
    printf("Imposto de renda (8%%): R$ %.2f\n", imposto);
    printf("Salario liquido: R$ %.2f\n", liquido);

    return 0;
}