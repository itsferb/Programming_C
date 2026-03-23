#include <stdio.h>

int main() {
    int idade, matricula;
    float altura;
    char nome[50];
 
    printf("MATRÍCULAS DE NOVOS ALUNOS:\n");

    printf("Digite a matrícula: \n");
    scanf("%d", &matricula);

    printf("Digite o nome: \n");
    scanf("%s", &nome);

    printf("Digite a idade: \n");
    scanf("%d", &idade);

    printf("Digite a altura: \n");
    scanf("%f", &altura);

    printf("CADASTRO REALIZADO COM SUCESSO!\n");
    printf("Aluno: %d - %s\n", matricula, nome);
    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);
 
    return 0;
}