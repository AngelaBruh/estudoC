/* Arrays Bidimensionais em C: Matrizes
Uma matriz tem linhas e colunas, e cada uma delas começando com indice 0
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define  NUM_L 5
#define NUM_C 4

int main(){

    setlocale(LC_ALL, "");
    int linha, coluna;

    float notas[NUM_L][NUM_C] =    {{7.5, 6.8, 9.6, 6.7},
                                    {6.5, 6.3, 8.4, 7.6},
                                    {5.7, 8.6, 9.0, 4.5},
                                    {4.5, 5.8, 6.8, 7.0},
                                    {3.6, 7.6, 8.1, 6.5}};

    printf("Exibindo o conteudo da matriz declarada e inicializada:\n\n");

    for(linha=0; linha<NUM_L; linha++){
        for(coluna=0; coluna<NUM_C; coluna++){
            printf("%5.1f", notas[linha][coluna]);
        }
        printf("\n");
    }
    printf("\nValor  do elemento na 2ª linha, 3ª coluna: %4.2f\n", notas[1][2]);

    return 0;
}
