/*  Atribuição de ponteiros
    Indireção multipla de ponteiros | Ponteiros para Ponteiros
    Podemos ter um ponteiro que aponte para outro ponteiro, o qual por sua vez aponta para uma variavel comum com um valor armazenado na memoria
    Em contraste com a Indireção simples, que ocorre quando um ponteiro aponta para uma variavel diretamente
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int a = 40;
    int *pont1;
    int **pont2;

    pont1 = &a;
    pont2 = &pont1;

    printf("O endereço da variavela é: %p\n", &a);
    printf("O endereço do ponteiro pont1 é: %p\n", &pont1);
    printf("O endereço do ponteiro pont2 é: %p\n", &pont2);
    printf("O endereço apontado por pont1 é: %p\n", pont1);
    printf("O endereço apontado po pont2 é: %p\n", pont2);
    printf("E o valor armazenado em a é: %d\n", **pont2);
    return 0;
}
