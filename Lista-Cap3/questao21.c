#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char secreta, palpite;
    int tentativas = 0;

    srand(time(NULL));
    secreta = rand() % 26 + 'a';

    printf("Adivinhe a letra minuscula de a ate z\n");

    do {
        printf("Digite uma letra: ");
        scanf(" %c", &palpite);
        tentativas++;

        if (palpite < secreta) {
            printf("A letra secreta vem depois de %c\n", palpite);
        } else if (palpite > secreta) {
            printf("A letra secreta vem antes de %c\n", palpite);
        }
    } while (palpite != secreta);

    printf("Parabens! Voce acertou em %d tentativas!\n", tentativas);

    return 0;
}