#include <stdio.h>
#include <stdlib.h>

int main() {
    float comprimento, largura, precoMetro;
    float perimetro, totalArame, custoTotal;

    printf("Digite o comprimento do terreno (em metros): ");
    scanf("%f", &comprimento);

    printf("Digite a largura do terreno (em metros): ");
    scanf("%f", &largura);

    printf("Digite o preco do metro do arame (em reais): ");
    scanf("%f", &precoMetro);

    perimetro = (comprimento + largura) * 2;
    totalArame = perimetro * 3;
    custoTotal = totalArame * precoMetro;

    printf("a quantidade de arame necessária é: %.2f metros e o custo total sera de R$ %.2f\n", totalArame, custoTotal);

    return 0;
}