#include <stdio.h>
#include <stdlib.h>

int main() {
    float horasNormais, horasExtras;
    float salarioBruto, excedente, imposto;

    printf("Digite o total de horas normais trabalhadas no ano: ");
    scanf("%f", &horasNormais);

    printf("Digite o total de horas extras trabalhadas no ano: ");
    scanf("%f", &horasExtras);

    salarioBruto = (horasNormais * 10.0) + (horasExtras * 15.0);
    excedente = (salarioBruto > 12000.0) ? (salarioBruto - 12000.0) : 0.0;
    imposto = excedente * 0.10;

    printf("\nSalario anual bruto: R$ %.2f\n", salarioBruto);
    printf("Imposto de renda a pagar: R$ %.2f\n", imposto);

    return 0;
}