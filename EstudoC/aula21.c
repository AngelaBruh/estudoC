/*  Escopo de variaveis:
    O escopo de uma variavel determina como e onde uma variavel poderá ser
    utilizada dentro de um programa.
    Existem três escopos distintos em C:
    Local - Não são acessadas fora da função e nem utilizadas por outras funções.
    Paramêtro de Função - São variaveis locais à função, só são acessadas pela função.
    Global - São declaradas fora das funções incluindo a main(), é acessivel por qualquer parte do programa.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exemplo de variavel global:
void escrevaValor();
int numero = 15;
int main(){
    setlocale(LC_ALL, "");
    printf("O numero é %d\n", numero);
    escrevaValor();
    return 0;
}

void escrevaValor(){
    int dobro = numero * 2;
    printf ("E o dobro é %d\n", dobro);
}*/

//Exemplo de variavel local:
void escrevaValor();
int main(){
    setlocale(LC_ALL, "");
    //printf("O numero é %d\n", numero);
    escrevaValor();
    return 0;
}

void escrevaValor(){
    int numero = 15;
    int dobro = numero * 2;
    printf ("E o dobro é %d\n", dobro);
}