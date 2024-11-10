/*  A função printf pode:
    Arredondar valores de ponto flutuante com um número de casas decimais desejado;
    Alinhar colunas de números um abaixo do outro;
    Alinha à direita ou esquerda as saidas;
    Representar números de ponto flutuante em formato exponencial (notação cientifica);
    Inserir caracteres e textos em posições especificas;
    Mostrar qualquer tipo de dados em campos com tamanho e precisão fixos.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    // Especificação de conversão
    //Função printf - Exemplos
    printf("%d\n", 603);
    printf("%d\n", -603);
    printf("%i\n", 603);
    printf("%o\n", 603);
    printf("%u\n", -603);
    printf("%u\n", 603);
    printf("%x\n", 603);
    printf("%X\n", 603);
    printf("%f\n", 6032101.75);
    printf("%e\n", 6032101.75);
    printf("%e\n", -6032101.75);
    printf("%E\n", 6032101.75);
    printf("%s\n", "String de exemplo");
    printf("%c\n", 'T');


    int a;
    a = 12;

    printf("O valor da a e: %d", a);
    return 0;
}