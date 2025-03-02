#include <stdio.h>
#include <string.h>

int main() {
  char estado_1, estado_2, carta_1[4], carta_2[4], cidade_1[20], cidade_2[20];
  int populacao_1, populacao_2, pontos_turisticos_1, pontos_turisticos_2;
  float area_1, area_2, PIB_1, PIB_2, densidade_populacional_1, densidade_populacional_2, PIB_per_capita_1, PIB_per_capita_2;

  // PRIMEIRA CARTA

  /*
    Indica carta a ser cadastrada
    Solicita: Estado (primeira letra), código da carta (letra do Estado + nº de 01 a 04), nome da cidade (1 palavra), número de habitantes (população, número inteiro), área da cidade (em km), produto interno bruto e número de pontos turísticos
  */

  printf("Preencha os dados da primeira carta:\n");

  printf("Digite o Estado da primeira carta (apenas primeira letra):\n");
  scanf(" %c", &estado_1);

  printf("Digite o código da primeira carta (letra do Estado + número de 01 a 04):\n");
  scanf("%s", carta_1);
  getchar();

  printf("Digite o nome da cidade da primeira carta (primeira letra maiúscula):\n");
  fgets(cidade_1, 20, stdin);
  cidade_1[strcspn(cidade_1, "\n")] = 0;

  printf("Digite o número de habitantes da cidade da primeira carta (número inteiro):\n");
  scanf("%d", &populacao_1);

  printf("Digite a área da cidade da primeira carta em quilômetros quadrados (é possível números com valores decimais):\n");
  scanf("%f", &area_1);

  printf("Digite o Produto Interno Bruto da cidade da primeira carta (é possível números com valores decimais):\n");
  scanf("%f", &PIB_1);

  printf("Digite o número de pontos turísticos na cidade da primeira carta (número inteiro):\n");
  scanf("%d", &pontos_turisticos_1);

  densidade_populacional_1 = populacao_1 / area_1;

  PIB_per_capita_1 = PIB_1 / populacao_1;

  //SEGUNDA CARTA

  /*
    Indica carta a ser cadastrada
    Solicita: Estado (primeira letra), código da carta (letra do Estado + nº de 01 a 04), nome da cidade (1 palavra), número de habitantes (população, número inteiro), área da cidade (em km), produto interno bruto e número de pontos turísticos
  */
  printf("Preencha os dados da segunda carta:\n");

  printf("Digite o Estado da segunda carta (apenas primeira letra):\n");
  scanf(" %c", &estado_2);

  printf("Digite o código da segunda carta (letra do Estado + número de 01 a 04):\n");
  scanf("%s", carta_2);
  getchar();

  printf("Digite o nome da cidade da segunda carta (primeira letra maiúscula):\n");
  fgets(cidade_2, 20, stdin);
  cidade_2[strcspn(cidade_2, "\n")] = 0;

  printf("Digite o número de habitantes da cidade da segunda carta (número inteiro):\n");
  scanf("%d", &populacao_2);

  printf("Digite a área da cidade da segunda carta em quilômetros quadrados (é possível números com valores decimais):\n");
  scanf("%f", &area_2);

  printf("Digite o Produto Interno Bruto da cidade da segunda carta (é possível números com valores decimais):\n");
  scanf("%f", &PIB_2);

  printf("Digite o número de pontos turísticos na cidade da segunda carta (número inteiro):\n");
  scanf("%d", &pontos_turisticos_2);

  densidade_populacional_2 = (float) populacao_2 / area_2;

  PIB_per_capita_2 = (float) PIB_2 / populacao_2;

  printf("\n");
  //IMPRIMIR INFORMAÇÕES DAS CARTAS

  //CARTA 1

  //Exibe nº da carta, Estado, código da carta, nome da cidade, população, área, PIB e número de pontos turísticos
  printf("\nCarta 1:\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2fkm²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\n\n", estado_1, carta_1, cidade_1, populacao_1, area_1, PIB_1, pontos_turisticos_1, densidade_populacional_1, PIB_per_capita_1);

  getchar();
  //CARTA 2

  //Exibe nº da carta, Estado, código da carta, nome da cidade, população, área, PIB e número de pontos turísticos
  printf("\nCarta 2:\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\n", estado_2, carta_2, cidade_2, populacao_2, area_2, PIB_2, pontos_turisticos_2, densidade_populacional_2, PIB_per_capita_2);

  return 0;
}