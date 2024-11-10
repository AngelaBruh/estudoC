/*  Ponteiro em C:
    Indireção Simples
    Uma variavel especial que armazena endereços de memoria, em vez de valores comuns.
    No geral é a posição na memoria de uma outra variavel.
    A variavel que contem esse endereço aponta para outra variavel.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int *x, valor, y;
    valor = 35;
    x = &valor; //Atribuindo o endereço de valor a x;
    y = *x; //Atribuindo o conteudo da variavel apontada por x a y;

    printf("Endereço da variavel comum valor: %p\n", &valor); // & - operador de endereço, posso atribuir ou visualizar endereço
    printf("Lendo o conteúdo do ponteiro x: %p\n", x);
    printf("Endereço da variavel ponteiro x: %p\n", &x);
    printf("Conteúdo da variavel apontada por x: %d\n", *x);
    printf("Conteúdo da variavel comum y: %d\n", y);

    return 0;
}
