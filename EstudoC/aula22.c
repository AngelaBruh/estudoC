/*  Arrays unidimensionais:
    Um array é uma estrutura homogênea que mantem uma serie de elementos de dados de mesmo tipo;
    Podemos acessar os elementos individuais por meio de uma posição de indice, geralmente númerica.
    Possuem tamanho fixo.
    Um array de uma dimensão pode ser chamado de "Vetor"
    Um array bidimensional é conhecido como "Matriz"

    Sintaxe de um array unidimensional(Vetor):
    tipo nome_array [tamanho_array];
    Exemplo: float notas[4];
    Pode omitir o tamanho do array, porem informo o valores:
    float notas[] = {7.5, 8.0, 6.5, 3.5};
    Posso alterar o valor da primeira nota do primeiro indice:
    notas[0] = 8.0;
*/

#include <stdio.h>
#include <stdlib.h>

//Exemplo 1:
/*int main(){
    float notas [4] = {7.5, 8.0, 6.5, 3.5};
    int i;

    //Exibindo as notas armazenadas
    for(i = 0; i < 4; i++){
        printf("Nota %d = %4.2f\n", i +1, notas[i]);
    }
    return 0;
}*/

// Exemplo 2:
int main(){
    float notas [4];
    int i;

    //Lendo as notas
    for(i = 0; i < 4; i++){
        printf("Entre com a %d nota do aluno:\n", i+1);
        scanf("%f", &notas[i]);
    }

    //Exibindo as notas
    for (i = 0; i<4; i++){
        printf("Nota %d = %4.2f\n", i+1, notas[i]);
    }
    return 0;
}
