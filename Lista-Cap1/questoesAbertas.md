Q5 - O código está inapto para ser utilizado da maneira que esta apresentada poís ele apresenta erros como:

Falta de incluir bibliotecas como: #include <stdio.h> e #include <stdlib.h>

Nao declara o tipo da função main 

Nao usa o comando de return 0 para encerrar devidamente o código.



Q6 - O código tem uma serie de falhas como:
faltam uso de bibliotecas
além de declarar varriaveis de maneira incorreta
não fecha as aspas no printf
falta da chave para no fim do código
 uso da variavel d que não foi definida 
 usa 4 variaveis no printf mas s ó tem 3 espaços reservados 
 

 Q7 - 
 a = 

    Bom dia! Shirley.

b = 
Você já tomou café?

c = 

A solução não existe!
Não insista.

d = 
Duas    linhas    de    saída
ou    uma?

e =
um
dois
três 

Q8 -
O código começa importando 2 livrarias de C e criando a função principal main
após isso ao executar esse código o programa começa lendo a função printf nela é utilizado o \n para pular uma linha
e após isso um\t para dar um espaço de tabulação, e após isso uma frase "Primeiro programa" e exibe para o usuario
Após isso é utilizado um system pause que suspende a execução do programa até que o usuario pressiona uma tecla para
continuar. e após isso é encerrado com o return 0.

    "Primeiro programa"
Pressione qualquer tecla para continuar...

Q9 - 
há um problema em printf("%c", "\"") que espera uma int mas recebe um char, ajeitando esse erro traria a  resposta

"Primeiro programa"
Pressione qualquer tecla para continuar. . .


O compilador C lê os caracteres entre aspas simples ('\n', '\t', '\"') 
e os converte em números inteiros equivalentes aos seus valores na tabela ASCII.
O modificador %c diz ao printf para pegar esses números e convertê-los de volta nas ações correspondentes na tela:
 quebrar a linha, dar a tabulação e desenhar a aspa dupla.


Q10 - 
A alternativa correta seria a B  pois: 

A linguagem C é case sensetive ou seja o seu compilador diferencia letras maiusculas de minusculas.
entao os identificadores pese Peso e PESO nao são iguais e ocupam tres espaços de memorias diferentes.

Q11 - 
\r        Sequência de escape           char
2130      Constante inteira decimal     int
-123      Constante inteira decimal     int
33.28     Constante de ponto flutuante  double
0XFA      Constante inteira hexadecimal int
0101      Constante inteira octal       int
2.0e30    Constante de ponto flutuante  double
\xDC      Sequência de escape           char
'\"'      Constante de caractere        char 
'\\'      Constante de caractere        char
'F'       Constante de caractere        char 
0         Constante inteira octal       int
'\0'      Constante de caractere        char 
"F"       Constante string              char 
-4567.89  Constante de ponto flutuante  double

Q12 - 
a) int a;              Correto        —
b) float b;             Correto        —
c) double float c;      Incorreto      "double" e "float" são dois especificadores de tipo base completos e mutuamente exclusivos; não é permitido combinar dois tipos base distintos na mesma declaração. O correto seria "double c;" ou "float c;", nunca os dois juntos.
d) unsigned char d;     Correto        "unsigned" é um modificador válido aplicável a char.
e) unsigned e;          Correto        "unsigned" sozinho é válido e equivale a "unsigned int".
f) long float f;        Incorreto      "long" só pode modificar "int" ou "double"; não existe combinação "long float" no C padrão . Era um sinônimo aceito no C antigo (K&R), mas não é válido no C moderno.
g) long g;              Correto        "long" sozinho equivale a "long int".
h) long double h;       Correto        "long double" é uma combinação válida de modificador + tipo base, representando ponto flutuante de precisão estendida.

Q13 - Resposta correta seria a letra C, 

Q14 - Respostas correta seria letra A,

Q15 - Resposta correta seria Letra C, 

Q16- Resposta correta seria letra C, 

a,b,c estao corretas enquanto a d esta errada pois falta os parênteses envolvendo os argumentos,

Q17 - 
O compilador C ignora espaços em branco, que servem apenas para organizar o código visualmente.
Porém, ele exige rigorosamente o uso de parênteses nas funções e do ponto e vírgula ao final das instruções.