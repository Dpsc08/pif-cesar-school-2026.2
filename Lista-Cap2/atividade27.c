#include <stdio.h>
#include <stdlib.h>

int main() {
    int numeroAleatorio;
    int dado1, dado2, dado3;

    printf("Digite um numero qualquer para gerar a sorteio: ");
    scanf("%d", &numeroAleatorio);

    srand(numeroAleatorio);
    dado1 = (rand() % 6) + 1;
    dado2 = (rand() % 6) + 1;
    dado3 = (rand() % 6) + 1;

    printf("\nResultado do Dado 1: %d\n", dado1);
    printf("Resultado do Dado 2: %d\n", dado2);
    printf("Resultado do Dado 3: %d\n", dado3);

    return 0;
}