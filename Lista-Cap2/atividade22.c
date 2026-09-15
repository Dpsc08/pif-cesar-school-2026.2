#include <stdio.h>
#include <stdlib.h>

int main() {

    char letraMaiscula, letraMinuscula;
    printf("Digite uma letra maiuscula: ");
    scanf("%c", &letraMaiscula);

    letraMinuscula = letraMaiscula + 32;

    printf("A letra minuscula correspondente é: %n", letraMinuscula);

return 0;

}