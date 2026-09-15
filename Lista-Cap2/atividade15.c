#include <stdio.h>
#include <stdlib.h>
int main() {

    float nota1, nota2, nota3, nota4;
    float mediaAritmetica, mediaPonderada;

    printf("Digite todas as notas em ordem: ");
    scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);

    mediaAritmetica = (nota1 + nota2 + nota3 + nota4) / 4.0;
    mediaPonderada = (nota1 * 1 + nota2 * 1 + nota3 * 2 + nota4 * 2) / 6.0;

    printf("A media aritmetica eh: %.2f\n", mediaAritmetica);

    printf("A media ponderada eh: %.2f\n", mediaPonderada);
    return 0;
}