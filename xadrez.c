#include <stdio.h>

int main() {
    
    //Declaração das variáveis

    int movimentoTorre = 5; // Define que a Torre vai se mover 5 casas para a direita
    int movimentoBispo = 5; // Define que o Bispo vai se mover 5 casas na diagonal
    int movimentoRainha = 8; // Define que a Rainha vai se mover 8 casas para a esquerda
    int casasBaixo = 2; // Define a quantidade de casas que o Cavalo deve se mover para baixo
    int casasEsquerda = 1; // Define a quantidade de casas que o Cavalo deve se mover para a esquerda



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


    printf("\n\n****************************************\n\n");
    printf("Cavalo se movendo... \n\n");
    int k = 0; 

    while (k < 1) { // Executa o movimento do cavalo apenas uma vez

        // Loop for aninhado para as duas casas para baixo
        for (int l = 0; l < casasBaixo; l++) {
            printf("Baixo!\n");
        }
        // Movimento perpendicular (uma casa para a esquerda)
        printf("Esquerda!\n\n");
        k++; // Após executar o movimento do Cavalo, incrementa k para que o loop while não se repita mais (executa apenas uma vez)
    }

    return 0;
}
