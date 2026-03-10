#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

// carta 1
    char estado1;
    char codigo1[4];
    char nome1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    //  carta 2 
    char estado2;
    char codigo2[4];
    char nome2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

  // Área para entrada de dados

  // carta 1
printf("Carta1: ");

printf("estado (ex A-Z): \n");
         scanf(" %c", &estado1);

printf("codigo (ex A01): ");
           scanf("%s", codigo1);

printf("nome do cidade: \n");
         scanf("%s", nome1);

printf("populacao de cidade: \n");
           scanf("%d", &populacao1);

printf("areie: \n");
         scanf("%f", &area1);

  printf("pib: \n");
        scanf("%f", &pib1);

  printf("pontos: \n");
           scanf("%d", &pontos1);

           // calculo carta 1 

         float tamanho = populacao1 / area1;
         float pibrenda = (pib1 * 1000000000) / populacao1;


           // carta 2
printf("Carta2: ");

printf("estado (ex A-Z): \n");
         scanf(" %c", &estado2);

printf("codigo (ex A01):\n ");
         scanf("%s", codigo2);

printf("nome do cidade: \n");
         scanf("%s", nome2);

printf("populacao de cidade: \n");
           scanf("%d", &populacao2);

printf("areie: \n");
         scanf("%f", &area2);

  printf("pib: \n");
        scanf("%f", &pib2);

  printf("pontos: \n");
           scanf("%d", &pontos2);

           // calculo carta 2

         float tamanho2 = populacao2 / area2;
         float pibrenda2 = (pib2 * 1000000000) / populacao2;

  // Área para exibição dos dados da cidade

  printf("\n\n===== DADOS CADASTRADOS =====\n");
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos2);

    // carta que venceu 

printf("\nDensidade Populacional Carta 1: %.2f\n", tamanho);
printf("PIB per Capita Carta 1: %.2f\n", pibrenda);

printf("\nDensidade Populacional Carta 2: %.2f\n", tamanho2);
printf("PIB per Capita Carta 2: %.2f\n", pibrenda2);

float super1 = populacao1 + area1 + pib1 + pontos1 + pibrenda + (1 / tamanho);
float super2 = populacao2 + area2 + pib2 + pontos2 + pibrenda2 + (1 / tamanho2);

printf("\n\nComparacao de Cartas:\n");

printf("Populacao: Carta 1 venceu (%d)\n", populacao1 > populacao2);
printf("Area: Carta 1 venceu (%d)\n", area1 > area2);
printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontos1 > pontos2);

printf("Densidade Populacional: Carta 1 venceu (%d)\n", tamanho < tamanho2);

printf("PIB per Capita: Carta 1 venceu (%d)\n", pibrenda > pibrenda2);

printf("Super Poder: Carta 1 venceu (%d)\n", super1 > super2);

 
return 0;
}
