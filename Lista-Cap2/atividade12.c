#include <stdio.h>
#include <stdlib.h>

int main () {

    int num;
    int ant;
    int prox;


    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    ant = num;
    --ant;
    prox = num;
    ++prox;

    printf("O numero digitado foi: %d | Antecessor: %d | Sucessor: %d\n", num, ant, prox);
    return 0;
}