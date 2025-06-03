#include <stdio.h>

int main() {
    
    //Declaração das variáveis

    int movimentoTorre = 5; // Define que a Torre vai se mover 5 casas para a direita
    int movimentoBispo = 5; // Define que o Bispo vai se mover 5 casas na diagonal
    int movimentoRainha = 8; // Define que a Rainha vai se mover 8 casas para a esquerda


    printf("Torre se movendo... \n\n");

    // Estrutura de repetição for: repete exatamente 5 vezes
    for(int i = 0; i < movimentoTorre; i++){
       printf("Direita!\n");// Imprime a direção do movimento da Torre
    }

    printf("\n\n****************************************"); // Divisor das peças
    printf("\n\nBismo se movendo... \n\n");
    int i = 0; // Variável de controle para o while

    // Estrutura de repetição while: repete enquanto i < 5
    while (i < movimentoBispo)
    {
        printf("Cima, Direita!\n"); // Imprime o movimento diagonal
        i++; // Incrementa o contador
    }
    
    printf("\n\n****************************************\n\n");
    printf("Rainha se movendo... \n\n");
    int j = 0;

    // Estrutura de repetição do-while: garante que o bloco será executado ao menos uma vez
    do
    {
        printf("Esquerda!\n\n"); // Imprime a direção do movimento da Rainha
        j++; // Incrementa o contador
    } while (j < movimentoRainha); // Continua enquanto j for menor que 8

    return 0;
}
