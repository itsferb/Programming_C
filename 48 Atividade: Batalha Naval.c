#include <stdio.h>

#define TAM_TABULEIRO 10
#define TAM_NAVIO 3

int main() {

    /*********** Matriz do Tabuleiro ***********/    
    // Matriz que representa o tabuleiro 10x10
    int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO];

    /*********** Vetores dos Navios ***********/    
    int navio_horizontal[TAM_NAVIO] = {3, 3, 3};
    int navio_vertical[TAM_NAVIO] = {3, 3, 3};

    int i, j;

    /*********** Tabuleiro ***********/
    for (i = 0; i < TAM_TABULEIRO; i++) {
        for (j = 0; j < TAM_TABULEIRO; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Coordenadas iniciais dos navios
    int linha_horizontal = 2;
    int coluna_horizontal = 1;

    int linha_vertical = 5;
    int coluna_vertical = 7;

    // Validação de erros
    if (coluna_horizontal + TAM_NAVIO > TAM_TABULEIRO) {
        printf("Erro: Navio fora dos limites do tabuleiro.\n");
        return 1;
    }
    if (linha_vertical + TAM_NAVIO > TAM_TABULEIRO) {
        printf("Erro: Navio fora dos limites do tabuleiro.\n");
        return 1;
    }
    for (i = 0; i < TAM_NAVIO; i++) {
        if (tabuleiro[linha_horizontal][coluna_horizontal + i] != 0) {
            printf("Erro: Sobreposição detectada no navio horizontal.\n");
            return 1;
        }
    }

    // Posiciona o navio horizontal
    for (i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[linha_horizontal][coluna_horizontal + i] =
            navio_horizontal[i];
    }

    // Verifica sobreposição do navio vertical
    for (i = 0; i < TAM_NAVIO; i++) {
        if (tabuleiro[linha_vertical + i][coluna_vertical] != 0) {
            printf("Erro: Sobreposição detectada no navio vertical.\n");
            return 1;
        }
    }

    // Posiciona o navio vertical
    for (i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[linha_vertical + i][coluna_vertical] =
            navio_vertical[i];
    }

    // Exibe o tabuleiro
    printf("*** TABULEIRO BATALHA NAVAL ***\n\n");

    for (i = 0; i < TAM_TABULEIRO; i++) {
        for (j = 0; j < TAM_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}