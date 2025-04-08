#include <stdio.h>

    // Definição das variáveis para cada atributo da cidade

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

    printf("Área (em km²): ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &numero_de_pontos_turisticos);

    // Exibição da carta

    printf("----------------------------\n");
    printf("CARTA 1"\n);

    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo_da_cidade);
    printf("Nome da Cidade: %s\n", nome_da_cidade);
    printf("População: %d\n", populacao);
    printf("Área (em km²): %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", numero_de_pontos_turisticos);

    return 0;

}
