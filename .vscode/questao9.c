há um problema em printf("%c", "\"") que espera uma int mas recebe um char  ajeitando esse erro traria a  resposta

    "Primeiro programa"
Pressione qualquer tecla para continuar. . .


O compilador C lê os caracteres entre aspas simples ('\n', '\t', '\"') 
e os converte em números inteiros equivalentes aos seus valores na tabela ASCII.
O modificador %c diz ao printf para pegar esses números e convertê-los de volta nas ações correspondentes na tela:
 quebrar a linha, dar a tabulação e desenhar a aspa dupla.