#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.
#define TAM 10

int main() {

    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios. 

  void nivelNovato() {

    int tabuleiro[5][5] = {0};

    // Navio horizontal
    for(int i = 1; i <= 3; i++)
        tabuleiro[2][i] = 3;

    // Navio vertical
    for(int i = 0; i < 3; i++)
        tabuleiro[i][4] = 3;

    printf("\n=== NIVEL NOVATO ===\n\n");

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}
    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.
void nivelAventureiro() {

    int tabuleiro[TAM][TAM] = {0};

    // Horizontal
    for(int i = 2; i < 5; i++)
        tabuleiro[1][i] = 3;

    // Vertical
    for(int i = 4; i < 7; i++)
        tabuleiro[i][7] = 3;

    // Diagonal principal
    for(int i = 0; i < 3; i++)
        tabuleiro[6+i][1+i] = 3;

    // Diagonal secundária
    for(int i = 0; i < 3; i++)
        tabuleiro[2+i][9-i] = 3;

    printf("\n=== NIVEL AVENTUREIRO ===\n\n");

    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.
void nivelMestre() {

    printf("\n=== NIVEL MESTRE ===\n");


    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
      /* CONE */
    int cone[3][5] = {0};

    cone[0][2] = 1;

    for(int j = 1; j <= 3; j++)
        cone[1][j] = 1;

    for(int j = 0; j < 5; j++)
        cone[2][j] = 1;

    printf("\nHabilidade Cone:\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++)
            printf("%d ", cone[i][j]);
        printf("\n");
    }
}
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0
   /* OCTAEDRO */
   
    int octaedro[5][5] = {0};

    octaedro[0][2] = 1;
    octaedro[1][1] = 1;
    octaedro[1][2] = 1;
    octaedro[1][3] = 1;
    octaedro[2][2] = 1;

    printf("\nHabilidade Octaedro:\n");
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++)
            printf("%d ", octaedro[i][j]);
        printf("\n");
    }


    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    /* CRUZ */
    int cruz[5][5] = {0};

    for(int i = 0; i < 5; i++){
        cruz[2][i] = 1;
        cruz[i][2] = 1;
    }

    printf("\nHabilidade Cruz:\n");
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++)
            printf("%d ", cruz[i][j]);
        printf("\n");
    }

    return 0;
}
