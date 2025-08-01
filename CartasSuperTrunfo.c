#include <stdio.h>
#include <string.h>

int main() {
    
    int codigo1, populacao1, pontosTuristicos1;
    float area1, pib1;
    char nome1[50];

    
    int codigo2, populacao2, pontosTuristicos2;
    float area2, pib2;
    char nome2[50];

   
    printf("Digite o código da cidade 1: ");
    scanf("%d", &codigo1);
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
    while (getchar() != '\n'); // limpa de novo


    printf("\nDigite o código da cidade 2: ");
    scanf("%d", &codigo2);
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

    
    printf("\n--- Dados da Cidade 1 ---\n");
    printf("Código: %d\n", codigo1);
    printf("Nome: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\n--- Dados da Cidade 2 ---\n");
    printf("Código: %d\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
