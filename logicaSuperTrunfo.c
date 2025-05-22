#include <stdio.h>

int main() {
    // Dados da Carta 1
    char estado1[10], codigo1[10], cidade1[50];
    float populacao1, area1, PIB1;
    int pontos_turisticos1;
    float densidade_populacional1, PIB_percapita1;

    // Dados da Carta 2
    char estado2[10], codigo2[10], cidade2[50];
    float populacao2, area2, PIB2;
    int pontos_turisticos2;
    float densidade_populacional2, PIB_percapita2;

    // ---- Entrada dos dados da carta 1 ----
    printf("Digite o Estado da carta 1: ");
    scanf("%s", estado1);

    printf("Código da carta 1: ");
    scanf("%s", codigo1);

    printf("Nome da cidade da carta 1: ");
    scanf("%s", cidade1);

    printf("População da carta 1: ");
    scanf("%f", &populacao1);

    printf("Pontos turísticos da carta 1: ");
    scanf("%d", &pontos_turisticos1);

    printf("Área da carta 1 (em km²): ");
    scanf("%f", &area1);

    printf("PIB da carta 1: ");
    scanf("%f", &PIB1);

    // Cálculos da carta 1
    densidade_populacional1 = populacao1 / area1;
    PIB_percapita1 = PIB1 / populacao1;

    // ---- Entrada dos dados da carta 2 ----
    printf("\nDigite o Estado da carta 2: ");
    scanf("%s", estado2);

    printf("Código da carta 2: ");
    scanf("%s", codigo2);

    printf("Nome da cidade da carta 2: ");
    scanf("%s", cidade2);

    printf("População da carta 2: ");
    scanf("%f", &populacao2);

    printf("Pontos turísticos da carta 2: ");
    scanf("%d", &pontos_turisticos2);

    printf("Área da carta 2 (em km²): ");
    scanf("%f", &area2);

    printf("PIB da carta 2: ");
    scanf("%f", &PIB2);

    // Cálculos da carta 2
    densidade_populacional2 = populacao2 / area2;
    PIB_percapita2 = PIB2 / populacao2;

    // ---- Exibição das cartas ----
    printf("\n--- CARTA 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s%s\n", estado1, codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %.0f\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per capita: %.2f\n", PIB_percapita1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);

    printf("\n--- CARTA 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s%s\n", estado2, codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %.0f\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per capita: %.2f\n", PIB_percapita2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);

    // ---- Comparação (Escolhido: População) ----
    printf("\n>>> Comparação de Cartas (Atributo: População)\n");
    printf("Carta 1 - %s (%s): %.0f habitantes\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %.0f habitantes\n", cidade2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
