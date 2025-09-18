#include <stdio.h>
#include <locale.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  setlocale(LC_ALL, "");
  // Área para definição das variáveis para armazenar as propriedades das cidades
 
  //Carta(1)
  char Estado[3]; 
  char Nome_da_Cidade[20]; 
  char Codigo_da_Carta[5];
  int Populacao; 
  float Area; 
  float PIB; 
  int numero_de_pontos_Turísticos; 
  //Carta(2)
  char Estado2[3]; 
  char Nome_da_Cidade2[20];
  char Codigo_da_Carta2[5]; 
  int Populacao2; /* O número de habitantes da cidade */
  float Area2; /* A área da cidade em km² */
  float PIB2; /* O produto interno bruto da cidade */
  int numero_de_pontos_Turísticos2; /* O número de pontos turísticos da cidade*/


  // Área para entrada de dados


   printf ("  **** Cadastro da Carta 1 ****\n");
  printf("(O estado deve ser representado pela sua sigla) \n Digite a sigla do estado 1: \n ");
    fflush(stdout);
     scanf("%2s", Estado);
  printf("Digite o nome da cidade 1:\n");
   fflush(stdout);
    scanf("%19s", Nome_da_Cidade);
  printf("(O codigo da carta e compoato pela prineira letra do estado + peimeira letra da cidade + 01 ) \n Digite o codigo da carta da cidade 1:\n");
   fflush(stdout);
    scanf("%4s", Codigo_da_Carta);
  printf(" ( O número de habitantes da cidade ) \n Digite a população da cidade 1 (ex: 100000 ):\n");
   fflush(stdout);
    scanf("%d", &Populacao);
  printf("Digite a área da cidade 1 (em km²):\n");
   fflush(stdout); 
    scanf("%f", &Area);
  printf("( O produto interno bruto da cidade ) \n Digite o PIB da cidade 1:\n");
   fflush(stdout);
    scanf("%f", &PIB);
  printf("Digite o número de pontos turísticos da cidade 1:\n");
   fflush(stdout);
    scanf("%d", &numero_de_pontos_Turísticos);

  
    printf ("\n    **** Cadastro da Carta 2 ****\n");
  printf("(O estado deve ser representado pela sua sigla) \n Digite a sigla do estado 2:\n");
   fflush(stdout);
    scanf("%2s", Estado2);
  printf("Digite o nome da cidade 2:\n");
   fflush(stdout);
    scanf("%19s", Nome_da_Cidade2);
  printf("(O codigo da carta e compoato pela prineira letra do estado + peimeira letra da cidade + 02) \n Digite o codigo da carta da cidade 2:\n");
   fflush(stdout);
    scanf("%4s", Codigo_da_Carta2);
  printf("(O produto interno bruto da cidade) \n Digite a população da cidade 2:\n");
   fflush(stdout);
    scanf("%d", &Populacao2);
  printf("Digite a área da cidade 2 (em km²):\n");
   fflush(stdout);
    scanf("%f", &Area2);
  printf("(O produto interno bruto da cidade) \n Digite o PIB da cidade 2:\n");
   fflush(stdout);
    scanf("%3f", &PIB2);
  printf("Digite o número de pontos turísticos da cidade 2:\n");
   fflush(stdout);
    scanf("%d", &numero_de_pontos_Turísticos2);

  // Área para exibição dos dados da cidade

  printf("\n *** Carta 1 *** \nCidade: %s\n", Nome_da_Cidade);
  printf("Estado: %s\n", Estado);
  printf("Código da Carta: %s\n", Codigo_da_Carta);
  printf("População: %d\n", Populacao);
  printf("Área: %.2f km²\n", Area);
  printf("PIB: %.2f bilhões de reais \n", PIB);
  printf("Número de Pontos Turísticos: %d\n", numero_de_pontos_Turísticos);
  printf("Dencidade Populacional da cidade 1: %.2f hab/km²\n", (float) Populacao / Area);
  printf("PIB per capita da cidade 1: %.2f reais \n", (float) PIB / Populacao);
  
  printf("\n *** Carta 2 *** \nCidade: %s\n", Nome_da_Cidade2);
  printf("Estado: %s\n", Estado2);
  printf("Código da Carta: %s\n", Codigo_da_Carta2);
  printf("População: %d \n", Populacao2);
  printf("Área: %.2f km² \n", Area2);
  printf("PIB: %.2f bilhões de reais \n", PIB2);
  printf("Número de Pontos Turísticos: %d\n", numero_de_pontos_Turísticos2);
  printf("Dencidade Populacional da cidade 2: %2f hab/km² \n", (float) Populacao2 / Area2);
  printf("PIB per capita da cidade 2: %2f reais \n", (float) PIB2 / Populacao2);


return 0;
} 
