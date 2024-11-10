/*  Funcao printf - Tamanhos de Campos
    O tamanho exato de um campo no qual os dados sao mostrados é especificado por um tamanho de campo.
    Para representar o tamanho do campo desejado devemos inserir um inteiro entre o simbolo % e o
    especificador de conversao.
    Caso o campo seja mais largo do que os dados a serem mostrados, os dados serao alinhados a direita
     do campo.
 */

#include <stdio.h>
#include <stdlib.h>

int main (){
    //Trabalhando com tamanhos de campos:
    printf("%d\n", 6);
    printf("%5d\n", 6);
    printf("%10d\n", 6);
    printf("%10d\n", 700);
    printf("%c\n", 'T');
    printf("%1C\n", 'A');
    printf("%2c\n", 'B');
    printf("%3c\n", 'C');
    printf("%4c\n", 'D');
    printf("%10f\n", 23.8);
    //Alinhando os caracteres a esquerda com sinal de -
    printf("%-10d\n", 700);
    
    return 0;
}
