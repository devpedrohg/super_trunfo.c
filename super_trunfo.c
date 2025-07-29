#include <stdio.h>

int main() {
    // Declaração das variáveis
    char estado1[30], codigo1[30], cidade1[30];
    char estado2[30], codigo2[30], cidade2[30];

    unsigned long int populacao1, populacao2;
    int pontosTuristicos1, pontosTuristicos2;
    float area1, area2, pib1, pib2;
    float densidade1, densidade2, pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    // Entrada de dados da Carta 1
    printf("=== Carta 1 ===\n");
    printf("Estado: "); scanf(" %[^\n]", estado1);
    printf("Código: "); scanf(" %[^\n]", codigo1);
    printf("Cidade: "); scanf(" %[^\n]", cidade1);
    printf("População: "); scanf("%lu", &populacao1);
    printf("Área: "); scanf("%f", &area1);
    printf("PIB: "); scanf("%f", &pib1);
    printf("Pontos Turísticos: "); scanf("%d", &pontosTuristicos1);

    // Entrada de dados da Carta 2
    printf("\n=== Carta 2 ===\n");
    printf("Estado: "); scanf(" %[^\n]", estado2);
    printf("Código: "); scanf(" %[^\n]", codigo2);
    printf("Cidade: "); scanf(" %[^\n]", cidade2);
    printf("População: "); scanf("%lu", &populacao2);
    printf("Área: "); scanf("%f", &area2);
    printf("PIB: "); scanf("%f", &pib2);
    printf("Pontos Turísticos: "); scanf("%d", &pontosTuristicos2);

    // Cálculo de densidade e PIB per capita
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pibPerCapita1 = pib1 / populacao1;
    pibPerCapita2 = pib2 / populacao2;

    // Cálculo do Super Poder
    superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0f / densidade1);
    superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0f / densidade2);

    // Impressão das cartas
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s%s\n", estado1, codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s%s\n", estado2, codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);

    // Comparações
    printf("\n=== Comparação ===\n");
    printf("População: Carta 1 venceu? %s\n", (populacao1 > populacao2) ? "Sim" : "Não");
    printf("Área: Carta 1 venceu? %s\n", (area1 > area2) ? "Sim" : "Não");
    printf("PIB: Carta 1 venceu? %s\n", (pib1 > pib2) ? "Sim" : "Não");
    printf("Pontos Turísticos: Carta 1 venceu? %s\n", (pontosTuristicos1 > pontosTuristicos2) ? "Sim" : "Não");
    printf("Densidade Populacional (menor vence): Carta 1 venceu? %s\n", (densidade1 < densidade2) ? "Sim" : "Não");
    printf("PIB per Capita: Carta 1 venceu? %s\n", (pibPerCapita1 > pibPerCapita2) ? "Sim" : "Não");
    printf("Super Poder: Carta 1 venceu? %s\n", (superPoder1 > superPoder2) ? "Sim" : "Não");

    return 0;

  }