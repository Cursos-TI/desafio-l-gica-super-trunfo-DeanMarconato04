#include <stdio.h>

// Desafio Super Trunfo - Logica

int main() {

    //Variaveis das cartas
    char cidade[50], codigodacidade [50], estado[50], cidade2[50], codigodacidade2[50], estado2[50];
    int pontosturisticos, pontosturisticos2, escolha, opcao1, opcao2;
    unsigned int populacao, populacao2;
    float area, pib, denspopulacional, pibpercapita, superpoder, area2, pib2, denspopulacional2, pibpercapita2, superpoder2, soma1 = 0, soma2 = 0;

    //Menu de entrada
        printf ("Bem vindo!\n *Insira os dados das cidades nas cartas!*\n");

    //carta 01 - Estrutura interna da carta - Entrada de dados
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

        denspopulacional = (float) populacao / area; //calculo de densidade populacional
        pibpercapita = (float) pib / populacao; //calculo do pib per capita

        //Calculo e armazenamento de Superpoder
        superpoder = (float) populacao + area + pib + pontosturisticos + pibpercapita - denspopulacional;

        
    // Carta 02 - Estrutura interna da carta - Entrada de dados
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

        denspopulacional2 = (float) populacao2 / area2; //calculo de densidade populacional
        pibpercapita2 = (float) pib2 / populacao2; //calculo do pib per capita

        //Calculo e armazenamento de Super Poder 2
        superpoder2 = (float) populacao2 + area2 + pib2+ pontosturisticos2 + pibpercapita2 - denspopulacional2;

        printf ("---------------\n"); //Separação das partes

    //Menu do atributo 1
        printf ("Escolha o primeiro atributo para comparação entre as cartas\n");
        printf ("1. População.\n 2. Área.\n 3. PIB.\n 4. Qtd de Pontos Turisticos.\n 5. Densidade populacional.\n");
        scanf ("%d", &opcao1);

        printf ("Carta 01: %s -- Carta 02: %s\n", cidade, cidade2);

    //Opções do Menu 1
        switch (opcao1)
        {
        case 1:
            printf("População:\nCarta 01: %u -- Carta 02: %u\n", populacao, populacao2);
            (populacao > populacao2) ? (soma1 += populacao) :
            (populacao2 > populacao) ? (soma2 += populacao2) :
            printf("Empate na População!\n");
            break;
        case 2:
            printf("Área:\nCarta 01: %.2f -- Carta 02: %.2f\n", area, area2);
            (area > area2) ? (soma1 = area) :
            (area2 > area) ? (soma2 = area2) :
            printf("Empate na Área!\n");
            break;
        case 3:
            printf("PIB:\nCarta 01: %.2f -- Carta 02: %.2f\n", pib, pib2);
            (pib > pib2) ? (soma1 = pib) :
            (pib2 > pib) ? (soma2 = pib2) :
            printf("Empate no PIB!\n");
            break;
        case 4:
            printf("Qtd de Pontos Turísticos:\nCarta 01: %d -- Carta 02: %d\n", pontosturisticos, pontosturisticos2);
            (pontosturisticos > pontosturisticos2) ? (soma1 = pontosturisticos) :
            (pontosturisticos2 > pontosturisticos) ? (soma2 = pontosturisticos2) :
            printf("Empate nos Pontos Turísticos!\n");
            break;
        case 5:
            printf("Densidade populacional:\nCarta 01: %.2f -- Carta 02: %.2f\n", denspopulacional, denspopulacional2);
            (denspopulacional < denspopulacional2) ? (soma1 = denspopulacional) :
            (denspopulacional2 < denspopulacional) ? (soma2 = denspopulacional2) :
            printf("Empate na Densidade Populacional!\n");
            break;
        default:
            printf("Opção inválida!\n");
    }
        printf ("---------------\n"); //Separação das partes

//Menu do atributo 2
        printf ("Agora selecione o segundo atributo:\n");
        printf ("1. População.\n 2. Área.\n 3. PIB.\n 4. Qtd de Pontos Turisticos.\n 5. Densidade populacional.\n");
        scanf ("%d", &opcao2);

//Condição para o segundo menu - Motivo: Evitar repetição de escolha
        if (opcao1 == opcao2){
            printf ("O mesmo atributo nao pode ser selecionado duas vezes!\n");
        } else {
            printf ("Comparando as cartas...\n");
            switch (opcao2)
        {
        case 1:
                printf("População:\nCarta 01: %u -- Carta 02: %u\n", populacao, populacao2);
                (populacao > populacao2) ? (soma1 += populacao) :
                (populacao2 > populacao) ? (soma2 += populacao2) :
                printf("Empate na População!\n");
                break;
            case 2:
                printf("Área:\nCarta 01: %.2f -- Carta 02: %.2f\n", area, area2);
                (area > area2) ? (soma1 += area) :
                (area2 > area) ? (soma2 += area2) :
                printf("Empate na Área!\n");
                break;
            case 3:
                printf("PIB:\nCarta 01: %.2f -- Carta 02: %.2f\n", pib, pib2);
                (pib > pib2) ? (soma1 += pib) :
                (pib2 > pib) ? (soma2 += pib2) :
                printf("Empate no PIB!\n");
                break;
            case 4:
                printf("Qtd de Pontos Turísticos:\nCarta 01: %d -- Carta 02: %d\n", pontosturisticos, pontosturisticos2);
                (pontosturisticos > pontosturisticos2) ? (soma1 += pontosturisticos) :
                (pontosturisticos2 > pontosturisticos) ? (soma2 += pontosturisticos2) :
                printf("Empate nos Pontos Turísticos!\n");
                break;
            case 5:
                printf("Densidade populacional:\nCarta 01: %.2f -- Carta 02: %.2f\n", denspopulacional, denspopulacional2);
                (denspopulacional < denspopulacional2) ? (soma1 += denspopulacional) :
                (denspopulacional2 < denspopulacional) ? (soma2 += denspopulacional2) :
                printf("Empate na Densidade Populacional!\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    }

// Resultado Final
        printf("Soma dos atributos:\nTotal Carta 1: %.2f -- Total Carta 2: %.2f\n", soma1, soma2);
        if (soma1 > soma2) {
            printf("A Carta 01 venceu!\n");
        } else if (soma2 > soma1){
            printf("A Carta 02 venceu!\n");
        } else {
            printf ("As Cartas empataram!\n");
        }

    return 0;
}