#include <stdio.h>

//Desafio Super Trunfo Países
//Nível Novato - Cadastrando Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

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

    //Variáveis da Carta 02
    char estado2;
    char cod_carta2[4];
    char cidade2[20];
    int populacao2;
    float area2;
    float PIB2;
    int pontos_turisticos2;

    //Cadastro da Carta 01 pelo usuário:
    printf("#Carta 01: \n");
   printf("Digite o Estado: \n", estado1);
    scanf(" %c", &estado1);

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

    //Exibição dos Dados das Cartas:
    //Carta 01:
    printf("\nCarta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", cod_carta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

    //Carta 02:
    printf("\nCarta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", cod_carta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

    return 0;

}