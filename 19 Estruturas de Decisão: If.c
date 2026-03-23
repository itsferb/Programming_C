#include <stdio.h>

int main () {
    
int numero, resultado;

    printf("Digite o número: ");
    scanf("%d", &numero);

    resultado = numero % 2;

    if (resultado == 0)
    {
    printf("O número informado é par.");
    }
    else
    {
    printf("O número informado é ímpar.");
    }

}

/* 
Se tiver mais de uma condição no IF, devem ser usadas chaves, se não não precisa {}.
Se tiver mais uma estrutura de decisão, pode usar o ELSEIF.

*/