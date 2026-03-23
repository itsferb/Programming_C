#include <stdio.h>
 
int main() {

    int idade;
    char inicial;
    char nome[30];

    printf("Digite sua idade: \n");
    scanf("%d", &idade);
    printf("Sua idade é: %d\n", idade);

    printf("Digite sua inicial: \n");
    scanf(" %c", &inicial);
    printf("Sua inicial é: %c\n", inicial);

    printf("Digite seu nome: \n");
    scanf("%s", &nome);
    printf("Seu nome é: %s\n", nome);

    return 0;
}

/*
O ScanF recebe informações na tela do usuário: Entrada de Dados.

Para usar o ScanF, é necessário utilizar os especificadores de formato.
%d: Imprime um inteiro no formato decimal.
%i: Equivalente a %d.
%f: Imprime um número de ponto flutuante no formato padrão.
%e: Imprime um número de ponto flutuante na notação científica.
%c: Imprime um único caractere.
%s: Imprime uma cadeia (string) de caracteres.

Na variável é necessário informar o "E COMERCIAL": &.

IMPORTANTE!
-> Para textos, só recebe o primeiro nome, pois ele entende o espaço como finalizador de texto.
Para usar nomes compostos, é necessário usar outras funções como fgets ou expressões regulares.

-> Para caracteres, ele entende o enter como o próprio caractere. 
Para resolver, adicionar um espaço antes do especificador de formato, como exemplo acima.
*/