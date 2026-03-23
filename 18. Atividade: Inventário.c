#include <stdio.h>

int main() {
    char produto_A[30] = "Produto A";
    char produto_B[30] = "Produto B";

    unsigned int estoque_A = 1000;
    unsigned int estoque_B = 2000;

    float custo_A = 10.50;
    float custo_B = 20.40;

    unsigned int estoqueminimo_A = 1500;
    unsigned int estoqueminimo_B = 1000;

    double custototal_A; 
    double custototal_B;

    int resultado_A; 
    int resultado_B;

    printf("Item %s tem %u unidades em estoque e custo unitário de R$%.2f \n", produto_A, estoque_A, custo_A);
    printf("Item %s tem %u unidades em estoque e custo unitário de R$%.2f \n", produto_B, estoque_B, custo_B);

    resultado_A = estoque_A > estoqueminimo_A; 
    resultado_B = estoque_B > estoqueminimo_B; 

    printf("Item %s tem estoque mínimo %d\n", produto_A, resultado_A);
    printf("Item %s tem estoque mínimo %d\n", produto_B, resultado_B);

    custototal_A = (estoque_A*custo_A);
    custototal_B = (estoque_B*custo_B);

    printf("O custo total do %s (R$%.2f) é maior que o custo total do %s (R$%.2f): %d\n", produto_A, custototal_A, produto_B, custototal_B, (custototal_A>custototal_B));

    return 0;

}