#include <stdio.h>

//Desafio Super Trunfo Países
//Nível Aventureiro - Cadastrando Cartas
// Este código expandirá o sistema para incluir propriedades calculadas, permitindo uma análise mais detalhada das cartas.

int main(){

    //Definição das Variáveis: (tipo_variável nome_variável); (nome_variável são os atributos da carta)
    //Variáveis da Carta 01
    char estado1;
    char cod_carta1[4];
    char cidade1[20];
    int populacao1;
    float area1;
    float PIB1;
    int pontos_turisticos1;
    float desidade_pop1;
    float PIB_pC1;

    //Variáveis da Carta 02
    char estado2;
    char cod_carta2[4];
    char cidade2[20];
    int populacao2;
    float area2;
    float PIB2;
    int pontos_turisticos2;
    float desidade_pop2;
    float PIB_pC2;

    //Cadastro da Carta 01 pelo usuário:
    printf("#Carta 01: \n");
    printf("Digite o Estado: \n", estado1);
    scanf("%c", &estado1);

    printf("Digite o Código da Carta: \n", cod_carta1);
    scanf(" %s", &cod_carta1);

    printf("Digite o Nome da Cidade: \n", cidade1);
    scanf(" %s", &cidade1);

    printf("Digite a População em Milhões: \n", populacao1);
    scanf(" %d", &populacao1);

    printf("Digite a Área em km²: \n", area1);
    scanf(" %f", &area1);

    printf("Digite o PIB: \n", PIB1);
    scanf(" %f", &PIB1);

    printf("Digite o Número de Pontos Turísticos: \n", pontos_turisticos1);
    scanf(" %d", &pontos_turisticos1);

    //Cadastro da Carta 01 pelo usuário:
    printf("\n#Carta 02: \n");
    printf("Digite o Estado: \n", estado2);
    scanf(" %c", &estado2);

    printf("Digite o Código da Carta: \n", cod_carta2);
    scanf(" %s", &cod_carta2);

    printf("Digite o Nome da Cidade: \n", cidade2);
    scanf(" %s", &cidade2);

    printf("Digite a População em Milhões: \n", populacao2);
    scanf(" %d", &populacao2);

    printf("Digite a Área em km²: \n", area2);
    scanf(" %f", &area2);

    printf("Digite o PIB: \n", PIB2);
    scanf(" %f", &PIB2);

    printf("Digite o Número de Pontos Turísticos: \n", pontos_turisticos2);
    scanf(" %d", &pontos_turisticos2);

    //Cálculo de Operadores Matemáticos

    //Operadores Matemáticos da Carta 01
    desidade_pop1 = (float) (populacao1 / area1);
    PIB_pC1 = (float)(PIB1 / populacao1) * 1000000000; //Multiplicado por 1.000.000.000 para converter em reais

    //Operadores Matemáticos da Carta 02
    desidade_pop2 = (float) (populacao2 / area2);
    PIB_pC2 = (float)(PIB2 / populacao2) * 1000000000; //Multiplicado por 1.000.000.000 para converter em reais

    //Exibição dos Dados das Cartas:
    //Carta 01:
    printf("\nCarta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", cod_carta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("Densidade populacional: %.2f pessoas/km²\n", desidade_pop1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("PIB per Capita: %.2f reais\n", PIB_pC1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

    //Carta 02:
    printf("\nCarta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", cod_carta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("Densidade populacional: %.2f pessoas/km²\n", desidade_pop2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("PIB per Capita: %.2f reais\n", PIB_pC2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

    return 0;

    
}