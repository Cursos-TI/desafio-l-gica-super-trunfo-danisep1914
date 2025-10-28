#include <stdio.h>
#include <string.h>

int main() {
    char nomePais1[50], nomePais2[50];
    int populacao1, populacao2, pontosTuristicos1, pontosTuristicos2;
    float area1, area2, pib1, pib2, densidade1, densidade2;

    // ======= Cadastro das cartas =======
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Nome do país: ");
    scanf(" %[^\n]", nomePais1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);
    densidade1 = populacao1 / area1;

    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Nome do país: ");
    scanf(" %[^\n]", nomePais2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);
    densidade2 = populacao2 / area2;

    // ======= Escolha dos atributos =======
    int atributo1, atributo2;
    printf("\n=== MENU DE ATRIBUTOS ===\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Escolha o primeiro atributo para comparação: ");
    scanf("%d", &atributo1);

    // Menu dinâmico: remove a opção já escolhida
    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    for (int i = 1; i <= 5; i++) {
        if (i != atributo1) {
            switch (i) {
                case 1: printf("1 - População\n"); break;
                case 2: printf("2 - Área\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 4: printf("4 - Pontos Turísticos\n"); break;
                case 5: printf("5 - Densidade Demográfica\n"); break;
            }
        }
    }
    printf("Sua escolha: ");
    scanf("%d", &atributo2);

    if (atributo1 == atributo2) {
        printf("\nErro: Os dois atributos devem ser diferentes!\n");
        return 1;
    }

    // ======= Função de comparação com operador ternário =======
    float valor1_attr1 = 0, valor2_attr1 = 0, valor1_attr2 = 0, valor2_attr2 = 0;
    char nomeAtributo1[40], nomeAtributo2[40];

    // ======= Primeiro atributo =======
    switch (atributo1) {
        case 1: valor1_attr1 = populacao1; valor2_attr1 = populacao2; strcpy(nomeAtributo1, "População"); break;
        case 2: valor1_attr1 = area1; valor2_attr1 = area2; strcpy(nomeAtributo1, "Área"); break;
        case 3: valor1_attr1 = pib1; valor2_attr1 = pib2; strcpy(nomeAtributo1, "PIB"); break;
        case 4: valor1_attr1 = pontosTuristicos1; valor2_attr1 = pontosTuristicos2; strcpy(nomeAtributo1, "Pontos Turísticos"); break;
        case 5: valor1_attr1 = densidade1; valor2_attr1 = densidade2; strcpy(nomeAtributo1, "Densidade Demográfica"); break;
        default: printf("Atributo inválido!\n"); return 1;
    }

    // ======= Segundo atributo =======
    switch (atributo2) {
        case 1: valor1_attr2 = populacao1; valor2_attr2 = populacao2; strcpy(nomeAtributo2, "População"); break;
        case 2: valor1_attr2 = area1; valor2_attr2 = area2; strcpy(nomeAtributo2, "Área"); break;
        case 3: valor1_attr2 = pib1; valor2_attr2 = pib2; strcpy(nomeAtributo2, "PIB"); break;
        case 4: valor1_attr2 = pontosTuristicos1; valor2_attr2 = pontosTuristicos2; strcpy(nomeAtributo2, "Pontos Turísticos"); break;
        case 5: valor1_attr2 = densidade1; valor2_attr2 = densidade2; strcpy(nomeAtributo2, "Densidade Demográfica"); break;
        default: printf("Atributo inválido!\n"); return 1;
    }

    // ======= Comparações individuais =======
    int resultado1 = (atributo1 == 5) ? (valor1_attr1 < valor2_attr1) : (valor1_attr1 > valor2_attr1);
    int resultado2 = (atributo2 == 5) ? (valor1_attr2 < valor2_attr2) : (valor1_attr2 > valor2_attr2);

    // ======= Soma dos atributos =======
    float soma1 = valor1_attr1 + valor1_attr2;
    float soma2 = valor2_attr1 + valor2_attr2;

    // ======= Exibição dos resultados =======
    printf("\n=== RESULTADO DA COMPARAÇÃO ===\n");
    printf("%s x %s\n\n", nomePais1, nomePais2);

    printf("%s:\n", nomeAtributo1);
    printf("  %s: %.2f\n  %s: %.2f\n", nomePais1, valor1_attr1, nomePais2, valor2_attr1);
    printf("Vencedor: %s\n\n", resultado1 ? nomePais1 : (valor1_attr1 == valor2_attr1 ? "Empate" : nomePais2));

    printf("%s:\n", nomeAtributo2);
    printf("  %s: %.2f\n  %s: %.2f\n", nomePais1, valor1_attr2, nomePais2, valor2_attr2);
    printf("Vencedor: %s\n\n", resultado2 ? nomePais1 : (valor1_attr2 == valor2_attr2 ? "Empate" : nomePais2));

    printf("=== SOMA FINAL DOS ATRIBUTOS ===\n");
    printf("%s: %.2f\n", nomePais1, soma1);
    printf("%s: %.2f\n", nomePais2, soma2);

    if (soma1 > soma2)
        printf("\nResultado Final: %s venceu a rodada!\n", nomePais1);
    else if (soma2 > soma1)
        printf("\nResultado Final: %s venceu a rodada!\n", nomePais2);
    else
        printf("\nResultado Final: Empate!\n");

    printf("\n=== Fim da comparação ===\n");

    return 0;
}

