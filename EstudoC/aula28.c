/*  Estruturas - Definição e Atribuição
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct livro{ //Estrutura da variavel
    char nome[30];
    char autor[50];
    int paginas;
    float preco;    
}livro1, livro2; // Também é uma forma de criar uma variavel do tipo livro


//struct livro livro1; // struct para criar uma variavel do tipo livro, livro1 - variavel que vai ser criada
int main(){
    setlocale(LC_ALL,"");
    printf("Cadastrando livro\n");
    printf("\nDigite o nome do livro:\n");
    gets(livro1.nome); // Utilizando gets porque são strings
    printf("\nDigite o nome do autor:\n");
    gets(livro1.autor);
    printf("\nDigite o numero de páginas do livro:\n");
    scanf("%d", &livro1.paginas); // Utilizando scanf porque são numericos
    printf("\nEntre com o preço do livro:\n");
    scanf("%f", &livro1.preco);
    livro2 = livro1; // Posso copiar os dados de uma variavel para outra

    printf("\nO livro \"%s\" possui %d paginas e custa R$ %4.2f\n", livro1.nome, livro1.paginas, livro1.preco);
    printf("\nO livro 2 \"%s\" possui %d paginas e custa R$ %4.2f\n", livro2.nome, livro2.paginas, livro2.preco);

    return 0;
}



