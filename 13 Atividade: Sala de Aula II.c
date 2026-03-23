#include <stdio.h>

int main() {
    float nota1, nota2, nota3;
    float media;

    printf("*** CÁLCULO DE MÉDIA DE NOTAS DE ALUNOS ***\n");

    printf("Digite a nota da avaliação 1: \n");
    scanf("%f", &nota1);

    printf("Digite a nota da avaliação 2: \n");
    scanf("%f", &nota2);

    printf("Digite a nota da avaliação 3: \n");
    scanf("%f", &nota3);

    media = ((nota1 + nota2 + nota3) / 3); // Caso a variável da nota estivesse como integer, poderia ficar: media = ((float)(nota1 + nota2 + nota3) / 3);

    printf("Média: %.2f\n", media);  // Define a quantidade de casas decimais

    return 0;

}