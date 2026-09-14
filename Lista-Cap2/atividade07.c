#include <stdio.h>
#include <stdlib.h>

int main() {

    int dia ;
    int mes;
    int ano;
    printf("Digite a data no formato dd/mm/aaaa: ");
    scanf("%d/%d/%d", &dia, &mes, &ano);


    printf("A data digitada invertida é : %d/%d/%d", ano, mes, dia);
    return 0 ;
      }