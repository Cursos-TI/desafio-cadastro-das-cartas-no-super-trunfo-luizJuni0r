#include <stdio.h>

int main(){
    char carta1, carta2, nomeCidade1[50], nomeCidade2[50];
    int populacao1, turismo1, populacao2, turismo2, codigo1, codigo2;
    float area1, pib1, area2, pib2, densidadePo1, densidadePo2, pibperC1, pibperC2;

    // Cabeçalho simples e chamativo.
    printf("--------------------------------------------------\n");
    printf("VAMOS CRIAR SUA PRIMEIRA CARTA PARA O SUPER TRUNFO\n");
    printf("--------------------------------------------------\n");
    printf("\n");
    printf("\n");


    // As linhas que se seguem coletam os dados inseridos pelo usuário e colocam nas variáveis com terminação "1", para a primeira carta.
    printf("Escolha uma carta entre A e H para representar o estado\n");
    printf(">> ");
    scanf(" %c", &carta1);
    printf("\n");

    printf("Escolha um numero entre 1 e 4 para ser o codigo da carta\n");
    printf(">> ");
    scanf("%d", &codigo1);
    printf("\n");

    printf("Qual o nome da cidade (nomes com apenas uma palavra)?\n");
    printf(">> ");
    scanf("%s", nomeCidade1);
    printf("\n");

    printf("Qual o numero de habitantes?\n");
    printf(">> ");
    scanf("%d", &populacao1);
    printf("\n");

    printf("Qual a area (em km2)?\n");
    printf(">> ");
    scanf("%f", &area1);
    printf("\n");

    printf("Qual o PIB da cidade?\n");
    printf(">> ");
    scanf("%f", &pib1);
    printf("\n");

    printf("Quantos pontos turisticos existem na cidade?\n");
    printf(">> ");
    scanf("%d", &turismo1);
    printf("\n");
    // Encerramos aqui com a primeira carta.

    //Cabeçalho pra apresentar a exibição da primeira carta..
    printf("\n");
    printf("\n");
    printf("------------------------------------------\n");
    printf("HORA DE VER OS DETALHES DA PRIMEIRA CARTA!\n");
    printf("------------------------------------------\n");
    printf("\n");
    printf("\n");


    // Calculo de densidade populacional e PIB per capita da PRIMEIRA CARTA:
    densidadePo1 = (float)populacao1 / area1;
    pibperC1 = (float)pib1 / populacao1;


    // Exibição da primeira carta.
    printf("Carta 01:\n");
    printf("\n");
    printf("Estado: %c\n", carta1);
    printf("Codigo: %c%02d\n", carta1, codigo1);
    printf("Nome da cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2fkm2\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Numeros de pontos turisticos: %d\n", turismo1);
    printf("Densidade populacional: %.2f hab/km2\n", densidadePo1);
    printf("PIB per Capita: %.2f reais\n", pibperC1);
    printf("\n");


    //Cabeçalho pra comunicar sobre a coleta de dados da segunda carta.
    printf("\n");
    printf("\n");
    printf("-----------------------------------------------------\n");
    printf("AGORA VAMOS CRIAR A SEGUNDA CARTA PARA O SUPER TRUNFO\n");
    printf("-----------------------------------------------------\n");
    printf("\n");
    printf("\n");



    // As perguntas se repetem, mas agora armazenaremos os dados nas variáveis com teminação "2", para a segunda carta.
    printf("Escolha uma carta entre A e H para representar o estado.\n");
    printf(">> ");
    scanf(" %c", &carta2);
    printf("\n");

    printf("Escolha um numero entre 1 e 4 para ser o codigo da carta\n");
    printf(">> ");
    scanf("%d", &codigo2);
    printf("\n");

    printf("Qual o nome da cidade (nomes com apenas uma palavra)?\n");
    printf(">> ");
    scanf("%s", nomeCidade2);
    printf("\n");

    printf("Qual o numero de habitantes?\n");
    printf(">> ");
    scanf("%d", &populacao2);
    printf("\n");

    printf("Qual a area (em km2)?\n");
    printf(">> ");
    scanf("%f", &area2);
    printf("\n");

    printf("Qual o PIB da cidade?\n");
    printf(">> ");
    scanf("%f", &pib2);
    printf("\n");

    printf("Quantos pontos turisticos existem na cidade?\n");
    printf(">> ");
    scanf("%d", &turismo2);
    printf("\n");
    // Encerramos aqui com a segunda carta.

    //Cabeçalho pra apresentar a exibição das cartas.
    printf("\n");
    printf("\n");
    printf("-----------------------------------------\n");
    printf("HORA DE VER OS DETALHES DA SEGUNDA CARTA!\n");
    printf("-----------------------------------------\n");
    printf("\n");
    printf("\n");

    // Calculo de densidade populacional e PIB per capita da SEGUNDA CARTA:
    densidadePo2 = (float)populacao2 / area2;
    pibperC2 = (float)pib2 / populacao2;

    // Exibição da segunda carta.
    printf("Carta 02:\n");
    printf("\n");
    printf("Estado: %c\n", carta2);
    printf("Codigo: %c%02d\n", carta2, codigo2);
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2fkm2\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Numeros de pontos turisticos: %d\n", turismo2);
    printf("Densidade populacional: %.2f hab/km2\n", densidadePo2);
    printf("PIB per Capita: %.2f reais\n", pibperC2);

    return 0;

}