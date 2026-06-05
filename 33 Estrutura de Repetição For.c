#include <stdio.h>
 
int main() {

    int numero, i;

    printf("Digite um número para calcularmos a tabuada:\n");
    scanf("%d", &numero);

    for (int i = 0; i <= 10; i++) 
    {
    printf("%d x %d = %d\n", numero, i, i*numero);
    }
   
    return 0;
}

/*
Se uma variável é inicializada dentro da estrutura for, ela só pode ser usada dentro da estrutura. 
A variável i está sendo incrementada para que a condição que está sendo testada seja falsa em algum momento, evitando loop infinito. 
*/