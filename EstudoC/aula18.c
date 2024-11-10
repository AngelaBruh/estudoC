/* Estruturas de Controle de Repetição:
    Estrutura WHILE
    Essa estrutura realiza um teste lógico no inicio do loop, e cada vez que o 
    teste retorna o valor verdadeiro, os comandos associados ao laço são executados.
    Quando o teste retorna fals, o laço é encerrado e o processamento volta para o
    fluxo principal do programa.

    while(condição){
        <instruções executadas enquanto condição verdadeira>
    }
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    printf("Primeiro exemplo: \n");
    int contador = 1;
    while(contador <= 10){
        printf("%d\n",contador);
        contador++;
    }


    printf("Segundo exemplo: \n");
    int contagem;
    float nota, media, total;
    total = 0;
    contagem = 1;
    while(contagem <= 4){
        printf("Digite a nota: \n");
        scanf("%f", &nota);
        total = total + nota;
        contagem++;
    }
    media = total / 4;
    printf("Nota media: %.2f\n", media);


    /* Retição Controlada com WHILE
        Imagine que é preciso escrever um algoritmo que processe um conjunto
        de dados repetidas vezes, mas NÃO sabemos de antemão quantas vezes o
        loop deve ser executado.
        Nesse caso, precisamos usar uma tecnica para controlar o numero de 
        repetições realizadas.
        Para isso usaremos uma flag, que é uma variavel utilizada como
        "sentinela", a qual determinará quando o laço while deve ser encerrado.
    */
    printf("Terceiro exemplo: \n");
    int contadora = 0;
    float valor, mediaa, totall;
    totall = 0;
    printf("Digite um valor (-1 para encerrar): \n");
    scanf("%f", &valor);
    while(valor != -1){
        totall = totall + valor;
        contadora ++;
        printf("Digite um valor (-1 para encerrar): \n");
        scanf("%f", &valor);
    }
    mediaa = totall / contadora;
    printf("Valor medio: %.2f\n", mediaa);

return 0;
}
