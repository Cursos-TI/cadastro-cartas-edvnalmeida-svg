#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1, estado2;
  char codigo1[3], codigo2[3];
  char cidade1[20], cidade2[20];
  int populacao1, populacao2, turismo1, turismo2;
  float area1, area2, pib1, pib2;

  // Área para entrada de dados
  printf("CARTA 1\n\n");

  printf("Digite o estado (letra de A a H): ");
  scanf(" %c", &estado1);

  printf("Digite o código da cidade (letra do estado seguida do número 01 a 04, ex. A01, B02): ");
  scanf("%s", codigo1);

  printf("Digite o nome da cidade: ");
  scanf("%s", cidade1);

  printf("Digite a população da cidade: ");
  scanf("%d", &populacao1);

  printf("Digite a área da cidade (em km²): ");
  scanf("%f", &area1);

  printf("Digite o PIB da cidade (em bilhões): ");
  scanf("%f", &pib1);

  printf("Digite o número de pontos turísticos da cidade: ");
  scanf("%d", &turismo1);

  printf("\n\nCARTA 2\n\n");

  printf("Digite o estado (letra de A a H): ");
  scanf(" %c", &estado2);

  printf("Digite o código da cidade (letra do estado seguida do número 01 a 04, ex. A01, B02): ");
  scanf("%s", codigo2);

  printf("Digite o nome da cidade: ");
  scanf("%s", cidade2);

  printf("Digite a população da cidade: ");
  scanf("%d", &populacao2);

  printf("Digite a área da cidade (em km²): ");
  scanf("%f", &area2);

  printf("Digite o PIB da cidade (em bilhões): ");
  scanf("%f", &pib2);

  printf("Digite o número de pontos turísticos da cidade: ");
  scanf("%d", &turismo2);

  // Área para exibição dos dados da cidade
  printf("\nCARTA 1\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", cidade1);
  printf("População: %d habitantes\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", turismo1);

  printf("\nCARTA 2\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", cidade2);
  printf("População: %d habitantes\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", turismo2);
  
return 0;
} 
