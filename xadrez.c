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
        
        for(int j =0; j <2; j++){
            printf("baixo\n");
        }
        printf("esquerda\n");


        movimentoCavalo(moverCasas -1);

    }
}
void movimentoBispo(moverCasas){
    if(moverCasas >0){
       printf("cima, direita\n");
        movimentoBispo(moverCasas -1);

    }
}



int main() {

    int casasTorre = 5;
    int casasRainha = 8;
    int casaCavalo = 1;
    int casasBispo = 5;
   

    // Implementação de Movimentação do Bispo
  

    printf("movimento do bispo, 5 casas diagonais para cima a direita\n");
    movimentoBispo(casasBispo);
   

    // Implementação de Movimentação da Torre
  
    printf("movimentação da torre, cinco casas a direita\n");
    movimentoTorre(casasTorre);

    // Implementação de Movimentação da Rainha
    printf("movimentação da rainha, oito casas a esquerda\n");
    movimentoRainha(casasRainha);

    // Implementação de Movimentação do Cavalo
    printf("movimentação do cavalo, em L para baixo e esquerda\n");
    movimentoCavalo(casaCavalo);

   

    return 0;
}
