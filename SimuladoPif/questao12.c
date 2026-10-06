#include <stdio.h>

int main() {
    float nota;

    do {
        printf("Digite uma nota entre 0 e 10: ");
        scanf("%f", &nota);

        if (nota < 0.0 || nota > 10.0) {
            printf("Nota invalida, Tente de novo.\n");
        }
    } while (nota < 0.0 || nota > 10.0);

    printf("Nota valida: %.1f\n", nota);

    return 0;
}