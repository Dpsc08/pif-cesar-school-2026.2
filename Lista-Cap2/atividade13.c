#include <stdio.h>
#include <stdlib.h>

int main () {

    float base, altura;
    float areaTriangulo, areaRetangulo, areaQuadrado;

    printf("Digite a base do seu poligono: ");
    scanf("%f",&base);

    printf("Digite a altura do seu poligono: ");
    scanf("%f",&altura);

    areaTriangulo = (base * altura) / 2;
    areaRetangulo = base * altura;
    areaQuadrado = base * base;

    printf("Area do triangulo: %.2f \n Area do retangulo: %.2f \n Area do quadrado: %.2f\n", areaTriangulo, areaRetangulo, areaQuadrado); 
    return 0;
}