#include <stdio.h>

int main() {
  char estado_1, estado_2, carta_1[3], carta_2[3], cidade_1[16], cidade_2[16] = "";
  int populacao_1, populacao_2, pontos_turisticos_1, pontos_turisticos_2 = 0;
  float area_1, area_2, PIB_1, PIB_2 = 0.0;

  // PRIMEIRA CARTA
  printf("Preencha os dados da primeira carta:\n");

  printf("Digite o Estado da primeira carta (apenas primeira letra): \n");
  scanf("%c", &estado_1);

  printf("Digite o código da primeira carta (letra do Estado + número de 01 a 04): \n");
  scanf("%s", &carta_1);

  printf("Digite o nome da cidade da primeira carta (primeira letra maiúscula): \n");
  scanf("%s", &cidade_1);

  printf("Digite o número de habitantes da cidade da primeira carta (número inteiro): \n");
  scanf("%i", &populacao_1);

  printf("Digite a área da cidade da primeira carta em quilômetros quadrados (é possível números com valores decimais): \n");
  scanf("%f", &area_1);

  printf("Digite o Produto Interno Bruto da cidade da primeira carta (é possível números com valores decimais): \n");
  scanf("%f", &PIB_1);

  printf("Digite o número de pontos turísticos na cidade da primeira carta (número inteiro): \n");
  scanf("%i", &pontos_turisticos_1);

  //SEGUNDA CARTA
  printf("Preencha os dados da segunda carta:\n");

  printf("Digite o Estado da segunda carta (apenas primeira letra): \n");
  scanf("%c", &estado_2);

  printf("Digite o código da segunda carta (letra do Estado + número de 01 a 04): \n");
  scanf("%s", &carta_2);

  printf("Digite o nome da cidade da segunda carta (primeira letra maiúscula): \n");
  scanf("%s", &cidade_2);

  printf("Digite o número de habitantes da cidade da segunda carta (número inteiro): \n");
  scanf("%i", &populacao_2);

  printf("Digite a área da cidade da segunda carta em quilômetros quadrados (é possível números com valores decimais): \n");
  scanf("%f", &area_2);

  printf("Digite o Produto Interno Bruto da cidade da segunda carta (é possível números com valores decimais): \n");
  scanf("%f", &PIB_2);

  printf("Digite o número de pontos turísticos na cidade da segunda carta (número inteiro): \n");
  scanf("%i", &pontos_turisticos_2);

  //IMPRIMIR CARTAS

  //CARTA 1
  printf("Carta 1:\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %i\nÁrea: %f\nPIB: %f bilhões de reais\nNúmero de Pontos Turísticos: %i\n", estado_1, carta_1, cidade_1, populacao_1, area_1, PIB_1, pontos_turisticos_1);

  //CARTA 2
  printf("Carta 2:\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %i\nÁrea: %f\nPIB: %f bilhões de reais\nNúmero de Pontos Turísticos: %i\n", estado_2, carta_2, cidade_2, populacao_2, area_2, PIB_2, pontos_turisticos_2);

  return 0;
}