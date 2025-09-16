#include <stdio.h>
#include <locale.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
 
  //Carta(1)
  char Estado[3]; /*O estado deve ser representado pela sua sigla, ex: SP, RJ, MG*/
  char Codigo_da_Carta[5]; /*O codigo da carta deve ser a primeira letra do estado + a primeira letra da cidade + o número 1*/
  char Nome_da_Cidade[20];  
  int Populacao; /* O número de habitantes da cidade */
  int Àrea; /* A área da cidade em km² */
  float PIB; /* O produto interno bruto da cidade */
  int numero_de_pontos_Turísticos; /* O número de pontos turísticos da cidade */
  //Carta(2)
  char Estado2[3]; /*O estado deve ser representado pela sua sigla */
  char Codigo_da_Carta2[5]; /*O codigo da carta deve ser a primeira letra do estado + a primeira letra da cidade + o número 2*/
  char Nome_da_Cidade2[20];
  int Populacao2; /* O número de habitantes da cidade */
  int Àrea2; /* A área da cidade em km² */
  float PIB2; /* O produto interno bruto da cidade */
  int numero_de_pontos_Turísticos2; /* O número de pontos turísticos da cidade*/


  // Área para entrada de dados


  // cadatros de informações da carta 1
  printf("Digite a sigla do estado 1:\n");
  fflush(stdout); 
  scanf("%2s", Estado);
  printf("Digite o codigo da carta da cidade 1:\n");
  fflush(stdout);
  scanf("%4s", Codigo_da_Carta);
  printf("Digite o nome da cidade 1:\n");
  fflush(stdout);
  scanf("%19s", Nome_da_Cidade);
  printf("Digite a população da cidade 1 (ex: 100000 ):\n");
  fflush(stdout);
  scanf("%f", &Populacao);
  printf("Digite a área da cidade 1 (em km²):\n");
  fflush(stdout); 
  scanf("%d", &Àrea);
  printf("Digite o PIB da cidade 1:\n");
  fflush(stdout);
  scanf("%f", &PIB);
  printf("Digite o número de pontos turísticos da cidade 1:\n");
  fflush(stdout);
  scanf("%d", &numero_de_pontos_Turísticos);

  // cadastros de informações da carta 2
  printf("Digite a sigla do estado 2:\n");
  fflush(stdout);
  scanf("%2s", Estado2);
  printf("Digite o codigo da carta da cidade 2:\n");
  fflush(stdout);
  scanf("%4s", Codigo_da_Carta2);
  printf("Digite o nome da cidade 2:\n");
  fflush(stdout);
  scanf("%19s", Nome_da_Cidade2);
  printf("Digite a população da cidade 2:\n");
  fflush(stdout);
  scanf("%f", &Populacao2);
  printf("Digite a área da cidade 2 (em km²):\n");
  fflush(stdout);
  scanf("%f", &Àrea2);
  printf("Digite o PIB da cidade 2:\n");
  fflush(stdout);
  scanf("%f", &PIB2);
  printf("Digite o número de pontos turísticos da cidade 2:\n");
  fflush(stdout);
  scanf("%d", &numero_de_pontos_Turísticos2);

  // Área para exibição dos dados da cidade

  printf("\nCarta 1 - \n Cidade: %s\n", Nome_da_Cidade);
  printf("Estado: %s\n", Estado);
  printf("Código da Carta: %s\n", Codigo_da_Carta);
  printf("População: %.2f\n", Populacao);
  printf("Área: %.2f km²\n", Àrea);
  printf("PIB: %.2f\n", PIB);
  printf("Número de Pontos Turísticos: %d\n", numero_de_pontos_Turísticos);

  printf("\nCarta 2 - \n Cidade: %s\n", Nome_da_Cidade2);
  printf("Estado: %s\n", Estado2);
  printf("Código da Carta: %s\n", Codigo_da_Carta2);
  printf("População: %.2f \n", Populacao2);
  printf("Área: %.2f km² \n", Àrea2);
  printf("PIB: %.2f\n", PIB2);
  printf("Número de Pontos Turísticos: %d\n", numero_de_pontos_Turísticos2);



return 0;
} 
