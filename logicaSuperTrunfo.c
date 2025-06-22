#include <stdio.h>

// Desafio Super Trunfo - Logica

int main() {

    //Variaveis das cartas
    char cidade[50], codigodacidade [50], estado[50], cidade2[50], codigodacidade2[50], estado2[50];
    int pontosturisticos, pontosturisticos2, opcao;
    unsigned int populacao, populacao2;
    float area, pib, denspopulacional, pibpercapita, superpoder, area2, pib2, denspopulacional2, pibpercapita2, superpoder2;


//Menu de dados
    printf ("Insira os dados das cidades nas cartas! \n");

    //carta 01 - Estrutura interna da carta
        printf ("CARTA 01\n");

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

        //Calculo e armazenamento para os seguintes atributos:
        denspopulacional = (float) populacao / area; //calculo de densidade populacional
        pibpercapita = (float) pib / populacao; //calculo do pib per capita

        //Calculo e armazenamento de Superpoder
        superpoder = (float) populacao + area + pib + pontosturisticos + pibpercapita - denspopulacional;

        
    // Carta 02 - Estrutura interna da carta
        printf ("CARTA 02\n");

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

        //Calculo e armazenamento para os seguintes atributos:
        denspopulacional2 = (float) populacao2 / area2; //calculo de densidade populacional
        pibpercapita2 = (float) pib2 / populacao2; //calculo do pib per capita

        //Calculo e armazenamento de Super Poder 2
        superpoder2 = (float) populacao2 + area2 + pib2+ pontosturisticos2 + pibpercapita2 - denspopulacional2;


    //Exibição das cartas 01 e 02
    printf("- CARTA 01 - \n");
    printf("- Cidade: %s\n - O Estado: %s\n - Codigo da cidade: %s\n - População: %u\n - Area: %.2f\n - PIB: %.2f \n - Qtd de pontos turisticos: %d\n", cidade, estado, codigodacidade, populacao, area, pib, pontosturisticos);
    printf(" - A densidade populacional é de: %.2f hab/km² \n - O PIB per Capita é de: %.10f \n", denspopulacional, pibpercapita);
    printf (" - Superpoder: %.2f \n", superpoder);

    printf ("---------------\n");

    printf(" - CARTA 02 - \n");
    printf("- Cidade: %s\n - O Estado: %s\n - Codigo da cidade: %s\n - População: %u\n - Area: %.2f \n - PIB: %.2f \n - Qtd de pontos turisticos: %d \n", cidade2, estado2, codigodacidade2, populacao2, area2, pib2, pontosturisticos2);
    printf (" - A densidade populacional é de: %.2f hab/km² \n - O PIB per Capita é de: %.10f\n", denspopulacional2, pibpercapita2);
    printf (" - Superpoder: %.2f \n", superpoder2);


    //Menu do jogo - Comparação de atributos
    printf ("Escolha um atributo para comparação entre as cartas\n");
    printf ("1. Nome das cidades.\n");
    printf ("2. População.\n");
    printf ("3. Área.\n");
    printf ("4. PIB.\n");
    printf ("5. Qtd de Pontos Turisticos.\n");
    printf ("6. Densidade populacional.\n");
    printf ("7. Comparar todos os atributos.\n");
    scanf ("%d", &opcao);


    switch (opcao)
    {
    case 1:
        printf ("As cidades:\n Carta 01: %s -- Carta 02: %s \n", cidade, cidade2);
        break;
    case 2:
        printf ("Carta 01: %s -- Carta 02: %s\n", cidade, cidade2);
        printf ("População:\n");
        printf ("Carta 01: %u -- Carta 02: %u\n", populacao, populacao2);
        if (populacao > populacao2){
            printf ("A Carta 01 venceu!\n");
        } else if (populacao2 > populacao){
            printf ("A Carta 02 venceu!\n");
        } else {
            printf ("Empate!\n");
        }
        break;
    case 3:
        printf ("Carta 01: %s -- Carta 02: %s\n", cidade, cidade2);
        printf ("Área:\n");
        printf ("Carta 01: %.2f -- Carta 02: %.2f\n", area, area2);
        if (area > area2){
            printf ("A Carta 01 venceu!\n");
        } else if (area2 > area){
            printf ("A Carta 02 venceu!\n");
        } else {
            printf ("Empate!\n");
        }
        break;
    case 4:
        printf ("Carta 01: %s -- Carta 02: %s\n", cidade, cidade2);
        printf ("PIB:\n");
        printf ("Carta 01: %.2f -- Carta 02: %.2f\n", pib, pib2);
        if (pib > pib2) {
            printf ("A Carta 01 venceu!\n");
        } else if (pib2 > pib){
            printf ("A Carta 02 venceu!\n");
        } else {
            printf ("Empate!\n");
        }
        break;
    case 5:
        printf ("Carta 01: %s -- Carta 02: %s\n", cidade, cidade2);
        printf ("Qtd de Pontos turisticos:\n");
        printf ("Carta 01: %d -- Carta 02: %d\n", pontosturisticos, pontosturisticos2);
        if (pontosturisticos > pontosturisticos2){
            printf ("A Carta 01 venceu!\n");
        } else if (pontosturisticos2 > pontosturisticos){
            printf ("A Carta 02 venceu!\n");
        } else {
            printf ("Empate!\n");
        }
        break;
    case 6:
        printf ("Carta 01: %s -- Carta 02: %s\n", cidade, cidade2);
        printf ("Densidade populacional:\n");
        printf ("Carta 01: %.2f -- Carta 02: %.2f\n", denspopulacional, denspopulacional2);
        if (denspopulacional < denspopulacional2){
            printf ("A Carta 01 venceu!\n");
        } else if (denspopulacional2 < denspopulacional){
            printf ("A Carta 02 venceu!\n");
        } else {
            printf ("Empate!\n");
        }
        break;
    case 7: //Adicionado só pelo desafio mesmo. Nao fazia parte do trabalho
        printf ("Comparando todos os atributos!\n");
        printf ("Carta 01: %s -- Carta 02: %s\n", cidade, cidade2);
        if (populacao > populacao2){
            printf ("A Carta 01 tem maior população!\n");
        } else if (populacao2 > populacao){
            printf ("A Carta 02 tem maior população!\n");
        } else {
            printf ("Ambas tem a mesma população!\n");
        }
        if (area > area2){
            printf ("A Carta 01 tem maior área!\n");
        } else if (area2 > area){
            printf ("A Carta 02 tem maior área!\n");
        } else {
            printf ("Ambas tem a mesma área!\n");
        }
        if (pib > pib2) {
            printf ("A Carta 01 tem maior PIB!\n");
        } else if (pib2 > pib){
            printf ("A Carta 02 tem maior PIB!\n");
        } else {
            printf ("O PIB de ambas são iguais!\n");
        }
        if (pontosturisticos > pontosturisticos2){
            printf ("A Carta 01 tem mais pontos turisticos!\n");
        } else if (pontosturisticos2 > pontosturisticos){
            printf ("A Carta 02 tem mais pontos turisticos!\n");
        } else {
            printf ("Ambas tem a mesma quantidade de pontos turisticos!\n");
        }
        if (denspopulacional < denspopulacional2){
            printf ("A Carta 01 tem menos hab/km²!\n");
        } else if (denspopulacional2 < denspopulacional){
            printf ("A Carta 02 tem menos hab/km²!\n");
        } else {
            printf ("Ambas tem a mesma densidade populacional!\n");
        }
        break;
    default:
        printf ("Opção inválida!");
        break;
    }

    return 0;

}