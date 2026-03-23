#include <stdio.h>

int main () {
    
int idade;
int a = 10;
int b = 20;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 16)
    {
    printf("Idade permitida para votação!\n");
    }
    else
    {
    printf("Idade NÃO permitida para votação!\n");
    }

    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);


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