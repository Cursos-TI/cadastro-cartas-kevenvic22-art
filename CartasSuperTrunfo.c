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
  unsigned long int Populacao; 
  float Area; 
  float PIB; 
  int numero_de_pontos_Turísticos;
  float Dencidade_Populacional;
  float PIB_per_Capito;
  float Super_Poder;


  //Carta(2)
  char Estado2[3]; 
  char Nome_da_Cidade2[20];
  char Codigo_da_Carta2[5]; 
  unsigned long int Populacao2; /* O número de habitantes da cidade */
  float Area2; /* A área da cidade em km² */
  float PIB2; /* O produto interno bruto da cidade */
  int numero_de_pontos_Turísticos2; /* O número de pontos turísticos da cidade*/
  float Dencidade_Populacional2;
  float PIB_per_Capito2; 
  float Super_Poder2;


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
    scanf("%lu", &Populacao);
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
  printf("( O número de habitantes da cidade ) \n Digite a população da cidade 2:\n");
   fflush(stdout);
    scanf("%lu", &Populacao2);
  printf("Digite a área da cidade 2 (em km²):\n");
   fflush(stdout);
    scanf("%f", &Area2);
  printf("(O produto interno bruto da cidade) \n Digite o PIB da cidade 2:\n");
   fflush(stdout);
    scanf("%f", &PIB2);
  printf("Digite o número de pontos turísticos da cidade 2:\n");
   fflush(stdout);
    scanf("%d", &numero_de_pontos_Turísticos2); 

  // Área para cálculos Densidade Populacional e PIB per capita 
  Dencidade_Populacional = (float) Populacao / Area;
   PIB_per_Capito = (float) PIB / Populacao;
  Dencidade_Populacional2 = (float)Populacao2 / Area2;
   PIB_per_Capito2 = (float) PIB2 / Populacao2;

   // Cálculo do Super Poder
    Super_Poder = ( (Populacao + Area + PIB + numero_de_pontos_Turísticos + PIB_per_Capito) + (1/Dencidade_Populacional));
    Super_Poder2 = ( (Populacao2 + Area2 + PIB2 + numero_de_pontos_Turísticos2 + PIB_per_Capito2) + (1/Dencidade_Populacional2));
   
   // cálculodo das comparações entre as cartas
   int resultadoPopulacao = Populacao > Populacao2;
   int resultadoArea = Area > Area2;
   int resultadoPIB = PIB > PIB2;
   int resultadoPontosTuristicos = numero_de_pontos_Turísticos > numero_de_pontos_Turísticos2;
   int resultadoDensidade = Dencidade_Populacional > Dencidade_Populacional2;
   int resultadoPIBperCapita = PIB_per_Capito > PIB_per_Capito2;
   int resultadoSuperPoder = Super_Poder > Super_Poder2;

  // Área para exibição dos dados da cartas

  printf("\n *** Carta 1 *** \nCidade: %s\n", Nome_da_Cidade);
  printf("Estado: %s\n", Estado);
  printf("Código da Carta: %s\n", Codigo_da_Carta);
  printf("População: %lu \n", Populacao);
  printf("Área: %.2f km²\n", Area);
  printf("PIB: %.2f bilhões de reais \n", PIB);
  printf("Número de Pontos Turísticos: %d\n", numero_de_pontos_Turísticos);
  printf("Dencidade Populacional da cidade 1: %.2f hab/km²\n", Dencidade_Populacional);
  printf("PIB per capita da cidade 1: %.2f reais \n", PIB_per_Capito);
  
  printf("\n *** Carta 2 *** \nCidade: %s\n", Nome_da_Cidade2);
  printf("Estado: %s\n", Estado2);
  printf("Código da Carta: %s\n", Codigo_da_Carta2);
  printf("População: %lu \n", Populacao2);
  printf("Área: %.2f km² \n", Area2);
  printf("PIB: %.2f bilhões de reais \n", PIB2);
  printf("Número de Pontos Turísticos: %d\n", numero_de_pontos_Turísticos2);
  printf("Dencidade Populacional da cidade 2: %2f hab/km² \n",Dencidade_Populacional2);
  printf("PIB per capita da cidade 2: %.2f reais \n", PIB_per_Capito2);

  // comparações entre as cartas
  printf("\n **** Comparações entre as cartas **** \n");
  printf("População: Carta %d venceu (%d)\n", resultadoPopulacao ? 1 : 2, resultadoPopulacao);
  printf("Área: Carta %d venceu (%d)\n", resultadoArea ? 1 : 2, resultadoArea);
  printf("PIB: Carta %d venceu (%d)\n", resultadoPIB ? 1 : 2, resultadoPIB);
  printf("Número de Pontos Turísticos carta %d venceu (%d)\n", resultadoPontosTuristicos ? 1 : 2, resultadoPontosTuristicos);
  printf("Densidade Populacional: Carta %d venceu (%d)\n", resultadoDensidade ? 1 : 2, resultadoDensidade);
  printf("PIB per capita: Carta %d venceu (%d)\n", resultadoPIBperCapita ? 1 : 2, resultadoPIBperCapita);
  printf("Super Poder: Carta %d venceu (%d)\n", resultadoSuperPoder ? 1 : 2, resultadoSuperPoder);
  
return 0;
} 
