#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

int casa = 1;

//MOVIMENTAÇÃO BISPO:
//Para cada movimento da peça a variável casa é incrementada em +1 
//Até chegar no valor limita da movimentação

printf("***MOVIMENTAÇÃO BISPO***\n");

while (casa <= 5)
{
    printf("Bispo se moveu para: CIMA, DIREITA.\n");

    casa++;
}

//MOVIMENTAÇÃO TORRE:
//A variável teve que ser declarada novamente para que o programa fuinconasse corretamente
//Para cada movimento da peça a variável casa é incrementada em +1
//Até chegar no valor limite da movimentação

casa = 1;

printf("***MOVIMENTAÇÃO TORRE***\n");

do 
{
    printf("Torre se moveu para: DIREITA\n");
    casa++;
} while (casa <= 5);

//MOVIMENTAÇÃO RAINHA
//Para a movimentação da Rainha, a variável foi declarada novamente dentro da estrutura for
//A movimentação tem um limite de 8 casas, dessa forma o valor foi incrementado até chegar a 8

printf("***MOVIMENTAÇÃO RAINHA***\n");

for (casa = 1; casa <= 8; casa++)
{
    printf("Rainha se moveu para: ESQUERDA\n");
}

//MOVIMENTAÇÃO DO CAVALO
//A variável foi reinicializada
//Para a movimentação do cavalo foi colocado o loop interno para a movimentação na vertical e o externo para a horizontal
//A movimentação horizontal só ocorre após o termino da movimentação vertical no loop interno, finalizando o movimento

casa = 1;

printf("***MOVIMENTAÇÃO CAVALO***\n");

while (casa--)
{
    for (int casa = 1; casa <=2; casa++)
    {
       printf("Cavalo se moveu para: CIMA\n");
    }
    printf("Cavalo se moveu para: DIREITA\n");
}


return 0;
    
}