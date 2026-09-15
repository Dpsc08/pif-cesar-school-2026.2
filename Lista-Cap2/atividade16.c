#include <stdio.h>
#include <stdlib.h>

int main() {
    float alturaDegrau, alturaTotal;
    int quantidade;

    printf("Digite a altura de cada degrau em cm: ");
    scanf("%f", &alturaDegrau);

    printf("Digite a altura Total em metro: ");
    scanf("%f", &alturaTotal);

    quantidade = (alturaTotal * 100) / alturaDegrau ;
   
    printf("A quantidade minima é de degraus é: %d", quantidade);

    return 0;
}