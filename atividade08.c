#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero;
    int quadrado;
    float decima_parte;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);


    quadrado = numero * numero;
    decima_parte = (float) numero / 10.0; 

    printf("Quadrado: %d\n", quadrado);
    printf("Decima parte: %.2f\n", decima_parte);

    return 0;
}