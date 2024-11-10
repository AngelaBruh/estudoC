/*  Estruturas de Repetição - Laço for
    Permite construir estruturas de loop para casos onde se conhece de antemão
    o numero de repetições que devem ser realizadas (numeros finito de laços).
    Por exemplo, se soubermos de antemão que o laço deve se repetir 10 vezes, podemos
    usar a estrutura for.

    for(variavel = inicio; fim; incremento){
        <instruções>
    }
*/

#include <stdio.h>
#include <stdlib.h>

int main(){  
    int contador;
        for(contador = 1; contador <= 10; contador++){
            printf("%d\n", contador);
        }


    printf("Segundo exemplo: \n");
    int cont;
    float nota, media, total;
    total = 0;
        for(cont = 1; cont <= 4; cont++){
            printf("Digite a nota: ");
            scanf("%f", &nota);
            total = total + nota;
        }
    media = total / 4;
    printf("Nota media: %.2f\n", media);


    /*  Laço for encadeado
        O exemplo anterior executa o laço for completo apenas uma vez, sendo possivel
        receber e processar as notas de apenas um aluno antes do programa ser encerrado. Vamos melhorar esse codigo, de modo a pedir repetidas vezes as notas dos alunos, sempre que um conjunto for lido e processado.
        Para finalizar o programa o usuario deverá pressionar uma tecla especifica,
        como a letra "F".
    */
    printf("Terceiro exemplo: \n");
    int contagem;
    char cod;
    float notaa, mediaa, totall;
    totall = 0;
    cod = 'C';
    while (cod != 'F')
    {
        for (contagem = 1; contagem <= 4; contagem++)
        {
            printf("Digite a nota: \n");
            scanf("%f", &notaa);
            totall = totall + notaa;
        }
        mediaa = totall / 4;
        printf("Nota media: %.2f\n\n", mediaa);
        totall = 0;
        mediaa = 0;
        printf("Deseja calcular a media de mais um aluno? Pressione qualquer tecla para prosseguir, ou a tecla 'F' para finalizar. \n");
        cod = getche(); // getche() para capturar a tecla que o usuario vai digitar        
    } 

return 0;
}