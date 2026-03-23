#include <stdio.h>

int main () {
    
int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 16)
    {
    printf("Idade permitida para votação!");
    }
    else
    {
    printf("Idade NÃO permitida para votação!");
    }

}

/* 
Operadores relacionais:
•	> : Maior que
•	< : Menor que
•	>= : Maior ou igual a
•	<= : Menor ou igual a
•	== : Igual a
•	!= : Diferente de
*/