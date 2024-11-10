// Outro exemplo de sintaxe de Desvio Condicional Aninhado

/*  if(condição 1){
        instruções caso condição 1 retorne verdadeiro
    }
    else if(condição 2){
        instruções caso condição 2 retorne verdadeiro
    }
    else if(condição 3){
        <instruções caso condição 3 retorne verdadeiro>
    }
    else{
        <instruções caso as condições anteriores retornem falso>
    }
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float n1, n2;
    float media;
    printf("Digite a primeira nota:\n");
    scanf("%f", &n1);
    printf("Digite a segunda nota:\n");
    scanf("%f", &n2);
    media = (n1 + n2) / 2.0;
    if(media >= 7.0){
        printf("Aluno aprovado! \n");
    }    
    else if(media >= 5.0){
        printf("Aluno em recuperacao! \n");
    }
    else{
        printf("Aluno reprovado! \n");
    }   

    return 0;
}
