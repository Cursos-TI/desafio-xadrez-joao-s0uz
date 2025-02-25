#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.


// Função recursiva para movimentação do Bispo
void movimentoBispo(int movimento)
{
    if (movimento > 0)
    {
        movimentoBispo(movimento - 1);
        printf("Bispo indo para a diagonal superior direita %d\n", movimento);
    }
}

// Função recursiva para movimentação da Torre
void movimentoTorre(int movimento)
{
    if (movimento > 0)
    {
        movimentoTorre(movimento - 1);
        printf("Torre indo para a direita %d\n", movimento);
    }
}

// Função recursiva para movimentação da Rainha
void movimentoRainha(int movimento)
{
    if (movimento > 0)
    {
        movimentoRainha(movimento - 1);
        printf("Rainha indo para a esquerda %d\n", movimento);
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int bispo = 5, torre = 5, rainha = 8;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    movimentoBispo(bispo);
    

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    movimentoTorre(torre);

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    movimentoRainha(rainha);

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    
    // Implementação de Movimentação do Cavalo
    // Declaração de variáveis para representar a movimentação do Cavalo
    // Se i for menor que 2, o Cavalo se move para cima
    // Se j for menor ou igual a 2, o Cavalo se move para a direita
    // O Cavalo se move para cima 2 vezes e para a direita 1 vez

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    for(int i = 1, j = 1; i < 2; i++)
    { 
        while (j <= 2)
        {
            printf("Cavalo indo para a cima %d\n", j);
            j++;
        }

        printf("Cavalo indo para direita %d\n", i);
        break;
    }
    
    

    return 0;
}
