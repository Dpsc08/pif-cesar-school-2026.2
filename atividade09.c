#include <stdio.h>
#include <stdlib.h>

int main()  {
    int num1, num2 ;
    int soma, prod, dif;
    float quac; 

    printf("Digite dois numeros inteiros:  " );  
    scanf("%d %d", &num1, &num2);

    soma = num1 +num2; 
    prod = num1 * num2 ;
    dif = num1 - num2;
    quac = (float) num1 / num2;

    printf ("Soma: %d | Produto: %d | Diferenca: %d | Quociente: %.2f\n", soma, prod, dif, quac);

    return 0;
}