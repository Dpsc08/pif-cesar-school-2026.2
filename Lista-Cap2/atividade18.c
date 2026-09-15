#include <stdio.h>
#include <stdlib.h>

int main () {

    float raioEsfera ;
    float area ;
    const float pi = 3.141593f ;
    float volume;



    printf("Digite o raio da esfera: " );
    scanf("%f",&raioEsfera);

    area = 4 * pi * (raioEsfera * raioEsfera);
    volume =  (4.0/3.0) * pi * (raioEsfera * raioEsfera * raioEsfera);

    printf("a area da superficie é %.2f e o volume é igual a %.2f ", area, volume);

    return 0;

}