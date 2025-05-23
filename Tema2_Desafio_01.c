
#include <stdio.h>

int main() {


    // Variáveis
    char estado, estado2; 
    char codigo[5], codigo2[5]; 
    char cidade[40], cidade2[40];
    int populacao, ptos_tur, populacao2, ptos_tur2;
    float area, pib, area2, pib2;

    float densidade, densidade2;
    float percapta, percapta2;


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
    printf("PIB: ");
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
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos Turisticos: ");
    scanf("%i", &ptos_tur2);


    // S A Í D A  D E  D A D O S 
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
    densidade = (populacao / area);
    printf("Densidade populacional: %.2f\n", densidade);
    percapta = ((pib * 1000000000) / populacao);
    printf("PIB percapta: %.2f\n", percapta);


    printf("\n");
    printf("Carta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %i\n", populacao2);
    printf("Area em Km2: %.2f\n", area2);
    printf("PIB: %.2f\n", pib);
    printf("Pontos Turisticos: %i\n", ptos_tur2); 
    densidade2 = (populacao2 / area2);
    printf("Densidade populacional: %.2f\n", densidade2);
    percapta2 = ((pib2 * 1000000000) / populacao2);
    printf("PIB percapta: %.2f\n", percapta2);

    printf("\n");
    printf("S A I D A - C O M P A R A C O E S  D E  C A R T A S\n");
    printf("\n");
    
    printf("Populacao: ");
    if (populacao > populacao2) {
        printf("Carta 1 Venceu!\n");
        } else {
        printf("Carta 2 Venceu!\n");
        }
    printf("Area em Km2: ");
    if (area > area2) {
            printf("Carta 1 Venceu!\n");
        } else {
            printf("Carta 2 Venceu!\n");
        }
    printf("PIB");
    if (pib > pib2) {
            printf("Carta 1 Venceu!\n");
        } else {
            printf("Carta 2 Venceu!\n");
        }
    printf("Pontos Turisticos: ");
    if (ptos_tur > ptos_tur2) {
            printf("Carta 1 Venceu!\n");
        } else {
            printf("Carta 2 Venceu!\n");
        }
    printf("Densidade Demografica: ");
    if (densidade > densidade2) {
            printf("Carta 1 Venceu!\n");
        } else {
            printf("Carta 2 Venceu!\n");
        }
    printf("PIB Percapta: ");
    if (percapta > percapta2) {
            printf("Carta 1 Venceu!\n");
        } else {
            printf("Carta 2 Venceu!\n");
        }

    printf("\n");
    printf("C A R T A S  E M  P O P U L A C A O\n");
    printf("\n");
   
    printf("Carta 1 - %s: %i\n", cidade, populacao);
    printf("Carta 2 - %s: %i\n", cidade2, populacao2);

    printf("\n");

    if(populacao > populacao2) {
        printf("Resultado: %s venceu!\n", cidade);
        } else {
        printf("Resultado: %s venceu!\n", cidade2);
        }
    printf("\n");

    return 0;
}