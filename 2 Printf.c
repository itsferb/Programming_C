#include <stdio.h>
 
int main() {

    int idade = 31;
    float altura = 1.70;
    double saldobancario = 10.00;
    char inicial = 'B';
    char nome[30] = "Fernanda";
 
    printf("INFORMAÇÕES:\n");
    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f metros\n", altura);
    printf("Saldo Bancário: %.2f reais\n", saldobancario);
    printf("Nome: %s\n", nome);
    printf("Inicial do Sobrenome: %c\n", inicial);
 
    return 0;
}

/*
O PrintF apresenta informações em tela ao usuário: Saída de Dados.

Para usar o PrintF sem utilizar variáveis, apenas textos, é possível fazê-lo sem utilizar especificadores de formato.

Para usar o PrintF com variáveis, é necessário utilizar os especificadores de formato:
%d: Imprime um inteiro no formato decimal.
%i: Equivalente a %d.
%f: Imprime um número de ponto flutuante (float) no formato padrão.
%e: Imprime um número de ponto flutuante (float) na notação científica.
%c: Imprime um único caractere.
%s: Imprime uma cadeia (string) de caracteres.

%.2f: Para limitar as casas decimais dos campos de valores
*/