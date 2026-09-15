#include <stdio.h>
#include <stdlib.h>

int main() {
   
    float salarioBasico, salarioLiquido; 

    printf("Digite o salario basico do funcionario: ");
    scanf("%f", &salarioBasico);

    salarioLiquido = salarioBasico + 0.05 * salarioBasico - 0.07 * salarioBasico;

    printf("O salario liquido do funcionario é: %.2f", salarioLiquido);
    return 0;
}