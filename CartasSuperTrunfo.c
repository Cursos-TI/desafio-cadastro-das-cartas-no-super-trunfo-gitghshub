#include <stdio.h>
#include <string.h>

int main() {
    // -------- Cidade 1 --------
    char estado1[3]; // melhor deixar string para sigla maior que 1 letra
    char codigoCarta1[10];
    char nome1[50];
    unsigned long int populacao1;   
    int pontosTuristicos1;
    float area1, pib1, densidade1, pibPerCapita1, superPoder1;

    // -------- Cidade 2 --------
    char estado2[3];
    char codigoCarta2[10];
    char nome2[50];
    unsigned long int populacao2;   
    int pontosTuristicos2;
    float area2, pib2, densidade2, pibPerCapita2, superPoder2;

    // ===== Entrada de dados da Cidade 1 =====
    printf("Digite o estado da cidade 1 (sigla): ");
    scanf("%2s", estado1);
    while (getchar() != '\n'); // limpa buffer

    printf("Digite o código da carta da cidade 1: ");
    scanf("%s", codigoCarta1);
    while (getchar() != '\n');

    printf("Digite o nome da cidade 1: ");
    fgets(nome1, sizeof(nome1), stdin);
    nome1[strcspn(nome1, "\n")] = '\0';

    printf("Digite a população da cidade 1: ");
    scanf("%lu", &populacao1);

    printf("Digite a área da cidade 1 (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade 1 (em bilhões): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da cidade 1: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos Cidade 1
    densidade1 = area1 > 0 ? (float)populacao1 / area1 : 0.0;
    pibPerCapita1 = populacao1 > 0 ? (pib1 * 1000000000.0f) / (float)populacao1 : 0.0;
    superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1
                + pibPerCapita1 + (densidade1 > 0 ? 1.0f / densidade1 : 0.0f);

    // ===== Entrada de dados da Cidade 2 =====
    printf("\nDigite o estado da cidade 2 (sigla): ");
    scanf("%2s", estado2);
    while (getchar() != '\n');

    printf("Digite o código da carta da cidade 2: ");
    scanf("%s", codigoCarta2);
    while (getchar() != '\n');

    printf("Digite o nome da cidade 2: ");
    fgets(nome2, sizeof(nome2), stdin);
    nome2[strcspn(nome2, "\n")] = '\0';

    printf("Digite a população da cidade 2: ");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade 2 (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade 2 (em bilhões): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade 2: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos Cidade 2
    densidade2 = area2 > 0 ? (float)populacao2 / area2 : 0.0;
    pibPerCapita2 = populacao2 > 0 ? (pib2 * 1000000000.0f) / (float)populacao2 : 0.0;
    superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2
                + pibPerCapita2 + (densidade2 > 0 ? 1.0f / densidade2 : 0.0f);

    // ===== Saída =====
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Código da Carta: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código da Carta: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // ===== Comparações =====
    printf("\n=== Comparacao de Cartas ===\n");
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);
    printf("Novo commit\n");
    return 0;
}

