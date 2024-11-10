/*  Sequencias de Escape
    A maioria dos caracteres pode ser mostrada diretamente pela funcao printf. Porem, há alguns caracteres que precisam de formatacao especial para serem exibidos, como as aspas duplas (") que delimitam a string de conrole em si. Alguns outros caracteres de controle como tabulacao e o simbolo de porcentagem devem ser representado por sequencias de escape.
    Uma sequencia de escape é representada por uma barra invertida (\) seguida por caractere de escape.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Aspa simples: \' \n");
    printf("Aspa dupla: \? \n");
    printf("Barra invertida: \\ \n");
    printf("Mudar de linha: \n \n");
    printf("Tab: \t Tabulado \n");
    printf("Cursor no inicio da linha: \r \n");
    printf("Sinal sonoro: \a");

    return 0;
}