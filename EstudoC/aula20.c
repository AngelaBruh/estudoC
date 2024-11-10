/*  Função
    Não pode criar uma função dentro de outra função, é sempre fora do main.
    Chamar uma função = executar função
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void escrevaNome();//Antes de compilar, tem de declarar a função antes do main | Prototipo da função
int main(){
    setlocale(LC_ALL, ""); // Corregi o erro ortografico na compilação do codigo
    escrevaNome();
    return 0;
}

void escrevaNome(){//Função void não retorna valores
    printf("Bem-vindo ao Curso de C\n");
    return 0; //Deve ser colocado para finalizar a função, mesmo que não retorne valor
} 







