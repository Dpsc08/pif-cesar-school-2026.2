#include <stdio.h>
#include <stdlib.h>

int main() {
    char caractere;
    
    printf ("Digite um caractere: ");
    scanf ("%c", &caractere);

    printf ("O caractere digitado foi: %c\n e o seu codigo ASCII é %d\n", caractere, caractere);

    return 0;

}    
/*O tipo char na linguagem C nada mais é do que um número inteiro de 8 bits (1 byte)
 que guarda a posição daquele caractere na Tabela ASCII. Essa tabela funciona como um
  mapa onde cada letra, símbolo ou número do teclado ganha um código exclusivo, como o 
  'A' maiúsculo que vale 65, permitindo que o computador entenda e exiba o caractere 
  correto na tela.*/
