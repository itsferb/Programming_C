#include <stdio.h>
 
int main() {
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            printf("%d\t", i * j);
        }
        printf("\n");
    }
    return 0;
}

/*
Os dois loops são de 10 repetições. 
Pro loop externo ir pro número 2, o interno precisa rodar 10 vezes.
*/