#include <stdio.h>
#include <string.h>

int main()
{
    // declarando as variaveis
    // atributos cadastrados
    char estado1, estado2;
    char codigoCarta1[5], codigoCarta2[5];
    char nomeCidade1[20], nomeCidade2[20];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    // atributos calculados
    float densidadePop1, densidadePop2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;
    float somaCarta1 = 0, somaCarta2 = 0;

    // pegando os dados da carta 1
    /*
    printf("Insira os dados da carta 1 abaixo:\n");
    printf("Estado: ");
    scanf(" %c", &estado1);
    printf("Codigo da Carta: ");
    scanf("%s", codigoCarta1);
    printf("Nome da cidade: ");
    scanf("%s", nomeCidade1);
    printf("Populacao: ");
    scanf("%ld", &populacao1);
    printf("Area: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n\n");
    
    // pegando os dados da carta 2
    printf("Insira os dados da carta 2 abaixo:\n");
    printf("Estado: ");
    scanf(" %c", &estado2);
    printf("Codigo da Carta: ");
    scanf("%s", codigoCarta2);
    printf("Nome da cidade: ");
    scanf("%s", nomeCidade2);
    printf("Populacao: ");
    scanf("%ld", &populacao2);
    printf("Area: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);
    */ 
   // substituindo os dados da carta 1 e 2 por valores fixos para facilitar a execucao e teste do programa
    estado1 = 'S';
    strcpy(codigoCarta1, "s01");
    strcpy(nomeCidade1, "Sao Paulo");
    populacao1 = 12325232;
    area1 = 1521.11;
    pib1 = 2.2;
    pontosTuristicos1 = 10;

    estado2 = 'R';
    strcpy(codigoCarta2, "r01");
    strcpy(nomeCidade2, "Rio de Janeiro");
    populacao2 = 52325232;
    area2 = 1021.11;
    pib2 = 1.5;
    pontosTuristicos2 = 20;
    
    printf("\n\n");

    // calculando dados adicionais carta 1
    densidadePop1 = (float) populacao1 / area1;
    pibPerCapita1 = (pib1 * 1e9) / (float) populacao1; // multipliquei por 1e9 para converter de bilhoes para reais
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + ( 1.0f / densidadePop1 ); // o super poder é a soma de todos atributos mais o inverso da densidade

    // calculando dados adicionais carta 2
    densidadePop2 = (float) populacao2 / area2;
    pibPerCapita2 = (pib2 * 1e9) / (float) populacao2; // multipliquei por 1e9 para converter de bilhoes para reais
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + ( 1.0f / densidadePop2 ); // o super poder é a soma de todos atributos mais o inverso da densidade
    
    // mostrando os dados cadastrados da carta 1
    printf("Carta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigoCarta1);
    printf("Nome da cidade: %s\n", nomeCidade1);
    printf("Populacao: %ld\n", populacao1);
    printf("Area: %.2fKm2\n", area1);
    printf("PIB: R$ %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/Km2\n", densidadePop1);
    printf("PIB per capita: R$ %.2f\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\n\n");

    // mostrando os dados cadastrados da carta 2
    printf("Carta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigoCarta2);
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("Populacao: %ld\n", populacao2);
    printf("Area: %.2fKm2\n", area2);
    printf("PIB: R$ %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/Km2\n", densidadePop2);
    printf("PIB per capita: R$ %.2f\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    printf("\n\n");

    // escolhendo atributos para comparar as cartas
    int atributo; // declarando variavel para armazenar o atributo escolhido
    printf("Escolha o atributo para comparar as cartas:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Populacional\n");
    printf("Digite o numero do atributo: ");
    scanf("%d", &atributo);

    printf("\n\n");

    switch (atributo)
    {
    case 1:
        // comparar populacao
        printf("Comparacao de Cartas (Atributo: Populacao)\n\n");

        // mostrando atributos da carta 1
        printf("Carta 1 - %s:(%c) %ld\n", nomeCidade1, estado1, populacao1);

        // mostrando atributos da carta 2
        printf("Carta 2 - %s:(%c) %ld\n", nomeCidade2, estado2, populacao2);

        // somando atributos
        somaCarta1 += populacao1;
        somaCarta2 += populacao2;

        if (populacao1 > populacao2)
        {
            // se a populacao da carta 1 for maior mostrar mensagem que ela venceu
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        }
        else if (populacao1 < populacao2)
        {
            // se a populacao da carta 2 for maior mostrar mensagem que ela venceu
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        }
        else
        {
            // se a populacao de ambas as cartas forem iguais mostrar mensagem de empate
            printf("Empate!\n");
        }
        break;
    case 2:
        // comparar area
        printf("Comparacao de Cartas (Atributo: Area)\n\n");

        // mostrando atributos da carta 1
        printf("Carta 1 - %s:(%c) %.2fKm2\n", nomeCidade1, estado1, area1);

        // mostrando atributos da carta 2
        printf("Carta 2 - %s:(%c) %.2fKm2\n", nomeCidade2, estado2, area2);

        // somando atributos
        somaCarta1 += area1;
        somaCarta2 += area2;

        if (area1 > area2)
        {
            // se a area da carta 1 for maior mostrar mensagem que ela venceu
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        }
        else if (area1 < area2)
        {
            // se a area da carta 2 for maior mostrar mensagem que ela venceu
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        }
        else
        {
            // se a area de ambas as cartas forem iguais mostrar mensagem de empate
            printf("Empate!\n");
        }
        break;
    case 3:
        // comparar PIB
        printf("Comparacao de Cartas (Atributo: PIB)\n\n");

        // mostrando atributos da carta 1
        printf("Carta 1 - %s:(%c) R$ %.2f bilhoes de reais\n", nomeCidade1, estado1, pib1);

        // mostrando atributos da carta 2
        printf("Carta 2 - %s:(%c) R$ %.2f bilhoes de reais\n", nomeCidade2, estado2, pib2);

        // somando atributos
        somaCarta1 += pib1;
        somaCarta2 += pib2;

        if (pib1 > pib2)
        {
            // se o PIB da carta 1 for maior mostrar mensagem que ela venceu
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        }
        else if (pib1 < pib2)
        {
            // se o PIB da carta 2 for maior mostrar mensagem que ela venceu
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        }
        else
        {
            // se o PIB de ambas as cartas forem iguais mostrar mensagem de empate
            printf("Empate!\n");
        }
        break;
    case 4:
        // comparar Pontos Turisticos
        printf("Comparacao de Cartas (Atributo: Pontos Turisticos)\n\n");

        // mostrando atributos da carta 1
        printf("Carta 1 - %s:(%c) %d\n", nomeCidade1, estado1, pontosTuristicos1);

        // mostrando atributos da carta 2
        printf("Carta 2 - %s:(%c) %d\n", nomeCidade2, estado2, pontosTuristicos2);

        // somando atributos
        somaCarta1 += pontosTuristicos1;
        somaCarta2 += pontosTuristicos2;

        if (pontosTuristicos1 > pontosTuristicos2)
        {
            // se o numero de pontos turisticos da carta 1 for maior mostrar mensagem que ela venceu
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        }
        else if (pontosTuristicos1 < pontosTuristicos2)
        {
            // se o numero de pontos turisticos da carta 2 for maior mostrar mensagem que ela venceu
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        }
        else
        {
            // se o numero de pontos turisticos de ambas as cartas forem iguais mostrar mensagem de empate
            printf("Empate!\n");
        }
        break;
    case 5:
        // comparar Densidade Populacional
        printf("Comparacao de Cartas (Atributo: Densidade Populacional)\n\n");

        // mostrando atributos da carta 1
        printf("Carta 1 - %s:(%c) %.2f hab/Km2\n", nomeCidade1, estado1, densidadePop1);

        // mostrando atributos da carta 2
        printf("Carta 2 - %s:(%c) %.2f hab/Km2\n", nomeCidade2, estado2, densidadePop2);

        // somando atributos
        somaCarta1 -= densidadePop1; // como a densidade populacional vence o menor subtraimos o valor dela em vez de aumentar
        somaCarta2 -= densidadePop2; // como a densidade populacional vence o menor subtraimos o valor dela em vez de aumentar

        if (densidadePop1 < densidadePop2)
        {
            // se a densidade populacional da carta 1 for menor mostrar mensagem que ela venceu
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        }
        else if (densidadePop1 > densidadePop2)
        {
            // se a densidade populacional da carta 2 for menor mostrar mensagem que ela venceu
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        }
        else
        {
            // se a densidade populacional de ambas as cartas forem iguais mostrar mensagem de empate
            printf("Empate!\n");
        }
        break;
    default:
        printf("Opcao invalida!\n");
        return 0;
    }

    printf("\n\n");

    int atributo2; // declarando variavel para armazenar o segundo atributo escolhido
    printf("Escolha o segundo atributo para comparar as cartas:\n");
    atributo != 1 ? printf("1 - Populacao\n") : 0;
    atributo != 2 ? printf("2 - Area\n") : 0;
    atributo != 3 ? printf("3 - PIB\n") : 0;
    atributo != 4 ? printf("4 - Pontos Turisticos\n") : 0;
    atributo != 5 ? printf("5 - Densidade Populacional\n") : 0;
    printf("Digite o numero do atributo: ");
    scanf("%d", &atributo2);

    // atributo escolhido foi o mesmo que o segundo atributo
    if (atributo == atributo2)
    {
        printf("Atributo invalido! Escolha um atributo diferente do primeiro!\n");
        return 0;
    }

    printf("\n\n");

    // Comparar o segundo atributo
    switch (atributo2)
    {
    case 1:
        // comparar populacao
        printf("Comparacao de Cartas (Segundo Atributo: Populacao)\n\n");

        // mostrando atributos da carta 1
        printf("Carta 1 - %s:(%c) %ld\n", nomeCidade1, estado1, populacao1);

        // mostrando atributos da carta 2
        printf("Carta 2 - %s:(%c) %ld\n", nomeCidade2, estado2, populacao2);

        // somando atributos
        somaCarta1 += populacao1;
        somaCarta2 += populacao2;

        if (populacao1 > populacao2)
        {
            // se a populacao da carta 1 for maior mostrar mensagem que ela venceu
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        }
        else if (populacao1 < populacao2)
        {
            // se a populacao da carta 2 for maior mostrar mensagem que ela venceu
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        }
        else
        {
            // se a populacao de ambas as cartas forem iguais mostrar mensagem de empate
            printf("Empate!\n");
        }
        break;
    case 2:
        // comparar area
        printf("Comparacao de Cartas (Segundo Atributo: Area)\n\n");

        // mostrando atributos da carta 1
        printf("Carta 1 - %s:(%c) %.2fKm2\n", nomeCidade1, estado1, area1);

        // mostrando atributos da carta 2
        printf("Carta 2 - %s:(%c) %.2fKm2\n", nomeCidade2, estado2, area2);

        // somando atributos
        somaCarta1 += area1;
        somaCarta2 += area2;

        if (area1 > area2)
        {
            // se a area da carta 1 for maior mostrar mensagem que ela venceu
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        }
        else if (area1 < area2)
        {
            // se a area da carta 2 for maior mostrar mensagem que ela venceu
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        }
        else
        {
            // se a area de ambas as cartas forem iguais mostrar mensagem de empate
            printf("Empate!\n");
        }
        break;
    case 3:
        // comparar PIB
        printf("Comparacao de Cartas (Segundo Atributo: PIB)\n\n");

        // mostrando atributos da carta 1
        printf("Carta 1 - %s:(%c) R$ %.2f bilhoes de reais\n", nomeCidade1, estado1, pib1);

        // mostrando atributos da carta 2
        printf("Carta 2 - %s:(%c) R$ %.2f bilhoes de reais\n", nomeCidade2, estado2, pib2);

        // somando atributos
        somaCarta1 += pib1;
        somaCarta2 += pib2;

        if (pib1 > pib2)
        {
            // se o PIB da carta 1 for maior mostrar mensagem que ela venceu
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        }
        else if (pib1 < pib2)
        {
            // se o PIB da carta 2 for maior mostrar mensagem que ela venceu
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        }
        else
        {
            // se o PIB de ambas as cartas forem iguais mostrar mensagem de empate
            printf("Empate!\n");
        }
        break;
    case 4:
        // comparar Pontos Turisticos
        printf("Comparacao de Cartas (Segundo Atributo: Pontos Turisticos)\n\n");

        // mostrando atributos da carta 1
        printf("Carta 1 - %s:(%c) %d\n", nomeCidade1, estado1, pontosTuristicos1);

        // mostrando atributos da carta 2
        printf("Carta 2 - %s:(%c) %d\n", nomeCidade2, estado2, pontosTuristicos2);

        // somando atributos
        somaCarta1 += pontosTuristicos1;
        somaCarta2 += pontosTuristicos2;

        if (pontosTuristicos1 > pontosTuristicos2)
        {
            // se o numero de pontos turisticos da carta 1 for maior mostrar mensagem que ela venceu
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        }
        else if (pontosTuristicos1 < pontosTuristicos2)
        {
            // se o numero de pontos turisticos da carta 2 for maior mostrar mensagem que ela venceu
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        }
        else
        {
            // se o numero de pontos turisticos de ambas as cartas forem iguais mostrar mensagem de empate
            printf("Empate!\n");
        }
        break;
    case 5:
        // comparar Densidade Populacional
        printf("Comparacao de Cartas (Segundo Atributo: Densidade Populacional)\n\n");

        // mostrando atributos da carta 1
        printf("Carta 1 - %s:(%c) %.2f hab/Km2\n", nomeCidade1, estado1, densidadePop1);

        // mostrando atributos da carta 2
        printf("Carta 2 - %s:(%c) %.2f hab/Km2\n", nomeCidade2, estado2, densidadePop2);

        // somando atributos
        somaCarta1 -= densidadePop1; // como a densidade populacional vence o menor subtraimos o valor dela em vez de aumentar
        somaCarta2 -= densidadePop2; // como a densidade populacional vence o menor subtraimos o valor dela em vez de aumentar

        if (densidadePop1 < densidadePop2)
        {
            // se a densidade populacional da carta 1 for menor mostrar mensagem que ela venceu
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        }
        else if (densidadePop1 > densidadePop2)
        {
            // se a densidade populacional da carta 2 for menor mostrar mensagem que ela venceu
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        }
        else
        {
            // se a densidade populacional de ambas as cartas forem iguais mostrar mensagem de empate
            printf("Empate!\n");
        }
        break;
    default:
        printf("Opcao invalida!\n");
        return 0;
    }

    printf("\n\n");

    // resultado da soma do atributos escolhidos
    printf("Resultado da soma dos atributos escolhidos:\n");
    printf("Carta 1 (%s): %.2f\n", nomeCidade1, somaCarta1);
    printf("Carta 2 (%s): %.2f\n", nomeCidade2, somaCarta2);
    if (somaCarta1 > somaCarta2)
    {
        // se a soma dos atributos da carta 1 for maior mostrar mensagem que ela venceu
        printf("Resultado: Carta 1 (%s) venceu a rodada!\n", nomeCidade1);
    }
    else if (somaCarta1 < somaCarta2)
    {
        // se a soma dos atributos da carta 2 for maior mostrar mensagem que ela venceu
        printf("Resultado: Carta 2 (%s) venceu a rodada!\n", nomeCidade2);
    }
    else
    {
        // se a soma dos atributos de ambas as cartas forem iguais mostrar mensagem de empate
        printf("Empate!\n");
    }

    return 0;
}
