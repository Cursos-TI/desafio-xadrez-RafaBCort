#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void movimentoTorre(moverCasas){
    if(moverCasas >0){
        printf("direita\n");
        movimentoTorre(moverCasas -1);

    }


}
void movimentoRainha(moverCasas){
    if(moverCasas >0){
        printf("esquerda\n");
        movimentoRainha(moverCasas -1);

    }
}

void movimentoCavalo(moverCasas){
    if(moverCasas >0){
        printf("cavalo em L\n");
        movimentoCavalo(moverCasas -1);

    }
}
void movimentoBispo(moverCasas){
    if(moverCasas >0){
        printf("bispo em diagonal\n");
        movimentoBispo(moverCasas -1);

    }
}



int main() {

    int movimentoTorre = 0;
    int movimentoRainha = 0;
    int movimentoCavalo = 0;
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    printf("movimento do bispo, 5 casas diagonais para cima a direita\n");
    for ( int i = 0; i < 5 ; i++)
    {
        printf("cima, direita\n");


    }
    

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("movimentação da torre, cinco casas a direita\n");
    /*do{
        printf("direita\n");
        movimentoTorre++;


    }while( movimentoTorre <5 );*/


    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("movimentação da rainha, oito casas a esquerda\n");
   /* while(movimentoRainha <8 ){
        printf("esquerda\n");
        movimentoRainha++;
    }*/

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    printf("movimentação do cavalo, em L para baixo e esquerda\n");
   /* while(movimentoCavalo < 1 ){
        for(int j =0; j <2; j++){
            printf("baixo\n");
        }
        printf("esquerda\n");
        movimentoCavalo++;
    }*/

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
