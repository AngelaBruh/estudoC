/* Os dados são as informações a serem processadas por um computador.
    Podem ser classificados em varias categorias, dependendo de suas caracteristicas.
    Tipos básicos - aritméticos inteiros, ponto fluante
    Tipos de enumeração
    Tipo void
    Tipos derivados (structs, arrays, ponteiros, unions, etc.)

    Operador sizeof é usado para descobrir o tamanho de um tipo ou variavel.

    Tipo lógico - bool
    Em C o valor inteiro 1 é considerado como lógico true (verdadeiro)
    Enquamto o valor inteiro 0 é considerado como lógico false (falso)
    Qualquer valor diferente de 0 será tratado como verdadeiro
    Para usar o tipo lógico bool deve incluir a biblioteca stdbool.h
    No caso de utilização da versão mais antiga do C, pode se "criar" um tipo lógico
    com o seguinte código: typedef enum {false=0, true=1} logico;

*/

#include <stdio.h>

void main(){
    printf("Tamanho de armazenamento para o tipo int: %d\n",sizeof(int));
    printf("Tamanho de armazenamento para o tipo short: %d\n",sizeof(short));
    printf("Tamanho de armazenamento para o tipo long: %d\n",sizeof(long));

    printf("Tamanho de armazenamento para o tipo float: %d\n",sizeof(float));
    printf("Tamanho de armazenamento para o tipo double: %d\n",sizeof(double));
    printf("Tamanho de armazenamento para o tipo long double: %d\n",sizeof(long double));
}