#include <stdio.h>

int main () {
    
    int numero1, numero2; 
    int soma, subtracao, multiplicacao, divisao, resto;


    printf("Entre com o primeiro número:");
    scanf("%d", &numero1);
    printf("Entre com o segundo número:");
    scanf("%d", &numero2);

    /* Operador de Soma */
    soma = numero1 + numero2;

    /* Operador de Subtração */
    subtracao = numero1 - numero2;

    /* Operador de Multiplicação */
    multiplicacao = numero1 * numero2;

    /* Operador de Divisão */
    divisao = numero1 / numero2;

    /* Resultado da Divisão -> Usado para saber se um número é par ou ímpar */
    resto = numero1 % 2;

    printf("A Soma é:  %d\n", soma); 
    printf("A Subtração é:  %d\n", subtracao); 
    printf("A Multiplicação é:  %d\n", multiplicacao); 
    printf("A Divisão é:  %d\n", divisao); 
    printf("O Resto da Divisão é:  %d\n", resto); 

}

