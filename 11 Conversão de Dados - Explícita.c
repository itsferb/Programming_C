#include <stdio.h>
 
int main() {
    int a = 10;
    int b = 3;
    float quociente = (float) a / b; 
    printf("Quociente: %.2f\n", quociente);
 
    /* 
    Nesse exemplo a variável 'a' é explicitamente convertido para float.
    Também é chamado de Casting.
     */

    return 0;
}