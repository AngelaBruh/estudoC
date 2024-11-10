#include <stdio.h>
#include <stdlib.h>

int main(){
    //Descartando caracteres durante a leitura de uma string
    int dia, mes, ano;
    

    printf("Digite uma data no formato dd/mm/aa: ");
    scanf("%d%*c%d%*c%d", &dia, &mes, &ano); //separar a variaveis que informadas sequenciamente
    printf("\nDia: %d\n", dia);
    printf("\nMes: %d\n", mes);
    printf("\nAno: %d\n", ano);  

    return 0;
}