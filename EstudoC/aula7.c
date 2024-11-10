/*  Funcao printf - Precisao
    A precisao com a qual os dados serao exibidos possui significado diferente para cada tipo.
    Quando usada com especificadores de conversao de inteiros, a precisao indica o numero minimo de digitos a serem impressos. Caso o avlor a ser mostrado tenha menos digitos que a precisao especificada, serao prefixados zeros até totalizar o numero de digitos equivalentes.
    Quando usada com especificadores de conversao de ponto-flutuante e, E ou f, a precisao é o numero de digitos que aparecerao apos o ponto decimal.
    Ao ser usada com especificadores de conversao de string (s), a precisao é o numero maximo de caracteres
    que serao mostrados da cadeia.
    Para usarmos a precisao, devemos inserir um ponto (.) seguido de um numero inteiro que representa a precisao desejada entre o sinal % e o especificador de conversao.
*/



#include <stdio.h>
#include <stdlib.h>

int main (){
    int x = 450;
    float f = 250.12345;
    char s[] = "Estudos em C";

    printf("Precisao em inteiros:\n");
    printf("%d\n", x);
    printf("%.5d\n", x);
    printf("%.12d\n", x);
    printf("\n\nPrecisao em ponto-flutuante:\n");
    printf("%f\n", f);
    printf("%.2f\n", f);
    printf("\n\nPrecisao em literais:\n");
    printf("%s\n", s);
    printf("%.5s\n", s);
    printf("%.18s\n", s);

    return 0;
}