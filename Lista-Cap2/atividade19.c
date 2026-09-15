#include <stdio.h>
#include<stdlib.h>

int main () {

    float valorTotal, valorLiquido ;
    float taxaFixa = 30.0 ;
    int dias;

    printf("quantos dias ao total ele trabalhou: ");
    scanf("%d",&dias);

valorTotal = dias * taxaFixa ;
valorLiquido = valorTotal -  valorTotal * 0.08 ;

printf("o valor total é %.2f e o valor liquido é: %.2f", valorTotal, valorLiquido) ;

return 0;



}