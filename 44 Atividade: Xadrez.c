#include <stdio.h>

    /*********** Movimentação da Torre ***********/
    // Move-se em linha reta horizontalmente ou verticalmente. Deve movimentar-se cinco casas para a direita.
    // Se peça = 1-Torre

void movimenta_torre(int casas, int *movimentos) {
    // Para finalizar a função, quando terminar de rodar
    if (casas <= 0) {
    return;
    }

    // Imprime dados e soma a quantidade de movimentos
    printf("Direita\n");
    *movimentos += 1; 

    // Chamada recursiva
    movimenta_torre(casas-1, movimentos); 

}

    /*********** Movimentação do Bispo ***********/
    // Move-se na diagonal. Deve movimentar-se cinco casas na diagonal para cima e à direita.
    // Se peça = 2-Bispo

void movimenta_bispo(int casas_cima, int casas_direita, int *movimentos) {
    // Para finalizar a função, quando terminar de rodar
    if (casas_cima <= 0 && casas_direita <= 0) {
    return;
    }

    // Imprime dados e soma a quantidade de movimentos
    printf("Cima\n");
    printf("Direita\n");
    *movimentos += 2; 

    // Chamada recursiva
    movimenta_bispo(casas_cima-1, casas_direita-1, movimentos); 

}

    /*********** Movimentação da Rainha ***********/
    // Move-se em todas as direções. Deve movimentar-se oito casas para a esquerda.
    // Se peça = 3-Rainha

void movimenta_rainha(int casas, int *movimentos) {
    // Para finalizar a função, quando terminar de rodar
    if (casas <= 0) {
    return;
    }

    // Imprime dados e soma a quantidade de movimentos
    printf("Esquerda\n");
    *movimentos += 1; 

    // Chamada recursiva
    movimenta_rainha(casas-1, movimentos); 

}




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
        printf("5-Finalizar\n");        
        printf("Informe a opção desejada: ");
        scanf("%d", &peca);

    /*********** Movimentação da Torre ***********/
    // Move-se em linha reta horizontalmente ou verticalmente. Deve movimentar-se cinco casas para a direita.
    // Se peça = 1-Torre

        if (peca == 1) {
            printf("Peça escolhida: 1-Torre\n");

            // Função recursiva
            movimentos = 0;
            movimenta_torre(5, &movimentos); 

            // Total de casas movimentadas
            casas_total += movimentos;
            printf("A Torre andou %d casas para a direita.\n", movimentos);
        }

    /*********** Movimentação do Bispo ***********/
    // Move-se na diagonal. Deve movimentar-se cinco casas na diagonal para cima e à direita.
    // Se peça = 2-Bispo

        if (peca == 2) {
            printf("Peça escolhida: 2-Bispo\n");

            // Função recursiva
            movimentos = 0;
            movimenta_bispo(5, 5, &movimentos); 

            // Total de casas movimentadas
            casas_total += movimentos;
            printf("O bispo andou %d casas para a direita e para cima, ou seja, %d na diagonal.\n", movimentos, movimentos/2);
        }


    /*********** Movimentação da Rainha ***********/
    // Move-se em todas as direções. Deve movimentar-se oito casas para a esquerda.
    // Se peça = 3-Rainha

        if (peca == 3) {
            printf("Peça escolhida: 3-Rainha\n");

            // Reinicia a variável como a primeira casa a ser movimentada
            movimentos = 0;

            // Função recursiva
            movimentos = 0;
            movimenta_rainha(8, &movimentos); 

            // Total de casas movimentadas
            casas_total += movimentos;
            printf("A Rainha andou %d casas para a direita.\n", movimentos);
        }

    /*********** Movimentação do Cavalo ***********/
    // Move-se em L. Deve movimentar-se duas casas para cima e uma casa para a direita.
    // Se peça = 4-Cavalo

        if (peca == 4) {
            printf("Peça escolhida: 4-Cavalo\n");

            // Reinicia a variável como a primeira casa a ser movimentada
            movimentos = 0;

            // Movimento com Loop Aninhado For
            int casas_cima = 0;

            for (int casas_movimentar = 1; casas_movimentar <= 2; casas_movimentar++)             {
                for (int casas_mover = 1; casas_mover <= 1; casas_mover++) 
                {
                    printf("Cima\n");
                    movimentos++; 
                }
                casas_cima = casas_movimentar;
            }
        
            // Movimento com Loop Aninhado While
            casas_movimentar = 1;
            int casas_direita_2 = 0;    
            int casas_direita = 1;

            while (casas_movimentar <= 1) {
            casas_movimentar++;
                while (casas_direita <= 1) 
                {
                    casas_direita++;
                    casas_direita_2+=1;
                    printf("Direita\n");
                    movimentos++; 
                }
            }

            // Total de casas movimentadas
            casas_total += movimentos;
            printf("O cavalo andou %d casas para cima e %d para a direita, sendo %d no total.\n", casas_cima, casas_direita_2, movimentos);

        }

    /*********** Selecionada opção "Finalizar" ***********/

        if (peca == 5) {
        printf("O jogador andou %d casas no total.\n", casas_total);
        }  

    /*********** Não foi selecionada nenhuma opção válida ***********/   

        if (peca < 1 && peca > 5) {
        printf("Sem movimentos a realizar.\n"); 
        }  

    } while (peca >= 1 && peca <= 4);        

    printf("Jogadas Finalizadas!\n"); 

    return 0;
}
