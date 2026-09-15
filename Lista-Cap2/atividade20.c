#include <stdio.h>
#include<stdlib.h>
#include <math.h>


int main () { 
    float cateto1, cateto2, hipotenusa;

    printf("digite o valor do cateto 1, cateto 2 : ");
    scanf("%f %f", &cateto1, &cateto2);
    hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));

    printf("o valor da hipotenusa é %.2f", hipotenusa);

return 0;

}