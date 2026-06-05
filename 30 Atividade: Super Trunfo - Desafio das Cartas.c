#include <stdio.h>

int main() {

    /*********** Variáveis - Carta 01 ***********/
    // Declaração de variáveis para a carta 01

    char codigo_1[4];  // Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03).
    char estado_1[4];  // Estado: Estado da cidade.
    char nomecidade_1[50];  // Nome da Cidade: O nome da cidade. 
    unsigned long int populacao_1; //  População: O número de habitantes da cidade. 
    float area_1; //  Área (em km²): A área da cidade em quilômetros quadrados.
    float PIB_1; //  PIB: O Produto Interno Bruto da cidade.
    int pontosturisticos_1;  // Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade.
    float densidade_1;  // Densidade Populacional: representa o número de habitantes por quilômetro quadrado.
    float PIBpercapita_1;  // PIB per Capita: indica a riqueza média por pessoa na cidade.
    float superpoder_1;  // Super Poder: soma de todos os atributos numéricos (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional).

    /*********** Variáveis - Carta 02 ***********/
    // Declaração de variáveis para a carta 02

    char codigo_2[4];  // Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03).
    char estado_2[4];  // Estado: Estado da cidade.
    char nomecidade_2[50];  // Nome da Cidade: O nome da cidade. 
    unsigned long int populacao_2; //  População: O número de habitantes da cidade. 
    float area_2; //  Área (em km²): A área da cidade em quilômetros quadrados.
    float PIB_2; //  PIB: O Produto Interno Bruto da cidade.
    int pontosturisticos_2;  // Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade.
    float densidade_2;  // Densidade Populacional: representa o número de habitantes por quilômetro quadrado.
    float PIBpercapita_2;  // PIB per Capita: indica a riqueza média por pessoa na cidade.
    float superpoder_2;  // Super Poder: soma de todos os atributos numéricos (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional).

    /*********** Variáveis - Resultados ***********/
    // Declaração de variáveis para os resultados das comparação das cartas

    int resultado_populacao;
    int resultado_area;
    int resultado_PIB;
    int resultado_pontosturisticos;
    int resultado_densidade;
    int resultado_PIBpercapita;
    int resultado_superpoder;

    int resultado_1 = 0;
    int resultado_2 = 0;

    /*********** Variáveis - Opções de Atributos ***********/
    // Declaração de variáveis para as opções de atributos escolhidos para comparação    
    int opcao;
    int opcao_2;

    /*********** Entrada de Dados - Carta 01 ***********/
    // Solicitado ao usuário para informar os dados da carta 01

    printf("CADASTRO DA CARTA 1:\n");

    printf("Informe o Código da Carta:\n");
    scanf("%3s", codigo_1);    

    printf("Informe o Estado:\n");
    scanf("%3s", estado_1);    

    printf("Informe a Cidade:\n");
    scanf("%49s", nomecidade_1);    

    printf("Informe a População:\n");
    scanf("%lu", &populacao_1);    

    printf("Informe a Área (em km²):\n");
    scanf("%f", &area_1);   

    printf("Informe o PIB:\n");
    scanf("%f", &PIB_1);   

    printf("Informe o Número de Pontos Turísticos:\n");
    scanf(" %d", &pontosturisticos_1); 

    printf("CADASTRO REALIZADO COM SUCESSO!\n");

    /*********** Entrada de Dados - Carta 02 ***********/
    // Solicitado ao usuário para informar os dados da carta 02

    printf("CADASTRO DA CARTA 2:\n");

    printf("Informe o Código da Carta:\n");
    scanf("%3s", codigo_2);    

    printf("Informe o Estado:\n");
    scanf("%3s", estado_2);    

    printf("Informe a Cidade:\n");
    scanf("%49s", nomecidade_2);    

    printf("Informe a População:\n");
    scanf("%lu", &populacao_2);    

    printf("Informe a Área (em km²):\n");
    scanf("%f", &area_2);   

    printf("Informe o PIB:\n");
    scanf("%f", &PIB_2);   

    printf("Informe o Número de Pontos Turísticos:\n");
    scanf(" %d", &pontosturisticos_2); 

    printf("CADASTRO REALIZADO COM SUCESSO!\n");    

    /*********** Cálculo de Dados - Carta 01 ***********/
    // Realizados os cálculos referente carta 01

    densidade_1 = (float) populacao_1 / area_1;  // Calcular a Densidade Populacional: Divida a população da cidade pela sua área.
    PIBpercapita_1 = PIB_1 / (float) populacao_1;  // Calcular o PIB per Capita: Divida o PIB da cidade pela sua população. 
    superpoder_1 = (float) populacao_1 + area_1 + PIB_1 + pontosturisticos_1 + PIBpercapita_1 + (1/densidade_1); // Calcular o "Super Poder" somando todos os atributos numéricos (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder")

    /*********** Cálculo de Dados - Carta 02 ***********/
    // Realizados os cálculos referente carta 02

    densidade_2 = (float) populacao_2 / area_2;  // Calcular a Densidade Populacional: Divida a população da cidade pela sua área.
    PIBpercapita_2 = PIB_2 / (float) populacao_2;  // Calcular o PIB per Capita: Divida o PIB da cidade pela sua população. 
    superpoder_2 = (float) populacao_2 + area_2 + PIB_2 + pontosturisticos_2 + PIBpercapita_2 + (1/densidade_2); // Calcular o "Super Poder" somando todos os atributos numéricos (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder")

    /*********** Saída de Dados ***********/

    printf("*************************************\n");
    printf("CARTAS CADASTRADAS:\n");

    /*********** Saída de Dados - Carta 01 ***********/
    // Apresentados os dados da carta 01

    printf("*************************************\n");   
    printf("CARTA 01:\n");
    printf("Código da Carta: %s\n", codigo_1);
    printf("Estado: %s\n", estado_1);
    printf("Cidade: %s\n", nomecidade_1);
    printf("População: %lu habitantes\n", populacao_1);
    printf("Área: %.2f km²\n", area_1);
    printf("PIB: R$%.2f\n", PIB_1);
    printf("Pontos Turísticos: %d\n", pontosturisticos_1);
    printf("Densidade Demográfica: %.2f hab/km²\n", densidade_1);
    printf("PIB per Capita: R$%.2f\n", PIBpercapita_1);
    printf("Super Poder: %.2f\n", superpoder_1);

    /*********** Saída de Dados - Carta 02 ***********/
    // Apresentados os dados da carta 02

    printf("*************************************\n");
    printf("CARTA 02:\n");
    printf("Código da Carta: %s\n", codigo_2);
    printf("Estado: %s\n", estado_2);
    printf("Cidade: %s\n", nomecidade_2);
    printf("População: %lu habitantes\n", populacao_2);
    printf("Área: %.2f km²\n", area_2);
    printf("PIB: R$%.2f\n", PIB_2);
    printf("Pontos Turísticos: %d\n", pontosturisticos_2);
    printf("Densidade Demográfica: %.2f hab/km²\n", densidade_2);
    printf("PIB per Capita: R$%.2f\n", PIBpercapita_2);
    printf("Super Poder: %.2f\n", superpoder_2);

    /*********** Comparação das Cartas ***********/

    printf("*************************************\n");
    printf("COMPARAÇÃO DAS CARTAS:\n");
    printf("*************************************\n");

    /*********** Atributo 1 ***********/
    // Apresentadas as opções disponíveis de comparação
    printf("1-População\n");
    printf("2-Área\n");
    printf("3-PIB\n");
    printf("4-Número de Pontos Turísticos\n");
    printf("5-Densidade Demográfica\n"); 
    printf("6-PIB per Capita\n");   
    printf("7-Super Poder\n");              

    printf("*************************************\n");

    // Solicitado ao usuário para informar o atributo de comparação   
    printf("Escolha o atributo 1 para comparar:");
    scanf("%d", &opcao);

    printf("*************************************\n");

    // Realizada a comparação individual conforme o atributo 1 escolhido
    // Acumulado valor na variável de resultado para somar com as demais comparações
    switch (opcao) {
    // 1-População
        case 1: 
            printf("População: \nCarta 01 - %lu habitantes\nCarta 02 - %lu habitantes\n", populacao_1, populacao_2);
        if (populacao_1 > populacao_2) {
            resultado_1 ++; 
            printf("Resultado: A Carta 01 - %s/%s venceu!\n", nomecidade_1, estado_1); }
        else if (populacao_2 > populacao_1) {
            resultado_2 ++;
            printf("Resultado: A Carta 02 - %s/%s venceu!\n", nomecidade_2, estado_2); }
        else 
            printf("Resultado: Empatou!\n");
        break;

    // 2-Área
        case 2:
        printf("Área: \nCarta 01 - %.2f km²\nCarta 02 - %.2f km²\n", area_1, area_2);
        if (area_1 > area_2) {
            resultado_1 ++; 
            printf("Resultado: A Carta 01 - %s/%s venceu!\n", nomecidade_1, estado_1); }
        else if (area_2 > area_1) {
            resultado_2 ++;
            printf("Resultado: A Carta 02 - %s/%s venceu!\n", nomecidade_2, estado_2); }
        else 
            printf("Resultado: Empatou!\n");
        break;

    // 3-PIB
        case 3:
        printf("PIB: \nCarta 01 - R$%.2f\nCarta 02 - R$%.2f\n", PIB_1, PIB_2);
        if (PIB_1 > PIB_2) {
            resultado_1 ++;   
            printf("Resultado: A Carta 01 - %s/%s venceu!\n", nomecidade_1, estado_1); }
        else if (PIB_2 > PIB_1) {
            resultado_2 ++;
            printf("Resultado: A Carta 02 - %s/%s venceu!\n", nomecidade_2, estado_2); }
        else 
            printf("Resultado: Empatou!\n");
        break;

    // 4-Pontos Turísticos
        case 4:
        printf("Pontos Turísticos: \nCarta 01 - %d\nCarta 02 - %d\n", pontosturisticos_1, pontosturisticos_2); 
        if (pontosturisticos_1 > pontosturisticos_2) {
            resultado_1 ++; 
            printf("Resultado: A Carta 01 - %s/%s venceu!\n", nomecidade_1, estado_1); }
        else if (pontosturisticos_2 > pontosturisticos_1) {
            resultado_2 ++;
            printf("Resultado: A Carta 02 - %s/%s venceu!\n", nomecidade_2, estado_2); }
        else 
            printf("Resultado: Empatou!\n");
        break;

    // 5-Densidade (Possui comparação inversa dos demais atributos)
        case 5:
            printf("Densidade (População/Área): \nCarta 01 - %.2f hab/km²\nCarta 02 - %.2f hab/km²\n", densidade_1, densidade_2); 
        if (densidade_1 < densidade_2) {
            resultado_1 ++; 
            printf("Resultado: A Carta 01 - %s/%s venceu!\n", nomecidade_1, estado_1); }
        else if (densidade_2 < densidade_1) {
            resultado_2 ++;
            printf("Resultado: A Carta 02 - %s/%s venceu!\n", nomecidade_2, estado_2); }
        else 
            printf("Resultado: Empatou!\n");
        break;

    // 6-PIB Per Capita
        case 6:
            printf("PIB Per Capita (PIB/População): \nCarta 01 - R$%.2f\nCarta 02 - R$%.2f\n", PIBpercapita_1, PIBpercapita_2); 
        if (PIBpercapita_1 > PIBpercapita_2) {
            resultado_1 ++; 
            printf("Resultado: A Carta 01 - %s/%s venceu!\n", nomecidade_1, estado_1); }
        else if (PIBpercapita_2 > PIBpercapita_1) {
            resultado_2 ++;
            printf("Resultado: A Carta 02 - %s/%s venceu!\n", nomecidade_2, estado_2); }
        else 
            printf("Resultado: Empatou!\n");

    // 7-Super Poder
        case 7:
            printf("Super Poder (Todos os Atributos): \nCarta 01 - %.2f\nCarta 02 - %.2f\n", superpoder_1, superpoder_2); 
        if (superpoder_1 > superpoder_2) {
            resultado_1 ++;  
            printf("Resultado: A Carta 01 - %s/%s venceu!\n", nomecidade_1, estado_1); }
        else if (superpoder_2 > superpoder_1) {
            resultado_2 ++;
            printf("Resultado: A Carta 02 - %s/%s venceu!\n", nomecidade_2, estado_2); }
        else 
            printf("Resultado: Empatou!\n");

        default:
            printf("Opção inválida\n");
    }

    printf("*************************************\n");

    /*********** Atributo 2 ***********/
    // Apresentadas as opções disponíveis de comparação
    // Não é apresentado mais o atributo 1 já utilizado
    switch (opcao) {
    //1-População
        case 1: 
        printf("2-Área\n");
        printf("3-PIB\n");
        printf("4-Número de Pontos Turísticos\n");
        printf("5-Densidade Demográfica\n");  
        printf("6-PIB per Capita\n");   
        printf("7-Super Poder\n");           
        break;

    //2-Área
        case 2:
        printf("1-População\n");
        printf("3-PIB\n");
        printf("4-Número de Pontos Turísticos\n");
        printf("5-Densidade Demográfica\n");
        printf("6-PIB per Capita\n");   
        printf("7-Super Poder\n");        
        break;

    //3-PIB
        case 3:
        printf("1-População\n");
        printf("2-Área\n");
        printf("4-Número de Pontos Turísticos\n");
        printf("5-Densidade Demográfica\n"); 
        printf("6-PIB per Capita\n");   
        printf("7-Super Poder\n");       
        break;

    //4-Pontos Turísticos
        case 4:
        printf("1-População\n");
        printf("2-Área\n");
        printf("3-PIB\n");
        printf("5-Densidade Demográfica\n");
        printf("6-PIB per Capita\n");   
        printf("7-Super Poder\n");        
        break;

    //5-Densidade (Possui comparação inversa dos demais campos)
        case 5:
        printf("1-População\n");
        printf("2-Área\n");
        printf("3-PIB\n");
        printf("4-Número de Pontos Turísticos\n");
        printf("6-PIB per Capita\n");   
        printf("7-Super Poder\n");      
        break;

    //6-PIB Per Capita
        case 6:
        printf("1-População\n");
        printf("2-Área\n");
        printf("3-PIB\n");
        printf("4-Número de Pontos Turísticos\n");
        printf("5-Densidade Demográfica\n");
        printf("7-Super Poder\n");      
        break;

    //7-Super Poder
        case 7:
        printf("1-População\n");
        printf("2-Área\n");
        printf("3-PIB\n");
        printf("4-Número de Pontos Turísticos\n");
        printf("5-Densidade Demográfica\n");
        printf("6-PIB per Capita\n");       
        break;

        default:
            printf("Opção inválida\n");
    }

    printf("*************************************\n");   

    // Solicitado ao usuário para informar o atributo de comparação   
    printf("Escolha o atributo 2 para comparar:");
    scanf("%d", &opcao_2);

    // Realizada a comparação individual conforme o atributo 2 escolhido
    // Acumulado valor na variável de resultado para somar com as demais comparações
    switch (opcao_2) {
    // 1-População
        case 1: 
            printf("População: \nCarta 01 - %lu habitantes\nCarta 02 - %lu habitantes\n", populacao_1, populacao_2);
        if (populacao_1 > populacao_2) {
            resultado_1 ++; 
            printf("Resultado: A Carta 01 - %s/%s venceu!\n", nomecidade_1, estado_1); }
        else if (populacao_2 > populacao_1) {
            resultado_2 ++;
            printf("Resultado: A Carta 02 - %s/%s venceu!\n", nomecidade_2, estado_2); }
        else 
            printf("Resultado: Empatou!\n");
        break;

    // 2-Área
        case 2:
        printf("Área: \nCarta 01 - %.2f km²\nCarta 02 - %.2f km²\n", area_1, area_2);
        if (area_1 > area_2) {
            resultado_1 ++; 
            printf("Resultado: A Carta 01 - %s/%s venceu!\n", nomecidade_1, estado_1); }
        else if (area_2 > area_1) {
            resultado_2 ++;
            printf("Resultado: A Carta 02 - %s/%s venceu!\n", nomecidade_2, estado_2); }
        else 
            printf("Resultado: Empatou!\n");
        break;

    // 3-PIB
        case 3:
        printf("PIB: \nCarta 01 - R$%.2f\nCarta 02 - R$%.2f\n", PIB_1, PIB_2);
        if (PIB_1 > PIB_2) {
            resultado_1 ++;   
            printf("Resultado: A Carta 01 - %s/%s venceu!\n", nomecidade_1, estado_1); }
        else if (PIB_2 > PIB_1) {
            resultado_2 ++;
            printf("Resultado: A Carta 02 - %s/%s venceu!\n", nomecidade_2, estado_2); }
        else 
            printf("Resultado: Empatou!\n");
        break;

    // 4-Pontos Turísticos
        case 4:
        printf("Pontos Turísticos: \nCarta 01 - %d\nCarta 02 - %d\n", pontosturisticos_1, pontosturisticos_2); 
        if (pontosturisticos_1 > pontosturisticos_2) {
            resultado_1 ++; 
            printf("Resultado: A Carta 01 - %s/%s venceu!\n", nomecidade_1, estado_1); }
        else if (pontosturisticos_2 > pontosturisticos_1) {
            resultado_2 ++;
            printf("Resultado: A Carta 02 - %s/%s venceu!\n", nomecidade_2, estado_2); }
        else 
            printf("Resultado: Empatou!\n");
        break;

    // 5-Densidade (Possui comparação inversa dos demais atributos)
        case 5:
            printf("Densidade (População/Área): \nCarta 01 - %.2f hab/km²\nCarta 02 - %.2f hab/km²\n", densidade_1, densidade_2); 
        if (densidade_1 < densidade_2) {
            resultado_1 ++; 
            printf("Resultado: A Carta 01 - %s/%s venceu!\n", nomecidade_1, estado_1); }
        else if (densidade_2 < densidade_1) {
            resultado_2 ++;
            printf("Resultado: A Carta 02 - %s/%s venceu!\n", nomecidade_2, estado_2); }
        else 
            printf("Resultado: Empatou!\n");
        break;

    // 6-PIB Per Capita
        case 6:
            printf("PIB Per Capita (PIB/População): \nCarta 01 - R$%.2f\nCarta 02 - R$%.2f\n", PIBpercapita_1, PIBpercapita_2); 
        if (PIBpercapita_1 > PIBpercapita_2) {
            resultado_1 ++; 
            printf("Resultado: A Carta 01 - %s/%s venceu!\n", nomecidade_1, estado_1); }
        else if (PIBpercapita_2 > PIBpercapita_1) {
            resultado_2 ++;
            printf("Resultado: A Carta 02 - %s/%s venceu!\n", nomecidade_2, estado_2); }
        else 
            printf("Resultado: Empatou!\n");

    // 7-Super Poder
        case 7:
            printf("Super Poder (Todos os Atributos): \nCarta 01 - %.2f\nCarta 02 - %.2f\n", superpoder_1, superpoder_2); 
        if (superpoder_1 > superpoder_2) {
            resultado_1 ++;  
            printf("Resultado: A Carta 01 - %s/%s venceu!\n", nomecidade_1, estado_1); }
        else if (superpoder_2 > superpoder_1) {
            resultado_2 ++;
            printf("Resultado: A Carta 02 - %s/%s venceu!\n", nomecidade_2, estado_2); }
        else 
            printf("Resultado: Empatou!\n");

        default:
            printf("Opção inválida\n");
    }

    /*********** Resultados das Cartas ***********/

    printf("*************************************\n");
    printf("SOMATÓRIO:\n");
    printf("*************************************\n");

    // Apresentado o somatório de cada carta conforme os atributos comparados
    printf("A Carta 01 - %s/%s atingiu %d pontos!\n", nomecidade_1, estado_1, resultado_1);
    printf("A Carta 02 - %s/%s atingiu %d pontos!\n", nomecidade_2, estado_2, resultado_2);

    printf("*************************************\n");
    printf("RESULTADO FINAL:\n");
    printf("*************************************\n");

    // Apresentado o resultado final obtido conforme o somatório acumulado obtido das cartas
    if (resultado_1 > resultado_2) {
        printf("PARABÉNS! A CARTA 01 - %s/%s VENCEU!!!\n", nomecidade_1, estado_1); }
    else if (superpoder_2 > superpoder_1) {
        printf("PARABÉNS! A CARTA 02 - %s/%s VENCEU!!!\n", nomecidade_2, estado_2); }
    else 
        printf("EMPATE!!!\n");

    return 0;

}