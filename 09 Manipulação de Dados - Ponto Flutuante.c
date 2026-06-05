#include <stdio.h>
 
int main() {
    float x = 5.5;
    float y = 2.2;
    float soma = x + y;
    float diferenca = x - y;
    float produto = x * y;
    float quociente = x / y; // Divisão de ponto flutuante retorna decimal = 2,5
 
    printf("Soma: %.2f\n", soma);
    printf("Diferença: %.2f\n", diferenca);
    printf("Produto: %.2f\n", produto);
    printf("Quociente: %.2f\n", quociente);

    /* 
    Agora com a variável float (flutuante) vai retornar também as casas decimais.
    */

    return 0;
}