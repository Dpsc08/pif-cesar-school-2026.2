 /* no começo do codigo ele erra ao colocar um ; após o <stdlib.h>, 
 Utilizou letra maiscula no Main de maneira inadequada, 
 Utiliza os chaves como os parenteses
 Utiliza os parenteses como chaves para abertura e fechamento do main
 esquece do uso de aspas no printf
 utilizou um comando que é de c++
 após a função main, no printf ele utiliza uma variavel que nao foi determinada antes,*/
 
 /* Codigo Corretor seria esse */
 
#include <stdio.h>
#include <stdlib.h>

int main() {

    printf("Existem %d semanas no ano.\n", 52);
    
    system("PAUSE");
    
    return 0;

}