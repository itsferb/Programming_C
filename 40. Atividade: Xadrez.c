#include <stdio.h>

int main() {

    /*********** Variáveis ***********/
    // Declaração de variáveis de peças e casas
    int peca; 
    int casas_movimentar = 0;
    int movimentos = 0;
    int casas_total = 0; 

    /*********** Escolha da Peça ***********/
    // Apresenta para o usuário a opção para selecionar qual peça jogar
    do {
        printf("PEÇAS DE XADREZ:\n");
        printf("1-Torre\n");
        printf("2-Bispo\n");
        printf("3-Rainha\n");
        printf("4-Cavalo\n");
        printf("Informe a peça a ser movimentada: ");
        scanf("%d", &peca);
    } while (peca < 1 || peca > 4);


    /*********** Movimentação da Torre ***********/
    // Move-se em linha reta horizontalmente ou verticalmente. Deve movimentar-se cinco casas para a direita.
    // Se peça = 1-Torre

    if (peca == 1) {
        printf("Peça escolhida: 1-Torre\n");

        // Reinicia a variável como a primeira casa a ser movimentada
        casas_movimentar = 1;
        movimentos = 0;

        // Movimento com While
        while (casas_movimentar <= 5) {   
        printf("Direita\n");
        casas_movimentar++;
        movimentos++; 
        }

        // Total de casas movimentadas
        casas_total += movimentos;
        printf("A Torre andou %d casas para a direita.\n", movimentos);
    }

    /*********** Movimentação do Bispo ***********/
    // Move-se na diagonal. Deve movimentar-se cinco casas na diagonal para cima e à direita.
    // Se peça = 2-Bispo

    if (peca == 2) {
        printf("Peça escolhida: 2-Bispo\n");

        // Reinicia a variável como a primeira casa a ser movimentada
        casas_movimentar = 1;
        movimentos = 0;

        // Movimento com Do-While
        do {
        printf("Direita\n");
        printf("Cima\n");       
        casas_movimentar++;
        movimentos++;
        movimentos++; 
        } while (casas_movimentar <= 5);

        // Total de casas movimentadas
        casas_total += movimentos;
        printf("O bispo andou %d casas para a direita e para cima, sendo %d na diagonal.\n", movimentos, movimentos/2);
    }


    /*********** Movimentação da Rainha ***********/
    // Move-se em todas as direções. Deve movimentar-se oito casas para a esquerda.
    // Se peça = 3-Rainha

    if (peca == 3) {
        printf("Peça escolhida: 3-Rainha\n");

        // Reinicia a variável como a primeira casa a ser movimentada
        movimentos = 0;

        // Movimento com For
        for (int casas_movimentar = 1; casas_movimentar <= 8; casas_movimentar++) 
        {
        printf("Esquerda\n");
        movimentos++; 
        }   

        // Total de casas movimentadas
        casas_total += movimentos;
        printf("A Rainha andou %d casas para a direita.\n", movimentos);
    }    

    else { 
        printf("Sem movimentos a realizar.\n"); 
        }

    printf("O jogador andou %d casas no total.\nJogadas Finalizadas!\n", casas_total); 

    return 0;
}
