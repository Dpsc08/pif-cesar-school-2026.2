#include <stdio.h>

int main() {
    int n, digito;
    int inverso = 0;

    printf("Digite um numero positivo: ");
    scanf("%d", &n);

    while (n > 0) {
        digito = n % 10;
        inverso = inverso * 10 + digito;
        n = n / 10;
    }

    printf("Numero invertido: %d\n", inverso);

    return 0;
}