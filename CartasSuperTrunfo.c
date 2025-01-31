#include <stdio.h>

//Desafio Super Trunfo Países
//Nível Novato - Cadastrando Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main(){
//Definição das Variáveis: (tipo_variável nome_variável); (nome_variável são os atributos da carta)
    char estado;
    char cod_carta[4];
    char nome_da_cidade[20];
    int populacao;
    float area;
    float PIB;
    int pontos_turisticos;

//Cadastro das Cartas:
    printf("Digite o Estado: \n", estado);
    scanf(" %c", &estado);

    printf("Digite o Código da Carta: \n", cod_carta);
    scanf(" %s", &cod_carta);

    printf("Digite o Nome da Cidade: \n", nome_da_cidade);
    scanf(" %20[^\n]s", &nome_da_cidade);
    
    printf("Digite o número de habitantes da cidade: \n", populacao);
    scanf(" %d", &populacao);

    printf("Digite a área total da cidade em quilômetros quadrados: \n", area);
    scanf(" %f", &area);

    printf("Digite o PIB: \n", PIB);
    scanf(" %f", &PIB);

    printf("Digite o número de pontos turísticos: \n", pontos_turisticos);
    scanf(" %d", &pontos_turisticos);

//Exibição dos Dados das Cartas:
    
    printf("\nEstado: %c\n", estado);
    printf("Código da Carta: %s\n", cod_carta);
    printf("Nome da Cidade: %s\n", nome_da_cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", PIB);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos);
    
    return 0;

}