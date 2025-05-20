#include <stdio.h>

int main() {


    // Variáveis
    char estado, estado2; 
    char codigo[5], codigo2[5]; 
    char cidade[40], cidade2[40];
    int populacao, ptos_tur, populacao2, ptos_tur2;
    float area, pib, area2, pib2;


    // Cabeçalho
    printf("\n");
    printf("=========================\n");
    printf("DIGITE OS SEGUINTES DADOS\n");
    printf("=========================\n");

 
    // Chamadas e valoração das variáveis
    printf("CARTA 1\n");
    printf("-------\n");

    printf("Estado: ");
    scanf("%c", &estado);
    printf("Codigo: ");
    scanf("%s", codigo);
    printf("Nome da Cidade: "); 
    scanf("%s", cidade);
    printf("Populacao: ");
    scanf("%i", &populacao);
    printf("Area em Km2: ");
    scanf("%f", &area);
    printf("PIB percapta: ");
    scanf("%f", &pib);
    printf("Pontos Turisticos: ");
    scanf("%i", &ptos_tur);

    printf("\n");
    printf("CARTA 2\n");
    printf("-------\n");

    printf("Estado: ");
    scanf(" %c", &estado2);
    printf("Codigo: ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf("%s", cidade2);
    printf("Populacao: ");
    scanf("%i", &populacao2);
    printf("Area em Km2: ");
    scanf("%f", &area2);
    printf("PIB percapta: ");
    scanf("%f", &pib2);
    printf("Pontos Turisticos: ");
    scanf("%i", &ptos_tur2);


    // Sáida de dados
    printf("\n");
    printf("S A I D A S\n");
    printf("\n");
    printf("Carta 1\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %i\n", populacao);
    printf("Area em Km2: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos Turisticos: %i\n", ptos_tur);

    printf("\n");

    printf("Carta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %i\n", populacao2);
    printf("Area em Km2: %.2f\n", area2);
    printf("PIB: %.2f\n", pib);
    printf("Pontos Turisticos: %i\n", ptos_tur2);

    printf("\n");

    return 0;
}