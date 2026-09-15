#include <stdio.h>
#include <stdlib.h>

int main () {

    float ang ;
    const float pi = 3.141593;
    float rad;

    printf ("Digite um angulo em graus: ");
    scanf ("%f", &ang);

    rad = ang * (pi /180.0);

    printf ("O angulo %.2f em radianos eh: %.4f\n", ang, rad);
return 0;
}