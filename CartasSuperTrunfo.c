#include <stdio.h>

    int main (){

    // Anúncio de Variáveis - Carta 1 

        int populacao1, pontoturistico1;
        float area1, pib1;
        char estado1;
        char codigo1[5];
        char cidade1[20];

     // Anúncio de Variáveis - Carta 2

        int populacao2, pontoturistico2;
        float area2, pib2;
        char estado2;
        char codigo2[5];
        char cidade2[20];
        

     // Entrada de Dados - Carta 1 

        printf("Cadastro da Carta 1\n");

        printf ("Digite o Estado (A-Z): \n");
        scanf(" %c", &estado1);

        printf("Digite o código da carta: \n");
        scanf("%s", codigo1);

        printf("Digite o nome da cidade: \n");
        scanf("%s", cidade1);

        printf("Digite o valor populacional: \n");
        scanf("%d", &populacao1);

        printf("Digite qual a área: \n");
        scanf("%f", &area1);

        printf("Digite qual o PIB: \n");
        scanf("%f", &pib1);

        printf("Digite a quantidade de pontos turísticos: \n");
        scanf("%d", &pontoturistico1);

    // Entrada de Dados - Carta 2 
     
        printf("Cadastro da Carta 2\n");

        printf ("Digite o Estado (A-Z): \n");
        scanf (" %c", &estado2);

        printf ("Digite o código da carta: \n");
        scanf ("%s", codigo2);

        printf ("Digite o nome da cidade: \n");
        scanf ("%s", cidade2);

        printf ("Digite o valor populacional: \n");
        scanf ("%d", &populacao2);

        printf ("Digite qual a área: \n");
        scanf ("%f", &area2);

        printf ("Digite qual o PIB: \n");
        scanf ("%f", &pib2);

        printf ("Digite a quantidade de pontos turísticos: \n");
        scanf ("%d", &pontoturistico2);


    // Impressão de dados - Carta 1

        printf(" Carta 1\n");
        
        printf ("Estado: %c\n",estado1);
        printf ("Código: %s\n", codigo1);
        printf ("Nome da Cidade: %s\n", cidade1);
        printf ("População: %d habitantes\n", populacao1);
        printf ("Aréa: %.2f km²\n", area1);
        printf ("PIB: %f bilhões de reais\n", pib1);
        printf ("Número de Pontos Turísticos: %d\n", pontoturistico1);

    // Impressão de dados - Carta 2

        printf("Carta 2\n");

        printf ("Estado: %c\n",estado2);
        printf ("Código: %s\n", codigo2);
        printf ("Nome da Cidade: %s\n", cidade2);
        printf ("População: %d habitantes\n", populacao2);
        printf ("Aréa: %.2f km²\n", area2);
        printf ("PIB: %f bilhões de reais\n", pib2);
        printf ("Número de Pontos Turísticos: %d\n", pontoturistico2);

    
    return 0;
        

    }