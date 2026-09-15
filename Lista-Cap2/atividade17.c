#include <stdio.h>
#include <stdlib.h>

int main () {

    float raio; 
    float area;
    const float pi = 3.141593f;
    float circunferencia;

    printf("Qual o raio do circulo: ");
    scanf("%f", &raio);

    area = pi * (raio * raio);

    circunferencia = 2 *pi * raio;

printf("a area é : %.2f  e a circunferencia é: %.2f", area, circunferencia);
    return 0;
}