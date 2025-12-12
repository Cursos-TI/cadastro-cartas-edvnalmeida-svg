#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1;
  char codigo1[3];
  char cidade1[20];
  int populacao1, turismo1;
  float area1, pib1;

  // Área para entrada de dados
  printf("CARTA 1\n\n");

  printf("Digite o estado (letra de A a H): \n");
  scanf(" %c", &estado1);

  printf("Digite o código da cidade (letra do estado seguida do número 01 a 04, ex. A01, B02): \n");
  scanf("%s", codigo1);

  printf("Digite o nome da cidade: \n");
  scanf("%s", cidade1);

  printf("Digite a população da cidade: \n");
  scanf("%d", &populacao1);

  printf("Digite a área da cidade (em km²): \n");
  scanf("%f", &area1);

  printf("Digite o PIB da cidade (em bilhões): \n");
  scanf("%f", &pib1);

  printf("Digite o índice de turismo da cidade: \n");
  scanf("%d", &turismo1);

  // Área para exibição dos dados da cidade
  printf("\nCARTA 1\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", cidade1);
  printf("População: %d habitantes\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", turismo1);

return 0;
} 
