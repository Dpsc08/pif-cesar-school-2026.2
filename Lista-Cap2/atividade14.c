#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float ladoa, ladob, ladoc;
    float area;
    float semiperimetro;

    printf("Digite o valor do lado A, B e C do triangulo: ");
    scanf("%f %f %f", &ladoa, &ladob, &ladoc);

    semiperimetro = (ladoa + ladob + ladoc) / 2.0;

    area = sqrt(semiperimetro * (semiperimetro - ladoa) * (semiperimetro - ladob) * (semiperimetro - ladoc));

    printf("A area do triangulo é : %.2f\n", area);


}