#include <stdio.h>
 
int main() {
    int i = 1;
   
    while (i <= 5) {   
        printf("%d\n", i);
        i++; 
    }
    return 0;
}

/*
Enquanto a condição for verdadeira, o loop continuará sendo executado. 
A variável i está sendo incrementada para que a condição que está sendo testada seja falsa em algum momento, evitando loop infinito. 
*/