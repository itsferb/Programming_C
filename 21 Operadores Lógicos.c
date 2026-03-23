#include <stdio.h>

int main () {

    int a = 10; 
    int b = 5; 
    int aa = 5; 
    int bb = -10; 
    int c = 1;

    if ( a > 0 && b > 0 )
    { 
        printf("Os dois números são positivos! \n"); 
    } else {
        printf("Pelo menos um dos números é menor ou igual a zero! \n"); 
    };

    if ( !(a > 0) ) 
    { 
        printf("A variável A é negativa! \n"); /// Aqui temos que usar a lógica do resultado invertida
    } else {
        printf("A variável A é positiva! \n"); /// Aqui temos que usar a lógica do resultado invertida
    };

    if ( !(a > 0) ) 
    { 
        printf("A variável A é negativa! \n"); /// Aqui temos que usar a lógica do resultado invertida
    } else {
        printf("A variável A é positiva! \n"); /// Aqui temos que usar a lógica do resultado invertida
    };

    if (a > 0 && b < 0 || c == 0) 
    {
        printf("A condição é verdadeira\n");
    } else {
        printf("A condição é falsa\n");
    };

}


/*
&& - retorna verdadeiro se e somente se ambas as expressões que ele conecta forem verdadeiras
|| - se pelo menos uma das expressões que ele conecta for verdadeira
! -  inverte o valor lógico de uma expressão. Se a expressão for verdadeira, ele retorna falso, e se a expressão for falsa, ele retorna verdadeiro
*/