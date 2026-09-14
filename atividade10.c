#include <stdio.h>
#include <stdlib.h>

int main()  {
    float temperaturaC, temperaturaF;
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &temperaturaC);
    temperaturaF = (temperaturaC * 9/5) + 32;
    printf("A temperatura em Fahrenheit é: %.2f\n", temperaturaF);
    return 0;
}