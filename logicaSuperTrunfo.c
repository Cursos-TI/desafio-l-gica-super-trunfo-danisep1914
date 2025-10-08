#include <stdio.h>

int main() {
    // ================================
    // DECLARAÇÃO DAS VARIÁVEIS
    // ================================
    char estado1[10], codigo1[5], cidade1[20];
    int populacao1, PontosTuristicos1;
    float area1, pib1, densidade1, pibPerCapita1;

    char estado2[10], codigo2[5], cidade2[20];
    int populacao2, PontosTuristicos2;
    float area2, pib2, densidade2, pibPerCapita2;

    // ================================
    // ENTRADA DE DADOS DA CARTA 1
    // ================================
    printf("\n--- Carta 1 ---\n");
    printf("Estado: ");
    scanf("%s", estado1);

    printf("Código: ");
    scanf("%s", codigo1);

    printf("Cidade: ");
    scanf("%s", cidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB (em reais): ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &PontosTuristicos1);

    // Cálculos automáticos
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    // ================================
    // ENTRADA DE DADOS DA CARTA 2
    // ================================
    printf("\n--- Carta 2 ---\n");
    printf("Estado: ");
    scanf("%s", estado2);

    printf("Código: ");
    scanf("%s", codigo2);

    printf("Cidade: ");
    scanf("%s", cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB (em reais): ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &PontosTuristicos2);

    // Cálculos automáticos
    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // ================================
    // EXIBIÇÃO DOS DADOS CALCULADOS
    // ================================
    printf("\n--- Dados Calculados ---\n");
    printf("Carta 1 (%s - %s):\n", cidade1, estado1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\nCarta 2 (%s - %s):\n", cidade2, estado2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    
    // COMPARAÇÃO ENTRE AS CARTAS
    // Escolha do atributo de comparação:
    // --> Aqui você pode trocar por "area1", "pib1", "pibPerCapita1", "densidade1", etc.
    // Exemplo: vamos comparar pelo PIB per Capita

    printf("\n--- Comparação de Cartas (Atributo: PIB per Capita) ---\n");

    if (pibPerCapita1 > pibPerCapita2) {
        printf("Carta 1 - %s (%s): %.2f reais\n", cidade1, estado1, pibPerCapita1);
        printf("Carta 2 - %s (%s): %.2f reais\n", cidade2, estado2, pibPerCapita2);
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } 
    else if (pibPerCapita2 > pibPerCapita1) {
        printf("Carta 1 - %s (%s): %.2f reais\n", cidade1, estado1, pibPerCapita1);
        printf("Carta 2 - %s (%s): %.2f reais\n", cidade2, estado2, pibPerCapita2);
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } 
    else {
        printf("Carta 1 e Carta 2 têm o mesmo PIB per Capita! (Empate)\n");
    }

    return 0;
}
