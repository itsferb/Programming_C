#include <stdio.h>
 
int main() {
    int i = 1;
    while (i <= 10) {
        int j = 1;
        while (j <= 10) {
            printf("%d\t", i * j);
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}

/*
Os dois loops são de 10 repetições. 
Pro loop externo ir pro número 2, o interno precisa rodar 10 vezes.
*/