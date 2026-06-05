#include <stdio.h>

int main () {

    int numero1 = 1;
    int resultado1;
    int numero2 = 10;
    int resultado2;

    /********** Incremento  **********/
    /* Antes de Incrementar */
    printf("Antes do Incremento:  %d\n", numero1); 

    /* Incremento */
    numero1++;

    /* Após Incrementar */
    printf("Após o Incremento:  %d\n", numero1); 

    /********** Com Pré e Pós Incremento  **********/
    /* Após o Pós-Incremento */
    resultado1 = numero1++;  // Se eu primeiro colocar a variável e depois somar, ele não vai trazer o resultado correto pois valor esta desatualizado
    printf("Após o Pós-Incremento: Número1:  %d, Resultado: %d\n", numero1, resultado1); 

    /* Após o Pré-Incremento */
    resultado1 = ++numero1;  // Se eu primeiro colocar atualizar a variável pro valor correto, ele vai trazer o resultado correto pois valor esta atualizado
    printf("Após o Pré-Incremento: Número1:  %d, Resultado: %d\n", numero1, resultado1); 


    /********** Decremento  **********/
    /* Antes de Decrementar */
    printf("Antes do Decremento:  %d\n", numero2); 

    /* Decremento */
    numero2--;

    /* Após Decrementar */
    printf("Após o Decremento:  %d\n", numero2); 

    /********** Com Pré e Pós Decremento  **********/
    /* Após o Pós-Incremento */
    resultado2 = numero2++;  // Se eu primeiro colocar a variável e depois somar, ele não vai trazer o resultado correto pois valor esta desatualizado
    printf("Após o Pós-Incremento: Número2:  %d, Resultado: %d\n", numero2, resultado2); 

    /* Após o Pré-Incremento */
    resultado2 = ++numero2;  // Se eu primeiro colocar atualizar a variável pro valor correto, ele vai trazer o resultado correto pois valor esta atualizado
    printf("Após o Pré-Incremento: Número2:  %d, Resultado: %d\n", numero2, resultado2); 

}
