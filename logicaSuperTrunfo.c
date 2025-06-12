#include <stdio.h>

// Desafio Super Trunfo - Países - Nivel Aventureiro

int main() {

    //Variavel - Carta 01
    char cidade[50], codigodacidade [50], estado[50];
    int pontosturisticos;
    unsigned int populacao;
    float area, pib, denspopulacional, pibpercapita, superpoder;

    //Variavel - Carta 02
    char cidade2[50], codigodacidade2[50], estado2[50];
    int pontosturisticos2;
    unsigned int populacao2;
    float area2, pib2, denspopulacional2, pibpercapita2, superpoder2;


//Menu
    printf ("Insira os dados das cidades nas cartas! \n");

    //carta 01 - Estrutura interna da carta

        printf ("Digite a cidade: \n");
        scanf ("%s", cidade);

        printf ("Digite o Estado: \n");
        scanf ("%s", estado);

        printf ("código da cidade: \n");
        scanf ("%s", codigodacidade);

        printf ("População: \n");
        scanf ("%u", &populacao);

        printf ("area: \n");
        scanf ("%f", &area);

        printf ("PIB: \n");
        scanf ("%f", &pib);

        printf ("Qtd de pontos turisticos: \n");
        scanf ("%d", &pontosturisticos);


        //Armazenamento de valores calculados para os seguintes atributos:
        denspopulacional = (float) populacao / area; //calculo de densidade populacional
        pibpercapita = (float) pib / populacao; //calculo do pib per capita

            //Calculo e armazenamento de Superpoder
            superpoder = (float) populacao + area + pib + pontosturisticos + pibpercapita - denspopulacional;

        
    // Carta 02 - Estrutura interna da carta
        printf ("Digite a cidade: \n");
        scanf ("%s", cidade2);

        printf ("Digite o Estado: \n");
        scanf ("%s", estado2);

        printf ("código da cidade: \n");
        scanf ("%s", codigodacidade2);

        printf ("População: \n");
        scanf ("%u", &populacao2);

        printf ("area: \n");
        scanf ("%f", &area2);

        printf ("PIB: \n");
        scanf("%f", &pib2);

        printf ("Qtd de pontos turisticos: \n");
        scanf ("%d", &pontosturisticos2);

        //Armazenamento de valores calculados para os seguintes atributos:
        denspopulacional2 = (float) populacao2 / area2; //calculo de densidade populacional
        pibpercapita2 = (float) pib2 / populacao2; //calculo do pib per capita

            //Calculo e armazenamento de Super Poder 2
            superpoder2 = (float) populacao2 + area2 + pib2+ pontosturisticos2 + pibpercapita2 - denspopulacional2;


    //Exibição das cartas 01 e 02
    printf("CARTA 01 \n");
    printf("- Cidade: %s\n - O Estado: %s\n - Codigo da cidade: %s\n - População: %u\n - Area: %.2f\n - PIB: %.2f \n - Qtd de pontos turisticos: %d\n", cidade, estado, codigodacidade, populacao, area, pib, pontosturisticos);
    printf(" - A densidade populacional é de: %.2f hab/km² \n - O PIB per Capita é de: %.10f \n", denspopulacional, pibpercapita);
    printf (" - Superpoder: %.2f \n", superpoder);

    printf("CARTA 02 \n");
    printf("- Cidade: %s\n - O Estado: %s\n - Codigo da cidade: %s\n - População: %u\n - Area: %.2f \n - PIB: %.2f \n - Qtd de pontos turisticos: %d \n", cidade2, estado2, codigodacidade2, populacao2, area2, pib2, pontosturisticos2);
    printf (" - A densidade populacional é de: %.2f hab/km² \n - O PIB per Capita é de: %.10f\n", denspopulacional2, pibpercapita2);
    printf (" - Superpoder: %.2f \n", superpoder2);

    //Fim - Comparação das cartas
    printf ("Comparação das cartas - Para Carta 01 = 1 - Para Carta 02 = 0\n");

    if (populacao > populacao2){
        printf ("A carta com maior população é a carta 01 - %u \n", populacao);
    } else {
        printf ("A carta com maior população é a Carta 02 - %u \n", populacao2);
    }
                                //"A carta com maior população é: %d \n", (populacao > populacao2));

    printf ("A carta com a maior área é: %d \n", (area > area2));

    printf ("A carta com maior PIB é: %d \n", (pib > pib2));

    printf ("A carta com maior quantidade de pontos turisticos é: %d\n", (pontosturisticos > pontosturisticos2));

    printf ("A carta com menor densidade populacional é: %d \n", denspopulacional < denspopulacional2);

    printf ("A carta com maior PIB per capita é: %d \n", (pibpercapita > pibpercapita2));

    printf ("A carta de maior poder é: %d \n", (superpoder > superpoder2)); 

    return 0;

}