#include <stdio.h>
 
int main() {
    int numero;

    printf("Validação de números ímpares!\n"); 

    do {
        printf("Digite um número:");
        scanf("%d", &numero);
        
        if (numero % 2 == 0) {
            printf("%d é par!\n", numero);
        } else {
            printf("%d é ímpar, continue a validação do número!\n", numero);
        }
    } while (numero %2 != 0);

    printf("Você digitou um número par, saindo do programa.\n");

    return 0;
}

/*
A primeira execução ocorre independente da condição.
O exemplo define o resto da divisão por 2 como 0, então se trata de todos os itens pares.
Enquanto a condição for verdadeira, o loop continuará sendo executado. 
*/