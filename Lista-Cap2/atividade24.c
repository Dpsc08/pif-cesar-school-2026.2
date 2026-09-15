#include <stdio.h>
#include <stdlib.h>

int main() {
    float kmh, ms;

    printf("Digite a velocidade em km por hora: ");
    scanf("%f", &kmh);

    ms = kmh / 3.6;

    printf("A velocidade em metros por segundo é: %.2f m/s ", ms);
    return 0;
}