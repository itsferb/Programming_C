#include <stdio.h>
 
int main() {
    int i = 1;
    do {
        int j = 1;
        do {
            printf("%d\t", i * j);
            j++;
        } while (j <= 10);
        printf("\n");
        i++;
    } while (i <= 10);
    return 0;
}

/*
Os dois loops são de 10 repetições. 
Pro loop externo ir pro número 2, o interno precisa rodar 10 vezes.
*/