#include <stdio.h>

int main() {
    float nota, maior, menor, soma = 0, media;
    int total = 0;

    printf("Digite a nota (-1 para parar): ");
    scanf("%f", &nota);

    while (nota != -1.0) {
        if (nota >= 0.0 && nota <= 10.0) {
            if (total == 0) {
                maior = nota;
                menor = nota;
            }
            if (nota > maior) {
                maior = nota;
            }
            if (nota < menor) {
                menor = nota;
            }
            soma = soma + nota;
            total++;
        } else {
            printf("Nota invalida!\n");
        }
        printf("Digite a nota (-1 para parar): ");
        scanf("%f", &nota);
    }

    if (total == 0) {
        printf("Nenhuma nota digitada.\n");
    } else {
        media = soma / total;
        printf("Total de alunos: %d\n", total);
        printf("Maior nota: %.1f\n", maior);
        printf("Menor nota: %.1f\n", menor);
        printf("Media: %.2f\n", media);
    }

    return 0;
}