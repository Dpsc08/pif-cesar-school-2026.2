#include <stdio.h>
#include <stdlib.h>

int main() {
    int h, m, s, duracao;

    printf("Digite a hora de inicio: ");
    scanf("%d", &h);
    printf("Digite os minutos de inicio: ");
    scanf("%d", &m);
    printf("Digite os segundos de inicio: ");
    scanf("%d", &s);

    printf("Digite a duracao em segundos: ");
    scanf("%d", &duracao);

    s = s + duracao;

    m = m + (s / 60);
    s = s % 60; 
    h = h + (m / 60);
    m = m % 60;
    h = h % 24;

    printf("Horario de termino: %02d:%02d:%02d\n", h, m, s);

    return 0;
}