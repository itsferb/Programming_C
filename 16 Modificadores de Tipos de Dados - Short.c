#include <stdio.h>
 
int main() {
    short int NumeroPequeno = 32767; // Valor máximo de short int
    printf("Número pequeno (short int): %d\n", NumeroPequeno);
    
    NumeroPequeno = 32768;
    long int bigNumber = 2147483647;
 
    printf("Número pequeno atualizado (long int): %d\n", NumeroPequeno);
 
    return 0;
}