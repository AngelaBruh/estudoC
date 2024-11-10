/* Um desenvolvedor iniciou a criação de um programa na linguagem C para calcular o menor tempo feito em uma maratona.
O programa tem por objetivo fazer a leitura da quantidade de corredores; após, deve-se ler a leitura do tempo em segundos de cada um dos participantes; por fim, o programa deverá calcular e mostrar na tela o record da maratona.
*/

#include <stdio.h>

int main(){
    int n, i, tempo, menorTempo;

    printf("Digite o número de corredores: ");
    scanf("%d", &n);

    menorTempo = 10000000;

    for(i = 1; i <= n; i++){
        printf("Digite o tempo percorrido do %d corredor: ",i);
        scanf("%d", &tempo);

        if (tempo <= menorTempo) {
            menorTempo = tempo;
        }
    }    
    
    printf("O recorde da prova foi de %d segundos", menorTempo);

    return 0;
}

