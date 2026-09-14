#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int num;

    printf("digite o numero: ");
    scanf("%d", &num);

    quad = num * num;
    decima = (float) num / 10.0;
    printf("o quadrado de %d é: %d e a decima parte é : %.2f",num, quad, decima);
    return 0 ;
 }