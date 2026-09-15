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

4) 
Para a instrução a += b + c;, o C resolve primeiro a soma do lado direito (2 + 3 = 5). Em seguida, soma esse resultado ao valor original de a (1 + 5), fazendo a = 6.

Na instrução b *= c = d + 2;, a conta é feita da direita para a esquerda. Primeiro d + 2 dá 6, que é guardado em c. Depois fazemos b * 6 (2 * 6), deixando c = 6 e b = 12.

Na instrução d %= a + a + a;, a soma 6 + 6 + 6 dá 18. Depois tiramos o resto da divisão de d por 18 (4 % 18). Como 4 é menor que 18, não dá para dividir e o resto continua sendo o próprio valor, mantendo d = 4.

Na instrução d -= c -= b -= a;, resolvemos em cadeia da direita para a esquerda: primeiro b = 12 - 6 (b vira 6), depois c = 6 - 6 (c vira 0) e por fim d = 4 - 0 (d continua 4). Ficamos com b = 6, c = 0 e d = 4.

Na instrução a += b += c += 7;, também resolvemos da direita para a esquerda: primeiro c = 0 + 7 (c vira 7), depois b = 6 + 7 (b vira 13) e por último a = 6 + 13 (a vira 19).

Ao final de todas as operações, os valores são: a = 19, b = 13, c = 7 e d = 4.

5) 
a), na expressão i < j + 3, a soma 2 + 3 dá 5. Como 1 é menor que 5, o resultado é 1 (verdadeiro).
b), na expressão 2 * i - 7 <= j - 8, resolvemos a aritmética primeiro: o lado esquerdo resulta em -5 e o lado direito em -6. Como -5 não é menor nem igual a -6, o resultado é 0 (falso).
c), em -x + y >= 2.0 * y, o lado esquerdo resulta em 1.1 e o lado direito em 8.8. Como 1.1 não é maior nem igual a 8.8, o resultado é 0 (falso).
d), a comparação x == y testa se 3.3 é igual a 4.4, o que é mentira, resultando em 0 (falso).
e), em !(n - j), o parêntese resolve 2 - 2 = 0. O operador de negação ! inverte o valor 0 (falso) para 1 (verdadeiro).
f), em !n - j, a negação !n converte o valor 2 (verdadeiro) em 0. Em seguida, a subtração 0 - 2 resulta no valor -2 (que equivale a falso em contextos lógicos).
g), em i && j && k, como todos os números (1, 2 e 3) são diferentes de zero, todos são lidos como verdadeiros, resultando em 1 (verdadeiro).
h), em i || j - 3 && k, como a primeira variável i vale 1 (verdadeiro), a regra de curto-circuito do C aprova a operação || imediatamente, resultando em 1 (verdadeiro).
i), em i < j && 2 >= k, a primeira parte é verdadeira (1 < 2), mas a segunda parte é falsa (2 >= 3). Como o operador && exige que ambos sejam verdadeiros, o resultado é 0 (falso).
j), na expressão i == 2 || j == 4 || k == 5, todas as comparações de igualdade são falsas (1 == 2, 2 == 4 e 3 == 5). Como nenhuma opção é verdadeira, o resultado final do || é 0 (falso).

6)
a) No incremento prefixado (++n), o C soma 1 antes de usar o valor, então o Trecho A imprime n = 6, x = 6. No pós-fixado (m++), o C usa o valor atual primeiro e só soma 1 depois, fazendo o Trecho B imprimir m = 6, y = 5.

b) A instrução com múltiplos n no mesmo printf() gera um comportamento indefinido porque o C não garante a ordem em que calcula os argumentos de uma função. Dependendo do compilador, a leitura pode ser feita da esquerda para a direita ou vice-versa, gerando resultados totalmente diferentes e imprevisíveis.

