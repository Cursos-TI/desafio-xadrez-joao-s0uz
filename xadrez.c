#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    const int bispo = 5, torre = 5, rainha = 8;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    for (int i = 1; i <= bispo; i++)
    {
        printf("Bispo indo para a diagonal superior direita %d\n", i);
    }
    

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    for(int i = 1; i <= torre; i++)
    {
        printf("Torre indo para a direita %d\n", i);
    }

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    for(int i = 1; i <= rainha; i++)
    {
        printf("Rainha indo para a esquerda %d\n", i);
    }

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    
    // Implementação de Movimentação do Cavalo
    // Declaração de variáveis para representar a movimentação do Cavalo
    // Se i for menor que 2, o Cavalo se move para cima
    // Se j for menor ou igual a 2, o Cavalo se move para a direita
    // O Cavalo se move para cima 2 vezes e para a direita 1 vez
    for (int i = 1; i < 2; i++)
    {
        int j = 1;
        while (j <= 2)
        {
            printf("Cavalo indo para a cima %d\n", j);
            j++;
        }
        printf("Cavalo indo para a direita %d\n", i);
    }
    
    

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
