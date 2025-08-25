#include <stdio.h>
#include <string.h>

int main() {
    // -------- Cidade 1 --------
    char estado1;
    char codigoCarta1[10];
    char nome1[50];
    int populacao1, pontosTuristicos1;
    float area1, pib1, densidade1, pibPerCapita1;

    // -------- Cidade 2 --------
    char estado2;
    char codigoCarta2[10];
    char nome2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2, densidade2, pibPerCapita2;

    // ===== Entrada de dados da Cidade 1 =====
    printf("Digite o estado da cidade 1 (letra): ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta da cidade 1: ");
    scanf("%s", codigoCarta1);
    while (getchar() != '\n');

    printf("Digite o nome da cidade 1: ");
    fgets(nome1, sizeof(nome1), stdin);
    nome1[strcspn(nome1, "\n")] = '\0';

    printf("Digite a população da cidade 1: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade 1 (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade 1: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da cidade 1: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos Cidade 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    // ===== Entrada de dados da Cidade 2 =====
    printf("\nDigite o estado da cidade 2 (letra): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta da cidade 2: ");
    scanf("%s", codigoCarta2);
    while (getchar() != '\n');

    printf("Digite o nome da cidade 2: ");
    fgets(nome2, sizeof(nome2), stdin);
    nome2[strcspn(nome2, "\n")] = '\0';

    printf("Digite a população da cidade 2: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade 2 (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade 2: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade 2: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos Cidade 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // ===== Saída =====
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita2);
    printf("Novo commit\n");

    return 0;
}
