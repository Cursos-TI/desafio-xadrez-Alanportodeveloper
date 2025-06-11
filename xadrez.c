#include <stdio.h>


// TORRE: movimento recursivo simples para a direita
void moverTorre (int casas){

    if (casas > 0)
    {
        printf("Direita\n");
        moverTorre(casas -1); // Chamada recursiva diminuindo casas
    }
    
}


// BISPO: recursivo + loops aninhados para simular movimento diagonal
void moverBispo (int casas){

    if (casas <= 0) return; // Condição de parada da recursão
    {
        // Loop externo = vertical 
        for (int i = 1; i <= 1; i++)
        {
            // Loop interno = horizontal
            for (int y = 1; y <= 1; y++)
            {
                if (i == y)
                {
                     printf("Cima\n");
                     printf("Cima\n");
                     printf("Direita\n\n");
                }
                
            }
            
        }
        // Chamada recursiva diminuindo casas
        moverBispo(casas - 1);
    }
    
}


// RAINHA: movimento recursivo simples
void moverRainha (int casas){

    if (casas > 0)
    {
        printf("Esquerda!\n\n");
        moverRainha(casas -1);
    }
    
}

// Cavalo com loops aninhados e controle com break/continue
void moverCavalo (int casas){

    // Laço externo (i) e interno (j) representam possibilidades de movimento
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            if (i == 2 && j == 1) // Condição específica para o movimento em L
            {
                printf("Cima\n");
                printf("Cima\n");
                printf("Direita\n\n");
                break; // Sai do loop interno após encontrar a condição

            } else {
                continue; // Pula para o próximo valor de j
            }
            
        }
        
    }
    
    
}


int main() {


    printf("Torre se movendo... \n\n");
    moverTorre(5); // Movimenta a torre 5 vezes para a direita

    printf("\n\n****************************************"); // Divisor das peças
    printf("\n\nBismo se movendo... \n\n");
    moverBispo(5);
    
    printf("\n\n****************************************\n\n");
    printf("Rainha se movendo... \n\n");
    moverRainha(8); // Movimenta a rainha 8 vezes para a esquerda

    printf("\n\n****************************************\n\n");
    printf("Cavalo se movendo... \n\n");
    moverCavalo(1); // Cavalo executa movimento específico em L com loops e controle

    return 0;
}
