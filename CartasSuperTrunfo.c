#include <stdio.h>

    // Definição das variáveis para cada atributo da cidade da carta 1

int main(){
    char estado[50];
    char codigo_da_cidade[50];
    char nome_da_cidade[50];
    int populacao;
    float area;
    float pib;
    int numero_de_pontos_turisticos;

    // Imputação das informações da carta 1 por parte do usuário

    printf("Carta 1: \n");
    printf("Estado: ");
    scanf("%s", estado);

    printf("Código: ");
    scanf("%s", codigo_da_cidade);

    printf("Nome da Cidade: ");
    scanf("%s", nome_da_cidade);

    printf("População: ");
    scanf("%d", &populacao);

    printf("Área (km²): ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &numero_de_pontos_turisticos);

    // Exibição da carta 1

    printf("----------------------------------\n");
    printf("CARTA 1\n");

    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo_da_cidade);
    printf("Nome da Cidade: %s\n", nome_da_cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", numero_de_pontos_turisticos);

    printf("----------------------------------\n");

    // Definição das variáveis para cada atributo da cidade da carta 2

    char estado2[50];
    char codigo_da_cidade2[50];
    char nome_da_cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int numero_de_pontos_turisticos2;

    // Imputação das informações da carta 2 por parte do usuário

    printf("Carta 2: \n");
    printf("Estado: ");
    scanf("%s", estado2);

    printf("Código: ");
    scanf("%s", codigo_da_cidade2);

    printf("Nome da Cidade: ");
    scanf("%s", nome_da_cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &numero_de_pontos_turisticos2);

    // Exibição da carta 2

    printf("----------------------------------\n");
    printf("CARTA 2\n");

    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo_da_cidade2);
    printf("Nome da Cidade: %s\n", nome_da_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numero_de_pontos_turisticos2);

    return 0;


}
