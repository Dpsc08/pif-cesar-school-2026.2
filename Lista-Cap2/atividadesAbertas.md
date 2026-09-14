1 - 
a) O valor mostrado é 2
b) é chamado de conversão implicita resultando no truncamento da parte fracionaria, Quando um valor do tipo ponto flutuante é atribuído a uma variável do tipo inteiro, o compilador converte automaticamente o valor descartando totalmente as casas decimais 
c) Pode declarar a variavel como float ou double

2 - 
a) A biblioteca <conio.h> deve ser evitada em programas atuais porque ela é antiga e só funciona no Windows, sendo invenção de uma empresa e não uma regra oficial do C.
b) Para ler uma letra do teclado usamos o getchar() ou fgetc(stdin), e para mostrar uma letra na tela usamos o putchar() ou fputc().
c)
 #include <stdio.h>

int main() {
    char c;
    printf("Digite algo: ");
    scanf(" %c", &c);
    printf("Caractere lido: %c\n", c);
    return 0;
}