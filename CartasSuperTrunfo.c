#include <stdio.h>
#include <string.h>

int main() {
    // -------- Cidade 1 --------
    char estado1[3];
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
    while (getchar() != '\n');

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

    // ===== Exibe informações resumidas =====
    printf("\n--- Carta 1 ---\nNome: %s (%s)\n", nome1, codigoCarta1);
    printf("--- Carta 2 ---\nNome: %s (%s)\n", nome2, codigoCarta2);

    // ===== Menu de comparação =====
    int opcao;
    printf("\n==========================================\n");
    printf("🃏 SUPER TRUNFO - MENU DE COMPARAÇÃO\n");
    printf("Escolha o atributo que deseja comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica (vence o menor)\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");
    printf("==========================================\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);

    printf("\n=== Resultado da Comparação ===\n");

    switch(opcao) {
        case 1: // População
            printf("Atributo: População\n");
            if (populacao1 > populacao2)
                printf("🏆 %s venceu! (%lu > %lu)\n", nome1, populacao1, populacao2);
            else if (populacao2 > populacao1)
                printf("🏆 %s venceu! (%lu > %lu)\n", nome2, populacao2, populacao1);
            else
                printf("🤝 Empate! (%lu = %lu)\n", populacao1, populacao2);
            break;

        case 2: // Área
            printf("Atributo: Área\n");
            if (area1 > area2)
                printf("🏆 %s venceu! (%.2f km² > %.2f km²)\n", nome1, area1, area2);
            else if (area2 > area1)
                printf("🏆 %s venceu! (%.2f km² > %.2f km²)\n", nome2, area2, area1);
            else
                printf("🤝 Empate! (%.2f km² = %.2f km²)\n", area1, area2);
            break;

        case 3: // PIB
            printf("Atributo: PIB\n");
            if (pib1 > pib2)
                printf("🏆 %s venceu! (R$ %.2f bi > R$ %.2f bi)\n", nome1, pib1, pib2);
            else if (pib2 > pib1)
                printf("🏆 %s venceu! (R$ %.2f bi > R$ %.2f bi)\n", nome2, pib2, pib1);
            else
                printf("🤝 Empate! (R$ %.2f bi = R$ %.2f bi)\n", pib1, pib2);
            break;

        case 4: // Pontos turísticos
            printf("Atributo: Pontos Turísticos\n");
            if (pontosTuristicos1 > pontosTuristicos2)
                printf("🏆 %s venceu! (%d > %d)\n", nome1, pontosTuristicos1, pontosTuristicos2);
            else if (pontosTuristicos2 > pontosTuristicos1)
                printf("🏆 %s venceu! (%d > %d)\n", nome2, pontosTuristicos2, pontosTuristicos1);
            else
                printf("🤝 Empate! (%d = %d)\n", pontosTuristicos1, pontosTuristicos2);
            break;

        case 5: // Densidade demográfica (vence o menor)
            printf("Atributo: Densidade Demográfica\n");
            if (densidade1 < densidade2)
                printf("🏆 %s venceu! (%.2f < %.2f)\n", nome1, densidade1, densidade2);
            else if (densidade2 < densidade1)
                printf("🏆 %s venceu! (%.2f < %.2f)\n", nome2, densidade2, densidade1);
            else
                printf("🤝 Empate! (%.2f = %.2f)\n", densidade1, densidade2);
            break;

        case 6: // PIB per capita
            printf("Atributo: PIB per Capita\n");
            if (pibPerCapita1 > pibPerCapita2)
                printf("🏆 %s venceu! (R$ %.2f > R$ %.2f)\n", nome1, pibPerCapita1, pibPerCapita2);
            else if (pibPerCapita2 > pibPerCapita1)
                printf("🏆 %s venceu! (R$ %.2f > R$ %.2f)\n", nome2, pibPerCapita2, pibPerCapita1);
            else
                printf("🤝 Empate! (R$ %.2f = R$ %.2f)\n", pibPerCapita1, pibPerCapita2);
            break;

        case 7: // Super Poder
            printf("Atributo: Super Poder\n");
            if (superPoder1 > superPoder2)
                printf("🏆 %s venceu! (%.2f > %.2f)\n", nome1, superPoder1, superPoder2);
            else if (superPoder2 > superPoder1)
                printf("🏆 %s venceu! (%.2f > %.2f)\n", nome2, superPoder2, superPoder1);
            else
                printf("🤝 Empate! (%.2f = %.2f)\n", superPoder1, superPoder2);
            break;

        default:
            printf("❌ Opção inválida! Escolha de 1 a 7.\n");
            break;
    }

    printf("Novo commit\n");
    return 0;
}


