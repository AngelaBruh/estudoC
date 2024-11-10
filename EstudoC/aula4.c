/* Nomes de variaveis:
    Podem ter um ou mais caracteres;
    O primeiro caractere sempre é uma letra;
    Não pode ter espaços em branco;
    Não podem ser usados simbolos, além do underline;
    Podem ser usados números;
    Não podem ser palavras reservadas da linguagem.

    Em C é possivel realizar uma atribuição multipla, na qual um valor é atribuido a uma 
    variavel e esta variavel é atribuida a outra, em uma única linha de comandos:
    y = x = 10;
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int idade;
    float salario, valor;
    idade = 25;

    valor = 4500.50;
    salario = valor;
    printf("Idade %d\n", idade);
    printf("E o salario: %f\n", salario);

    return 0;
}