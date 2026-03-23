#include <stdio.h>

int main() {
    int a = 10;
    int b = 3;
    int soma = a + b;
    int diferenca = a - b;
    int produto = a * b;
    int quociente = a / b; // Divisão de números inteiros porém que resulta em números decimais = 3,33333
    
    printf("Soma: %d\n", soma);
    printf("Diferença: %d\n", diferenca);
    printf("Produto: %d\n", produto);
    printf("Quociente: %d\n", quociente);
 
    /* 
    Mesmo que o resultado seja decimal, a variável int (inteiro) vai retornar sempre números inteiros apenas.
    Nesse caso devem ser usado pontos flutuantes, que aceitam casas decimais:
    Float ou Double.
    A diferença entre eles é a precisão dos resultados.
    */
    return 0;
}