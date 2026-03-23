#include <stdio.h>
 
int main() {
    int a = 10;
    float b = 3.5;
    float resultado = a + b; 

    printf("Resultado: %.2f\n", resultado);

    /* 
    Nesse exemplo a variável 'a' é convertida implicitamente para float.
    */

    return 0;
}