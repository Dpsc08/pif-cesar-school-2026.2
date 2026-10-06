01 - 
a) O while testa a condição antes de executar, então pode não rodar nenhuma vez. O do-while executa o bloco e só depois testa, então roda pelo menos uma vez.

b) O for é melhor quando se sabe quantas repetições serão feitas. O while serve quando a repetição depende de uma condição e pode nem acontecer. O do-while é bom quando o bloco precisa rodar ao menos uma vez, como em menus e validação de entrada.

c) É erro de lógica, não de compilação. O ; vira um corpo vazio, e se a condição for verdadeira o programa fica num laço infinito, porque nada dentro dele muda a condição.

02 - 
a) soma foi declarada dentro do bloco do for, então não existe fora dele e o printf não a enxerga.

b) Porque soma = 0 é executado a cada volta, então ela nunca acumula e sempre vale só o i * i da iteração atual.

c) 
#include <stdio.h>
#include <stdlib.h>
int main() {
    int i;
    int soma = 0;
    for (i = 1; i < 10; i++) {
        soma += i * i;
    }
    printf("Soma final = %d\n", soma);
    system("PAUSE");
    return 0;
}

03 - 
a) 36 18 9 4 2 1

b) O laço lê um caractere com getch() e imprime o caractere seguinte da tabela ASCII (se digitar A, imprime B), parando quando digitar X. Os parênteses são necessários porque != tem precedência maior que =, e sem eles o getch() seria comparado com 'X' primeiro e o resultado (0 ou 1) é que seria atribuído a ch.

c) Usando break dentro do laço com uma condição, ou return / exit().

04 - 
a) O break encerra o laço na hora e o programa continua na primeira instrução depois dele.

b) O continue pula o resto do corpo e vai para a próxima iteração. No for, a expressão executada logo depois é o incremento, e em seguida o teste.

c) Só o laço interno é interrompido. O laço externo continua normalmente.

05 - 
a) 5 iterações.

b)

i = 0, j = 10 | soma = 10
i = 1, j = 9 | soma = 10
i = 2, j = 8 | soma = 10
i = 3, j = 7 | soma = 10
i = 4, j = 6 | soma = 10

O laço para quando i = 5 e j = 5, pois 5 < 5 é falso.

c)

c
i = 0;
j = 10;
while (i < j) {
    printf("i = %d, j = %d | soma = %d\n", i, j, i + j);
    i++;
    j--;
}

06 - 
a) Imprime Valor final de x = 6.

b) O x++ < 5 compara com o valor antigo e depois incrementa. Compara 0 < 5 (x vira 1), 1 < 5 (x vira 2), 2 < 5 (x vira 3), 3 < 5 (x vira 4), 4 < 5 (x vira 5) e por último 5 < 5, que é falso, mas o x ainda é incrementado para 6.

c)
int x = 0;
while (x < 5) {
    x++;
}
x++;
printf("Valor final de x = %d\n", x);


