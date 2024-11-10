/*  Entrada de dados - Funcao scanf
    Lê valores digitados no teclado, formata-os e os armazena em variaveis na memoria.
    Sintaxe:
    scanf (string_controle_formatação, argumentos);
    A string_controle_formatação descreve os formatos das entradas, e os outros argumentos são ponteiros para variaveis nas quais as entradas serão armazenadas.
    Ao usarmos o scanf indicamos o endereço da variavel de armazenamento do dado lido prefixando-a com o caractere &
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int inteiro1;
    float F1, F2;
    char letra;
    char frase[15];

    printf("Digite um numero inteiro: ");
    scanf("%d", &inteiro1);
    printf("Digite dois numeros de ponto flutuante: ");
    scanf("%f%f", &F1,&F2);
    printf("Digite um caractere: ");
    scanf(" %c", &letra);
    printf("Digite uma frase: ");
    scanf("%s", &frase);

    printf("\nNumero inteiro: %d\n", inteiro1);
    printf("Ponto flutuante: %.2f e %.2f\n", F1, F2);
    printf("Caractere %c\n", letra);
    printf("Frase: %s\n\n", frase);

    return 0;
}