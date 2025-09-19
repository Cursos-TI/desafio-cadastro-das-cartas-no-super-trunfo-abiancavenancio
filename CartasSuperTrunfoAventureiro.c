#include <stdio.h>

int main() {

    // Anúncio de Variáveis - Carta 1
    int populacao1, pontoturistico1;
    float area1;
    float pib1;
    char estado1[3];
    char codigo1[5];
    char cidade1[30];
    float densidadePopulacional1;
    float pibpCapita1;

    // Anúncio de Variáveis - Carta 2
    int populacao2, pontoturistico2;
    float area2;
    float pib2;
    char estado2[3];
    char codigo2[5];
    char cidade2[30];
    float densidadePopulacional2;
    float pibpCapita2;

    // Entrada de Dados - Carta 1
    printf("Cadastro da Carta 1\n");

    printf("Digite o Estado (sigla): \n");
    scanf("%s", estado1);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade1);

    printf("Digite o valor populacional: \n");
    scanf(" %d", &populacao1);

    printf("Digite a área (em km²): \n");
    scanf(" %f", &area1);

    printf("Digite o PIB (em bilhões de reais): \n");
    scanf(" %f", &pib1);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf(" %d", &pontoturistico1);

    // Cálculo Densidade Populacional - Carta 1

    densidadePopulacional1 = (float) populacao1 / area1;

    // Cálculo Pib Per Capita - Carta 1

    pibpCapita1 = (pib1 * 1000000000) / populacao1;


    // Entrada de Dados - Carta 2
    printf("Cadastro da Carta 2");

    printf("Digite o Estado (sigla): \n");
    scanf("%s", estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);

    printf("Digite o valor populacional: \n");
    scanf(" %d", &populacao2);

    printf("Digite a área (em km²): \n");
    scanf(" %f", &area2);

    printf("Digite o PIB (em bilhões de reais): \n");
    scanf(" %f", &pib2);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf(" %d", &pontoturistico2);

    // Cálculo Densidade Populacional - Carta 2

    densidadePopulacional2 = (float) populacao2 / area2;

    // Cálculo Pib Per Capita - Carta 2

    pibpCapita2 = (pib2 * 1000000000) / populacao2;


    // Impressão de dados - Carta 1

    printf("\n**Carta 1**\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.0f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontoturistico1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibpCapita1);


    // Impressão de dados - Carta 2

    printf("\n**Carta 2**\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.0f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontoturistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibpCapita2);

    return 0;
}
